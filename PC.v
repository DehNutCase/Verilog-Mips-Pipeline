`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Program Counter
//////////////////////////////////////////////////////////////////////////////////
module PC(npc, pc);
	 
    input wire [31:0] npc;
    output reg [31:0] pc;
	 
    initial
    begin
        pc <= 0; //No difference between pc = 0 and pc <= 0 here?
    end
	 
	 always @(npc)
	 begin
	     //pause has to be here
	     #1
	     pc <= npc;
    end
	 
endmodule
