mfMSprLoad:
00725F50  55                        PUSH EBP
00725F51  8B EC                     MOV EBP,ESP
00725F53  83 EC 74                  SUB ESP,0x74
00725F56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00725F5B  53                        PUSH EBX
00725F5C  56                        PUSH ESI
00725F5D  33 F6                     XOR ESI,ESI
00725F5F  57                        PUSH EDI
00725F60  8D 55 90                  LEA EDX,[EBP + -0x70]
00725F63  8D 4D 8C                  LEA ECX,[EBP + -0x74]
00725F66  56                        PUSH ESI
00725F67  52                        PUSH EDX
00725F68  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00725F6B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00725F6E  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00725F71  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725F77  E8 74 78 00 00            CALL 0x0072d7f0
00725F7C  8B D8                     MOV EBX,EAX
00725F7E  83 C4 08                  ADD ESP,0x8
00725F81  3B DE                     CMP EBX,ESI
00725F83  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
00725F86  0F 85 23 02 00 00         JNZ 0x007261af
00725F8C  33 DB                     XOR EBX,EBX
00725F8E  B8 01 00 00 00            MOV EAX,0x1
00725F93  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00725F96  B9 20 00 00 00            MOV ECX,0x20
LAB_00725f9b:
00725F9B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00725F9E  85 C2                     TEST EDX,EAX
00725FA0  74 01                     JZ 0x00725fa3
00725FA2  43                        INC EBX
LAB_00725fa3:
00725FA3  D1 E0                     SHL EAX,0x1
00725FA5  49                        DEC ECX
00725FA6  75 F3                     JNZ 0x00725f9b
00725FA8  3B DE                     CMP EBX,ESI
00725FAA  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00725FAD  7F 17                     JG 0x00725fc6
00725FAF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00725FB4  68 88 00 00 00            PUSH 0x88
00725FB9  68 8C 0C 7F 00            PUSH 0x7f0c8c
00725FBE  50                        PUSH EAX
00725FBF  6A CC                     PUSH -0x34
00725FC1  E8 7A FE F7 FF            CALL 0x006a5e40
LAB_00725fc6:
00725FC6  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00725FC9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00725FCC  6A 01                     PUSH 0x1
00725FCE  57                        PUSH EDI
00725FCF  56                        PUSH ESI
00725FD0  E8 DB 02 00 00            CALL 0x007262b0
00725FD5  6A 01                     PUSH 0x1
00725FD7  57                        PUSH EDI
00725FD8  56                        PUSH ESI
00725FD9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00725FDC  E8 AF 03 00 00            CALL 0x00726390
00725FE1  8B F0                     MOV ESI,EAX
00725FE3  83 C4 18                  ADD ESP,0x18
00725FE6  3B DE                     CMP EBX,ESI
00725FE8  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
00725FEB  7E 05                     JLE 0x00725ff2
00725FED  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00725FF0  8B D8                     MOV EBX,EAX
LAB_00725ff2:
00725FF2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00725FF5  51                        PUSH ECX
00725FF6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00725FF9  6A 00                     PUSH 0x0
00725FFB  57                        PUSH EDI
00725FFC  6A 08                     PUSH 0x8
00725FFE  E8 DD BC FC FF            CALL 0x006f1ce0
00726003  85 C0                     TEST EAX,EAX
00726005  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00726008  75 18                     JNZ 0x00726022
0072600A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00726010  68 8E 00 00 00            PUSH 0x8e
00726015  68 8C 0C 7F 00            PUSH 0x7f0c8c
0072601A  52                        PUSH EDX
0072601B  6A FC                     PUSH -0x4
0072601D  E8 1E FE F7 FF            CALL 0x006a5e40
LAB_00726022:
00726022  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00726025  0F AF C3                  IMUL EAX,EBX
00726028  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0072602B  8D 4C 00 16               LEA ECX,[EAX + EAX*0x1 + 0x16]
0072602F  51                        PUSH ECX
00726030  E8 DB 4B F8 FF            CALL 0x006aac10
00726035  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
00726039  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072603C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072603F  66 89 50 02               MOV word ptr [EAX + 0x2],DX
00726043  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00726046  6A 01                     PUSH 0x1
00726048  57                        PUSH EDI
00726049  51                        PUSH ECX
0072604A  66 89 18                  MOV word ptr [EAX],BX
0072604D  E8 1E 04 00 00            CALL 0x00726470
00726052  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00726055  6A 01                     PUSH 0x1
00726057  57                        PUSH EDI
00726058  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0072605B  57                        PUSH EDI
0072605C  66 89 42 04               MOV word ptr [EDX + 0x4],AX
00726060  E8 EB 04 00 00            CALL 0x00726550
00726065  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00726068  83 C4 18                  ADD ESP,0x18
0072606B  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00726072  66 89 41 06               MOV word ptr [ECX + 0x6],AX
00726076  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00726079  33 C0                     XOR EAX,EAX
0072607B  3B F0                     CMP ESI,EAX
0072607D  89 7A 08                  MOV dword ptr [EDX + 0x8],EDI
00726080  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00726083  0F 8E FE 00 00 00         JLE 0x00726187
00726089  33 FF                     XOR EDI,EDI
0072608B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0072608E  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00726091  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
LAB_00726094:
00726094  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00726097  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0072609A  85 C8                     TEST EAX,ECX
0072609C  0F 84 C4 00 00 00         JZ 0x00726166
007260A2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007260A5  85 C0                     TEST EAX,EAX
007260A7  0F 8E A9 00 00 00         JLE 0x00726156
007260AD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007260B0  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
007260B3  8D 1C 9B                  LEA EBX,[EBX + EBX*0x4]
007260B6  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
007260B9  8D 04 4E                  LEA EAX,[ESI + ECX*0x2]
007260BC  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
007260BF  D1 E3                     SHL EBX,0x1
007260C1  C1 E0 02                  SHL EAX,0x2
007260C4  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_007260c7:
007260C7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
007260CA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007260CD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007260D0  50                        PUSH EAX
007260D1  51                        PUSH ECX
007260D2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007260D5  8D 44 17 0C               LEA EAX,[EDI + EDX*0x1 + 0xc]
007260D9  50                        PUSH EAX
007260DA  51                        PUSH ECX
007260DB  E8 70 49 FE FF            CALL 0x0070aa50
007260E0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007260E3  83 C4 10                  ADD ESP,0x10
007260E6  89 44 16 12               MOV dword ptr [ESI + EDX*0x1 + 0x12],EAX
007260EA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007260ED  8B 4C 06 12               MOV ECX,dword ptr [ESI + EAX*0x1 + 0x12]
007260F1  85 C9                     TEST ECX,ECX
007260F3  75 18                     JNZ 0x0072610d
007260F5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007260FB  68 9F 00 00 00            PUSH 0x9f
00726100  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726105  51                        PUSH ECX
00726106  6A FC                     PUSH -0x4
00726108  E8 33 FD F7 FF            CALL 0x006a5e40
LAB_0072610d:
0072610D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00726110  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00726113  66 8B 04 17               MOV AX,word ptr [EDI + EDX*0x1]
00726117  66 89 44 0E 0C            MOV word ptr [ESI + ECX*0x1 + 0xc],AX
0072611C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072611F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00726122  66 8B 44 17 04            MOV AX,word ptr [EDI + EDX*0x1 + 0x4]
00726127  66 89 44 0E 0E            MOV word ptr [ESI + ECX*0x1 + 0xe],AX
0072612C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072612F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00726132  66 8B 44 17 08            MOV AX,word ptr [EDI + EDX*0x1 + 0x8]
00726137  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0072613A  66 89 44 0E 10            MOV word ptr [ESI + ECX*0x1 + 0x10],AX
0072613F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00726142  03 FA                     ADD EDI,EDX
00726144  03 F3                     ADD ESI,EBX
00726146  48                        DEC EAX
00726147  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0072614A  0F 85 77 FF FF FF         JNZ 0x007260c7
00726150  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00726153  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
LAB_00726156:
00726156  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00726159  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0072615C  41                        INC ECX
0072615D  83 C0 0A                  ADD EAX,0xa
00726160  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00726163  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_00726166:
00726166  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00726169  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0072616C  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0072616F  83 C7 2C                  ADD EDI,0x2c
00726172  D1 E2                     SHL EDX,0x1
00726174  48                        DEC EAX
00726175  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00726178  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0072617B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0072617E  0F 85 10 FF FF FF         JNZ 0x00726094
00726184  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00726187:
00726187  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072618A  66 8B 45 E4               MOV AX,word ptr [EBP + -0x1c]
0072618E  8D 4D F8                  LEA ECX,[EBP + -0x8]
00726191  51                        PUSH ECX
00726192  8B CF                     MOV ECX,EDI
00726194  66 89 02                  MOV word ptr [EDX],AX
00726197  E8 44 BF FC FF            CALL 0x006f20e0
0072619C  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0072619F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007261A2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007261A8  5F                        POP EDI
007261A9  5E                        POP ESI
007261AA  5B                        POP EBX
007261AB  8B E5                     MOV ESP,EBP
007261AD  5D                        POP EBP
007261AE  C3                        RET
LAB_007261af:
007261AF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007261B2  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
007261B5  8D 4D F8                  LEA ECX,[EBP + -0x8]
007261B8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007261BD  51                        PUSH ECX
007261BE  8B CF                     MOV ECX,EDI
007261C0  E8 1B BF FC FF            CALL 0x006f20e0
007261C5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007261C8  3B C6                     CMP EAX,ESI
007261CA  74 3D                     JZ 0x00726209
007261CC  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
007261D0  0F BF 08                  MOVSX ECX,word ptr [EAX]
007261D3  0F AF D1                  IMUL EDX,ECX
007261D6  85 D2                     TEST EDX,EDX
007261D8  7E 26                     JLE 0x00726200
007261DA  33 DB                     XOR EBX,EBX
LAB_007261dc:
007261DC  8D 54 03 12               LEA EDX,[EBX + EAX*0x1 + 0x12]
007261E0  8B CF                     MOV ECX,EDI
007261E2  52                        PUSH EDX
007261E3  E8 F8 BE FC FF            CALL 0x006f20e0
007261E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007261EB  46                        INC ESI
007261EC  83 C3 0A                  ADD EBX,0xa
007261EF  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
007261F3  0F BF 10                  MOVSX EDX,word ptr [EAX]
007261F6  0F AF CA                  IMUL ECX,EDX
007261F9  3B F1                     CMP ESI,ECX
007261FB  7C DF                     JL 0x007261dc
007261FD  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
LAB_00726200:
00726200  8D 45 FC                  LEA EAX,[EBP + -0x4]
00726203  50                        PUSH EAX
00726204  E8 57 4E F8 FF            CALL 0x006ab060
LAB_00726209:
00726209  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072620C  85 C0                     TEST EAX,EAX
0072620E  75 05                     JNZ 0x00726215
00726210  83 FB FC                  CMP EBX,-0x4
00726213  74 36                     JZ 0x0072624b
LAB_00726215:
00726215  68 B0 0C 7F 00            PUSH 0x7f0cb0
0072621A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0072621F  53                        PUSH EBX
00726220  6A 00                     PUSH 0x0
00726222  68 B6 00 00 00            PUSH 0xb6
00726227  68 8C 0C 7F 00            PUSH 0x7f0c8c
0072622C  E8 9F 72 F8 FF            CALL 0x006ad4d0
00726231  83 C4 18                  ADD ESP,0x18
00726234  85 C0                     TEST EAX,EAX
00726236  74 01                     JZ 0x00726239
00726238  CC                        INT3
LAB_00726239:
00726239  68 B8 00 00 00            PUSH 0xb8
0072623E  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726243  6A 00                     PUSH 0x0
00726245  53                        PUSH EBX
00726246  E8 F5 FB F7 FF            CALL 0x006a5e40
LAB_0072624b:
0072624B  5F                        POP EDI
0072624C  5E                        POP ESI
0072624D  33 C0                     XOR EAX,EAX
0072624F  5B                        POP EBX
00726250  8B E5                     MOV ESP,EBP
00726252  5D                        POP EBP
00726253  C3                        RET
