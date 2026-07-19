FUN_0040fc40:
0040FC40  55                        PUSH EBP
0040FC41  8B EC                     MOV EBP,ESP
0040FC43  6A FF                     PUSH -0x1
0040FC45  68 60 00 79 00            PUSH 0x790060
0040FC4A  68 64 D9 72 00            PUSH 0x72d964
0040FC4F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0040FC55  50                        PUSH EAX
0040FC56  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0040FC5D  81 EC 18 01 00 00         SUB ESP,0x118
0040FC63  53                        PUSH EBX
0040FC64  56                        PUSH ESI
0040FC65  57                        PUSH EDI
0040FC66  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040FC69  33 DB                     XOR EBX,EBX
0040FC6B  89 5D B4                  MOV dword ptr [EBP + -0x4c],EBX
0040FC6E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0040FC71  3B C3                     CMP EAX,EBX
0040FC73  75 69                     JNZ 0x0040fcde
0040FC75  8B 15 20 4D 7F 00         MOV EDX,dword ptr [0x007f4d20]
0040FC7B  81 FA C8 00 00 00         CMP EDX,0xc8
0040FC81  7E 0A                     JLE 0x0040fc8d
0040FC83  B8 FC FF FF FF            MOV EAX,0xfffffffc
0040FC88  E9 93 0D 00 00            JMP 0x00410a20
LAB_0040fc8d:
0040FC8D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0040FC90  3B FB                     CMP EDI,EBX
0040FC92  0F 8C 04 0D 00 00         JL 0x0041099c
0040FC98  3B 3D 2C 4D 7F 00         CMP EDI,dword ptr [0x007f4d2c]
0040FC9E  0F 8D F8 0C 00 00         JGE 0x0041099c
0040FCA4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0040FCA7  3B F3                     CMP ESI,EBX
0040FCA9  0F 8C ED 0C 00 00         JL 0x0041099c
0040FCAF  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
0040FCB4  3B F0                     CMP ESI,EAX
0040FCB6  0F 8D E0 0C 00 00         JGE 0x0041099c
0040FCBC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0040FCBF  3B CB                     CMP ECX,EBX
0040FCC1  0F 8C D5 0C 00 00         JL 0x0041099c
0040FCC7  3B 0D 34 4D 7F 00         CMP ECX,dword ptr [0x007f4d34]
0040FCCD  0F 8D C9 0C 00 00         JGE 0x0041099c
0040FCD3  89 1D 14 4D 7F 00         MOV dword ptr [0x007f4d14],EBX
0040FCD9  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0040FCDC  EB 11                     JMP 0x0040fcef
LAB_0040fcde:
0040FCDE  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0040FCE1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0040FCE4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0040FCE7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0040FCEA  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
LAB_0040fcef:
0040FCEF  33 D2                     XOR EDX,EDX
0040FCF1  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0040FCF4  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0040FCF7  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0040FCFA  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0040FCFD  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0040FD00  0F AF 05 2C 4D 7F 00      IMUL EAX,dword ptr [0x007f4d2c]
0040FD07  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0040FD0A  33 C0                     XOR EAX,EAX
0040FD0C  39 1D 24 4D 7F 00         CMP dword ptr [0x007f4d24],EBX
0040FD12  0F 9F C0                  SETG AL
0040FD15  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0040FD18  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0040FD1B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0040FD1E  3B C3                     CMP EAX,EBX
0040FD20  7E 1C                     JLE 0x0040fd3e
0040FD22  8B 15 38 4D 7F 00         MOV EDX,dword ptr [0x007f4d38]
0040FD28  0F AF D0                  IMUL EDX,EAX
0040FD2B  C1 FA 10                  SAR EDX,0x10
0040FD2E  2B FA                     SUB EDI,EDX
0040FD30  8B 15 28 4D 7F 00         MOV EDX,dword ptr [0x007f4d28]
0040FD36  0F AF D0                  IMUL EDX,EAX
0040FD39  C1 FA 10                  SAR EDX,0x10
0040FD3C  03 F2                     ADD ESI,EDX
LAB_0040fd3e:
0040FD3E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0040FD41  8B 1C C5 88 4B 7A 00      MOV EBX,dword ptr [EAX*0x8 + 0x7a4b88]
0040FD48  89 5D 88                  MOV dword ptr [EBP + -0x78],EBX
0040FD4B  8B 04 C5 8C 4B 7A 00      MOV EAX,dword ptr [EAX*0x8 + 0x7a4b8c]
0040FD52  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0040FD55  8B D0                     MOV EDX,EAX
0040FD57  0F AF D3                  IMUL EDX,EBX
0040FD5A  3B 15 20 4D 7F 00         CMP EDX,dword ptr [0x007f4d20]
0040FD60  7D 08                     JGE 0x0040fd6a
0040FD62  B8 05 00 00 00            MOV EAX,0x5
0040FD67  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0040fd6a:
0040FD6A  8B D0                     MOV EDX,EAX
0040FD6C  0F AF D3                  IMUL EDX,EBX
0040FD6F  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
0040FD75  99                        CDQ
0040FD76  2B C2                     SUB EAX,EDX
0040FD78  D1 F8                     SAR EAX,0x1
0040FD7A  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0040FD7D  83 FA 05                  CMP EDX,0x5
0040FD80  7C 0A                     JL 0x0040fd8c
0040FD82  B9 04 00 00 00            MOV ECX,0x4
0040FD87  2B C8                     SUB ECX,EAX
0040FD89  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_0040fd8c:
0040FD8C  8B D1                     MOV EDX,ECX
0040FD8E  2B D0                     SUB EDX,EAX
0040FD90  79 05                     JNS 0x0040fd97
0040FD92  8B C8                     MOV ECX,EAX
0040FD94  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_0040fd97:
0040FD97  2B C8                     SUB ECX,EAX
0040FD99  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
0040FD9F  8D 04 BD 02 00 00 00      LEA EAX,[EDI*0x4 + 0x2]
0040FDA6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0040FDA9  8D 0C B5 02 00 00 00      LEA ECX,[ESI*0x4 + 0x2]
0040FDB0  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0040FDB3  8B C3                     MOV EAX,EBX
0040FDB5  99                        CDQ
0040FDB6  83 E2 07                  AND EDX,0x7
0040FDB9  03 C2                     ADD EAX,EDX
0040FDBB  C1 F8 03                  SAR EAX,0x3
0040FDBE  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0040FDC1  75 07                     JNZ 0x0040fdca
0040FDC3  C7 45 A8 01 00 00 00      MOV dword ptr [EBP + -0x58],0x1
LAB_0040fdca:
0040FDCA  8B 15 28 4D 7F 00         MOV EDX,dword ptr [0x007f4d28]
0040FDD0  8D 3C 95 00 00 00 00      LEA EDI,[EDX*0x4 + 0x0]
0040FDD7  A1 38 4D 7F 00            MOV EAX,[0x007f4d38]
0040FDDC  8D 34 85 00 00 00 00      LEA ESI,[EAX*0x4 + 0x0]
0040FDE3  8B C6                     MOV EAX,ESI
0040FDE5  99                        CDQ
0040FDE6  8B C8                     MOV ECX,EAX
0040FDE8  33 CA                     XOR ECX,EDX
0040FDEA  2B CA                     SUB ECX,EDX
0040FDEC  8B C7                     MOV EAX,EDI
0040FDEE  99                        CDQ
0040FDEF  33 C2                     XOR EAX,EDX
0040FDF1  2B C2                     SUB EAX,EDX
0040FDF3  3B C1                     CMP EAX,ECX
0040FDF5  7C 2E                     JL 0x0040fe25
0040FDF7  50                        PUSH EAX
0040FDF8  56                        PUSH ESI
0040FDF9  E8 12 B8 2C 00            CALL 0x006db610
0040FDFE  8B F0                     MOV ESI,EAX
0040FE00  C1 E6 02                  SHL ESI,0x2
0040FE03  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
0040FE09  33 C9                     XOR ECX,ECX
0040FE0B  85 FF                     TEST EDI,EDI
0040FE0D  0F 9E C1                  SETLE CL
0040FE10  49                        DEC ECX
0040FE11  81 E1 00 00 08 00         AND ECX,0x80000
0040FE17  81 C1 00 00 FC FF         ADD ECX,0xfffc0000
0040FE1D  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
0040FE23  EB 2E                     JMP 0x0040fe53
LAB_0040fe25:
0040FE25  51                        PUSH ECX
0040FE26  57                        PUSH EDI
0040FE27  E8 E4 B7 2C 00            CALL 0x006db610
0040FE2C  8B C8                     MOV ECX,EAX
0040FE2E  C1 E1 02                  SHL ECX,0x2
0040FE31  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
0040FE37  33 D2                     XOR EDX,EDX
0040FE39  85 F6                     TEST ESI,ESI
0040FE3B  0F 9E C2                  SETLE DL
0040FE3E  4A                        DEC EDX
0040FE3F  81 E2 00 00 08 00         AND EDX,0x80000
0040FE45  81 C2 00 00 FC FF         ADD EDX,0xfffc0000
0040FE4B  8B F2                     MOV ESI,EDX
0040FE4D  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
LAB_0040fe53:
0040FE53  8B C3                     MOV EAX,EBX
0040FE55  99                        CDQ
0040FE56  2B C2                     SUB EAX,EDX
0040FE58  D1 F8                     SAR EAX,0x1
0040FE5A  F7 D8                     NEG EAX
0040FE5C  8B D0                     MOV EDX,EAX
0040FE5E  0F AF D1                  IMUL EDX,ECX
0040FE61  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
0040FE64  0F AF C6                  IMUL EAX,ESI
0040FE67  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0040FE6D  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
LAB_0040fe73:
0040FE73  C7 45 80 00 00 00 00      MOV dword ptr [EBP + -0x80],0x0
0040FE7A  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
0040FE80  3B 45 D8                  CMP EAX,dword ptr [EBP + -0x28]
0040FE83  0F 8E 85 01 00 00         JLE 0x0041000e
0040FE89  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0040FE8C  85 C0                     TEST EAX,EAX
0040FE8E  0F 84 7A 01 00 00         JZ 0x0041000e
0040FE94  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0040FE97  85 C0                     TEST EAX,EAX
0040FE99  75 50                     JNZ 0x0040feeb
0040FE9B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0040FEA2  8B 5D 88                  MOV EBX,dword ptr [EBP + -0x78]
0040FEA5  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0040FEA8  83 C0 03                  ADD EAX,0x3
0040FEAB  24 FC                     AND AL,0xfc
0040FEAD  E8 8E DB 31 00            CALL 0x0072da40
0040FEB2  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040FEB5  8B C4                     MOV EAX,ESP
0040FEB7  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0040FEBA  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0040FEC1  EB 2B                     JMP 0x0040feee
LAB_0040feeb:
0040FEEB  8B 5D 88                  MOV EBX,dword ptr [EBP + -0x78]
LAB_0040feee:
0040FEEE  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
0040FEF1  33 C0                     XOR EAX,EAX
0040FEF3  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0040FEF6  8B D1                     MOV EDX,ECX
0040FEF8  C1 E9 02                  SHR ECX,0x2
0040FEFB  F3 AB                     STOSD.REP ES:EDI
0040FEFD  8B CA                     MOV ECX,EDX
0040FEFF  83 E1 03                  AND ECX,0x3
0040FF02  F3 AA                     STOSB.REP ES:EDI
0040FF04  33 D2                     XOR EDX,EDX
0040FF06  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
0040FF09  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0040FF0C  85 C0                     TEST EAX,EAX
0040FF0E  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
0040FF14  0F 8E F4 00 00 00         JLE 0x0041000e
LAB_0040ff1a:
0040FF1A  8B C2                     MOV EAX,EDX
0040FF1C  0F AF C3                  IMUL EAX,EBX
0040FF1F  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0040FF22  33 FF                     XOR EDI,EDI
0040FF24  85 DB                     TEST EBX,EBX
0040FF26  0F 8E D5 00 00 00         JLE 0x00410001
0040FF2C  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0040FF32  8D 88 00 80 00 00         LEA ECX,[EAX + 0x8000]
0040FF38  89 8D 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],ECX
0040FF3E  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0040FF41  05 00 80 00 00            ADD EAX,0x8000
0040FF46  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
LAB_0040ff4c:
0040FF4C  C1 F8 10                  SAR EAX,0x10
0040FF4F  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
0040FF52  C1 F8 02                  SAR EAX,0x2
0040FF55  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0040FF58  C1 F9 10                  SAR ECX,0x10
0040FF5B  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
0040FF5E  C1 F9 02                  SAR ECX,0x2
0040FF61  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
0040FF64  85 C0                     TEST EAX,EAX
0040FF66  7C 69                     JL 0x0040ffd1
0040FF68  3B C6                     CMP EAX,ESI
0040FF6A  7D 65                     JGE 0x0040ffd1
0040FF6C  85 C9                     TEST ECX,ECX
0040FF6E  7C 61                     JL 0x0040ffd1
0040FF70  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
0040FF76  7D 59                     JGE 0x0040ffd1
0040FF78  8B 9D 64 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff64]
0040FF7E  03 D3                     ADD EDX,EBX
0040FF80  0F AF 55 BC               IMUL EDX,dword ptr [EBP + -0x44]
0040FF84  0F AF F1                  IMUL ESI,ECX
0040FF87  03 C2                     ADD EAX,EDX
0040FF89  03 F0                     ADD ESI,EAX
0040FF8B  89 B5 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ESI
0040FF91  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0040FF97  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
0040FF9D  80 F2 07                  XOR DL,0x7
0040FFA0  33 C0                     XOR EAX,EAX
0040FFA2  0F A3 11                  BT [ECX],EDX
0040FFA5  D0 D0                     RCL AL,0x1
0040FFA7  85 C0                     TEST EAX,EAX
0040FFA9  74 1D                     JZ 0x0040ffc8
0040FFAB  FF 45 80                  INC dword ptr [EBP + -0x80]
0040FFAE  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0040FFB1  8B D3                     MOV EDX,EBX
0040FFB3  03 CA                     ADD ECX,EDX
0040FFB5  8D 44 8D C0               LEA EAX,[EBP + ECX*0x4 + -0x40]
0040FFB9  FF 00                     INC dword ptr [EAX]
0040FFBB  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0040FFBE  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
0040FFC1  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040FFC4  C6 04 11 01               MOV byte ptr [ECX + EDX*0x1],0x1
LAB_0040ffc8:
0040FFC8  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
0040FFCE  8B 5D 88                  MOV EBX,dword ptr [EBP + -0x78]
LAB_0040ffd1:
0040FFD1  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
0040FFD7  03 85 58 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff58]
0040FFDD  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
0040FFE3  8B 8D 14 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff14]
0040FFE9  03 8D 78 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff78]
0040FFEF  89 8D 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],ECX
0040FFF5  47                        INC EDI
0040FFF6  3B FB                     CMP EDI,EBX
0040FFF8  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0040FFFB  0F 8C 4B FF FF FF         JL 0x0040ff4c
LAB_00410001:
00410001  42                        INC EDX
00410002  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
00410005  3B 55 E4                  CMP EDX,dword ptr [EBP + -0x1c]
00410008  0F 8C 0C FF FF FF         JL 0x0040ff1a
LAB_0041000e:
0041000E  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00410011  39 85 5C FF FF FF         CMP dword ptr [EBP + 0xffffff5c],EAX
00410017  0F 8E 2C 08 00 00         JLE 0x00410849
0041001D  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
00410020  8D 0C 38                  LEA ECX,[EAX + EDI*0x1]
00410023  39 8D 5C FF FF FF         CMP dword ptr [EBP + 0xffffff5c],ECX
00410029  0F 8F 9E 01 00 00         JG 0x004101cd
0041002F  C7 45 8C 00 00 00 00      MOV dword ptr [EBP + -0x74],0x0
00410036  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00410039  85 C0                     TEST EAX,EAX
0041003B  0F 8E 08 08 00 00         JLE 0x00410849
LAB_00410041:
00410041  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00410044  85 C0                     TEST EAX,EAX
00410046  0F 8E 6C 01 00 00         JLE 0x004101b8
0041004C  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
00410052  81 C2 00 80 00 00         ADD EDX,0x8000
00410058  89 95 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EDX
0041005E  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00410061  05 00 80 00 00            ADD EAX,0x8000
00410066  89 85 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EAX
0041006C  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0041006F  89 8D 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],ECX
00410075  8B 9D 64 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff64]
LAB_0041007b:
0041007B  8B 85 08 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff08]
00410081  C1 F8 10                  SAR EAX,0x10
00410084  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
00410087  C1 F8 02                  SAR EAX,0x2
0041008A  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0041008D  8B 8D 0C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff0c]
00410093  C1 F9 10                  SAR ECX,0x10
00410096  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
00410099  C1 F9 02                  SAR ECX,0x2
0041009C  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
0041009F  85 C0                     TEST EAX,EAX
004100A1  7C 17                     JL 0x004100ba
004100A3  3B C6                     CMP EAX,ESI
004100A5  7D 13                     JGE 0x004100ba
004100A7  85 C9                     TEST ECX,ECX
004100A9  7C 0F                     JL 0x004100ba
004100AB  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
004100B1  7D 07                     JGE 0x004100ba
004100B3  BF 01 00 00 00            MOV EDI,0x1
004100B8  EB 02                     JMP 0x004100bc
LAB_004100ba:
004100BA  33 FF                     XOR EDI,EDI
LAB_004100bc:
004100BC  85 FF                     TEST EDI,EDI
004100BE  74 3D                     JZ 0x004100fd
004100C0  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
004100C3  03 D3                     ADD EDX,EBX
004100C5  0F AF 55 BC               IMUL EDX,dword ptr [EBP + -0x44]
004100C9  0F AF F1                  IMUL ESI,ECX
004100CC  03 C2                     ADD EAX,EDX
004100CE  03 F0                     ADD ESI,EAX
004100D0  89 B5 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ESI
004100D6  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
004100DC  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004100E2  80 F2 07                  XOR DL,0x7
004100E5  33 C0                     XOR EAX,EAX
004100E7  0F A3 11                  BT [ECX],EDX
004100EA  D0 D0                     RCL AL,0x1
004100EC  85 C0                     TEST EAX,EAX
004100EE  0F 85 94 00 00 00         JNZ 0x00410188
004100F4  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004100F7  8B 9D 64 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff64]
LAB_004100fd:
004100FD  8B 0D 14 4D 7F 00         MOV ECX,dword ptr [0x007f4d14]
00410103  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00410106  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0041010C  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
0041010F  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
00410114  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00410117  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0041011D  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00410120  89 54 81 04               MOV dword ptr [ECX + EAX*0x4 + 0x4],EDX
00410124  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00410127  8D 0C 18                  LEA ECX,[EAX + EBX*0x1]
0041012A  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
0041012F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00410132  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
00410137  89 4C 90 08               MOV dword ptr [EAX + EDX*0x4 + 0x8],ECX
0041013B  FF 05 14 4D 7F 00         INC dword ptr [0x007f4d14]
00410141  FF 4D D8                  DEC dword ptr [EBP + -0x28]
00410144  85 FF                     TEST EDI,EDI
00410146  74 46                     JZ 0x0041018e
00410148  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0041014B  03 CB                     ADD ECX,EBX
0041014D  0F AF 4D BC               IMUL ECX,dword ptr [EBP + -0x44]
00410151  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
00410157  0F AF 55 98               IMUL EDX,dword ptr [EBP + -0x68]
0041015B  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0041015E  03 C1                     ADD EAX,ECX
00410160  03 D0                     ADD EDX,EAX
00410162  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
00410168  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
0041016E  89 8D 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],ECX
00410174  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
0041017A  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
00410180  80 F2 07                  XOR DL,0x7
00410183  0F AB 11                  BTS [ECX],EDX
00410186  EB 06                     JMP 0x0041018e
LAB_00410188:
00410188  8B 9D 64 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff64]
LAB_0041018e:
0041018E  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
00410194  01 95 08 FF FF FF         ADD dword ptr [EBP + 0xffffff08],EDX
0041019A  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
004101A0  01 85 0C FF FF FF         ADD dword ptr [EBP + 0xffffff0c],EAX
004101A6  FF 8D 04 FF FF FF         DEC dword ptr [EBP + 0xffffff04]
004101AC  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
004101B2  0F 85 C3 FE FF FF         JNZ 0x0041007b
LAB_004101b8:
004101B8  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
004101BB  40                        INC EAX
004101BC  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
004101BF  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
004101C2  0F 8C 79 FE FF FF         JL 0x00410041
004101C8  E9 7C 06 00 00            JMP 0x00410849
LAB_004101cd:
004101CD  85 C0                     TEST EAX,EAX
004101CF  0F 8E E6 01 00 00         JLE 0x004103bb
004101D5  33 C0                     XOR EAX,EAX
004101D7  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
004101DA  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004101DD  85 C9                     TEST ECX,ECX
004101DF  7E 37                     JLE 0x00410218
004101E1  8B 5D 88                  MOV EBX,dword ptr [EBP + -0x78]
LAB_004101e4:
004101E4  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
004101EA  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004101ED  39 5C 95 C0               CMP dword ptr [EBP + EDX*0x4 + -0x40],EBX
004101F1  7D 1C                     JGE 0x0041020f
004101F3  6A 00                     PUSH 0x0
004101F5  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004101F8  51                        PUSH ECX
004101F9  53                        PUSH EBX
004101FA  0F AF C3                  IMUL EAX,EBX
004101FD  03 45 E0                  ADD EAX,dword ptr [EBP + -0x20]
00410200  50                        PUSH EAX
00410201  E8 CA F2 FF FF            CALL 0x0040f4d0
00410206  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00410209  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
LAB_0041020f:
0041020F  40                        INC EAX
00410210  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00410213  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
00410216  7C CC                     JL 0x004101e4
LAB_00410218:
00410218  85 FF                     TEST EDI,EDI
0041021A  0F 8E 22 06 00 00         JLE 0x00410842
00410220  89 BD 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EDI
00410226  8B 9D 68 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff68]
LAB_0041022c:
0041022C  B8 30 75 00 00            MOV EAX,0x7530
00410231  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00410237  33 F6                     XOR ESI,ESI
00410239  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
0041023C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0041023F  85 C9                     TEST ECX,ECX
00410241  7E 6C                     JLE 0x004102af
00410243  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00410249  8D 4C 95 C0               LEA ECX,[EBP + EDX*0x4 + -0x40]
0041024D  89 8D FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],ECX
LAB_00410253:
00410253  8B 95 FC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffefc]
00410259  8B 3A                     MOV EDI,dword ptr [EDX]
0041025B  3B C7                     CMP EAX,EDI
0041025D  7F 2E                     JG 0x0041028d
0041025F  75 3E                     JNZ 0x0041029f
00410261  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00410264  99                        CDQ
00410265  2B C2                     SUB EAX,EDX
00410267  8B C8                     MOV ECX,EAX
00410269  D1 F9                     SAR ECX,0x1
0041026B  8B C1                     MOV EAX,ECX
0041026D  2B C6                     SUB EAX,ESI
0041026F  99                        CDQ
00410270  33 C2                     XOR EAX,EDX
00410272  2B C2                     SUB EAX,EDX
00410274  89 85 F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EAX
0041027A  8B C1                     MOV EAX,ECX
0041027C  2B C3                     SUB EAX,EBX
0041027E  99                        CDQ
0041027F  33 C2                     XOR EAX,EDX
00410281  2B C2                     SUB EAX,EDX
00410283  8B 8D F8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef8]
00410289  3B C1                     CMP EAX,ECX
0041028B  7E 0C                     JLE 0x00410299
LAB_0041028d:
0041028D  8B C7                     MOV EAX,EDI
0041028F  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00410295  8B DE                     MOV EBX,ESI
00410297  EB 06                     JMP 0x0041029f
LAB_00410299:
00410299  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
LAB_0041029f:
0041029F  46                        INC ESI
004102A0  83 85 FC FE FF FF 04      ADD dword ptr [EBP + 0xfffffefc],0x4
004102A7  3B 75 E4                  CMP ESI,dword ptr [EBP + -0x1c]
004102AA  7C A7                     JL 0x00410253
004102AC  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
LAB_004102af:
004102AF  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
004102B5  8D 3C 13                  LEA EDI,[EBX + EDX*0x1]
004102B8  FF 44 BD C0               INC dword ptr [EBP + EDI*0x4 + -0x40]
004102BC  6A 00                     PUSH 0x0
004102BE  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004102C1  50                        PUSH EAX
004102C2  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
004102C5  50                        PUSH EAX
004102C6  8B CB                     MOV ECX,EBX
004102C8  0F AF C8                  IMUL ECX,EAX
004102CB  03 4D E0                  ADD ECX,dword ptr [EBP + -0x20]
004102CE  51                        PUSH ECX
004102CF  E8 6C F5 FF FF            CALL 0x0040f840
004102D4  8B D0                     MOV EDX,EAX
004102D6  0F AF 95 58 FF FF FF      IMUL EDX,dword ptr [EBP + 0xffffff58]
004102DD  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
004102E0  8D 8C 0A 00 80 00 00      LEA ECX,[EDX + ECX*0x1 + 0x8000]
004102E7  C1 F9 10                  SAR ECX,0x10
004102EA  03 4D 08                  ADD ECX,dword ptr [EBP + 0x8]
004102ED  C1 F9 02                  SAR ECX,0x2
004102F0  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
004102F3  0F AF 85 78 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff78]
004102FA  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
00410300  8D 84 10 00 80 00 00      LEA EAX,[EAX + EDX*0x1 + 0x8000]
00410307  C1 F8 10                  SAR EAX,0x10
0041030A  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
0041030D  C1 F8 02                  SAR EAX,0x2
00410310  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00410313  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
00410318  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0041031B  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
00410320  89 0C 90                  MOV dword ptr [EAX + EDX*0x4],ECX
00410323  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
00410328  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0041032B  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00410331  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00410334  89 44 8A 04               MOV dword ptr [EDX + ECX*0x4 + 0x4],EAX
00410338  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
0041033D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00410340  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00410346  89 7C 8A 08               MOV dword ptr [EDX + ECX*0x4 + 0x8],EDI
0041034A  FF 05 14 4D 7F 00         INC dword ptr [0x007f4d14]
00410350  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00410353  85 C0                     TEST EAX,EAX
00410355  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
0041035B  7C 47                     JL 0x004103a4
0041035D  3B C6                     CMP EAX,ESI
0041035F  7D 43                     JGE 0x004103a4
00410361  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00410364  85 C9                     TEST ECX,ECX
00410366  7C 3C                     JL 0x004103a4
00410368  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
0041036E  7D 34                     JGE 0x004103a4
00410370  0F AF 7D BC               IMUL EDI,dword ptr [EBP + -0x44]
00410374  0F AF F1                  IMUL ESI,ECX
00410377  03 C7                     ADD EAX,EDI
00410379  03 F0                     ADD ESI,EAX
0041037B  89 B5 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],ESI
00410381  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00410386  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
0041038C  8B 8D 3C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff3c]
00410392  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
00410398  80 F2 07                  XOR DL,0x7
0041039B  0F AB 11                  BTS [ECX],EDX
0041039E  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
LAB_004103a4:
004103A4  FF 8D 00 FF FF FF         DEC dword ptr [EBP + 0xffffff00]
004103AA  0F 85 7C FE FF FF         JNZ 0x0041022c
004103B0  89 9D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EBX
004103B6  E9 87 04 00 00            JMP 0x00410842
LAB_004103bb:
004103BB  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
004103BE  8B C1                     MOV EAX,ECX
004103C0  99                        CDQ
004103C1  2B C2                     SUB EAX,EDX
004103C3  D1 F8                     SAR EAX,0x1
004103C5  3B F8                     CMP EDI,EAX
004103C7  0F 8F 43 01 00 00         JG 0x00410510
004103CD  8B 5D 84                  MOV EBX,dword ptr [EBP + -0x7c]
004103D0  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
004103D6  2B DA                     SUB EBX,EDX
004103D8  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
004103DE  2B 85 78 FF FF FF         SUB EAX,dword ptr [EBP + 0xffffff78]
004103E4  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
004103E7  8D 41 01                  LEA EAX,[ECX + 0x1]
004103EA  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
004103F0  8D 4F 01                  LEA ECX,[EDI + 0x1]
004103F3  0F AF C2                  IMUL EAX,EDX
004103F6  99                        CDQ
004103F7  F7 F9                     IDIV ECX
004103F9  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
004103FF  8B 85 F4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef4]
00410405  0F AF 85 78 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff78]
0041040C  99                        CDQ
0041040D  F7 F9                     IDIV ECX
0041040F  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
00410415  85 FF                     TEST EDI,EDI
00410417  0F 8E 25 04 00 00         JLE 0x00410842
0041041D  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00410420  81 C1 00 80 00 00         ADD ECX,0x8000
00410426  81 C3 00 80 00 00         ADD EBX,0x8000
0041042C  89 BD F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EDI
00410432  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_00410435:
00410435  03 9D 58 FF FF FF         ADD EBX,dword ptr [EBP + 0xffffff58]
0041043B  03 8D 78 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff78]
00410441  89 8D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],ECX
00410447  8B C3                     MOV EAX,EBX
00410449  C1 F8 10                  SAR EAX,0x10
0041044C  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
0041044F  C1 F8 02                  SAR EAX,0x2
00410452  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00410455  8B D1                     MOV EDX,ECX
00410457  C1 FA 10                  SAR EDX,0x10
0041045A  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
0041045D  C1 FA 02                  SAR EDX,0x2
00410460  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00410463  8B 15 14 4D 7F 00         MOV EDX,dword ptr [0x007f4d14]
00410469  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0041046C  8B 35 3C 4D 7F 00         MOV ESI,dword ptr [0x007f4d3c]
00410472  89 04 96                  MOV dword ptr [ESI + EDX*0x4],EAX
00410475  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
0041047A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0041047D  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00410483  8B 75 98                  MOV ESI,dword ptr [EBP + -0x68]
00410486  89 74 82 04               MOV dword ptr [EDX + EAX*0x4 + 0x4],ESI
0041048A  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
0041048F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00410492  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00410498  89 7C 82 08               MOV dword ptr [EDX + EAX*0x4 + 0x8],EDI
0041049C  FF 05 14 4D 7F 00         INC dword ptr [0x007f4d14]
004104A2  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004104A5  85 C0                     TEST EAX,EAX
004104A7  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
004104AD  7C 50                     JL 0x004104ff
004104AF  3B C6                     CMP EAX,ESI
004104B1  7D 4C                     JGE 0x004104ff
004104B3  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
004104B6  85 D2                     TEST EDX,EDX
004104B8  7C 45                     JL 0x004104ff
004104BA  3B 15 30 4D 7F 00         CMP EDX,dword ptr [0x007f4d30]
004104C0  7D 3D                     JGE 0x004104ff
004104C2  0F AF F2                  IMUL ESI,EDX
004104C5  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004104C8  0F AF CF                  IMUL ECX,EDI
004104CB  03 C6                     ADD EAX,ESI
004104CD  03 C8                     ADD ECX,EAX
004104CF  89 8D 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],ECX
004104D5  8B 15 FC 4C 7F 00         MOV EDX,dword ptr [0x007f4cfc]
004104DB  89 95 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EDX
004104E1  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
004104E7  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
004104ED  80 F2 07                  XOR DL,0x7
004104F0  0F AB 11                  BTS [ECX],EDX
004104F3  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
004104F9  8B 8D EC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeec]
LAB_004104ff:
004104FF  FF 8D F0 FE FF FF         DEC dword ptr [EBP + 0xfffffef0]
00410505  0F 85 2A FF FF FF         JNZ 0x00410435
0041050B  E9 32 03 00 00            JMP 0x00410842
LAB_00410510:
00410510  3B F9                     CMP EDI,ECX
00410512  0F 8F 66 01 00 00         JG 0x0041067e
00410518  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0041051B  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
00410521  2B CA                     SUB ECX,EDX
00410523  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
00410529  2B 85 78 FF FF FF         SUB EAX,dword ptr [EBP + 0xffffff78]
0041052F  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00410532  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00410535  40                        INC EAX
00410536  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
0041053C  8D 5F 01                  LEA EBX,[EDI + 0x1]
0041053F  0F AF C2                  IMUL EAX,EDX
00410542  99                        CDQ
00410543  F7 FB                     IDIV EBX
00410545  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0041054B  8B 85 F4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef4]
00410551  0F AF 85 78 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff78]
00410558  99                        CDQ
00410559  F7 FB                     IDIV EBX
0041055B  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
00410561  C7 85 70 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x0
0041056B  85 FF                     TEST EDI,EDI
0041056D  0F 8E CF 02 00 00         JLE 0x00410842
00410573  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00410576  8D 9A 00 80 00 00         LEA EBX,[EDX + 0x8000]
0041057C  8D B9 00 80 00 00         LEA EDI,[ECX + 0x8000]
00410582  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
LAB_00410588:
00410588  8B C1                     MOV EAX,ECX
0041058A  83 E0 07                  AND EAX,0x7
0041058D  8B 14 85 D8 4B 7A 00      MOV EDX,dword ptr [EAX*0x4 + 0x7a4bd8]
00410594  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
00410597  03 BD 58 FF FF FF         ADD EDI,dword ptr [EBP + 0xffffff58]
0041059D  03 9D 78 FF FF FF         ADD EBX,dword ptr [EBP + 0xffffff78]
004105A3  8B C7                     MOV EAX,EDI
004105A5  C1 F8 10                  SAR EAX,0x10
004105A8  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
004105AB  C1 F8 02                  SAR EAX,0x2
004105AE  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
004105B1  8B D3                     MOV EDX,EBX
004105B3  C1 FA 10                  SAR EDX,0x10
004105B6  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
004105B9  C1 FA 02                  SAR EDX,0x2
004105BC  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
004105BF  8B 15 14 4D 7F 00         MOV EDX,dword ptr [0x007f4d14]
004105C5  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004105C8  8B 35 3C 4D 7F 00         MOV ESI,dword ptr [0x007f4d3c]
004105CE  89 04 96                  MOV dword ptr [ESI + EDX*0x4],EAX
004105D1  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
004105D6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004105D9  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004105DF  8B 75 98                  MOV ESI,dword ptr [EBP + -0x68]
004105E2  89 74 82 04               MOV dword ptr [EDX + EAX*0x4 + 0x4],ESI
004105E6  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
004105E9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004105EC  03 D0                     ADD EDX,EAX
004105EE  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
004105F3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004105F6  8B 35 3C 4D 7F 00         MOV ESI,dword ptr [0x007f4d3c]
004105FC  89 54 86 08               MOV dword ptr [ESI + EAX*0x4 + 0x8],EDX
00410600  FF 05 14 4D 7F 00         INC dword ptr [0x007f4d14]
00410606  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00410609  85 C0                     TEST EAX,EAX
0041060B  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
00410611  7C 56                     JL 0x00410669
00410613  3B C6                     CMP EAX,ESI
00410615  7D 52                     JGE 0x00410669
00410617  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0041061A  85 D2                     TEST EDX,EDX
0041061C  7C 4B                     JL 0x00410669
0041061E  3B 15 30 4D 7F 00         CMP EDX,dword ptr [0x007f4d30]
00410624  7D 43                     JGE 0x00410669
00410626  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
00410629  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0041062C  03 CA                     ADD ECX,EDX
0041062E  0F AF 4D BC               IMUL ECX,dword ptr [EBP + -0x44]
00410632  0F AF 75 98               IMUL ESI,dword ptr [EBP + -0x68]
00410636  03 C1                     ADD EAX,ECX
00410638  03 F0                     ADD ESI,EAX
0041063A  89 B5 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ESI
00410640  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00410645  89 85 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EAX
0041064B  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
00410651  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00410657  80 F2 07                  XOR DL,0x7
0041065A  0F AB 11                  BTS [ECX],EDX
0041065D  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
00410663  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
LAB_00410669:
00410669  41                        INC ECX
0041066A  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
00410670  3B 4D D8                  CMP ECX,dword ptr [EBP + -0x28]
00410673  0F 8C 0F FF FF FF         JL 0x00410588
00410679  E9 C4 01 00 00            JMP 0x00410842
LAB_0041067e:
0041067E  33 C9                     XOR ECX,ECX
00410680  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00410683  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00410686  85 C0                     TEST EAX,EAX
00410688  0F 8E B4 01 00 00         JLE 0x00410842
0041068E  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00410691  8B BD 58 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff58]
00410697  2B C7                     SUB EAX,EDI
00410699  89 85 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EAX
0041069F  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
004106A5  8B 9D 78 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff78]
004106AB  2B C3                     SUB EAX,EBX
004106AD  89 85 E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],EAX
004106B3  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
004106B6  8D 42 01                  LEA EAX,[EDX + 0x1]
004106B9  8B D0                     MOV EDX,EAX
004106BB  0F AF D7                  IMUL EDX,EDI
004106BE  89 95 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EDX
004106C4  0F AF C3                  IMUL EAX,EBX
004106C7  89 85 DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EAX
LAB_004106cd:
004106CD  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004106D0  2B F9                     SUB EDI,ECX
004106D2  8B C7                     MOV EAX,EDI
004106D4  99                        CDQ
004106D5  2B C2                     SUB EAX,EDX
004106D7  D1 F8                     SAR EAX,0x1
004106D9  03 45 D8                  ADD EAX,dword ptr [EBP + -0x28]
004106DC  99                        CDQ
004106DD  F7 FF                     IDIV EDI
004106DF  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004106E2  8B BD E8 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffee8]
004106E8  8B 9D E4 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffee4]
004106EE  F6 C1 01                  TEST CL,0x1
004106F1  75 26                     JNZ 0x00410719
004106F3  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
004106F9  99                        CDQ
004106FA  83 E2 03                  AND EDX,0x3
004106FD  03 C2                     ADD EAX,EDX
004106FF  C1 F8 02                  SAR EAX,0x2
00410702  F7 D8                     NEG EAX
00410704  03 F8                     ADD EDI,EAX
00410706  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0041070C  99                        CDQ
0041070D  83 E2 03                  AND EDX,0x3
00410710  03 C2                     ADD EAX,EDX
00410712  C1 F8 02                  SAR EAX,0x2
00410715  F7 D8                     NEG EAX
00410717  03 D8                     ADD EBX,EAX
LAB_00410719:
00410719  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0041071C  8D 48 01                  LEA ECX,[EAX + 0x1]
0041071F  8B 85 E0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee0]
00410725  99                        CDQ
00410726  F7 F9                     IDIV ECX
00410728  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0041072B  8B 85 DC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffedc]
00410731  99                        CDQ
00410732  F7 F9                     IDIV ECX
00410734  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00410737  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0041073A  85 C0                     TEST EAX,EAX
0041073C  0F 8E EA 00 00 00         JLE 0x0041082c
00410742  8B C8                     MOV ECX,EAX
00410744  89 8D D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],ECX
LAB_0041074a:
0041074A  03 7D A0                  ADD EDI,dword ptr [EBP + -0x60]
0041074D  03 5D AC                  ADD EBX,dword ptr [EBP + -0x54]
00410750  8D 8F 00 80 00 00         LEA ECX,[EDI + 0x8000]
00410756  C1 F9 10                  SAR ECX,0x10
00410759  03 4D 08                  ADD ECX,dword ptr [EBP + 0x8]
0041075C  C1 F9 02                  SAR ECX,0x2
0041075F  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
00410762  8D 93 00 80 00 00         LEA EDX,[EBX + 0x8000]
00410768  C1 FA 10                  SAR EDX,0x10
0041076B  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
0041076E  C1 FA 02                  SAR EDX,0x2
00410771  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00410774  A1 14 4D 7F 00            MOV EAX,[0x007f4d14]
00410779  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0041077C  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00410782  89 0C 82                  MOV dword ptr [EDX + EAX*0x4],ECX
00410785  8B 0D 14 4D 7F 00         MOV ECX,dword ptr [0x007f4d14]
0041078B  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0041078E  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00410794  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00410797  89 54 81 04               MOV dword ptr [ECX + EAX*0x4 + 0x4],EDX
0041079B  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0041079E  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
004107A4  03 C1                     ADD EAX,ECX
004107A6  8B 0D 14 4D 7F 00         MOV ECX,dword ptr [0x007f4d14]
004107AC  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004107AF  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004107B5  89 44 91 08               MOV dword ptr [ECX + EDX*0x4 + 0x8],EAX
004107B9  FF 05 14 4D 7F 00         INC dword ptr [0x007f4d14]
004107BF  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
004107C2  85 C9                     TEST ECX,ECX
004107C4  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
004107CA  7C 54                     JL 0x00410820
004107CC  3B CE                     CMP ECX,ESI
004107CE  7D 50                     JGE 0x00410820
004107D0  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
004107D3  85 C0                     TEST EAX,EAX
004107D5  7C 49                     JL 0x00410820
004107D7  3B 05 30 4D 7F 00         CMP EAX,dword ptr [0x007f4d30]
004107DD  7D 41                     JGE 0x00410820
004107DF  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
004107E2  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
004107E8  03 D0                     ADD EDX,EAX
004107EA  0F AF 55 BC               IMUL EDX,dword ptr [EBP + -0x44]
004107EE  0F AF 75 98               IMUL ESI,dword ptr [EBP + -0x68]
004107F2  03 CA                     ADD ECX,EDX
004107F4  03 F1                     ADD ESI,ECX
004107F6  89 B5 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],ESI
004107FC  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
00410802  89 8D 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ECX
00410808  8B 8D 24 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff24]
0041080E  8B 95 20 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff20]
00410814  80 F2 07                  XOR DL,0x7
00410817  0F AB 11                  BTS [ECX],EDX
0041081A  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
LAB_00410820:
00410820  FF 8D D8 FE FF FF         DEC dword ptr [EBP + 0xfffffed8]
00410826  0F 85 1E FF FF FF         JNZ 0x0041074a
LAB_0041082c:
0041082C  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0041082F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00410832  29 55 D8                  SUB dword ptr [EBP + -0x28],EDX
00410835  41                        INC ECX
00410836  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00410839  3B 4D E4                  CMP ECX,dword ptr [EBP + -0x1c]
0041083C  0F 8C 8B FE FF FF         JL 0x004106cd
LAB_00410842:
00410842  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
LAB_00410849:
00410849  33 FF                     XOR EDI,EDI
0041084B  39 7D D8                  CMP dword ptr [EBP + -0x28],EDI
0041084E  0F 8F 4F 01 00 00         JG 0x004109a3
00410854  39 7D 1C                  CMP dword ptr [EBP + 0x1c],EDI
00410857  0F 85 2F 01 00 00         JNZ 0x0041098c
0041085D  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00410860  39 3D 14 4D 7F 00         CMP dword ptr [0x007f4d14],EDI
00410866  0F 8E 1B 01 00 00         JLE 0x00410987
0041086C  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
LAB_00410872:
00410872  8B 04 17                  MOV EAX,dword ptr [EDI + EDX*0x1]
00410875  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00410878  8B 5C 17 04               MOV EBX,dword ptr [EDI + EDX*0x1 + 0x4]
0041087C  89 5D 98                  MOV dword ptr [EBP + -0x68],EBX
0041087F  8B 4C 17 08               MOV ECX,dword ptr [EDI + EDX*0x1 + 0x8]
00410883  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
00410886  85 C0                     TEST EAX,EAX
00410888  7C 2E                     JL 0x004108b8
0041088A  3B C6                     CMP EAX,ESI
0041088C  7D 2A                     JGE 0x004108b8
0041088E  85 DB                     TEST EBX,EBX
00410890  7C 26                     JL 0x004108b8
00410892  3B 1D 30 4D 7F 00         CMP EBX,dword ptr [0x007f4d30]
00410898  7D 1E                     JGE 0x004108b8
0041089A  8B DE                     MOV EBX,ESI
0041089C  0F AF 5D 98               IMUL EBX,dword ptr [EBP + -0x68]
004108A0  0F AF 4D BC               IMUL ECX,dword ptr [EBP + -0x44]
004108A4  03 C3                     ADD EAX,EBX
004108A6  03 C8                     ADD ECX,EAX
004108A8  A1 F0 4C 7F 00            MOV EAX,[0x007f4cf0]
004108AD  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
004108B2  0F 84 B9 00 00 00         JZ 0x00410971
LAB_004108b8:
004108B8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004108BB  C1 F9 02                  SAR ECX,0x2
004108BE  51                        PUSH ECX
004108BF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004108C2  C1 FA 02                  SAR EDX,0x2
004108C5  52                        PUSH EDX
004108C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004108C9  C1 F8 02                  SAR EAX,0x2
004108CC  50                        PUSH EAX
004108CD  8B 0D 1C 4D 7F 00         MOV ECX,dword ptr [0x007f4d1c]
004108D3  C1 F9 02                  SAR ECX,0x2
004108D6  51                        PUSH ECX
004108D7  8B 15 10 4D 7F 00         MOV EDX,dword ptr [0x007f4d10]
004108DD  C1 FA 02                  SAR EDX,0x2
004108E0  52                        PUSH EDX
004108E1  A1 0C 4D 7F 00            MOV EAX,[0x007f4d0c]
004108E6  C1 F8 02                  SAR EAX,0x2
004108E9  50                        PUSH EAX
004108EA  8D 4D 8C                  LEA ECX,[EBP + -0x74]
004108ED  51                        PUSH ECX
004108EE  8D 55 98                  LEA EDX,[EBP + -0x68]
004108F1  52                        PUSH EDX
004108F2  8D 45 9C                  LEA EAX,[EBP + -0x64]
004108F5  50                        PUSH EAX
004108F6  E8 75 E9 FF FF            CALL 0x0040f270
004108FB  85 C0                     TEST EAX,EAX
004108FD  0F 85 FA 00 00 00         JNZ 0x004109fd
00410903  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
00410909  0F AF 4D 98               IMUL ECX,dword ptr [EBP + -0x68]
0041090D  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00410910  0F AF 55 BC               IMUL EDX,dword ptr [EBP + -0x44]
00410914  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00410917  03 C1                     ADD EAX,ECX
00410919  03 D0                     ADD EDX,EAX
0041091B  89 95 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EDX
00410921  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
00410927  89 8D 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ECX
0041092D  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
00410933  8B 95 18 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff18]
00410939  80 F2 07                  XOR DL,0x7
0041093C  0F AB 11                  BTS [ECX],EDX
0041093F  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00410945  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00410948  89 04 17                  MOV dword ptr [EDI + EDX*0x1],EAX
0041094B  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00410951  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00410954  89 54 0F 04               MOV dword ptr [EDI + ECX*0x1 + 0x4],EDX
00410958  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0041095B  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00410961  89 44 0F 08               MOV dword ptr [EDI + ECX*0x1 + 0x8],EAX
00410965  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
0041096B  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
LAB_00410971:
00410971  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00410974  40                        INC EAX
00410975  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00410978  83 C7 14                  ADD EDI,0x14
0041097B  3B 05 14 4D 7F 00         CMP EAX,dword ptr [0x007f4d14]
00410981  0F 8C EB FE FF FF         JL 0x00410872
LAB_00410987:
00410987  E8 04 E2 FF FF            CALL 0x0040eb90
LAB_0041098c:
0041098C  8B 75 B4                  MOV ESI,dword ptr [EBP + -0x4c]
FUN_0040fc40::cf_common_exit_0041098F:
0041098F  85 F6                     TEST ESI,ESI
00410991  0F 84 87 00 00 00         JZ 0x00410a1e
00410997  83 FE FC                  CMP ESI,-0x4
0041099A  75 68                     JNZ 0x00410a04
LAB_0041099c:
0041099C  B8 FC FF FF FF            MOV EAX,0xfffffffc
004109A1  EB 7D                     JMP 0x00410a20
LAB_004109a3:
004109A3  8B 15 38 4D 7F 00         MOV EDX,dword ptr [0x007f4d38]
004109A9  8D 0C 95 00 00 00 00      LEA ECX,[EDX*0x4 + 0x0]
004109B0  C1 F9 10                  SAR ECX,0x10
004109B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004109B6  2B C1                     SUB EAX,ECX
004109B8  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004109BB  8B 15 28 4D 7F 00         MOV EDX,dword ptr [0x007f4d28]
004109C1  C1 E2 02                  SHL EDX,0x2
004109C4  C1 FA 10                  SAR EDX,0x10
004109C7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004109CA  03 CA                     ADD ECX,EDX
004109CC  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004109CF  C7 45 D4 01 00 00 00      MOV dword ptr [EBP + -0x2c],0x1
004109D6  3B C7                     CMP EAX,EDI
004109D8  7C 23                     JL 0x004109fd
004109DA  3B C6                     CMP EAX,ESI
004109DC  7D 1F                     JGE 0x004109fd
004109DE  3B CF                     CMP ECX,EDI
004109E0  7C 1B                     JL 0x004109fd
004109E2  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
004109E8  7D 13                     JGE 0x004109fd
004109EA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004109ED  3B C7                     CMP EAX,EDI
004109EF  7C 0C                     JL 0x004109fd
004109F1  3B 05 34 4D 7F 00         CMP EAX,dword ptr [0x007f4d34]
004109F7  0F 8C 76 F4 FF FF         JL 0x0040fe73
LAB_004109fd:
004109FD  BE FC FF FF FF            MOV ESI,0xfffffffc
00410A02  EB 8B                     JMP 0x0041098f
LAB_00410a04:
00410A04  68 4B 0A 00 00            PUSH 0xa4b
00410A09  68 A8 4C 7A 00            PUSH 0x7a4ca8
00410A0E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00410A13  50                        PUSH EAX
00410A14  56                        PUSH ESI
00410A15  E8 26 54 29 00            CALL 0x006a5e40
00410A1A  8B C6                     MOV EAX,ESI
00410A1C  EB 02                     JMP 0x00410a20
LAB_00410a1e:
00410A1E  33 C0                     XOR EAX,EAX
LAB_00410a20:
00410A20  8D A5 CC FE FF FF         LEA ESP,[EBP + 0xfffffecc]
00410A26  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00410A29  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00410A30  5F                        POP EDI
00410A31  5E                        POP ESI
00410A32  5B                        POP EBX
00410A33  8B E5                     MOV ESP,EBP
00410A35  5D                        POP EBP
00410A36  C2 18 00                  RET 0x18
