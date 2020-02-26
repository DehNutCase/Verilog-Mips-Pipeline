`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:48:48 01/21/2020
// Design Name:   MUX
// Module Name:   /home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/test_mux.v
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

module test_mux;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	reg sel;

	// Outputs
	wire [31:0] y;

	// Instantiate the Unit Under Test (UUT)
	MUX uut (
		.a(a), 
		.b(b), 
		.sel(sel), 
		.y(y)
	);

	initial 
	begin
		a = 32'hAAAAAAAA;
		b = 32'h55555555;
		sel = 1'b1;
		#10;
		a = 32'h00000000;
		#10;
		sel = 1'b1;
		#10;
		b = 32'hFFFFFFFF;
		#5; 
		a = 32'hA5A5A5A5;
		#5;
		sel = 1'b0;
		b = 32 'hDDDDDDDD;
		#5;
		sel = 1'bx;
	end
	
	always @(*)
	begin
	    #1;
		 $display("At t = %0d sel = %b a = %h b = %h y = %h", 
		     $time, sel, a, b, y);
	end
      
endmodule

