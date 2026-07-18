FUN_004d85e0:
004D85E0  55                        PUSH EBP
004D85E1  8B EC                     MOV EBP,ESP
004D85E3  83 EC 0C                  SUB ESP,0xc
004D85E6  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004D85EB  53                        PUSH EBX
004D85EC  56                        PUSH ESI
004D85ED  57                        PUSH EDI
004D85EE  33 FF                     XOR EDI,EDI
004D85F0  3B C7                     CMP EAX,EDI
004D85F2  74 5E                     JZ 0x004d8652
004D85F4  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
004D85F7  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004D85FD  8D 55 F4                  LEA EDX,[EBP + -0xc]
004D8600  E8 8B 8B 1D 00            CALL 0x006b1190
004D8605  85 C0                     TEST EAX,EAX
004D8607  7C 49                     JL 0x004d8652
004D8609  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004D860C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_004d860f:
004D860F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004D8612  85 C9                     TEST ECX,ECX
004D8614  74 2A                     JZ 0x004d8640
004D8616  8D 45 FA                  LEA EAX,[EBP + -0x6]
004D8619  8D 55 FC                  LEA EDX,[EBP + -0x4]
004D861C  50                        PUSH EAX
004D861D  8D 45 FE                  LEA EAX,[EBP + -0x2]
004D8620  52                        PUSH EDX
004D8621  50                        PUSH EAX
004D8622  E8 9E 92 F2 FF            CALL 0x004018c5
004D8627  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
004D862B  3B CE                     CMP ECX,ESI
004D862D  75 11                     JNZ 0x004d8640
004D862F  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004D8633  3B 55 0C                  CMP EDX,dword ptr [EBP + 0xc]
004D8636  75 08                     JNZ 0x004d8640
004D8638  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
004D863C  3B C3                     CMP EAX,EBX
004D863E  74 1D                     JZ 0x004d865d
LAB_004d8640:
004D8640  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004D8646  8D 55 F4                  LEA EDX,[EBP + -0xc]
004D8649  E8 42 8B 1D 00            CALL 0x006b1190
004D864E  85 C0                     TEST EAX,EAX
004D8650  7D BD                     JGE 0x004d860f
LAB_004d8652:
004D8652  8B C7                     MOV EAX,EDI
004D8654  5F                        POP EDI
004D8655  5E                        POP ESI
004D8656  5B                        POP EBX
004D8657  8B E5                     MOV ESP,EBP
004D8659  5D                        POP EBP
004D865A  C2 0C 00                  RET 0xc
LAB_004d865d:
004D865D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004D8660  5F                        POP EDI
004D8661  5E                        POP ESI
004D8662  5B                        POP EBX
004D8663  8B E5                     MOV ESP,EBP
004D8665  5D                        POP EBP
004D8666  C2 0C 00                  RET 0xc
