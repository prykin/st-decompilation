FUN_004db0a0:
004DB0A0  55                        PUSH EBP
004DB0A1  8B EC                     MOV EBP,ESP
004DB0A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DB0A6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DB0A9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DB0AC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DB0AF  C1 E1 04                  SHL ECX,0x4
004DB0B2  03 C8                     ADD ECX,EAX
004DB0B4  8D 04 4D 2E 58 7F 00      LEA EAX,[ECX*0x2 + 0x7f582e]
004DB0BB  8B 0C 4D 2E 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f582e]
004DB0C2  83 F9 01                  CMP ECX,0x1
004DB0C5  75 06                     JNZ 0x004db0cd
004DB0C7  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_004db0cd:
004DB0CD  33 C0                     XOR EAX,EAX
004DB0CF  5D                        POP EBP
004DB0D0  C2 04 00                  RET 0x4
