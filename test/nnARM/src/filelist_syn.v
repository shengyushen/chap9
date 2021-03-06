//definitions
`include "/nnARM/src/target/dc_smic/Def_target.v"
//`include "/nnARM/src/sys_timescale.v"
`include "/nnARM/src/Def_StructureParameter.v"
`include "/nnARM/src/Def_psr.v"
`include "/nnARM/src/Def_ALUType.v"
`include "/nnARM/src/Def_ARMALU.v"
`include "/nnARM/src/Def_BarrelShift.v"
`include "/nnARM/src/Def_ConditionField.v"
`include "/nnARM/src/Def_Mode.v"
`include "/nnARM/src/Def_Exception.v"
`include "/nnARM/src/Def_Decoder.v"
`include "/nnARM/src/Def_RegisterFile.v"
`include "/nnARM/src/Def_mem.v"
//peripparial parameter
`include "/nnARM/src/def_led.v"
`include "/nnARM/src/mmu/Def_DMMU.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_defines.v"
`include "/nnARM/src/MemoryControler_real/src/mc_defines.inc"
//`include "/nnARM/src/generic_fifos/rtl/verilog/timescale.v"

//top 
`include "/nnARM/src/nnARM_top.v"
`include "/nnARM/src/nnARM.v"
`include "/nnARM/src/nnARMCore.v"

//pipeline
`include "/nnARM/src/CanGoGen.v"
`include "/nnARM/src/IF.v"
`include "/nnARM/src/Decoder_2stage.v"
`include "/nnARM/src/Decoder_ARM_stage1.v"
`include "/nnARM/src/Decoder_ARM_stage2.v"
`include "/nnARM/src/ALUComb.v"
`include "/nnARM/src/ALUShell.v"
`include "/nnARM/src/MEM.V"
//dont seem to be used in dc_smic
//`include "/nnARM/src/MEM_pipe_mul.v"
`include "/nnARM/src/WriteBack.v"
`include "/nnARM/src/psr.v"
`include "/nnARM/src/PSR_Fresh.v"
`include "/nnARM/src/InterruptPriority.v"
`include "/nnARM/src/translate.v"
`include "/nnARM/src/EpromSignalHang.v"
`include "/nnARM/src/RegisterFile/syn_read/RegisterFile.v"

//alu units
`include "/nnARM/prim/indep/BarrelShift/roleftonly/BarrelShift.v"
`include "/nnARM/prim/indep/BarrelShift/roleftonly/rol_hand/rol.v"
`include "/nnARM/prim/indep/BarrelShift/roleftonly/lslrom.v"
`include "/nnARM/prim/indep/adder/lpm/ThirtyTwoAddSub.v"
`include "/nnARM/prim/indep/mul16/mul16.v"
//`include "/nnARM/prim/indep/mul16_hand/mul16.v"

`include "/nnARM/src/gpio/GPIO.v"
`include "/nnARM/src/mmu/DTlb/DTLBTag.v"
`include "/nnARM/src/mmu/DTlb/DTLBMem.v"
`include "/nnARM/src/mmu/DCache/DCacheTag.v"
`include "/nnARM/src/mmu/DCache/DCacheMem.v"


`include "/nnARM/src/coprocessorset/cop15_mmu/cop15_mmu.v"
`include "/nnARM/src/coprocessorset/coprocessorset.v"

`include "/nnARM/src/coprocessorset/cop14_debug/Def_cop14.v"
`include "/nnARM/src/coprocessorset/cop14_debug/cop14_debug.v"
`include "/nnARM/src/coprocessorset/CoprocessorBusSelector.v"

