FUN_0057cd70:
0057CD70  55                        PUSH EBP
0057CD71  8B EC                     MOV EBP,ESP
0057CD73  51                        PUSH ECX
0057CD74  53                        PUSH EBX
0057CD75  56                        PUSH ESI
0057CD76  57                        PUSH EDI
0057CD77  8B F9                     MOV EDI,ECX
0057CD79  E8 BE 4C E8 FF            CALL 0x00401a3c
0057CD7E  85 C0                     TEST EAX,EAX
0057CD80  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
0057CD86  74 19                     JZ 0x0057cda1
0057CD88  6A 01                     PUSH 0x1
0057CD8A  8B CE                     MOV ECX,ESI
0057CD8C  E8 3B 85 E8 FF            CALL 0x004052cc
0057CD91  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0057CD97  50                        PUSH EAX
0057CD98  E8 53 DE 16 00            CALL 0x006eabf0
0057CD9D  6A 01                     PUSH 0x1
0057CD9F  EB 26                     JMP 0x0057cdc7
LAB_0057cda1:
0057CDA1  6A 00                     PUSH 0x0
0057CDA3  8B CE                     MOV ECX,ESI
0057CDA5  E8 22 85 E8 FF            CALL 0x004052cc
0057CDAA  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0057CDB0  50                        PUSH EAX
0057CDB1  E8 3A DE 16 00            CALL 0x006eabf0
0057CDB6  8B CF                     MOV ECX,EDI
0057CDB8  E8 1B 83 E8 FF            CALL 0x004050d8
0057CDBD  83 F8 01                  CMP EAX,0x1
0057CDC0  75 03                     JNZ 0x0057cdc5
0057CDC2  50                        PUSH EAX
0057CDC3  EB 02                     JMP 0x0057cdc7
LAB_0057cdc5:
0057CDC5  6A 00                     PUSH 0x0
LAB_0057cdc7:
0057CDC7  8B CE                     MOV ECX,ESI
0057CDC9  E8 FE 84 E8 FF            CALL 0x004052cc
0057CDCE  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0057CDD4  50                        PUSH EAX
0057CDD5  E8 96 9A 16 00            CALL 0x006e6870
0057CDDA  8B 87 3B 02 00 00         MOV EAX,dword ptr [EDI + 0x23b]
0057CDE0  BB 0F 00 00 00            MOV EBX,0xf
0057CDE5  83 F8 04                  CMP EAX,0x4
0057CDE8  0F 85 A7 00 00 00         JNZ 0x0057ce95
0057CDEE  8B 07                     MOV EAX,dword ptr [EDI]
0057CDF0  8B CF                     MOV ECX,EDI
0057CDF2  FF 50 20                  CALL dword ptr [EAX + 0x20]
0057CDF5  83 F8 FF                  CMP EAX,-0x1
0057CDF8  74 6D                     JZ 0x0057ce67
0057CDFA  83 F8 01                  CMP EAX,0x1
0057CDFD  0F 85 DD 01 00 00         JNZ 0x0057cfe0
0057CE03  8B 87 67 02 00 00         MOV EAX,dword ptr [EDI + 0x267]
0057CE09  33 DB                     XOR EBX,EBX
0057CE0B  2D E7 00 00 00            SUB EAX,0xe7
0057CE10  74 0A                     JZ 0x0057ce1c
0057CE12  83 E8 02                  SUB EAX,0x2
0057CE15  75 0A                     JNZ 0x0057ce21
0057CE17  83 CB FF                  OR EBX,0xffffffff
0057CE1A  EB 05                     JMP 0x0057ce21
LAB_0057ce1c:
0057CE1C  BB FE FF FF FF            MOV EBX,0xfffffffe
LAB_0057ce21:
0057CE21  8A CB                     MOV CL,BL
0057CE23  80 C1 07                  ADD CL,0x7
0057CE26  51                        PUSH ECX
0057CE27  8B CF                     MOV ECX,EDI
0057CE29  E8 62 8E E8 FF            CALL 0x00405c90
0057CE2E  80 C3 06                  ADD BL,0x6
0057CE31  8B CF                     MOV ECX,EDI
0057CE33  53                        PUSH EBX
0057CE34  E8 CC 82 E8 FF            CALL 0x00405105
0057CE39  66 8B 97 39 02 00 00      MOV DX,word ptr [EDI + 0x239]
0057CE40  66 8B 87 37 02 00 00      MOV AX,word ptr [EDI + 0x237]
0057CE47  66 8B 8F 35 02 00 00      MOV CX,word ptr [EDI + 0x235]
0057CE4E  52                        PUSH EDX
0057CE4F  50                        PUSH EAX
0057CE50  51                        PUSH ECX
0057CE51  8B CF                     MOV ECX,EDI
0057CE53  E8 C0 74 E8 FF            CALL 0x00404318
0057CE58  C7 87 3B 02 00 00 01 00 00 00  MOV dword ptr [EDI + 0x23b],0x1
0057CE62  E9 79 01 00 00            JMP 0x0057cfe0
LAB_0057ce67:
0057CE67  68 A0 D3 7A 00            PUSH 0x7ad3a0
0057CE6C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057CE71  6A 00                     PUSH 0x0
0057CE73  6A 00                     PUSH 0x0
0057CE75  68 09 07 00 00            PUSH 0x709
0057CE7A  68 44 B0 7C 00            PUSH 0x7cb044
0057CE7F  E8 4C 06 13 00            CALL 0x006ad4d0
0057CE84  83 C4 18                  ADD ESP,0x18
0057CE87  85 C0                     TEST EAX,EAX
0057CE89  0F 84 51 01 00 00         JZ 0x0057cfe0
0057CE8F  CC                        INT3
LAB_0057ce95:
0057CE95  83 F8 01                  CMP EAX,0x1
0057CE98  75 74                     JNZ 0x0057cf0e
0057CE9A  8B 17                     MOV EDX,dword ptr [EDI]
0057CE9C  8B CF                     MOV ECX,EDI
0057CE9E  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0057CEA1  83 E8 00                  SUB EAX,0x0
0057CEA4  0F 84 36 01 00 00         JZ 0x0057cfe0
0057CEAA  48                        DEC EAX
0057CEAB  74 5D                     JZ 0x0057cf0a
0057CEAD  48                        DEC EAX
0057CEAE  74 30                     JZ 0x0057cee0
0057CEB0  68 68 B0 7C 00            PUSH 0x7cb068
0057CEB5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057CEBA  6A 00                     PUSH 0x0
0057CEBC  6A 00                     PUSH 0x0
0057CEBE  68 2D 07 00 00            PUSH 0x72d
0057CEC3  68 44 B0 7C 00            PUSH 0x7cb044
0057CEC8  E8 03 06 13 00            CALL 0x006ad4d0
0057CECD  83 C4 18                  ADD ESP,0x18
0057CED0  85 C0                     TEST EAX,EAX
0057CED2  0F 84 CD 03 00 00         JZ 0x0057d2a5
0057CED8  CC                        INT3
LAB_0057cee0:
0057CEE0  39 9F 3F 02 00 00         CMP dword ptr [EDI + 0x23f],EBX
0057CEE6  0F 82 F4 00 00 00         JC 0x0057cfe0
0057CEEC  6A 01                     PUSH 0x1
LAB_0057ceee:
0057CEEE  8B CF                     MOV ECX,EDI
0057CEF0  E8 1D 57 E8 FF            CALL 0x00402612
0057CEF5  89 87 3B 02 00 00         MOV dword ptr [EDI + 0x23b],EAX
0057CEFB  C7 87 3F 02 00 00 00 00 00 00  MOV dword ptr [EDI + 0x23f],0x0
0057CF05  E9 D6 00 00 00            JMP 0x0057cfe0
LAB_0057cf0a:
0057CF0A  6A 00                     PUSH 0x0
0057CF0C  EB E0                     JMP 0x0057ceee
LAB_0057cf0e:
0057CF0E  83 F8 02                  CMP EAX,0x2
0057CF11  75 62                     JNZ 0x0057cf75
0057CF13  8B CF                     MOV ECX,EDI
0057CF15  E8 33 62 E8 FF            CALL 0x0040314d
0057CF1A  83 E8 00                  SUB EAX,0x0
0057CF1D  74 40                     JZ 0x0057cf5f
0057CF1F  83 E8 02                  SUB EAX,0x2
0057CF22  0F 84 B8 00 00 00         JZ 0x0057cfe0
0057CF28  48                        DEC EAX
0057CF29  0F 84 B1 00 00 00         JZ 0x0057cfe0
0057CF2F  68 68 B0 7C 00            PUSH 0x7cb068
0057CF34  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057CF39  6A 00                     PUSH 0x0
0057CF3B  6A 00                     PUSH 0x0
0057CF3D  68 40 07 00 00            PUSH 0x740
0057CF42  68 44 B0 7C 00            PUSH 0x7cb044
0057CF47  E8 84 05 13 00            CALL 0x006ad4d0
0057CF4C  83 C4 18                  ADD ESP,0x18
0057CF4F  85 C0                     TEST EAX,EAX
0057CF51  0F 84 4E 03 00 00         JZ 0x0057d2a5
0057CF57  CC                        INT3
LAB_0057cf5f:
0057CF5F  C7 87 3B 02 00 00 00 00 00 00  MOV dword ptr [EDI + 0x23b],0x0
0057CF69  C7 87 3F 02 00 00 07 00 00 00  MOV dword ptr [EDI + 0x23f],0x7
0057CF73  EB 6B                     JMP 0x0057cfe0
LAB_0057cf75:
0057CF75  83 F8 05                  CMP EAX,0x5
0057CF78  75 3A                     JNZ 0x0057cfb4
0057CF7A  6A 08                     PUSH 0x8
0057CF7C  8B CE                     MOV ECX,ESI
0057CF7E  E8 29 53 E8 FF            CALL 0x004022ac
0057CF83  8B D8                     MOV EBX,EAX
0057CF85  6A 08                     PUSH 0x8
0057CF87  8B CE                     MOV ECX,ESI
0057CF89  4B                        DEC EBX
0057CF8A  E8 20 73 E8 FF            CALL 0x004042af
0057CF8F  3B C3                     CMP EAX,EBX
0057CF91  75 4D                     JNZ 0x0057cfe0
0057CF93  6A 08                     PUSH 0x8
0057CF95  8B CE                     MOV ECX,ESI
0057CF97  E8 C8 72 E8 FF            CALL 0x00404264
0057CF9C  8B CF                     MOV ECX,EDI
0057CF9E  E8 17 63 E8 FF            CALL 0x004032ba
0057CFA3  C7 87 3B 02 00 00 03 00 00 00  MOV dword ptr [EDI + 0x23b],0x3
0057CFAD  5F                        POP EDI
0057CFAE  5E                        POP ESI
0057CFAF  5B                        POP EBX
0057CFB0  8B E5                     MOV ESP,EBP
0057CFB2  5D                        POP EBP
0057CFB3  C3                        RET
LAB_0057cfb4:
0057CFB4  39 9F 3F 02 00 00         CMP dword ptr [EDI + 0x23f],EBX
0057CFBA  76 24                     JBE 0x0057cfe0
0057CFBC  8B 07                     MOV EAX,dword ptr [EDI]
0057CFBE  8B CF                     MOV ECX,EDI
0057CFC0  FF 50 20                  CALL dword ptr [EAX + 0x20]
0057CFC3  83 F8 01                  CMP EAX,0x1
0057CFC6  75 18                     JNZ 0x0057cfe0
0057CFC8  50                        PUSH EAX
0057CFC9  8B CF                     MOV ECX,EDI
0057CFCB  C7 87 3F 02 00 00 00 00 00 00  MOV dword ptr [EDI + 0x23f],0x0
0057CFD5  E8 38 56 E8 FF            CALL 0x00402612
0057CFDA  89 87 3B 02 00 00         MOV dword ptr [EDI + 0x23b],EAX
LAB_0057cfe0:
0057CFE0  8B 87 67 02 00 00         MOV EAX,dword ptr [EDI + 0x267]
0057CFE6  05 19 FF FF FF            ADD EAX,0xffffff19
0057CFEB  83 F8 04                  CMP EAX,0x4
0057CFEE  0F 87 9A 02 00 00         JA 0x0057d28e
switchD_0057cff4::switchD:
0057CFF4  FF 24 85 AC D2 57 00      JMP dword ptr [EAX*0x4 + 0x57d2ac]
switchD_0057cff4::caseD_ea:
0057CFFB  0F BF 4F 6C               MOVSX ECX,word ptr [EDI + 0x6c]
0057CFFF  B8 89 88 88 88            MOV EAX,0x88888889
0057D004  BB 0F 00 00 00            MOV EBX,0xf
0057D009  F7 E9                     IMUL ECX
0057D00B  03 D1                     ADD EDX,ECX
0057D00D  B8 18 00 00 00            MOV EAX,0x18
0057D012  C1 FA 03                  SAR EDX,0x3
0057D015  8B CA                     MOV ECX,EDX
0057D017  C1 E9 1F                  SHR ECX,0x1f
0057D01A  03 D1                     ADD EDX,ECX
0057D01C  B9 18 00 00 00            MOV ECX,0x18
0057D021  2B C2                     SUB EAX,EDX
0057D023  99                        CDQ
0057D024  F7 F9                     IDIV ECX
0057D026  B8 56 55 55 55            MOV EAX,0x55555556
0057D02B  8B CA                     MOV ECX,EDX
0057D02D  F7 E9                     IMUL ECX
0057D02F  8B C2                     MOV EAX,EDX
0057D031  C1 E8 1F                  SHR EAX,0x1f
0057D034  03 D0                     ADD EDX,EAX
0057D036  B8 04 00 00 00            MOV EAX,0x4
0057D03B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0057D03E  8B 15 FC 73 80 00         MOV EDX,dword ptr [0x008073fc]
0057D044  2B C2                     SUB EAX,EDX
0057D046  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0057D049  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0057D04C  B9 18 00 00 00            MOV ECX,0x18
0057D051  99                        CDQ
0057D052  F7 F9                     IDIV ECX
0057D054  B8 56 55 55 55            MOV EAX,0x55555556
0057D059  F7 EA                     IMUL EDX
0057D05B  8B C2                     MOV EAX,EDX
0057D05D  C1 E8 1F                  SHR EAX,0x1f
0057D060  03 D0                     ADD EDX,EAX
0057D062  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
0057D065  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0057D06B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0057D06E  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0057D074  33 D2                     XOR EDX,EDX
0057D076  F7 F3                     DIV EBX
0057D078  03 CA                     ADD ECX,EDX
0057D07A  51                        PUSH ECX
0057D07B  6A 0E                     PUSH 0xe
0057D07D  8B CE                     MOV ECX,ESI
0057D07F  E8 E0 3F E8 FF            CALL 0x00401064
0057D084  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057D087  8B CE                     MOV ECX,ESI
0057D089  50                        PUSH EAX
0057D08A  6A 0E                     PUSH 0xe
0057D08C  E8 6D 82 E8 FF            CALL 0x004052fe
0057D091  E9 EF 01 00 00            JMP 0x0057d285
switchD_0057cff4::caseD_eb:
0057D096  0F BF 4F 6C               MOVSX ECX,word ptr [EDI + 0x6c]
0057D09A  B8 89 88 88 88            MOV EAX,0x88888889
0057D09F  BB 14 00 00 00            MOV EBX,0x14
0057D0A4  F7 E9                     IMUL ECX
0057D0A6  03 D1                     ADD EDX,ECX
0057D0A8  B8 18 00 00 00            MOV EAX,0x18
0057D0AD  C1 FA 03                  SAR EDX,0x3
0057D0B0  8B CA                     MOV ECX,EDX
0057D0B2  C1 E9 1F                  SHR ECX,0x1f
0057D0B5  03 D1                     ADD EDX,ECX
0057D0B7  B9 18 00 00 00            MOV ECX,0x18
0057D0BC  2B C2                     SUB EAX,EDX
0057D0BE  99                        CDQ
0057D0BF  F7 F9                     IDIV ECX
0057D0C1  8B CA                     MOV ECX,EDX
0057D0C3  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0057D0C9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0057D0CF  33 D2                     XOR EDX,EDX
0057D0D1  F7 F3                     DIV EBX
0057D0D3  B8 56 55 55 55            MOV EAX,0x55555556
0057D0D8  8B DA                     MOV EBX,EDX
0057D0DA  F7 E9                     IMUL ECX
0057D0DC  8B C2                     MOV EAX,EDX
0057D0DE  C1 E8 1F                  SHR EAX,0x1f
0057D0E1  03 D0                     ADD EDX,EAX
0057D0E3  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0057D0E6  8D 04 93                  LEA EAX,[EBX + EDX*0x4]
0057D0E9  8B 15 FC 73 80 00         MOV EDX,dword ptr [0x008073fc]
0057D0EF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057D0F2  B8 04 00 00 00            MOV EAX,0x4
0057D0F7  2B C2                     SUB EAX,EDX
0057D0F9  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0057D0FC  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0057D0FF  B9 18 00 00 00            MOV ECX,0x18
0057D104  99                        CDQ
0057D105  F7 F9                     IDIV ECX
0057D107  B8 56 55 55 55            MOV EAX,0x55555556
0057D10C  F7 EA                     IMUL EDX
0057D10E  8B C2                     MOV EAX,EDX
0057D110  C1 E8 1F                  SHR EAX,0x1f
0057D113  03 D0                     ADD EDX,EAX
0057D115  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
0057D118  8D 14 8B                  LEA EDX,[EBX + ECX*0x4]
0057D11B  8B CE                     MOV ECX,ESI
0057D11D  52                        PUSH EDX
0057D11E  6A 0E                     PUSH 0xe
0057D120  E8 3F 3F E8 FF            CALL 0x00401064
0057D125  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057D128  8B CE                     MOV ECX,ESI
0057D12A  50                        PUSH EAX
0057D12B  6A 0E                     PUSH 0xe
0057D12D  E8 CC 81 E8 FF            CALL 0x004052fe
0057D132  E9 4E 01 00 00            JMP 0x0057d285
switchD_0057cff4::caseD_e9:
0057D137  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057D13D  33 D2                     XOR EDX,EDX
0057D13F  0F BF 5F 6C               MOVSX EBX,word ptr [EDI + 0x6c]
0057D143  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0057D149  B9 0C 00 00 00            MOV ECX,0xc
0057D14E  F7 F1                     DIV ECX
0057D150  B8 89 88 88 88            MOV EAX,0x88888889
0057D155  8B CA                     MOV ECX,EDX
0057D157  F7 EB                     IMUL EBX
0057D159  03 D3                     ADD EDX,EBX
0057D15B  BB 18 00 00 00            MOV EBX,0x18
0057D160  C1 FA 03                  SAR EDX,0x3
0057D163  8B C2                     MOV EAX,EDX
0057D165  C1 E8 1F                  SHR EAX,0x1f
0057D168  03 D0                     ADD EDX,EAX
0057D16A  B8 18 00 00 00            MOV EAX,0x18
0057D16F  2B C2                     SUB EAX,EDX
0057D171  99                        CDQ
0057D172  F7 FB                     IDIV EBX
0057D174  B8 56 55 55 55            MOV EAX,0x55555556
0057D179  D1 E9                     SHR ECX,0x1
0057D17B  8B DA                     MOV EBX,EDX
0057D17D  F7 EB                     IMUL EBX
0057D17F  8B C2                     MOV EAX,EDX
0057D181  C1 E8 1F                  SHR EAX,0x1f
0057D184  03 D0                     ADD EDX,EAX
0057D186  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0057D189  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0057D18C  8B 15 FC 73 80 00         MOV EDX,dword ptr [0x008073fc]
0057D192  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057D195  B8 04 00 00 00            MOV EAX,0x4
0057D19A  2B C2                     SUB EAX,EDX
0057D19C  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0057D19F  8D 04 53                  LEA EAX,[EBX + EDX*0x2]
0057D1A2  BB 18 00 00 00            MOV EBX,0x18
0057D1A7  99                        CDQ
0057D1A8  F7 FB                     IDIV EBX
0057D1AA  B8 56 55 55 55            MOV EAX,0x55555556
0057D1AF  F7 EA                     IMUL EDX
0057D1B1  8B C2                     MOV EAX,EDX
0057D1B3  C1 E8 1F                  SHR EAX,0x1f
0057D1B6  03 D0                     ADD EDX,EAX
0057D1B8  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0057D1BB  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0057D1BE  E9 88 00 00 00            JMP 0x0057d24b
switchD_0057cff4::caseD_e8:
0057D1C3  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0057D1C9  B9 30 00 00 00            MOV ECX,0x30
0057D1CE  0F BF 5F 6C               MOVSX EBX,word ptr [EDI + 0x6c]
0057D1D2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0057D1D8  33 D2                     XOR EDX,EDX
0057D1DA  F7 F1                     DIV ECX
0057D1DC  B8 89 88 88 88            MOV EAX,0x88888889
0057D1E1  8B CA                     MOV ECX,EDX
0057D1E3  F7 EB                     IMUL EBX
0057D1E5  03 D3                     ADD EDX,EBX
0057D1E7  BB 18 00 00 00            MOV EBX,0x18
0057D1EC  C1 FA 03                  SAR EDX,0x3
0057D1EF  8B C2                     MOV EAX,EDX
0057D1F1  C1 E8 1F                  SHR EAX,0x1f
0057D1F4  03 D0                     ADD EDX,EAX
0057D1F6  B8 18 00 00 00            MOV EAX,0x18
0057D1FB  2B C2                     SUB EAX,EDX
0057D1FD  99                        CDQ
0057D1FE  F7 FB                     IDIV EBX
0057D200  B8 56 55 55 55            MOV EAX,0x55555556
0057D205  C1 E9 02                  SHR ECX,0x2
0057D208  8B DA                     MOV EBX,EDX
0057D20A  F7 EB                     IMUL EBX
0057D20C  8B C2                     MOV EAX,EDX
0057D20E  C1 E8 1F                  SHR EAX,0x1f
0057D211  03 D0                     ADD EDX,EAX
0057D213  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0057D216  8D 04 91                  LEA EAX,[ECX + EDX*0x4]
0057D219  8B 15 FC 73 80 00         MOV EDX,dword ptr [0x008073fc]
0057D21F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057D222  B8 04 00 00 00            MOV EAX,0x4
0057D227  2B C2                     SUB EAX,EDX
0057D229  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0057D22C  8D 04 53                  LEA EAX,[EBX + EDX*0x2]
0057D22F  BB 18 00 00 00            MOV EBX,0x18
0057D234  99                        CDQ
0057D235  F7 FB                     IDIV EBX
0057D237  B8 56 55 55 55            MOV EAX,0x55555556
0057D23C  F7 EA                     IMUL EDX
0057D23E  8B C2                     MOV EAX,EDX
0057D240  C1 E8 1F                  SHR EAX,0x1f
0057D243  03 D0                     ADD EDX,EAX
0057D245  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0057D248  8D 04 91                  LEA EAX,[ECX + EDX*0x4]
LAB_0057d24b:
0057D24B  50                        PUSH EAX
0057D24C  6A 0E                     PUSH 0xe
0057D24E  8B CE                     MOV ECX,ESI
0057D250  E8 0F 3E E8 FF            CALL 0x00401064
0057D255  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057D258  51                        PUSH ECX
0057D259  6A 0E                     PUSH 0xe
0057D25B  8B CE                     MOV ECX,ESI
0057D25D  E8 9C 80 E8 FF            CALL 0x004052fe
0057D262  EB 21                     JMP 0x0057d285
switchD_0057cff4::caseD_e7:
0057D264  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0057D26A  B9 78 00 00 00            MOV ECX,0x78
0057D26F  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0057D275  33 D2                     XOR EDX,EDX
0057D277  F7 F1                     DIV ECX
0057D279  8B CE                     MOV ECX,ESI
0057D27B  D1 EA                     SHR EDX,0x1
0057D27D  52                        PUSH EDX
0057D27E  6A 0E                     PUSH 0xe
0057D280  E8 DF 3D E8 FF            CALL 0x00401064
LAB_0057d285:
0057D285  6A 0E                     PUSH 0xe
0057D287  8B CE                     MOV ECX,ESI
0057D289  E8 2E 5E E8 FF            CALL 0x004030bc
switchD_0057cff4::default:
0057D28E  8B 87 3F 02 00 00         MOV EAX,dword ptr [EDI + 0x23f]
0057D294  8B 17                     MOV EDX,dword ptr [EDI]
0057D296  40                        INC EAX
0057D297  8B CF                     MOV ECX,EDI
0057D299  89 87 3F 02 00 00         MOV dword ptr [EDI + 0x23f],EAX
0057D29F  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
LAB_0057d2a5:
0057D2A5  5F                        POP EDI
0057D2A6  5E                        POP ESI
0057D2A7  5B                        POP EBX
0057D2A8  8B E5                     MOV ESP,EBP
0057D2AA  5D                        POP EBP
0057D2AB  C3                        RET
