`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:05:41 01/14/2020 
// Design Name: 
// Module Name:    test_mux 
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
`include "MUX.v"

module test_mux;

    wire [31:0] y;
    reg [31:0] a, b;
    reg sel;
	 
	 

    MUX testing_mux (a, b, sel, y);
    initial begin

        a = 32 'hAAAAAAAA;
	     b = 32 'h55555555;
	     sel = 1 'b1;
	     #10;
	     a = 32 'h00000000;
	     #10;
	     sel = 1 'b1;
	     #10;
	     b = 32 'hFFFFFFFF;
		  #5;
		  a = 32 'hA5A5A5A5;
		  #5
		  sel = 1 'b0;
		  b = 32 'hDDDDDDDD;
		  #5 sel = 1 'bx;
    end

    always @(a or b or sel)
	     #1 $display(" At t = %0d sel = %b a = %h b = %h y = %h " , $time, sel, a, b, y) ;

endmodule 