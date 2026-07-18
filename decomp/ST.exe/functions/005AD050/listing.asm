ChooseMapTy::PaintChooseMap:
005AD050  55                        PUSH EBP
005AD051  8B EC                     MOV EBP,ESP
005AD053  83 EC 48                  SUB ESP,0x48
005AD056  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AD05B  53                        PUSH EBX
005AD05C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005AD05F  56                        PUSH ESI
005AD060  8D 55 BC                  LEA EDX,[EBP + -0x44]
005AD063  8D 4D B8                  LEA ECX,[EBP + -0x48]
005AD066  6A 00                     PUSH 0x0
005AD068  52                        PUSH EDX
005AD069  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005AD06C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AD072  E8 79 07 18 00            CALL 0x0072d7f0
005AD077  8B F0                     MOV ESI,EAX
005AD079  83 C4 08                  ADD ESP,0x8
005AD07C  85 F6                     TEST ESI,ESI
005AD07E  0F 85 EB 01 00 00         JNZ 0x005ad26f
005AD084  A1 34 67 80 00            MOV EAX,[0x00806734]
005AD089  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005AD08F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AD095  50                        PUSH EAX
005AD096  51                        PUSH ECX
005AD097  56                        PUSH ESI
005AD098  56                        PUSH ESI
005AD099  52                        PUSH EDX
005AD09A  E8 E1 8E 10 00            CALL 0x006b5f80
005AD09F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AD0A4  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005AD0A7  51                        PUSH ECX
005AD0A8  6A 01                     PUSH 0x1
005AD0AA  56                        PUSH ESI
005AD0AB  56                        PUSH ESI
005AD0AC  E8 87 66 E5 FF            CALL 0x00403738
005AD0B1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005AD0B4  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
005AD0B7  83 C4 10                  ADD ESP,0x10
005AD0BA  8B 86 B8 20 00 00         MOV EAX,dword ptr [ESI + 0x20b8]
005AD0C0  85 C0                     TEST EAX,EAX
005AD0C2  75 31                     JNZ 0x005ad0f5
005AD0C4  84 DB                     TEST BL,BL
005AD0C6  75 2D                     JNZ 0x005ad0f5
005AD0C8  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005AD0CE  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005AD0D3  81 C2 40 01 00 00         ADD EDX,0x140
005AD0D9  52                        PUSH EDX
005AD0DA  68 9D 01 00 00            PUSH 0x19d
005AD0DF  68 04 02 00 00            PUSH 0x204
005AD0E4  6A 38                     PUSH 0x38
005AD0E6  68 12 01 00 00            PUSH 0x112
005AD0EB  6A 00                     PUSH 0x0
005AD0ED  6A 00                     PUSH 0x0
005AD0EF  50                        PUSH EAX
005AD0F0  E8 DD 71 E5 FF            CALL 0x004042d2
LAB_005ad0f5:
005AD0F5  8B 86 BC 20 00 00         MOV EAX,dword ptr [ESI + 0x20bc]
005AD0FB  85 C0                     TEST EAX,EAX
005AD0FD  75 04                     JNZ 0x005ad103
005AD0FF  84 DB                     TEST BL,BL
005AD101  74 0E                     JZ 0x005ad111
LAB_005ad103:
005AD103  84 DB                     TEST BL,BL
005AD105  74 38                     JZ 0x005ad13f
005AD107  8A 86 B4 20 00 00         MOV AL,byte ptr [ESI + 0x20b4]
005AD10D  84 C0                     TEST AL,AL
005AD10F  75 2E                     JNZ 0x005ad13f
LAB_005ad111:
005AD111  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005AD117  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005AD11D  81 C1 40 01 00 00         ADD ECX,0x140
005AD123  51                        PUSH ECX
005AD124  68 21 01 00 00            PUSH 0x121
005AD129  68 F9 00 00 00            PUSH 0xf9
005AD12E  68 B4 00 00 00            PUSH 0xb4
005AD133  6A 0A                     PUSH 0xa
005AD135  6A 00                     PUSH 0x0
005AD137  6A 00                     PUSH 0x0
005AD139  52                        PUSH EDX
005AD13A  E8 93 71 E5 FF            CALL 0x004042d2
LAB_005ad13f:
005AD13F  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005AD145  3C 0C                     CMP AL,0xc
005AD147  74 0C                     JZ 0x005ad155
005AD149  3C 04                     CMP AL,0x4
005AD14B  74 08                     JZ 0x005ad155
005AD14D  3C 05                     CMP AL,0x5
005AD14F  74 04                     JZ 0x005ad155
005AD151  3C 13                     CMP AL,0x13
005AD153  75 49                     JNZ 0x005ad19e
LAB_005ad155:
005AD155  8B 86 C0 20 00 00         MOV EAX,dword ptr [ESI + 0x20c0]
005AD15B  85 C0                     TEST EAX,EAX
005AD15D  75 04                     JNZ 0x005ad163
005AD15F  84 DB                     TEST BL,BL
005AD161  74 0E                     JZ 0x005ad171
LAB_005ad163:
005AD163  84 DB                     TEST BL,BL
005AD165  74 37                     JZ 0x005ad19e
005AD167  8A 86 B7 20 00 00         MOV AL,byte ptr [ESI + 0x20b7]
005AD16D  84 C0                     TEST AL,AL
005AD16F  75 2D                     JNZ 0x005ad19e
LAB_005ad171:
005AD171  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005AD177  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005AD17D  05 40 01 00 00            ADD EAX,0x140
005AD182  50                        PUSH EAX
005AD183  6A 62                     PUSH 0x62
005AD185  68 90 01 00 00            PUSH 0x190
005AD18A  68 F1 01 00 00            PUSH 0x1f1
005AD18F  68 C8 00 00 00            PUSH 0xc8
005AD194  6A 00                     PUSH 0x0
005AD196  6A 00                     PUSH 0x0
005AD198  51                        PUSH ECX
005AD199  E8 C3 69 E5 FF            CALL 0x00403b61
LAB_005ad19e:
005AD19E  33 C0                     XOR EAX,EAX
005AD1A0  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005AD1A6  48                        DEC EAX
005AD1A7  83 F8 12                  CMP EAX,0x12
005AD1AA  0F 87 AE 00 00 00         JA 0x005ad25e
005AD1B0  33 D2                     XOR EDX,EDX
005AD1B2  8A 90 CC D2 5A 00         MOV DL,byte ptr [EAX + 0x5ad2cc]
switchD_005ad1b8::switchD:
005AD1B8  FF 24 95 B8 D2 5A 00      JMP dword ptr [EDX*0x4 + 0x5ad2b8]
switchD_005ad1b8::caseD_9:
005AD1BF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AD1C4  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005AD1CA  6A 00                     PUSH 0x0
005AD1CC  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005AD1CF  51                        PUSH ECX
005AD1D0  6A FF                     PUSH -0x1
005AD1D2  6A FE                     PUSH -0x2
005AD1D4  52                        PUSH EDX
005AD1D5  68 AD 26 00 00            PUSH 0x26ad
005AD1DA  EB 64                     JMP 0x005ad240
switchD_005ad1b8::caseD_1:
005AD1DC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AD1E1  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005AD1E7  6A 00                     PUSH 0x0
005AD1E9  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005AD1EC  51                        PUSH ECX
005AD1ED  6A FF                     PUSH -0x1
005AD1EF  6A FE                     PUSH -0x2
005AD1F1  52                        PUSH EDX
005AD1F2  68 AE 26 00 00            PUSH 0x26ae
005AD1F7  EB 47                     JMP 0x005ad240
switchD_005ad1b8::caseD_13:
005AD1F9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AD1FE  8A 1D 00 34 80 00         MOV BL,byte ptr [0x00803400]
005AD204  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005AD20A  6A 00                     PUSH 0x0
005AD20C  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005AD20F  33 C0                     XOR EAX,EAX
005AD211  80 FB 0C                  CMP BL,0xc
005AD214  51                        PUSH ECX
005AD215  0F 95 C0                  SETNZ AL
005AD218  6A FF                     PUSH -0x1
005AD21A  6A FE                     PUSH -0x2
005AD21C  05 AD 26 00 00            ADD EAX,0x26ad
005AD221  52                        PUSH EDX
005AD222  50                        PUSH EAX
005AD223  EB 1B                     JMP 0x005ad240
switchD_005ad1b8::caseD_3:
005AD225  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AD22B  A1 18 76 80 00            MOV EAX,[0x00807618]
005AD230  6A 00                     PUSH 0x0
005AD232  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
005AD235  52                        PUSH EDX
005AD236  6A FF                     PUSH -0x1
005AD238  6A FE                     PUSH -0x2
005AD23A  50                        PUSH EAX
005AD23B  68 AF 26 00 00            PUSH 0x26af
LAB_005ad240:
005AD240  E8 FB 2E 10 00            CALL 0x006b0140
005AD245  50                        PUSH EAX
005AD246  6A 18                     PUSH 0x18
005AD248  68 4C 01 00 00            PUSH 0x14c
005AD24D  6A 14                     PUSH 0x14
005AD24F  68 E9 00 00 00            PUSH 0xe9
005AD254  6A 00                     PUSH 0x0
005AD256  E8 D2 79 E5 FF            CALL 0x00404c2d
005AD25B  83 C4 28                  ADD ESP,0x28
switchD_005ad1b8::caseD_6:
005AD25E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005AD261  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AD267  5E                        POP ESI
005AD268  5B                        POP EBX
005AD269  8B E5                     MOV ESP,EBP
005AD26B  5D                        POP EBP
005AD26C  C2 04 00                  RET 0x4
LAB_005ad26f:
005AD26F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005AD272  68 CC C7 7C 00            PUSH 0x7cc7cc
005AD277  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AD27C  56                        PUSH ESI
005AD27D  6A 00                     PUSH 0x0
005AD27F  68 BB 01 00 00            PUSH 0x1bb
005AD284  68 28 C7 7C 00            PUSH 0x7cc728
005AD289  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AD28F  E8 3C 02 10 00            CALL 0x006ad4d0
005AD294  83 C4 18                  ADD ESP,0x18
005AD297  85 C0                     TEST EAX,EAX
005AD299  74 01                     JZ 0x005ad29c
005AD29B  CC                        INT3
LAB_005ad29c:
005AD29C  68 BB 01 00 00            PUSH 0x1bb
005AD2A1  68 28 C7 7C 00            PUSH 0x7cc728
005AD2A6  6A 00                     PUSH 0x0
005AD2A8  56                        PUSH ESI
005AD2A9  E8 92 8B 0F 00            CALL 0x006a5e40
005AD2AE  5E                        POP ESI
005AD2AF  5B                        POP EBX
005AD2B0  8B E5                     MOV ESP,EBP
005AD2B2  5D                        POP EBP
005AD2B3  C2 04 00                  RET 0x4
