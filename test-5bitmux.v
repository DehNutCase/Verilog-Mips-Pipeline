`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:42:01 02/20/2020
// Design Name:   MUX
// Module Name:   /home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/test-5bitmux.v
// Project Name:  CSE401_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MUX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_test();

	// Inputs
	reg [4:0] a;
	reg [4:0] b;
	reg sel;

	// Outputs
	wire [4:0] y;

	// Instantiate the Unit Under Test (UUT)
	MUX uut (
		.a(a), 
		.b(b), 
		.sel(sel), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 5'b01010;
		b = 5'b10101;
		sel = 1'b1;
		#10;
		a = 5'b00000;
		#10;
		sel = 1'b1;
		#10;
		b = 5'b11111;
		#5
		a = 5'b00101;
		#5
		sel = 1'b0;
		b = 5'b11101;
		#5
		sel = 1'bx;
	end
	
	always @*
	begin
	    #1 $display ("At t = %0d sel = %b a = %b b = %b y = %b", $time, sel, a, b, y);
	end
      
endmodule

