`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:13:12 01/14/2020 
// Design Name: 
// Module Name:    ADD 
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
module ADD(in_1, in_2, out);

	 input wire [31:0] in_1;
	 input wire [31:0] in_2;
	 
	 output wire [31:0] out;


	 assign out = in_1 + in_2;
	 
endmodule
