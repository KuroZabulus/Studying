include \masm32\include\masm32rt.inc 
    .data
        var1 dd 0		;3 32bit value initialised to 0
        var2 dd 0
        var3 dd 0

    .code                       ;tell masm where code starts   

    start:                      ;code entry point to the program  
	;input 3 integers  
            mov var1, sval(input("Number1: "))
            mov var2, sval(input("Number2: "))
            mov var3, sval(input("Number3: "))
	;copying each integer to each data segment register from eax to ecx
            mov eax, var1
            mov ebx, var2
            mov ecx, var3
        cmp eax, ebx   		;compare eax(var1) and ebx(var2)    
        jg AbiggerthanB		;if greater, jump to A>B branch
        jl BbiggerthanA		;if lesser, jump to B>A branch
    AbiggerthanB:
        cmp eax, ecx		;compare eax(var1) and ecx(var3)
        jg AbiggerthanC		;if greater, jump to A>C branch
        jl CbiggerthanA		;if lesser, jump to C>A branch
            AbiggerthanC:  
                print str$(var1);print value of var1
                exit
            CbiggerthanA:
                print str$(var3);print value of var3
                exit       
     BbiggerthanA:     
        cmp ebx, ecx
        jg BbiggerthanC		;if greater, jump to B>C branch
        jl CbiggerthanB		;if lesser, jump to C>B branch
            BbiggerthanC:  
               print str$(var2)	;print value of var2
               exit
            CbiggerthanB:
               print str$(var3)	;print value of var3
               exit
        end start		;tell masm where code ends