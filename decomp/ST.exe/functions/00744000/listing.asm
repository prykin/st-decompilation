FUN_00744000:
00744000  55                        PUSH EBP
00744001  8B EC                     MOV EBP,ESP
00744003  83 EC 14                  SUB ESP,0x14
00744006  6A 00                     PUSH 0x0
00744008  6A 00                     PUSH 0x0
0074400A  6A 00                     PUSH 0x0
0074400C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074400F  50                        PUSH EAX
00744010  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00744013  51                        PUSH ECX
00744014  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00744017  52                        PUSH EDX
00744018  8D 45 F4                  LEA EAX,[EBP + -0xc]
0074401B  50                        PUSH EAX
0074401C  E8 AF F4 FF FF            CALL 0x007434d0
00744021  83 C4 1C                  ADD ESP,0x1c
00744024  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00744027  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074402A  51                        PUSH ECX
0074402B  8D 55 F4                  LEA EDX,[EBP + -0xc]
0074402E  52                        PUSH EDX
0074402F  E8 EC C3 FF FF            CALL 0x00740420
00744034  83 C4 08                  ADD ESP,0x8
00744037  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0074403A  83 7D F0 01               CMP dword ptr [EBP + -0x10],0x1
0074403E  75 08                     JNZ 0x00744048
00744040  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00744043  0C 02                     OR AL,0x2
00744045  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_00744048:
00744048  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0074404B  8B E5                     MOV ESP,EBP
0074404D  5D                        POP EBP
0074404E  C3                        RET
