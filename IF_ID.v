`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Latch which passes data from Fetch Stage to Decode Stage.
//////////////////////////////////////////////////////////////////////////////////
module IF_ID(instr_in, npc_in, instr_out, npc_out);

    input wire [31:0] instr_in;
	 input wire [31:0] npc_in;
	 output reg [31:0] npc_out;
	 output reg [31:0] instr_out;
	 
	 initial
	 begin
	     instr_out <= 0;
		  npc_out <= 0;
    end
	 
	 always @(*)
	 begin
	     //KL, added pause of 1
	     #1
	     npc_out <= npc_in;
	     instr_out <= instr_in;
	 end

endmodule
