`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:58:31 02/20/2020
// Design Name:   ALU
// Module Name:   /home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/alu_test_2nd.v
// Project Name:  CSE401_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_test_2nd;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	reg [2:0] control;

	// Outputs
	wire [31:0] result;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.a(a), 
		.b(b), 
		.control(control), 
		.result(result), 
		.zero(zero)
	);

	initial begin
		a <= 'b1010;
		b <= 'b0111;
		control <= 'b011;
		$display("A = %b\tB = %b", a, b);
		$monitor("ALUOp = %b\t result = %b", control, result);
		#1
		control <= 'b100;
		#1
		control <= 'b010;
		#1
		control <= 'b111;
		#1
		control <= 'b011;
		#1
		control <= 'b110;
		#1
		control <= 'b001;
		#1
		control <= 'b000;
		#1
		$finish;

	end
      
endmodule

