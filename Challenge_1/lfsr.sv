module lfsr (
    //interface signals
    input logic clk, 
    input logic en, 
    input logic rst,  
    output logic [7:1] data_out
);

logic [7:1] sreg; 

always_ff @ (posedge clk, posedge rst) 
    if (rst)
        sreg <=4'b1;
    else if (en)
        sreg <= {sreg[6:1], sreg[7] ^ sreg[3]}; //to get X^7 and X^3 XOR those bits


assign data_out = sreg; 
endmodule





