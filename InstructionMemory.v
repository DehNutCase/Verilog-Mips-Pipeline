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
	 
	 input wire [31 : 0] addr;
	 output reg [31 : 0] data;
	 
	 //reg [31:0] memory [9:0];
	 reg [31 : 0] memory [127 : 0];
	 initial
	 begin
	     memory[0] <= 'h002300AA;
		  memory[1] <= 'h10654321;
		  memory[2] <= 'h00200022;
		  memory[3] <= 'h8C123456;
		  memory[4] <= 'h8F123456;
		  memory[5] <= 'hAD654321;
		  memory[6] <= 'h13012345;
		  memory[7] <= 'hAC654321;
		  memory[8] <= 'h12012345;
		  
	 end
	 
	 always @(addr)
	 begin
	     data <= memory[addr];
    end

endmodule
