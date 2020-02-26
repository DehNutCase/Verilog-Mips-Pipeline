`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:35:23 02/18/2020
// Design Name:   MEMORY
// Module Name:   /home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/memory_test.v
// Project Name:  CSE401_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MEMORY
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module memory_test;

	// Inputs
	reg [1:0] wb_ctlout;
	reg branch;
	reg memread;
	reg memwrite;
	reg zero;
	reg [31:0] alu_result;
	reg [31:0] rdata2out;
	reg [4:0] five_bit_muxout;

	// Outputs
	wire MEM_PCSrc;
	wire MEM_WB_regwrite;
	wire MEM_WB_memtoreg;
	wire [31:0] read_data;
	wire [31:0] mem_alu_result;
	wire [4:0] mem_write_reg;

	// Instantiate the Unit Under Test (UUT)
	MEMORY uut (
		.wb_ctlout(wb_ctlout), 
		.branch(branch), 
		.memread(memread), 
		.memwrite(memwrite), 
		.zero(zero), 
		.alu_result(alu_result), 
		.rdata2out(rdata2out), 
		.five_bit_muxout(five_bit_muxout), 
		.MEM_PCSrc(MEM_PCSrc), 
		.MEM_WB_regwrite(MEM_WB_regwrite), 
		.MEM_WB_memtoreg(MEM_WB_memtoreg), 
		.read_data(read_data), 
		.mem_alu_result(mem_alu_result), 
		.mem_write_reg(mem_write_reg)
	);

	initial begin
		// Initialize Inputs
		wb_ctlout = 0;
		branch = 0;
		memread = 0;
		memwrite = 0;
		zero = 0;
		alu_result = 0;
		rdata2out = 0;
		five_bit_muxout = 0;
		
		memory[0] <= 'h002300AA;
		memory[1] <= 'h10654321;
		memory[2] <= 'h00100022;
		memory[3] <= 'h8C123456;
		memory[4] <= 'h8F123456;
		memory[5] <= 'hAD654321;
		memory[6] <= 'h13012345;
		memory[7] <= 'hAC654321;
		memory[8] <= 'h12012345;
		
		#20;
        
		// Add stimulus here

	end
      
endmodule

