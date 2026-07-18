FUN_004e1f70:
004E1F70  55                        PUSH EBP
004E1F71  8B EC                     MOV EBP,ESP
004E1F73  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E1F76  56                        PUSH ESI
004E1F77  33 C0                     XOR EAX,EAX
004E1F79  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004E1F7C  8B B4 D1 D0 04 00 00      MOV ESI,dword ptr [ECX + EDX*0x8 + 0x4d0]
004E1F83  85 F6                     TEST ESI,ESI
004E1F85  5E                        POP ESI
004E1F86  75 05                     JNZ 0x004e1f8d
004E1F88  B8 01 00 00 00            MOV EAX,0x1
LAB_004e1f8d:
004E1F8D  5D                        POP EBP
004E1F8E  C2 04 00                  RET 0x4
