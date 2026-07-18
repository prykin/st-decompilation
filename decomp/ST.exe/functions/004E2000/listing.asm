FUN_004e2000:
004E2000  55                        PUSH EBP
004E2001  8B EC                     MOV EBP,ESP
004E2003  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E2006  56                        PUSH ESI
004E2007  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E200A  33 C0                     XOR EAX,EAX
004E200C  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004E200F  8D 8C D1 D0 04 00 00      LEA ECX,[ECX + EDX*0x8 + 0x4d0]
004E2016  8B 11                     MOV EDX,dword ptr [ECX]
004E2018  3B D6                     CMP EDX,ESI
004E201A  5E                        POP ESI
004E201B  75 07                     JNZ 0x004e2024
004E201D  89 01                     MOV dword ptr [ECX],EAX
004E201F  B8 01 00 00 00            MOV EAX,0x1
LAB_004e2024:
004E2024  5D                        POP EBP
004E2025  C2 08 00                  RET 0x8
