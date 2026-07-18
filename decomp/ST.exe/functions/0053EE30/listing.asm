ProdPanelTy::PreInitProdPanel:
0053EE30  55                        PUSH EBP
0053EE31  8B EC                     MOV EBP,ESP
0053EE33  83 EC 48                  SUB ESP,0x48
0053EE36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053EE3B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053EE3E  56                        PUSH ESI
0053EE3F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053EE42  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053EE45  6A 00                     PUSH 0x0
0053EE47  52                        PUSH EDX
0053EE48  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053EE4B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053EE51  E8 9A E9 1E 00            CALL 0x0072d7f0
0053EE56  8B F0                     MOV ESI,EAX
0053EE58  83 C4 08                  ADD ESP,0x8
0053EE5B  85 F6                     TEST ESI,ESI
0053EE5D  75 42                     JNZ 0x0053eea1
0053EE5F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053EE62  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0053EE68  8D 46 4C                  LEA EAX,[ESI + 0x4c]
0053EE6B  50                        PUSH EAX
0053EE6C  6A 00                     PUSH 0x0
0053EE6E  6A 03                     PUSH 0x3
0053EE70  51                        PUSH ECX
0053EE71  E8 DA 2B 17 00            CALL 0x006b1a50
0053EE76  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
0053EE79  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0053EE7C  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0053EE7F  03 C2                     ADD EAX,EDX
0053EE81  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0053EE84  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0053EE87  2B C8                     SUB ECX,EAX
0053EE89  A1 34 67 80 00            MOV EAX,[0x00806734]
0053EE8E  03 C8                     ADD ECX,EAX
0053EE90  89 8E 74 01 00 00         MOV dword ptr [ESI + 0x174],ECX
0053EE96  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053EE9C  5E                        POP ESI
0053EE9D  8B E5                     MOV ESP,EBP
0053EE9F  5D                        POP EBP
0053EEA0  C3                        RET
LAB_0053eea1:
0053EEA1  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053EEA4  68 DC 79 7C 00            PUSH 0x7c79dc
0053EEA9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053EEAE  56                        PUSH ESI
0053EEAF  6A 00                     PUSH 0x0
0053EEB1  68 78 01 00 00            PUSH 0x178
0053EEB6  68 70 78 7C 00            PUSH 0x7c7870
0053EEBB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053EEC0  E8 0B E6 16 00            CALL 0x006ad4d0
0053EEC5  83 C4 18                  ADD ESP,0x18
0053EEC8  85 C0                     TEST EAX,EAX
0053EECA  74 01                     JZ 0x0053eecd
0053EECC  CC                        INT3
LAB_0053eecd:
0053EECD  68 78 01 00 00            PUSH 0x178
0053EED2  68 70 78 7C 00            PUSH 0x7c7870
0053EED7  6A 00                     PUSH 0x0
0053EED9  56                        PUSH ESI
0053EEDA  E8 61 6F 16 00            CALL 0x006a5e40
0053EEDF  5E                        POP ESI
0053EEE0  8B E5                     MOV ESP,EBP
0053EEE2  5D                        POP EBP
0053EEE3  C3                        RET
