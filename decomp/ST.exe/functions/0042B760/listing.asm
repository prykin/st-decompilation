FUN_0042b760:
0042B760  55                        PUSH EBP
0042B761  8B EC                     MOV EBP,ESP
0042B763  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042B767  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042B76A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042B76D  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042B770  C1 E1 04                  SHL ECX,0x4
0042B773  03 C8                     ADD ECX,EAX
0042B775  8B 0C 4D 25 4E 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f4e25]
0042B77C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0042B77F  85 C0                     TEST EAX,EAX
0042B781  74 1D                     JZ 0x0042b7a0
0042B783  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042B786  81 E2 FF FF 00 00         AND EDX,0xffff
0042B78C  3B D0                     CMP EDX,EAX
0042B78E  73 10                     JNC 0x0042b7a0
0042B790  8D 45 08                  LEA EAX,[EBP + 0x8]
0042B793  50                        PUSH EAX
0042B794  E8 D7 14 28 00            CALL 0x006acc70
0042B799  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042B79C  5D                        POP EBP
0042B79D  C2 08 00                  RET 0x8
LAB_0042b7a0:
0042B7A0  33 C0                     XOR EAX,EAX
0042B7A2  5D                        POP EBP
0042B7A3  C2 08 00                  RET 0x8
