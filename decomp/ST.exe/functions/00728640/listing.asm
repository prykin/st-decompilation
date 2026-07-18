FUN_00728640:
00728640  55                        PUSH EBP
00728641  8B EC                     MOV EBP,ESP
00728643  83 EC 40                  SUB ESP,0x40
00728646  8B 15 14 71 85 00         MOV EDX,dword ptr [0x00857114]
0072864C  A1 10 71 85 00            MOV EAX,[0x00857110]
00728651  53                        PUSH EBX
00728652  56                        PUSH ESI
00728653  0F BF 44 D0 02            MOVSX EAX,word ptr [EAX + EDX*0x8 + 0x2]
00728658  8B 71 28                  MOV ESI,dword ptr [ECX + 0x28]
0072865B  57                        PUSH EDI
0072865C  8B F8                     MOV EDI,EAX
0072865E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00728661  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
00728665  0F AF C6                  IMUL EAX,ESI
00728668  03 DF                     ADD EBX,EDI
0072866A  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
0072866D  8D 4D DC                  LEA ECX,[EBP + -0x24]
00728670  03 C7                     ADD EAX,EDI
00728672  52                        PUSH EDX
00728673  51                        PUSH ECX
00728674  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00728677  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0072867A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072867D  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
00728684  E8 57 01 00 00            CALL 0x007287e0
00728689  85 C0                     TEST EAX,EAX
0072868B  0F 84 44 01 00 00         JZ 0x007287d5
00728691  8B 15 14 71 85 00         MOV EDX,dword ptr [0x00857114]
00728697  8D 45 C0                  LEA EAX,[EBP + -0x40]
0072869A  52                        PUSH EDX
0072869B  50                        PUSH EAX
0072869C  C7 45 C0 FF FF FF FF      MOV dword ptr [EBP + -0x40],0xffffffff
007286A3  E8 38 01 00 00            CALL 0x007287e0
007286A8  85 C0                     TEST EAX,EAX
007286AA  0F 84 25 01 00 00         JZ 0x007287d5
LAB_007286b0:
007286B0  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
007286B3  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007286B6  C1 F9 10                  SAR ECX,0x10
007286B9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007286BC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007286BF  C1 F8 10                  SAR EAX,0x10
007286C2  2B C8                     SUB ECX,EAX
007286C4  0F 8E A2 00 00 00         JLE 0x0072876c
007286CA  03 F8                     ADD EDI,EAX
007286CC  03 F0                     ADD ESI,EAX
007286CE  55                        PUSH EBP
007286CF  8B 6D 10                  MOV EBP,dword ptr [EBP + 0x10]
007286D2  2B C0                     SUB EAX,EAX
007286D4  2B D2                     SUB EDX,EDX
007286D6  83 F9 03                  CMP ECX,0x3
007286D9  7C 70                     JL 0x0072874b
007286DB  8A 16                     MOV DL,byte ptr [ESI]
007286DD  F7 C7 01 00 00 00         TEST EDI,0x1
007286E3  74 0B                     JZ 0x007286f0
007286E5  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
007286E9  46                        INC ESI
007286EA  88 07                     MOV byte ptr [EDI],AL
007286EC  47                        INC EDI
007286ED  49                        DEC ECX
007286EE  8A 16                     MOV DL,byte ptr [ESI]
LAB_007286f0:
007286F0  F7 C7 02 00 00 00         TEST EDI,0x2
007286F6  74 1A                     JZ 0x00728712
007286F8  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
007286FB  83 C6 02                  ADD ESI,0x2
007286FE  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
00728702  83 C7 02                  ADD EDI,0x2
00728705  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
00728709  83 E9 02                  SUB ECX,0x2
0072870C  66 89 5F FE               MOV word ptr [EDI + -0x2],BX
00728710  8A 16                     MOV DL,byte ptr [ESI]
LAB_00728712:
00728712  83 E9 04                  SUB ECX,0x4
00728715  7C 2F                     JL 0x00728746
LAB_00728717:
00728717  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0072871A  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
0072871E  8A 56 02                  MOV DL,byte ptr [ESI + 0x2]
00728721  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
00728725  C1 E3 10                  SHL EBX,0x10
00728728  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
0072872B  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
0072872F  83 C6 04                  ADD ESI,0x4
00728732  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
00728736  83 C7 04                  ADD EDI,0x4
00728739  C1 CB 10                  ROR EBX,0x10
0072873C  89 5F FC                  MOV dword ptr [EDI + -0x4],EBX
0072873F  83 E9 04                  SUB ECX,0x4
00728742  8A 16                     MOV DL,byte ptr [ESI]
00728744  7D D1                     JGE 0x00728717
LAB_00728746:
00728746  83 C1 04                  ADD ECX,0x4
00728749  74 20                     JZ 0x0072876b
LAB_0072874b:
0072874B  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
0072874F  49                        DEC ECX
00728750  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
00728753  88 07                     MOV byte ptr [EDI],AL
00728755  74 14                     JZ 0x0072876b
00728757  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
0072875B  49                        DEC ECX
0072875C  8A 56 02                  MOV DL,byte ptr [ESI + 0x2]
0072875F  88 47 01                  MOV byte ptr [EDI + 0x1],AL
00728762  74 07                     JZ 0x0072876b
00728764  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
00728768  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_0072876b:
0072876B  5D                        POP EBP
LAB_0072876c:
0072876C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0072876F  48                        DEC EAX
00728770  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00728773  75 13                     JNZ 0x00728788
00728775  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00728778  8D 55 DC                  LEA EDX,[EBP + -0x24]
0072877B  51                        PUSH ECX
0072877C  52                        PUSH EDX
0072877D  E8 5E 00 00 00            CALL 0x007287e0
00728782  85 C0                     TEST EAX,EAX
00728784  74 4F                     JZ 0x007287d5
00728786  EB 0B                     JMP 0x00728793
LAB_00728788:
00728788  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0072878B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0072878E  03 C8                     ADD ECX,EAX
00728790  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_00728793:
00728793  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00728796  48                        DEC EAX
00728797  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0072879A  75 13                     JNZ 0x007287af
0072879C  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0072879F  8D 55 C0                  LEA EDX,[EBP + -0x40]
007287A2  51                        PUSH ECX
007287A3  52                        PUSH EDX
007287A4  E8 37 00 00 00            CALL 0x007287e0
007287A9  85 C0                     TEST EAX,EAX
007287AB  74 28                     JZ 0x007287d5
007287AD  EB 0B                     JMP 0x007287ba
LAB_007287af:
007287AF  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
007287B2  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
007287B5  03 C8                     ADD ECX,EAX
007287B7  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_007287ba:
007287BA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007287BD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007287C0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007287C3  03 D1                     ADD EDX,ECX
007287C5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
007287C8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007287CB  03 C2                     ADD EAX,EDX
007287CD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007287D0  E9 DB FE FF FF            JMP 0x007286b0
LAB_007287d5:
007287D5  5F                        POP EDI
007287D6  5E                        POP ESI
007287D7  5B                        POP EBX
007287D8  8B E5                     MOV ESP,EBP
007287DA  5D                        POP EBP
007287DB  C2 0C 00                  RET 0xc
