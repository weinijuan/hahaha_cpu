
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
    output logic     [               9:0] w_asid,
    output logic         [              18:0] w_vppn,
    output logic                              w_g,
    output PhytranItem                       w_phytran0,
    output PhytranItem                       w_phytran1,
    //flush
    output logic         [               9:0] f_asid,
    output logic         [              18:0] f_va,

//    for csr output

    output logic  [1:0]plv,
    output logic  [9:0]asid,
    output logic  da,
    output logic  pg,
    output logic  [11:0]lie,
    output logic  [11:0]is,
    output logic  ie);

    CSR csr;
    reg inter_ti;
    //reg is_exc_tmp;//�����źű���һ�ģ���һ�Ĳ����ж� ��ΪEXCODE��Ҫһ�Ľ���װ��
    //reg is_ertn_tmp;
    reg[31:0]pc_tmp;
    //reg[31:0]badvaddr_tmp;//Ҫ��һ�����ڣ���Ϊ��һ�����ڲ��ܴ���CSR
    
    
    always_ff@(posedge clk) begin//��ʼ���Լ���̬��ֵ
        if(reset)begin
            csr.CRMD[2:0] <= 3'b0;//ֻ��ֻ���Ͷ�д��ʼ�� ��0�ڷ���ʱ���⴦��
            csr.CRMD[3] <= 1'b1;
            csr.CRMD[31:4] <= 28'b0;
            csr.EUEN[3] <=1'b0;;
            csr.ESTAT[1:0] <=2'b00;
            csr.TCFG[0] <=1'b0;
            {csr.DMW0[3],csr.DMW0[0]}<= 2'b0;
            {csr.DMW1[3],csr.DMW1[0]}<= 2'b0;
            csr.CPUID <= 32'b0;
            csr.TID <=32'b0;
            csr.TCFG[0]<=1'b0;
            da<=1'b1;
            pg<=1'b0;
        end
        plv <= csr.CRMD[1:0];
        da <= csr.CRMD[3]; 
        pg <= csr.CRMD[4];
        lie <= {csr.ECFG[12:11],csr.ECFG[9:0]};
        //because csr couldn't judge if there is a exception or interrupt, so it need to throw to outer.        
        is <= {csr.ESTAT[12:11],csr.ECFG[9:0]};
        ie <= csr.CRMD[2];
        pc_tmp<=csr_pc;
        {csr.ESTAT[12:11],csr.ESTAT[9:2]} <= {inter[11],inter[10]|inter_ti,inter[9:2]};
    end
    always_ff@(posedge clk)begin//����
         //pc and virtaddr
        //pc_tmp<=csr_pc;
        //badvaddr_tmp<=badvaddr;
        //exception
        if(is_exc)begin
        //{is_exc_tmp,is_ertn_tmp}<=2'b10;
        csr.ESTAT[21:16]<=excode;
        csr.ESTAT[30:22]<=esubcode;
        end
        //else if(is_ertn)
        //{is_exc_tmp,is_ertn_tmp}<=2'b01;
        //else 
        //{is_exc_tmp,is_ertn_tmp}<=2'b00;
    end
    always_ff@(posedge clk)begin//TLBָ��
        //t_s1 tlbsrhָ��
        if(s1e)begin
        csr.TLBIDX[TLBNUMSIZE-1:0] <= s1_index;
        csr.TLBIDX[31] <= s1_ne;
        end
        //t_r  tlbreadָ��
        if(re)begin
        csr.TLBEHI[31:13] <= r_vppn;
        csr.TLBIDX[29:24] <= r_ps;
        csr.TLBIDX[31]<=re;
        csr.TLBELO0[27:0] <= {r_phytran0.PPN,1'b0,r_g|r_g,r_phytran0.MAT,r_phytran0.PLV,r_phytran0.D,r_phytran0.V};
        csr.TLBELO1[27:0] <= {r_phytran1.PPN,1'b0,r_g|r_g,r_phytran1.MAT,r_phytran1.PLV,r_phytran1.D,r_phytran1.V};
        csr.ASID[9:0] <= r_asid;
        end
    end
    //tlbwrite&treadindex
    always_comb begin
        r_index = csr.TLBIDX[TLBNUMSIZE-1:0];
        w_index = csr.TLBIDX[TLBNUMSIZE-1:0];
        w_ps = csr.TLBIDX[29:24];
        w_ne = csr.TLBIDX[31];
        w_asid = csr.ASID[9:0];
        w_vppn = csr.TLBEHI[31:13];
        w_g = csr.TLBELO0[6]&csr.TLBELO1[6];
        w_phytran0 = {csr.TLBELO0[27:8],csr.TLBELO0[3:2],csr.TLBELO0[5:4],csr.TLBELO0[1],csr.TLBELO0[0]};
        w_phytran1 = {csr.TLBELO1[27:8],csr.TLBELO1[3:2],csr.TLBELO1[5:4],csr.TLBELO1[1],csr.TLBELO1[0]};
        f_asid = csr.ASID[9:0];
        f_va = csr.TLBEHI[31:13];
    end
    
    
    wire [31:0]musk_rel = csrme?musk:'1;
    always_ff@(posedge clk)begin//csrָ��д
        if(csrwe)begin
        case(csrnum_w)
        CRMD: csr.CRMD<=(csr.CRMD&(~CRMD_WM))|((csrin&musk_rel|((~musk_rel)&csr.CRMD))&CRMD_WM);
        PRMD: csr.PRMD<=(csr.PRMD&(~PRMD_WM))|((csrin&musk_rel|((~musk_rel)&csr.PRMD))&PRMD_WM);
        ECFG: csr.ECFG<=(csr.ECFG&(~ECFG_WM))|((csrin&musk_rel|((~musk_rel)&csr.ECFG))&ECFG_WM); 
        ESTAT:csr.ESTAT<=(csr.ESTAT&(~ESTAT_WM))|((csrin&musk_rel|((~musk_rel)&csr.ESTAT))&ESTAT_WM);
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
        TICLR: csr.TICLR[0]<=musk_rel[0]|csr.TICLR[0];
        TLBRENTRY:csr.TLBRENTRY<=(csr.TLBRENTRY&(~TLBRENTRY_WM))|((csrin&musk_rel|((~musk_rel)&csr.TLBRENTRY))&TLBRENTRY_WM);
        DMW0:csr.DMW0<=(csr.DMW0&(~DMW0_WM))|((csrin&musk_rel|((~musk_rel)&csr.DMW0))&DMW0_WM);
        DMW1:csr.DMW1<=(csr.DMW1&(~DMW1_WM))|((csrin&musk_rel|((~musk_rel)&csr.DMW1))&DMW1_WM);
        default:;
    endcase
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
    default:csrout = 32'b0;
       endcase
    end
    //��ģ�������ַ 
    //assign exlike = is_exc_tmp|is_ertn_tmp;
    always_comb begin
        if(csr.ESTAT[21:16]==TLBR)exaddr = csr.TLBRENTRY;
        else if(is_ertn)exaddr = csr.ERA;
        else if(is_fetch_again)exaddr = pc_tmp;
        else exaddr = csr.EENTRY;
    end
   // assign exlike = is_ertn|is_exc|is_fetch_again;
    always_ff@(posedge clk) begin  //���⴦��
    exlike<=is_ertn|is_exc|is_fetch_again;
       if(is_exc)begin            
        csr.PRMD[2:0] <= csr.CRMD[2:0];
        csr.CRMD[2:0] <= 3'b0;
        csr.ERA <= csr_pc;
        csr.BADV <= badvaddr;
        if(excode==TLBR)begin
            csr.CRMD[4:3]<=2'b01;
        end
        end
       if(is_ertn)begin//�������
        csr.CRMD[2:0] <= csr.PRMD[2:0];
        if(excode==TLBR)begin
            csr.CRMD[4:3]<=2'b10;
        end
       end
    end

    always_ff@(posedge clk)begin   //��ʱ��ģ�� 
        if(csr.TICLR[0])inter_ti<=1'b0;
        if(csr.TCFG[0])begin
            csr.TVAL[TIMESIZE-1:0] <= csr.TVAL[TIMESIZE-1:0]-1;
            if(csr.TVAL[TIMESIZE-1:0]==0)
            begin 
            inter_ti <= 1'b1;
            if(csr.TCFG[1])csr.TVAL[TIMESIZE-1:0]<= {csr.TCFG[TIMESIZE-1:2],2'b0};
            else csr.TCFG[0]<=0;
            end
        end
    end
    
endmodule