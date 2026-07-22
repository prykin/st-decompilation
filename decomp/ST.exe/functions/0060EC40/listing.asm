FUN_0060ec40:
0060EC40  68 18 03 00 00            PUSH 0x318
0060EC45  E8 86 18 0A 00            CALL 0x006b04d0
0060EC4A  85 C0                     TEST EAX,EAX
0060EC4C  74 07                     JZ 0x0060ec55
0060EC4E  8B C8                     MOV ECX,EAX
0060EC50  E9 CF 2C DF FF            JMP 0x00401924
LAB_0060ec55:
0060EC55  33 C0                     XOR EAX,EAX
0060EC57  C3                        RET
