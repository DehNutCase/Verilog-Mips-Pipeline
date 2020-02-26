`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:50:20 02/11/2020
// Design Name:   pipeline
// Module Name:   /home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/pipeline_test.v
// Project Name:  CSE401_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipeline
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pipeline_test();
	
	// IFETCH
	wire	[31:0]	IF_ID_instrout, IF_ID_npcout;
	reg				MEM_PCSrc;
	reg	[31:0]	EX_MEM_NPC, EX_MEM_PCSrc;

	
	
	I_FETCH IFETCH1	(.EX_MEM_PCSrc(MEM_PCSrc),
						.EX_MEM_NPC(EX_MEM_NPC),
						.IF_ID_INSTR(IF_ID_instrout),
						.IF_ID_NPC(IF_ID_npcout));
						 
   initial begin
	   EX_MEM_NPC = 0;
		EX_MEM_PCSrc = 0;
		#24;
		$stop;	
   end
	
   // IDECODE
	wire	[4:0]		MEM_WB_rd;
	wire				MEM_WB_regwrite;
	wire	[31:0]	WB_mux5_writedata;	
	wire	[1:0]		wb_ctlout;
	wire	[2:0]		m_ctlout;
	wire				regdst, alusrc;
	wire	[1:0]		aluop; 
	wire	[31:0]	npcout, rdata1out, rdata2out, s_extendout;
	wire	[4:0]		instrout_2016, instrout_1511;

	I_DECODE IDECODE2	(.IF_ID_instrout(IF_ID_instrout),
							.IF_ID_npcout(IF_ID_npcout),
							.MEM_WB_rd(MEM_WB_rd),
							.MEM_WB_regwrite(MEM_WB_regwrite),
							.WB_mux5_writedata(WB_mux5_writedata),
							.wb_ctlout(wb_ctlout),
							.m_ctlout(m_ctlout),
							.regdst(regdst),
							.aluop(aluop),
							.alusrc(alusrc),
							.npcout(npcout),
							.rdata1out(rdata1out),
							.rdata2out(rdata2out),
							.s_extendout(s_extendout),
							.instrout_2016(instrout_2016),
							.instrout_1511(instrout_1511));

	// EXECUTE
	wire	[1:0]		wb_ctlout_pipe;
	wire				branch, memread, memwrite;
	wire				zero;
	wire	[31:0]	alu_result, rdata2out_pipe;
	wire	[4:0]		five_bit_muxout;
	
	//Instantiate Execute Unit Here 
	
	I_EXECUTE IEXECUTE2 (.wb_ctl(wb_ctlout),
	                     .m_ctl(m_ctlout),
								.regdst(regdst),
								.alusrc(alusrc),
								.aluop(aluop),
								.npcout(npcout),
								.rdata1(rdata1out),
								.rdata2(rdata2out),
								.s_extendout(s_extendout),
								.instrout_2016(instrout_2016),
								.instrout_1511(instrout_1511),
								.wb_ctlout(wb_ctlout_pipe),
								.branch(branch),
								.memread(memread),
								.memwrite(memwrite),
								.EX_MEM_NPC(EX_MEM_NPC),
								.zero(zero),
								.alu_result(alu_result),
								.rdata2out(rdata2out_pipe),
								.five_bit_muxout(five_bit_muxout));
	
	
	
	// MEMORY
	wire				MEM_WB_memtoreg;
	wire	[31:0]	read_data, mem_alu_result;
	//KL, I added, doublecheck
	wire  [4:0]    mem_write_reg;

   //Instantiate Memory Unit Here
	
	MEMORY MEM_2 (.wb_ctlout(wb_ctlout_pipe),
	              .branch(branch),
					  .memread(memread),
					  .memwrite(memwrite),
					  .zero(zero),
					  .alu_result(alu_result),
					  .rdata2out(rdata2out_pipe),
					  .five_bit_muxout(five_bit_muxout),
					  .MEM_PCSrc(MEM_PCSrc),
					  .MEM_WB_regwrite(MEM_WB_regwrite),
					  .MEM_WB_memtoreg(MEM_WB_memtoreg),
					  .read_data(read_data),
					  .mem_alu_result(mem_alu_result),
					  .mem_write_reg(mem_write_reg));

	// WRITEBACK
    
      //Instantiate Write Back Unit Here 
										
endmodule // pipeline
