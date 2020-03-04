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
	 WriteData
    );
	 input wire [31:0] read_data;
	 input wire [31:0] mem_alu_result;
	 input wire MEM_WB_memtoreg;
	 output reg [31:0] WriteData;
	 
	 initial 
	 begin
		WriteData <= 0;
	 end
	
	 	MUX write_back_mux (.a(read_data),
	                    .b(mem_alu_result),
							  .sel(MEM_WB_memtoreg),
							  .y(WB_mux5_writedata));
	 always @*
	 begin
	     #1
	     WriteData <= WB_mux5_writedata;
	 end


endmodule
