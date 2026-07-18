FUN_004e22a0:
004E22A0  55                        PUSH EBP
004E22A1  8B EC                     MOV EBP,ESP
004E22A3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E22A6  56                        PUSH ESI
004E22A7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E22AA  33 C0                     XOR EAX,EAX
004E22AC  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004E22AF  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
004E22B2  8B 91 D0 04 00 00         MOV EDX,dword ptr [ECX + 0x4d0]
004E22B8  3B D6                     CMP EDX,ESI
004E22BA  5E                        POP ESI
004E22BB  75 13                     JNZ 0x004e22d0
004E22BD  39 81 D4 04 00 00         CMP dword ptr [ECX + 0x4d4],EAX
004E22C3  74 0B                     JZ 0x004e22d0
004E22C5  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004E22CB  B8 01 00 00 00            MOV EAX,0x1
LAB_004e22d0:
004E22D0  5D                        POP EBP
004E22D1  C2 08 00                  RET 0x8
