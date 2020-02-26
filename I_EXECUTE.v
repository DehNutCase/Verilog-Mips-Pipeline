`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:29 02/04/2020 
// Design Name: 
// Module Name:    I_EXECUTE 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps
module I_EXECUTE(
	input		wire	[1:0]		wb_ctl,
	input		wire	[2:0]		m_ctl,
	input		wire				regdst, alusrc,
	input		wire	[1:0]		aluop, 
	input		wire	[31:0]	npcout, rdata1, rdata2, s_extendout,
	input		wire	[4:0]		instrout_2016, instrout_1511,
	output	wire	[1:0]		wb_ctlout,
	output	wire				branch, memread, memwrite,
	output	wire	[31:0]	EX_MEM_NPC,
	output	wire				zero,
	output	wire	[31:0]	alu_result, rdata2out,
	output	wire	[4:0]		five_bit_muxout
	);

	// signals
	wire	[31:0]	adder_out, b, aluout;
	wire	[4:0]		muxout;
	wire	[2:0]		control;
	wire				aluzero;
	
	
	// instantiations
	
	ADD ex_add_1(.in_1(npcout),
	             .in_2(s_extendout),
	             .out(adder_out));
	
	ALU alu_1(.a(rdata1),
	          .b(b),
				 .control(control),
				 .result(aluout),
				 .zero(aluzero));
	
	MUX ex_mux_1(.a(s_extendout),
	             .b(rdata2),
					 .sel(alusrc),
					 .y(b));
	
	ALU_CONTROL alu_control_1(.funct(s_extendout[5:0]),
	                          .aluop(aluop),
									  .select(control));
	
	MUX ex_mux_2(.a(instrout_1511),
	             .b(instrout_2016),
					 .sel(regdst),
					 .y(muxout));
	
	EX_MEM ex_mem_1(.ctlwb_out(wb_ctl),
	                .ctlm_out(m_ctl),
						 .adder_out(adder_out),
						 .aluzero(aluzero),
						 .aluout(aluout),
						 .readdat2(rdata2),
						 .muxout(muxout),
						 .wb_ctlout(wb_ctlout),
						 .branch(branch),
						 .memread(memread),
						 .memwrite(memwrite),
						 .add_result(EX_MEM_NPC),
						 .zero(zero),
						 .alu_result(alu_result),
						 .rdata2out(rdata2out),
						 .five_bit_muxout(five_bit_muxout));
						 
	
   // have at it, wire this puppy up using Fig 3.1
	
endmodule // IEXECUTE

