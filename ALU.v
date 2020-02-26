`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:06:51 02/04/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input	wire	[31:0]	a,
    input	wire	[31:0]	b,
    input	wire	[2:0]		control,
    output	reg	[31:0]	result,
    output	wire				zero
    );

	parameter	ALUadd		=	3'b010,
					ALUsub		=	3'b110,
					ALUand		=	3'b000,
					ALUor			=	3'b001,
					ALUslt		=	3'b111;
					
					
	
	// Handles negative inputs
	
	//KL, set to reg for test benching
	wire sign_mismatch;
	//wire sign_mismatch;
	
	//KL, XOR seems to be the right test for mismatch
   assign sign_mismatch = a[31]^b[31] ? 1:0;
	assign zero = result==0 ? 1 : 0; //KL, ternary operator, double check this is working properly. Should return 1 if result = 0, else return 0.
		
	initial
	begin
		result <= 0;
	end
	
	always@*
	   begin
		case(control)
			ALUadd:			result = a + b;
			ALUsub:			result = a - b;
			//the next bit are logical and and or, not sure we want that?
			
			/*
			ALUand:			result = a && b;
			ALUor:			result = a || b;
			*/
			/* KL, these are bitwise */
			ALUand:			result = a & b;
			ALUor:			result = a | b;
			//*/
			ALUslt:			result = a < b	? 1 - sign_mismatch 
														: 0 + sign_mismatch;			
			default:			result = 32'bX;	// control = ALUx | *
		endcase
		end
		
endmodule

//If the input information does not correspond to any valid instruction,
//aluop = 2'b11 which sets control = ALUx = 3'b011 
//and ALU output is 32 x's as required by lab manual. 
 

