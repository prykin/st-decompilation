FUN_0060dd70:
0060DD70  55                        PUSH EBP
0060DD71  8B EC                     MOV EBP,ESP
0060DD73  83 EC 20                  SUB ESP,0x20
0060DD76  53                        PUSH EBX
0060DD77  56                        PUSH ESI
0060DD78  57                        PUSH EDI
0060DD79  8B F9                     MOV EDI,ECX
0060DD7B  B8 79 19 8C 02            MOV EAX,0x28c1979
0060DD80  8B 8F E9 01 00 00         MOV ECX,dword ptr [EDI + 0x1e9]
0060DD86  85 C9                     TEST ECX,ECX
0060DD88  7C 10                     JL 0x0060dd9a
0060DD8A  F7 E9                     IMUL ECX
0060DD8C  D1 FA                     SAR EDX,0x1
0060DD8E  8B C2                     MOV EAX,EDX
0060DD90  C1 E8 1F                  SHR EAX,0x1f
0060DD93  03 D0                     ADD EDX,EAX
0060DD95  0F BF DA                  MOVSX EBX,DX
0060DD98  EB 0F                     JMP 0x0060dda9
LAB_0060dd9a:
0060DD9A  F7 E9                     IMUL ECX
0060DD9C  D1 FA                     SAR EDX,0x1
0060DD9E  8B CA                     MOV ECX,EDX
0060DDA0  C1 E9 1F                  SHR ECX,0x1f
0060DDA3  03 D1                     ADD EDX,ECX
0060DDA5  0F BF DA                  MOVSX EBX,DX
0060DDA8  4B                        DEC EBX
LAB_0060dda9:
0060DDA9  8B 8F ED 01 00 00         MOV ECX,dword ptr [EDI + 0x1ed]
0060DDAF  B8 79 19 8C 02            MOV EAX,0x28c1979
0060DDB4  85 C9                     TEST ECX,ECX
0060DDB6  7C 10                     JL 0x0060ddc8
0060DDB8  F7 E9                     IMUL ECX
0060DDBA  D1 FA                     SAR EDX,0x1
0060DDBC  8B C2                     MOV EAX,EDX
0060DDBE  C1 E8 1F                  SHR EAX,0x1f
0060DDC1  03 D0                     ADD EDX,EAX
0060DDC3  0F BF F2                  MOVSX ESI,DX
0060DDC6  EB 0F                     JMP 0x0060ddd7
LAB_0060ddc8:
0060DDC8  F7 E9                     IMUL ECX
0060DDCA  D1 FA                     SAR EDX,0x1
0060DDCC  8B CA                     MOV ECX,EDX
0060DDCE  C1 E9 1F                  SHR ECX,0x1f
0060DDD1  03 D1                     ADD EDX,ECX
0060DDD3  0F BF F2                  MOVSX ESI,DX
0060DDD6  4E                        DEC ESI
LAB_0060ddd7:
0060DDD7  8B 8F F1 01 00 00         MOV ECX,dword ptr [EDI + 0x1f1]
0060DDDD  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0060DDE2  85 C9                     TEST ECX,ECX
0060DDE4  7C 14                     JL 0x0060ddfa
0060DDE6  F7 E9                     IMUL ECX
0060DDE8  C1 FA 06                  SAR EDX,0x6
0060DDEB  8B C2                     MOV EAX,EDX
0060DDED  C1 E8 1F                  SHR EAX,0x1f
0060DDF0  03 D0                     ADD EDX,EAX
0060DDF2  0F BF CA                  MOVSX ECX,DX
0060DDF5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0060DDF8  EB 13                     JMP 0x0060de0d
LAB_0060ddfa:
0060DDFA  F7 E9                     IMUL ECX
0060DDFC  C1 FA 06                  SAR EDX,0x6
0060DDFF  8B C2                     MOV EAX,EDX
0060DE01  C1 E8 1F                  SHR EAX,0x1f
0060DE04  03 D0                     ADD EDX,EAX
0060DE06  0F BF C2                  MOVSX EAX,DX
0060DE09  48                        DEC EAX
0060DE0A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0060de0d:
0060DE0D  8B 87 4C 02 00 00         MOV EAX,dword ptr [EDI + 0x24c]
0060DE13  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060DE19  8D 14 18                  LEA EDX,[EAX + EBX*0x1]
0060DE1C  3B 51 48                  CMP EDX,dword ptr [ECX + 0x48]
0060DE1F  0F 8C DE 02 00 00         JL 0x0060e103
0060DE25  8B D3                     MOV EDX,EBX
0060DE27  2B D0                     SUB EDX,EAX
0060DE29  3B 51 58                  CMP EDX,dword ptr [ECX + 0x58]
0060DE2C  0F 8F D1 02 00 00         JG 0x0060e103
0060DE32  8D 14 30                  LEA EDX,[EAX + ESI*0x1]
0060DE35  3B 51 44                  CMP EDX,dword ptr [ECX + 0x44]
0060DE38  0F 8C C5 02 00 00         JL 0x0060e103
0060DE3E  8B D6                     MOV EDX,ESI
0060DE40  2B D0                     SUB EDX,EAX
0060DE42  3B 51 54                  CMP EDX,dword ptr [ECX + 0x54]
0060DE45  0F 8F B8 02 00 00         JG 0x0060e103
0060DE4B  50                        PUSH EAX
0060DE4C  56                        PUSH ESI
0060DE4D  53                        PUSH EBX
0060DE4E  E8 7D FD 0C 00            CALL 0x006ddbd0
0060DE53  33 D2                     XOR EDX,EDX
0060DE55  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0060DE58  3B C2                     CMP EAX,EDX
0060DE5A  0F 84 AA 02 00 00         JZ 0x0060e10a
0060DE60  39 15 88 2A 80 00         CMP dword ptr [0x00802a88],EDX
0060DE66  0F 84 9E 02 00 00         JZ 0x0060e10a
0060DE6C  8B 87 4C 02 00 00         MOV EAX,dword ptr [EDI + 0x24c]
0060DE72  8B CE                     MOV ECX,ESI
0060DE74  2B C8                     SUB ECX,EAX
0060DE76  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0060DE79  79 03                     JNS 0x0060de7e
0060DE7B  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0060de7e:
0060DE7E  8B CB                     MOV ECX,EBX
0060DE80  2B C8                     SUB ECX,EAX
0060DE82  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0060DE85  79 03                     JNS 0x0060de8a
0060DE87  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0060de8a:
0060DE8A  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
0060DE91  8D 54 30 01               LEA EDX,[EAX + ESI*0x1 + 0x1]
0060DE95  3B D1                     CMP EDX,ECX
0060DE97  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0060DE9A  7E 03                     JLE 0x0060de9f
0060DE9C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_0060de9f:
0060DE9F  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0060DEA6  8D 44 18 01               LEA EAX,[EAX + EBX*0x1 + 0x1]
0060DEAA  3B C1                     CMP EAX,ECX
0060DEAC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060DEAF  7E 03                     JLE 0x0060deb4
0060DEB1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0060deb4:
0060DEB4  A0 4D 87 80 00            MOV AL,[0x0080874d]
0060DEB9  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0060DEBF  3C FF                     CMP AL,0xff
0060DEC1  0F 84 43 02 00 00         JZ 0x0060e10a
0060DEC7  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0060DECD  85 C0                     TEST EAX,EAX
0060DECF  0F 84 35 02 00 00         JZ 0x0060e10a
0060DED5  8B 97 0C 01 00 00         MOV EDX,dword ptr [EDI + 0x10c]
0060DEDB  8D 45 E0                  LEA EAX,[EBP + -0x20]
0060DEDE  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0060DEE1  50                        PUSH EAX
0060DEE2  51                        PUSH ECX
0060DEE3  56                        PUSH ESI
0060DEE4  53                        PUSH EBX
0060DEE5  52                        PUSH EDX
0060DEE6  8B CF                     MOV ECX,EDI
0060DEE8  E8 66 60 DF FF            CALL 0x00403f53
0060DEED  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0060DEF0  85 DB                     TEST EBX,EBX
0060DEF2  0F 8C 12 02 00 00         JL 0x0060e10a
0060DEF8  83 FB 05                  CMP EBX,0x5
0060DEFB  0F 8D 09 02 00 00         JGE 0x0060e10a
0060DF01  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0060DF04  85 D2                     TEST EDX,EDX
0060DF06  0F 8C FE 01 00 00         JL 0x0060e10a
0060DF0C  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0060DF0F  3B D1                     CMP EDX,ECX
0060DF11  0F 8D F3 01 00 00         JGE 0x0060e10a
0060DF17  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0060DF1E  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0060DF21  03 C6                     ADD EAX,ESI
0060DF23  85 C0                     TEST EAX,EAX
0060DF25  0F 8C DF 01 00 00         JL 0x0060e10a
0060DF2B  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0060DF2E  0F 8D D6 01 00 00         JGE 0x0060e10a
0060DF34  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0060DF37  85 FF                     TEST EDI,EDI
0060DF39  0F 84 CB 01 00 00         JZ 0x0060e10a
0060DF3F  0F AF C1                  IMUL EAX,ECX
0060DF42  03 C7                     ADD EAX,EDI
0060DF44  33 C9                     XOR ECX,ECX
0060DF46  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0060DF49  8B C1                     MOV EAX,ECX
0060DF4B  85 C0                     TEST EAX,EAX
0060DF4D  0F 85 B7 01 00 00         JNZ 0x0060e10a
0060DF53  A0 4D 87 80 00            MOV AL,[0x0080874d]
0060DF58  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0060DF5E  3C FF                     CMP AL,0xff
0060DF60  0F 84 A4 01 00 00         JZ 0x0060e10a
0060DF66  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0060DF6C  85 C0                     TEST EAX,EAX
0060DF6E  0F 84 96 01 00 00         JZ 0x0060e10a
0060DF74  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0060DF77  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0060DF7A  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0060DF7D  8D 45 E0                  LEA EAX,[EBP + -0x20]
0060DF80  52                        PUSH EDX
0060DF81  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
0060DF87  50                        PUSH EAX
0060DF88  57                        PUSH EDI
0060DF89  51                        PUSH ECX
0060DF8A  52                        PUSH EDX
0060DF8B  8B CE                     MOV ECX,ESI
0060DF8D  E8 C1 5F DF FF            CALL 0x00403f53
0060DF92  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0060DF95  85 C9                     TEST ECX,ECX
0060DF97  0F 8C 6D 01 00 00         JL 0x0060e10a
0060DF9D  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
0060DFA0  3B CA                     CMP ECX,EDX
0060DFA2  0F 8D 62 01 00 00         JGE 0x0060e10a
0060DFA8  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0060DFAF  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0060DFB2  03 C3                     ADD EAX,EBX
0060DFB4  85 C0                     TEST EAX,EAX
0060DFB6  0F 8C 4E 01 00 00         JL 0x0060e10a
0060DFBC  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0060DFBF  0F 8D 45 01 00 00         JGE 0x0060e10a
0060DFC5  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0060DFC8  85 F6                     TEST ESI,ESI
0060DFCA  0F 84 3A 01 00 00         JZ 0x0060e10a
0060DFD0  0F AF C2                  IMUL EAX,EDX
0060DFD3  03 C6                     ADD EAX,ESI
0060DFD5  33 D2                     XOR EDX,EDX
0060DFD7  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0060DFDA  8B C2                     MOV EAX,EDX
0060DFDC  85 C0                     TEST EAX,EAX
0060DFDE  0F 85 26 01 00 00         JNZ 0x0060e10a
0060DFE4  A0 4D 87 80 00            MOV AL,[0x0080874d]
0060DFE9  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0060DFEF  3C FF                     CMP AL,0xff
0060DFF1  0F 84 13 01 00 00         JZ 0x0060e10a
0060DFF7  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0060DFFD  85 C0                     TEST EAX,EAX
0060DFFF  0F 84 05 01 00 00         JZ 0x0060e10a
0060E005  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0060E008  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0060E00B  8D 4D E0                  LEA ECX,[EBP + -0x20]
0060E00E  50                        PUSH EAX
0060E00F  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0060E015  51                        PUSH ECX
0060E016  57                        PUSH EDI
0060E017  52                        PUSH EDX
0060E018  50                        PUSH EAX
0060E019  8B CE                     MOV ECX,ESI
0060E01B  E8 33 5F DF FF            CALL 0x00403f53
0060E020  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0060E023  85 C9                     TEST ECX,ECX
0060E025  0F 8C DF 00 00 00         JL 0x0060e10a
0060E02B  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
0060E02E  3B CA                     CMP ECX,EDX
0060E030  0F 8D D4 00 00 00         JGE 0x0060e10a
0060E036  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0060E039  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0060E03C  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0060E043  03 C7                     ADD EAX,EDI
0060E045  85 C0                     TEST EAX,EAX
0060E047  0F 8C BD 00 00 00         JL 0x0060e10a
0060E04D  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0060E050  0F 8D B4 00 00 00         JGE 0x0060e10a
0060E056  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0060E059  85 F6                     TEST ESI,ESI
0060E05B  0F 84 A9 00 00 00         JZ 0x0060e10a
0060E061  0F AF C2                  IMUL EAX,EDX
0060E064  03 C6                     ADD EAX,ESI
0060E066  33 D2                     XOR EDX,EDX
0060E068  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0060E06B  8B C2                     MOV EAX,EDX
0060E06D  85 C0                     TEST EAX,EAX
0060E06F  0F 85 95 00 00 00         JNZ 0x0060e10a
0060E075  A0 4D 87 80 00            MOV AL,[0x0080874d]
0060E07A  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0060E080  3C FF                     CMP AL,0xff
0060E082  0F 84 82 00 00 00         JZ 0x0060e10a
0060E088  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0060E08E  85 C0                     TEST EAX,EAX
0060E090  74 78                     JZ 0x0060e10a
0060E092  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0060E095  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0060E098  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0060E09B  8D 4D E0                  LEA ECX,[EBP + -0x20]
0060E09E  50                        PUSH EAX
0060E09F  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0060E0A5  51                        PUSH ECX
0060E0A6  57                        PUSH EDI
0060E0A7  52                        PUSH EDX
0060E0A8  50                        PUSH EAX
0060E0A9  8B CE                     MOV ECX,ESI
0060E0AB  E8 A3 5E DF FF            CALL 0x00403f53
0060E0B0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0060E0B3  85 C9                     TEST ECX,ECX
0060E0B5  7C 53                     JL 0x0060e10a
0060E0B7  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
0060E0BA  3B CA                     CMP ECX,EDX
0060E0BC  7D 4C                     JGE 0x0060e10a
0060E0BE  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0060E0C5  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0060E0C8  03 C3                     ADD EAX,EBX
0060E0CA  85 C0                     TEST EAX,EAX
0060E0CC  7C 3C                     JL 0x0060e10a
0060E0CE  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0060E0D1  7D 37                     JGE 0x0060e10a
0060E0D3  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0060E0D6  85 F6                     TEST ESI,ESI
0060E0D8  74 30                     JZ 0x0060e10a
0060E0DA  0F AF C2                  IMUL EAX,EDX
0060E0DD  03 C6                     ADD EAX,ESI
0060E0DF  33 D2                     XOR EDX,EDX
0060E0E1  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0060E0E4  8B C2                     MOV EAX,EDX
0060E0E6  85 C0                     TEST EAX,EAX
0060E0E8  75 20                     JNZ 0x0060e10a
0060E0EA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060E0ED  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0060E0F0  50                        PUSH EAX
0060E0F1  57                        PUSH EDI
0060E0F2  51                        PUSH ECX
0060E0F3  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0060E0F9  E8 5F 6D DF FF            CALL 0x00404e5d
0060E0FE  83 F8 01                  CMP EAX,0x1
0060E101  74 07                     JZ 0x0060e10a
LAB_0060e103:
0060E103  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_0060e10a:
0060E10A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0060E10D  5F                        POP EDI
0060E10E  5E                        POP ESI
0060E10F  5B                        POP EBX
0060E110  8B E5                     MOV ESP,EBP
0060E112  5D                        POP EBP
0060E113  C3                        RET
