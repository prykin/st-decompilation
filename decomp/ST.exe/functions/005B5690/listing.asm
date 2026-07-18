FUN_005b5690:
005B5690  55                        PUSH EBP
005B5691  8B EC                     MOV EBP,ESP
005B5693  83 EC 48                  SUB ESP,0x48
005B5696  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B569B  53                        PUSH EBX
005B569C  56                        PUSH ESI
005B569D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B56A0  57                        PUSH EDI
005B56A1  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B56A4  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B56A7  6A 00                     PUSH 0x0
005B56A9  52                        PUSH EDX
005B56AA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B56AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B56B3  E8 38 81 17 00            CALL 0x0072d7f0
005B56B8  8B F0                     MOV ESI,EAX
005B56BA  83 C4 08                  ADD ESP,0x8
005B56BD  85 F6                     TEST ESI,ESI
005B56BF  0F 85 32 02 00 00         JNZ 0x005b58f7
005B56C5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005B56C8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005B56CB  66 8B 47 14               MOV AX,word ptr [EDI + 0x14]
005B56CF  83 F8 03                  CMP EAX,0x3
005B56D2  77 5D                     JA 0x005b5731
switchD_005b56d4::switchD:
005B56D4  FF 24 85 40 59 5B 00      JMP dword ptr [EAX*0x4 + 0x5b5940]
switchD_005b56d4::caseD_0:
005B56DB  8B C1                     MOV EAX,ECX
005B56DD  25 FF 00 00 00            AND EAX,0xff
005B56E2  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
005B56E9  2B D0                     SUB EDX,EAX
005B56EB  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
005B56EE  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
005B56F1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B56F4  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
005B56F7  03 C2                     ADD EAX,EDX
005B56F9  8B 90 EF 00 00 00         MOV EDX,dword ptr [EAX + 0xef]
005B56FF  EB 29                     JMP 0x005b572a
switchD_005b56d4::caseD_2:
005B5701  8B C1                     MOV EAX,ECX
005B5703  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
005B5706  25 FF 00 00 00            AND EAX,0xff
005B570B  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
005B5712  2B D0                     SUB EDX,EAX
005B5714  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
005B5717  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
005B571A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B571D  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
005B5720  03 C2                     ADD EAX,EDX
005B5722  8B 90 EF 00 00 00         MOV EDX,dword ptr [EAX + 0xef]
005B5728  2B D3                     SUB EDX,EBX
LAB_005b572a:
005B572A  4A                        DEC EDX
005B572B  89 90 EB 00 00 00         MOV dword ptr [EAX + 0xeb],EDX
switchD_005b56d4::default:
005B5731  81 E1 FF 00 00 00         AND ECX,0xff
005B5737  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005B573E  2B C1                     SUB EAX,ECX
005B5740  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005B5743  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
005B5746  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B5749  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
005B574C  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
005B574F  8B 84 10 E7 00 00 00      MOV EAX,dword ptr [EAX + EDX*0x1 + 0xe7]
005B5756  83 F8 FF                  CMP EAX,-0x1
005B5759  74 22                     JZ 0x005b577d
005B575B  8B 8E 03 01 00 00         MOV ECX,dword ptr [ESI + 0x103]
005B5761  8B 96 FF 00 00 00         MOV EDX,dword ptr [ESI + 0xff]
005B5767  51                        PUSH ECX
005B5768  8B 8E EB 00 00 00         MOV ECX,dword ptr [ESI + 0xeb]
005B576E  52                        PUSH EDX
005B576F  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
005B5775  51                        PUSH ECX
005B5776  50                        PUSH EAX
005B5777  52                        PUSH EDX
005B5778  E8 B3 DF 0F 00            CALL 0x006b3730
LAB_005b577d:
005B577D  8A 86 E2 00 00 00         MOV AL,byte ptr [ESI + 0xe2]
005B5783  84 C0                     TEST AL,AL
005B5785  0F 84 8D 00 00 00         JZ 0x005b5818
005B578B  33 C0                     XOR EAX,EAX
005B578D  66 8B 47 14               MOV AX,word ptr [EDI + 0x14]
005B5791  83 F8 03                  CMP EAX,0x3
005B5794  77 55                     JA 0x005b57eb
switchD_005b5796::switchD:
005B5796  FF 24 85 50 59 5B 00      JMP dword ptr [EAX*0x4 + 0x5b5950]
switchD_005b5796::caseD_0:
005B579D  8B 86 FF 00 00 00         MOV EAX,dword ptr [ESI + 0xff]
005B57A3  8B 8E AB 00 00 00         MOV ECX,dword ptr [ESI + 0xab]
005B57A9  03 C1                     ADD EAX,ECX
005B57AB  89 86 21 02 00 00         MOV dword ptr [ESI + 0x221],EAX
005B57B1  8B 8E 03 01 00 00         MOV ECX,dword ptr [ESI + 0x103]
005B57B7  03 8E AF 00 00 00         ADD ECX,dword ptr [ESI + 0xaf]
005B57BD  89 8E 25 02 00 00         MOV dword ptr [ESI + 0x225],ECX
005B57C3  EB 26                     JMP 0x005b57eb
switchD_005b5796::caseD_2:
005B57C5  8B 96 FF 00 00 00         MOV EDX,dword ptr [ESI + 0xff]
005B57CB  8B BE B3 00 00 00         MOV EDI,dword ptr [ESI + 0xb3]
005B57D1  03 D7                     ADD EDX,EDI
005B57D3  89 96 21 02 00 00         MOV dword ptr [ESI + 0x221],EDX
005B57D9  8B 86 03 01 00 00         MOV EAX,dword ptr [ESI + 0x103]
005B57DF  03 86 B7 00 00 00         ADD EAX,dword ptr [ESI + 0xb7]
005B57E5  89 86 25 02 00 00         MOV dword ptr [ESI + 0x225],EAX
switchD_005b5796::default:
005B57EB  8B 86 09 02 00 00         MOV EAX,dword ptr [ESI + 0x209]
005B57F1  83 F8 FF                  CMP EAX,-0x1
005B57F4  74 22                     JZ 0x005b5818
005B57F6  8B 8E 25 02 00 00         MOV ECX,dword ptr [ESI + 0x225]
005B57FC  8B 96 21 02 00 00         MOV EDX,dword ptr [ESI + 0x221]
005B5802  51                        PUSH ECX
005B5803  8B 8E 0D 02 00 00         MOV ECX,dword ptr [ESI + 0x20d]
005B5809  52                        PUSH EDX
005B580A  8B 96 4D 02 00 00         MOV EDX,dword ptr [ESI + 0x24d]
005B5810  51                        PUSH ECX
005B5811  50                        PUSH EAX
005B5812  52                        PUSH EDX
005B5813  E8 18 DF 0F 00            CALL 0x006b3730
LAB_005b5818:
005B5818  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005B581B  8B BE 90 01 00 00         MOV EDI,dword ptr [ESI + 0x190]
005B5821  8B 9E 94 01 00 00         MOV EBX,dword ptr [ESI + 0x194]
005B5827  33 C0                     XOR EAX,EAX
005B5829  66 8B 41 14               MOV AX,word ptr [ECX + 0x14]
005B582D  83 F8 03                  CMP EAX,0x3
005B5830  77 53                     JA 0x005b5885
switchD_005b5832::switchD:
005B5832  FF 24 85 60 59 5B 00      JMP dword ptr [EAX*0x4 + 0x5b5960]
switchD_005b5832::caseD_1:
005B5839  8B 96 80 01 00 00         MOV EDX,dword ptr [ESI + 0x180]
005B583F  83 EA 03                  SUB EDX,0x3
005B5842  89 96 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EDX
005B5848  EB 3B                     JMP 0x005b5885
switchD_005b5832::caseD_0:
005B584A  8B 86 80 01 00 00         MOV EAX,dword ptr [ESI + 0x180]
005B5850  48                        DEC EAX
005B5851  89 86 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EAX
005B5857  EB 2C                     JMP 0x005b5885
switchD_005b5832::caseD_2:
005B5859  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005B585C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005B585F  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
005B5862  89 96 90 01 00 00         MOV dword ptr [ESI + 0x190],EDX
005B5868  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
005B586E  03 C8                     ADD ECX,EAX
005B5870  89 8E 94 01 00 00         MOV dword ptr [ESI + 0x194],ECX
switchD_005b5832::caseD_3:
005B5876  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
005B587C  83 E9 02                  SUB ECX,0x2
005B587F  89 8E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],ECX
switchD_005b5832::default:
005B5885  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
005B588B  83 F8 FF                  CMP EAX,-0x1
005B588E  74 22                     JZ 0x005b58b2
005B5890  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
005B5896  8B 8E 90 01 00 00         MOV ECX,dword ptr [ESI + 0x190]
005B589C  52                        PUSH EDX
005B589D  8B 96 7C 01 00 00         MOV EDX,dword ptr [ESI + 0x17c]
005B58A3  51                        PUSH ECX
005B58A4  52                        PUSH EDX
005B58A5  50                        PUSH EAX
005B58A6  8B 86 BC 01 00 00         MOV EAX,dword ptr [ESI + 0x1bc]
005B58AC  50                        PUSH EAX
005B58AD  E8 7E DE 0F 00            CALL 0x006b3730
LAB_005b58b2:
005B58B2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005B58B5  89 BE 90 01 00 00         MOV dword ptr [ESI + 0x190],EDI
005B58BB  33 C0                     XOR EAX,EAX
005B58BD  89 9E 94 01 00 00         MOV dword ptr [ESI + 0x194],EBX
005B58C3  66 8B 41 14               MOV AX,word ptr [ECX + 0x14]
005B58C7  83 E8 02                  SUB EAX,0x2
005B58CA  74 0B                     JZ 0x005b58d7
005B58CC  48                        DEC EAX
005B58CD  75 16                     JNZ 0x005b58e5
005B58CF  6A FF                     PUSH -0x1
005B58D1  6A 01                     PUSH 0x1
005B58D3  6A 03                     PUSH 0x3
005B58D5  EB 06                     JMP 0x005b58dd
LAB_005b58d7:
005B58D7  6A FF                     PUSH -0x1
005B58D9  6A 01                     PUSH 0x1
005B58DB  6A 04                     PUSH 0x4
LAB_005b58dd:
005B58DD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B58E0  E8 0C F3 E4 FF            CALL 0x00404bf1
LAB_005b58e5:
005B58E5  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B58E8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B58EE  5F                        POP EDI
005B58EF  5E                        POP ESI
005B58F0  5B                        POP EBX
005B58F1  8B E5                     MOV ESP,EBP
005B58F3  5D                        POP EBP
005B58F4  C2 14 00                  RET 0x14
LAB_005b58f7:
005B58F7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B58FA  68 94 CA 7C 00            PUSH 0x7cca94
005B58FF  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B5904  56                        PUSH ESI
005B5905  6A 00                     PUSH 0x0
005B5907  68 8C 00 00 00            PUSH 0x8c
005B590C  68 38 CA 7C 00            PUSH 0x7cca38
005B5911  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B5916  E8 B5 7B 0F 00            CALL 0x006ad4d0
005B591B  83 C4 18                  ADD ESP,0x18
005B591E  85 C0                     TEST EAX,EAX
005B5920  74 01                     JZ 0x005b5923
005B5922  CC                        INT3
LAB_005b5923:
005B5923  68 8C 00 00 00            PUSH 0x8c
005B5928  68 38 CA 7C 00            PUSH 0x7cca38
005B592D  6A 00                     PUSH 0x0
005B592F  56                        PUSH ESI
005B5930  E8 0B 05 0F 00            CALL 0x006a5e40
005B5935  5F                        POP EDI
005B5936  5E                        POP ESI
005B5937  5B                        POP EBX
005B5938  8B E5                     MOV ESP,EBP
005B593A  5D                        POP EBP
005B593B  C2 14 00                  RET 0x14
