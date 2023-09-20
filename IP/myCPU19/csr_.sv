/*
add special condition for badv
modify adef justify,add 1fff_ffff_ffff
modify readygo justify,add xxcsrmsgout.is_exc to justify condition
delete readygo justify to check other errors;
checkpoint exception is ok\
modify fetch_again
because tlbinstr next instr must be a pc+4,
so modify jump address to pc+4 and pipeline fetch clear 

*/
`include "cpu.svh"
 import cpuDefine::*;

module csr_(  //�������exception
    input                                   clk,
    input                                   reset,
    //    for csr instruction
    input [13:0]csrnum_r,
    input [13:0]csrnum_w,
    input csrwe,
    input csrme,
    input [31:0] musk,
    input [31:0] csrin,
    output reg [31:0] csrout,

//    for exception to if

    output reg [31:0]exaddr,
    output reg exlike,//==1ʱpcȡexaddr

//    for exception from wb
    input [11:0]inter,
    input is_ertn,
    input is_fetch_again,
    input is_idle,
    input [5:0]excode,
    input [8:0]esubcode,
    input[31:0] badvaddr,
    input[31:0] csr_pc,
    input is_exc,

//    for tlb instr

    //search1  
    input                              s1e,
    input         [TLBNUMSIZE-1:0] s1_index, 
    input                              s1_ne,
    //read
    output logic        [TLBNUMSIZE-1:0] r_index,
    input                              re,
    input         [               5:0] r_ps,
    input         [               9:0] r_asid,
    input                              r_ne,
    input PhytranItem                       r_phytran0,
    input PhytranItem                       r_phytran1,
    input                              r_g,
    input          [              18:0] r_vppn,
    //write
    output logic   [TLBNUMSIZE-1:0] w_index,
    output logic   [               5:0] w_ps,
    output logic                           w_ne,
    //output logic     [               9:0] w_asid,
    output logic         [              18:0] w_vppn,
    output logic                              w_g,
    output PhytranItem                       w_phytran0,
    output PhytranItem                       w_phytran1,
    //flush

//    for csr output

    output logic  [1:0]plv,
    output logic  [9:0]asid,
    output logic  da,
    output logic  pg,
    output logic  [11:0]lie,
    output logic  [11:0]is,
    output logic  ie,
//    for rdcnt
    output logic  [31:0]counter_higher,
    output logic  [31:0]counter_lower,
    output logic  [31:0]tid,
 
    output logic [1:0] mat_i,
    output logic [1:0] mat_d,
    
    output logic llbit,
    input logic is_llw,
    input logic is_scw
); 

    CSR csr;
    reg inter_ti;
    //reg is_exc_tmp;//�����źű���һ�ģ���һ�Ĳ����ж� ��ΪEXCODE��Ҫһ�Ľ���װ��
    //reg is_ertn_tmp;
    reg[63:0]stable_counter;
    reg is_idle_csr;
    reg[31:0]pc_tmp;
    always@(posedge clk) begin//��ʼ���Լ���̬��ֵ
        if(reset)begin
        is_idle_csr<=1'b0;
        pc_tmp<=0;
        end
        else if(is_idle)begin 
        is_idle_csr<=1'b1;
        pc_tmp<=csr_pc;
        end 
       
        llbit<=csr.LLBCTL[0];
        exlike<=(~reset)&(is_ertn|is_exc|is_fetch_again);
        plv <= csr.CRMD[1:0];
        da <= csr.CRMD[3]; 
        pg <= csr.CRMD[4];
        lie <= {csr.ECFG[12:11],csr.ECFG[9:0]};
        asid <= csr.ASID[9:0];
        //because csr couldn't judge if there is a exception or interrupt, so it need to throw to outer.        
        is <= {csr.ESTAT[12:11],csr.ESTAT[9:0]};
        ie <= csr.CRMD[2];
        mat_i<=csr.CRMD[6:5];
        mat_d<=csr.CRMD[8:7];
        tid<=csr.TID[31:0];
        
        {csr.ESTAT[12:11],csr.ESTAT[9:2]} <= {inter[11],inter[10]|inter_ti,inter[9:2]};
    end
    //tlbwrite&treadindex
    always_comb begin
        r_index = csr.TLBIDX[TLBNUMSIZE-1:0];
        w_index = csr.TLBIDX[TLBNUMSIZE-1:0];
        w_ps = csr.TLBIDX[29:24];
        w_ne = csr.TLBIDX[31];
        w_vppn = csr.TLBEHI[31:13];
        w_g = csr.TLBELO0[6]&csr.TLBELO1[6];
        w_phytran0 = {csr.TLBELO0[0],csr.TLBELO0[1],csr.TLBELO0[5:4],csr.TLBELO0[3:2],csr.TLBELO0[27:8]};
        w_phytran1 = {csr.TLBELO1[0],csr.TLBELO1[1],csr.TLBELO1[5:4],csr.TLBELO1[3:2],csr.TLBELO1[27:8]};
        counter_higher = stable_counter[63:32];
        counter_lower = stable_counter[31:0];
    end
    
    
    wire [31:0]musk_rel = csrme?musk:'1;
    always_ff@(posedge clk)begin//csrָ��д
        if(reset)begin
            csr.CRMD[2:0] <= 3'b0;//ֻ
            csr.CRMD[3] <= 1'b1;
            csr.CRMD[31:4] <= 28'b0;
            csr.PRMD<=0;csr.ECFG<=0;
            csr.ESTAT[1:0]<=2'b0;
            csr.ERA<=0;
            csr.BADV<=0;
            csr.EENTRY<=0;
            csr.TLBIDX<=0;
            csr.TLBEHI<=0;
            csr.TLBELO0<=0;
            csr.TLBELO1<=0;
            csr.ASID<=32'b0000_0000_0000_1010_0000_0000_0000_0000;
            csr.PGDL<=0;
            csr.PGDH<=0;
            csr.PGD<=0;
            csr.SAVE0<=0;
            csr.SAVE1<=0;
            csr.SAVE2<=0;
            csr.SAVE3<=0;
            csr.TID<=0;
            csr.TCFG<=0;
            csr.TLBRENTRY<=0;
            csr.LLBCTL<=0;
            //csr.DMW0<=0;/////必须初始化，否则addrtrans将产生X
            //csr.DMW1<=0;
        end 
        else if(is_exc)begin
        //{is_excPGD_tmp,is_ertn_tmp}<=2'b10;
        csr.ESTAT[21:16]<=excode;
        csr.ESTAT[30:22]<=esubcode;
        csr.PRMD[2:0] <= csr.CRMD[2:0];
            if(is_idle_csr)csr.ERA<= pc_tmp+4;
            else csr.ERA <= csr_pc;
        
            if(excode==ALE|excode==TLBR|excode==ADEF_ADEM|excode==PIL|excode==PIS|excode==PIF|excode==PME|excode==PPI)csr.BADV <= badvaddr;
            else csr.BADV<=csr.BADV;
        
            if(excode==TLBR|excode==PIL|excode==PIS|excode==PIF|excode==PPI|excode==PME)csr.TLBEHI[31:13]<=badvaddr[31:13];
            else csr.TLBEHI <= csr.TLBEHI;
        
            if(excode==TLBR)csr.CRMD[4:0]<=5'b01000;
            else csr.CRMD[2:0] <= 3'b000;
        end
        else if(csrwe)begin
        case(csrnum_w)
        CRMD:begin
            if(csrin[4]&musk_rel[4])begin
            csr.CRMD<=32'b0000_0000_0000_0000_0000_0000_0010_0000|(csr.CRMD&(~CRMD_WM))|(((csrin&musk_rel)|((~musk_rel)&csr.CRMD))&CRMD_WM);
            end else begin
            csr.CRMD<=(csr.CRMD&(~CRMD_WM))|((csrin&musk_rel|((~musk_rel)&csr.CRMD))&CRMD_WM);
            end
        end
        PRMD: csr.PRMD<=(csr.PRMD&(~PRMD_WM))|((csrin&musk_rel|((~musk_rel)&csr.PRMD))&PRMD_WM);
        ECFG: csr.ECFG<=(csr.ECFG&(~ECFG_WM))|((csrin&musk_rel|((~musk_rel)&csr.ECFG))&ECFG_WM); 
        ESTAT:csr.ESTAT[1:0]<=csrin[1:0]&musk_rel[1:0];
        ERA:csr.ERA<=(csr.ERA&(~ERA_WM))|((csrin&musk_rel|((~musk_rel)&csr.ERA))&ERA_WM);
        BADV:csr.BADV<=(csr.BADV&(~BADV_WM))|((csrin&musk_rel|((~musk_rel)&csr.BADV))&BADV_WM);
        EENTRY:csr.EENTRY<=(csr.EENTRY&(~EENTRY_WM))|((csrin&musk_rel|((~musk_rel)&csr.EENTRY))&EENTRY_WM);
        TLBIDX: csr.TLBIDX<=(csr.TLBIDX&(~TLBIDX_WM))|((csrin&musk_rel|((~musk_rel)&csr.TLBIDX))&TLBIDX_WM);
        TLBEHI: csr.TLBEHI<=(csr.TLBEHI&(~TLBEHI_WM))|((csrin&musk_rel|((~musk_rel)&csr.TLBEHI))&TLBEHI_WM);
        TLBELO0:csr.TLBELO0<=(csr.TLBELO0&(~TLBELO0_WM))|((csrin&musk_rel|((~musk_rel)&csr.TLBELO0))&TLBELO0_WM);
        TLBELO1:csr.TLBELO1<=(csr.TLBELO1&(~TLBELO1_WM))|((csrin&musk_rel|((~musk_rel)&csr.TLBELO1))&TLBELO1_WM);
        ASID:csr.ASID<=(csr.ASID&(~ASID_WM))|((csrin&musk_rel|((~musk_rel)&csr.ASID))&ASID_WM);
        PGDL:csr.PGDL<=(csr.PGDL&(~PGDL_WM))|((csrin&musk_rel|((~musk_rel)&csr.PGDL))&PGDL_WM);
        PGDH:csr.PGDH<=(csr.PGDH&(~PGDH_WM))|((csrin&musk_rel|((~musk_rel)&csr.PGDH))&PGDH_WM);
        PGD:csr.PGD<=(csr.PGD&(~PGD_WM))|((csrin&musk_rel|((~musk_rel)&csr.PGD))&PGD_WM);
        SAVE0:csr.SAVE0<=(csr.SAVE0&(~SAVE0_WM))|((csrin&musk_rel|((~musk_rel)&csr.SAVE0))&SAVE0_WM);
        SAVE1:csr.SAVE1<=(csr.SAVE1&(~SAVE1_WM))|((csrin&musk_rel|((~musk_rel)&csr.SAVE1))&SAVE1_WM);
        SAVE2:csr.SAVE2<=(csr.SAVE2&(~SAVE2_WM))|((csrin&musk_rel|((~musk_rel)&csr.SAVE2))&SAVE2_WM);
        SAVE3:csr.SAVE3<=(csr.SAVE3&(~SAVE3_WM))|((csrin&musk_rel|((~musk_rel)&csr.SAVE3))&SAVE3_WM);
        TID :csr.TID<=(csr.TID&(~TID_WM))|((csrin&musk_rel|((~musk_rel)&csr.TID))&TID_WM);
        TCFG:csr.TCFG<=(csr.TCFG&(~TCFG_WM))|((csrin&musk_rel|((~musk_rel)&csr.TCFG))&TCFG_WM);
        //TICLR: csr.TICLR[0]<=musk_rel[0];
        TLBRENTRY:csr.TLBRENTRY<=(csr.TLBRENTRY&(~TLBRENTRY_WM))|((csrin&musk_rel|((~musk_rel)&csr.TLBRENTRY))&TLBRENTRY_WM);
        DMW0:csr.DMW0<=csrin&musk_rel;
        DMW1:csr.DMW1<=csrin&musk_rel;
        LLBCTL:begin 
        if(csrin[1]&musk_rel[1])
        csr.LLBCTL<=32'b1111_1111_1111_1111_1111_1111_1111_1110&(csr.LLBCTL&(~LLBCTL_WM))|(((csrin&musk_rel)|((~musk_rel)&csr.LLBCTL))&LLBCTL_WM);
        else
        csr.LLBCTL<=(csr.LLBCTL&(~LLBCTL_WM))|((csrin&musk_rel|((~musk_rel)&csr.LLBCTL))&LLBCTL_WM);
        end
        default:;
        endcase
        end
        else if(is_ertn)begin//�������
        csr.CRMD[2:0] <= csr.PRMD[2:0];
        if(csr.LLBCTL[2])csr.LLBCTL[2]<=1'b0;
        else csr.LLBCTL[0]<=1'b0;
        if(csr.ESTAT[21:16]==TLBR)csr.CRMD[4:3]<=2'b10;
       end
        else if(re)begin
        csr.TLBEHI[31:13] <= r_vppn;
        csr.TLBIDX[29:24] <= r_ps;
        csr.TLBIDX[31]<=r_ne;
        csr.TLBELO0[27:0] <= {r_phytran0.PPN,1'b0,r_g|csr.TLBELO0[6],r_phytran0.MAT,r_phytran0.PLV,r_phytran0.D,r_phytran0.V};
        csr.TLBELO1[27:0] <= {r_phytran1.PPN,1'b0,r_g|csr.TLBELO1[6],r_phytran1.MAT,r_phytran1.PLV,r_phytran1.D,r_phytran1.V};
        csr.ASID[9:0] <= r_asid;
        end
        else if(s1e)begin
        csr.TLBIDX[TLBNUMSIZE-1:0] <= s1_index;
        csr.TLBIDX[31] <= s1_ne;
        end
        else if(is_llw)begin
        csr.LLBCTL[0]<=1'b1;
        end else if(is_scw)begin
        csr.LLBCTL[0]<=1'b0;
        end
        
    end
    
    
    always_comb begin//csrָ���
    case(csrnum_r)
    CRMD: csrout = csr.CRMD&CRMD_RM;
    PRMD:  csrout = csr.PRMD&PRMD_RM;
    ECFG: csrout = csr.ECFG&ECFG_RM;
    ESTAT: csrout = csr.ESTAT&ESTAT_RM;
    ERA: csrout = csr.ERA&ERA_RM;
    BADV:csrout = csr.BADV&BADV_RM;
    EENTRY: csrout = csr.EENTRY&EENTRY_RM;
    TLBIDX: csrout = csr.TLBIDX&TLBIDX_RM;
    TLBEHI: csrout = csr.TLBEHI&TLBEHI_RM;
    TLBELO0:csrout =  csr.TLBELO0&TLBELO0_RM;
    TLBELO1:csrout = csr.TLBELO1&TLBELO1_RM;
    ASID:csrout = csr.ASID&ASID_RM;
    PGDL:csrout =  csr.PGDL&PGDL_RM;
    PGDH:csrout = csr.PGDH&PGDH_RM;
    PGD:csrout  = csr.PGD&PGD_RM;
    SAVE0:csrout = csr.SAVE0&SAVE0_RM;
    SAVE1:csrout = csr.SAVE1&SAVE1_RM;
    SAVE2:csrout = csr.SAVE2&SAVE2_RM;
    SAVE3:csrout = csr.SAVE3&SAVE3_RM;
    TID :csrout = csr.TID&TID_RM;
    TCFG:csrout = csr.TCFG&TCFG_RM;
    TVAL:csrout = csr.TVAL&TVAL_RM;
    TICLR:csrout = csr.TICLR&TICLR_RM;
    TLBRENTRY:csrout = csr.TLBRENTRY&TLBRENTRY_RM;
    DMW0:csrout = csr.DMW0&DMW0_RM;
    DMW1:csrout = csr.DMW1&DMW1_RM;
    LLBCTL:csrout = csr.LLBCTL&LLBCTL_RM;
    default:csrout = 32'b0;
       endcase
    end
    //��ģ�������ַ 
    always_ff@(posedge clk) begin
        if(excode==TLBR)exaddr <= csr.TLBRENTRY;
        else if(is_ertn)exaddr <= csr.ERA;
        else if(is_fetch_again)exaddr <= csr_pc+4;
        else if(is_exc)exaddr <= csr.EENTRY;
        else exaddr<=exaddr;
    end
       
    always_ff@(posedge clk)begin   //��ʱ��ģ�� 
        if(reset)begin
        stable_counter<=0;
        end else begin
        stable_counter<=stable_counter+1'b1;
        end
        if(reset)begin
            csr.TVAL<=0;
            csr.TICLR<=0;
            inter_ti<=1'b0;
        end 
        else if(csrwe&&csrnum_w==TICLR)begin
            csr.TICLR[0]<=musk_rel[0];
        end
        else if(csr.TICLR[0]&inter_ti)begin
            inter_ti<=1'b0;
            csr.TICLR[0]<=1'b0;
        end
        else if(csr.TCFG[0])begin
            if (csr.TCFG[1])
                begin
                    csr.TVAL[TIMESIZE-1:0] <= csr.TVAL[TIMESIZE-1:0]-1;
                    if(csr.TVAL[TIMESIZE-1:0]==12'b0000_0000_0001)
                    begin 
                        if(csr.TICLR[0])
                        csr.TICLR[0]<=1'b0;
                        else
                        inter_ti <= 1'b1;
                        
                        csr.TVAL[TIMESIZE-1:0]<= {csr.TCFG[TIMESIZE-1:2],2'b0};
                    end
                end
            else  begin
                    csr.TVAL[TIMESIZE-1:0] <= csr.TVAL[TIMESIZE-1:0]-1;
                    if(csr.TVAL[TIMESIZE-1:0]==12'b0000_0000_0001)
                    begin
                        if(csr.TICLR[0])
                        csr.TICLR[0]<=1'b0;
                        else
                        inter_ti <= 1'b1;
                        
                        //csr.TCFG[0]<=1'b0;
                    end
            end
        end
    end
endmodule