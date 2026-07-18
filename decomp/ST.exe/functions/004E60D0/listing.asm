FUN_004e60d0:
004E60D0  55                        PUSH EBP
004E60D1  8B EC                     MOV EBP,ESP
004E60D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E60D6  85 C0                     TEST EAX,EAX
004E60D8  7C 35                     JL 0x004e610f
004E60DA  83 F8 08                  CMP EAX,0x8
004E60DD  7D 30                     JGE 0x004e610f
004E60DF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E60E2  83 F9 01                  CMP ECX,0x1
004E60E5  7C 28                     JL 0x004e610f
004E60E7  81 F9 9B 00 00 00         CMP ECX,0x9b
004E60ED  7D 20                     JGE 0x004e610f
004E60EF  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E60F2  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004E60F5  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004E60F8  C1 E2 04                  SHL EDX,0x4
004E60FB  03 D0                     ADD EDX,EAX
004E60FD  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
004E6104  8B 84 50 47 51 7F 00      MOV EAX,dword ptr [EAX + EDX*0x2 + 0x7f5147]
004E610B  5D                        POP EBP
004E610C  C2 08 00                  RET 0x8
LAB_004e610f:
004E610F  33 C0                     XOR EAX,EAX
004E6111  5D                        POP EBP
004E6112  C2 08 00                  RET 0x8
