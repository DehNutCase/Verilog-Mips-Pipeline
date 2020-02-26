`timescale 1ns / 1ps
/* data_memory.v */
module data_memory (
   input		wire	[31:0]	addr,				// Memory Address
   input		wire	[31:0]	write_data,		// Memory Address Contents
   input		wire				memwrite, memread,
	output	reg	[31:0]	read_data		// Output of Memory Address Contents
	);

	// Register Declaration
   reg [31:0] DMEM[0:255];  // 256 words of 32-bit memory

   integer i;
	
	initial begin
	
		read_data <= 0;
		
		//  Initialize DMEM[0-5] from data.txt
		$readmemb("data.txt",DMEM);
		DMEM[0] <= 'h002300AA;
		DMEM[1] <= 'h10654321;
		DMEM[2] <= 'h00100022;
		DMEM[3] <= 'h8C123456;
		DMEM[4] <= 'h8F123456;
		DMEM[5] <= 'hAD654321;
		DMEM[6] <= 'h13012345;
		DMEM[7] <= 'hAC654321;
		DMEM[8] <= 'h12012345;
		
		// Initialize DMEM[6-255] to 6-255
		for (i = 8; i < 256; i = i + 1)
			DMEM[i] = i;
		
		//Display DMEM[0-5]
		$display("From Data Memory (data.txt):");
		for (i = 0; i < 6; i = i + 1)
			$display("\tDMEM[%0d] = %0h", i, DMEM[i]);
		
		//Display DMEM[6-9]
		$display("From Data Memory (initial):");
		for (i = 6; i < 10; i = i + 1)
			$display("\tDMEM[%0d] = %0d", i, DMEM[i]);
		
		//Display DMEM[255]
		$display("\t...");
		$display("\tDMEM[%0d] = %0d", 255, DMEM[255]);
			
   end
   
   always@(addr) begin
			//finish this thread. Hint: Requires 2 if statements
	      //kl double check this
			read_data <= 0;
			if (memwrite == 1)
			begin
			    DMEM[addr] <= write_data;
			end
			if (memread == 1)
			begin
			    read_data <= DMEM[addr];
			end
	end

endmodule // data_memory
