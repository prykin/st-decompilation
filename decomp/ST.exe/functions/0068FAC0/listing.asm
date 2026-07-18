FUN_0068fac0:
0068FAC0  55                        PUSH EBP
0068FAC1  8B EC                     MOV EBP,ESP
0068FAC3  83 EC 34                  SUB ESP,0x34
0068FAC6  8B D1                     MOV EDX,ECX
0068FAC8  57                        PUSH EDI
0068FAC9  B9 0D 00 00 00            MOV ECX,0xd
0068FACE  33 C0                     XOR EAX,EAX
0068FAD0  8D 7D CC                  LEA EDI,[EBP + -0x34]
0068FAD3  F3 AB                     STOSD.REP ES:EDI
0068FAD5  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
0068FAD9  8B 82 2C 01 00 00         MOV EAX,dword ptr [EDX + 0x12c]
0068FADF  66 89 4D D5               MOV word ptr [EBP + -0x2b],CX
0068FAE3  8D 4D CC                  LEA ECX,[EBP + -0x34]
0068FAE6  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0068FAE9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0068FAEC  51                        PUSH ECX
0068FAED  68 00 80 00 00            PUSH 0x8000
0068FAF2  8B CA                     MOV ECX,EDX
0068FAF4  C7 45 CC 76 00 00 00      MOV dword ptr [EBP + -0x34],0x76
0068FAFB  89 45 D7                  MOV dword ptr [EBP + -0x29],EAX
0068FAFE  E8 DA 41 D7 FF            CALL 0x00403cdd
0068FB03  0F BF 45 DB               MOVSX EAX,word ptr [EBP + -0x25]
0068FB07  5F                        POP EDI
0068FB08  8B E5                     MOV ESP,EBP
0068FB0A  5D                        POP EBP
0068FB0B  C2 08 00                  RET 0x8
