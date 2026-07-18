FUN_0074bb9a:
0074BB9A  53                        PUSH EBX
0074BB9B  56                        PUSH ESI
0074BB9C  57                        PUSH EDI
0074BB9D  8B C1                     MOV EAX,ECX
0074BB9F  6A 10                     PUSH 0x10
0074BBA1  BA 68 E3 79 00            MOV EDX,0x79e368
0074BBA6  59                        POP ECX
0074BBA7  8B FA                     MOV EDI,EDX
0074BBA9  8B F0                     MOV ESI,EAX
0074BBAB  33 DB                     XOR EBX,EBX
0074BBAD  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BBAF  74 0E                     JZ 0x0074bbbf
0074BBB1  6A 10                     PUSH 0x10
0074BBB3  8D 70 2C                  LEA ESI,[EAX + 0x2c]
0074BBB6  59                        POP ECX
0074BBB7  8B FA                     MOV EDI,EDX
0074BBB9  33 C0                     XOR EAX,EAX
0074BBBB  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BBBD  75 03                     JNZ 0x0074bbc2
LAB_0074bbbf:
0074BBBF  6A 01                     PUSH 0x1
0074BBC1  58                        POP EAX
LAB_0074bbc2:
0074BBC2  5F                        POP EDI
0074BBC3  5E                        POP ESI
0074BBC4  5B                        POP EBX
0074BBC5  C3                        RET
