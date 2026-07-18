FUN_0067bda0:
0067BDA0  55                        PUSH EBP
0067BDA1  8B EC                     MOV EBP,ESP
0067BDA3  83 EC 08                  SUB ESP,0x8
0067BDA6  8D 45 0E                  LEA EAX,[EBP + 0xe]
0067BDA9  56                        PUSH ESI
0067BDAA  8D 4D F8                  LEA ECX,[EBP + -0x8]
0067BDAD  50                        PUSH EAX
0067BDAE  8D 55 FC                  LEA EDX,[EBP + -0x4]
0067BDB1  51                        PUSH ECX
0067BDB2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067BDB5  52                        PUSH EDX
0067BDB6  E8 0A 5B D8 FF            CALL 0x004018c5
0067BDBB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067BDBE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0067BDC1  4A                        DEC EDX
0067BDC2  8D 48 FF                  LEA ECX,[EAX + -0x1]
0067BDC5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067BDC8  66 89 08                  MOV word ptr [EAX],CX
0067BDCB  8D 48 02                  LEA ECX,[EAX + 0x2]
0067BDCE  8D 70 08                  LEA ESI,[EAX + 0x8]
0067BDD1  66 C7 40 04 00 00         MOV word ptr [EAX + 0x4],0x0
0067BDD7  66 89 11                  MOV word ptr [ECX],DX
0067BDDA  8D 50 06                  LEA EDX,[EAX + 0x6]
0067BDDD  56                        PUSH ESI
0067BDDE  52                        PUSH EDX
0067BDDF  51                        PUSH ECX
0067BDE0  50                        PUSH EAX
0067BDE1  66 C7 02 03 00            MOV word ptr [EDX],0x3
0067BDE6  66 C7 06 03 00            MOV word ptr [ESI],0x3
0067BDEB  66 C7 40 0A 05 00         MOV word ptr [EAX + 0xa],0x5
0067BDF1  E8 10 5B D8 FF            CALL 0x00401906
0067BDF6  83 C4 10                  ADD ESP,0x10
0067BDF9  5E                        POP ESI
0067BDFA  8B E5                     MOV ESP,EBP
0067BDFC  5D                        POP EBP
0067BDFD  C3                        RET
