module dfinal (
    //interface signals
    input logic clk, 
    input logic rst,  
    input logic [15:0] N,  
    input logic en, 
    output logic [7:0] out

);
 logic tick;

clktick ticks(
    .clk (clk),
    .en (en),
    .rst (rst), //yellow value is signal in the internal module - the blue is the value you want to assign it - can come from top level 
    .N (N),
    .tick (tick)
);

f1_fsm f1(
    //define states
    .clk (clk), 
    .en (tick),
    .out (out), 
    .rst (rst)
); 

endmodule 

