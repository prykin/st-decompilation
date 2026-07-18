FUN_00721080:
00721080  55                        PUSH EBP
00721081  8B EC                     MOV EBP,ESP
00721083  83 EC 0C                  SUB ESP,0xc
00721086  53                        PUSH EBX
00721087  56                        PUSH ESI
00721088  8B F1                     MOV ESI,ECX
0072108A  57                        PUSH EDI
0072108B  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00721091  85 C0                     TEST EAX,EAX
00721093  0F 84 91 02 00 00         JZ 0x0072132a
00721099  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072109C  85 C9                     TEST ECX,ECX
0072109E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007210A1  0F 84 83 02 00 00         JZ 0x0072132a
007210A7  8B 96 44 01 00 00         MOV EDX,dword ptr [ESI + 0x144]
007210AD  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
007210B0  03 D7                     ADD EDX,EDI
007210B2  85 D2                     TEST EDX,EDX
007210B4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007210B7  0F 8C 6D 02 00 00         JL 0x0072132a
007210BD  3B D1                     CMP EDX,ECX
007210BF  7C 06                     JL 0x007210c7
007210C1  8D 51 FF                  LEA EDX,[ECX + -0x1]
007210C4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_007210c7:
007210C7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007210CA  81 FF FF 0F 00 00         CMP EDI,0xfff
007210D0  75 22                     JNZ 0x007210f4
007210D2  3B D1                     CMP EDX,ECX
007210D4  7D 08                     JGE 0x007210de
007210D6  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
007210D9  8B 3C 90                  MOV EDI,dword ptr [EAX + EDX*0x4]
007210DC  EB 02                     JMP 0x007210e0
LAB_007210de:
007210DE  33 FF                     XOR EDI,EDI
LAB_007210e0:
007210E0  83 C9 FF                  OR ECX,0xffffffff
007210E3  33 C0                     XOR EAX,EAX
007210E5  F2 AE                     SCASB.REPNE ES:EDI
007210E7  F7 D1                     NOT ECX
007210E9  49                        DEC ECX
007210EA  8B D9                     MOV EBX,ECX
007210EC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007210EF  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
007210F2  EB 21                     JMP 0x00721115
LAB_007210f4:
007210F4  81 FF FE 0F 00 00         CMP EDI,0xffe
007210FA  75 0C                     JNZ 0x00721108
007210FC  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
00721103  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00721106  EB 15                     JMP 0x0072111d
LAB_00721108:
00721108  8B 86 48 01 00 00         MOV EAX,dword ptr [ESI + 0x148]
0072110E  03 C7                     ADD EAX,EDI
00721110  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00721113  8B D8                     MOV EBX,EAX
LAB_00721115:
00721115  85 DB                     TEST EBX,EBX
00721117  0F 8C 0D 02 00 00         JL 0x0072132a
LAB_0072111d:
0072111D  3B D1                     CMP EDX,ECX
0072111F  7D 0E                     JGE 0x0072112f
00721121  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00721127  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072112A  8B 3C 91                  MOV EDI,dword ptr [ECX + EDX*0x4]
0072112D  EB 02                     JMP 0x00721131
LAB_0072112f:
0072112F  33 FF                     XOR EDI,EDI
LAB_00721131:
00721131  83 C9 FF                  OR ECX,0xffffffff
00721134  33 C0                     XOR EAX,EAX
00721136  F2 AE                     SCASB.REPNE ES:EDI
00721138  F7 D1                     NOT ECX
0072113A  49                        DEC ECX
0072113B  3B D9                     CMP EBX,ECX
0072113D  76 24                     JBE 0x00721163
0072113F  3B 55 F8                  CMP EDX,dword ptr [EBP + -0x8]
00721142  7D 0E                     JGE 0x00721152
00721144  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
0072114A  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0072114D  8B 3C 90                  MOV EDI,dword ptr [EAX + EDX*0x4]
00721150  EB 02                     JMP 0x00721154
LAB_00721152:
00721152  33 FF                     XOR EDI,EDI
LAB_00721154:
00721154  83 C9 FF                  OR ECX,0xffffffff
00721157  33 C0                     XOR EAX,EAX
00721159  F2 AE                     SCASB.REPNE ES:EDI
0072115B  F7 D1                     NOT ECX
0072115D  49                        DEC ECX
0072115E  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00721161  8B D9                     MOV EBX,ECX
LAB_00721163:
00721163  39 9E 48 01 00 00         CMP dword ptr [ESI + 0x148],EBX
00721169  76 06                     JBE 0x00721171
0072116B  89 9E 48 01 00 00         MOV dword ptr [ESI + 0x148],EBX
LAB_00721171:
00721171  39 96 44 01 00 00         CMP dword ptr [ESI + 0x144],EDX
00721177  76 06                     JBE 0x0072117f
00721179  89 96 44 01 00 00         MOV dword ptr [ESI + 0x144],EDX
LAB_0072117f:
0072117F  8B 9E 44 01 00 00         MOV EBX,dword ptr [ESI + 0x144]
00721185  33 C0                     XOR EAX,EAX
00721187  3B DA                     CMP EBX,EDX
00721189  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072118C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072118F  0F 8F 9A 00 00 00         JG 0x0072122f
LAB_00721195:
00721195  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
0072119B  3B 58 08                  CMP EBX,dword ptr [EAX + 0x8]
0072119E  7D 08                     JGE 0x007211a8
007211A0  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
007211A3  8B 14 99                  MOV EDX,dword ptr [ECX + EBX*0x4]
007211A6  EB 02                     JMP 0x007211aa
LAB_007211a8:
007211A8  33 D2                     XOR EDX,EDX
LAB_007211aa:
007211AA  8B FA                     MOV EDI,EDX
007211AC  83 C9 FF                  OR ECX,0xffffffff
007211AF  33 C0                     XOR EAX,EAX
007211B1  F2 AE                     SCASB.REPNE ES:EDI
007211B3  F7 D1                     NOT ECX
007211B5  49                        DEC ECX
007211B6  75 3C                     JNZ 0x007211f4
007211B8  8B 15 FC 0A 7F 00         MOV EDX,dword ptr [0x007f0afc]
LAB_007211be:
007211BE  52                        PUSH EDX
LAB_007211bf:
007211BF  8B 8E 14 02 00 00         MOV ECX,dword ptr [ESI + 0x214]
007211C5  E8 F6 FF FE FF            CALL 0x007111c0
007211CA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007211CD  8B 7E 30                  MOV EDI,dword ptr [ESI + 0x30]
007211D0  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
007211D3  3B D7                     CMP EDX,EDI
007211D5  7F 2B                     JG 0x00721202
007211D7  8B 96 14 02 00 00         MOV EDX,dword ptr [ESI + 0x214]
007211DD  8B 52 5C                  MOV EDX,dword ptr [EDX + 0x5c]
007211E0  03 D0                     ADD EDX,EAX
007211E2  03 CA                     ADD ECX,EDX
007211E4  43                        INC EBX
007211E5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007211E8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007211EB  3B D9                     CMP EBX,ECX
007211ED  7E A6                     JLE 0x00721195
007211EF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007211F2  EB 22                     JMP 0x00721216
LAB_007211f4:
007211F4  F6 46 20 20               TEST byte ptr [ESI + 0x20],0x20
007211F8  74 C4                     JZ 0x007211be
007211FA  A1 00 0B 7F 00            MOV EAX,[0x007f0b00]
007211FF  50                        PUSH EAX
00721200  EB BD                     JMP 0x007211bf
LAB_00721202:
00721202  8B 96 44 01 00 00         MOV EDX,dword ptr [ESI + 0x144]
00721208  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
0072120F  42                        INC EDX
00721210  89 96 44 01 00 00         MOV dword ptr [ESI + 0x144],EDX
LAB_00721216:
00721216  85 C9                     TEST ECX,ECX
00721218  7E 12                     JLE 0x0072122c
0072121A  8B 96 14 02 00 00         MOV EDX,dword ptr [ESI + 0x214]
00721220  8B 7A 5C                  MOV EDI,dword ptr [EDX + 0x5c]
00721223  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00721226  2B CF                     SUB ECX,EDI
00721228  2B C8                     SUB ECX,EAX
0072122A  EB 05                     JMP 0x00721231
LAB_0072122c:
0072122C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0072122f:
0072122F  33 C9                     XOR ECX,ECX
LAB_00721231:
00721231  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00721234  89 8E 08 02 00 00         MOV dword ptr [ESI + 0x208],ECX
0072123A  85 C0                     TEST EAX,EAX
0072123C  0F 85 3D FF FF FF         JNZ 0x0072117f
LAB_00721242:
00721242  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00721248  33 C9                     XOR ECX,ECX
0072124A  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0072124D  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
00721250  0F 8D AF 00 00 00         JGE 0x00721305
00721256  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00721259  8B 1C 90                  MOV EBX,dword ptr [EAX + EDX*0x4]
0072125C  3B D9                     CMP EBX,ECX
0072125E  0F 84 A1 00 00 00         JZ 0x00721305
00721264  8B 86 48 01 00 00         MOV EAX,dword ptr [ESI + 0x148]
0072126A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0072126D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00721270  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00721273  3B C1                     CMP EAX,ECX
00721275  7D 79                     JGE 0x007212f0
00721277  03 D8                     ADD EBX,EAX
LAB_00721279:
00721279  F6 46 20 20               TEST byte ptr [ESI + 0x20],0x20
0072127D  74 0E                     JZ 0x0072128d
0072127F  A1 00 0B 7F 00            MOV EAX,[0x007f0b00]
00721284  8B BE 14 02 00 00         MOV EDI,dword ptr [ESI + 0x214]
0072128A  50                        PUSH EAX
0072128B  EB 07                     JMP 0x00721294
LAB_0072128d:
0072128D  8B BE 14 02 00 00         MOV EDI,dword ptr [ESI + 0x214]
00721293  53                        PUSH EBX
LAB_00721294:
00721294  8B CF                     MOV ECX,EDI
00721296  E8 15 FD FE FF            CALL 0x00710fb0
0072129B  8B 97 9A 00 00 00         MOV EDX,dword ptr [EDI + 0x9a]
007212A1  25 FF FF 00 00            AND EAX,0xffff
007212A6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
007212A9  8B 86 14 02 00 00         MOV EAX,dword ptr [ESI + 0x214]
007212AF  0F BF 4C 4A 6A            MOVSX ECX,word ptr [EDX + ECX*0x2 + 0x6a]
007212B4  8B 40 58                  MOV EAX,dword ptr [EAX + 0x58]
007212B7  03 C1                     ADD EAX,ECX
007212B9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007212BC  03 C1                     ADD EAX,ECX
007212BE  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
007212C1  3B C1                     CMP EAX,ECX
007212C3  7F 14                     JG 0x007212d9
007212C5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007212C8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007212CB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007212CE  40                        INC EAX
007212CF  43                        INC EBX
007212D0  3B C1                     CMP EAX,ECX
007212D2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007212D5  7C A2                     JL 0x00721279
007212D7  EB 14                     JMP 0x007212ed
LAB_007212d9:
007212D9  8B 86 48 01 00 00         MOV EAX,dword ptr [ESI + 0x148]
007212DF  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
007212E6  40                        INC EAX
007212E7  89 86 48 01 00 00         MOV dword ptr [ESI + 0x148],EAX
LAB_007212ed:
007212ED  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_007212f0:
007212F0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007212F3  89 86 04 02 00 00         MOV dword ptr [ESI + 0x204],EAX
007212F9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007212FC  85 C0                     TEST EAX,EAX
007212FE  74 0B                     JZ 0x0072130b
00721300  E9 3D FF FF FF            JMP 0x00721242
LAB_00721305:
00721305  89 8E 04 02 00 00         MOV dword ptr [ESI + 0x204],ECX
LAB_0072130b:
0072130B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072130E  8B 8E 48 01 00 00         MOV ECX,dword ptr [ESI + 0x148]
00721314  2B C1                     SUB EAX,ECX
00721316  89 86 10 02 00 00         MOV dword ptr [ESI + 0x210],EAX
0072131C  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
00721322  2B D0                     SUB EDX,EAX
00721324  89 96 0C 02 00 00         MOV dword ptr [ESI + 0x20c],EDX
LAB_0072132a:
0072132A  5F                        POP EDI
0072132B  5E                        POP ESI
0072132C  5B                        POP EBX
0072132D  8B E5                     MOV ESP,EBP
0072132F  5D                        POP EBP
00721330  C2 08 00                  RET 0x8
