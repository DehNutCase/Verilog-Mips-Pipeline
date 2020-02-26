`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:00:12 02/04/2020 
// Design Name: 
// Module Name:    MEM_ADD 
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

module MEM_ADD(
    );
    input	wire	[31:0]	add_in1;
    input	wire	[31:0]	add_in2;
    output	wire	[31:0]	add_out;
	 
	assign add_out = add_in1 + add_in2;

endmodule
