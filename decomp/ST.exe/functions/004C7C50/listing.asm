FUN_004c7c50:
004C7C50  55                        PUSH EBP
004C7C51  8B EC                     MOV EBP,ESP
004C7C53  8B 91 35 02 00 00         MOV EDX,dword ptr [ECX + 0x235]
004C7C59  33 C0                     XOR EAX,EAX
004C7C5B  56                        PUSH ESI
004C7C5C  8D 0C D2                  LEA ECX,[EDX + EDX*0x8]
004C7C5F  8B 0C 8D 04 44 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x794404]
004C7C66  85 C9                     TEST ECX,ECX
004C7C68  74 25                     JZ 0x004c7c8f
004C7C6A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004C7C6D  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
004C7C70  8D 14 95 04 44 79 00      LEA EDX,[EDX*0x4 + 0x794404]
LAB_004c7c77:
004C7C77  3B CE                     CMP ECX,ESI
004C7C79  74 0F                     JZ 0x004c7c8a
004C7C7B  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
004C7C7E  83 C2 04                  ADD EDX,0x4
004C7C81  85 C9                     TEST ECX,ECX
004C7C83  75 F2                     JNZ 0x004c7c77
004C7C85  5E                        POP ESI
004C7C86  5D                        POP EBP
004C7C87  C2 04 00                  RET 0x4
LAB_004c7c8a:
004C7C8A  B8 01 00 00 00            MOV EAX,0x1
LAB_004c7c8f:
004C7C8F  5E                        POP ESI
004C7C90  5D                        POP EBP
004C7C91  C2 04 00                  RET 0x4
