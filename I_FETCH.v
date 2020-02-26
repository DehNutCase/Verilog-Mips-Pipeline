`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:29 01/21/2020 
// Design Name: 
// Module Name:    I_FETCH 
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

module I_FETCH(EX_MEM_PCSrc, EX_MEM_NPC, IF_ID_INSTR, IF_ID_NPC);

    input wire EX_MEM_PCSrc;
	 input wire [31:0] EX_MEM_NPC;
	 
	 output wire [31:0] IF_ID_INSTR;
	 output wire [31:0] IF_ID_NPC;
	 
	 wire [31:0] PC;
	 wire [31:0] data_out;
	 wire [31:0] npc;
	 wire [31:0] npc_mux;
	 
	 reg [31:0] wire_one;
	 
	 initial
    begin
        assign wire_one = 1;
    end
	 
	 //KL, remove comments once memory is working properly
	 MUX mux_1 (.y(npc_mux), .a(EX_MEM_NPC), .b(npc), .sel(EX_MEM_PCSrc));
	
	 PC pc_1 (.pc(PC), .npc(npc_mux));
	 
	 //PC pc_1 (.pc(PC), .npc(npc)); //MUX isn't working, so leave like this for now
	 
	 InstructionMemory mem_1 (.data(data_out), .addr(PC));
	 
	 IF_ID IF_ID_1 (.instr_out(IF_ID_INSTR), .npc_out(IF_ID_NPC), .instr_in(data_out), .npc_in(npc));
	 
	 ADD add_1 (.out(npc), .in_1(PC), .in_2(wire_one));
	 

endmodule
