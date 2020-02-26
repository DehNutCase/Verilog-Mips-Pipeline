`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:31:03 01/14/2020 
// Design Name: 
// Module Name:    MUX 
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
module five_bit_mux(a, b, sel, y);

    input wire [4:0] a;
    input wire [4:0] b;
    input wire sel;
	 
    output wire [4:0] y;
	 
	 assign y = sel ? a : b;
	 //comment the next bit once memory is actually used for PC
	 //assign y = b;
	 
endmodule
