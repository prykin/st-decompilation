FUN_00568dd0:
00568DD0  55                        PUSH EBP
00568DD1  8B EC                     MOV EBP,ESP
00568DD3  83 EC 60                  SUB ESP,0x60
00568DD6  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
00568DDC  53                        PUSH EBX
00568DDD  56                        PUSH ESI
00568DDE  57                        PUSH EDI
00568DDF  85 C0                     TEST EAX,EAX
00568DE1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00568DE4  0F 84 20 0F 00 00         JZ 0x00569d0a
00568DEA  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00568DEF  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00568DF2  8D 4D A0                  LEA ECX,[EBP + -0x60]
00568DF5  6A 00                     PUSH 0x0
00568DF7  52                        PUSH EDX
00568DF8  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00568DFB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568E01  E8 EA 49 1C 00            CALL 0x0072d7f0
00568E06  83 C4 08                  ADD ESP,0x8
00568E09  85 C0                     TEST EAX,EAX
00568E0B  0F 85 F1 0E 00 00         JNZ 0x00569d02
00568E11  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00568E14  25 FF 00 00 00            AND EAX,0xff
00568E19  48                        DEC EAX
00568E1A  83 F8 0B                  CMP EAX,0xb
00568E1D  0F 87 CD 0E 00 00         JA 0x00569cf0
switchD_00568e23::switchD:
00568E23  FF 24 85 14 9D 56 00      JMP dword ptr [EAX*0x4 + 0x569d14]
switchD_00568e23::caseD_b:
00568E2A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00568E2D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00568E30  6A 00                     PUSH 0x0
00568E32  6A 00                     PUSH 0x0
00568E34  8B 96 EF 0D 00 00         MOV EDX,dword ptr [ESI + 0xdef]
00568E3A  51                        PUSH ECX
00568E3B  52                        PUSH EDX
00568E3C  E8 BF 0E 1B 00            CALL 0x00719d00
00568E41  83 C4 10                  ADD ESP,0x10
00568E44  85 C0                     TEST EAX,EAX
00568E46  0F 84 A4 0E 00 00         JZ 0x00569cf0
00568E4C  8B 8E 07 0E 00 00         MOV ECX,dword ptr [ESI + 0xe07]
00568E52  6A 01                     PUSH 0x1
00568E54  89 8E 03 0E 00 00         MOV dword ptr [ESI + 0xe03],ECX
00568E5A  8B 15 0A 73 80 00         MOV EDX,dword ptr [0x0080730a]
00568E60  6A 00                     PUSH 0x0
00568E62  6A 00                     PUSH 0x0
00568E64  52                        PUSH EDX
00568E65  6A 01                     PUSH 0x1
00568E67  6A 00                     PUSH 0x0
00568E69  50                        PUSH EAX
00568E6A  E8 21 85 15 00            CALL 0x006c1390
00568E6F  89 86 07 0E 00 00         MOV dword ptr [ESI + 0xe07],EAX
00568E75  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
00568E7B  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00568E7E  89 86 FF 0D 00 00         MOV dword ptr [ESI + 0xdff],EAX
00568E84  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00568E8A  5F                        POP EDI
00568E8B  5E                        POP ESI
00568E8C  5B                        POP EBX
00568E8D  8B E5                     MOV ESP,EBP
00568E8F  5D                        POP EBP
00568E90  C2 14 00                  RET 0x14
switchD_00568e23::caseD_2:
00568E93  F6 05 01 73 80 00 02      TEST byte ptr [0x00807301],0x2
00568E9A  0F 84 50 0E 00 00         JZ 0x00569cf0
00568EA0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00568EA3  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00568EA6  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
00568EAA  8B 30                     MOV ESI,dword ptr [EAX]
00568EAC  85 F6                     TEST ESI,ESI
00568EAE  7C 5D                     JL 0x00568f0d
00568EB0  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00568EB3  85 C9                     TEST ECX,ECX
00568EB5  7C 56                     JL 0x00568f0d
00568EB7  8B 87 DD 10 00 00         MOV EAX,dword ptr [EDI + 0x10dd]
00568EBD  2B C1                     SUB EAX,ECX
00568EBF  99                        CDQ
00568EC0  8B C8                     MOV ECX,EAX
00568EC2  8B 87 D9 10 00 00         MOV EAX,dword ptr [EDI + 0x10d9]
00568EC8  33 CA                     XOR ECX,EDX
00568ECA  2B C6                     SUB EAX,ESI
00568ECC  2B CA                     SUB ECX,EDX
00568ECE  99                        CDQ
00568ECF  33 C2                     XOR EAX,EDX
00568ED1  2B C2                     SUB EAX,EDX
00568ED3  3B C1                     CMP EAX,ECX
00568ED5  7E 03                     JLE 0x00568eda
00568ED7  40                        INC EAX
00568ED8  EB 03                     JMP 0x00568edd
LAB_00568eda:
00568EDA  8D 41 01                  LEA EAX,[ECX + 0x1]
LAB_00568edd:
00568EDD  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
00568EE3  89 87 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EAX
00568EE9  C1 E1 04                  SHL ECX,0x4
00568EEC  8B 89 88 97 7C 00         MOV ECX,dword ptr [ECX + 0x7c9788]
00568EF2  3B C1                     CMP EAX,ECX
00568EF4  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
00568EF7  7F 03                     JG 0x00568efc
00568EF9  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_00568efc:
00568EFC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00568EFF  81 E2 FF 00 00 00         AND EDX,0xff
00568F05  3B D1                     CMP EDX,ECX
00568F07  0F 8D E3 0D 00 00         JGE 0x00569cf0
LAB_00568f0d:
00568F0D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00568F10  8B 8F F3 0D 00 00         MOV ECX,dword ptr [EDI + 0xdf3]
00568F16  6A 00                     PUSH 0x0
00568F18  6A FF                     PUSH -0x1
00568F1A  50                        PUSH EAX
00568F1B  51                        PUSH ECX
00568F1C  E8 6F 1A 1B 00            CALL 0x0071a990
00568F21  8B D8                     MOV EBX,EAX
00568F23  83 C4 10                  ADD ESP,0x10
00568F26  85 DB                     TEST EBX,EBX
00568F28  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00568F2B  0F 84 BF 0D 00 00         JZ 0x00569cf0
00568F31  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00568F34  8B 16                     MOV EDX,dword ptr [ESI]
00568F36  85 D2                     TEST EDX,EDX
00568F38  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00568F3B  0F 8C D0 02 00 00         JL 0x00569211
00568F41  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00568F44  85 C9                     TEST ECX,ECX
00568F46  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00568F49  0F 8C C2 02 00 00         JL 0x00569211
00568F4F  A0 63 73 80 00            MOV AL,[0x00807363]
00568F54  84 C0                     TEST AL,AL
00568F56  74 7E                     JZ 0x00568fd6
00568F58  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
00568F5E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00568F61  C1 E1 04                  SHL ECX,0x4
00568F64  25 FF 00 00 00            AND EAX,0xff
00568F69  8B 91 90 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9790]
00568F6F  3B C2                     CMP EAX,EDX
00568F71  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00568F74  7F 07                     JG 0x00568f7d
00568F76  B8 FF 00 00 00            MOV EAX,0xff
00568F7B  EB 1F                     JMP 0x00568f9c
LAB_00568f7d:
00568F7D  8B B1 88 97 7C 00         MOV ESI,dword ptr [ECX + 0x7c9788]
00568F83  3B C6                     CMP EAX,ESI
00568F85  7F 10                     JG 0x00568f97
00568F87  8B D6                     MOV EDX,ESI
00568F89  2B D0                     SUB EDX,EAX
00568F8B  8B C2                     MOV EAX,EDX
00568F8D  C1 E0 08                  SHL EAX,0x8
00568F90  2B C2                     SUB EAX,EDX
00568F92  99                        CDQ
00568F93  F7 FE                     IDIV ESI
00568F95  EB 02                     JMP 0x00568f99
LAB_00568f97:
00568F97  33 C0                     XOR EAX,EAX
LAB_00568f99:
00568F99  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
LAB_00568f9c:
00568F9C  DB 81 88 97 7C 00         FILD dword ptr [ECX + 0x7c9788]
00568FA2  6A 0A                     PUSH 0xa
00568FA4  6A 04                     PUSH 0x4
00568FA6  51                        PUSH ECX
00568FA7  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
00568FAD  D9 1C 24                  FSTP float ptr [ESP]
00568FB0  DB 45 F8                  FILD dword ptr [EBP + -0x8]
00568FB3  51                        PUSH ECX
00568FB4  D9 1C 24                  FSTP float ptr [ESP]
00568FB7  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00568FBA  6A 00                     PUSH 0x0
00568FBC  51                        PUSH ECX
00568FBD  D9 1C 24                  FSTP float ptr [ESP]
00568FC0  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00568FC3  51                        PUSH ECX
00568FC4  D9 1C 24                  FSTP float ptr [ESP]
00568FC7  52                        PUSH EDX
00568FC8  6A 04                     PUSH 0x4
00568FCA  50                        PUSH EAX
00568FCB  53                        PUSH EBX
00568FCC  E8 0F 92 15 00            CALL 0x006c21e0
00568FD1  E9 D8 05 00 00            JMP 0x005695ae
LAB_00568fd6:
00568FD6  8B B7 E9 10 00 00         MOV ESI,dword ptr [EDI + 0x10e9]
00568FDC  8B 9F ED 10 00 00         MOV EBX,dword ptr [EDI + 0x10ed]
00568FE2  8B C6                     MOV EAX,ESI
00568FE4  0F AF C2                  IMUL EAX,EDX
00568FE7  2B C1                     SUB EAX,ECX
00568FE9  03 C3                     ADD EAX,EBX
00568FEB  99                        CDQ
00568FEC  33 C2                     XOR EAX,EDX
00568FEE  2B C2                     SUB EAX,EDX
00568FF0  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00568FF7  2B C8                     SUB ECX,EAX
00568FF9  B8 67 66 66 66            MOV EAX,0x66666667
00568FFE  F7 E9                     IMUL ECX
00569000  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
00569006  C1 FA 02                  SAR EDX,0x2
00569009  8B C2                     MOV EAX,EDX
0056900B  C1 E8 1F                  SHR EAX,0x1f
0056900E  03 D0                     ADD EDX,EAX
00569010  C1 E1 04                  SHL ECX,0x4
00569013  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
00569019  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
0056901F  3B D0                     CMP EDX,EAX
00569021  7F 02                     JG 0x00569025
00569023  8B C2                     MOV EAX,EDX
LAB_00569025:
00569025  3B 81 90 97 7C 00         CMP EAX,dword ptr [ECX + 0x7c9790]
0056902B  7D 57                     JGE 0x00569084
0056902D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00569030  8B C6                     MOV EAX,ESI
00569032  0F AF 02                  IMUL EAX,dword ptr [EDX]
00569035  2B 42 04                  SUB EAX,dword ptr [EDX + 0x4]
00569038  03 C3                     ADD EAX,EBX
0056903A  99                        CDQ
0056903B  33 C2                     XOR EAX,EDX
0056903D  2B C2                     SUB EAX,EDX
0056903F  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
00569046  2B D0                     SUB EDX,EAX
00569048  B8 67 66 66 66            MOV EAX,0x66666667
0056904D  F7 EA                     IMUL EDX
0056904F  C1 FA 02                  SAR EDX,0x2
00569052  8B C2                     MOV EAX,EDX
00569054  C1 E8 1F                  SHR EAX,0x1f
00569057  03 D0                     ADD EDX,EAX
00569059  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
0056905F  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
00569065  3B D0                     CMP EDX,EAX
00569067  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0056906A  7F 03                     JG 0x0056906f
0056906C  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0056906f:
0056906F  B8 E8 03 00 00            MOV EAX,0x3e8
00569074  99                        CDQ
00569075  F7 B9 90 97 7C 00         IDIV dword ptr [ECX + 0x7c9790]
0056907B  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
0056907F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00569082  EB 07                     JMP 0x0056908b
LAB_00569084:
00569084  C7 45 F4 E8 03 00 00      MOV dword ptr [EBP + -0xc],0x3e8
LAB_0056908b:
0056908B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0056908E  0F AF 30                  IMUL ESI,dword ptr [EAX]
00569091  03 F3                     ADD ESI,EBX
00569093  89 B7 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],ESI
00569099  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0056909C  3B F0                     CMP ESI,EAX
0056909E  75 09                     JNZ 0x005690a9
005690A0  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
005690A7  EB 27                     JMP 0x005690d0
LAB_005690a9:
005690A9  8B 97 E5 10 00 00         MOV EDX,dword ptr [EDI + 0x10e5]
005690AF  85 D2                     TEST EDX,EDX
005690B1  74 0E                     JZ 0x005690c1
005690B3  83 FA 03                  CMP EDX,0x3
005690B6  74 09                     JZ 0x005690c1
005690B8  33 D2                     XOR EDX,EDX
005690BA  3B C6                     CMP EAX,ESI
005690BC  0F 9E C2                  SETLE DL
005690BF  EB 07                     JMP 0x005690c8
LAB_005690c1:
005690C1  33 D2                     XOR EDX,EDX
005690C3  3B C6                     CMP EAX,ESI
005690C5  0F 9D C2                  SETGE DL
LAB_005690c8:
005690C8  4A                        DEC EDX
005690C9  83 E2 02                  AND EDX,0x2
005690CC  4A                        DEC EDX
005690CD  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_005690d0:
005690D0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005690D3  8B 99 90 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9790]
005690D9  25 FF 00 00 00            AND EAX,0xff
005690DE  3B C3                     CMP EAX,EBX
005690E0  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005690E3  7F 2E                     JG 0x00569113
005690E5  A1 0E 73 80 00            MOV EAX,[0x0080730e]
005690EA  8B 91 94 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9794]
005690F0  05 A0 0F 00 00            ADD EAX,0xfa0
005690F5  0F AF D0                  IMUL EDX,EAX
005690F8  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005690FD  F7 EA                     IMUL EDX
005690FF  C1 FA 05                  SAR EDX,0x5
00569102  8B C2                     MOV EAX,EDX
00569104  C1 E8 1F                  SHR EAX,0x1f
00569107  8D B4 02 60 F0 FF FF      LEA ESI,[EDX + EAX*0x1 + 0xfffff060]
0056910E  E9 B0 00 00 00            JMP 0x005691c3
LAB_00569113:
00569113  8B B1 8C 97 7C 00         MOV ESI,dword ptr [ECX + 0x7c978c]
00569119  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
0056911F  3B C6                     CMP EAX,ESI
00569121  8D 82 A0 0F 00 00         LEA EAX,[EDX + 0xfa0]
00569127  8B 91 94 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9794]
0056912D  7F 69                     JG 0x00569198
0056912F  0F AF D0                  IMUL EDX,EAX
00569132  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00569137  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0056913A  F7 EA                     IMUL EDX
0056913C  C1 FA 05                  SAR EDX,0x5
0056913F  8B C2                     MOV EAX,EDX
00569141  C1 E8 1F                  SHR EAX,0x1f
00569144  03 D0                     ADD EDX,EAX
00569146  B8 56 55 55 55            MOV EAX,0x55555556
0056914B  8B FA                     MOV EDI,EDX
0056914D  BA 40 1F 00 00            MOV EDX,0x1f40
00569152  2B D7                     SUB EDX,EDI
00569154  D1 E2                     SHL EDX,0x1
00569156  F7 EA                     IMUL EDX
00569158  8B C2                     MOV EAX,EDX
0056915A  C1 E8 1F                  SHR EAX,0x1f
0056915D  03 D0                     ADD EDX,EAX
0056915F  8D 84 3A 60 F0 FF FF      LEA EAX,[EDX + EDI*0x1 + 0xfffff060]
00569166  8B D6                     MOV EDX,ESI
00569168  2B D3                     SUB EDX,EBX
0056916A  8B 99 90 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9790]
00569170  0F AF C2                  IMUL EAX,EDX
00569173  99                        CDQ
00569174  2B F3                     SUB ESI,EBX
00569176  8D BC 3F 80 C1 FF FF      LEA EDI,[EDI + EDI*0x1 + 0xffffc180]
0056917D  F7 FE                     IDIV ESI
0056917F  8B F0                     MOV ESI,EAX
00569181  B8 56 55 55 55            MOV EAX,0x55555556
00569186  F7 EF                     IMUL EDI
00569188  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0056918B  8B C6                     MOV EAX,ESI
0056918D  8B F2                     MOV ESI,EDX
0056918F  C1 EE 1F                  SHR ESI,0x1f
00569192  03 D0                     ADD EDX,EAX
00569194  03 F2                     ADD ESI,EDX
00569196  EB 2B                     JMP 0x005691c3
LAB_00569198:
00569198  0F AF D0                  IMUL EDX,EAX
0056919B  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005691A0  F7 EA                     IMUL EDX
005691A2  C1 FA 05                  SAR EDX,0x5
005691A5  8B C2                     MOV EAX,EDX
005691A7  C1 E8 1F                  SHR EAX,0x1f
005691AA  03 D0                     ADD EDX,EAX
005691AC  B8 56 55 55 55            MOV EAX,0x55555556
005691B1  8D 94 12 80 C1 FF FF      LEA EDX,[EDX + EDX*0x1 + 0xffffc180]
005691B8  F7 EA                     IMUL EDX
005691BA  8B C2                     MOV EAX,EDX
005691BC  C1 E8 1F                  SHR EAX,0x1f
005691BF  03 D0                     ADD EDX,EAX
005691C1  8B F2                     MOV ESI,EDX
LAB_005691c3:
005691C3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005691C6  3B C3                     CMP EAX,EBX
005691C8  7F 07                     JG 0x005691d1
005691CA  B8 FF 00 00 00            MOV EAX,0xff
005691CF  EB 1F                     JMP 0x005691f0
LAB_005691d1:
005691D1  8B 89 88 97 7C 00         MOV ECX,dword ptr [ECX + 0x7c9788]
005691D7  3B C1                     CMP EAX,ECX
005691D9  7F 13                     JG 0x005691ee
005691DB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005691DE  8B D1                     MOV EDX,ECX
005691E0  2B D0                     SUB EDX,EAX
005691E2  8B C2                     MOV EAX,EDX
005691E4  C1 E0 08                  SHL EAX,0x8
005691E7  2B C2                     SUB EAX,EDX
005691E9  99                        CDQ
005691EA  F7 F9                     IDIV ECX
005691EC  EB 02                     JMP 0x005691f0
LAB_005691ee:
005691EE  33 C0                     XOR EAX,EAX
LAB_005691f0:
005691F0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005691F3  6A 0A                     PUSH 0xa
005691F5  0F AF 4D F4               IMUL ECX,dword ptr [EBP + -0xc]
005691F9  6A 04                     PUSH 0x4
005691FB  51                        PUSH ECX
005691FC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005691FF  56                        PUSH ESI
00569200  6A 04                     PUSH 0x4
00569202  50                        PUSH EAX
00569203  51                        PUSH ECX
00569204  E8 87 81 15 00            CALL 0x006c1390
00569209  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0056920C  E9 9D 03 00 00            JMP 0x005695ae
LAB_00569211:
00569211  6A 0A                     PUSH 0xa
00569213  6A 04                     PUSH 0x4
00569215  E9 81 03 00 00            JMP 0x0056959b
switchD_00568e23::caseD_3:
0056921A  F6 05 01 73 80 00 04      TEST byte ptr [0x00807301],0x4
00569221  0F 84 C9 0A 00 00         JZ 0x00569cf0
00569227  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0056922A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0056922D  8B 30                     MOV ESI,dword ptr [EAX]
0056922F  85 F6                     TEST ESI,ESI
00569231  7C 63                     JL 0x00569296
00569233  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00569236  85 C9                     TEST ECX,ECX
00569238  7C 5C                     JL 0x00569296
0056923A  8B 87 DD 10 00 00         MOV EAX,dword ptr [EDI + 0x10dd]
00569240  2B C1                     SUB EAX,ECX
00569242  99                        CDQ
00569243  8B C8                     MOV ECX,EAX
00569245  8B 87 D9 10 00 00         MOV EAX,dword ptr [EDI + 0x10d9]
0056924B  33 CA                     XOR ECX,EDX
0056924D  2B C6                     SUB EAX,ESI
0056924F  2B CA                     SUB ECX,EDX
00569251  99                        CDQ
00569252  33 C2                     XOR EAX,EDX
00569254  2B C2                     SUB EAX,EDX
00569256  3B C1                     CMP EAX,ECX
00569258  7E 05                     JLE 0x0056925f
0056925A  8D 48 01                  LEA ECX,[EAX + 0x1]
0056925D  EB 01                     JMP 0x00569260
LAB_0056925f:
0056925F  41                        INC ECX
LAB_00569260:
00569260  8B 87 E1 10 00 00         MOV EAX,dword ptr [EDI + 0x10e1]
00569266  89 8F F1 10 00 00         MOV dword ptr [EDI + 0x10f1],ECX
0056926C  C1 E0 04                  SHL EAX,0x4
0056926F  8B 90 88 97 7C 00         MOV EDX,dword ptr [EAX + 0x7c9788]
00569275  3B CA                     CMP ECX,EDX
00569277  88 55 EC                  MOV byte ptr [EBP + -0x14],DL
0056927A  7F 03                     JG 0x0056927f
0056927C  88 4D EC                  MOV byte ptr [EBP + -0x14],CL
LAB_0056927f:
0056927F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00569282  8B 90 8C 97 7C 00         MOV EDX,dword ptr [EAX + 0x7c978c]
00569288  81 E1 FF 00 00 00         AND ECX,0xff
0056928E  3B CA                     CMP ECX,EDX
00569290  0F 8D 5A 0A 00 00         JGE 0x00569cf0
LAB_00569296:
00569296  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00569299  8B 87 F3 0D 00 00         MOV EAX,dword ptr [EDI + 0xdf3]
0056929F  6A 00                     PUSH 0x0
005692A1  6A FF                     PUSH -0x1
005692A3  52                        PUSH EDX
005692A4  50                        PUSH EAX
005692A5  E8 E6 16 1B 00            CALL 0x0071a990
005692AA  8B D8                     MOV EBX,EAX
005692AC  83 C4 10                  ADD ESP,0x10
005692AF  85 DB                     TEST EBX,EBX
005692B1  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
005692B4  0F 84 36 0A 00 00         JZ 0x00569cf0
005692BA  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005692BD  8B 16                     MOV EDX,dword ptr [ESI]
005692BF  85 D2                     TEST EDX,EDX
005692C1  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005692C4  0F 8C CD 02 00 00         JL 0x00569597
005692CA  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005692CD  85 C9                     TEST ECX,ECX
005692CF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005692D2  0F 8C BF 02 00 00         JL 0x00569597
005692D8  A0 63 73 80 00            MOV AL,[0x00807363]
005692DD  84 C0                     TEST AL,AL
005692DF  74 7E                     JZ 0x0056935f
005692E1  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
005692E7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005692EA  C1 E1 04                  SHL ECX,0x4
005692ED  25 FF 00 00 00            AND EAX,0xff
005692F2  8B 91 90 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9790]
005692F8  3B C2                     CMP EAX,EDX
005692FA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005692FD  7F 07                     JG 0x00569306
005692FF  B8 FF 00 00 00            MOV EAX,0xff
00569304  EB 1F                     JMP 0x00569325
LAB_00569306:
00569306  8B B1 88 97 7C 00         MOV ESI,dword ptr [ECX + 0x7c9788]
0056930C  3B C6                     CMP EAX,ESI
0056930E  7F 10                     JG 0x00569320
00569310  8B D6                     MOV EDX,ESI
00569312  2B D0                     SUB EDX,EAX
00569314  8B C2                     MOV EAX,EDX
00569316  C1 E0 08                  SHL EAX,0x8
00569319  2B C2                     SUB EAX,EDX
0056931B  99                        CDQ
0056931C  F7 FE                     IDIV ESI
0056931E  EB 02                     JMP 0x00569322
LAB_00569320:
00569320  33 C0                     XOR EAX,EAX
LAB_00569322:
00569322  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
LAB_00569325:
00569325  DB 81 8C 97 7C 00         FILD dword ptr [ECX + 0x7c978c]
0056932B  6A 11                     PUSH 0x11
0056932D  6A 0B                     PUSH 0xb
0056932F  51                        PUSH ECX
00569330  D9 1C 24                  FSTP float ptr [ESP]
00569333  DB 45 F8                  FILD dword ptr [EBP + -0x8]
00569336  51                        PUSH ECX
00569337  D9 1C 24                  FSTP float ptr [ESP]
0056933A  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0056933D  6A 00                     PUSH 0x0
0056933F  51                        PUSH ECX
00569340  D9 1C 24                  FSTP float ptr [ESP]
00569343  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00569346  51                        PUSH ECX
00569347  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
0056934D  D9 1C 24                  FSTP float ptr [ESP]
00569350  51                        PUSH ECX
00569351  6A 04                     PUSH 0x4
00569353  50                        PUSH EAX
00569354  53                        PUSH EBX
00569355  E8 86 8E 15 00            CALL 0x006c21e0
0056935A  E9 4F 02 00 00            JMP 0x005695ae
LAB_0056935f:
0056935F  8B B7 E9 10 00 00         MOV ESI,dword ptr [EDI + 0x10e9]
00569365  8B 9F ED 10 00 00         MOV EBX,dword ptr [EDI + 0x10ed]
0056936B  8B C6                     MOV EAX,ESI
0056936D  0F AF C2                  IMUL EAX,EDX
00569370  2B C1                     SUB EAX,ECX
00569372  03 C3                     ADD EAX,EBX
00569374  99                        CDQ
00569375  33 C2                     XOR EAX,EDX
00569377  2B C2                     SUB EAX,EDX
00569379  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00569380  2B C8                     SUB ECX,EAX
00569382  B8 67 66 66 66            MOV EAX,0x66666667
00569387  F7 E9                     IMUL ECX
00569389  8B 8F E1 10 00 00         MOV ECX,dword ptr [EDI + 0x10e1]
0056938F  C1 FA 02                  SAR EDX,0x2
00569392  8B C2                     MOV EAX,EDX
00569394  C1 E8 1F                  SHR EAX,0x1f
00569397  03 D0                     ADD EDX,EAX
00569399  C1 E1 04                  SHL ECX,0x4
0056939C  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
005693A2  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
005693A8  3B D0                     CMP EDX,EAX
005693AA  7F 02                     JG 0x005693ae
005693AC  8B C2                     MOV EAX,EDX
LAB_005693ae:
005693AE  3B 81 90 97 7C 00         CMP EAX,dword ptr [ECX + 0x7c9790]
005693B4  7D 57                     JGE 0x0056940d
005693B6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005693B9  8B C6                     MOV EAX,ESI
005693BB  0F AF 02                  IMUL EAX,dword ptr [EDX]
005693BE  2B 42 04                  SUB EAX,dword ptr [EDX + 0x4]
005693C1  03 C3                     ADD EAX,EBX
005693C3  99                        CDQ
005693C4  33 C2                     XOR EAX,EDX
005693C6  2B C2                     SUB EAX,EDX
005693C8  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
005693CF  2B D0                     SUB EDX,EAX
005693D1  B8 67 66 66 66            MOV EAX,0x66666667
005693D6  F7 EA                     IMUL EDX
005693D8  C1 FA 02                  SAR EDX,0x2
005693DB  8B C2                     MOV EAX,EDX
005693DD  C1 E8 1F                  SHR EAX,0x1f
005693E0  03 D0                     ADD EDX,EAX
005693E2  89 97 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],EDX
005693E8  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
005693EE  3B D0                     CMP EDX,EAX
005693F0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005693F3  7F 03                     JG 0x005693f8
005693F5  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_005693f8:
005693F8  B8 E8 03 00 00            MOV EAX,0x3e8
005693FD  99                        CDQ
005693FE  F7 B9 90 97 7C 00         IDIV dword ptr [ECX + 0x7c9790]
00569404  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
00569408  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0056940B  EB 07                     JMP 0x00569414
LAB_0056940d:
0056940D  C7 45 F8 E8 03 00 00      MOV dword ptr [EBP + -0x8],0x3e8
LAB_00569414:
00569414  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00569417  0F AF 30                  IMUL ESI,dword ptr [EAX]
0056941A  03 F3                     ADD ESI,EBX
0056941C  89 B7 F1 10 00 00         MOV dword ptr [EDI + 0x10f1],ESI
00569422  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00569425  3B F0                     CMP ESI,EAX
00569427  75 09                     JNZ 0x00569432
00569429  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00569430  EB 27                     JMP 0x00569459
LAB_00569432:
00569432  8B 97 E5 10 00 00         MOV EDX,dword ptr [EDI + 0x10e5]
00569438  85 D2                     TEST EDX,EDX
0056943A  74 0E                     JZ 0x0056944a
0056943C  83 FA 03                  CMP EDX,0x3
0056943F  74 09                     JZ 0x0056944a
00569441  33 D2                     XOR EDX,EDX
00569443  3B C6                     CMP EAX,ESI
00569445  0F 9E C2                  SETLE DL
00569448  EB 07                     JMP 0x00569451
LAB_0056944a:
0056944A  33 D2                     XOR EDX,EDX
0056944C  3B C6                     CMP EAX,ESI
0056944E  0F 9D C2                  SETGE DL
LAB_00569451:
00569451  4A                        DEC EDX
00569452  83 E2 02                  AND EDX,0x2
00569455  4A                        DEC EDX
00569456  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00569459:
00569459  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0056945C  8B 99 90 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9790]
00569462  25 FF 00 00 00            AND EAX,0xff
00569467  3B C3                     CMP EAX,EBX
00569469  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0056946C  7F 2E                     JG 0x0056949c
0056946E  A1 0E 73 80 00            MOV EAX,[0x0080730e]
00569473  8B 91 94 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9794]
00569479  05 A0 0F 00 00            ADD EAX,0xfa0
0056947E  0F AF D0                  IMUL EDX,EAX
00569481  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00569486  F7 EA                     IMUL EDX
00569488  C1 FA 05                  SAR EDX,0x5
0056948B  8B C2                     MOV EAX,EDX
0056948D  C1 E8 1F                  SHR EAX,0x1f
00569490  8D B4 02 60 F0 FF FF      LEA ESI,[EDX + EAX*0x1 + 0xfffff060]
00569497  E9 B0 00 00 00            JMP 0x0056954c
LAB_0056949c:
0056949C  8B B1 8C 97 7C 00         MOV ESI,dword ptr [ECX + 0x7c978c]
005694A2  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
005694A8  3B C6                     CMP EAX,ESI
005694AA  8D 82 A0 0F 00 00         LEA EAX,[EDX + 0xfa0]
005694B0  8B 91 94 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9794]
005694B6  7F 69                     JG 0x00569521
005694B8  0F AF D0                  IMUL EDX,EAX
005694BB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005694C0  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005694C3  F7 EA                     IMUL EDX
005694C5  C1 FA 05                  SAR EDX,0x5
005694C8  8B C2                     MOV EAX,EDX
005694CA  C1 E8 1F                  SHR EAX,0x1f
005694CD  03 D0                     ADD EDX,EAX
005694CF  B8 56 55 55 55            MOV EAX,0x55555556
005694D4  8B FA                     MOV EDI,EDX
005694D6  BA 40 1F 00 00            MOV EDX,0x1f40
005694DB  2B D7                     SUB EDX,EDI
005694DD  D1 E2                     SHL EDX,0x1
005694DF  F7 EA                     IMUL EDX
005694E1  8B C2                     MOV EAX,EDX
005694E3  C1 E8 1F                  SHR EAX,0x1f
005694E6  03 D0                     ADD EDX,EAX
005694E8  8D 84 3A 60 F0 FF FF      LEA EAX,[EDX + EDI*0x1 + 0xfffff060]
005694EF  8B D6                     MOV EDX,ESI
005694F1  2B D3                     SUB EDX,EBX
005694F3  8B 99 90 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9790]
005694F9  0F AF C2                  IMUL EAX,EDX
005694FC  99                        CDQ
005694FD  2B F3                     SUB ESI,EBX
005694FF  8D BC 3F 80 C1 FF FF      LEA EDI,[EDI + EDI*0x1 + 0xffffc180]
00569506  F7 FE                     IDIV ESI
00569508  8B F0                     MOV ESI,EAX
0056950A  B8 56 55 55 55            MOV EAX,0x55555556
0056950F  F7 EF                     IMUL EDI
00569511  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00569514  8B C6                     MOV EAX,ESI
00569516  8B F2                     MOV ESI,EDX
00569518  C1 EE 1F                  SHR ESI,0x1f
0056951B  03 D0                     ADD EDX,EAX
0056951D  03 F2                     ADD ESI,EDX
0056951F  EB 2B                     JMP 0x0056954c
LAB_00569521:
00569521  0F AF D0                  IMUL EDX,EAX
00569524  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00569529  F7 EA                     IMUL EDX
0056952B  C1 FA 05                  SAR EDX,0x5
0056952E  8B C2                     MOV EAX,EDX
00569530  C1 E8 1F                  SHR EAX,0x1f
00569533  03 D0                     ADD EDX,EAX
00569535  B8 56 55 55 55            MOV EAX,0x55555556
0056953A  8D 94 12 80 C1 FF FF      LEA EDX,[EDX + EDX*0x1 + 0xffffc180]
00569541  F7 EA                     IMUL EDX
00569543  8B C2                     MOV EAX,EDX
00569545  C1 E8 1F                  SHR EAX,0x1f
00569548  03 D0                     ADD EDX,EAX
0056954A  8B F2                     MOV ESI,EDX
LAB_0056954c:
0056954C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0056954F  3B C3                     CMP EAX,EBX
00569551  7F 07                     JG 0x0056955a
00569553  B8 FF 00 00 00            MOV EAX,0xff
00569558  EB 1F                     JMP 0x00569579
LAB_0056955a:
0056955A  8B 89 88 97 7C 00         MOV ECX,dword ptr [ECX + 0x7c9788]
00569560  3B C1                     CMP EAX,ECX
00569562  7F 13                     JG 0x00569577
00569564  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00569567  8B D1                     MOV EDX,ECX
00569569  2B D0                     SUB EDX,EAX
0056956B  8B C2                     MOV EAX,EDX
0056956D  C1 E0 08                  SHL EAX,0x8
00569570  2B C2                     SUB EAX,EDX
00569572  99                        CDQ
00569573  F7 F9                     IDIV ECX
00569575  EB 02                     JMP 0x00569579
LAB_00569577:
00569577  33 C0                     XOR EAX,EAX
LAB_00569579:
00569579  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0056957C  6A 11                     PUSH 0x11
0056957E  0F AF 4D F8               IMUL ECX,dword ptr [EBP + -0x8]
00569582  6A 0B                     PUSH 0xb
00569584  51                        PUSH ECX
00569585  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00569588  56                        PUSH ESI
00569589  6A 04                     PUSH 0x4
0056958B  50                        PUSH EAX
0056958C  51                        PUSH ECX
0056958D  E8 FE 7D 15 00            CALL 0x006c1390
00569592  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00569595  EB 17                     JMP 0x005695ae
LAB_00569597:
00569597  6A 11                     PUSH 0x11
00569599  6A 0B                     PUSH 0xb
LAB_0056959b:
0056959B  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
005695A1  6A 00                     PUSH 0x0
005695A3  52                        PUSH EDX
005695A4  6A 00                     PUSH 0x0
005695A6  6A 00                     PUSH 0x0
005695A8  53                        PUSH EBX
005695A9  E8 E2 7D 15 00            CALL 0x006c1390
LAB_005695ae:
005695AE  85 C0                     TEST EAX,EAX
005695B0  0F 8C 3A 07 00 00         JL 0x00569cf0
005695B6  8B 0E                     MOV ECX,dword ptr [ESI]
005695B8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005695BB  8D 3C 87                  LEA EDI,[EDI + EAX*0x4]
005695BE  89 8F 0B 0E 00 00         MOV dword ptr [EDI + 0xe0b],ECX
005695C4  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005695C7  89 97 0F 0E 00 00         MOV dword ptr [EDI + 0xe0f],EDX
005695CD  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005695D0  89 87 13 0E 00 00         MOV dword ptr [EDI + 0xe13],EAX
005695D6  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
005695D9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005695DF  5F                        POP EDI
005695E0  5E                        POP ESI
005695E1  5B                        POP EBX
005695E2  8B E5                     MOV ESP,EBP
005695E4  5D                        POP EBP
005695E5  C2 14 00                  RET 0x14
switchD_00568e23::caseD_4:
005695E8  F6 05 01 73 80 00 01      TEST byte ptr [0x00807301],0x1
005695EF  0F 84 FB 06 00 00         JZ 0x00569cf0
005695F5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005695F8  6A 14                     PUSH 0x14
005695FA  6A 12                     PUSH 0x12
005695FC  8B CB                     MOV ECX,EBX
005695FE  E8 28 9F E9 FF            CALL 0x0040352b
00569603  85 C0                     TEST EAX,EAX
00569605  0F 84 E5 06 00 00         JZ 0x00569cf0
0056960B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0056960E  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
00569612  8B 30                     MOV ESI,dword ptr [EAX]
00569614  85 F6                     TEST ESI,ESI
00569616  7C 5D                     JL 0x00569675
00569618  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0056961B  85 C9                     TEST ECX,ECX
0056961D  7C 56                     JL 0x00569675
0056961F  8B 83 DD 10 00 00         MOV EAX,dword ptr [EBX + 0x10dd]
00569625  2B C1                     SUB EAX,ECX
00569627  99                        CDQ
00569628  8B C8                     MOV ECX,EAX
0056962A  8B 83 D9 10 00 00         MOV EAX,dword ptr [EBX + 0x10d9]
00569630  33 CA                     XOR ECX,EDX
00569632  2B C6                     SUB EAX,ESI
00569634  2B CA                     SUB ECX,EDX
00569636  99                        CDQ
00569637  33 C2                     XOR EAX,EDX
00569639  2B C2                     SUB EAX,EDX
0056963B  3B C1                     CMP EAX,ECX
0056963D  7E 03                     JLE 0x00569642
0056963F  40                        INC EAX
00569640  EB 03                     JMP 0x00569645
LAB_00569642:
00569642  8D 41 01                  LEA EAX,[ECX + 0x1]
LAB_00569645:
00569645  8B 8B E1 10 00 00         MOV ECX,dword ptr [EBX + 0x10e1]
0056964B  89 83 F1 10 00 00         MOV dword ptr [EBX + 0x10f1],EAX
00569651  C1 E1 04                  SHL ECX,0x4
00569654  8B 89 88 97 7C 00         MOV ECX,dword ptr [ECX + 0x7c9788]
0056965A  3B C1                     CMP EAX,ECX
0056965C  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
0056965F  7F 03                     JG 0x00569664
00569661  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_00569664:
00569664  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00569667  81 E2 FF 00 00 00         AND EDX,0xff
0056966D  3B D1                     CMP EDX,ECX
0056966F  0F 8D 7B 06 00 00         JGE 0x00569cf0
LAB_00569675:
00569675  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00569678  8B 8B F3 0D 00 00         MOV ECX,dword ptr [EBX + 0xdf3]
0056967E  6A 00                     PUSH 0x0
00569680  6A FF                     PUSH -0x1
00569682  50                        PUSH EAX
00569683  51                        PUSH ECX
00569684  E8 07 13 1B 00            CALL 0x0071a990
00569689  8B F8                     MOV EDI,EAX
0056968B  83 C4 10                  ADD ESP,0x10
0056968E  85 FF                     TEST EDI,EDI
00569690  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00569693  0F 84 57 06 00 00         JZ 0x00569cf0
00569699  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0056969C  8B 16                     MOV EDX,dword ptr [ESI]
0056969E  85 D2                     TEST EDX,EDX
005696A0  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005696A3  0F 8C AE 02 00 00         JL 0x00569957
005696A9  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005696AC  85 C9                     TEST ECX,ECX
005696AE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005696B1  0F 8C A0 02 00 00         JL 0x00569957
005696B7  A0 63 73 80 00            MOV AL,[0x00807363]
005696BC  84 C0                     TEST AL,AL
005696BE  74 7E                     JZ 0x0056973e
005696C0  8B 8B E1 10 00 00         MOV ECX,dword ptr [EBX + 0x10e1]
005696C6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005696C9  C1 E1 04                  SHL ECX,0x4
005696CC  25 FF 00 00 00            AND EAX,0xff
005696D1  8B 91 90 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9790]
005696D7  3B C2                     CMP EAX,EDX
005696D9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005696DC  7F 07                     JG 0x005696e5
005696DE  B8 FF 00 00 00            MOV EAX,0xff
005696E3  EB 1F                     JMP 0x00569704
LAB_005696e5:
005696E5  8B B1 88 97 7C 00         MOV ESI,dword ptr [ECX + 0x7c9788]
005696EB  3B C6                     CMP EAX,ESI
005696ED  7F 10                     JG 0x005696ff
005696EF  8B D6                     MOV EDX,ESI
005696F1  2B D0                     SUB EDX,EAX
005696F3  8B C2                     MOV EAX,EDX
005696F5  C1 E0 08                  SHL EAX,0x8
005696F8  2B C2                     SUB EAX,EDX
005696FA  99                        CDQ
005696FB  F7 FE                     IDIV ESI
005696FD  EB 02                     JMP 0x00569701
LAB_005696ff:
005696FF  33 C0                     XOR EAX,EAX
LAB_00569701:
00569701  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
LAB_00569704:
00569704  DB 81 88 97 7C 00         FILD dword ptr [ECX + 0x7c9788]
0056970A  6A 14                     PUSH 0x14
0056970C  6A 12                     PUSH 0x12
0056970E  51                        PUSH ECX
0056970F  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
00569715  D9 1C 24                  FSTP float ptr [ESP]
00569718  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0056971B  51                        PUSH ECX
0056971C  D9 1C 24                  FSTP float ptr [ESP]
0056971F  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00569722  6A 00                     PUSH 0x0
00569724  51                        PUSH ECX
00569725  D9 1C 24                  FSTP float ptr [ESP]
00569728  DB 45 F0                  FILD dword ptr [EBP + -0x10]
0056972B  51                        PUSH ECX
0056972C  D9 1C 24                  FSTP float ptr [ESP]
0056972F  52                        PUSH EDX
00569730  6A 06                     PUSH 0x6
00569732  50                        PUSH EAX
00569733  57                        PUSH EDI
00569734  E8 A7 8A 15 00            CALL 0x006c21e0
00569739  E9 2F 02 00 00            JMP 0x0056996d
LAB_0056973e:
0056973E  8B B3 E9 10 00 00         MOV ESI,dword ptr [EBX + 0x10e9]
00569744  8B BB ED 10 00 00         MOV EDI,dword ptr [EBX + 0x10ed]
0056974A  8B C6                     MOV EAX,ESI
0056974C  0F AF C2                  IMUL EAX,EDX
0056974F  2B C1                     SUB EAX,ECX
00569751  03 C7                     ADD EAX,EDI
00569753  99                        CDQ
00569754  33 C2                     XOR EAX,EDX
00569756  2B C2                     SUB EAX,EDX
00569758  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0056975F  2B C8                     SUB ECX,EAX
00569761  B8 67 66 66 66            MOV EAX,0x66666667
00569766  F7 E9                     IMUL ECX
00569768  8B 8B E1 10 00 00         MOV ECX,dword ptr [EBX + 0x10e1]
0056976E  C1 FA 02                  SAR EDX,0x2
00569771  8B C2                     MOV EAX,EDX
00569773  C1 E8 1F                  SHR EAX,0x1f
00569776  03 D0                     ADD EDX,EAX
00569778  C1 E1 04                  SHL ECX,0x4
0056977B  89 93 F1 10 00 00         MOV dword ptr [EBX + 0x10f1],EDX
00569781  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
00569787  3B D0                     CMP EDX,EAX
00569789  7F 02                     JG 0x0056978d
0056978B  8B C2                     MOV EAX,EDX
LAB_0056978d:
0056978D  3B 81 90 97 7C 00         CMP EAX,dword ptr [ECX + 0x7c9790]
00569793  7D 57                     JGE 0x005697ec
00569795  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00569798  8B C6                     MOV EAX,ESI
0056979A  0F AF 02                  IMUL EAX,dword ptr [EDX]
0056979D  2B 42 04                  SUB EAX,dword ptr [EDX + 0x4]
005697A0  03 C7                     ADD EAX,EDI
005697A2  99                        CDQ
005697A3  33 C2                     XOR EAX,EDX
005697A5  2B C2                     SUB EAX,EDX
005697A7  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
005697AE  2B D0                     SUB EDX,EAX
005697B0  B8 67 66 66 66            MOV EAX,0x66666667
005697B5  F7 EA                     IMUL EDX
005697B7  C1 FA 02                  SAR EDX,0x2
005697BA  8B C2                     MOV EAX,EDX
005697BC  C1 E8 1F                  SHR EAX,0x1f
005697BF  03 D0                     ADD EDX,EAX
005697C1  89 93 F1 10 00 00         MOV dword ptr [EBX + 0x10f1],EDX
005697C7  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
005697CD  3B D0                     CMP EDX,EAX
005697CF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005697D2  7F 03                     JG 0x005697d7
005697D4  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_005697d7:
005697D7  B8 E8 03 00 00            MOV EAX,0x3e8
005697DC  99                        CDQ
005697DD  F7 B9 90 97 7C 00         IDIV dword ptr [ECX + 0x7c9790]
005697E3  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
005697E7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005697EA  EB 07                     JMP 0x005697f3
LAB_005697ec:
005697EC  C7 45 F0 E8 03 00 00      MOV dword ptr [EBP + -0x10],0x3e8
LAB_005697f3:
005697F3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005697F6  0F AF 30                  IMUL ESI,dword ptr [EAX]
005697F9  03 F7                     ADD ESI,EDI
005697FB  89 B3 F1 10 00 00         MOV dword ptr [EBX + 0x10f1],ESI
00569801  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
00569804  3B F7                     CMP ESI,EDI
00569806  75 04                     JNZ 0x0056980c
00569808  33 FF                     XOR EDI,EDI
0056980A  EB 2D                     JMP 0x00569839
LAB_0056980c:
0056980C  8B 83 E5 10 00 00         MOV EAX,dword ptr [EBX + 0x10e5]
00569812  85 C0                     TEST EAX,EAX
00569814  74 15                     JZ 0x0056982b
00569816  83 F8 03                  CMP EAX,0x3
00569819  74 10                     JZ 0x0056982b
0056981B  33 D2                     XOR EDX,EDX
0056981D  3B FE                     CMP EDI,ESI
0056981F  0F 9E C2                  SETLE DL
00569822  4A                        DEC EDX
00569823  83 E2 02                  AND EDX,0x2
00569826  4A                        DEC EDX
00569827  8B FA                     MOV EDI,EDX
00569829  EB 0E                     JMP 0x00569839
LAB_0056982b:
0056982B  33 C0                     XOR EAX,EAX
0056982D  3B FE                     CMP EDI,ESI
0056982F  0F 9D C0                  SETGE AL
00569832  48                        DEC EAX
00569833  83 E0 02                  AND EAX,0x2
00569836  48                        DEC EAX
00569837  8B F8                     MOV EDI,EAX
LAB_00569839:
00569839  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0056983C  8B 91 90 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9790]
00569842  25 FF 00 00 00            AND EAX,0xff
00569847  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0056984A  3B C2                     CMP EAX,EDX
0056984C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0056984F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00569852  7F 30                     JG 0x00569884
00569854  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
0056985A  8B 89 94 97 7C 00         MOV ECX,dword ptr [ECX + 0x7c9794]
00569860  81 C2 A0 0F 00 00         ADD EDX,0xfa0
00569866  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0056986B  0F AF CA                  IMUL ECX,EDX
0056986E  F7 E9                     IMUL ECX
00569870  C1 FA 05                  SAR EDX,0x5
00569873  8B C2                     MOV EAX,EDX
00569875  C1 E8 1F                  SHR EAX,0x1f
00569878  8D 84 02 60 F0 FF FF      LEA EAX,[EDX + EAX*0x1 + 0xfffff060]
0056987F  E9 B7 00 00 00            JMP 0x0056993b
LAB_00569884:
00569884  8B B1 8C 97 7C 00         MOV ESI,dword ptr [ECX + 0x7c978c]
0056988A  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
00569890  3B C6                     CMP EAX,ESI
00569892  7F 70                     JG 0x00569904
00569894  8B 89 94 97 7C 00         MOV ECX,dword ptr [ECX + 0x7c9794]
0056989A  81 C2 A0 0F 00 00         ADD EDX,0xfa0
005698A0  0F AF CA                  IMUL ECX,EDX
005698A3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005698A8  F7 E9                     IMUL ECX
005698AA  C1 FA 05                  SAR EDX,0x5
005698AD  8B C2                     MOV EAX,EDX
005698AF  B9 40 1F 00 00            MOV ECX,0x1f40
005698B4  C1 E8 1F                  SHR EAX,0x1f
005698B7  03 D0                     ADD EDX,EAX
005698B9  B8 56 55 55 55            MOV EAX,0x55555556
005698BE  8B FA                     MOV EDI,EDX
005698C0  2B CF                     SUB ECX,EDI
005698C2  D1 E1                     SHL ECX,0x1
005698C4  F7 E9                     IMUL ECX
005698C6  8B CA                     MOV ECX,EDX
005698C8  C1 E9 1F                  SHR ECX,0x1f
005698CB  03 D1                     ADD EDX,ECX
005698CD  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005698D0  8D 84 3A 60 F0 FF FF      LEA EAX,[EDX + EDI*0x1 + 0xfffff060]
005698D7  8B D6                     MOV EDX,ESI
005698D9  2B D1                     SUB EDX,ECX
005698DB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005698DE  0F AF C2                  IMUL EAX,EDX
005698E1  99                        CDQ
005698E2  2B F1                     SUB ESI,ECX
005698E4  8D BC 3F 80 C1 FF FF      LEA EDI,[EDI + EDI*0x1 + 0xffffc180]
005698EB  F7 FE                     IDIV ESI
005698ED  8B C8                     MOV ECX,EAX
005698EF  B8 56 55 55 55            MOV EAX,0x55555556
005698F4  F7 EF                     IMUL EDI
005698F6  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005698F9  8B C2                     MOV EAX,EDX
005698FB  C1 E8 1F                  SHR EAX,0x1f
005698FE  03 D1                     ADD EDX,ECX
00569900  03 C2                     ADD EAX,EDX
00569902  EB 37                     JMP 0x0056993b
LAB_00569904:
00569904  8B 89 94 97 7C 00         MOV ECX,dword ptr [ECX + 0x7c9794]
0056990A  81 C2 A0 0F 00 00         ADD EDX,0xfa0
00569910  0F AF CA                  IMUL ECX,EDX
00569913  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00569918  F7 E9                     IMUL ECX
0056991A  C1 FA 05                  SAR EDX,0x5
0056991D  8B C2                     MOV EAX,EDX
0056991F  C1 E8 1F                  SHR EAX,0x1f
00569922  03 D0                     ADD EDX,EAX
00569924  B8 56 55 55 55            MOV EAX,0x55555556
00569929  8D 94 12 80 C1 FF FF      LEA EDX,[EDX + EDX*0x1 + 0xffffc180]
00569930  F7 EA                     IMUL EDX
00569932  8B CA                     MOV ECX,EDX
00569934  C1 E9 1F                  SHR ECX,0x1f
00569937  03 D1                     ADD EDX,ECX
00569939  8B C2                     MOV EAX,EDX
LAB_0056993b:
0056993B  0F AF 7D F0               IMUL EDI,dword ptr [EBP + -0x10]
0056993F  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00569942  6A 14                     PUSH 0x14
00569944  6A 12                     PUSH 0x12
00569946  57                        PUSH EDI
00569947  50                        PUSH EAX
00569948  6A 06                     PUSH 0x6
0056994A  6A 00                     PUSH 0x0
0056994C  52                        PUSH EDX
0056994D  E8 3E 7A 15 00            CALL 0x006c1390
00569952  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00569955  EB 16                     JMP 0x0056996d
LAB_00569957:
00569957  A1 0E 73 80 00            MOV EAX,[0x0080730e]
0056995C  6A 14                     PUSH 0x14
0056995E  6A 12                     PUSH 0x12
00569960  6A 00                     PUSH 0x0
00569962  50                        PUSH EAX
00569963  6A 02                     PUSH 0x2
00569965  6A 00                     PUSH 0x0
00569967  57                        PUSH EDI
00569968  E8 23 7A 15 00            CALL 0x006c1390
LAB_0056996d:
0056996D  85 C0                     TEST EAX,EAX
0056996F  0F 8C 7B 03 00 00         JL 0x00569cf0
00569975  8B 16                     MOV EDX,dword ptr [ESI]
00569977  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0056997A  8D 1C 8B                  LEA EBX,[EBX + ECX*0x4]
0056997D  89 93 0B 0E 00 00         MOV dword ptr [EBX + 0xe0b],EDX
00569983  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00569986  89 83 0F 0E 00 00         MOV dword ptr [EBX + 0xe0f],EAX
0056998C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0056998F  89 8B 13 0E 00 00         MOV dword ptr [EBX + 0xe13],ECX
00569995  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00569998  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056999E  5F                        POP EDI
0056999F  5E                        POP ESI
005699A0  5B                        POP EBX
005699A1  8B E5                     MOV ESP,EBP
005699A3  5D                        POP EBP
005699A4  C2 14 00                  RET 0x14
switchD_00568e23::caseD_6:
005699A7  F6 05 01 73 80 00 01      TEST byte ptr [0x00807301],0x1
005699AE  0F 84 3C 03 00 00         JZ 0x00569cf0
005699B4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005699B7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005699BA  6A 00                     PUSH 0x0
005699BC  6A FF                     PUSH -0x1
005699BE  8B 88 F3 0D 00 00         MOV ECX,dword ptr [EAX + 0xdf3]
005699C4  52                        PUSH EDX
005699C5  51                        PUSH ECX
005699C6  E8 C5 0F 1B 00            CALL 0x0071a990
005699CB  83 C4 10                  ADD ESP,0x10
005699CE  85 C0                     TEST EAX,EAX
005699D0  0F 84 1A 03 00 00         JZ 0x00569cf0
005699D6  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
005699DC  6A 1D                     PUSH 0x1d
005699DE  6A 1B                     PUSH 0x1b
005699E0  6A 00                     PUSH 0x0
005699E2  52                        PUSH EDX
005699E3  6A 02                     PUSH 0x2
005699E5  6A 00                     PUSH 0x0
005699E7  50                        PUSH EAX
005699E8  E8 A3 79 15 00            CALL 0x006c1390
005699ED  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
005699F0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005699F6  5F                        POP EDI
005699F7  5E                        POP ESI
005699F8  5B                        POP EBX
005699F9  8B E5                     MOV ESP,EBP
005699FB  5D                        POP EBP
005699FC  C2 14 00                  RET 0x14
switchD_00568e23::caseD_5:
005699FF  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
00569A06  0F 84 E4 02 00 00         JZ 0x00569cf0
00569A0C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00569A0F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00569A12  6A 00                     PUSH 0x0
00569A14  6A FF                     PUSH -0x1
00569A16  8B 91 F3 0D 00 00         MOV EDX,dword ptr [ECX + 0xdf3]
00569A1C  50                        PUSH EAX
00569A1D  52                        PUSH EDX
00569A1E  E8 6D 0F 1B 00            CALL 0x0071a990
00569A23  83 C4 10                  ADD ESP,0x10
00569A26  85 C0                     TEST EAX,EAX
00569A28  0F 84 C2 02 00 00         JZ 0x00569cf0
00569A2E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00569A31  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
00569A37  F7 DA                     NEG EDX
00569A39  1B D2                     SBB EDX,EDX
00569A3B  6A 19                     PUSH 0x19
00569A3D  83 E2 FE                  AND EDX,0xfffffffe
00569A40  6A 15                     PUSH 0x15
00569A42  6A 00                     PUSH 0x0
00569A44  83 C2 02                  ADD EDX,0x2
00569A47  51                        PUSH ECX
00569A48  52                        PUSH EDX
00569A49  6A 00                     PUSH 0x0
00569A4B  50                        PUSH EAX
00569A4C  E8 3F 79 15 00            CALL 0x006c1390
00569A51  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00569A54  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00569A5A  5F                        POP EDI
00569A5B  5E                        POP ESI
00569A5C  5B                        POP EBX
00569A5D  8B E5                     MOV ESP,EBP
00569A5F  5D                        POP EBP
00569A60  C2 14 00                  RET 0x14
switchD_00568e23::caseD_7:
00569A63  F6 05 01 73 80 00 04      TEST byte ptr [0x00807301],0x4
00569A6A  0F 84 80 02 00 00         JZ 0x00569cf0
00569A70  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00569A73  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00569A76  6A 00                     PUSH 0x0
00569A78  6A FF                     PUSH -0x1
00569A7A  8B 91 F3 0D 00 00         MOV EDX,dword ptr [ECX + 0xdf3]
00569A80  50                        PUSH EAX
00569A81  52                        PUSH EDX
00569A82  E8 09 0F 1B 00            CALL 0x0071a990
00569A87  83 C4 10                  ADD ESP,0x10
00569A8A  85 C0                     TEST EAX,EAX
00569A8C  0F 84 5E 02 00 00         JZ 0x00569cf0
00569A92  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
00569A98  6A 1F                     PUSH 0x1f
00569A9A  6A 1E                     PUSH 0x1e
00569A9C  6A 00                     PUSH 0x0
00569A9E  51                        PUSH ECX
00569A9F  6A 02                     PUSH 0x2
00569AA1  6A 00                     PUSH 0x0
00569AA3  50                        PUSH EAX
00569AA4  E8 E7 78 15 00            CALL 0x006c1390
00569AA9  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00569AAC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00569AB2  5F                        POP EDI
00569AB3  5E                        POP ESI
00569AB4  5B                        POP EBX
00569AB5  8B E5                     MOV ESP,EBP
00569AB7  5D                        POP EBP
00569AB8  C2 14 00                  RET 0x14
switchD_00568e23::caseD_1:
00569ABB  F6 05 01 73 80 00 04      TEST byte ptr [0x00807301],0x4
00569AC2  0F 84 28 02 00 00         JZ 0x00569cf0
00569AC8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00569ACB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00569ACE  6A 00                     PUSH 0x0
00569AD0  6A FF                     PUSH -0x1
00569AD2  8B 88 F3 0D 00 00         MOV ECX,dword ptr [EAX + 0xdf3]
00569AD8  52                        PUSH EDX
00569AD9  51                        PUSH ECX
00569ADA  E8 B1 0E 1B 00            CALL 0x0071a990
00569ADF  83 C4 10                  ADD ESP,0x10
00569AE2  85 C0                     TEST EAX,EAX
00569AE4  0F 84 06 02 00 00         JZ 0x00569cf0
00569AEA  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
00569AF0  6A 03                     PUSH 0x3
00569AF2  6A 02                     PUSH 0x2
00569AF4  6A 00                     PUSH 0x0
00569AF6  52                        PUSH EDX
00569AF7  6A 01                     PUSH 0x1
00569AF9  6A 00                     PUSH 0x0
00569AFB  50                        PUSH EAX
00569AFC  E8 8F 78 15 00            CALL 0x006c1390
00569B01  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00569B04  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00569B0A  5F                        POP EDI
00569B0B  5E                        POP ESI
00569B0C  5B                        POP EBX
00569B0D  8B E5                     MOV ESP,EBP
00569B0F  5D                        POP EBP
00569B10  C2 14 00                  RET 0x14
switchD_00568e23::caseD_8:
00569B13  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00569B16  6A 00                     PUSH 0x0
00569B18  85 F6                     TEST ESI,ESI
00569B1A  6A FF                     PUSH -0x1
00569B1C  74 0D                     JZ 0x00569b2b
00569B1E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00569B21  56                        PUSH ESI
00569B22  8B 88 F3 0D 00 00         MOV ECX,dword ptr [EAX + 0xdf3]
00569B28  51                        PUSH ECX
00569B29  EB 0C                     JMP 0x00569b37
LAB_00569b2b:
00569B2B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00569B2E  6A 10                     PUSH 0x10
00569B30  8B 82 F3 0D 00 00         MOV EAX,dword ptr [EDX + 0xdf3]
00569B36  50                        PUSH EAX
LAB_00569b37:
00569B37  E8 54 0E 1B 00            CALL 0x0071a990
00569B3C  83 C4 10                  ADD ESP,0x10
00569B3F  85 C0                     TEST EAX,EAX
00569B41  0F 84 A9 01 00 00         JZ 0x00569cf0
00569B47  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
00569B4D  6A 00                     PUSH 0x0
00569B4F  F7 DE                     NEG ESI
00569B51  1B F6                     SBB ESI,ESI
00569B53  6A 00                     PUSH 0x0
00569B55  83 E6 F7                  AND ESI,0xfffffff7
00569B58  6A 00                     PUSH 0x0
00569B5A  83 C6 09                  ADD ESI,0x9
00569B5D  51                        PUSH ECX
00569B5E  56                        PUSH ESI
00569B5F  6A 00                     PUSH 0x0
00569B61  50                        PUSH EAX
00569B62  E8 29 78 15 00            CALL 0x006c1390
00569B67  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00569B6A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00569B70  5F                        POP EDI
00569B71  5E                        POP ESI
00569B72  5B                        POP EBX
00569B73  8B E5                     MOV ESP,EBP
00569B75  5D                        POP EBP
00569B76  C2 14 00                  RET 0x14
switchD_00568e23::caseD_9:
00569B79  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00569B7C  6A 00                     PUSH 0x0
00569B7E  85 F6                     TEST ESI,ESI
00569B80  6A FF                     PUSH -0x1
00569B82  74 0D                     JZ 0x00569b91
00569B84  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00569B87  56                        PUSH ESI
00569B88  8B 82 F3 0D 00 00         MOV EAX,dword ptr [EDX + 0xdf3]
00569B8E  50                        PUSH EAX
00569B8F  EB 0C                     JMP 0x00569b9d
LAB_00569b91:
00569B91  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00569B94  6A 12                     PUSH 0x12
00569B96  8B 91 F3 0D 00 00         MOV EDX,dword ptr [ECX + 0xdf3]
00569B9C  52                        PUSH EDX
LAB_00569b9d:
00569B9D  E8 EE 0D 1B 00            CALL 0x0071a990
00569BA2  83 C4 10                  ADD ESP,0x10
00569BA5  85 C0                     TEST EAX,EAX
00569BA7  0F 84 43 01 00 00         JZ 0x00569cf0
00569BAD  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
00569BB3  6A 00                     PUSH 0x0
00569BB5  F7 DE                     NEG ESI
00569BB7  1B F6                     SBB ESI,ESI
00569BB9  6A 00                     PUSH 0x0
00569BBB  83 E6 F7                  AND ESI,0xfffffff7
00569BBE  6A 00                     PUSH 0x0
00569BC0  83 C6 09                  ADD ESI,0x9
00569BC3  51                        PUSH ECX
00569BC4  56                        PUSH ESI
00569BC5  6A 00                     PUSH 0x0
00569BC7  50                        PUSH EAX
00569BC8  E8 C3 77 15 00            CALL 0x006c1390
00569BCD  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00569BD0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00569BD6  5F                        POP EDI
00569BD7  5E                        POP ESI
00569BD8  5B                        POP EBX
00569BD9  8B E5                     MOV ESP,EBP
00569BDB  5D                        POP EBP
00569BDC  C2 14 00                  RET 0x14
switchD_00568e23::caseD_a:
00569BDF  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00569BE2  6A 00                     PUSH 0x0
00569BE4  85 F6                     TEST ESI,ESI
00569BE6  6A FF                     PUSH -0x1
00569BE8  74 0D                     JZ 0x00569bf7
00569BEA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00569BED  56                        PUSH ESI
00569BEE  8B 82 F3 0D 00 00         MOV EAX,dword ptr [EDX + 0xdf3]
00569BF4  50                        PUSH EAX
00569BF5  EB 0C                     JMP 0x00569c03
LAB_00569bf7:
00569BF7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00569BFA  6A 14                     PUSH 0x14
00569BFC  8B 91 F3 0D 00 00         MOV EDX,dword ptr [ECX + 0xdf3]
00569C02  52                        PUSH EDX
LAB_00569c03:
00569C03  E8 88 0D 1B 00            CALL 0x0071a990
00569C08  83 C4 10                  ADD ESP,0x10
00569C0B  85 C0                     TEST EAX,EAX
00569C0D  0F 84 DD 00 00 00         JZ 0x00569cf0
00569C13  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
00569C19  6A 00                     PUSH 0x0
00569C1B  F7 DE                     NEG ESI
00569C1D  1B F6                     SBB ESI,ESI
00569C1F  6A 00                     PUSH 0x0
00569C21  83 E6 F7                  AND ESI,0xfffffff7
00569C24  6A 00                     PUSH 0x0
00569C26  83 C6 09                  ADD ESI,0x9
00569C29  51                        PUSH ECX
00569C2A  56                        PUSH ESI
00569C2B  6A 00                     PUSH 0x0
00569C2D  50                        PUSH EAX
00569C2E  E8 5D 77 15 00            CALL 0x006c1390
00569C33  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00569C36  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00569C3C  5F                        POP EDI
00569C3D  5E                        POP ESI
00569C3E  5B                        POP EBX
00569C3F  8B E5                     MOV ESP,EBP
00569C41  5D                        POP EBP
00569C42  C2 14 00                  RET 0x14
switchD_00568e23::caseD_c:
00569C45  F6 05 01 73 80 00 01      TEST byte ptr [0x00807301],0x1
00569C4C  0F 84 9E 00 00 00         JZ 0x00569cf0
00569C52  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00569C55  33 C0                     XOR EAX,EAX
00569C57  85 F6                     TEST ESI,ESI
00569C59  74 4D                     JZ 0x00569ca8
00569C5B  80 3E 00                  CMP byte ptr [ESI],0x0
00569C5E  74 48                     JZ 0x00569ca8
00569C60  8B 0D 58 67 80 00         MOV ECX,dword ptr [0x00806758]
00569C66  85 C9                     TEST ECX,ECX
00569C68  74 0C                     JZ 0x00569c76
00569C6A  50                        PUSH EAX
00569C6B  50                        PUSH EAX
00569C6C  56                        PUSH ESI
00569C6D  51                        PUSH ECX
00569C6E  E8 8D 00 1B 00            CALL 0x00719d00
00569C73  83 C4 10                  ADD ESP,0x10
LAB_00569c76:
00569C76  85 C0                     TEST EAX,EAX
00569C78  75 50                     JNZ 0x00569cca
00569C7A  8B 0D 98 67 80 00         MOV ECX,dword ptr [0x00806798]
00569C80  85 C9                     TEST ECX,ECX
00569C82  74 0C                     JZ 0x00569c90
00569C84  50                        PUSH EAX
00569C85  50                        PUSH EAX
00569C86  56                        PUSH ESI
00569C87  51                        PUSH ECX
00569C88  E8 73 00 1B 00            CALL 0x00719d00
00569C8D  83 C4 10                  ADD ESP,0x10
LAB_00569c90:
00569C90  85 C0                     TEST EAX,EAX
00569C92  75 36                     JNZ 0x00569cca
00569C94  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00569C97  50                        PUSH EAX
00569C98  50                        PUSH EAX
00569C99  56                        PUSH ESI
00569C9A  8B 82 EF 0D 00 00         MOV EAX,dword ptr [EDX + 0xdef]
00569CA0  50                        PUSH EAX
00569CA1  E8 5A 00 1B 00            CALL 0x00719d00
00569CA6  EB 1B                     JMP 0x00569cc3
LAB_00569ca8:
00569CA8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00569CAB  85 C9                     TEST ECX,ECX
00569CAD  7E 17                     JLE 0x00569cc6
00569CAF  6A 00                     PUSH 0x0
00569CB1  6A FF                     PUSH -0x1
00569CB3  51                        PUSH ECX
00569CB4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00569CB7  8B 91 F3 0D 00 00         MOV EDX,dword ptr [ECX + 0xdf3]
00569CBD  52                        PUSH EDX
00569CBE  E8 CD 0C 1B 00            CALL 0x0071a990
LAB_00569cc3:
00569CC3  83 C4 10                  ADD ESP,0x10
LAB_00569cc6:
00569CC6  85 C0                     TEST EAX,EAX
00569CC8  74 26                     JZ 0x00569cf0
LAB_00569cca:
00569CCA  8A 0D F4 33 80 00         MOV CL,byte ptr [0x008033f4]
00569CD0  6A 1A                     PUSH 0x1a
00569CD2  8A D1                     MOV DL,CL
00569CD4  FE C1                     INC CL
00569CD6  88 0D F4 33 80 00         MOV byte ptr [0x008033f4],CL
00569CDC  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
00569CE2  6A 1A                     PUSH 0x1a
00569CE4  6A 00                     PUSH 0x0
00569CE6  51                        PUSH ECX
00569CE7  6A 02                     PUSH 0x2
00569CE9  52                        PUSH EDX
00569CEA  50                        PUSH EAX
00569CEB  E8 A0 76 15 00            CALL 0x006c1390
switchD_00568e23::default:
00569CF0  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00569CF3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00569CF9  5F                        POP EDI
00569CFA  5E                        POP ESI
00569CFB  5B                        POP EBX
00569CFC  8B E5                     MOV ESP,EBP
00569CFE  5D                        POP EBP
00569CFF  C2 14 00                  RET 0x14
LAB_00569d02:
00569D02  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00569D05  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00569d0a:
00569D0A  5F                        POP EDI
00569D0B  5E                        POP ESI
00569D0C  5B                        POP EBX
00569D0D  8B E5                     MOV ESP,EBP
00569D0F  5D                        POP EBP
00569D10  C2 14 00                  RET 0x14
