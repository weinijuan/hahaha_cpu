always_comb begin
    if (ex_csrmsgout.is_exc) begin
        mem_badvaddr = ex_csrmsgout.badvaddr;
    end
    else if (ex_data_out.tlbctrl.is_cacop & (ex_data_out.tlbctrl.cacop_code==2'b10) | access_ex) begin
        mem_badvaddr = memaddr_ex; 
    end
    else begin
        mem_badvaddr = ex_csrmsgout.badvaddr;
    end
end

assign mem_exsubcode = (ex_data_out.tlbctrl.is_cacop & (ex_data_out.tlbctrl.cacop_code==2'b10) | access_ex) 
                        & memaddr_is_usetlb
                        & memaddr_ex[31];

assign mem_is_exc = ex_csrmsgout.is_exc | 
                    (ex_data_out.tlbctrl.is_cacop & (ex_data_out.tlbctrl.cacop_code==2'b10) | access_ex) ; // 这里可能有问题


always_comb begin
        if(ex_csrmsgout.is_exc)begin
                mem_excode = ex_csrmsgout.excode;
        end
        else if(ex_data_out.tlbctrl.is_cacop & (ex_data_out.tlbctrl.cacop_code==2'b10) | access_ex)begin
            if(~memaddr_is_dmw&(memaddr_ex[1:0]!='0&size_mem==2'd2||memaddr_ex[0]!='0&size_mem==2'd1))begin
                mem_excode = ALE;
            end
            else if(memaddr_is_usetlb)begin
                if(memaddr_tlb_ne)begin
                    mem_excode = TLBR;
                end 
                else if(~memaddr_tlb_phytranitem.V)begin
                    if(ex_data_out.tlbctrl.is_cacop&(ex_data_out.tlbctrl.cacop_code==2'b10))begin
                        mem_excode = PIL; 
                    end
                    else begin
                        if(memWriteEn_ex)begin
                            mem_excode = PIS;
                        end
                        else if(memRead_ex)begin
                            mem_excode = PIL;
                        end
                        else begin
                            mem_excode = 0;//never happen
                        end
                    end
                    end 
                else if(plv>memaddr_tlb_phytranitem.PLV)begin
                    mem_excode = PPI;
                end 
                else if(memWriteEn_ex&&memaddr_tlb_phytranitem.D==1'b0)begin
                    mem_excode = PME;
                end 
                else if(memaddr_ex[31])begin
                    mem_excode = ADEF_ADEM;
                end 
                else begin 
                    mem_excode = ex_csrmsgout.excode;
                end
            end
            else begin
                mem_excode = ex_csrmsgout.excode;
            end
        end
        else begin
            mem_excode = ex_csrmsgout.excode;
        end
end





    

always_comb begin
        if(ex_csrmsgout.is_exc)begin
                mem_badvaddr = ex_csrmsgout.badvaddr;
                mem_excode = ex_csrmsgout.excode;
                mem_exsubcode = 1'b0;
                mem_is_exc = 1'b1;
        end
        else if(ex_data_out.tlbctrl.is_cacop & (ex_data_out.tlbctrl.cacop_code==2'b10) | access_ex)begin
            if(~memaddr_is_dmw&(memaddr_ex[1:0]!='0&size_mem==2'd2||memaddr_ex[0]!='0&size_mem==2'd1))begin
                mem_excode = ALE;
                mem_badvaddr = memaddr_ex;
                mem_exsubcode = 1'b0;
                mem_is_exc = 1'b1;
            end
            else if(memaddr_is_usetlb)begin
                if(memaddr_tlb_ne)begin
                mem_is_exc = 1'b1;
                mem_excode = TLBR;
                mem_exsubcode = 1'b0;
                mem_badvaddr = memaddr_ex;
                end 
                else if(~memaddr_tlb_phytranitem.V)begin
                    mem_is_exc = 1'b1;
                    mem_badvaddr = memaddr_ex;
                    mem_exsubcode = 1'b0;
                    if(ex_data_out.tlbctrl.is_cacop&(ex_data_out.tlbctrl.cacop_code==2'b10))begin
                        mem_excode = PIL; 
                    end
                    else begin
                        if(memWriteEn_ex)begin
                            mem_excode = PIS;
                        end
                        else if(memRead_ex)begin
                            mem_excode = PIL;
                        end
                        else begin
                            mem_excode = 0;//never happen
                        end
                    end
                    end 
                else if(plv>memaddr_tlb_phytranitem.PLV)begin
                    mem_is_exc = 1'b1;
                    mem_excode = PPI;
                    mem_exsubcode = 1'b0;
                    mem_badvaddr = memaddr_ex;
                end 
                else if(memWriteEn_ex&&memaddr_tlb_phytranitem.D==1'b0)begin
                    mem_is_exc = 1'b1;
                    mem_excode = PME;
                    mem_exsubcode = 1'b0;
                    mem_badvaddr = memaddr_ex;
                end 
                else if(memaddr_ex[31])begin
                    mem_excode = ADEF_ADEM;
                    mem_badvaddr = memaddr_ex;
                    mem_exsubcode = 1'b1;
                    mem_is_exc = 1'b1;
                end 
                else begin 
                    mem_excode = ex_csrmsgout.excode;
                    mem_is_exc = 1'b0;
                    mem_exsubcode = 1'b0;
                    mem_badvaddr = ex_csrmsgout.badvaddr;
                end
            end
            else begin
                mem_excode = ex_csrmsgout.excode;
                mem_is_exc = 1'b0;
                mem_exsubcode = 1'b0;
                mem_badvaddr = ex_csrmsgout.badvaddr;
            end
        end
        else begin
            mem_excode = ex_csrmsgout.excode;
            mem_badvaddr = ex_csrmsgout.badvaddr;
            mem_exsubcode = 1'b0;
            mem_is_exc = 1'b0;
        end
    end
    
