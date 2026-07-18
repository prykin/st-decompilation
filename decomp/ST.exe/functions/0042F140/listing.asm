FUN_0042f140:
0042F140  55                        PUSH EBP
0042F141  8B EC                     MOV EBP,ESP
0042F143  83 EC 4C                  SUB ESP,0x4c
0042F146  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042F14A  53                        PUSH EBX
0042F14B  56                        PUSH ESI
0042F14C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042F14F  57                        PUSH EDI
0042F150  6A 00                     PUSH 0x0
0042F152  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042F155  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042F158  C1 E1 04                  SHL ECX,0x4
0042F15B  03 C8                     ADD ECX,EAX
0042F15D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042F162  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0042F165  8B 14 4D 25 4E 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f4e25]
0042F16C  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0042F16F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0042F172  8D 55 B8                  LEA EDX,[EBP + -0x48]
0042F175  52                        PUSH EDX
0042F176  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042F17C  E8 6F E6 2F 00            CALL 0x0072d7f0
0042F181  8B F0                     MOV ESI,EAX
0042F183  83 C4 08                  ADD ESP,0x8
0042F186  85 F6                     TEST ESI,ESI
0042F188  0F 85 85 00 00 00         JNZ 0x0042f213
0042F18E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0042F191  85 DB                     TEST EBX,EBX
0042F193  75 1A                     JNZ 0x0042f1af
0042F195  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042F19A  68 A7 06 00 00            PUSH 0x6a7
0042F19F  68 04 60 7A 00            PUSH 0x7a6004
0042F1A4  50                        PUSH EAX
0042F1A5  68 04 00 FE AF            PUSH 0xaffe0004
0042F1AA  E8 91 6C 27 00            CALL 0x006a5e40
LAB_0042f1af:
0042F1AF  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0042F1B2  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0042F1B5  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042F1B8  81 E6 FF FF 00 00         AND ESI,0xffff
0042F1BE  51                        PUSH ECX
0042F1BF  8B D6                     MOV EDX,ESI
0042F1C1  8B CF                     MOV ECX,EDI
0042F1C3  E8 A8 DA 27 00            CALL 0x006acc70
0042F1C8  83 F8 FC                  CMP EAX,-0x4
0042F1CB  74 05                     JZ 0x0042f1d2
0042F1CD  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
0042F1D0  74 1B                     JZ 0x0042f1ed
LAB_0042f1d2:
0042F1D2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0042F1D8  68 A9 06 00 00            PUSH 0x6a9
0042F1DD  68 04 60 7A 00            PUSH 0x7a6004
0042F1E2  52                        PUSH EDX
0042F1E3  68 02 00 FE AF            PUSH 0xaffe0002
0042F1E8  E8 53 6C 27 00            CALL 0x006a5e40
LAB_0042f1ed:
0042F1ED  8D 45 FC                  LEA EAX,[EBP + -0x4]
0042F1F0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0042F1F7  50                        PUSH EAX
0042F1F8  56                        PUSH ESI
0042F1F9  57                        PUSH EDI
0042F1FA  E8 41 EF 27 00            CALL 0x006ae140
0042F1FF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0042F202  33 C0                     XOR EAX,EAX
0042F204  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042F20A  5F                        POP EDI
0042F20B  5E                        POP ESI
0042F20C  5B                        POP EBX
0042F20D  8B E5                     MOV ESP,EBP
0042F20F  5D                        POP EBP
0042F210  C2 0C 00                  RET 0xc
LAB_0042f213:
0042F213  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0042F216  68 4C 66 7A 00            PUSH 0x7a664c
0042F21B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042F220  56                        PUSH ESI
0042F221  6A 00                     PUSH 0x0
0042F223  68 AD 06 00 00            PUSH 0x6ad
0042F228  68 04 60 7A 00            PUSH 0x7a6004
0042F22D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042F233  E8 98 E2 27 00            CALL 0x006ad4d0
0042F238  83 C4 18                  ADD ESP,0x18
0042F23B  85 C0                     TEST EAX,EAX
0042F23D  74 01                     JZ 0x0042f240
0042F23F  CC                        INT3
LAB_0042f240:
0042F240  68 AE 06 00 00            PUSH 0x6ae
0042F245  68 04 60 7A 00            PUSH 0x7a6004
0042F24A  6A 00                     PUSH 0x0
0042F24C  56                        PUSH ESI
0042F24D  E8 EE 6B 27 00            CALL 0x006a5e40
0042F252  5F                        POP EDI
0042F253  5E                        POP ESI
0042F254  83 C8 FF                  OR EAX,0xffffffff
0042F257  5B                        POP EBX
0042F258  8B E5                     MOV ESP,EBP
0042F25A  5D                        POP EBP
0042F25B  C2 0C 00                  RET 0xc
