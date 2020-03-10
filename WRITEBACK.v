`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:09:24 03/03/2020 
// Design Name: 
// Module Name:    WRITEBACK 
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
module WRITEBACK(
    MEM_WB_memtoreg,
    read_data,
	 mem_alu_result,
	 WriteData,
	 MEM_WB_regwrite,
	 WB_delay
    );
	 input wire [31:0] read_data;
	 input wire [31:0] mem_alu_result;
	 input wire MEM_WB_memtoreg;
	 input wire WB_delay;
	 output reg [31:0] WriteData;
	 output reg MEM_WB_regwrite;
	 
	 wire [31:0] mux_out;
	 
	 initial 
	 begin
		WriteData <= 0;
		MEM_WB_regwrite <= 0;
	 end
	
	 	MUX write_back_mux (.a(read_data),
	                    .b(mem_alu_result),
							  .sel(MEM_WB_memtoreg),
							  .y(mux_out));
	 always @*
	 begin
	     //KL, WB only works properly without pause
		  //KL, I need help to implement MIPS properly
		  //KL, but TA is completely useless
	     //#1
	     WriteData <= mux_out;
		  MEM_WB_regwrite <= WB_delay;
	 end


endmodule
