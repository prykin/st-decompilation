FUN_004f1c80:
004F1C80  55                        PUSH EBP
004F1C81  8B EC                     MOV EBP,ESP
004F1C83  53                        PUSH EBX
004F1C84  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004F1C87  56                        PUSH ESI
004F1C88  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F1C8B  57                        PUSH EDI
004F1C8C  8B F9                     MOV EDI,ECX
004F1C8E  8D 45 0C                  LEA EAX,[EBP + 0xc]
004F1C91  8D 4D 08                  LEA ECX,[EBP + 0x8]
004F1C94  50                        PUSH EAX
004F1C95  51                        PUSH ECX
004F1C96  53                        PUSH EBX
004F1C97  56                        PUSH ESI
004F1C98  8B CF                     MOV ECX,EDI
004F1C9A  E8 54 3C F1 FF            CALL 0x004058f3
004F1C9F  85 C0                     TEST EAX,EAX
004F1CA1  74 47                     JZ 0x004f1cea
004F1CA3  81 E6 FF 00 00 00         AND ESI,0xff
004F1CA9  81 E3 FF 00 00 00         AND EBX,0xff
004F1CAF  33 C9                     XOR ECX,ECX
004F1CB1  8D 14 76                  LEA EDX,[ESI + ESI*0x2]
004F1CB4  8D 04 53                  LEA EAX,[EBX + EDX*0x2]
004F1CB7  8A 8C 38 3B 0D 00 00      MOV CL,byte ptr [EAX + EDI*0x1 + 0xd3b]
004F1CBE  8B 94 87 0B 0D 00 00      MOV EDX,dword ptr [EDI + EAX*0x4 + 0xd0b]
004F1CC5  51                        PUSH ECX
004F1CC6  52                        PUSH EDX
004F1CC7  E8 84 99 21 00            CALL 0x0070b650
004F1CCC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004F1CCF  BA 6A 00 00 00            MOV EDX,0x6a
004F1CD4  50                        PUSH EAX
004F1CD5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F1CD8  2B D6                     SUB EDX,ESI
004F1CDA  6A 06                     PUSH 0x6
004F1CDC  50                        PUSH EAX
004F1CDD  51                        PUSH ECX
004F1CDE  8B 04 97                  MOV EAX,dword ptr [EDI + EDX*0x4]
004F1CE1  50                        PUSH EAX
004F1CE2  E8 42 15 F1 FF            CALL 0x00403229
004F1CE7  83 C4 1C                  ADD ESP,0x1c
LAB_004f1cea:
004F1CEA  5F                        POP EDI
004F1CEB  5E                        POP ESI
004F1CEC  5B                        POP EBX
004F1CED  5D                        POP EBP
004F1CEE  C2 08 00                  RET 0x8
