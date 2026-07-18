FUN_0074ba06:
0074BA06  56                        PUSH ESI
0074BA07  57                        PUSH EDI
0074BA08  8B F1                     MOV ESI,ECX
0074BA0A  6A 10                     PUSH 0x10
0074BA0C  59                        POP ECX
0074BA0D  BF 68 E3 79 00            MOV EDI,0x79e368
0074BA12  33 C0                     XOR EAX,EAX
0074BA14  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BA16  5F                        POP EDI
0074BA17  5E                        POP ESI
0074BA18  0F 95 C0                  SETNZ AL
0074BA1B  C3                        RET
