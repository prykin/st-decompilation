FUN_004db020:
004DB020  55                        PUSH EBP
004DB021  8B EC                     MOV EBP,ESP
004DB023  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DB026  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004DB029  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
004DB02C  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
004DB02F  C1 E0 04                  SHL EAX,0x4
004DB032  03 C1                     ADD EAX,ECX
004DB034  D1 E0                     SHL EAX,0x1
004DB036  8B 88 2E 58 7F 00         MOV ECX,dword ptr [EAX + 0x7f582e]
004DB03C  85 C9                     TEST ECX,ECX
004DB03E  75 2F                     JNZ 0x004db06f
004DB040  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004DB043  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DB049  C7 80 2E 58 7F 00 01 00 00 00  MOV dword ptr [EAX + 0x7f582e],0x1
004DB053  89 88 32 58 7F 00         MOV dword ptr [EAX + 0x7f5832],ECX
004DB059  C7 80 36 58 7F 00 00 00 00 00  MOV dword ptr [EAX + 0x7f5836],0x0
004DB063  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
004DB069  89 88 3A 58 7F 00         MOV dword ptr [EAX + 0x7f583a],ECX
LAB_004db06f:
004DB06F  33 C0                     XOR EAX,EAX
004DB071  5D                        POP EBP
004DB072  C2 08 00                  RET 0x8
