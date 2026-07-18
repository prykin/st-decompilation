HelpPanelTy::DrawObj:
00515650  55                        PUSH EBP
00515651  8B EC                     MOV EBP,ESP
00515653  83 EC 54                  SUB ESP,0x54
00515656  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051565B  53                        PUSH EBX
0051565C  56                        PUSH ESI
0051565D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00515660  57                        PUSH EDI
00515661  8D 55 B0                  LEA EDX,[EBP + -0x50]
00515664  8D 4D AC                  LEA ECX,[EBP + -0x54]
00515667  6A 00                     PUSH 0x0
00515669  52                        PUSH EDX
0051566A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0051566D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00515673  E8 78 81 21 00            CALL 0x0072d7f0
00515678  8B F0                     MOV ESI,EAX
0051567A  83 C4 08                  ADD ESP,0x8
0051567D  85 F6                     TEST ESI,ESI
0051567F  0F 85 98 01 00 00         JNZ 0x0051581d
00515685  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0051568A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0051568D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00515690  85 C0                     TEST EAX,EAX
00515692  0F 84 E3 00 00 00         JZ 0x0051577b
00515698  8B 16                     MOV EDX,dword ptr [ESI]
0051569A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0051569D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005156A0  83 C2 02                  ADD EDX,0x2
005156A3  81 E1 FF 00 00 00         AND ECX,0xff
005156A9  50                        PUSH EAX
005156AA  89 16                     MOV dword ptr [ESI],EDX
005156AC  51                        PUSH ECX
005156AD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005156B3  E8 E1 ED EE FF            CALL 0x00404499
005156B8  85 C0                     TEST EAX,EAX
005156BA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005156BD  0F 84 B8 00 00 00         JZ 0x0051577b
005156C3  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005156C6  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005156C9  B8 9C 01 00 00            MOV EAX,0x19c
005156CE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005156D1  2B C1                     SUB EAX,ECX
005156D3  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005156D6  99                        CDQ
005156D7  2B C2                     SUB EAX,EDX
005156D9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005156DC  8B F8                     MOV EDI,EAX
005156DE  8B 83 1C 02 00 00         MOV EAX,dword ptr [EBX + 0x21c]
005156E4  52                        PUSH EDX
005156E5  51                        PUSH ECX
005156E6  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005156E9  2B C2                     SUB EAX,EDX
005156EB  99                        CDQ
005156EC  2B C2                     SUB EAX,EDX
005156EE  D1 F8                     SAR EAX,0x1
005156F0  50                        PUSH EAX
005156F1  8B 83 1C 02 00 00         MOV EAX,dword ptr [EBX + 0x21c]
005156F7  D1 FF                     SAR EDI,0x1
005156F9  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005156FC  2B C1                     SUB EAX,ECX
005156FE  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00515704  99                        CDQ
00515705  2B C2                     SUB EAX,EDX
00515707  D1 F8                     SAR EAX,0x1
00515709  50                        PUSH EAX
0051570A  8B 83 1C 02 00 00         MOV EAX,dword ptr [EBX + 0x21c]
00515710  6A 00                     PUSH 0x0
00515712  50                        PUSH EAX
00515713  8B 06                     MOV EAX,dword ptr [ESI]
00515715  50                        PUSH EAX
00515716  57                        PUSH EDI
00515717  6A 00                     PUSH 0x0
00515719  51                        PUSH ECX
0051571A  E8 D1 FE 19 00            CALL 0x006b55f0
0051571F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00515722  8B 06                     MOV EAX,dword ptr [ESI]
00515724  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051572A  68 FF 00 00 00            PUSH 0xff
0051572F  6A 00                     PUSH 0x0
00515731  52                        PUSH EDX
00515732  50                        PUSH EAX
00515733  57                        PUSH EDI
00515734  6A 00                     PUSH 0x0
00515736  51                        PUSH ECX
00515737  E8 04 FD 19 00            CALL 0x006b5440
0051573C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0051573F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00515742  8B 0E                     MOV ECX,dword ptr [ESI]
00515744  6A 0D                     PUSH 0xd
00515746  83 C2 04                  ADD EDX,0x4
00515749  6A 6F                     PUSH 0x6f
0051574B  83 C0 04                  ADD EAX,0x4
0051574E  52                        PUSH EDX
0051574F  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
00515755  83 E9 02                  SUB ECX,0x2
00515758  50                        PUSH EAX
00515759  83 C7 FE                  ADD EDI,-0x2
0051575C  51                        PUSH ECX
0051575D  57                        PUSH EDI
0051575E  6A 00                     PUSH 0x0
00515760  52                        PUSH EDX
00515761  E8 7A 07 1A 00            CALL 0x006b5ee0
00515766  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00515769  8B 0E                     MOV ECX,dword ptr [ESI]
0051576B  83 C0 0A                  ADD EAX,0xa
0051576E  03 C8                     ADD ECX,EAX
00515770  89 0E                     MOV dword ptr [ESI],ECX
00515772  8D 4D FC                  LEA ECX,[EBP + -0x4]
00515775  51                        PUSH ECX
00515776  E8 E5 58 19 00            CALL 0x006ab060
LAB_0051577b:
0051577B  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0051577E  85 FF                     TEST EDI,EDI
00515780  0F 84 85 00 00 00         JZ 0x0051580b
00515786  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00515789  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0051578C  52                        PUSH EDX
0051578D  50                        PUSH EAX
0051578E  E8 62 FF EE FF            CALL 0x004056f5
00515793  50                        PUSH EAX
00515794  57                        PUSH EDI
00515795  E8 06 5C 1F 00            CALL 0x0070b3a0
0051579A  8B C8                     MOV ECX,EAX
0051579C  83 C4 10                  ADD ESP,0x10
0051579F  85 C9                     TEST ECX,ECX
005157A1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005157A4  74 65                     JZ 0x0051580b
005157A6  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005157A9  B8 9C 01 00 00            MOV EAX,0x19c
005157AE  2B C2                     SUB EAX,EDX
005157B0  51                        PUSH ECX
005157B1  8B 0E                     MOV ECX,dword ptr [ESI]
005157B3  6A 01                     PUSH 0x1
005157B5  99                        CDQ
005157B6  2B C2                     SUB EAX,EDX
005157B8  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005157BE  8B F8                     MOV EDI,EAX
005157C0  51                        PUSH ECX
005157C1  D1 FF                     SAR EDI,0x1
005157C3  57                        PUSH EDI
005157C4  52                        PUSH EDX
005157C5  E8 5F DA EE FF            CALL 0x00403229
005157CA  8B 83 48 02 00 00         MOV EAX,dword ptr [EBX + 0x248]
005157D0  6A 04                     PUSH 0x4
005157D2  50                        PUSH EAX
005157D3  E8 C8 5B 1F 00            CALL 0x0070b3a0
005157D8  8B 0E                     MOV ECX,dword ptr [ESI]
005157DA  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
005157E0  50                        PUSH EAX
005157E1  83 E9 02                  SUB ECX,0x2
005157E4  6A 06                     PUSH 0x6
005157E6  83 C7 FE                  ADD EDI,-0x2
005157E9  51                        PUSH ECX
005157EA  57                        PUSH EDI
005157EB  52                        PUSH EDX
005157EC  E8 38 DA EE FF            CALL 0x00403229
005157F1  8B 83 48 02 00 00         MOV EAX,dword ptr [EBX + 0x248]
005157F7  6A 04                     PUSH 0x4
005157F9  50                        PUSH EAX
005157FA  E8 A1 5B 1F 00            CALL 0x0070b3a0
005157FF  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00515802  8B 06                     MOV EAX,dword ptr [ESI]
00515804  83 C4 38                  ADD ESP,0x38
00515807  03 C1                     ADD EAX,ECX
00515809  89 06                     MOV dword ptr [ESI],EAX
LAB_0051580b:
0051580B  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0051580E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00515814  5F                        POP EDI
00515815  5E                        POP ESI
00515816  5B                        POP EBX
00515817  8B E5                     MOV ESP,EBP
00515819  5D                        POP EBP
0051581A  C2 10 00                  RET 0x10
LAB_0051581d:
0051581D  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00515820  68 88 3B 7C 00            PUSH 0x7c3b88
00515825  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051582A  56                        PUSH ESI
0051582B  6A 00                     PUSH 0x0
0051582D  68 F3 03 00 00            PUSH 0x3f3
00515832  68 3C 38 7C 00            PUSH 0x7c383c
00515837  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051583C  E8 8F 7C 19 00            CALL 0x006ad4d0
00515841  83 C4 18                  ADD ESP,0x18
00515844  85 C0                     TEST EAX,EAX
00515846  74 01                     JZ 0x00515849
00515848  CC                        INT3
LAB_00515849:
00515849  68 F3 03 00 00            PUSH 0x3f3
0051584E  68 3C 38 7C 00            PUSH 0x7c383c
00515853  6A 00                     PUSH 0x0
00515855  56                        PUSH ESI
00515856  E8 E5 05 19 00            CALL 0x006a5e40
0051585B  5F                        POP EDI
0051585C  5E                        POP ESI
0051585D  5B                        POP EBX
0051585E  8B E5                     MOV ESP,EBP
00515860  5D                        POP EBP
00515861  C2 10 00                  RET 0x10
