`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:20:04 01/14/2020 
// Design Name: 
// Module Name:    InstructionMemory 
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
module InstructionMemory(addr, data);
	 integer i;
	 input wire [31 : 0] addr;
	 output reg [31 : 0] data;
	 
	 //reg [31:0] memory [9:0];
	 reg [31 : 0] memory [127 : 0];
	 initial
	 begin
	   $readmemb("instruction_final.txt", memory);
	   for (i = 0; i < 24; i = i +1)
		  $display(memory[i]);
	 end
	 
	 always @(addr)
	 begin
	     data <= memory[addr];
    end

endmodule
