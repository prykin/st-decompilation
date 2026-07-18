FUN_0042b5b0:
0042B5B0  55                        PUSH EBP
0042B5B1  8B EC                     MOV EBP,ESP
0042B5B3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042B5B7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042B5BA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042B5BD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042B5C0  C1 E1 04                  SHL ECX,0x4
0042B5C3  03 C8                     ADD ECX,EAX
0042B5C5  8B 0C 4D 29 4E 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f4e29]
0042B5CC  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0042B5CF  85 C0                     TEST EAX,EAX
0042B5D1  74 24                     JZ 0x0042b5f7
0042B5D3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042B5D6  81 E2 FF FF 00 00         AND EDX,0xffff
0042B5DC  3B D0                     CMP EDX,EAX
0042B5DE  73 17                     JNC 0x0042b5f7
0042B5E0  8D 45 08                  LEA EAX,[EBP + 0x8]
0042B5E3  50                        PUSH EAX
0042B5E4  E8 87 16 28 00            CALL 0x006acc70
0042B5E9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042B5EC  33 C0                     XOR EAX,EAX
0042B5EE  85 C9                     TEST ECX,ECX
0042B5F0  0F 95 C0                  SETNZ AL
0042B5F3  5D                        POP EBP
0042B5F4  C2 08 00                  RET 0x8
LAB_0042b5f7:
0042B5F7  33 C0                     XOR EAX,EAX
0042B5F9  5D                        POP EBP
0042B5FA  C2 08 00                  RET 0x8
