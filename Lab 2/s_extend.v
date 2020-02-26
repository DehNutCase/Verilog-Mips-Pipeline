`timescale 1ns / 1ps

/*  s_extend.v  */

module s_extend(
    input	wire	[15:0] nextend,
    output	reg	[31:0] extend
    );
	
	initial 
   begin
	    extend <= 0;
   end
	
	always@ *
	  begin
	  extend = {{16{nextend[15]}}, nextend[15:0]};
		// Replicate signed bit 16 times then cancatinate
	  end

endmodule
