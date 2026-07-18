FUN_006173a0:
006173A0  55                        PUSH EBP
006173A1  8B EC                     MOV EBP,ESP
006173A3  83 EC 10                  SUB ESP,0x10
006173A6  53                        PUSH EBX
006173A7  56                        PUSH ESI
006173A8  8B F1                     MOV ESI,ECX
006173AA  57                        PUSH EDI
006173AB  33 DB                     XOR EBX,EBX
006173AD  0F BF 86 64 02 00 00      MOVSX EAX,word ptr [ESI + 0x264]
006173B4  0F BF 8E 62 02 00 00      MOVSX ECX,word ptr [ESI + 0x262]
006173BB  0F BF 96 60 02 00 00      MOVSX EDX,word ptr [ESI + 0x260]
006173C2  50                        PUSH EAX
006173C3  51                        PUSH ECX
006173C4  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
006173CB  0F BF 8E 5C 02 00 00      MOVSX ECX,word ptr [ESI + 0x25c]
006173D2  52                        PUSH EDX
006173D3  50                        PUSH EAX
006173D4  0F BF 96 5A 02 00 00      MOVSX EDX,word ptr [ESI + 0x25a]
006173DB  51                        PUSH ECX
006173DC  52                        PUSH EDX
006173DD  E8 2B 5B 09 00            CALL 0x006acf0d
006173E2  8B F8                     MOV EDI,EAX
006173E4  83 C4 18                  ADD ESP,0x18
006173E7  85 FF                     TEST EDI,EDI
006173E9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006173EC  0F 8E F7 00 00 00         JLE 0x006174e9
006173F2  0F BF 86 5A 02 00 00      MOVSX EAX,word ptr [ESI + 0x25a]
006173F9  0F BF 8E 60 02 00 00      MOVSX ECX,word ptr [ESI + 0x260]
00617400  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00617403  2B C1                     SUB EAX,ECX
00617405  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00617408  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061740B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061740E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00617411  C1 E0 04                  SHL EAX,0x4
00617414  99                        CDQ
00617415  F7 FF                     IDIV EDI
00617417  0F BF 96 62 02 00 00      MOVSX EDX,word ptr [ESI + 0x262]
0061741E  8B C8                     MOV ECX,EAX
00617420  0F BF 86 5C 02 00 00      MOVSX EAX,word ptr [ESI + 0x25c]
00617427  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061742A  2B C2                     SUB EAX,EDX
0061742C  89 8E 7C 02 00 00         MOV dword ptr [ESI + 0x27c],ECX
00617432  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00617435  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00617438  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061743B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061743E  C1 E0 04                  SHL EAX,0x4
00617441  99                        CDQ
00617442  F7 FF                     IDIV EDI
00617444  0F BF 96 64 02 00 00      MOVSX EDX,word ptr [ESI + 0x264]
0061744B  8B F8                     MOV EDI,EAX
0061744D  0F BF 86 5E 02 00 00      MOVSX EAX,word ptr [ESI + 0x25e]
00617454  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00617457  2B C2                     SUB EAX,EDX
00617459  89 BE 80 02 00 00         MOV dword ptr [ESI + 0x280],EDI
0061745F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00617462  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00617465  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00617468  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061746B  C1 E0 04                  SHL EAX,0x4
0061746E  99                        CDQ
0061746F  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
00617472  8B D8                     MOV EBX,EAX
00617474  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00617479  89 9E 84 02 00 00         MOV dword ptr [ESI + 0x284],EBX
0061747F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00617482  0F AF FE                  IMUL EDI,ESI
00617485  0F AF DE                  IMUL EBX,ESI
00617488  F7 EF                     IMUL EDI
0061748A  0F AF CE                  IMUL ECX,ESI
0061748D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00617490  C1 FA 0C                  SAR EDX,0xc
00617493  8B C2                     MOV EAX,EDX
00617495  C1 E8 1F                  SHR EAX,0x1f
00617498  03 D0                     ADD EDX,EAX
0061749A  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0061749F  03 D7                     ADD EDX,EDI
006174A1  8B FA                     MOV EDI,EDX
006174A3  F7 EB                     IMUL EBX
006174A5  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006174A8  C1 FA 0C                  SAR EDX,0xc
006174AB  8B C2                     MOV EAX,EDX
006174AD  C1 E8 1F                  SHR EAX,0x1f
006174B0  03 D0                     ADD EDX,EAX
006174B2  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006174B7  03 D3                     ADD EDX,EBX
006174B9  8B DA                     MOV EBX,EDX
006174BB  F7 E9                     IMUL ECX
006174BD  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006174C0  C1 FA 0C                  SAR EDX,0xc
006174C3  8B CA                     MOV ECX,EDX
006174C5  C1 E9 1F                  SHR ECX,0x1f
006174C8  03 D1                     ADD EDX,ECX
006174CA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006174CD  03 D0                     ADD EDX,EAX
006174CF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006174D2  89 10                     MOV dword ptr [EAX],EDX
006174D4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006174D7  89 39                     MOV dword ptr [ECX],EDI
006174D9  5F                        POP EDI
006174DA  89 1A                     MOV dword ptr [EDX],EBX
006174DC  5E                        POP ESI
006174DD  B8 01 00 00 00            MOV EAX,0x1
006174E2  5B                        POP EBX
006174E3  8B E5                     MOV ESP,EBP
006174E5  5D                        POP EBP
006174E6  C2 10 00                  RET 0x10
LAB_006174e9:
006174E9  5F                        POP EDI
006174EA  8B C3                     MOV EAX,EBX
006174EC  5E                        POP ESI
006174ED  5B                        POP EBX
006174EE  8B E5                     MOV ESP,EBP
006174F0  5D                        POP EBP
006174F1  C2 10 00                  RET 0x10
