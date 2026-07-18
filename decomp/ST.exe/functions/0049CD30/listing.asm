FUN_0049cd30:
0049CD30  55                        PUSH EBP
0049CD31  8B EC                     MOV EBP,ESP
0049CD33  81 EC 88 00 00 00         SUB ESP,0x88
0049CD39  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049CD3C  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049CD42  53                        PUSH EBX
0049CD43  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0049CD46  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049CD49  56                        PUSH ESI
0049CD4A  57                        PUSH EDI
0049CD4B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049CD4E  33 FF                     XOR EDI,EDI
0049CD50  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
0049CD56  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
0049CD5C  57                        PUSH EDI
0049CD5D  51                        PUSH ECX
0049CD5E  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0049CD61  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0049CD64  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
0049CD6A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049CD6F  E8 7C 0A 29 00            CALL 0x0072d7f0
0049CD74  8B F0                     MOV ESI,EAX
0049CD76  83 C4 08                  ADD ESP,0x8
0049CD79  3B F7                     CMP ESI,EDI
0049CD7B  0F 85 54 03 00 00         JNZ 0x0049d0d5
0049CD81  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049CD84  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0049CD87  3B C7                     CMP EAX,EDI
0049CD89  74 09                     JZ 0x0049cd94
0049CD8B  83 F8 01                  CMP EAX,0x1
0049CD8E  0F 85 BE 01 00 00         JNZ 0x0049cf52
LAB_0049cd94:
0049CD94  B9 15 00 00 00            MOV ECX,0x15
0049CD99  33 C0                     XOR EAX,EAX
0049CD9B  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049CDA1  6A 0E                     PUSH 0xe
0049CDA3  F3 AB                     STOSD.REP ES:EDI
0049CDA5  89 43 65                  MOV dword ptr [EBX + 0x65],EAX
0049CDA8  8D 83 37 01 00 00         LEA EAX,[EBX + 0x137]
0049CDAE  B9 07 00 00 00            MOV ECX,0x7
0049CDB3  8B F0                     MOV ESI,EAX
0049CDB5  8D BB 76 02 00 00         LEA EDI,[EBX + 0x276]
0049CDBB  F3 A5                     MOVSD.REP ES:EDI,ESI
0049CDBD  66 A5                     MOVSW ES:EDI,ESI
0049CDBF  A4                        MOVSB ES:EDI,ESI
0049CDC0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049CDC6  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0049CDCC  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049CDCF  66 8B 10                  MOV DX,word ptr [EAX]
0049CDD2  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
0049CDD8  66 8B 83 39 01 00 00      MOV AX,word ptr [EBX + 0x139]
0049CDDF  66 89 55 C0               MOV word ptr [EBP + -0x40],DX
0049CDE3  8B 93 3D 01 00 00         MOV EDX,dword ptr [EBX + 0x13d]
0049CDE9  66 89 45 C2               MOV word ptr [EBP + -0x3e],AX
0049CDED  66 8B 83 54 01 00 00      MOV AX,word ptr [EBX + 0x154]
0049CDF4  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0049CDF7  66 8B 8B 3B 01 00 00      MOV CX,word ptr [EBX + 0x13b]
0049CDFE  89 55 C6                  MOV dword ptr [EBP + -0x3a],EDX
0049CE01  66 89 45 DD               MOV word ptr [EBP + -0x23],AX
0049CE05  8D 93 45 01 00 00         LEA EDX,[EBX + 0x145]
0049CE0B  66 89 4D C4               MOV word ptr [EBP + -0x3c],CX
0049CE0F  8B 8B 41 01 00 00         MOV ECX,dword ptr [EBX + 0x141]
0049CE15  8D 45 CE                  LEA EAX,[EBP + -0x32]
0049CE18  52                        PUSH EDX
0049CE19  50                        PUSH EAX
0049CE1A  89 4D CA                  MOV dword ptr [EBP + -0x36],ECX
0049CE1D  E8 1E 15 29 00            CALL 0x0072e340
0049CE22  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049CE25  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0049CE28  33 D2                     XOR EDX,EDX
0049CE2A  83 C4 0C                  ADD ESP,0xc
0049CE2D  3B C2                     CMP EAX,EDX
0049CE2F  C6 45 DC 00               MOV byte ptr [EBP + -0x24],0x0
0049CE33  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0049CE36  0F 86 EC 00 00 00         JBE 0x0049cf28
LAB_0049ce3c:
0049CE3C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049CE3F  51                        PUSH ECX
0049CE40  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049CE43  E8 28 FE 20 00            CALL 0x006acc70
0049CE48  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049CE4B  66 3D FF FF               CMP AX,0xffff
0049CE4F  0F 84 BB 00 00 00         JZ 0x0049cf10
0049CE55  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049CE58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049CE5E  6A 01                     PUSH 0x1
0049CE60  50                        PUSH EAX
0049CE61  52                        PUSH EDX
0049CE62  E8 53 5A F6 FF            CALL 0x004028ba
0049CE67  8B F0                     MOV ESI,EAX
0049CE69  85 F6                     TEST ESI,ESI
0049CE6B  75 1A                     JNZ 0x0049ce87
0049CE6D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049CE72  68 0F 09 00 00            PUSH 0x90f
0049CE77  68 3C BE 7A 00            PUSH 0x7abe3c
0049CE7C  50                        PUSH EAX
0049CE7D  68 04 00 FE AF            PUSH 0xaffe0004
0049CE82  E8 B9 8F 20 00            CALL 0x006a5e40
LAB_0049ce87:
0049CE87  8B 16                     MOV EDX,dword ptr [ESI]
0049CE89  8B CE                     MOV ECX,ESI
0049CE8B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049CE8E  83 F8 0C                  CMP EAX,0xc
0049CE91  74 51                     JZ 0x0049cee4
0049CE93  8B 06                     MOV EAX,dword ptr [ESI]
0049CE95  8B CE                     MOV ECX,ESI
0049CE97  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049CE9A  83 F8 18                  CMP EAX,0x18
0049CE9D  74 45                     JZ 0x0049cee4
0049CE9F  8B 16                     MOV EDX,dword ptr [ESI]
0049CEA1  8B CE                     MOV ECX,ESI
0049CEA3  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049CEA6  83 F8 19                  CMP EAX,0x19
0049CEA9  74 39                     JZ 0x0049cee4
0049CEAB  8B CE                     MOV ECX,ESI
0049CEAD  E8 A6 7F F6 FF            CALL 0x00404e58
0049CEB2  85 C0                     TEST EAX,EAX
0049CEB4  75 08                     JNZ 0x0049cebe
0049CEB6  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0049CEB9  50                        PUSH EAX
0049CEBA  6A 03                     PUSH 0x3
0049CEBC  EB 4B                     JMP 0x0049cf09
LAB_0049cebe:
0049CEBE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049CEC1  85 C0                     TEST EAX,EAX
0049CEC3  75 10                     JNZ 0x0049ced5
0049CEC5  6A 01                     PUSH 0x1
0049CEC7  6A 02                     PUSH 0x2
0049CEC9  6A 01                     PUSH 0x1
0049CECB  6A 00                     PUSH 0x0
0049CECD  E8 BE 13 21 00            CALL 0x006ae290
0049CED2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0049ced5:
0049CED5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049CED8  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049CEDB  51                        PUSH ECX
0049CEDC  52                        PUSH EDX
0049CEDD  E8 DE 12 21 00            CALL 0x006ae1c0
0049CEE2  EB 2C                     JMP 0x0049cf10
LAB_0049cee4:
0049CEE4  85 FF                     TEST EDI,EDI
0049CEE6  75 11                     JNZ 0x0049cef9
0049CEE8  6A 01                     PUSH 0x1
0049CEEA  6A 02                     PUSH 0x2
0049CEEC  6A 01                     PUSH 0x1
0049CEEE  57                        PUSH EDI
0049CEEF  E8 9C 13 21 00            CALL 0x006ae290
0049CEF4  8B F8                     MOV EDI,EAX
0049CEF6  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
LAB_0049cef9:
0049CEF9  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049CEFC  50                        PUSH EAX
0049CEFD  57                        PUSH EDI
0049CEFE  E8 BD 12 21 00            CALL 0x006ae1c0
0049CF03  8D 4D BC                  LEA ECX,[EBP + -0x44]
0049CF06  51                        PUSH ECX
0049CF07  6A 11                     PUSH 0x11
LAB_0049cf09:
0049CF09  8B CE                     MOV ECX,ESI
0049CF0B  E8 16 52 F6 FF            CALL 0x00402126
LAB_0049cf10:
0049CF10  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049CF13  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049CF16  42                        INC EDX
0049CF17  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0049CF1A  81 E2 FF FF 00 00         AND EDX,0xffff
0049CF20  3B D0                     CMP EDX,EAX
0049CF22  0F 82 14 FF FF FF         JC 0x0049ce3c
LAB_0049cf28:
0049CF28  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0049CF2B  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049CF2E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049CF34  56                        PUSH ESI
0049CF35  57                        PUSH EDI
0049CF36  52                        PUSH EDX
0049CF37  E8 5F 6E F6 FF            CALL 0x00403d9b
0049CF3C  85 FF                     TEST EDI,EDI
0049CF3E  74 06                     JZ 0x0049cf46
0049CF40  57                        PUSH EDI
0049CF41  E8 CA 11 21 00            CALL 0x006ae110
LAB_0049cf46:
0049CF46  85 F6                     TEST ESI,ESI
0049CF48  74 06                     JZ 0x0049cf50
0049CF4A  56                        PUSH ESI
0049CF4B  E8 C0 11 21 00            CALL 0x006ae110
LAB_0049cf50:
0049CF50  33 FF                     XOR EDI,EDI
LAB_0049cf52:
0049CF52  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049CF57  33 D2                     XOR EDX,EDX
0049CF59  B9 32 00 00 00            MOV ECX,0x32
0049CF5E  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
0049CF65  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0049CF6B  F7 F1                     DIV ECX
0049CF6D  85 D2                     TEST EDX,EDX
0049CF6F  0F 85 48 01 00 00         JNZ 0x0049d0bd
0049CF75  66 8B 83 76 02 00 00      MOV AX,word ptr [EBX + 0x276]
0049CF7C  66 8B 8B 7A 02 00 00      MOV CX,word ptr [EBX + 0x27a]
0049CF83  66 8B 93 78 02 00 00      MOV DX,word ptr [EBX + 0x278]
0049CF8A  66 3B C7                  CMP AX,DI
0049CF8D  7C 52                     JL 0x0049cfe1
0049CF8F  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0049CF96  7D 49                     JGE 0x0049cfe1
0049CF98  66 3B D7                  CMP DX,DI
0049CF9B  7C 44                     JL 0x0049cfe1
0049CF9D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0049CFA4  7D 3B                     JGE 0x0049cfe1
0049CFA6  66 3B CF                  CMP CX,DI
0049CFA9  7C 36                     JL 0x0049cfe1
0049CFAB  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0049CFB2  7D 2D                     JGE 0x0049cfe1
0049CFB4  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
0049CFBB  0F BF D2                  MOVSX EDX,DX
0049CFBE  0F AF D6                  IMUL EDX,ESI
0049CFC1  0F BF 35 7E B2 7F 00      MOVSX ESI,word ptr [0x007fb27e]
0049CFC8  0F BF C9                  MOVSX ECX,CX
0049CFCB  0F AF CE                  IMUL ECX,ESI
0049CFCE  0F BF C0                  MOVSX EAX,AX
0049CFD1  03 D1                     ADD EDX,ECX
0049CFD3  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0049CFD9  03 D0                     ADD EDX,EAX
0049CFDB  0F BF 04 51               MOVSX EAX,word ptr [ECX + EDX*0x2]
0049CFDF  EB 03                     JMP 0x0049cfe4
LAB_0049cfe1:
0049CFE1  83 C8 FF                  OR EAX,0xffffffff
LAB_0049cfe4:
0049CFE4  3B C7                     CMP EAX,EDI
0049CFE6  74 1A                     JZ 0x0049d002
0049CFE8  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0049CFEE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0049CFF1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049CFF7  8B C7                     MOV EAX,EDI
0049CFF9  5F                        POP EDI
0049CFFA  5E                        POP ESI
0049CFFB  5B                        POP EBX
0049CFFC  8B E5                     MOV ESP,EBP
0049CFFE  5D                        POP EBP
0049CFFF  C2 04 00                  RET 0x4
LAB_0049d002:
0049D002  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049D005  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0049D008  85 C0                     TEST EAX,EAX
0049D00A  0F 86 9F 00 00 00         JBE 0x0049d0af
0049D010  33 D2                     XOR EDX,EDX
LAB_0049d012:
0049D012  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049D015  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049D018  50                        PUSH EAX
0049D019  E8 52 FC 20 00            CALL 0x006acc70
0049D01E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049D021  66 3D FF FF               CMP AX,0xffff
0049D025  74 74                     JZ 0x0049d09b
0049D027  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049D02A  6A 01                     PUSH 0x1
0049D02C  50                        PUSH EAX
0049D02D  51                        PUSH ECX
0049D02E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049D034  E8 81 58 F6 FF            CALL 0x004028ba
0049D039  8B F0                     MOV ESI,EAX
0049D03B  85 F6                     TEST ESI,ESI
0049D03D  75 1B                     JNZ 0x0049d05a
0049D03F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049D045  68 38 09 00 00            PUSH 0x938
0049D04A  68 3C BE 7A 00            PUSH 0x7abe3c
0049D04F  52                        PUSH EDX
0049D050  68 04 00 FE AF            PUSH 0xaffe0004
0049D055  E8 E6 8D 20 00            CALL 0x006a5e40
LAB_0049d05a:
0049D05A  8B 06                     MOV EAX,dword ptr [ESI]
0049D05C  8B CE                     MOV ECX,ESI
0049D05E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049D061  83 F8 0C                  CMP EAX,0xc
0049D064  74 18                     JZ 0x0049d07e
0049D066  8B 16                     MOV EDX,dword ptr [ESI]
0049D068  8B CE                     MOV ECX,ESI
0049D06A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049D06D  83 F8 18                  CMP EAX,0x18
0049D070  74 0C                     JZ 0x0049d07e
0049D072  8B 06                     MOV EAX,dword ptr [ESI]
0049D074  8B CE                     MOV ECX,ESI
0049D076  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049D079  83 F8 19                  CMP EAX,0x19
0049D07C  75 0C                     JNZ 0x0049d08a
LAB_0049d07e:
0049D07E  8B CE                     MOV ECX,ESI
0049D080  E8 57 5E F6 FF            CALL 0x00402edc
0049D085  83 F8 11                  CMP EAX,0x11
0049D088  74 0E                     JZ 0x0049d098
LAB_0049d08a:
0049D08A  6A 11                     PUSH 0x11
0049D08C  8B CE                     MOV ECX,ESI
0049D08E  E8 66 7D F6 FF            CALL 0x00404df9
0049D093  83 F8 01                  CMP EAX,0x1
0049D096  75 03                     JNZ 0x0049d09b
LAB_0049d098:
0049D098  FF 45 EC                  INC dword ptr [EBP + -0x14]
LAB_0049d09b:
0049D09B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049D09E  47                        INC EDI
0049D09F  8B D7                     MOV EDX,EDI
0049D0A1  81 E2 FF FF 00 00         AND EDX,0xffff
0049D0A7  3B D0                     CMP EDX,EAX
0049D0A9  0F 82 63 FF FF FF         JC 0x0049d012
LAB_0049d0af:
0049D0AF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049D0B2  85 C0                     TEST EAX,EAX
0049D0B4  75 07                     JNZ 0x0049d0bd
0049D0B6  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0049d0bd:
0049D0BD  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0049D0C3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049D0C6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049D0CC  5F                        POP EDI
0049D0CD  5E                        POP ESI
0049D0CE  5B                        POP EBX
0049D0CF  8B E5                     MOV ESP,EBP
0049D0D1  5D                        POP EBP
0049D0D2  C2 04 00                  RET 0x4
LAB_0049d0d5:
0049D0D5  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
0049D0DB  68 DC BF 7A 00            PUSH 0x7abfdc
0049D0E0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049D0E5  56                        PUSH ESI
0049D0E6  57                        PUSH EDI
0049D0E7  68 44 09 00 00            PUSH 0x944
0049D0EC  68 3C BE 7A 00            PUSH 0x7abe3c
0049D0F1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049D0F7  E8 D4 03 21 00            CALL 0x006ad4d0
0049D0FC  83 C4 18                  ADD ESP,0x18
0049D0FF  85 C0                     TEST EAX,EAX
0049D101  74 01                     JZ 0x0049d104
0049D103  CC                        INT3
LAB_0049d104:
0049D104  68 45 09 00 00            PUSH 0x945
0049D109  68 3C BE 7A 00            PUSH 0x7abe3c
0049D10E  57                        PUSH EDI
0049D10F  56                        PUSH ESI
0049D110  E8 2B 8D 20 00            CALL 0x006a5e40
0049D115  5F                        POP EDI
0049D116  5E                        POP ESI
0049D117  83 C8 FF                  OR EAX,0xffffffff
0049D11A  5B                        POP EBX
0049D11B  8B E5                     MOV ESP,EBP
0049D11D  5D                        POP EBP
0049D11E  C2 04 00                  RET 0x4
