`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:56:18 01/21/2020
// Design Name:   ADD
// Module Name:   /home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/test_add.v
// Project Name:  CSE401_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ADD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module test_add;

	// Inputs
	reg [31:0] pc_in;

	// Outputs
	wire [31:0] pc_out;

	// Instantiate the Unit Under Test (UUT)
	ADD uut (
		.pc_in(pc_in), 
		.pc_out(pc_out)
	);

	initial 
	begin
	    #10;
		 pc_in = 3;
		 #10;
		 pc_in = 15;
		 #10;
		 pc_in = 64;
		 #5;
	end
	
	always @(*)
	begin
	    #1;
		 $display("Time = %0d\tA=%0d\tIncrOut=%0d", $time, 
		     pc_in, pc_out);
		 
	end
      
endmodule

