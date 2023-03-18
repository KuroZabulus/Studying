include \masm32\include\masm32rt.inc 
    .data 			;initialize data
     var1 dd 0 			;32 bit value initialised to zero
     var2 dd 2 			;32 bit value initialised to 2
     remain dd 0 		;32 bit value initialised to zero
     .code 			;tell masm where code starts     
start: 				;code entry point to the program
     mov var1, sval(input("Enter a number: "))
				;copy the value of sval (convert num-string 				from:(receive user input) into signed number) 				into var1 aka input integer
     mov eax, var1 		;copy value of var1 into eax register(lower 32b 				data seg)
     mov edx, 0 		;copy the number 0 into edx register (lower 32b 				data seg)
     div var2			;divide var2*
     mov remain, edx 		;copy the value in edx register (remainder) into remain
     cmp remain, 0 		;compare variable remaining with the number 0
     je  Evennumber 		;if equal, jump to even number branch
     jne Oddnumber 		;if not equal, jump to odd number branch
        Evennumber:
            print chr$("EVEN") 	;print the word EVEN
            exit 		;quit executing the branch
        Oddnumber:
            print chr$("ODD") 	;print the word ODD
            exit 		;quit executing the branch
    end start 			;tell masm where code ends

;div var2 = divide eax:edx(userinput:0) by var2(2), quotient saved in eax, remainder saved in edx