FUN_006383e0:
006383E0  55                        PUSH EBP
006383E1  8B EC                     MOV EBP,ESP
006383E3  6A FF                     PUSH -0x1
006383E5  68 C8 D1 79 00            PUSH 0x79d1c8
006383EA  68 64 D9 72 00            PUSH 0x72d964
006383EF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006383F5  50                        PUSH EAX
006383F6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006383FD  81 EC 94 00 00 00         SUB ESP,0x94
00638403  53                        PUSH EBX
00638404  56                        PUSH ESI
00638405  57                        PUSH EDI
00638406  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00638409  C7 45 84 00 00 00 00      MOV dword ptr [EBP + -0x7c],0x0
00638410  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00638413  85 C9                     TEST ECX,ECX
00638415  B8 79 19 8C 02            MOV EAX,0x28c1979
0063841A  7C 10                     JL 0x0063842c
0063841C  F7 E9                     IMUL ECX
0063841E  D1 FA                     SAR EDX,0x1
00638420  8B C2                     MOV EAX,EDX
00638422  C1 E8 1F                  SHR EAX,0x1f
00638425  03 D0                     ADD EDX,EAX
00638427  0F BF FA                  MOVSX EDI,DX
0063842A  EB 0F                     JMP 0x0063843b
LAB_0063842c:
0063842C  F7 E9                     IMUL ECX
0063842E  D1 FA                     SAR EDX,0x1
00638430  8B CA                     MOV ECX,EDX
00638432  C1 E9 1F                  SHR ECX,0x1f
00638435  03 D1                     ADD EDX,ECX
00638437  0F BF FA                  MOVSX EDI,DX
0063843A  4F                        DEC EDI
LAB_0063843b:
0063843B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063843E  85 C9                     TEST ECX,ECX
00638440  B8 79 19 8C 02            MOV EAX,0x28c1979
00638445  7C 10                     JL 0x00638457
00638447  F7 E9                     IMUL ECX
00638449  D1 FA                     SAR EDX,0x1
0063844B  8B C2                     MOV EAX,EDX
0063844D  C1 E8 1F                  SHR EAX,0x1f
00638450  03 D0                     ADD EDX,EAX
00638452  0F BF CA                  MOVSX ECX,DX
00638455  EB 0F                     JMP 0x00638466
LAB_00638457:
00638457  F7 E9                     IMUL ECX
00638459  D1 FA                     SAR EDX,0x1
0063845B  8B CA                     MOV ECX,EDX
0063845D  C1 E9 1F                  SHR ECX,0x1f
00638460  03 D1                     ADD EDX,ECX
00638462  0F BF CA                  MOVSX ECX,DX
00638465  49                        DEC ECX
LAB_00638466:
00638466  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00638469  85 D2                     TEST EDX,EDX
0063846B  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00638470  7C 11                     JL 0x00638483
00638472  F7 EA                     IMUL EDX
00638474  C1 FA 06                  SAR EDX,0x6
00638477  8B C2                     MOV EAX,EDX
00638479  C1 E8 1F                  SHR EAX,0x1f
0063847C  03 D0                     ADD EDX,EAX
0063847E  0F BF D2                  MOVSX EDX,DX
00638481  EB 10                     JMP 0x00638493
LAB_00638483:
00638483  F7 EA                     IMUL EDX
00638485  C1 FA 06                  SAR EDX,0x6
00638488  8B C2                     MOV EAX,EDX
0063848A  C1 E8 1F                  SHR EAX,0x1f
0063848D  03 D0                     ADD EDX,EAX
0063848F  0F BF D2                  MOVSX EDX,DX
00638492  4A                        DEC EDX
LAB_00638493:
00638493  8B F1                     MOV ESI,ECX
00638495  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00638498  2B F0                     SUB ESI,EAX
0063849A  79 02                     JNS 0x0063849e
0063849C  33 F6                     XOR ESI,ESI
LAB_0063849e:
0063849E  8B DF                     MOV EBX,EDI
006384A0  2B D8                     SUB EBX,EAX
006384A2  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006384A5  79 07                     JNS 0x006384ae
006384A7  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_006384ae:
006384AE  8B DA                     MOV EBX,EDX
006384B0  2B D8                     SUB EBX,EAX
006384B2  89 5D 8C                  MOV dword ptr [EBP + -0x74],EBX
006384B5  79 07                     JNS 0x006384be
006384B7  C7 45 8C 00 00 00 00      MOV dword ptr [EBP + -0x74],0x0
LAB_006384be:
006384BE  8D 5C 01 01               LEA EBX,[ECX + EAX*0x1 + 0x1]
006384C2  89 5D 80                  MOV dword ptr [EBP + -0x80],EBX
006384C5  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
006384CC  3B D9                     CMP EBX,ECX
006384CE  7E 05                     JLE 0x006384d5
006384D0  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
006384D3  8B D9                     MOV EBX,ECX
LAB_006384d5:
006384D5  8D 7C 07 01               LEA EDI,[EDI + EAX*0x1 + 0x1]
006384D9  89 7D 88                  MOV dword ptr [EBP + -0x78],EDI
006384DC  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
006384E3  3B F9                     CMP EDI,ECX
006384E5  7E 05                     JLE 0x006384ec
006384E7  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
006384EA  8B F9                     MOV EDI,ECX
LAB_006384ec:
006384EC  8D 44 02 01               LEA EAX,[EDX + EAX*0x1 + 0x1]
006384F0  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006384F6  83 F8 05                  CMP EAX,0x5
006384F9  7E 0A                     JLE 0x00638505
006384FB  C7 85 74 FF FF FF 05 00 00 00  MOV dword ptr [EBP + 0xffffff74],0x5
LAB_00638505:
00638505  8B C7                     MOV EAX,EDI
00638507  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0063850A  2B C7                     SUB EAX,EDI
0063850C  8B CB                     MOV ECX,EBX
0063850E  2B CE                     SUB ECX,ESI
00638510  0F AF C1                  IMUL EAX,ECX
00638513  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00638516  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0063851D  C1 E0 02                  SHL EAX,0x2
00638520  C1 E8 02                  SHR EAX,0x2
00638523  83 C0 03                  ADD EAX,0x3
00638526  24 FC                     AND AL,0xfc
00638528  E8 13 55 0F 00            CALL 0x0072da40
0063852D  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00638530  8B C4                     MOV EAX,ESP
00638532  8B C8                     MOV ECX,EAX
00638534  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0063853A  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
00638540  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00638547  C7 85 64 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff64],0x0
00638551  8B C6                     MOV EAX,ESI
00638553  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00638556  3B F3                     CMP ESI,EBX
00638558  0F 8D A5 01 00 00         JGE 0x00638703
LAB_0063855e:
0063855E  89 BD 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDI
00638564  3B 7D 88                  CMP EDI,dword ptr [EBP + -0x78]
00638567  0F 8D 8A 01 00 00         JGE 0x006386f7
LAB_0063856d:
0063856D  8B 5D 8C                  MOV EBX,dword ptr [EBP + -0x74]
00638570  3B 9D 74 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff74]
00638576  0F 8D 65 01 00 00         JGE 0x006386e1
0063857C  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00638582  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
00638585  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
LAB_0063858b:
0063858B  66 85 FF                  TEST DI,DI
0063858E  7C 50                     JL 0x006385e0
00638590  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
00638597  66 3B F9                  CMP DI,CX
0063859A  7D 44                     JGE 0x006385e0
0063859C  66 85 C0                  TEST AX,AX
0063859F  7C 3F                     JL 0x006385e0
006385A1  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
006385A8  7D 36                     JGE 0x006385e0
006385AA  66 85 DB                  TEST BX,BX
006385AD  7C 31                     JL 0x006385e0
006385AF  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
006385B6  7D 28                     JGE 0x006385e0
006385B8  0F BF D0                  MOVSX EDX,AX
006385BB  0F BF C9                  MOVSX ECX,CX
006385BE  0F AF D1                  IMUL EDX,ECX
006385C1  0F BF CB                  MOVSX ECX,BX
006385C4  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
006385CB  0F AF CE                  IMUL ECX,ESI
006385CE  03 D1                     ADD EDX,ECX
006385D0  0F BF CF                  MOVSX ECX,DI
006385D3  03 D1                     ADD EDX,ECX
006385D5  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
006385DB  8B 34 D1                  MOV ESI,dword ptr [ECX + EDX*0x8]
006385DE  EB 02                     JMP 0x006385e2
LAB_006385e0:
006385E0  33 F6                     XOR ESI,ESI
LAB_006385e2:
006385E2  85 F6                     TEST ESI,ESI
006385E4  0F 84 E4 00 00 00         JZ 0x006386ce
006385EA  8B 16                     MOV EDX,dword ptr [ESI]
006385EC  8B CE                     MOV ECX,ESI
006385EE  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
006385F4  85 C0                     TEST EAX,EAX
006385F6  0F 84 CF 00 00 00         JZ 0x006386cb
006385FC  33 FF                     XOR EDI,EDI
006385FE  81 7E 20 E8 03 00 00      CMP dword ptr [ESI + 0x20],0x3e8
00638605  75 5B                     JNZ 0x00638662
00638607  8B 06                     MOV EAX,dword ptr [ESI]
00638609  8B CE                     MOV ECX,ESI
0063860B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0063860E  83 3C 85 68 1D 79 00 01   CMP dword ptr [EAX*0x4 + 0x791d68],0x1
00638616  75 4A                     JNZ 0x00638662
00638618  33 C9                     XOR ECX,ECX
0063861A  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00638620  85 C0                     TEST EAX,EAX
00638622  7E 20                     JLE 0x00638644
00638624  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00638627  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
LAB_0063862d:
0063862D  39 10                     CMP dword ptr [EAX],EDX
0063862F  74 0E                     JZ 0x0063863f
00638631  41                        INC ECX
00638632  83 C0 04                  ADD EAX,0x4
00638635  3B 8D 64 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff64]
0063863B  7C F0                     JL 0x0063862d
0063863D  EB 05                     JMP 0x00638644
LAB_0063863f:
0063863F  BF 01 00 00 00            MOV EDI,0x1
LAB_00638644:
00638644  85 FF                     TEST EDI,EDI
00638646  75 7D                     JNZ 0x006386c5
00638648  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0063864B  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
00638651  89 08                     MOV dword ptr [EAX],ECX
00638653  FF 85 64 FF FF FF         INC dword ptr [EBP + 0xffffff64]
00638659  83 C0 04                  ADD EAX,0x4
0063865C  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
LAB_00638662:
00638662  85 FF                     TEST EDI,EDI
00638664  75 5F                     JNZ 0x006386c5
00638666  B9 08 00 00 00            MOV ECX,0x8
0063866B  33 C0                     XOR EAX,EAX
0063866D  8D 7D 90                  LEA EDI,[EBP + -0x70]
00638670  F3 AB                     STOSD.REP ES:EDI
00638672  B9 07 00 00 00            MOV ECX,0x7
00638677  8D 7D BC                  LEA EDI,[EBP + -0x44]
0063867A  F3 AB                     STOSD.REP ES:EDI
0063867C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0063867F  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00638682  C7 45 9C 04 00 00 00      MOV dword ptr [EBP + -0x64],0x4
00638689  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0063868C  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0063868F  66 8B 4D 1C               MOV CX,word ptr [EBP + 0x1c]
00638693  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
00638697  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
0063869B  66 89 55 CA               MOV word ptr [EBP + -0x36],DX
0063869F  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006386A2  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006386A5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006386A8  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006386AB  C7 45 A0 10 01 00 00      MOV dword ptr [EBP + -0x60],0x110
006386B2  8D 55 BC                  LEA EDX,[EBP + -0x44]
006386B5  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
006386B8  8B 06                     MOV EAX,dword ptr [ESI]
006386BA  8D 4D 90                  LEA ECX,[EBP + -0x70]
006386BD  51                        PUSH ECX
006386BE  8B CE                     MOV ECX,ESI
006386C0  FF 10                     CALL dword ptr [EAX]
006386C2  FF 45 84                  INC dword ptr [EBP + -0x7c]
LAB_006386c5:
006386C5  8B BD 68 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff68]
LAB_006386cb:
006386CB  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
LAB_006386ce:
006386CE  43                        INC EBX
006386CF  3B 9D 74 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff74]
006386D5  0F 8C B0 FE FF FF         JL 0x0063858b
006386DB  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
LAB_006386e1:
006386E1  47                        INC EDI
006386E2  89 BD 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDI
006386E8  3B 7D 88                  CMP EDI,dword ptr [EBP + -0x78]
006386EB  0F 8C 7C FE FF FF         JL 0x0063856d
006386F1  8B 5D 80                  MOV EBX,dword ptr [EBP + -0x80]
006386F4  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_006386f7:
006386F7  40                        INC EAX
006386F8  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006386FB  3B C3                     CMP EAX,EBX
006386FD  0F 8C 5B FE FF FF         JL 0x0063855e
LAB_00638703:
00638703  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00638706  EB 2D                     JMP 0x00638735
LAB_00638735:
00638735  8D A5 50 FF FF FF         LEA ESP,[EBP + 0xffffff50]
0063873B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0063873E  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00638745  5F                        POP EDI
00638746  5E                        POP ESI
00638747  5B                        POP EBX
00638748  8B E5                     MOV ESP,EBP
0063874A  5D                        POP EBP
0063874B  C3                        RET
