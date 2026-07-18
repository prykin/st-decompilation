FUN_00646e00:
00646E00  55                        PUSH EBP
00646E01  8B EC                     MOV EBP,ESP
00646E03  83 EC 10                  SUB ESP,0x10
00646E06  53                        PUSH EBX
00646E07  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00646E0A  56                        PUSH ESI
00646E0B  57                        PUSH EDI
00646E0C  85 DB                     TEST EBX,EBX
00646E0E  B8 79 19 8C 02            MOV EAX,0x28c1979
00646E13  7C 13                     JL 0x00646e28
00646E15  F7 EB                     IMUL EBX
00646E17  D1 FA                     SAR EDX,0x1
00646E19  8B C2                     MOV EAX,EDX
00646E1B  C1 E8 1F                  SHR EAX,0x1f
00646E1E  03 D0                     ADD EDX,EAX
00646E20  0F BF FA                  MOVSX EDI,DX
00646E23  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00646E26  EB 14                     JMP 0x00646e3c
LAB_00646e28:
00646E28  F7 EB                     IMUL EBX
00646E2A  D1 FA                     SAR EDX,0x1
00646E2C  8B CA                     MOV ECX,EDX
00646E2E  C1 E9 1F                  SHR ECX,0x1f
00646E31  03 D1                     ADD EDX,ECX
00646E33  0F BF FA                  MOVSX EDI,DX
00646E36  8D 57 FF                  LEA EDX,[EDI + -0x1]
00646E39  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00646e3c:
00646E3C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00646E3F  B8 79 19 8C 02            MOV EAX,0x28c1979
00646E44  85 F6                     TEST ESI,ESI
00646E46  7C 13                     JL 0x00646e5b
00646E48  F7 EE                     IMUL ESI
00646E4A  D1 FA                     SAR EDX,0x1
00646E4C  8B C2                     MOV EAX,EDX
00646E4E  C1 E8 1F                  SHR EAX,0x1f
00646E51  03 D0                     ADD EDX,EAX
00646E53  0F BF CA                  MOVSX ECX,DX
00646E56  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00646E59  EB 14                     JMP 0x00646e6f
LAB_00646e5b:
00646E5B  F7 EE                     IMUL ESI
00646E5D  D1 FA                     SAR EDX,0x1
00646E5F  8B CA                     MOV ECX,EDX
00646E61  C1 E9 1F                  SHR ECX,0x1f
00646E64  03 D1                     ADD EDX,ECX
00646E66  0F BF CA                  MOVSX ECX,DX
00646E69  8D 51 FF                  LEA EDX,[ECX + -0x1]
00646E6C  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_00646e6f:
00646E6F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00646E72  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00646E77  85 D2                     TEST EDX,EDX
00646E79  7C 14                     JL 0x00646e8f
00646E7B  F7 EA                     IMUL EDX
00646E7D  C1 FA 06                  SAR EDX,0x6
00646E80  8B C2                     MOV EAX,EDX
00646E82  C1 E8 1F                  SHR EAX,0x1f
00646E85  03 D0                     ADD EDX,EAX
00646E87  0F BF D2                  MOVSX EDX,DX
00646E8A  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00646E8D  EB 13                     JMP 0x00646ea2
LAB_00646e8f:
00646E8F  F7 EA                     IMUL EDX
00646E91  C1 FA 06                  SAR EDX,0x6
00646E94  8B C2                     MOV EAX,EDX
00646E96  C1 E8 1F                  SHR EAX,0x1f
00646E99  03 D0                     ADD EDX,EAX
00646E9B  0F BF C2                  MOVSX EAX,DX
00646E9E  48                        DEC EAX
00646E9F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00646ea2:
00646EA2  85 F6                     TEST ESI,ESI
00646EA4  7D 01                     JGE 0x00646ea7
00646EA6  49                        DEC ECX
LAB_00646ea7:
00646EA7  85 DB                     TEST EBX,EBX
00646EA9  8B D7                     MOV EDX,EDI
00646EAB  7D 03                     JGE 0x00646eb0
00646EAD  8D 57 FF                  LEA EDX,[EDI + -0x1]
LAB_00646eb0:
00646EB0  A1 98 75 80 00            MOV EAX,[0x00807598]
00646EB5  8D 72 03                  LEA ESI,[EDX + 0x3]
00646EB8  3B 70 48                  CMP ESI,dword ptr [EAX + 0x48]
00646EBB  0F 8C DF 02 00 00         JL 0x006471a0
00646EC1  8B 78 58                  MOV EDI,dword ptr [EAX + 0x58]
00646EC4  8D 72 FD                  LEA ESI,[EDX + -0x3]
00646EC7  3B F7                     CMP ESI,EDI
00646EC9  0F 8F D1 02 00 00         JG 0x006471a0
00646ECF  8B 78 44                  MOV EDI,dword ptr [EAX + 0x44]
00646ED2  8D 71 03                  LEA ESI,[ECX + 0x3]
00646ED5  3B F7                     CMP ESI,EDI
00646ED7  0F 8C C3 02 00 00         JL 0x006471a0
00646EDD  8B 78 54                  MOV EDI,dword ptr [EAX + 0x54]
00646EE0  8D 71 FD                  LEA ESI,[ECX + -0x3]
00646EE3  3B F7                     CMP ESI,EDI
00646EE5  0F 8F B5 02 00 00         JG 0x006471a0
00646EEB  6A 03                     PUSH 0x3
00646EED  51                        PUSH ECX
00646EEE  52                        PUSH EDX
00646EEF  8B C8                     MOV ECX,EAX
00646EF1  E8 DA 6C 09 00            CALL 0x006ddbd0
00646EF6  85 C0                     TEST EAX,EAX
00646EF8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00646EFB  0F 84 AD 02 00 00         JZ 0x006471ae
00646F01  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
00646F07  85 F6                     TEST ESI,ESI
00646F09  0F 84 9F 02 00 00         JZ 0x006471ae
00646F0F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00646F12  8D 7A FD                  LEA EDI,[EDX + -0x3]
00646F15  85 FF                     TEST EDI,EDI
00646F17  7D 02                     JGE 0x00646f1b
00646F19  33 FF                     XOR EDI,EDI
LAB_00646f1b:
00646F1B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00646F1E  8D 41 FD                  LEA EAX,[ECX + -0x3]
00646F21  85 C0                     TEST EAX,EAX
00646F23  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00646F26  7D 07                     JGE 0x00646f2f
00646F28  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
LAB_00646f2f:
00646F2F  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
00646F36  8D 5A 04                  LEA EBX,[EDX + 0x4]
00646F39  3B D8                     CMP EBX,EAX
00646F3B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00646F3E  7E 03                     JLE 0x00646f43
00646F40  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00646f43:
00646F43  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00646F4A  8D 59 04                  LEA EBX,[ECX + 0x4]
00646F4D  3B D8                     CMP EBX,EAX
00646F4F  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00646F52  7E 03                     JLE 0x00646f57
00646F54  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00646f57:
00646F57  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00646F5E  0F 84 47 02 00 00         JZ 0x006471ab
00646F64  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
00646F6A  85 C0                     TEST EAX,EAX
00646F6C  0F 84 39 02 00 00         JZ 0x006471ab
00646F72  8D 45 F4                  LEA EAX,[EBP + -0xc]
00646F75  50                        PUSH EAX
00646F76  8D 45 F8                  LEA EAX,[EBP + -0x8]
00646F79  50                        PUSH EAX
00646F7A  52                        PUSH EDX
00646F7B  51                        PUSH ECX
00646F7C  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
00646F82  51                        PUSH ECX
00646F83  8B CE                     MOV ECX,ESI
00646F85  E8 C9 CF DB FF            CALL 0x00403f53
00646F8A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00646F8D  85 C0                     TEST EAX,EAX
00646F8F  0F 8C 16 02 00 00         JL 0x006471ab
00646F95  83 F8 05                  CMP EAX,0x5
00646F98  0F 8D 0D 02 00 00         JGE 0x006471ab
00646F9E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00646FA1  85 D2                     TEST EDX,EDX
00646FA3  0F 8C 02 02 00 00         JL 0x006471ab
00646FA9  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00646FAC  3B D1                     CMP EDX,ECX
00646FAE  0F 8D F7 01 00 00         JGE 0x006471ab
00646FB4  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
00646FBB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00646FBE  03 C3                     ADD EAX,EBX
00646FC0  85 C0                     TEST EAX,EAX
00646FC2  0F 8C E3 01 00 00         JL 0x006471ab
00646FC8  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
00646FCB  0F 8D DA 01 00 00         JGE 0x006471ab
00646FD1  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00646FD4  85 F6                     TEST ESI,ESI
00646FD6  0F 84 CF 01 00 00         JZ 0x006471ab
00646FDC  0F AF C1                  IMUL EAX,ECX
00646FDF  03 C6                     ADD EAX,ESI
00646FE1  33 C9                     XOR ECX,ECX
00646FE3  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00646FE6  8B C1                     MOV EAX,ECX
00646FE8  85 C0                     TEST EAX,EAX
00646FEA  0F 85 BB 01 00 00         JNZ 0x006471ab
00646FF0  A0 4D 87 80 00            MOV AL,[0x0080874d]
00646FF5  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
00646FFB  3C FF                     CMP AL,0xff
00646FFD  0F 84 A8 01 00 00         JZ 0x006471ab
00647003  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
00647009  85 C0                     TEST EAX,EAX
0064700B  0F 84 9A 01 00 00         JZ 0x006471ab
00647011  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00647014  8D 55 F8                  LEA EDX,[EBP + -0x8]
00647017  8D 45 F4                  LEA EAX,[EBP + -0xc]
0064701A  52                        PUSH EDX
0064701B  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
00647021  50                        PUSH EAX
00647022  57                        PUSH EDI
00647023  51                        PUSH ECX
00647024  52                        PUSH EDX
00647025  8B CE                     MOV ECX,ESI
00647027  E8 27 CF DB FF            CALL 0x00403f53
0064702C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064702F  85 C9                     TEST ECX,ECX
00647031  0F 8C 74 01 00 00         JL 0x006471ab
00647037  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
0064703A  3B CA                     CMP ECX,EDX
0064703C  0F 8D 69 01 00 00         JGE 0x006471ab
00647042  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647045  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00647048  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0064704F  03 C3                     ADD EAX,EBX
00647051  85 C0                     TEST EAX,EAX
00647053  0F 8C 52 01 00 00         JL 0x006471ab
00647059  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0064705C  0F 8D 49 01 00 00         JGE 0x006471ab
00647062  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00647065  85 F6                     TEST ESI,ESI
00647067  0F 84 3E 01 00 00         JZ 0x006471ab
0064706D  0F AF C2                  IMUL EAX,EDX
00647070  03 C6                     ADD EAX,ESI
00647072  33 D2                     XOR EDX,EDX
00647074  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
00647077  8B C2                     MOV EAX,EDX
00647079  85 C0                     TEST EAX,EAX
0064707B  0F 85 2A 01 00 00         JNZ 0x006471ab
00647081  A0 4D 87 80 00            MOV AL,[0x0080874d]
00647086  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0064708C  3C FF                     CMP AL,0xff
0064708E  0F 84 17 01 00 00         JZ 0x006471ab
00647094  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0064709A  85 C0                     TEST EAX,EAX
0064709C  0F 84 09 01 00 00         JZ 0x006471ab
006470A2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006470A5  8D 45 F8                  LEA EAX,[EBP + -0x8]
006470A8  8D 4D F4                  LEA ECX,[EBP + -0xc]
006470AB  50                        PUSH EAX
006470AC  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
006470B2  51                        PUSH ECX
006470B3  57                        PUSH EDI
006470B4  52                        PUSH EDX
006470B5  50                        PUSH EAX
006470B6  8B CE                     MOV ECX,ESI
006470B8  E8 96 CE DB FF            CALL 0x00403f53
006470BD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006470C0  85 C9                     TEST ECX,ECX
006470C2  0F 8C E3 00 00 00         JL 0x006471ab
006470C8  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
006470CB  3B CA                     CMP ECX,EDX
006470CD  0F 8D D8 00 00 00         JGE 0x006471ab
006470D3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006470D6  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006470D9  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
006470E0  03 C7                     ADD EAX,EDI
006470E2  85 C0                     TEST EAX,EAX
006470E4  0F 8C C1 00 00 00         JL 0x006471ab
006470EA  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
006470ED  0F 8D B8 00 00 00         JGE 0x006471ab
006470F3  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
006470F6  85 F6                     TEST ESI,ESI
006470F8  0F 84 AD 00 00 00         JZ 0x006471ab
006470FE  0F AF C2                  IMUL EAX,EDX
00647101  03 C6                     ADD EAX,ESI
00647103  33 D2                     XOR EDX,EDX
00647105  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
00647108  8B C2                     MOV EAX,EDX
0064710A  85 C0                     TEST EAX,EAX
0064710C  0F 85 99 00 00 00         JNZ 0x006471ab
00647112  A0 4D 87 80 00            MOV AL,[0x0080874d]
00647117  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0064711D  3C FF                     CMP AL,0xff
0064711F  0F 84 86 00 00 00         JZ 0x006471ab
00647125  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0064712B  85 C0                     TEST EAX,EAX
0064712D  74 7C                     JZ 0x006471ab
0064712F  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00647132  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00647135  8D 45 F4                  LEA EAX,[EBP + -0xc]
00647138  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0064713B  50                        PUSH EAX
0064713C  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
00647142  51                        PUSH ECX
00647143  57                        PUSH EDI
00647144  52                        PUSH EDX
00647145  50                        PUSH EAX
00647146  8B CE                     MOV ECX,ESI
00647148  E8 06 CE DB FF            CALL 0x00403f53
0064714D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00647150  85 C9                     TEST ECX,ECX
00647152  7C 57                     JL 0x006471ab
00647154  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
00647157  3B CA                     CMP ECX,EDX
00647159  7D 50                     JGE 0x006471ab
0064715B  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
00647162  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00647165  03 C3                     ADD EAX,EBX
00647167  85 C0                     TEST EAX,EAX
00647169  7C 40                     JL 0x006471ab
0064716B  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0064716E  7D 3B                     JGE 0x006471ab
00647170  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00647173  85 F6                     TEST ESI,ESI
00647175  74 34                     JZ 0x006471ab
00647177  0F AF C2                  IMUL EAX,EDX
0064717A  03 C6                     ADD EAX,ESI
0064717C  33 D2                     XOR EDX,EDX
0064717E  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
00647181  8B C2                     MOV EAX,EDX
00647183  85 C0                     TEST EAX,EAX
00647185  75 24                     JNZ 0x006471ab
00647187  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064718A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064718D  50                        PUSH EAX
0064718E  57                        PUSH EDI
0064718F  51                        PUSH ECX
00647190  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00647196  E8 C2 DC DB FF            CALL 0x00404e5d
0064719B  83 F8 01                  CMP EAX,0x1
0064719E  74 0B                     JZ 0x006471ab
LAB_006471a0:
006471A0  5F                        POP EDI
006471A1  5E                        POP ESI
006471A2  33 C0                     XOR EAX,EAX
006471A4  5B                        POP EBX
006471A5  8B E5                     MOV ESP,EBP
006471A7  5D                        POP EBP
006471A8  C2 0C 00                  RET 0xc
LAB_006471ab:
006471AB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_006471ae:
006471AE  5F                        POP EDI
006471AF  5E                        POP ESI
006471B0  5B                        POP EBX
006471B1  8B E5                     MOV ESP,EBP
006471B3  5D                        POP EBP
006471B4  C2 0C 00                  RET 0xc
