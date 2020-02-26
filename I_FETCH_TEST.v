`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:35:04 01/21/2020
// Design Name:   I_FETCH
// Module Name:   /home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/I_FETCH_TEST.v
// Project Name:  CSE401_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: I_FETCH
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module I_FETCH_TEST;

	// Inputs
	reg EX_MEM_PCSrc;
	reg [31:0] EX_MEM_NPC;

	// Outputs
	wire [31:0] IF_ID_INSTR;
	wire [31:0] IF_ID_NPC;

	// Instantiate the Unit Under Test (UUT)
	I_FETCH uut (
		.EX_MEM_PCSrc(EX_MEM_PCSrc), 
		.EX_MEM_NPC(EX_MEM_NPC), 
		.IF_ID_INSTR(IF_ID_INSTR), 
		.IF_ID_NPC(IF_ID_NPC)
	);

	initial 
	begin
		// Initialize Inputs
		EX_MEM_NPC = 0;
		EX_MEM_PCSrc = 0;
		#9
      EX_MEM_PCSrc = 1;
		EX_MEM_NPC = 5;
		#1
		EX_MEM_PCSrc = 0;
		#10;
		$stop;
	end
      
endmodule

