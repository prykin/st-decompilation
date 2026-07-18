FUN_0044e1b0:
0044E1B0  55                        PUSH EBP
0044E1B1  8B EC                     MOV EBP,ESP
0044E1B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044E1B6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044E1B9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044E1BC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044E1BF  33 D2                     XOR EDX,EDX
0044E1C1  C1 E1 04                  SHL ECX,0x4
0044E1C4  03 C8                     ADD ECX,EAX
0044E1C6  A1 97 8A 80 00            MOV EAX,[0x00808a97]
0044E1CB  66 8B 14 4D 2D 4E 7F 00   MOV DX,word ptr [ECX*0x2 + 0x7f4e2d]
0044E1D3  3B D0                     CMP EDX,EAX
0044E1D5  1B C0                     SBB EAX,EAX
LAB_0044e1d7:
0044E1D7  F7 D8                     NEG EAX
0044E1D9  5D                        POP EBP
0044E1DA  C2 04 00                  RET 0x4
