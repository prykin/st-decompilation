OptPanelTy::PaintDblBut:
0052EFB0  55                        PUSH EBP
0052EFB1  8B EC                     MOV EBP,ESP
0052EFB3  83 EC 5C                  SUB ESP,0x5c
0052EFB6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052EFB9  53                        PUSH EBX
0052EFBA  56                        PUSH ESI
0052EFBB  57                        PUSH EDI
0052EFBC  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
0052EFBF  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
0052EFC2  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
0052EFC5  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0052EFC8  85 FF                     TEST EDI,EDI
0052EFCA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0052EFD1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0052EFD4  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0052EFD7  74 05                     JZ 0x0052efde
0052EFD9  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0052EFDC  EB 02                     JMP 0x0052efe0
LAB_0052efde:
0052EFDE  8B 02                     MOV EAX,dword ptr [EDX]
LAB_0052efe0:
0052EFE0  2B 41 3C                  SUB EAX,dword ptr [ECX + 0x3c]
0052EFE3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0052EFE6  8B 41 5C                  MOV EAX,dword ptr [ECX + 0x5c]
0052EFE9  85 C0                     TEST EAX,EAX
0052EFEB  75 18                     JNZ 0x0052f005
0052EFED  85 FF                     TEST EDI,EDI
0052EFEF  74 0A                     JZ 0x0052effb
0052EFF1  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
0052EFF4  8B 41 48                  MOV EAX,dword ptr [ECX + 0x48]
0052EFF7  03 C2                     ADD EAX,EDX
0052EFF9  EB 19                     JMP 0x0052f014
LAB_0052effb:
0052EFFB  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
0052EFFE  8B 41 48                  MOV EAX,dword ptr [ECX + 0x48]
0052F001  03 C2                     ADD EAX,EDX
0052F003  EB 0F                     JMP 0x0052f014
LAB_0052f005:
0052F005  85 FF                     TEST EDI,EDI
0052F007  74 05                     JZ 0x0052f00e
0052F009  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0052F00C  EB 03                     JMP 0x0052f011
LAB_0052f00e:
0052F00E  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
LAB_0052f011:
0052F011  2B 41 44                  SUB EAX,dword ptr [ECX + 0x44]
LAB_0052f014:
0052F014  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0052F017  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0052F01A  85 C0                     TEST EAX,EAX
0052F01C  0F 84 DE 01 00 00         JZ 0x0052f200
0052F022  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0052F025  85 C0                     TEST EAX,EAX
0052F027  0F 84 D3 01 00 00         JZ 0x0052f200
0052F02D  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0052F033  8D 45 A8                  LEA EAX,[EBP + -0x58]
0052F036  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0052F039  6A 00                     PUSH 0x0
0052F03B  50                        PUSH EAX
0052F03C  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
0052F03F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052F045  E8 A6 E7 1F 00            CALL 0x0072d7f0
0052F04A  8B F0                     MOV ESI,EAX
0052F04C  83 C4 08                  ADD ESP,0x8
0052F04F  85 F6                     TEST ESI,ESI
0052F051  0F 85 6B 01 00 00         JNZ 0x0052f1c2
0052F057  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0052F05A  6A 01                     PUSH 0x1
0052F05C  50                        PUSH EAX
0052F05D  51                        PUSH ECX
0052F05E  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052F064  6A 01                     PUSH 0x1
0052F066  E8 75 2C 1C 00            CALL 0x006f1ce0
0052F06B  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0052F06E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0052F071  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0052F074  50                        PUSH EAX
0052F075  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0052F078  6A 01                     PUSH 0x1
0052F07A  53                        PUSH EBX
0052F07B  57                        PUSH EDI
0052F07C  52                        PUSH EDX
0052F07D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0052F080  E8 A4 41 ED FF            CALL 0x00403229
0052F085  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052F08B  83 C4 14                  ADD ESP,0x14
0052F08E  8D 45 FC                  LEA EAX,[EBP + -0x4]
0052F091  50                        PUSH EAX
0052F092  E8 49 30 1C 00            CALL 0x006f20e0
0052F097  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052F09A  6A 01                     PUSH 0x1
0052F09C  6A 00                     PUSH 0x0
0052F09E  51                        PUSH ECX
0052F09F  FF 55 14                  CALL dword ptr [EBP + 0x14]
0052F0A2  83 C4 04                  ADD ESP,0x4
0052F0A5  50                        PUSH EAX
0052F0A6  6A 01                     PUSH 0x1
0052F0A8  6A 00                     PUSH 0x0
0052F0AA  68 D0 71 7C 00            PUSH 0x7c71d0
0052F0AF  E8 C8 66 ED FF            CALL 0x0040577c
0052F0B4  83 C4 08                  ADD ESP,0x8
0052F0B7  50                        PUSH EAX
0052F0B8  E8 43 3B 1C 00            CALL 0x006f2c00
0052F0BD  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052F0C3  83 C4 0C                  ADD ESP,0xc
0052F0C6  50                        PUSH EAX
0052F0C7  6A 01                     PUSH 0x1
0052F0C9  E8 12 2C 1C 00            CALL 0x006f1ce0
0052F0CE  8B C8                     MOV ECX,EAX
0052F0D0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0052F0D3  85 C0                     TEST EAX,EAX
0052F0D5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0052F0D8  74 08                     JZ 0x0052f0e2
0052F0DA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052F0DD  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0052F0E0  EB 06                     JMP 0x0052f0e8
LAB_0052f0e2:
0052F0E2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0052F0E5  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
LAB_0052f0e8:
0052F0E8  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0052F0EB  51                        PUSH ECX
0052F0EC  2B C2                     SUB EAX,EDX
0052F0EE  6A 01                     PUSH 0x1
0052F0F0  99                        CDQ
0052F0F1  2B C2                     SUB EAX,EDX
0052F0F3  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0052F0F6  D1 F8                     SAR EAX,0x1
0052F0F8  83 C7 05                  ADD EDI,0x5
0052F0FB  8D 4C 18 01               LEA ECX,[EAX + EBX*0x1 + 0x1]
0052F0FF  51                        PUSH ECX
0052F100  57                        PUSH EDI
0052F101  52                        PUSH EDX
0052F102  E8 22 41 ED FF            CALL 0x00403229
0052F107  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052F10A  83 C4 14                  ADD ESP,0x14
0052F10D  8D 4D FC                  LEA ECX,[EBP + -0x4]
0052F110  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0052F113  51                        PUSH ECX
0052F114  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052F11A  E8 C1 2F 1C 00            CALL 0x006f20e0
0052F11F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0052F122  85 C0                     TEST EAX,EAX
0052F124  74 08                     JZ 0x0052f12e
0052F126  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052F129  8B 4A 18                  MOV ECX,dword ptr [EDX + 0x18]
0052F12C  EB 06                     JMP 0x0052f134
LAB_0052f12e:
0052F12E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0052F131  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
LAB_0052f134:
0052F134  85 C0                     TEST EAX,EAX
0052F136  74 08                     JZ 0x0052f140
0052F138  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052F13B  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
0052F13E  EB 06                     JMP 0x0052f146
LAB_0052f140:
0052F140  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0052F143  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
LAB_0052f146:
0052F146  51                        PUSH ECX
0052F147  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0052F14A  2B C7                     SUB EAX,EDI
0052F14C  83 E8 0A                  SUB EAX,0xa
0052F14F  8D 54 0F 0A               LEA EDX,[EDI + ECX*0x1 + 0xa]
0052F153  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
0052F159  50                        PUSH EAX
0052F15A  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0052F15D  53                        PUSH EBX
0052F15E  52                        PUSH EDX
0052F15F  6A 00                     PUSH 0x0
0052F161  50                        PUSH EAX
0052F162  E8 29 19 1E 00            CALL 0x00710a90
0052F167  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052F16A  6A FF                     PUSH -0x1
0052F16C  6A FF                     PUSH -0x1
0052F16E  51                        PUSH ECX
0052F16F  FF 55 18                  CALL dword ptr [EBP + 0x18]
0052F172  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0052F178  83 C4 04                  ADD ESP,0x4
0052F17B  50                        PUSH EAX
0052F17C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0052F17F  6A FF                     PUSH -0x1
0052F181  6A 00                     PUSH 0x0
0052F183  52                        PUSH EDX
0052F184  50                        PUSH EAX
0052F185  E8 B6 0F 18 00            CALL 0x006b0140
0052F18A  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
0052F190  50                        PUSH EAX
0052F191  E8 DA 29 1E 00            CALL 0x00711b70
0052F196  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0052F199  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0052F19C  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
0052F19F  51                        PUSH ECX
0052F1A0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052F1A6  52                        PUSH EDX
0052F1A7  6A FF                     PUSH -0x1
0052F1A9  50                        PUSH EAX
0052F1AA  51                        PUSH ECX
0052F1AB  E8 90 44 18 00            CALL 0x006b3640
0052F1B0  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0052F1B3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052F1B9  5F                        POP EDI
0052F1BA  5E                        POP ESI
0052F1BB  5B                        POP EBX
0052F1BC  8B E5                     MOV ESP,EBP
0052F1BE  5D                        POP EBP
0052F1BF  C2 18 00                  RET 0x18
LAB_0052f1c2:
0052F1C2  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0052F1C5  68 B4 71 7C 00            PUSH 0x7c71b4
0052F1CA  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052F1CF  56                        PUSH ESI
0052F1D0  6A 00                     PUSH 0x0
0052F1D2  68 CA 00 00 00            PUSH 0xca
0052F1D7  68 A0 70 7C 00            PUSH 0x7c70a0
0052F1DC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052F1E1  E8 EA E2 17 00            CALL 0x006ad4d0
0052F1E6  83 C4 18                  ADD ESP,0x18
0052F1E9  85 C0                     TEST EAX,EAX
0052F1EB  74 01                     JZ 0x0052f1ee
0052F1ED  CC                        INT3
LAB_0052f1ee:
0052F1EE  68 CA 00 00 00            PUSH 0xca
0052F1F3  68 A0 70 7C 00            PUSH 0x7c70a0
0052F1F8  6A 00                     PUSH 0x0
0052F1FA  56                        PUSH ESI
0052F1FB  E8 40 6C 17 00            CALL 0x006a5e40
LAB_0052f200:
0052F200  5F                        POP EDI
0052F201  5E                        POP ESI
0052F202  5B                        POP EBX
0052F203  8B E5                     MOV ESP,EBP
0052F205  5D                        POP EBP
0052F206  C2 18 00                  RET 0x18
