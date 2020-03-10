`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:59:47 03/05/2020 
// Design Name: 
// Module Name:    regwrite_pause 
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
module regwrite_pause(reg_write_pause,
                      MEM_WB_regwrite);
  input wire reg_write_pause;
  output reg MEM_WB_regwrite;
  
  initial
  begin
    MEM_WB_regwrite <= 0;
  end
  
  always @*
  begin
    #2
	 MEM_WB_regwrite <= reg_write_pause;
  end

endmodule
