FUN_00575a10:
00575A10  55                        PUSH EBP
00575A11  8B EC                     MOV EBP,ESP
00575A13  6A FF                     PUSH -0x1
00575A15  68 18 B1 79 00            PUSH 0x79b118
00575A1A  68 64 D9 72 00            PUSH 0x72d964
00575A1F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00575A25  50                        PUSH EAX
00575A26  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00575A2D  83 EC 54                  SUB ESP,0x54
00575A30  53                        PUSH EBX
00575A31  56                        PUSH ESI
00575A32  57                        PUSH EDI
00575A33  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00575A36  68 FC AA 7C 00            PUSH 0x7caafc
00575A3B  FF 15 4C BC 85 00         CALL dword ptr [0x0085bc4c]
00575A41  A3 18 76 80 00            MOV [0x00807618],EAX
00575A46  85 C0                     TEST EAX,EAX
00575A48  75 16                     JNZ 0x00575a60
00575A4A  83 C8 FF                  OR EAX,0xffffffff
00575A4D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00575A50  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00575A57  5F                        POP EDI
00575A58  5E                        POP ESI
00575A59  5B                        POP EBX
00575A5A  8B E5                     MOV ESP,EBP
00575A5C  5D                        POP EBP
00575A5D  C2 10 00                  RET 0x10
LAB_00575a60:
00575A60  50                        PUSH EAX
00575A61  6A 64                     PUSH 0x64
00575A63  E8 D8 A6 13 00            CALL 0x006b0140
00575A68  50                        PUSH EAX
00575A69  6A 00                     PUSH 0x0
00575A6B  E8 F0 97 1B 00            CALL 0x0072f260
00575A70  83 C4 08                  ADD ESP,0x8
00575A73  6A 00                     PUSH 0x0
00575A75  68 EC AA 7C 00            PUSH 0x7caaec
00575A7A  6A 18                     PUSH 0x18
00575A7C  E8 0F 77 13 00            CALL 0x006ad190
00575A81  E8 70 EC E8 FF            CALL 0x004046f6
00575A86  33 C0                     XOR EAX,EAX
00575A88  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00575A8B  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00575A91  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00575A94  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00575A97  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00575A9D  8D 4D A8                  LEA ECX,[EBP + -0x58]
00575AA0  50                        PUSH EAX
00575AA1  68 21 DA 72 00            PUSH 0x72da21
00575AA6  6A 02                     PUSH 0x2
00575AA8  51                        PUSH ECX
00575AA9  E8 42 7D 1B 00            CALL 0x0072d7f0
00575AAE  83 C4 10                  ADD ESP,0x10
00575AB1  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00575AB4  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00575AB7  85 C0                     TEST EAX,EAX
00575AB9  75 42                     JNZ 0x00575afd
00575ABB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00575ABE  52                        PUSH EDX
00575ABF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00575AC2  50                        PUSH EAX
00575AC3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00575AC6  51                        PUSH ECX
00575AC7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00575ACA  52                        PUSH EDX
00575ACB  B9 20 76 80 00            MOV ECX,0x807620
00575AD0  E8 1D EB E8 FF            CALL 0x004045f2
00575AD5  83 F8 01                  CMP EAX,0x1
00575AD8  74 0C                     JZ 0x00575ae6
00575ADA  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00575AE1  E9 FD 00 00 00            JMP 0x00575be3
LAB_00575ae6:
00575AE6  B9 20 76 80 00            MOV ECX,0x807620
00575AEB  E8 D0 F4 16 00            CALL 0x006e4fc0
00575AF0  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00575AF3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00575AF8  E9 82 00 00 00            JMP 0x00575b7f
LAB_00575afd:
00575AFD  C7 45 9C 00 00 00 00      MOV dword ptr [EBP + -0x64],0x0
00575B04  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00575B07  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00575B0D  3D 0A 00 FE AF            CMP EAX,0xaffe000a
00575B12  74 6B                     JZ 0x00575b7f
00575B14  3D 0B 00 FE AF            CMP EAX,0xaffe000b
00575B19  7E 07                     JLE 0x00575b22
00575B1B  3D 0D 00 FE AF            CMP EAX,0xaffe000d
00575B20  7E 5D                     JLE 0x00575b7f
LAB_00575b22:
00575B22  6A 00                     PUSH 0x0
00575B24  68 D8 AA 7C 00            PUSH 0x7caad8
00575B29  68 D8 AA 7C 00            PUSH 0x7caad8
00575B2E  8B 15 48 67 80 00         MOV EDX,dword ptr [0x00806748]
00575B34  52                        PUSH EDX
00575B35  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
00575B3B  EB 42                     JMP 0x00575b7f
LAB_00575b7f:
00575B7F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00575B86  A1 76 FB 80 00            MOV EAX,[0x0080fb76]
00575B8B  85 C0                     TEST EAX,EAX
00575B8D  74 26                     JZ 0x00575bb5
00575B8F  68 26 F1 80 00            PUSH 0x80f126
00575B94  8B 15 14 B1 79 00         MOV EDX,dword ptr [0x0079b114]
00575B9A  52                        PUSH EDX
00575B9B  68 80 76 80 00            PUSH 0x807680
00575BA0  68 DC 6E 7C 00            PUSH 0x7c6edc
00575BA5  68 3A F3 80 00            PUSH 0x80f33a
00575BAA  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00575BB0  83 C4 14                  ADD ESP,0x14
00575BB3  EB 21                     JMP 0x00575bd6
LAB_00575bb5:
00575BB5  A1 72 FB 80 00            MOV EAX,[0x0080fb72]
00575BBA  85 C0                     TEST EAX,EAX
00575BBC  74 25                     JZ 0x00575be3
00575BBE  68 80 76 80 00            PUSH 0x807680
00575BC3  68 C4 AA 7C 00            PUSH 0x7caac4
00575BC8  68 3A F3 80 00            PUSH 0x80f33a
00575BCD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00575BD3  83 C4 0C                  ADD ESP,0xc
LAB_00575bd6:
00575BD6  6A 01                     PUSH 0x1
00575BD8  68 3A F3 80 00            PUSH 0x80f33a
00575BDD  FF 15 C4 BB 85 00         CALL dword ptr [0x0085bbc4]
LAB_00575be3:
00575BE3  33 C0                     XOR EAX,EAX
00575BE5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00575BE8  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00575BEF  5F                        POP EDI
00575BF0  5E                        POP ESI
00575BF1  5B                        POP EBX
00575BF2  8B E5                     MOV ESP,EBP
00575BF4  5D                        POP EBP
00575BF5  C2 10 00                  RET 0x10
