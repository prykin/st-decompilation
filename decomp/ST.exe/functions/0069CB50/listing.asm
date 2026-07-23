CGenerate::sub_0069CB50:
0069CB50  55                        PUSH EBP
0069CB51  8B EC                     MOV EBP,ESP
0069CB53  6A FF                     PUSH -0x1
0069CB55  68 18 D8 79 00            PUSH 0x79d818
0069CB5A  68 64 D9 72 00            PUSH 0x72d964
0069CB5F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0069CB65  50                        PUSH EAX
0069CB66  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0069CB6D  81 EC 78 01 00 00         SUB ESP,0x178
0069CB73  53                        PUSH EBX
0069CB74  56                        PUSH ESI
0069CB75  57                        PUSH EDI
0069CB76  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069CB79  8B F9                     MOV EDI,ECX
0069CB7B  89 BD 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EDI
0069CB81  33 DB                     XOR EBX,EBX
0069CB83  89 9D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EBX
0069CB89  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
0069CB8C  E8 53 5B D6 FF            CALL 0x004026e4
0069CB91  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069CB94  8B 08                     MOV ECX,dword ptr [EAX]
0069CB96  D1 E1                     SHL ECX,0x1
0069CB98  89 8F 33 58 00 00         MOV dword ptr [EDI + 0x5833],ECX
0069CB9E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0069CBA1  D1 E2                     SHL EDX,0x1
0069CBA3  89 97 37 58 00 00         MOV dword ptr [EDI + 0x5837],EDX
0069CBA9  8B C1                     MOV EAX,ECX
0069CBAB  50                        PUSH EAX
0069CBAC  8B CF                     MOV ECX,EDI
0069CBAE  E8 98 8A D6 FF            CALL 0x0040564b
0069CBB3  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069CBB6  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
0069CBB9  0F AF 30                  IMUL ESI,dword ptr [EAX]
0069CBBC  C1 E6 02                  SHL ESI,0x2
0069CBBF  89 B5 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],ESI
0069CBC5  8D 0C F5 00 00 00 00      LEA ECX,[ESI*0x8 + 0x0]
0069CBCC  2B CE                     SUB ECX,ESI
0069CBCE  D1 E1                     SHL ECX,0x1
0069CBD0  51                        PUSH ECX
0069CBD1  E8 9A E0 00 00            CALL 0x006aac70
0069CBD6  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
0069CBD9  56                        PUSH ESI
0069CBDA  E8 91 E0 00 00            CALL 0x006aac70
0069CBDF  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
0069CBE5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0069CBE8  C1 E6 02                  SHL ESI,0x2
0069CBEB  8B C6                     MOV EAX,ESI
0069CBED  83 C0 03                  ADD EAX,0x3
0069CBF0  24 FC                     AND AL,0xfc
0069CBF2  E8 49 0E 09 00            CALL 0x0072da40
0069CBF7  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069CBFA  8B C4                     MOV EAX,ESP
0069CBFC  89 85 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EAX
0069CC02  8B C6                     MOV EAX,ESI
0069CC04  83 C0 03                  ADD EAX,0x3
0069CC07  24 FC                     AND AL,0xfc
0069CC09  E8 32 0E 09 00            CALL 0x0072da40
0069CC0E  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069CC11  8B C4                     MOV EAX,ESP
0069CC13  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0069CC16  8B C6                     MOV EAX,ESI
0069CC18  83 C0 03                  ADD EAX,0x3
0069CC1B  24 FC                     AND AL,0xfc
0069CC1D  E8 1E 0E 09 00            CALL 0x0072da40
0069CC22  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069CC25  8B C4                     MOV EAX,ESP
0069CC27  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0069CC2A  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0069CC31  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069CC34  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0069CC37  D1 E2                     SHL EDX,0x1
0069CC39  52                        PUSH EDX
0069CC3A  8B 00                     MOV EAX,dword ptr [EAX]
0069CC3C  D1 E0                     SHL EAX,0x1
0069CC3E  50                        PUSH EAX
0069CC3F  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069CC42  51                        PUSH ECX
0069CC43  8B CF                     MOV ECX,EDI
0069CC45  E8 22 69 D6 FF            CALL 0x0040356c
0069CC4A  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069CC4D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0069CC50  D1 E2                     SHL EDX,0x1
0069CC52  52                        PUSH EDX
0069CC53  8B 00                     MOV EAX,dword ptr [EAX]
0069CC55  D1 E0                     SHL EAX,0x1
0069CC57  50                        PUSH EAX
0069CC58  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069CC5B  51                        PUSH ECX
0069CC5C  8B CF                     MOV ECX,EDI
0069CC5E  E8 1F 80 D6 FF            CALL 0x00404c82
0069CC63  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
0069CC69  3B C3                     CMP EAX,EBX
0069CC6B  0F 84 61 12 00 00         JZ 0x0069ded2
0069CC71  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0069CC74  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
0069CC7A  3B C3                     CMP EAX,EBX
0069CC7C  0F 8E 6F 12 00 00         JLE 0x0069def1
0069CC82  89 9D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EBX
0069CC88  33 D2                     XOR EDX,EDX
0069CC8A  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
0069CC90  33 C9                     XOR ECX,ECX
0069CC92  85 C0                     TEST EAX,EAX
0069CC94  8B BD CC FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffecc]
0069CC9A  7E 50                     JLE 0x0069ccec
LAB_0069cc9c:
0069CC9C  3B 4F 0C                  CMP ECX,dword ptr [EDI + 0xc]
0069CC9F  73 0B                     JNC 0x0069ccac
0069CCA1  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069CCA4  0F AF C1                  IMUL EAX,ECX
0069CCA7  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
0069CCAA  EB 02                     JMP 0x0069ccae
LAB_0069ccac:
0069CCAC  33 C0                     XOR EAX,EAX
LAB_0069ccae:
0069CCAE  85 C0                     TEST EAX,EAX
0069CCB0  74 31                     JZ 0x0069cce3
0069CCB2  83 38 00                  CMP dword ptr [EAX],0x0
0069CCB5  75 2C                     JNZ 0x0069cce3
0069CCB7  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
0069CCBA  85 F6                     TEST ESI,ESI
0069CCBC  7E 25                     JLE 0x0069cce3
0069CCBE  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0069CCC1  89 0C 9A                  MOV dword ptr [EDX + EBX*0x4],ECX
0069CCC4  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0069CCC7  8B 75 94                  MOV ESI,dword ptr [EBP + -0x6c]
0069CCCA  89 14 9E                  MOV dword ptr [ESI + EBX*0x4],EDX
0069CCCD  43                        INC EBX
0069CCCE  89 9D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EBX
0069CCD4  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
0069CCDA  03 50 04                  ADD EDX,dword ptr [EAX + 0x4]
0069CCDD  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
LAB_0069cce3:
0069CCE3  41                        INC ECX
0069CCE4  3B 8D C8 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffec8]
0069CCEA  7C B0                     JL 0x0069cc9c
LAB_0069ccec:
0069CCEC  85 DB                     TEST EBX,EBX
0069CCEE  0F 8E 65 02 00 00         JLE 0x0069cf59
0069CCF4  85 D2                     TEST EDX,EDX
0069CCF6  0F 8E 5D 02 00 00         JLE 0x0069cf59
0069CCFC  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
0069CD02  8B 80 33 58 00 00         MOV EAX,dword ptr [EAX + 0x5833]
0069CD08  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069CD0F  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
0069CD15  C7 45 98 00 00 00 00      MOV dword ptr [EBP + -0x68],0x0
0069CD1C  99                        CDQ
0069CD1D  83 E2 03                  AND EDX,0x3
0069CD20  03 C2                     ADD EAX,EDX
0069CD22  C1 F8 02                  SAR EAX,0x2
0069CD25  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
0069CD28  85 C9                     TEST ECX,ECX
0069CD2A  0F 8E 29 02 00 00         JLE 0x0069cf59
LAB_0069cd30:
0069CD30  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0069CD33  39 4D 98                  CMP dword ptr [EBP + -0x68],ECX
0069CD36  0F 8D 1D 02 00 00         JGE 0x0069cf59
0069CD3C  E8 7F 19 09 00            CALL 0x0072e6c0
0069CD41  99                        CDQ
0069CD42  F7 BD 58 FF FF FF         IDIV dword ptr [EBP + 0xffffff58]
0069CD48  33 C0                     XOR EAX,EAX
0069CD4A  33 C9                     XOR ECX,ECX
0069CD4C  85 DB                     TEST EBX,EBX
0069CD4E  7E 13                     JLE 0x0069cd63
LAB_0069cd50:
0069CD50  8B 75 94                  MOV ESI,dword ptr [EBP + -0x6c]
0069CD53  03 04 8E                  ADD EAX,dword ptr [ESI + ECX*0x4]
0069CD56  3B D0                     CMP EDX,EAX
0069CD58  7C 07                     JL 0x0069cd61
0069CD5A  41                        INC ECX
0069CD5B  3B CB                     CMP ECX,EBX
0069CD5D  7C F1                     JL 0x0069cd50
0069CD5F  EB 02                     JMP 0x0069cd63
LAB_0069cd61:
0069CD61  8B D1                     MOV EDX,ECX
LAB_0069cd63:
0069CD63  3B CB                     CMP ECX,EBX
0069CD65  7C 03                     JL 0x0069cd6a
0069CD67  8D 53 FF                  LEA EDX,[EBX + -0x1]
LAB_0069cd6a:
0069CD6A  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0069CD6D  8B 14 90                  MOV EDX,dword ptr [EAX + EDX*0x4]
0069CD70  3B 57 0C                  CMP EDX,dword ptr [EDI + 0xc]
0069CD73  73 0B                     JNC 0x0069cd80
0069CD75  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
0069CD78  0F AF F2                  IMUL ESI,EDX
0069CD7B  03 77 1C                  ADD ESI,dword ptr [EDI + 0x1c]
0069CD7E  EB 02                     JMP 0x0069cd82
LAB_0069cd80:
0069CD80  33 F6                     XOR ESI,ESI
LAB_0069cd82:
0069CD82  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0069CD85  85 F6                     TEST ESI,ESI
0069CD87  75 0B                     JNZ 0x0069cd94
0069CD89  FF 85 C4 FE FF FF         INC dword ptr [EBP + 0xfffffec4]
0069CD8F  E9 B7 01 00 00            JMP 0x0069cf4b
LAB_0069cd94:
0069CD94  C7 85 20 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff20],0x0
LAB_0069cd9e:
0069CD9E  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0069CDA1  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
0069CDA4  E8 17 19 09 00            CALL 0x0072e6c0
0069CDA9  99                        CDQ
0069CDAA  F7 FF                     IDIV EDI
0069CDAC  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0069CDAF  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0069CDB2  73 0B                     JNC 0x0069cdbf
0069CDB4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0069CDB7  0F AF C2                  IMUL EAX,EDX
0069CDBA  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0069CDBD  EB 02                     JMP 0x0069cdc1
LAB_0069cdbf:
0069CDBF  33 C0                     XOR EAX,EAX
LAB_0069cdc1:
0069CDC1  8B 00                     MOV EAX,dword ptr [EAX]
0069CDC3  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
0069CDC9  85 C0                     TEST EAX,EAX
0069CDCB  0F 8C BD 00 00 00         JL 0x0069ce8e
0069CDD1  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
0069CDD8  2B D0                     SUB EDX,EAX
0069CDDA  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0069CDDD  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0069CDE0  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
0069CDE3  85 C9                     TEST ECX,ECX
0069CDE5  0F 8D A3 00 00 00         JGE 0x0069ce8e
0069CDEB  F6 40 01 04               TEST byte ptr [EAX + 0x1],0x4
0069CDEF  0F 84 99 00 00 00         JZ 0x0069ce8e
0069CDF5  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
0069CDFB  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0069CDFE  8B 0A                     MOV ECX,dword ptr [EDX]
0069CE00  D1 E1                     SHL ECX,0x1
0069CE02  8B B5 28 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff28]
0069CE08  8B C6                     MOV EAX,ESI
0069CE0A  99                        CDQ
0069CE0B  F7 F9                     IDIV ECX
0069CE0D  8B F8                     MOV EDI,EAX
0069CE0F  8B C6                     MOV EAX,ESI
0069CE11  99                        CDQ
0069CE12  F7 F9                     IDIV ECX
0069CE14  8B DA                     MOV EBX,EDX
0069CE16  C7 85 40 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff40],0x1
0069CE20  33 F6                     XOR ESI,ESI
0069CE22  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0069CE25  85 C0                     TEST EAX,EAX
0069CE27  7E 52                     JLE 0x0069ce7b
LAB_0069ce29:
0069CE29  57                        PUSH EDI
0069CE2A  53                        PUSH EBX
0069CE2B  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0069CE31  0F BF 4C B0 02            MOVSX ECX,word ptr [EAX + ESI*0x4 + 0x2]
0069CE36  51                        PUSH ECX
0069CE37  0F BF 14 B0               MOVSX EDX,word ptr [EAX + ESI*0x4]
0069CE3B  52                        PUSH EDX
0069CE3C  E8 4F 01 01 00            CALL 0x006acf90
0069CE41  83 F8 02                  CMP EAX,0x2
0069CE44  7C 2B                     JL 0x0069ce71
0069CE46  8D 47 01                  LEA EAX,[EDI + 0x1]
0069CE49  50                        PUSH EAX
0069CE4A  8D 4B 01                  LEA ECX,[EBX + 0x1]
0069CE4D  51                        PUSH ECX
0069CE4E  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0069CE54  0F BF 54 B0 02            MOVSX EDX,word ptr [EAX + ESI*0x4 + 0x2]
0069CE59  52                        PUSH EDX
0069CE5A  0F BF 04 B0               MOVSX EAX,word ptr [EAX + ESI*0x4]
0069CE5E  50                        PUSH EAX
0069CE5F  E8 2C 01 01 00            CALL 0x006acf90
0069CE64  83 F8 02                  CMP EAX,0x2
0069CE67  7C 08                     JL 0x0069ce71
0069CE69  46                        INC ESI
0069CE6A  3B 75 C4                  CMP ESI,dword ptr [EBP + -0x3c]
0069CE6D  7C BA                     JL 0x0069ce29
0069CE6F  EB 0A                     JMP 0x0069ce7b
LAB_0069ce71:
0069CE71  C7 85 40 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff40],0x0
LAB_0069ce7b:
0069CE7B  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
0069CE81  85 C0                     TEST EAX,EAX
0069CE83  75 24                     JNZ 0x0069cea9
0069CE85  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
0069CE88  8B 9D C0 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffec0]
LAB_0069ce8e:
0069CE8E  8B 85 20 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff20]
0069CE94  40                        INC EAX
0069CE95  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
0069CE9B  83 F8 0A                  CMP EAX,0xa
0069CE9E  0F 8C FA FE FF FF         JL 0x0069cd9e
0069CEA4  E9 96 00 00 00            JMP 0x0069cf3f
LAB_0069cea9:
0069CEA9  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0069CEAF  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
0069CEB2  66 89 1C B0               MOV word ptr [EAX + ESI*0x4],BX
0069CEB6  66 89 7C B0 02            MOV word ptr [EAX + ESI*0x4 + 0x2],DI
0069CEBB  FF 45 98                  INC dword ptr [EBP + -0x68]
0069CEBE  E8 FD 17 09 00            CALL 0x0072e6c0
0069CEC3  33 D2                     XOR EDX,EDX
0069CEC5  F7 35 34 91 7D 00         DIV dword ptr [0x007d9134]
0069CECB  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0069CECE  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0069CED1  C1 E7 02                  SHL EDI,0x2
0069CED4  8D 1C 9B                  LEA EBX,[EBX + EBX*0x4]
0069CED7  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0069CEDA  C1 E0 02                  SHL EAX,0x2
0069CEDD  89 85 7C FE FF FF         MOV dword ptr [EBP + 0xfffffe7c],EAX
0069CEE3  52                        PUSH EDX
0069CEE4  68 EE 03 00 00            PUSH 0x3ee
0069CEE9  6A 00                     PUSH 0x0
0069CEEB  57                        PUSH EDI
0069CEEC  50                        PUSH EAX
0069CEED  8B 9D 80 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffe80]
0069CEF3  8B CB                     MOV ECX,EBX
0069CEF5  E8 5C 59 D6 FF            CALL 0x00402856
0069CEFA  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
0069CF00  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069CF07  2B C8                     SUB ECX,EAX
0069CF09  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069CF0C  C7 44 4A 06 EE 03 00 00   MOV dword ptr [EDX + ECX*0x2 + 0x6],0x3ee
0069CF14  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069CF17  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0069CF1A  D1 E1                     SHL ECX,0x1
0069CF1C  51                        PUSH ECX
0069CF1D  8B 10                     MOV EDX,dword ptr [EAX]
0069CF1F  D1 E2                     SHL EDX,0x1
0069CF21  52                        PUSH EDX
0069CF22  57                        PUSH EDI
0069CF23  8B 85 7C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe7c]
0069CF29  50                        PUSH EAX
0069CF2A  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069CF2D  51                        PUSH ECX
0069CF2E  8B CB                     MOV ECX,EBX
0069CF30  E8 64 8E D6 FF            CALL 0x00405d99
0069CF35  46                        INC ESI
0069CF36  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
0069CF39  8B 9D C0 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffec0]
LAB_0069cf3f:
0069CF3F  FF 8D C4 FE FF FF         DEC dword ptr [EBP + 0xfffffec4]
0069CF45  8B BD CC FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffecc]
LAB_0069cf4b:
0069CF4B  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
0069CF51  85 C0                     TEST EAX,EAX
0069CF53  0F 8F D7 FD FF FF         JG 0x0069cd30
LAB_0069cf59:
0069CF59  33 C9                     XOR ECX,ECX
0069CF5B  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
0069CF61  33 F6                     XOR ESI,ESI
0069CF63  89 B5 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ESI
0069CF69  33 D2                     XOR EDX,EDX
0069CF6B  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
0069CF71  85 C0                     TEST EAX,EAX
0069CF73  7E 52                     JLE 0x0069cfc7
LAB_0069cf75:
0069CF75  3B 57 0C                  CMP EDX,dword ptr [EDI + 0xc]
0069CF78  73 0B                     JNC 0x0069cf85
0069CF7A  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069CF7D  0F AF C2                  IMUL EAX,EDX
0069CF80  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
0069CF83  EB 02                     JMP 0x0069cf87
LAB_0069cf85:
0069CF85  33 C0                     XOR EAX,EAX
LAB_0069cf87:
0069CF87  85 C0                     TEST EAX,EAX
0069CF89  74 33                     JZ 0x0069cfbe
0069CF8B  81 38 FF 00 00 00         CMP dword ptr [EAX],0xff
0069CF91  75 2B                     JNZ 0x0069cfbe
0069CF93  8B 7D 90                  MOV EDI,dword ptr [EBP + -0x70]
0069CF96  89 14 8F                  MOV dword ptr [EDI + ECX*0x4],EDX
0069CF99  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0069CF9C  8B 7F 0C                  MOV EDI,dword ptr [EDI + 0xc]
0069CF9F  8B 5D 94                  MOV EBX,dword ptr [EBP + -0x6c]
0069CFA2  89 3C 8B                  MOV dword ptr [EBX + ECX*0x4],EDI
0069CFA5  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0069CFA8  03 70 0C                  ADD ESI,dword ptr [EAX + 0xc]
0069CFAB  89 B5 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ESI
0069CFB1  41                        INC ECX
0069CFB2  89 8D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ECX
0069CFB8  8B BD CC FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffecc]
LAB_0069cfbe:
0069CFBE  42                        INC EDX
0069CFBF  3B 95 C8 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffec8]
0069CFC5  7C AE                     JL 0x0069cf75
LAB_0069cfc7:
0069CFC7  85 C9                     TEST ECX,ECX
0069CFC9  0F 8E DB 0A 00 00         JLE 0x0069daaa
0069CFCF  85 F6                     TEST ESI,ESI
0069CFD1  0F 8E D3 0A 00 00         JLE 0x0069daaa
0069CFD7  8B C1                     MOV EAX,ECX
0069CFD9  99                        CDQ
0069CFDA  2B C2                     SUB EAX,EDX
0069CFDC  8B F0                     MOV ESI,EAX
0069CFDE  D1 FE                     SAR ESI,0x1
0069CFE0  46                        INC ESI
0069CFE1  89 B5 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ESI
0069CFE7  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0069CFEA  99                        CDQ
0069CFEB  2B C2                     SUB EAX,EDX
0069CFED  D1 F8                     SAR EAX,0x1
0069CFEF  40                        INC EAX
0069CFF0  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
0069CFF6  C7 85 88 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffe88],0x0
0069D000  85 F6                     TEST ESI,ESI
0069D002  0F 8E A2 0A 00 00         JLE 0x0069daaa
0069D008  EB 06                     JMP 0x0069d010
LAB_0069d00a:
0069D00A  8B 85 D0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffed0]
LAB_0069d010:
0069D010  39 85 88 FE FF FF         CMP dword ptr [EBP + 0xfffffe88],EAX
0069D016  0F 8D 8E 0A 00 00         JGE 0x0069daaa
0069D01C  33 F6                     XOR ESI,ESI
0069D01E  89 B5 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ESI
0069D024  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0069D027  E8 94 16 09 00            CALL 0x0072e6c0
0069D02C  99                        CDQ
0069D02D  F7 BD 58 FF FF FF         IDIV dword ptr [EBP + 0xffffff58]
0069D033  89 95 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EDX
0069D039  33 C0                     XOR EAX,EAX
0069D03B  33 C9                     XOR ECX,ECX
0069D03D  8B BD C0 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffec0]
0069D043  3B FE                     CMP EDI,ESI
0069D045  7E 19                     JLE 0x0069d060
LAB_0069d047:
0069D047  8B 5D 94                  MOV EBX,dword ptr [EBP + -0x6c]
0069D04A  03 04 8B                  ADD EAX,dword ptr [EBX + ECX*0x4]
0069D04D  3B D0                     CMP EDX,EAX
0069D04F  7C 07                     JL 0x0069d058
0069D051  41                        INC ECX
0069D052  3B CF                     CMP ECX,EDI
0069D054  7C F1                     JL 0x0069d047
0069D056  EB 08                     JMP 0x0069d060
LAB_0069d058:
0069D058  8B D1                     MOV EDX,ECX
0069D05A  89 95 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EDX
LAB_0069d060:
0069D060  3B CF                     CMP ECX,EDI
0069D062  7C 09                     JL 0x0069d06d
0069D064  8D 57 FF                  LEA EDX,[EDI + -0x1]
0069D067  89 95 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EDX
LAB_0069d06d:
0069D06D  89 95 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EDX
0069D073  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0069D076  8B 04 91                  MOV EAX,dword ptr [ECX + EDX*0x4]
0069D079  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
0069D07F  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
0069D082  73 0E                     JNC 0x0069d092
0069D084  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0069D087  0F AF D0                  IMUL EDX,EAX
0069D08A  03 51 1C                  ADD EDX,dword ptr [ECX + 0x1c]
0069D08D  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0069D090  EB 05                     JMP 0x0069d097
LAB_0069d092:
0069D092  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0069D095  8B D6                     MOV EDX,ESI
LAB_0069d097:
0069D097  3B D6                     CMP EDX,ESI
0069D099  75 0B                     JNZ 0x0069d0a6
0069D09B  FF 85 C4 FE FF FF         INC dword ptr [EBP + 0xfffffec4]
0069D0A1  E9 F8 09 00 00            JMP 0x0069da9e
LAB_0069d0a6:
0069D0A6  89 B5 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],ESI
0069D0AC  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
0069D0B2  33 C0                     XOR EAX,EAX
0069D0B4  8B BD 44 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff44]
0069D0BA  8B D9                     MOV EBX,ECX
0069D0BC  C1 E9 02                  SHR ECX,0x2
0069D0BF  F3 AB                     STOSD.REP ES:EDI
0069D0C1  8B CB                     MOV ECX,EBX
0069D0C3  83 E1 03                  AND ECX,0x3
0069D0C6  F3 AA                     STOSB.REP ES:EDI
0069D0C8  33 DB                     XOR EBX,EBX
0069D0CA  89 9D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EBX
0069D0D0  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0069D0D3  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0069D0D6  85 C0                     TEST EAX,EAX
0069D0D8  0F 8E C7 00 00 00         JLE 0x0069d1a5
0069D0DE  8B BD 80 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffe80]
0069D0E4  3B D8                     CMP EBX,EAX
LAB_0069d0e6:
0069D0E6  73 0B                     JNC 0x0069d0f3
0069D0E8  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0069D0EB  0F AF C3                  IMUL EAX,EBX
0069D0EE  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0069D0F1  EB 02                     JMP 0x0069d0f5
LAB_0069d0f3:
0069D0F3  33 C0                     XOR EAX,EAX
LAB_0069d0f5:
0069D0F5  8B 00                     MOV EAX,dword ptr [EAX]
0069D0F7  6A 00                     PUSH 0x0
0069D0F9  8D 55 9C                  LEA EDX,[EBP + -0x64]
0069D0FC  52                        PUSH EDX
0069D0FD  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0069D100  8B 11                     MOV EDX,dword ptr [ECX]
0069D102  D1 E2                     SHL EDX,0x1
0069D104  52                        PUSH EDX
0069D105  50                        PUSH EAX
0069D106  8B CF                     MOV ECX,EDI
0069D108  E8 74 8B D6 FF            CALL 0x00405c81
0069D10D  89 85 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],EAX
0069D113  33 C9                     XOR ECX,ECX
0069D115  85 C0                     TEST EAX,EAX
0069D117  7E 74                     JLE 0x0069d18d
LAB_0069d119:
0069D119  8B 44 8D 9C               MOV EAX,dword ptr [EBP + ECX*0x4 + -0x64]
0069D11D  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
0069D124  2B D0                     SUB EDX,EAX
0069D126  8B 5D 8C                  MOV EBX,dword ptr [EBP + -0x74]
0069D129  83 7C 53 02 00            CMP dword ptr [EBX + EDX*0x2 + 0x2],0x0
0069D12E  75 4E                     JNZ 0x0069d17e
0069D130  8B 95 44 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff44]
0069D136  80 3C 16 00               CMP byte ptr [ESI + EDX*0x1],0x0
0069D13A  75 42                     JNZ 0x0069d17e
0069D13C  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0069D13F  8B 1A                     MOV EBX,dword ptr [EDX]
0069D141  D1 E3                     SHL EBX,0x1
0069D143  99                        CDQ
0069D144  F7 FB                     IDIV EBX
0069D146  8B 95 98 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe98]
0069D14C  66 89 44 B2 02            MOV word ptr [EDX + ESI*0x4 + 0x2],AX
0069D151  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069D154  8B 18                     MOV EBX,dword ptr [EAX]
0069D156  D1 E3                     SHL EBX,0x1
0069D158  8B 44 8D 9C               MOV EAX,dword ptr [EBP + ECX*0x4 + -0x64]
0069D15C  99                        CDQ
0069D15D  F7 FB                     IDIV EBX
0069D15F  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0069D165  66 89 14 B0               MOV word ptr [EAX + ESI*0x4],DX
0069D169  8B 54 8D 9C               MOV EDX,dword ptr [EBP + ECX*0x4 + -0x64]
0069D16D  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0069D173  C6 04 02 01               MOV byte ptr [EDX + EAX*0x1],0x1
0069D177  46                        INC ESI
0069D178  89 B5 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],ESI
LAB_0069d17e:
0069D17E  41                        INC ECX
0069D17F  3B 8D 84 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffe84]
0069D185  7C 92                     JL 0x0069d119
0069D187  8B 9D 20 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff20]
LAB_0069d18d:
0069D18D  43                        INC EBX
0069D18E  89 9D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EBX
0069D194  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0069D197  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0069D19A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0069D19D  3B D8                     CMP EBX,EAX
0069D19F  0F 8C 41 FF FF FF         JL 0x0069d0e6
LAB_0069d1a5:
0069D1A5  8D 14 F5 00 00 00 00      LEA EDX,[ESI*0x8 + 0x0]
0069D1AC  52                        PUSH EDX
0069D1AD  E8 BE DA 00 00            CALL 0x006aac70
0069D1B2  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
0069D1B8  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
0069D1BF  50                        PUSH EAX
0069D1C0  E8 AB DA 00 00            CALL 0x006aac70
0069D1C5  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0069D1C8  33 FF                     XOR EDI,EDI
0069D1CA  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
0069D1CD  83 C8 FF                  OR EAX,0xffffffff
0069D1D0  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
0069D1D6  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0069D1D9  89 BD 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDI
0069D1DF  89 BD 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EDI
0069D1E5  33 C0                     XOR EAX,EAX
0069D1E7  89 85 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EAX
0069D1ED  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
0069D1F3  3B F0                     CMP ESI,EAX
0069D1F5  0F 8E 2B 04 00 00         JLE 0x0069d626
0069D1FB  EB 06                     JMP 0x0069d203
LAB_0069d1fd:
0069D1FD  8B BD 8C FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffe8c]
LAB_0069d203:
0069D203  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0069D206  85 C0                     TEST EAX,EAX
0069D208  7D 26                     JGE 0x0069d230
0069D20A  8B 8D 98 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe98]
0069D210  0F BF 54 B9 02            MOVSX EDX,word ptr [ECX + EDI*0x4 + 0x2]
0069D215  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
0069D21B  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0069D21E  0F AF 10                  IMUL EDX,dword ptr [EAX]
0069D221  0F BF 04 B9               MOVSX EAX,word ptr [ECX + EDI*0x4]
0069D225  8D 1C 50                  LEA EBX,[EAX + EDX*0x2]
0069D228  89 9D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EBX
0069D22E  EB 0F                     JMP 0x0069d23f
LAB_0069d230:
0069D230  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0069D233  89 9D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EBX
0069D239  8B 8D 98 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe98]
LAB_0069d23f:
0069D23F  8B 95 44 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff44]
0069D245  80 3C 13 01               CMP byte ptr [EBX + EDX*0x1],0x1
0069D249  76 58                     JBE 0x0069d2a3
0069D24B  8B C7                     MOV EAX,EDI
0069D24D  C7 85 B0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb0],0x0
0069D257  8B 95 A0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea0]
0069D25D  85 D2                     TEST EDX,EDX
0069D25F  7E 42                     JLE 0x0069d2a3
LAB_0069d261:
0069D261  40                        INC EAX
0069D262  3B C2                     CMP EAX,EDX
0069D264  7C 02                     JL 0x0069d268
0069D266  33 C0                     XOR EAX,EAX
LAB_0069d268:
0069D268  0F BF 74 81 02            MOVSX ESI,word ptr [ECX + EAX*0x4 + 0x2]
0069D26D  8B 9D 80 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffe80]
0069D273  8B 5B 08                  MOV EBX,dword ptr [EBX + 0x8]
0069D276  0F AF 33                  IMUL ESI,dword ptr [EBX]
0069D279  0F BF 1C 81               MOVSX EBX,word ptr [ECX + EAX*0x4]
0069D27D  8D 1C 73                  LEA EBX,[EBX + ESI*0x2]
0069D280  89 9D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EBX
0069D286  8B B5 44 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff44]
0069D28C  80 3C 33 02               CMP byte ptr [EBX + ESI*0x1],0x2
0069D290  72 11                     JC 0x0069d2a3
0069D292  8B B5 B0 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffeb0]
0069D298  46                        INC ESI
0069D299  89 B5 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],ESI
0069D29F  3B F2                     CMP ESI,EDX
0069D2A1  7C BE                     JL 0x0069d261
LAB_0069d2a3:
0069D2A3  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0069D2A9  80 3C 03 01               CMP byte ptr [EBX + EAX*0x1],0x1
0069D2AD  0F 87 73 03 00 00         JA 0x0069d626
0069D2B3  8D 8D 90 FE FF FF         LEA ECX,[EBP + 0xfffffe90]
0069D2B9  51                        PUSH ECX
0069D2BA  8D 55 9C                  LEA EDX,[EBP + -0x64]
0069D2BD  52                        PUSH EDX
0069D2BE  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
0069D2C4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0069D2C7  8B 10                     MOV EDX,dword ptr [EAX]
0069D2C9  D1 E2                     SHL EDX,0x1
0069D2CB  52                        PUSH EDX
0069D2CC  53                        PUSH EBX
0069D2CD  E8 AF 89 D6 FF            CALL 0x00405c81
0069D2D2  89 85 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],EAX
0069D2D8  33 D2                     XOR EDX,EDX
0069D2DA  89 95 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EDX
0069D2E0  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0069D2E3  83 BD 90 FE FF FF 08      CMP dword ptr [EBP + 0xfffffe90],0x8
0069D2EA  0F 85 67 02 00 00         JNZ 0x0069d557
0069D2F0  33 F6                     XOR ESI,ESI
0069D2F2  83 C9 FF                  OR ECX,0xffffffff
0069D2F5  89 8D 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ECX
0069D2FB  85 C0                     TEST EAX,EAX
0069D2FD  0F 8E B3 00 00 00         JLE 0x0069d3b6
LAB_0069d303:
0069D303  33 C0                     XOR EAX,EAX
0069D305  89 84 95 D4 FE FF FF      MOV dword ptr [EBP + EDX*0x4 + 0xfffffed4],EAX
0069D30C  89 84 95 5C FF FF FF      MOV dword ptr [EBP + EDX*0x4 + 0xffffff5c],EAX
0069D313  8B 4C 95 9C               MOV ECX,dword ptr [EBP + EDX*0x4 + -0x64]
0069D317  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0069D31E  2B C1                     SUB EAX,ECX
0069D320  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
0069D323  8B 44 47 0A               MOV EAX,dword ptr [EDI + EAX*0x2 + 0xa]
0069D327  8B BD BC FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffebc]
0069D32D  8B 5D 90                  MOV EBX,dword ptr [EBP + -0x70]
0069D330  3B 04 BB                  CMP EAX,dword ptr [EBX + EDI*0x4]
0069D333  75 16                     JNZ 0x0069d34b
0069D335  8D 41 01                  LEA EAX,[ECX + 0x1]
0069D338  89 84 95 5C FF FF FF      MOV dword ptr [EBP + EDX*0x4 + 0xffffff5c],EAX
0069D33F  FF 45 CC                  INC dword ptr [EBP + -0x34]
0069D342  85 F6                     TEST ESI,ESI
0069D344  75 05                     JNZ 0x0069d34b
0069D346  BE 01 00 00 00            MOV ESI,0x1
LAB_0069d34b:
0069D34B  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0069D351  80 3C 01 01               CMP byte ptr [ECX + EAX*0x1],0x1
0069D355  75 27                     JNZ 0x0069d37e
0069D357  41                        INC ECX
0069D358  89 8C 95 D4 FE FF FF      MOV dword ptr [EBP + EDX*0x4 + 0xfffffed4],ECX
0069D35F  FF 85 48 FF FF FF         INC dword ptr [EBP + 0xffffff48]
0069D365  85 F6                     TEST ESI,ESI
0069D367  74 15                     JZ 0x0069d37e
0069D369  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
0069D36F  85 C9                     TEST ECX,ECX
0069D371  7D 11                     JGE 0x0069d384
0069D373  8D 4A FF                  LEA ECX,[EDX + -0x1]
0069D376  89 8D 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ECX
0069D37C  EB 06                     JMP 0x0069d384
LAB_0069d37e:
0069D37E  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
LAB_0069d384:
0069D384  8B 85 84 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe84]
0069D38A  8D 78 FF                  LEA EDI,[EAX + -0x1]
0069D38D  3B D7                     CMP EDX,EDI
0069D38F  75 10                     JNZ 0x0069d3a1
0069D391  85 F6                     TEST ESI,ESI
0069D393  74 0C                     JZ 0x0069d3a1
0069D395  85 C9                     TEST ECX,ECX
0069D397  7D 08                     JGE 0x0069d3a1
0069D399  8B CA                     MOV ECX,EDX
0069D39B  89 8D 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ECX
LAB_0069d3a1:
0069D3A1  42                        INC EDX
0069D3A2  3B D0                     CMP EDX,EAX
0069D3A4  0F 8C 59 FF FF FF         JL 0x0069d303
0069D3AA  8B BD 8C FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffe8c]
0069D3B0  8B 9D 28 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff28]
LAB_0069d3b6:
0069D3B6  83 7D E0 FF               CMP dword ptr [EBP + -0x20],-0x1
0069D3BA  75 1B                     JNZ 0x0069d3d7
0069D3BC  8B D7                     MOV EDX,EDI
0069D3BE  81 E2 FF FF 00 00         AND EDX,0xffff
0069D3C4  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0069D3C7  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
0069D3CA  89 14 B0                  MOV dword ptr [EAX + ESI*0x4],EDX
0069D3CD  C7 85 AC FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffeac],0x1
LAB_0069d3d7:
0069D3D7  C7 45 E0 FF FF FF FF      MOV dword ptr [EBP + -0x20],0xffffffff
0069D3DE  85 C9                     TEST ECX,ECX
0069D3E0  0F 8C E4 00 00 00         JL 0x0069d4ca
0069D3E6  83 CA FF                  OR EDX,0xffffffff
0069D3E9  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
0069D3EF  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0069D3F2  48                        DEC EAX
0069D3F3  74 51                     JZ 0x0069d446
0069D3F5  48                        DEC EAX
0069D3F6  74 1F                     JZ 0x0069d417
0069D3F8  48                        DEC EAX
0069D3F9  75 59                     JNZ 0x0069d454
0069D3FB  33 F6                     XOR ESI,ESI
0069D3FD  33 C0                     XOR EAX,EAX
LAB_0069d3ff:
0069D3FF  83 BC 85 5C FF FF FF 00   CMP dword ptr [EBP + EAX*0x4 + 0xffffff5c],0x0
0069D407  74 06                     JZ 0x0069d40f
0069D409  83 FE 01                  CMP ESI,0x1
0069D40C  74 2F                     JZ 0x0069d43d
0069D40E  46                        INC ESI
LAB_0069d40f:
0069D40F  40                        INC EAX
0069D410  83 F8 08                  CMP EAX,0x8
0069D413  7C EA                     JL 0x0069d3ff
0069D415  EB 3D                     JMP 0x0069d454
LAB_0069d417:
0069D417  33 C0                     XOR EAX,EAX
LAB_0069d419:
0069D419  8B F0                     MOV ESI,EAX
0069D41B  81 E6 01 00 00 80         AND ESI,0x80000001
0069D421  79 05                     JNS 0x0069d428
0069D423  4E                        DEC ESI
0069D424  83 CE FE                  OR ESI,0xfffffffe
0069D427  46                        INC ESI
LAB_0069d428:
0069D428  75 0B                     JNZ 0x0069d435
0069D42A  8B B4 85 5C FF FF FF      MOV ESI,dword ptr [EBP + EAX*0x4 + 0xffffff5c]
0069D431  85 F6                     TEST ESI,ESI
0069D433  75 08                     JNZ 0x0069d43d
LAB_0069d435:
0069D435  40                        INC EAX
0069D436  83 F8 08                  CMP EAX,0x8
0069D439  7C DE                     JL 0x0069d419
0069D43B  EB 17                     JMP 0x0069d454
LAB_0069d43d:
0069D43D  8B 94 85 5C FF FF FF      MOV EDX,dword ptr [EBP + EAX*0x4 + 0xffffff5c]
0069D444  EB 07                     JMP 0x0069d44d
LAB_0069d446:
0069D446  8B 94 8D 5C FF FF FF      MOV EDX,dword ptr [EBP + ECX*0x4 + 0xffffff5c]
LAB_0069d44d:
0069D44D  4A                        DEC EDX
0069D44E  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
LAB_0069d454:
0069D454  85 D2                     TEST EDX,EDX
0069D456  7D 0E                     JGE 0x0069d466
0069D458  8B 84 8D 5C FF FF FF      MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff5c]
0069D45F  48                        DEC EAX
0069D460  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
LAB_0069d466:
0069D466  8D 71 03                  LEA ESI,[ECX + 0x3]
0069D469  83 FE 08                  CMP ESI,0x8
0069D46C  7C 03                     JL 0x0069d471
0069D46E  83 EE 08                  SUB ESI,0x8
LAB_0069d471:
0069D471  6A 00                     PUSH 0x0
0069D473  8D 95 F8 FE FF FF         LEA EDX,[EBP + 0xfffffef8]
0069D479  52                        PUSH EDX
0069D47A  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
0069D480  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0069D483  8B 12                     MOV EDX,dword ptr [EDX]
0069D485  D1 E2                     SHL EDX,0x1
0069D487  52                        PUSH EDX
0069D488  8B 4C 8D 9C               MOV ECX,dword ptr [EBP + ECX*0x4 + -0x64]
0069D48C  51                        PUSH ECX
0069D48D  8B C8                     MOV ECX,EAX
0069D48F  E8 ED 87 D6 FF            CALL 0x00405c81
0069D494  83 F8 08                  CMP EAX,0x8
0069D497  75 31                     JNZ 0x0069d4ca
0069D499  33 C9                     XOR ECX,ECX
0069D49B  8B 95 44 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff44]
LAB_0069d4a1:
0069D4A1  8B 84 B5 F8 FE FF FF      MOV EAX,dword ptr [EBP + ESI*0x4 + 0xfffffef8]
0069D4A8  80 3C 10 01               CMP byte ptr [EAX + EDX*0x1],0x1
0069D4AC  75 04                     JNZ 0x0069d4b2
0069D4AE  3B C3                     CMP EAX,EBX
0069D4B0  75 0E                     JNZ 0x0069d4c0
LAB_0069d4b2:
0069D4B2  4E                        DEC ESI
0069D4B3  79 03                     JNS 0x0069d4b8
0069D4B5  83 C6 08                  ADD ESI,0x8
LAB_0069d4b8:
0069D4B8  41                        INC ECX
0069D4B9  83 F9 08                  CMP ECX,0x8
0069D4BC  7C E3                     JL 0x0069d4a1
0069D4BE  EB 0A                     JMP 0x0069d4ca
LAB_0069d4c0:
0069D4C0  8B 94 B5 F8 FE FF FF      MOV EDX,dword ptr [EBP + ESI*0x4 + 0xfffffef8]
0069D4C7  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0069d4ca:
0069D4CA  83 C8 FF                  OR EAX,0xffffffff
0069D4CD  39 45 E0                  CMP dword ptr [EBP + -0x20],EAX
0069D4D0  75 5C                     JNZ 0x0069d52e
0069D4D2  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0069D4D8  89 1C F9                  MOV dword ptr [ECX + EDI*0x8],EBX
0069D4DB  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
0069D4E1  89 44 FA 04               MOV dword ptr [EDX + EDI*0x8 + 0x4],EAX
0069D4E5  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0069D4E8  8A C1                     MOV AL,CL
0069D4EA  04 02                     ADD AL,0x2
0069D4EC  8B 95 44 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff44]
0069D4F2  88 04 13                  MOV byte ptr [EBX + EDX*0x1],AL
0069D4F5  47                        INC EDI
0069D4F6  89 BD 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EDI
0069D4FC  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0069D502  85 C0                     TEST EAX,EAX
0069D504  0F 84 FA 00 00 00         JZ 0x0069d604
0069D50A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0069D50D  C1 E7 10                  SHL EDI,0x10
0069D510  33 D2                     XOR EDX,EDX
0069D512  66 8B 14 88               MOV DX,word ptr [EAX + ECX*0x4]
0069D516  0B FA                     OR EDI,EDX
0069D518  89 3C 88                  MOV dword ptr [EAX + ECX*0x4],EDI
0069D51B  C7 85 AC FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeac],0x0
0069D525  41                        INC ECX
0069D526  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0069D529  E9 D6 00 00 00            JMP 0x0069d604
LAB_0069d52e:
0069D52E  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
0069D534  85 C0                     TEST EAX,EAX
0069D536  0F 8C C8 00 00 00         JL 0x0069d604
0069D53C  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0069D542  89 1C F9                  MOV dword ptr [ECX + EDI*0x8],EBX
0069D545  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
0069D54B  89 44 FA 04               MOV dword ptr [EDX + EDI*0x8 + 0x4],EAX
0069D54F  8A 45 C0                  MOV AL,byte ptr [EBP + -0x40]
0069D552  E9 9B 00 00 00            JMP 0x0069d5f2
LAB_0069d557:
0069D557  83 C9 FF                  OR ECX,0xffffffff
0069D55A  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
0069D560  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0069D563  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0069D566  3B C2                     CMP EAX,EDX
0069D568  75 2E                     JNZ 0x0069d598
0069D56A  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
0069D570  89 1C F8                  MOV dword ptr [EAX + EDI*0x8],EBX
0069D573  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
0069D579  89 4C F8 04               MOV dword ptr [EAX + EDI*0x8 + 0x4],ECX
0069D57D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0069D580  C7 01 00 00 01 00         MOV dword ptr [ECX],0x10000
0069D586  C7 45 C0 01 00 00 00      MOV dword ptr [EBP + -0x40],0x1
0069D58D  89 95 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EDX
0069D593  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0069D596  EB 5A                     JMP 0x0069d5f2
LAB_0069d598:
0069D598  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
0069D59E  89 1C FA                  MOV dword ptr [EDX + EDI*0x8],EBX
0069D5A1  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
0069D5A7  89 4C FA 04               MOV dword ptr [EDX + EDI*0x8 + 0x4],ECX
0069D5AB  83 BD AC FE FF FF 01      CMP dword ptr [EBP + 0xfffffeac],0x1
0069D5B2  75 24                     JNZ 0x0069d5d8
0069D5B4  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0069D5B7  8D 57 01                  LEA EDX,[EDI + 0x1]
0069D5BA  C1 E2 10                  SHL EDX,0x10
0069D5BD  33 F6                     XOR ESI,ESI
0069D5BF  66 8B 34 81               MOV SI,word ptr [ECX + EAX*0x4]
0069D5C3  0B D6                     OR EDX,ESI
0069D5C5  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
0069D5C8  40                        INC EAX
0069D5C9  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0069D5CC  C7 85 AC FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeac],0x0
0069D5D6  EB 1A                     JMP 0x0069d5f2
LAB_0069d5d8:
0069D5D8  8D 4F 01                  LEA ECX,[EDI + 0x1]
0069D5DB  C1 E1 10                  SHL ECX,0x10
0069D5DE  8B D7                     MOV EDX,EDI
0069D5E0  81 E2 FF FF 00 00         AND EDX,0xffff
0069D5E6  0B CA                     OR ECX,EDX
0069D5E8  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0069D5EB  89 0C 82                  MOV dword ptr [EDX + EAX*0x4],ECX
0069D5EE  40                        INC EAX
0069D5EF  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_0069d5f2:
0069D5F2  04 02                     ADD AL,0x2
0069D5F4  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
0069D5FA  88 04 0B                  MOV byte ptr [EBX + ECX*0x1],AL
0069D5FD  47                        INC EDI
0069D5FE  89 BD 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EDI
LAB_0069d604:
0069D604  81 7D C0 FD 00 00 00      CMP dword ptr [EBP + -0x40],0xfd
0069D60B  7D 19                     JGE 0x0069d626
0069D60D  8B 85 20 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff20]
0069D613  40                        INC EAX
0069D614  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
0069D61A  3B 85 A0 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffea0]
0069D620  0F 8C D7 FB FF FF         JL 0x0069d1fd
LAB_0069d626:
0069D626  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0069D629  85 C0                     TEST EAX,EAX
0069D62B  0F 84 31 04 00 00         JZ 0x0069da62
0069D631  33 DB                     XOR EBX,EBX
0069D633  89 9D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EBX
0069D639  85 C0                     TEST EAX,EAX
0069D63B  0F 8E 17 04 00 00         JLE 0x0069da58
LAB_0069d641:
0069D641  33 C9                     XOR ECX,ECX
0069D643  33 F6                     XOR ESI,ESI
0069D645  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0069D648  66 8B 34 98               MOV SI,word ptr [EAX + EBX*0x4]
0069D64C  8B 3C 98                  MOV EDI,dword ptr [EAX + EBX*0x4]
0069D64F  C1 EF 10                  SHR EDI,0x10
0069D652  89 BD 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EDI
0069D658  8B C7                     MOV EAX,EDI
0069D65A  2B C6                     SUB EAX,ESI
0069D65C  89 8D 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],ECX
0069D662  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
0069D668  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0069D66B  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
0069D66E  83 F8 07                  CMP EAX,0x7
0069D671  7E 33                     JLE 0x0069d6a6
0069D673  E8 48 10 09 00            CALL 0x0072e6c0
0069D678  99                        CDQ
0069D679  B9 03 00 00 00            MOV ECX,0x3
0069D67E  F7 F9                     IDIV ECX
0069D680  8D 44 12 03               LEA EAX,[EDX + EDX*0x1 + 0x3]
LAB_0069d684:
0069D684  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
0069D68A  99                        CDQ
0069D68B  2B C2                     SUB EAX,EDX
0069D68D  D1 F8                     SAR EAX,0x1
0069D68F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0069D692  B9 01 00 00 00            MOV ECX,0x1
0069D697  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
0069D69A  C7 85 30 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff30],0x0
0069D6A4  EB 0F                     JMP 0x0069d6b5
LAB_0069d6a6:
0069D6A6  83 F8 02                  CMP EAX,0x2
0069D6A9  7F D9                     JG 0x0069d684
0069D6AB  C7 85 3C FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff3c],0x1
LAB_0069d6b5:
0069D6B5  89 B5 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],ESI
0069D6BB  3B F7                     CMP ESI,EDI
0069D6BD  0F 8D 85 03 00 00         JGE 0x0069da48
0069D6C3  EB 03                     JMP 0x0069d6c8
LAB_0069d6c5:
0069D6C5  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
LAB_0069d6c8:
0069D6C8  85 C9                     TEST ECX,ECX
0069D6CA  0F 84 E2 00 00 00         JZ 0x0069d7b2
0069D6D0  83 F9 02                  CMP ECX,0x2
0069D6D3  75 1E                     JNZ 0x0069d6f3
0069D6D5  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
0069D6DB  3B 95 8C FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffe8c]
0069D6E1  0F 8C 42 03 00 00         JL 0x0069da29
0069D6E7  C7 45 80 01 00 00 00      MOV dword ptr [EBP + -0x80],0x1
0069D6EE  E9 BF 00 00 00            JMP 0x0069d7b2
LAB_0069d6f3:
0069D6F3  E8 C8 0F 09 00            CALL 0x0072e6c0
0069D6F8  99                        CDQ
0069D6F9  B9 03 00 00 00            MOV ECX,0x3
0069D6FE  F7 F9                     IDIV ECX
0069D700  85 D2                     TEST EDX,EDX
0069D702  0F 84 21 03 00 00         JZ 0x0069da29
0069D708  8B B5 30 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff30]
0069D70E  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0069D711  3B F1                     CMP ESI,ECX
0069D713  7D 1D                     JGE 0x0069d732
0069D715  8B C1                     MOV EAX,ECX
0069D717  99                        CDQ
0069D718  2B C2                     SUB EAX,EDX
0069D71A  D1 F8                     SAR EAX,0x1
0069D71C  33 D2                     XOR EDX,EDX
0069D71E  3B F0                     CMP ESI,EAX
0069D720  0F 9D C2                  SETGE DL
0069D723  4A                        DEC EDX
0069D724  83 E2 FE                  AND EDX,0xfffffffe
0069D727  83 C2 03                  ADD EDX,0x3
0069D72A  89 95 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDX
0069D730  EB 2B                     JMP 0x0069d75d
LAB_0069d732:
0069D732  75 0C                     JNZ 0x0069d740
0069D734  C7 85 3C FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff3c],0x2
0069D73E  EB 1D                     JMP 0x0069d75d
LAB_0069d740:
0069D740  8B C1                     MOV EAX,ECX
0069D742  99                        CDQ
0069D743  2B C2                     SUB EAX,EDX
0069D745  D1 F8                     SAR EAX,0x1
0069D747  03 C1                     ADD EAX,ECX
0069D749  33 C9                     XOR ECX,ECX
0069D74B  3B F0                     CMP ESI,EAX
0069D74D  0F 9C C1                  SETL CL
0069D750  49                        DEC ECX
0069D751  83 E1 FE                  AND ECX,0xfffffffe
0069D754  83 C1 03                  ADD ECX,0x3
0069D757  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
LAB_0069d75d:
0069D75D  3B B5 48 FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff48]
0069D763  7C 4D                     JL 0x0069d7b2
0069D765  E8 56 0F 09 00            CALL 0x0072e6c0
0069D76A  99                        CDQ
0069D76B  B9 0A 00 00 00            MOV ECX,0xa
0069D770  F7 F9                     IDIV ECX
0069D772  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
0069D778  8D 4C 02 05               LEA ECX,[EDX + EAX*0x1 + 0x5]
0069D77C  89 8D 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],ECX
0069D782  C7 45 80 02 00 00 00      MOV dword ptr [EBP + -0x80],0x2
0069D789  E8 32 0F 09 00            CALL 0x0072e6c0
0069D78E  99                        CDQ
0069D78F  B9 03 00 00 00            MOV ECX,0x3
0069D794  F7 F9                     IDIV ECX
0069D796  8D 44 12 03               LEA EAX,[EDX + EDX*0x1 + 0x3]
0069D79A  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
0069D7A0  99                        CDQ
0069D7A1  2B C2                     SUB EAX,EDX
0069D7A3  D1 F8                     SAR EAX,0x1
0069D7A5  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0069D7A8  C7 85 30 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff30],0x0
LAB_0069d7b2:
0069D7B2  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
0069D7B8  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
0069D7BE  8B 3C C8                  MOV EDI,dword ptr [EAX + ECX*0x8]
0069D7C1  8B 5C C8 04               MOV EBX,dword ptr [EAX + ECX*0x8 + 0x4]
0069D7C5  85 FF                     TEST EDI,EDI
0069D7C7  0F 8C 5C 02 00 00         JL 0x0069da29
0069D7CD  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
0069D7D4  2B C7                     SUB EAX,EDI
0069D7D6  D1 E0                     SHL EAX,0x1
0069D7D8  89 85 78 FE FF FF         MOV dword ptr [EBP + 0xfffffe78],EAX
0069D7DE  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069D7E1  8B 44 10 06               MOV EAX,dword ptr [EAX + EDX*0x1 + 0x6]
0069D7E5  85 C0                     TEST EAX,EAX
0069D7E7  7C 0B                     JL 0x0069d7f4
0069D7E9  3D ED 03 00 00            CMP EAX,0x3ed
0069D7EE  0F 84 35 02 00 00         JZ 0x0069da29
LAB_0069d7f4:
0069D7F4  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
0069D7FA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0069D7FD  8B 09                     MOV ECX,dword ptr [ECX]
0069D7FF  D1 E1                     SHL ECX,0x1
0069D801  8B C7                     MOV EAX,EDI
0069D803  99                        CDQ
0069D804  F7 F9                     IDIV ECX
0069D806  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069D809  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0069D80C  8D 34 95 32 00 00 00      LEA ESI,[EDX*0x4 + 0x32]
0069D813  8B C7                     MOV EAX,EDI
0069D815  99                        CDQ
0069D816  F7 F9                     IDIV ECX
0069D818  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0069D81B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069D81E  8D 3C 85 32 00 00 00      LEA EDI,[EAX*0x4 + 0x32]
0069D825  85 DB                     TEST EBX,EBX
0069D827  0F 8C 2E 01 00 00         JL 0x0069d95b
0069D82D  8B C3                     MOV EAX,EBX
0069D82F  99                        CDQ
0069D830  F7 F9                     IDIV ECX
0069D832  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069D835  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0069D838  8D 04 95 32 00 00 00      LEA EAX,[EDX*0x4 + 0x32]
0069D83F  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
0069D845  8B C3                     MOV EAX,EBX
0069D847  99                        CDQ
0069D848  F7 F9                     IDIV ECX
0069D84A  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0069D84D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0069D850  8D 04 8D 32 00 00 00      LEA EAX,[ECX*0x4 + 0x32]
0069D857  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
0069D85D  8B 9D B4 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffeb4]
0069D863  2B DE                     SUB EBX,ESI
0069D865  75 28                     JNZ 0x0069d88f
0069D867  2B C7                     SUB EAX,EDI
0069D869  75 24                     JNZ 0x0069d88f
0069D86B  E8 50 0E 09 00            CALL 0x0072e6c0
0069D870  99                        CDQ
0069D871  B9 1D 00 00 00            MOV ECX,0x1d
0069D876  F7 F9                     IDIV ECX
0069D878  8D 7C 17 F2               LEA EDI,[EDI + EDX*0x1 + -0xe]
0069D87C  E8 3F 0E 09 00            CALL 0x0072e6c0
0069D881  99                        CDQ
0069D882  B9 1D 00 00 00            MOV ECX,0x1d
0069D887  F7 F9                     IDIV ECX
0069D889  8D 74 16 F2               LEA ESI,[ESI + EDX*0x1 + -0xe]
0069D88D  EB 3E                     JMP 0x0069d8cd
LAB_0069d88f:
0069D88F  E8 2C 0E 09 00            CALL 0x0072e6c0
0069D894  99                        CDQ
0069D895  B9 1D 00 00 00            MOV ECX,0x1d
0069D89A  F7 F9                     IDIV ECX
0069D89C  8B CA                     MOV ECX,EDX
0069D89E  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
0069D8A4  2B C7                     SUB EAX,EDI
0069D8A6  99                        CDQ
0069D8A7  2B C2                     SUB EAX,EDX
0069D8A9  D1 F8                     SAR EAX,0x1
0069D8AB  03 C7                     ADD EAX,EDI
0069D8AD  8D 7C 08 F2               LEA EDI,[EAX + ECX*0x1 + -0xe]
0069D8B1  E8 0A 0E 09 00            CALL 0x0072e6c0
0069D8B6  99                        CDQ
0069D8B7  B9 1D 00 00 00            MOV ECX,0x1d
0069D8BC  F7 F9                     IDIV ECX
0069D8BE  8B CA                     MOV ECX,EDX
0069D8C0  8B C3                     MOV EAX,EBX
0069D8C2  99                        CDQ
0069D8C3  2B C2                     SUB EAX,EDX
0069D8C5  D1 F8                     SAR EAX,0x1
0069D8C7  03 C6                     ADD EAX,ESI
0069D8C9  8D 74 08 F2               LEA ESI,[EAX + ECX*0x1 + -0xe]
LAB_0069d8cd:
0069D8CD  8B 85 3C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3c]
0069D8D3  48                        DEC EAX
0069D8D4  74 3D                     JZ 0x0069d913
0069D8D6  48                        DEC EAX
0069D8D7  74 24                     JZ 0x0069d8fd
0069D8D9  48                        DEC EAX
0069D8DA  74 0F                     JZ 0x0069d8eb
0069D8DC  E8 DF 0D 09 00            CALL 0x0072e6c0
0069D8E1  33 D2                     XOR EDX,EDX
0069D8E3  F7 35 1C 8F 7D 00         DIV dword ptr [0x007d8f1c]
0069D8E9  EB 38                     JMP 0x0069d923
LAB_0069d8eb:
0069D8EB  E8 D0 0D 09 00            CALL 0x0072e6c0
0069D8F0  99                        CDQ
0069D8F1  B9 05 00 00 00            MOV ECX,0x5
0069D8F6  F7 F9                     IDIV ECX
0069D8F8  83 C2 04                  ADD EDX,0x4
0069D8FB  EB 26                     JMP 0x0069d923
LAB_0069d8fd:
0069D8FD  E8 BE 0D 09 00            CALL 0x0072e6c0
0069D902  8B D0                     MOV EDX,EAX
0069D904  81 E2 03 00 00 80         AND EDX,0x80000003
0069D90A  79 17                     JNS 0x0069d923
0069D90C  4A                        DEC EDX
0069D90D  83 CA FC                  OR EDX,0xfffffffc
0069D910  42                        INC EDX
0069D911  EB 10                     JMP 0x0069d923
LAB_0069d913:
0069D913  E8 A8 0D 09 00            CALL 0x0072e6c0
0069D918  99                        CDQ
0069D919  B9 07 00 00 00            MOV ECX,0x7
0069D91E  F7 F9                     IDIV ECX
0069D920  83 C2 09                  ADD EDX,0x9
LAB_0069d923:
0069D923  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0069D926  85 C0                     TEST EAX,EAX
0069D928  74 06                     JZ 0x0069d930
0069D92A  FF 85 30 FF FF FF         INC dword ptr [EBP + 0xffffff30]
LAB_0069d930:
0069D930  52                        PUSH EDX
0069D931  68 ED 03 00 00            PUSH 0x3ed
0069D936  6A 00                     PUSH 0x0
0069D938  56                        PUSH ESI
0069D939  57                        PUSH EDI
0069D93A  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
0069D940  E8 11 4F D6 FF            CALL 0x00402856
0069D945  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069D948  8B 85 78 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe78]
0069D94E  C7 44 10 06 ED 03 00 00   MOV dword ptr [EAX + EDX*0x1 + 0x6],0x3ed
0069D956  E9 CE 00 00 00            JMP 0x0069da29
LAB_0069d95b:
0069D95B  E8 60 0D 09 00            CALL 0x0072e6c0
0069D960  99                        CDQ
0069D961  B9 06 00 00 00            MOV ECX,0x6
0069D966  F7 F9                     IDIV ECX
0069D968  85 D2                     TEST EDX,EDX
0069D96A  75 57                     JNZ 0x0069d9c3
0069D96C  E8 4F 0D 09 00            CALL 0x0072e6c0
0069D971  33 D2                     XOR EDX,EDX
0069D973  F7 35 64 95 7D 00         DIV dword ptr [0x007d9564]
0069D979  52                        PUSH EDX
0069D97A  68 F0 03 00 00            PUSH 0x3f0
0069D97F  6A 00                     PUSH 0x0
0069D981  E8 3A 0D 09 00            CALL 0x0072e6c0
0069D986  99                        CDQ
0069D987  B9 51 00 00 00            MOV ECX,0x51
0069D98C  F7 F9                     IDIV ECX
0069D98E  8D 54 32 D8               LEA EDX,[EDX + ESI*0x1 + -0x28]
0069D992  52                        PUSH EDX
0069D993  E8 28 0D 09 00            CALL 0x0072e6c0
0069D998  99                        CDQ
0069D999  B9 51 00 00 00            MOV ECX,0x51
0069D99E  F7 F9                     IDIV ECX
0069D9A0  8D 54 3A D8               LEA EDX,[EDX + EDI*0x1 + -0x28]
0069D9A4  52                        PUSH EDX
0069D9A5  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
0069D9AB  E8 A6 4E D6 FF            CALL 0x00402856
0069D9B0  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0069D9B3  8B 8D 78 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe78]
0069D9B9  C7 44 01 06 F0 03 00 00   MOV dword ptr [ECX + EAX*0x1 + 0x6],0x3f0
0069D9C1  EB 66                     JMP 0x0069da29
LAB_0069d9c3:
0069D9C3  E8 F8 0C 09 00            CALL 0x0072e6c0
0069D9C8  99                        CDQ
0069D9C9  B9 09 00 00 00            MOV ECX,0x9
0069D9CE  F7 F9                     IDIV ECX
0069D9D0  85 D2                     TEST EDX,EDX
0069D9D2  75 55                     JNZ 0x0069da29
0069D9D4  E8 E7 0C 09 00            CALL 0x0072e6c0
0069D9D9  33 D2                     XOR EDX,EDX
0069D9DB  F7 35 7C 97 7D 00         DIV dword ptr [0x007d977c]
0069D9E1  52                        PUSH EDX
0069D9E2  68 F1 03 00 00            PUSH 0x3f1
0069D9E7  6A 00                     PUSH 0x0
0069D9E9  E8 D2 0C 09 00            CALL 0x0072e6c0
0069D9EE  99                        CDQ
0069D9EF  B9 51 00 00 00            MOV ECX,0x51
0069D9F4  F7 F9                     IDIV ECX
0069D9F6  8D 54 32 D8               LEA EDX,[EDX + ESI*0x1 + -0x28]
0069D9FA  52                        PUSH EDX
0069D9FB  E8 C0 0C 09 00            CALL 0x0072e6c0
0069DA00  99                        CDQ
0069DA01  B9 51 00 00 00            MOV ECX,0x51
0069DA06  F7 F9                     IDIV ECX
0069DA08  8D 54 3A D8               LEA EDX,[EDX + EDI*0x1 + -0x28]
0069DA0C  52                        PUSH EDX
0069DA0D  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
0069DA13  E8 3E 4E D6 FF            CALL 0x00402856
0069DA18  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0069DA1B  8B 8D 78 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe78]
0069DA21  C7 44 01 06 F1 03 00 00   MOV dword ptr [ECX + EAX*0x1 + 0x6],0x3f1
LAB_0069da29:
0069DA29  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
0069DA2F  40                        INC EAX
0069DA30  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
0069DA36  3B 85 1C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff1c]
0069DA3C  0F 8C 83 FC FF FF         JL 0x0069d6c5
0069DA42  8B 9D 20 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff20]
LAB_0069da48:
0069DA48  43                        INC EBX
0069DA49  89 9D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EBX
0069DA4F  3B 5D C0                  CMP EBX,dword ptr [EBP + -0x40]
0069DA52  0F 8C E9 FB FF FF         JL 0x0069d641
LAB_0069da58:
0069DA58  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
0069DA5E  85 C0                     TEST EAX,EAX
0069DA60  7E 48                     JLE 0x0069daaa
LAB_0069da62:
0069DA62  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0069DA65  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0069DA6B  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0069DA6E  29 95 58 FF FF FF         SUB dword ptr [EBP + 0xffffff58],EDX
0069DA74  C7 04 81 00 00 00 00      MOV dword ptr [ECX + EAX*0x4],0x0
0069DA7B  FF 85 88 FE FF FF         INC dword ptr [EBP + 0xfffffe88]
0069DA81  FF 8D C4 FE FF FF         DEC dword ptr [EBP + 0xfffffec4]
0069DA87  8D 85 50 FF FF FF         LEA EAX,[EBP + 0xffffff50]
0069DA8D  50                        PUSH EAX
0069DA8E  E8 CD D5 00 00            CALL 0x006ab060
0069DA93  8D 4D DC                  LEA ECX,[EBP + -0x24]
0069DA96  51                        PUSH ECX
0069DA97  E8 C4 D5 00 00            CALL 0x006ab060
0069DA9C  33 F6                     XOR ESI,ESI
LAB_0069da9e:
0069DA9E  39 B5 C4 FE FF FF         CMP dword ptr [EBP + 0xfffffec4],ESI
0069DAA4  0F 8F 60 F5 FF FF         JG 0x0069d00a
LAB_0069daaa:
0069DAAA  33 F6                     XOR ESI,ESI
0069DAAC  89 B5 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ESI
0069DAB2  33 FF                     XOR EDI,EDI
0069DAB4  89 BD 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDI
0069DABA  33 C9                     XOR ECX,ECX
0069DABC  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
0069DAC2  85 C0                     TEST EAX,EAX
0069DAC4  8B 9D CC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffecc]
0069DACA  7E 53                     JLE 0x0069db1f
LAB_0069dacc:
0069DACC  3B 4B 0C                  CMP ECX,dword ptr [EBX + 0xc]
0069DACF  73 0B                     JNC 0x0069dadc
0069DAD1  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069DAD4  0F AF C1                  IMUL EAX,ECX
0069DAD7  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
0069DADA  EB 02                     JMP 0x0069dade
LAB_0069dadc:
0069DADC  33 C0                     XOR EAX,EAX
LAB_0069dade:
0069DADE  85 C0                     TEST EAX,EAX
0069DAE0  74 34                     JZ 0x0069db16
0069DAE2  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0069DAE5  85 D2                     TEST EDX,EDX
0069DAE7  7E 2D                     JLE 0x0069db16
0069DAE9  81 38 FF 00 00 00         CMP dword ptr [EAX],0xff
0069DAEF  74 25                     JZ 0x0069db16
0069DAF1  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0069DAF4  89 0C B2                  MOV dword ptr [EDX + ESI*0x4],ECX
0069DAF7  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0069DAFA  8B 5D 94                  MOV EBX,dword ptr [EBP + -0x6c]
0069DAFD  89 14 B3                  MOV dword ptr [EBX + ESI*0x4],EDX
0069DB00  46                        INC ESI
0069DB01  89 B5 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ESI
0069DB07  03 78 08                  ADD EDI,dword ptr [EAX + 0x8]
0069DB0A  89 BD 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDI
0069DB10  8B 9D CC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffecc]
LAB_0069db16:
0069DB16  41                        INC ECX
0069DB17  3B 8D C8 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffec8]
0069DB1D  7C AD                     JL 0x0069dacc
LAB_0069db1f:
0069DB1F  85 F6                     TEST ESI,ESI
0069DB21  0F 8E CA 03 00 00         JLE 0x0069def1
0069DB27  85 FF                     TEST EDI,EDI
0069DB29  0F 8E C2 03 00 00         JLE 0x0069def1
0069DB2F  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
0069DB35  8B 80 33 58 00 00         MOV EAX,dword ptr [EAX + 0x5833]
0069DB3B  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069DB42  89 8D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ECX
0069DB48  C7 85 54 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff54],0x0
0069DB52  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0069DB55  99                        CDQ
0069DB56  2B C2                     SUB EAX,EDX
0069DB58  D1 F8                     SAR EAX,0x1
0069DB5A  89 85 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],EAX
0069DB60  85 C9                     TEST ECX,ECX
0069DB62  0F 8E 89 03 00 00         JLE 0x0069def1
0069DB68  EB 06                     JMP 0x0069db70
LAB_0069db6a:
0069DB6A  8B 85 94 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe94]
LAB_0069db70:
0069DB70  39 85 54 FF FF FF         CMP dword ptr [EBP + 0xffffff54],EAX
0069DB76  0F 8D 75 03 00 00         JGE 0x0069def1
0069DB7C  E8 3F 0B 09 00            CALL 0x0072e6c0
0069DB81  99                        CDQ
0069DB82  F7 FF                     IDIV EDI
0069DB84  33 C0                     XOR EAX,EAX
0069DB86  33 C9                     XOR ECX,ECX
0069DB88  85 F6                     TEST ESI,ESI
0069DB8A  7E 19                     JLE 0x0069dba5
LAB_0069db8c:
0069DB8C  8B 5D 94                  MOV EBX,dword ptr [EBP + -0x6c]
0069DB8F  03 04 8B                  ADD EAX,dword ptr [EBX + ECX*0x4]
0069DB92  3B D0                     CMP EDX,EAX
0069DB94  7C 07                     JL 0x0069db9d
0069DB96  41                        INC ECX
0069DB97  3B CE                     CMP ECX,ESI
0069DB99  7C F1                     JL 0x0069db8c
0069DB9B  EB 02                     JMP 0x0069db9f
LAB_0069db9d:
0069DB9D  8B D1                     MOV EDX,ECX
LAB_0069db9f:
0069DB9F  8B 9D CC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffecc]
LAB_0069dba5:
0069DBA5  3B CE                     CMP ECX,ESI
0069DBA7  7C 03                     JL 0x0069dbac
0069DBA9  8D 56 FF                  LEA EDX,[ESI + -0x1]
LAB_0069dbac:
0069DBAC  89 95 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EDX
0069DBB2  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0069DBB5  8B 14 91                  MOV EDX,dword ptr [ECX + EDX*0x4]
0069DBB8  3B 53 0C                  CMP EDX,dword ptr [EBX + 0xc]
0069DBBB  73 0B                     JNC 0x0069dbc8
0069DBBD  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069DBC0  0F AF C2                  IMUL EAX,EDX
0069DBC3  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
0069DBC6  EB 02                     JMP 0x0069dbca
LAB_0069dbc8:
0069DBC8  33 C0                     XOR EAX,EAX
LAB_0069dbca:
0069DBCA  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0069DBCD  85 C0                     TEST EAX,EAX
0069DBCF  75 0B                     JNZ 0x0069dbdc
0069DBD1  FF 85 C4 FE FF FF         INC dword ptr [EBP + 0xfffffec4]
0069DBD7  E9 E6 02 00 00            JMP 0x0069dec2
LAB_0069dbdc:
0069DBDC  C7 85 20 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff20],0x0
0069DBE6  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
LAB_0069dbe9:
0069DBE9  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
0069DBEC  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0069DBEF  E8 CC 0A 09 00            CALL 0x0072e6c0
0069DBF4  99                        CDQ
0069DBF5  F7 FE                     IDIV ESI
0069DBF7  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069DBFA  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0069DBFD  73 0B                     JNC 0x0069dc0a
0069DBFF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0069DC02  0F AF C2                  IMUL EAX,EDX
0069DC05  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0069DC08  EB 02                     JMP 0x0069dc0c
LAB_0069dc0a:
0069DC0A  33 C0                     XOR EAX,EAX
LAB_0069dc0c:
0069DC0C  8B 00                     MOV EAX,dword ptr [EAX]
0069DC0E  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
0069DC14  85 C0                     TEST EAX,EAX
0069DC16  0F 8C B7 00 00 00         JL 0x0069dcd3
0069DC1C  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069DC23  2B C8                     SUB ECX,EAX
0069DC25  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069DC28  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
0069DC2B  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
0069DC2E  85 C9                     TEST ECX,ECX
0069DC30  0F 8D 9D 00 00 00         JGE 0x0069dcd3
0069DC36  F6 40 01 0C               TEST byte ptr [EAX + 0x1],0xc
0069DC3A  0F 84 93 00 00 00         JZ 0x0069dcd3
0069DC40  8B 85 80 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe80]
0069DC46  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0069DC49  8B 09                     MOV ECX,dword ptr [ECX]
0069DC4B  D1 E1                     SHL ECX,0x1
0069DC4D  8B B5 28 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff28]
0069DC53  8B C6                     MOV EAX,ESI
0069DC55  99                        CDQ
0069DC56  F7 F9                     IDIV ECX
0069DC58  8B F8                     MOV EDI,EAX
0069DC5A  8B C6                     MOV EAX,ESI
0069DC5C  99                        CDQ
0069DC5D  F7 F9                     IDIV ECX
0069DC5F  8B F2                     MOV ESI,EDX
0069DC61  C7 85 40 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff40],0x1
0069DC6B  33 DB                     XOR EBX,EBX
0069DC6D  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0069DC70  85 C0                     TEST EAX,EAX
0069DC72  7E 52                     JLE 0x0069dcc6
LAB_0069dc74:
0069DC74  57                        PUSH EDI
0069DC75  56                        PUSH ESI
0069DC76  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0069DC7C  0F BF 54 98 02            MOVSX EDX,word ptr [EAX + EBX*0x4 + 0x2]
0069DC81  52                        PUSH EDX
0069DC82  0F BF 04 98               MOVSX EAX,word ptr [EAX + EBX*0x4]
0069DC86  50                        PUSH EAX
0069DC87  E8 04 F3 00 00            CALL 0x006acf90
0069DC8C  83 F8 02                  CMP EAX,0x2
0069DC8F  7C 2B                     JL 0x0069dcbc
0069DC91  8D 4F 01                  LEA ECX,[EDI + 0x1]
0069DC94  51                        PUSH ECX
0069DC95  8D 56 01                  LEA EDX,[ESI + 0x1]
0069DC98  52                        PUSH EDX
0069DC99  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0069DC9F  0F BF 4C 98 02            MOVSX ECX,word ptr [EAX + EBX*0x4 + 0x2]
0069DCA4  51                        PUSH ECX
0069DCA5  0F BF 14 98               MOVSX EDX,word ptr [EAX + EBX*0x4]
0069DCA9  52                        PUSH EDX
0069DCAA  E8 E1 F2 00 00            CALL 0x006acf90
0069DCAF  83 F8 02                  CMP EAX,0x2
0069DCB2  7C 08                     JL 0x0069dcbc
0069DCB4  43                        INC EBX
0069DCB5  3B 5D C4                  CMP EBX,dword ptr [EBP + -0x3c]
0069DCB8  7C BA                     JL 0x0069dc74
0069DCBA  EB 0A                     JMP 0x0069dcc6
LAB_0069dcbc:
0069DCBC  C7 85 40 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff40],0x0
LAB_0069dcc6:
0069DCC6  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
0069DCCC  85 C0                     TEST EAX,EAX
0069DCCE  75 1E                     JNZ 0x0069dcee
0069DCD0  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
LAB_0069dcd3:
0069DCD3  8B 85 20 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff20]
0069DCD9  40                        INC EAX
0069DCDA  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
0069DCE0  83 F8 0A                  CMP EAX,0xa
0069DCE3  0F 8C 00 FF FF FF         JL 0x0069dbe9
0069DCE9  E9 BC 01 00 00            JMP 0x0069deaa
LAB_0069dcee:
0069DCEE  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0069DCF4  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0069DCF7  66 89 34 88               MOV word ptr [EAX + ECX*0x4],SI
0069DCFB  66 89 7C 88 02            MOV word ptr [EAX + ECX*0x4 + 0x2],DI
0069DD00  FF 85 54 FF FF FF         INC dword ptr [EBP + 0xffffff54]
0069DD06  E8 B5 09 09 00            CALL 0x0072e6c0
0069DD0B  25 01 00 00 80            AND EAX,0x80000001
0069DD10  79 05                     JNS 0x0069dd17
0069DD12  48                        DEC EAX
0069DD13  83 C8 FE                  OR EAX,0xfffffffe
0069DD16  40                        INC EAX
LAB_0069dd17:
0069DD17  0F 84 1E 01 00 00         JZ 0x0069de3b
0069DD1D  E8 9E 09 09 00            CALL 0x0072e6c0
0069DD22  25 0F 00 00 80            AND EAX,0x8000000f
0069DD27  79 05                     JNS 0x0069dd2e
0069DD29  48                        DEC EAX
0069DD2A  83 C8 F0                  OR EAX,0xfffffff0
0069DD2D  40                        INC EAX
LAB_0069dd2e:
0069DD2E  0F 85 AF 00 00 00         JNZ 0x0069dde3
0069DD34  E8 87 09 09 00            CALL 0x0072e6c0
0069DD39  33 D2                     XOR EDX,EDX
0069DD3B  F7 35 7C 97 7D 00         DIV dword ptr [0x007d977c]
0069DD41  85 F6                     TEST ESI,ESI
0069DD43  8B 9D 80 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffe80]
0069DD49  7E 56                     JLE 0x0069dda1
0069DD4B  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069DD4E  8B 08                     MOV ECX,dword ptr [EAX]
0069DD50  8D 4C 09 FE               LEA ECX,[ECX + ECX*0x1 + -0x2]
0069DD54  3B F1                     CMP ESI,ECX
0069DD56  7D 49                     JGE 0x0069dda1
0069DD58  85 FF                     TEST EDI,EDI
0069DD5A  7E 45                     JLE 0x0069dda1
0069DD5C  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0069DD5F  8D 4C 00 FE               LEA ECX,[EAX + EAX*0x1 + -0x2]
0069DD63  3B F9                     CMP EDI,ECX
0069DD65  7E 3A                     JLE 0x0069dda1
0069DD67  52                        PUSH EDX
0069DD68  68 F1 03 00 00            PUSH 0x3f1
0069DD6D  6A 00                     PUSH 0x0
0069DD6F  E8 4C 09 09 00            CALL 0x0072e6c0
0069DD74  99                        CDQ
0069DD75  B9 51 00 00 00            MOV ECX,0x51
0069DD7A  F7 F9                     IDIV ECX
0069DD7C  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0069DD7F  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0069DD82  8D 4C 82 D8               LEA ECX,[EDX + EAX*0x4 + -0x28]
0069DD86  51                        PUSH ECX
0069DD87  E8 34 09 09 00            CALL 0x0072e6c0
0069DD8C  99                        CDQ
0069DD8D  B9 51 00 00 00            MOV ECX,0x51
0069DD92  F7 F9                     IDIV ECX
0069DD94  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
0069DD97  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0069DD9A  8D 4C 82 D8               LEA ECX,[EDX + EAX*0x4 + -0x28]
0069DD9E  51                        PUSH ECX
0069DD9F  EB 1C                     JMP 0x0069ddbd
LAB_0069dda1:
0069DDA1  52                        PUSH EDX
0069DDA2  68 F1 03 00 00            PUSH 0x3f1
0069DDA7  6A 00                     PUSH 0x0
0069DDA9  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0069DDAC  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
0069DDAF  C1 E2 02                  SHL EDX,0x2
0069DDB2  52                        PUSH EDX
0069DDB3  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
0069DDB6  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0069DDB9  C1 E0 02                  SHL EAX,0x2
0069DDBC  50                        PUSH EAX
LAB_0069ddbd:
0069DDBD  8B CB                     MOV ECX,EBX
0069DDBF  E8 92 4A D6 FF            CALL 0x00402856
0069DDC4  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
0069DDCA  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069DDD1  2B C8                     SUB ECX,EAX
0069DDD3  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069DDD6  C7 44 4A 06 F1 03 00 00   MOV dword ptr [EDX + ECX*0x2 + 0x6],0x3f1
0069DDDE  E9 AE 00 00 00            JMP 0x0069de91
LAB_0069dde3:
0069DDE3  E8 D8 08 09 00            CALL 0x0072e6c0
0069DDE8  33 D2                     XOR EDX,EDX
0069DDEA  F7 35 D4 88 7D 00         DIV dword ptr [0x007d88d4]
0069DDF0  52                        PUSH EDX
0069DDF1  68 E9 03 00 00            PUSH 0x3e9
0069DDF6  6A 00                     PUSH 0x0
0069DDF8  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0069DDFB  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0069DDFE  8D 0C 85 32 00 00 00      LEA ECX,[EAX*0x4 + 0x32]
0069DE05  51                        PUSH ECX
0069DE06  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
0069DE09  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
0069DE0C  8D 04 95 32 00 00 00      LEA EAX,[EDX*0x4 + 0x32]
0069DE13  50                        PUSH EAX
0069DE14  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
0069DE1A  E8 37 4A D6 FF            CALL 0x00402856
0069DE1F  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
0069DE25  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069DE2C  2B C8                     SUB ECX,EAX
0069DE2E  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069DE31  C7 44 4A 06 E9 03 00 00   MOV dword ptr [EDX + ECX*0x2 + 0x6],0x3e9
0069DE39  EB 56                     JMP 0x0069de91
LAB_0069de3b:
0069DE3B  E8 80 08 09 00            CALL 0x0072e6c0
0069DE40  33 D2                     XOR EDX,EDX
0069DE42  F7 35 94 99 7D 00         DIV dword ptr [0x007d9994]
0069DE48  52                        PUSH EDX
0069DE49  68 F2 03 00 00            PUSH 0x3f2
0069DE4E  6A 00                     PUSH 0x0
0069DE50  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0069DE53  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0069DE56  8D 0C 85 32 00 00 00      LEA ECX,[EAX*0x4 + 0x32]
0069DE5D  51                        PUSH ECX
0069DE5E  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
0069DE61  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
0069DE64  8D 04 95 32 00 00 00      LEA EAX,[EDX*0x4 + 0x32]
0069DE6B  50                        PUSH EAX
0069DE6C  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
0069DE72  E8 DF 49 D6 FF            CALL 0x00402856
0069DE77  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
0069DE7D  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0069DE84  2B C8                     SUB ECX,EAX
0069DE86  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0069DE89  C7 44 4A 06 F2 03 00 00   MOV dword ptr [EDX + ECX*0x2 + 0x6],0x3f2
LAB_0069de91:
0069DE91  FF 45 C4                  INC dword ptr [EBP + -0x3c]
0069DE94  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0069DE97  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
0069DE9D  83 04 81 FC               ADD dword ptr [ECX + EAX*0x4],-0x4
0069DEA1  79 07                     JNS 0x0069deaa
0069DEA3  C7 04 81 00 00 00 00      MOV dword ptr [ECX + EAX*0x4],0x0
LAB_0069deaa:
0069DEAA  FF 8D C4 FE FF FF         DEC dword ptr [EBP + 0xfffffec4]
0069DEB0  8B BD 58 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff58]
0069DEB6  8B B5 C0 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffec0]
0069DEBC  8B 9D CC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffecc]
LAB_0069dec2:
0069DEC2  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
0069DEC8  85 C0                     TEST EAX,EAX
0069DECA  0F 8F 9A FC FF FF         JG 0x0069db6a
0069DED0  EB 1F                     JMP 0x0069def1
LAB_0069ded2:
0069DED2  E8 E9 07 09 00            CALL 0x0072e6c0
0069DED7  33 D2                     XOR EDX,EDX
0069DED9  F7 35 D4 88 7D 00         DIV dword ptr [0x007d88d4]
0069DEDF  52                        PUSH EDX
0069DEE0  68 E9 03 00 00            PUSH 0x3e9
0069DEE5  53                        PUSH EBX
0069DEE6  6A 64                     PUSH 0x64
0069DEE8  6A 64                     PUSH 0x64
0069DEEA  8B CF                     MOV ECX,EDI
0069DEEC  E8 65 49 D6 FF            CALL 0x00402856
LAB_0069def1:
0069DEF1  8B BD CC FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffecc]
0069DEF7  85 FF                     TEST EDI,EDI
0069DEF9  74 39                     JZ 0x0069df34
0069DEFB  33 F6                     XOR ESI,ESI
0069DEFD  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0069DF00  85 C0                     TEST EAX,EAX
0069DF02  7E 2A                     JLE 0x0069df2e
0069DF04  3B F0                     CMP ESI,EAX
LAB_0069df06:
0069DF06  73 0B                     JNC 0x0069df13
0069DF08  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0069DF0B  0F AF C6                  IMUL EAX,ESI
0069DF0E  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
0069DF11  EB 02                     JMP 0x0069df15
LAB_0069df13:
0069DF13  33 C0                     XOR EAX,EAX
LAB_0069df15:
0069DF15  85 C0                     TEST EAX,EAX
0069DF17  74 0D                     JZ 0x0069df26
0069DF19  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0069DF1C  85 C0                     TEST EAX,EAX
0069DF1E  74 06                     JZ 0x0069df26
0069DF20  50                        PUSH EAX
0069DF21  E8 EA 01 01 00            CALL 0x006ae110
LAB_0069df26:
0069DF26  46                        INC ESI
0069DF27  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0069DF2A  3B F0                     CMP ESI,EAX
0069DF2C  7C D8                     JL 0x0069df06
LAB_0069df2e:
0069DF2E  57                        PUSH EDI
0069DF2F  E8 DC 01 01 00            CALL 0x006ae110
LAB_0069df34:
0069DF34  8D 45 8C                  LEA EAX,[EBP + -0x74]
0069DF37  50                        PUSH EAX
0069DF38  E8 23 D1 00 00            CALL 0x006ab060
0069DF3D  8D 8D 44 FF FF FF         LEA ECX,[EBP + 0xffffff44]
0069DF43  51                        PUSH ECX
0069DF44  E8 17 D1 00 00            CALL 0x006ab060
0069DF49  8B 8D 80 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe80]
0069DF4F  E8 B1 58 D6 FF            CALL 0x00403805
0069DF54  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
0069DF5A  EB 2D                     JMP 0x0069df89
LAB_0069df89:
0069DF89  8D A5 6C FE FF FF         LEA ESP,[EBP + 0xfffffe6c]
0069DF8F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0069DF92  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0069DF99  5F                        POP EDI
0069DF9A  5E                        POP ESI
0069DF9B  5B                        POP EBX
0069DF9C  8B E5                     MOV ESP,EBP
0069DF9E  5D                        POP EBP
0069DF9F  C2 04 00                  RET 0x4
