FUN_0070b1d0:
0070B1D0  55                        PUSH EBP
0070B1D1  8B EC                     MOV EBP,ESP
0070B1D3  53                        PUSH EBX
0070B1D4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0070B1D7  8B 03                     MOV EAX,dword ptr [EBX]
0070B1D9  85 C0                     TEST EAX,EAX
0070B1DB  74 31                     JZ 0x0070b20e
0070B1DD  56                        PUSH ESI
0070B1DE  33 F6                     XOR ESI,ESI
0070B1E0  66 39 70 23               CMP word ptr [EAX + 0x23],SI
0070B1E4  7E 21                     JLE 0x0070b207
0070B1E6  57                        PUSH EDI
0070B1E7  BF 30 00 00 00            MOV EDI,0x30
LAB_0070b1ec:
0070B1EC  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
0070B1EF  51                        PUSH ECX
0070B1F0  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
0070B1F3  E8 E8 6E FE FF            CALL 0x006f20e0
0070B1F8  8B 03                     MOV EAX,dword ptr [EBX]
0070B1FA  46                        INC ESI
0070B1FB  83 C7 04                  ADD EDI,0x4
0070B1FE  0F BF 50 23               MOVSX EDX,word ptr [EAX + 0x23]
0070B202  3B F2                     CMP ESI,EDX
0070B204  7C E6                     JL 0x0070b1ec
0070B206  5F                        POP EDI
LAB_0070b207:
0070B207  53                        PUSH EBX
0070B208  E8 53 FE F9 FF            CALL 0x006ab060
0070B20D  5E                        POP ESI
LAB_0070b20e:
0070B20E  5B                        POP EBX
0070B20F  5D                        POP EBP
0070B210  C3                        RET
