`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:48:58 02/20/2020
// Design Name:   ALU_CONTROL
// Module Name:   /home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/alu_control_test.v
// Project Name:  CSE401_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU_CONTROL
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_control_test();

	// Inputs
	reg [5:0] funct;
	reg [1:0] aluop;

	// Outputs
	wire [2:0] select;

	// Instantiate the Unit Under Test (UUT)
	ALU_CONTROL uut (
		.funct(funct), 
		.aluop(aluop), 
		.select(select)
	);

	initial begin
		aluop = 2'b00;
		funct = 6'b100000;
		$monitor("ALUOp = %b \t funct = %b \t select = %b", 
		aluop, funct, select);
		
		#1
		aluop = 2'b01;
		funct = 6'b100000;
		#1
		aluop = 2'b10;
		funct = 6'b100000;
		#1
		funct = 6'b100010;
		#1
		funct = 6'b100100;
		#1
		funct = 6'b100101;
		#1
		funct = 6'b101010;
		#1
		$finish;	
		end
      
endmodule

