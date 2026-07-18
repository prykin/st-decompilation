FUN_004db0f0:
004DB0F0  55                        PUSH EBP
004DB0F1  8B EC                     MOV EBP,ESP
004DB0F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DB0F6  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004DB0F9  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
004DB0FC  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
004DB0FF  C1 E0 04                  SHL EAX,0x4
004DB102  03 C1                     ADD EAX,ECX
004DB104  D1 E0                     SHL EAX,0x1
004DB106  83 B8 2E 58 7F 00 02      CMP dword ptr [EAX + 0x7f582e],0x2
004DB10D  75 1C                     JNZ 0x004db12b
004DB10F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DB115  C7 80 2E 58 7F 00 03 00 00 00  MOV dword ptr [EAX + 0x7f582e],0x3
004DB11F  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DB125  89 90 3A 58 7F 00         MOV dword ptr [EAX + 0x7f583a],EDX
LAB_004db12b:
004DB12B  33 C0                     XOR EAX,EAX
004DB12D  5D                        POP EBP
004DB12E  C2 04 00                  RET 0x4