`include "/nnARM/src/wb_matrix.v"
`include "/nnARM/src/wb_dma_top_warp.v"
`include "/nnARM/src/wb_pathcut.v"
`include "/nnARM/src/wb_interface/I_Bus2Core_mmu.v"
`include "/nnARM/src/wb_interface/Bus2Core_mmu.v"
`include "/nnARM/src/wb_interface/D_Bus2Core_mmu.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_arb.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_top.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_rf.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_pri_enc.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_pri_dec.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_msel.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_slave_if.v"
`include "/nnARM/src/conmax/wb_conmax/rtl/verilog/wb_conmax_master_if.v"

`include "/nnARM/src/dma/rtl/verilog/wb_dma_defines.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_ch_sel.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_wb_mast.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_de.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_top.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_ch_arb.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_ch_rf.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_wb_slv.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_ch_pri_enc.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_pri_enc_sub.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_rf.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_inc30r.v"
`include "/nnARM/src/dma/rtl/verilog/wb_dma_wb_if.v"

`include "/nnARM/src/ptc/ptc_defines.v"
`include "/nnARM/src/ptc/ptc_top.v"

`include "/nnARM/src/ClkDomConv/Def_ClkDomConv.v"
`include "/nnARM/src/ClkDomConv/ClkDomConv.v"

`include "/nnARM/src/uart16550/src/timescale.v"
`include "/nnARM/src/uart16550/src/uart_defines.v"
`include "/nnARM/src/uart16550/src/uart_top.v"
`include "/nnARM/src/uart16550/src/uart_debug_if.v"
`include "/nnARM/src/uart16550/src/uart_fifo.v"
`include "/nnARM/src/uart16550/src/uart_receiver.v"
`include "/nnARM/src/uart16550/src/uart_transmitter.v"
`include "/nnARM/src/uart16550/src/uart_regs.v"
`include "/nnARM/src/uart16550/src/uart_wb.v"

`include "/nnARM/src/pic/Def_pic.v"
`include "/nnARM/src/pic/pic_wrapper.v"

`include "/nnARM/src/word2byteaddr/word2byteaddr.v"
`include "/nnARM/src/MemoryController_WB_Internal/MemoryController_WB_Internal.v"

`include "/nnARM/src/MemoryControler_real/src/mc_top.v"
`include "/nnARM/src/MemoryControler_real/src/mc_refresh.v"
`include "/nnARM/src/MemoryControler_real/src/mc_addr_mux.v"
`include "/nnARM/src/MemoryControler_real/src/mc_chst.v"
`include "/nnARM/src/MemoryControler_real/src/mc_flash_top.v"
`include "/nnARM/src/MemoryControler_real/src/mc_led_top.v"
`include "/nnARM/src/MemoryControler_real/src/mc_sdram_top.v"
`include "/nnARM/src/MemoryControler_real/src/mc_ssram_top.v"

//tool related files
`include "/home/syshen/EDA_tools/syn_2011/dw/dw01/src_ver/DW01_addsub.v"
`include "/home/syshen/EDA_tools/syn_2011/dw/dw02/src_ver/DW02_multp.v"
`include "/nnARM/src/MemoryController_WB_Internal/romasic/bootrom.v"
`include "/nnARM/src/generic_fifos/rtl/verilog/generic_fifo_dc_dw72_aw5.v"
`include "/nnARM/src/generic_fifos/rtl/verilog/generic_fifo_dc_dw32_aw5.v"

//process related files
`include "/nnARM/src/RegisterFile/syn_read/SMIC/SyncRam.v"
`include "/nnARM/src/mmu/mem/RamParam_16_6/SMIC/RamParam_16_6.v"
`include "/nnARM/src/mmu/mem/RamParam_20_6/SMIC/RamParam_20_6.v"
`include "/nnARM/src/mmu/mem/RamParam_32_5/SMIC/RamParam_32_5.v"
`include "/nnARM/src/mmu/mem/RamParam_32_6/SMIC/RamParam_32_6.v"
`include "/nnARM/src/mmu/mem/RamParam_8_10/SMIC/RamParam_8_10.v"
`include "/nnARM/src/generic_memories/rtl/verilog/gdm_smic18.v"
