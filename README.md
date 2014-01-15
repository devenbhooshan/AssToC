AssToC
======

Assembly Language Interpreter in C

This program is an assembly language interpreter which consists of a single register which accounts for the accumulator. There are five memory locations which are denoted by the values 'p', 'q', 'r', 's' and 't'. These memory locations can be accessed to store or retrieve values only with the help of the accumulator. The instruction set of this interpreter has been explained below.
The commands supported are as follows:
 	____________________________________________________________________
       MOV [value]	: Move [value] into acc.  
        ADD X 		: Add memory location x into acc.  
        SUB X		: Subtract X from Acc.  
        MUL X		: Multiply X with Acc.  
        DIV X		: Divide acc. by X.  
        AND X		: And X with Acc.  
        NOT		: Complement Acc.  
        OR X		: Or X with Acc.  
        LD X		: Load memory location X at Acc.  
        ST X		: Store acc. at memory location X  
        HLT		: Exit the program  
	____________________________________________________________________
    (Here X stands for any of the memory location and [value] stands for any integer value)

The above model allows us to store any value in the memory locations by first putting it in the accumulator and then storing it in the memory. The memory locations can then be used directly to perform the desired operations.
