FUN_00476ce0:
00476CE0  55                        PUSH EBP
00476CE1  8B EC                     MOV EBP,ESP
00476CE3  83 EC 60                  SUB ESP,0x60
00476CE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00476CE9  53                        PUSH EBX
00476CEA  56                        PUSH ESI
00476CEB  57                        PUSH EDI
00476CEC  85 C0                     TEST EAX,EAX
00476CEE  8B D9                     MOV EBX,ECX
00476CF0  BE 01 00 00 00            MOV ESI,0x1
00476CF5  0F 84 C8 0E 00 00         JZ 0x00477bc3
00476CFB  3B C6                     CMP EAX,ESI
00476CFD  0F 84 C0 0E 00 00         JZ 0x00477bc3
00476D03  8B 83 11 06 00 00         MOV EAX,dword ptr [EBX + 0x611]
00476D09  85 C0                     TEST EAX,EAX
00476D0B  0F 85 47 01 00 00         JNZ 0x00476e58
00476D11  6A 02                     PUSH 0x2
00476D13  E8 C6 C4 F8 FF            CALL 0x004031de
00476D18  40                        INC EAX
00476D19  83 F8 04                  CMP EAX,0x4
00476D1C  0F 87 5C 03 00 00         JA 0x0047707e
switchD_00476d22::switchD:
00476D22  FF 24 85 34 7C 47 00      JMP dword ptr [EAX*0x4 + 0x477c34]
switchD_00476d22::caseD_ffffffff:
00476D29  68 34 B2 7A 00            PUSH 0x7ab234
00476D2E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00476D33  6A 00                     PUSH 0x0
00476D35  6A 00                     PUSH 0x0
00476D37  68 D2 31 00 00            PUSH 0x31d2
00476D3C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00476D41  E8 8A 67 23 00            CALL 0x006ad4d0
00476D46  83 C4 18                  ADD ESP,0x18
00476D49  85 C0                     TEST EAX,EAX
00476D4B  74 01                     JZ 0x00476d4e
00476D4D  CC                        INT3
LAB_00476d4e:
00476D4E  B8 FF FF 00 00            MOV EAX,0xffff
00476D53  5F                        POP EDI
00476D54  5E                        POP ESI
00476D55  5B                        POP EBX
00476D56  8B E5                     MOV ESP,EBP
00476D58  5D                        POP EBP
00476D59  C2 04 00                  RET 0x4
switchD_00476d22::caseD_0:
00476D5C  8B CB                     MOV ECX,EBX
00476D5E  E8 41 D6 F8 FF            CALL 0x004043a4
00476D63  85 C0                     TEST EAX,EAX
00476D65  0F 84 BA 00 00 00         JZ 0x00476e25
00476D6B  66 8B 83 03 06 00 00      MOV AX,word ptr [EBX + 0x603]
00476D72  66 3B 43 47               CMP AX,word ptr [EBX + 0x47]
00476D76  75 2E                     JNZ 0x00476da6
00476D78  66 8B 8B 05 06 00 00      MOV CX,word ptr [EBX + 0x605]
00476D7F  66 3B 4B 49               CMP CX,word ptr [EBX + 0x49]
00476D83  75 21                     JNZ 0x00476da6
00476D85  66 8B 93 07 06 00 00      MOV DX,word ptr [EBX + 0x607]
00476D8C  66 3B 53 4B               CMP DX,word ptr [EBX + 0x4b]
00476D90  75 14                     JNZ 0x00476da6
00476D92  89 B3 11 06 00 00         MOV dword ptr [EBX + 0x611],ESI
00476D98  B8 02 00 00 00            MOV EAX,0x2
00476D9D  5F                        POP EDI
00476D9E  5E                        POP ESI
00476D9F  5B                        POP EBX
00476DA0  8B E5                     MOV ESP,EBP
00476DA2  5D                        POP EBP
00476DA3  C2 04 00                  RET 0x4
LAB_00476da6:
00476DA6  0F BF 8B 07 06 00 00      MOVSX ECX,word ptr [EBX + 0x607]
00476DAD  0F BF 93 05 06 00 00      MOVSX EDX,word ptr [EBX + 0x605]
00476DB4  0F BF C0                  MOVSX EAX,AX
00476DB7  51                        PUSH ECX
00476DB8  52                        PUSH EDX
00476DB9  50                        PUSH EAX
LAB_00476dba:
00476DBA  8B CB                     MOV ECX,EBX
00476DBC  E8 AA E1 F8 FF            CALL 0x00404f6b
00476DC1  6A 00                     PUSH 0x0
00476DC3  8B CB                     MOV ECX,EBX
00476DC5  E8 14 C4 F8 FF            CALL 0x004031de
00476DCA  40                        INC EAX
00476DCB  F7 D8                     NEG EAX
00476DCD  1B C0                     SBB EAX,EAX
00476DCF  83 E0 03                  AND EAX,0x3
00476DD2  48                        DEC EAX
00476DD3  5F                        POP EDI
00476DD4  5E                        POP ESI
00476DD5  5B                        POP EBX
00476DD6  8B E5                     MOV ESP,EBP
00476DD8  5D                        POP EBP
00476DD9  C2 04 00                  RET 0x4
switchD_00476d22::caseD_1:
00476DDC  66 8B 8B FD 05 00 00      MOV CX,word ptr [EBX + 0x5fd]
00476DE3  8A 93 FC 05 00 00         MOV DL,byte ptr [EBX + 0x5fc]
00476DE9  56                        PUSH ESI
00476DEA  51                        PUSH ECX
00476DEB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00476DF1  52                        PUSH EDX
00476DF2  E8 C3 BA F8 FF            CALL 0x004028ba
00476DF7  85 C0                     TEST EAX,EAX
00476DF9  74 23                     JZ 0x00476e1e
00476DFB  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
00476DFE  8B 93 FF 05 00 00         MOV EDX,dword ptr [EBX + 0x5ff]
00476E04  3B CA                     CMP ECX,EDX
00476E06  75 16                     JNZ 0x00476e1e
00476E08  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00476E0B  8B 10                     MOV EDX,dword ptr [EAX]
00476E0D  51                        PUSH ECX
00476E0E  8B C8                     MOV ECX,EAX
00476E10  FF 92 08 01 00 00         CALL dword ptr [EDX + 0x108]
00476E16  85 C0                     TEST EAX,EAX
00476E18  0F 85 60 02 00 00         JNZ 0x0047707e
LAB_00476e1e:
00476E1E  8B CB                     MOV ECX,EBX
00476E20  E8 30 CA F8 FF            CALL 0x00403855
LAB_00476e25:
00476E25  33 C0                     XOR EAX,EAX
00476E27  5F                        POP EDI
00476E28  5E                        POP ESI
00476E29  5B                        POP EBX
00476E2A  8B E5                     MOV ESP,EBP
00476E2C  5D                        POP EBP
00476E2D  C2 04 00                  RET 0x4
switchD_00476d22::caseD_3:
00476E30  8B CB                     MOV ECX,EBX
00476E32  E8 6D D5 F8 FF            CALL 0x004043a4
00476E37  3B C6                     CMP EAX,ESI
00476E39  75 EA                     JNZ 0x00476e25
00476E3B  0F BF 93 07 06 00 00      MOVSX EDX,word ptr [EBX + 0x607]
00476E42  0F BF 83 05 06 00 00      MOVSX EAX,word ptr [EBX + 0x605]
00476E49  0F BF 8B 03 06 00 00      MOVSX ECX,word ptr [EBX + 0x603]
00476E50  52                        PUSH EDX
00476E51  50                        PUSH EAX
00476E52  51                        PUSH ECX
00476E53  E9 62 FF FF FF            JMP 0x00476dba
LAB_00476e58:
00476E58  3B C6                     CMP EAX,ESI
00476E5A  0F 85 2C 02 00 00         JNZ 0x0047708c
00476E60  8B 13                     MOV EDX,dword ptr [EBX]
00476E62  8B CB                     MOV ECX,EBX
00476E64  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00476E6A  85 C0                     TEST EAX,EAX
00476E6C  74 0C                     JZ 0x00476e7a
00476E6E  83 C8 FF                  OR EAX,0xffffffff
00476E71  5F                        POP EDI
00476E72  5E                        POP ESI
00476E73  5B                        POP EBX
00476E74  8B E5                     MOV ESP,EBP
00476E76  5D                        POP EBP
00476E77  C2 04 00                  RET 0x4
LAB_00476e7a:
00476E7A  66 8B 83 FD 05 00 00      MOV AX,word ptr [EBX + 0x5fd]
00476E81  8A 8B FC 05 00 00         MOV CL,byte ptr [EBX + 0x5fc]
00476E87  56                        PUSH ESI
00476E88  50                        PUSH EAX
00476E89  51                        PUSH ECX
00476E8A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00476E90  E8 25 BA F8 FF            CALL 0x004028ba
00476E95  8B F0                     MOV ESI,EAX
00476E97  85 F6                     TEST ESI,ESI
00476E99  74 8A                     JZ 0x00476e25
00476E9B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00476E9E  8B 83 FF 05 00 00         MOV EAX,dword ptr [EBX + 0x5ff]
00476EA4  3B D0                     CMP EDX,EAX
00476EA6  0F 85 79 FF FF FF         JNZ 0x00476e25
00476EAC  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00476EAF  8B 06                     MOV EAX,dword ptr [ESI]
00476EB1  51                        PUSH ECX
00476EB2  8B CE                     MOV ECX,ESI
00476EB4  FF 90 08 01 00 00         CALL dword ptr [EAX + 0x108]
00476EBA  85 C0                     TEST EAX,EAX
00476EBC  0F 84 63 FF FF FF         JZ 0x00476e25
00476EC2  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00476EC5  83 E8 00                  SUB EAX,0x0
00476EC8  0F 84 33 01 00 00         JZ 0x00477001
00476ECE  48                        DEC EAX
00476ECF  0F 85 A9 01 00 00         JNZ 0x0047707e
00476ED5  66 8B BB 09 06 00 00      MOV DI,word ptr [EBX + 0x609]
00476EDC  0F BF F7                  MOVSX ESI,DI
00476EDF  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
00476EE2  8D 46 01                  LEA EAX,[ESI + 0x1]
00476EE5  3B F0                     CMP ESI,EAX
00476EE7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00476EEA  0F 8F EF 00 00 00         JG 0x00476fdf
00476EF0  66 8B 93 0B 06 00 00      MOV DX,word ptr [EBX + 0x60b]
00476EF7  0F BF C2                  MOVSX EAX,DX
00476EFA  40                        INC EAX
00476EFB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00476EFE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00476F01  EB 03                     JMP 0x00476f06
LAB_00476f03:
00476F03  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_00476f06:
00476F06  0F BF CA                  MOVSX ECX,DX
00476F09  3B C8                     CMP ECX,EAX
00476F0B  0F 8F BC 00 00 00         JG 0x00476fcd
LAB_00476f11:
00476F11  66 8B 43 47               MOV AX,word ptr [EBX + 0x47]
00476F15  66 39 45 08               CMP word ptr [EBP + 0x8],AX
00476F19  75 0A                     JNZ 0x00476f25
00476F1B  66 3B 53 49               CMP DX,word ptr [EBX + 0x49]
00476F1F  0F 84 96 00 00 00         JZ 0x00476fbb
LAB_00476f25:
00476F25  66 8B 83 0D 06 00 00      MOV AX,word ptr [EBX + 0x60d]
00476F2C  66 40                     INC AX
00476F2E  66 83 7D 08 00            CMP word ptr [EBP + 0x8],0x0
00476F33  0F 8C 82 00 00 00         JL 0x00476fbb
00476F39  66 8B 7D 08               MOV DI,word ptr [EBP + 0x8]
00476F3D  66 3B 3D 40 B2 7F 00      CMP DI,word ptr [0x007fb240]
00476F44  7D 75                     JGE 0x00476fbb
00476F46  66 85 D2                  TEST DX,DX
00476F49  7C 70                     JL 0x00476fbb
00476F4B  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00476F52  7D 67                     JGE 0x00476fbb
00476F54  66 85 C0                  TEST AX,AX
00476F57  7C 62                     JL 0x00476fbb
00476F59  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00476F60  7D 59                     JGE 0x00476fbb
00476F62  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00476F69  0F BF C0                  MOVSX EAX,AX
00476F6C  0F AF C7                  IMUL EAX,EDI
00476F6F  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
00476F76  0F AF F9                  IMUL EDI,ECX
00476F79  8B CE                     MOV ECX,ESI
00476F7B  03 C8                     ADD ECX,EAX
00476F7D  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00476F82  03 F9                     ADD EDI,ECX
00476F84  8B 04 F8                  MOV EAX,dword ptr [EAX + EDI*0x8]
00476F87  85 C0                     TEST EAX,EAX
00476F89  74 30                     JZ 0x00476fbb
00476F8B  83 78 20 14               CMP dword ptr [EAX + 0x20],0x14
00476F8F  75 2A                     JNZ 0x00476fbb
00476F91  83 B8 5D 04 00 00 09      CMP dword ptr [EAX + 0x45d],0x9
00476F98  75 21                     JNZ 0x00476fbb
00476F9A  8B 80 11 06 00 00         MOV EAX,dword ptr [EAX + 0x611]
00476FA0  83 F8 02                  CMP EAX,0x2
00476FA3  0F 84 D5 00 00 00         JZ 0x0047707e
00476FA9  83 F8 03                  CMP EAX,0x3
00476FAC  0F 84 CC 00 00 00         JZ 0x0047707e
00476FB2  83 F8 04                  CMP EAX,0x4
00476FB5  0F 84 C3 00 00 00         JZ 0x0047707e
LAB_00476fbb:
00476FBB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00476FBE  42                        INC EDX
00476FBF  0F BF CA                  MOVSX ECX,DX
00476FC2  3B C8                     CMP ECX,EAX
00476FC4  0F 8E 47 FF FF FF         JLE 0x00476f11
00476FCA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00476fcd:
00476FCD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00476FD0  47                        INC EDI
00476FD1  0F BF F7                  MOVSX ESI,DI
00476FD4  3B F1                     CMP ESI,ECX
00476FD6  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
00476FD9  0F 8E 24 FF FF FF         JLE 0x00476f03
LAB_00476fdf:
00476FDF  C7 83 11 06 00 00 02 00 00 00  MOV dword ptr [EBX + 0x611],0x2
00476FE9  C7 83 15 06 00 00 00 00 00 00  MOV dword ptr [EBX + 0x615],0x0
00476FF3  B8 02 00 00 00            MOV EAX,0x2
00476FF8  5F                        POP EDI
00476FF9  5E                        POP ESI
00476FFA  5B                        POP EBX
00476FFB  8B E5                     MOV ESP,EBP
00476FFD  5D                        POP EBP
00476FFE  C2 04 00                  RET 0x4
LAB_00477001:
00477001  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00477004  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
00477007  51                        PUSH ECX
00477008  52                        PUSH EDX
00477009  8B CE                     MOV ECX,ESI
0047700B  E8 C6 BA F8 FF            CALL 0x00402ad6
00477010  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00477016  C7 83 11 06 00 00 03 00 00 00  MOV dword ptr [EBX + 0x611],0x3
00477020  83 F8 06                  CMP EAX,0x6
00477023  74 48                     JZ 0x0047706d
00477025  83 F8 12                  CMP EAX,0x12
00477028  74 24                     JZ 0x0047704e
0047702A  83 F8 22                  CMP EAX,0x22
0047702D  75 4F                     JNZ 0x0047707e
0047702F  8B 03                     MOV EAX,dword ptr [EBX]
00477031  68 D2 01 00 00            PUSH 0x1d2
00477036  6A 03                     PUSH 0x3
00477038  8B CB                     MOV ECX,EBX
0047703A  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
00477040  B8 02 00 00 00            MOV EAX,0x2
00477045  5F                        POP EDI
00477046  5E                        POP ESI
00477047  5B                        POP EBX
00477048  8B E5                     MOV ESP,EBP
0047704A  5D                        POP EBP
0047704B  C2 04 00                  RET 0x4
LAB_0047704e:
0047704E  8B 13                     MOV EDX,dword ptr [EBX]
00477050  68 51 01 00 00            PUSH 0x151
00477055  6A 03                     PUSH 0x3
00477057  8B CB                     MOV ECX,EBX
00477059  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
0047705F  B8 02 00 00 00            MOV EAX,0x2
00477064  5F                        POP EDI
00477065  5E                        POP ESI
00477066  5B                        POP EBX
00477067  8B E5                     MOV ESP,EBP
00477069  5D                        POP EBP
0047706A  C2 04 00                  RET 0x4
LAB_0047706d:
0047706D  8B 03                     MOV EAX,dword ptr [EBX]
0047706F  68 ED 00 00 00            PUSH 0xed
00477074  6A 03                     PUSH 0x3
00477076  8B CB                     MOV ECX,EBX
00477078  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
switchD_00476d22::caseD_2:
0047707E  B8 02 00 00 00            MOV EAX,0x2
00477083  5F                        POP EDI
00477084  5E                        POP ESI
00477085  5B                        POP EBX
00477086  8B E5                     MOV ESP,EBP
00477088  5D                        POP EBP
00477089  C2 04 00                  RET 0x4
LAB_0047708c:
0047708C  83 F8 02                  CMP EAX,0x2
0047708F  0F 85 55 04 00 00         JNZ 0x004774ea
00477095  8B 83 15 06 00 00         MOV EAX,dword ptr [EBX + 0x615]
0047709B  85 C0                     TEST EAX,EAX
0047709D  75 5B                     JNZ 0x004770fa
0047709F  66 8B 83 0D 06 00 00      MOV AX,word ptr [EBX + 0x60d]
004770A6  8B 13                     MOV EDX,dword ptr [EBX]
004770A8  66 69 C0 C8 00            IMUL AX,AX,0xc8
004770AD  05 2C 01 00 00            ADD EAX,0x12c
004770B2  50                        PUSH EAX
004770B3  66 8B 83 0B 06 00 00      MOV AX,word ptr [EBX + 0x60b]
004770BA  66 40                     INC AX
004770BC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004770BF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004770C2  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004770C5  50                        PUSH EAX
004770C6  66 8B 83 09 06 00 00      MOV AX,word ptr [EBX + 0x609]
004770CD  66 40                     INC AX
004770CF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004770D2  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004770D5  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004770D8  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
004770DC  50                        PUSH EAX
004770DD  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
004770E1  51                        PUSH ECX
004770E2  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
004770E6  50                        PUSH EAX
004770E7  51                        PUSH ECX
004770E8  8B CB                     MOV ECX,EBX
004770EA  FF 52 10                  CALL dword ptr [EDX + 0x10]
004770ED  66 89 83 0F 06 00 00      MOV word ptr [EBX + 0x60f],AX
004770F4  89 B3 15 06 00 00         MOV dword ptr [EBX + 0x615],ESI
LAB_004770fa:
004770FA  39 B3 15 06 00 00         CMP dword ptr [EBX + 0x615],ESI
00477100  75 60                     JNZ 0x00477162
00477102  66 8B 93 0F 06 00 00      MOV DX,word ptr [EBX + 0x60f]
00477109  8B CB                     MOV ECX,EBX
0047710B  52                        PUSH EDX
0047710C  E8 A1 BF F8 FF            CALL 0x004030b2
00477111  50                        PUSH EAX
00477112  8B CB                     MOV ECX,EBX
00477114  E8 E3 B1 F8 FF            CALL 0x004022fc
00477119  83 F8 FF                  CMP EAX,-0x1
0047711C  74 13                     JZ 0x00477131
0047711E  85 C0                     TEST EAX,EAX
00477120  75 40                     JNZ 0x00477162
00477122  C7 83 15 06 00 00 02 00 00 00  MOV dword ptr [EBX + 0x615],0x2
0047712C  E9 FD 09 00 00            JMP 0x00477b2e
LAB_00477131:
00477131  68 0C B2 7A 00            PUSH 0x7ab20c
00477136  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047713B  6A 00                     PUSH 0x0
0047713D  6A 00                     PUSH 0x0
0047713F  68 37 32 00 00            PUSH 0x3237
00477144  68 3C 9D 7A 00            PUSH 0x7a9d3c
00477149  E8 82 63 23 00            CALL 0x006ad4d0
0047714E  83 C4 18                  ADD ESP,0x18
00477151  85 C0                     TEST EAX,EAX
00477153  74 01                     JZ 0x00477156
00477155  CC                        INT3
LAB_00477156:
00477156  83 C8 FF                  OR EAX,0xffffffff
00477159  5F                        POP EDI
0047715A  5E                        POP ESI
0047715B  5B                        POP EBX
0047715C  8B E5                     MOV ESP,EBP
0047715E  5D                        POP EBP
0047715F  C2 04 00                  RET 0x4
LAB_00477162:
00477162  8B 83 15 06 00 00         MOV EAX,dword ptr [EBX + 0x615]
00477168  BF 03 00 00 00            MOV EDI,0x3
0047716D  83 F8 02                  CMP EAX,0x2
00477170  75 59                     JNZ 0x004771cb
00477172  66 8B 93 0D 06 00 00      MOV DX,word ptr [EBX + 0x60d]
00477179  66 8B 83 0B 06 00 00      MOV AX,word ptr [EBX + 0x60b]
00477180  66 69 D2 C8 00            IMUL DX,DX,0xc8
00477185  8A 4B 61                  MOV CL,byte ptr [EBX + 0x61]
00477188  81 C2 2C 01 00 00         ADD EDX,0x12c
0047718E  66 40                     INC AX
00477190  51                        PUSH ECX
00477191  52                        PUSH EDX
00477192  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00477195  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00477198  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0047719B  66 8B 83 09 06 00 00      MOV AX,word ptr [EBX + 0x609]
004771A2  66 40                     INC AX
004771A4  52                        PUSH EDX
004771A5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004771A8  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004771AB  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004771AE  66 8B 43 45               MOV AX,word ptr [EBX + 0x45]
004771B2  66 8B 4B 43               MOV CX,word ptr [EBX + 0x43]
004771B6  52                        PUSH EDX
004771B7  66 8B 53 41               MOV DX,word ptr [EBX + 0x41]
004771BB  50                        PUSH EAX
004771BC  51                        PUSH ECX
004771BD  52                        PUSH EDX
004771BE  8B CB                     MOV ECX,EBX
004771C0  E8 90 B2 F8 FF            CALL 0x00402455
004771C5  89 BB 15 06 00 00         MOV dword ptr [EBX + 0x615],EDI
LAB_004771cb:
004771CB  39 BB 15 06 00 00         CMP dword ptr [EBX + 0x615],EDI
004771D1  0F 85 94 02 00 00         JNZ 0x0047746b
004771D7  8D 45 F8                  LEA EAX,[EBP + -0x8]
004771DA  8D 4D F4                  LEA ECX,[EBP + -0xc]
004771DD  50                        PUSH EAX
004771DE  51                        PUSH ECX
004771DF  8B CB                     MOV ECX,EBX
004771E1  E8 61 B6 F8 FF            CALL 0x00402847
004771E6  8A 93 BF 02 00 00         MOV DL,byte ptr [EBX + 0x2bf]
004771EC  33 C9                     XOR ECX,ECX
004771EE  84 D2                     TEST DL,DL
004771F0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004771F3  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004771F6  0F 86 D7 01 00 00         JBE 0x004773d3
LAB_004771fc:
004771FC  66 8B 53 6C               MOV DX,word ptr [EBX + 0x6c]
00477200  0F BF C1                  MOVSX EAX,CX
00477203  52                        PUSH EDX
00477204  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00477207  83 EC 08                  SUB ESP,0x8
0047720A  8B D4                     MOV EDX,ESP
0047720C  8D 8C 43 B3 02 00 00      LEA ECX,[EBX + EAX*0x2 + 0x2b3]
00477213  8B 84 43 B3 02 00 00      MOV EAX,dword ptr [EBX + EAX*0x2 + 0x2b3]
0047721A  89 02                     MOV dword ptr [EDX],EAX
0047721C  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
00477220  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
00477224  8D 55 E0                  LEA EDX,[EBP + -0x20]
00477227  52                        PUSH EDX
00477228  8B CB                     MOV ECX,EBX
0047722A  E8 FD C1 F8 FF            CALL 0x0040342c
0047722F  8B 08                     MOV ECX,dword ptr [EAX]
00477231  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00477234  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
00477238  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0047723D  3B C6                     CMP EAX,ESI
0047723F  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00477242  66 89 55 EC               MOV word ptr [EBP + -0x14],DX
00477246  0F 85 C6 00 00 00         JNZ 0x00477312
0047724C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00477252  6A 00                     PUSH 0x0
00477254  6A 00                     PUSH 0x0
00477256  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0047725C  6A FF                     PUSH -0x1
0047725E  8B CF                     MOV ECX,EDI
00477260  89 7B 1C                  MOV dword ptr [EBX + 0x1c],EDI
00477263  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00477269  6A 00                     PUSH 0x0
0047726B  6A 00                     PUSH 0x0
0047726D  8D B1 39 30 00 00         LEA ESI,[ECX + 0x3039]
00477273  6A 00                     PUSH 0x0
00477275  8B D6                     MOV EDX,ESI
00477277  89 73 1C                  MOV dword ptr [EBX + 0x1c],ESI
0047727A  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00477280  6A 00                     PUSH 0x0
00477282  6A 00                     PUSH 0x0
00477284  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047728A  6A 00                     PUSH 0x0
0047728C  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0047728F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00477292  D9 43 70                  FLD float ptr [EBX + 0x70]
00477295  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0047729B  E8 E8 6F 2B 00            CALL 0x0072e288
004772A0  0F BF C8                  MOVSX ECX,AX
004772A3  8B C7                     MOV EAX,EDI
004772A5  33 D2                     XOR EDX,EDX
004772A7  C1 E8 10                  SHR EAX,0x10
004772AA  BF 07 00 00 00            MOV EDI,0x7
004772AF  F7 F7                     DIV EDI
004772B1  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
004772B5  03 CA                     ADD ECX,EDX
004772B7  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
004772BB  03 CA                     ADD ECX,EDX
004772BD  33 D2                     XOR EDX,EDX
004772BF  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
004772C3  8B C6                     MOV EAX,ESI
004772C5  51                        PUSH ECX
004772C6  8B CF                     MOV ECX,EDI
004772C8  C1 E8 10                  SHR EAX,0x10
004772CB  F7 F1                     DIV ECX
004772CD  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
004772D1  0F BF 4D EA               MOVSX ECX,word ptr [EBP + -0x16]
004772D5  03 D0                     ADD EDX,EAX
004772D7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004772DA  2B D1                     SUB EDX,ECX
004772DC  8B CF                     MOV ECX,EDI
004772DE  83 EA 03                  SUB EDX,0x3
004772E1  52                        PUSH EDX
004772E2  33 D2                     XOR EDX,EDX
004772E4  C1 E8 10                  SHR EAX,0x10
004772E7  F7 F1                     DIV ECX
004772E9  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
004772ED  0F BF 4D E8               MOVSX ECX,word ptr [EBP + -0x18]
004772F1  03 D0                     ADD EDX,EAX
004772F3  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
004772F7  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
004772FD  52                        PUSH EDX
004772FE  57                        PUSH EDI
004772FF  6A 02                     PUSH 0x2
00477301  6A 01                     PUSH 0x1
00477303  E8 2B A1 F8 FF            CALL 0x00401433
00477308  BE 01 00 00 00            MOV ESI,0x1
0047730D  E9 A6 00 00 00            JMP 0x004773b8
LAB_00477312:
00477312  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00477318  05 39 30 00 00            ADD EAX,0x3039
0047731D  BE 07 00 00 00            MOV ESI,0x7
00477322  8B C8                     MOV ECX,EAX
00477324  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00477327  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047732D  81 C1 39 30 00 00         ADD ECX,0x3039
00477333  6A 00                     PUSH 0x0
00477335  8B D1                     MOV EDX,ECX
00477337  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
0047733A  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00477340  C1 E8 10                  SHR EAX,0x10
00477343  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
00477349  33 D2                     XOR EDX,EDX
0047734B  F7 F6                     DIV ESI
0047734D  89 7B 1C                  MOV dword ptr [EBX + 0x1c],EDI
00477350  6A 00                     PUSH 0x0
00477352  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
00477356  6A FF                     PUSH -0x1
00477358  6A 00                     PUSH 0x0
0047735A  6A 00                     PUSH 0x0
0047735C  6A 00                     PUSH 0x0
0047735E  6A 00                     PUSH 0x0
00477360  6A 00                     PUSH 0x0
00477362  6A 00                     PUSH 0x0
00477364  03 D0                     ADD EDX,EAX
00477366  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
0047736A  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
0047736E  8B C1                     MOV EAX,ECX
00477370  52                        PUSH EDX
00477371  33 D2                     XOR EDX,EDX
00477373  C1 E8 10                  SHR EAX,0x10
00477376  8B CE                     MOV ECX,ESI
00477378  F7 F1                     DIV ECX
0047737A  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
0047737E  0F BF 4D EA               MOVSX ECX,word ptr [EBP + -0x16]
00477382  03 D0                     ADD EDX,EAX
00477384  8B C7                     MOV EAX,EDI
00477386  2B D1                     SUB EDX,ECX
00477388  8B CE                     MOV ECX,ESI
0047738A  83 EA 03                  SUB EDX,0x3
0047738D  52                        PUSH EDX
0047738E  33 D2                     XOR EDX,EDX
00477390  C1 E8 10                  SHR EAX,0x10
00477393  F7 F1                     DIV ECX
00477395  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
00477399  0F BF 4D E8               MOVSX ECX,word ptr [EBP + -0x18]
0047739D  03 D0                     ADD EDX,EAX
0047739F  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
004773A3  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
004773A9  52                        PUSH EDX
004773AA  56                        PUSH ESI
004773AB  BE 01 00 00 00            MOV ESI,0x1
004773B0  6A 02                     PUSH 0x2
004773B2  56                        PUSH ESI
004773B3  E8 7B A0 F8 FF            CALL 0x00401433
LAB_004773b8:
004773B8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004773BB  66 0F B6 83 BF 02 00 00   MOVZX AX,byte ptr [EBX + 0x2bf]
004773C3  41                        INC ECX
004773C4  66 3B C8                  CMP CX,AX
004773C7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004773CA  0F 8C 2C FE FF FF         JL 0x004771fc
004773D0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004773d3:
004773D3  83 F8 FF                  CMP EAX,-0x1
004773D6  0F 84 DD 00 00 00         JZ 0x004774b9
004773DC  85 C0                     TEST EAX,EAX
004773DE  0F 85 87 00 00 00         JNZ 0x0047746b
004773E4  66 8B 8B FD 05 00 00      MOV CX,word ptr [EBX + 0x5fd]
004773EB  8A 93 FC 05 00 00         MOV DL,byte ptr [EBX + 0x5fc]
004773F1  56                        PUSH ESI
004773F2  51                        PUSH ECX
004773F3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004773F9  52                        PUSH EDX
004773FA  E8 BB B4 F8 FF            CALL 0x004028ba
004773FF  8B F0                     MOV ESI,EAX
00477401  85 F6                     TEST ESI,ESI
00477403  0F 84 9A 00 00 00         JZ 0x004774a3
00477409  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0047740C  8B 8B FF 05 00 00         MOV ECX,dword ptr [EBX + 0x5ff]
00477412  3B C1                     CMP EAX,ECX
00477414  0F 85 89 00 00 00         JNZ 0x004774a3
0047741A  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0047741D  8B 16                     MOV EDX,dword ptr [ESI]
0047741F  50                        PUSH EAX
00477420  8B CE                     MOV ECX,ESI
00477422  FF 92 08 01 00 00         CALL dword ptr [EDX + 0x108]
00477428  85 C0                     TEST EAX,EAX
0047742A  74 77                     JZ 0x004774a3
0047742C  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0047742F  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
00477432  51                        PUSH ECX
00477433  52                        PUSH EDX
00477434  8B CE                     MOV ECX,ESI
00477436  E8 9B B6 F8 FF            CALL 0x00402ad6
0047743B  8B 83 F7 06 00 00         MOV EAX,dword ptr [EBX + 0x6f7]
00477441  C7 83 11 06 00 00 03 00 00 00  MOV dword ptr [EBX + 0x611],0x3
0047744B  83 F8 06                  CMP EAX,0x6
0047744E  74 4A                     JZ 0x0047749a
00477450  83 F8 12                  CMP EAX,0x12
00477453  74 32                     JZ 0x00477487
00477455  83 F8 22                  CMP EAX,0x22
00477458  75 11                     JNZ 0x0047746b
0047745A  8B 03                     MOV EAX,dword ptr [EBX]
0047745C  68 D2 01 00 00            PUSH 0x1d2
LAB_00477461:
00477461  6A 03                     PUSH 0x3
00477463  8B CB                     MOV ECX,EBX
00477465  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_0047746b:
0047746B  8B 13                     MOV EDX,dword ptr [EBX]
0047746D  8B CB                     MOV ECX,EBX
0047746F  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00477475  F7 D8                     NEG EAX
00477477  1B C0                     SBB EAX,EAX
00477479  24 FD                     AND AL,0xfd
0047747B  83 C0 02                  ADD EAX,0x2
0047747E  5F                        POP EDI
0047747F  5E                        POP ESI
00477480  5B                        POP EBX
00477481  8B E5                     MOV ESP,EBP
00477483  5D                        POP EBP
00477484  C2 04 00                  RET 0x4
LAB_00477487:
00477487  8B 13                     MOV EDX,dword ptr [EBX]
00477489  68 51 01 00 00            PUSH 0x151
0047748E  6A 03                     PUSH 0x3
00477490  8B CB                     MOV ECX,EBX
00477492  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
00477498  EB D1                     JMP 0x0047746b
LAB_0047749a:
0047749A  8B 03                     MOV EAX,dword ptr [EBX]
0047749C  68 ED 00 00 00            PUSH 0xed
004774A1  EB BE                     JMP 0x00477461
LAB_004774a3:
004774A3  C7 83 11 06 00 00 04 00 00 00  MOV dword ptr [EBX + 0x611],0x4
004774AD  C7 83 15 06 00 00 00 00 00 00  MOV dword ptr [EBX + 0x615],0x0
004774B7  EB B2                     JMP 0x0047746b
LAB_004774b9:
004774B9  68 E4 B1 7A 00            PUSH 0x7ab1e4
004774BE  68 CC 4C 7A 00            PUSH 0x7a4ccc
004774C3  6A 00                     PUSH 0x0
004774C5  6A 00                     PUSH 0x0
004774C7  68 5C 32 00 00            PUSH 0x325c
004774CC  68 3C 9D 7A 00            PUSH 0x7a9d3c
004774D1  E8 FA 5F 23 00            CALL 0x006ad4d0
004774D6  83 C4 18                  ADD ESP,0x18
004774D9  85 C0                     TEST EAX,EAX
004774DB  74 01                     JZ 0x004774de
004774DD  CC                        INT3
LAB_004774de:
004774DE  83 C8 FF                  OR EAX,0xffffffff
004774E1  5F                        POP EDI
004774E2  5E                        POP ESI
004774E3  5B                        POP EBX
004774E4  8B E5                     MOV ESP,EBP
004774E6  5D                        POP EBP
004774E7  C2 04 00                  RET 0x4
LAB_004774ea:
004774EA  BF 03 00 00 00            MOV EDI,0x3
004774EF  3B C7                     CMP EAX,EDI
004774F1  0F 85 1B 02 00 00         JNZ 0x00477712
004774F7  66 8B 83 FD 05 00 00      MOV AX,word ptr [EBX + 0x5fd]
004774FE  8A 8B FC 05 00 00         MOV CL,byte ptr [EBX + 0x5fc]
00477504  56                        PUSH ESI
00477505  50                        PUSH EAX
00477506  51                        PUSH ECX
00477507  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0047750D  E8 A8 B3 F8 FF            CALL 0x004028ba
00477512  8B F8                     MOV EDI,EAX
00477514  85 FF                     TEST EDI,EDI
00477516  0F 84 7D 01 00 00         JZ 0x00477699
0047751C  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0047751F  8B 83 FF 05 00 00         MOV EAX,dword ptr [EBX + 0x5ff]
00477525  3B D0                     CMP EDX,EAX
00477527  0F 85 6C 01 00 00         JNZ 0x00477699
0047752D  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00477530  8B 07                     MOV EAX,dword ptr [EDI]
00477532  51                        PUSH ECX
00477533  8B CF                     MOV ECX,EDI
00477535  FF 90 08 01 00 00         CALL dword ptr [EAX + 0x108]
0047753B  85 C0                     TEST EAX,EAX
0047753D  0F 84 56 01 00 00         JZ 0x00477699
00477543  8B CF                     MOV ECX,EDI
00477545  E8 F5 BF F8 FF            CALL 0x0040353f
0047754A  48                        DEC EAX
0047754B  74 08                     JZ 0x00477555
0047754D  48                        DEC EAX
0047754E  74 5D                     JZ 0x004775ad
00477550  E9 16 FF FF FF            JMP 0x0047746b
LAB_00477555:
00477555  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
0047755B  85 C9                     TEST ECX,ECX
0047755D  74 2F                     JZ 0x0047758e
0047755F  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
00477563  66 8B 57 24               MOV DX,word ptr [EDI + 0x24]
00477567  66 89 45 D6               MOV word ptr [EBP + -0x2a],AX
0047756B  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
0047756F  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
00477573  66 8B 53 24               MOV DX,word ptr [EBX + 0x24]
00477577  66 89 45 DA               MOV word ptr [EBP + -0x26],AX
0047757B  C7 45 D0 D4 5D 00 00      MOV dword ptr [EBP + -0x30],0x5dd4
00477582  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
00477586  8B 11                     MOV EDX,dword ptr [ECX]
00477588  8D 45 C0                  LEA EAX,[EBP + -0x40]
0047758B  50                        PUSH EAX
0047758C  FF 12                     CALL dword ptr [EDX]
LAB_0047758e:
0047758E  8B 17                     MOV EDX,dword ptr [EDI]
00477590  8B CF                     MOV ECX,EDI
00477592  FF 92 0C 01 00 00         CALL dword ptr [EDX + 0x10c]
00477598  8B 8B F3 06 00 00         MOV ECX,dword ptr [EBX + 0x6f3]
0047759E  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004775A1  8B 07                     MOV EAX,dword ptr [EDI]
004775A3  51                        PUSH ECX
004775A4  52                        PUSH EDX
004775A5  8B CF                     MOV ECX,EDI
004775A7  FF 90 10 01 00 00         CALL dword ptr [EAX + 0x110]
LAB_004775ad:
004775AD  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004775B0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004775B6  50                        PUSH EAX
004775B7  E8 FB D3 F8 FF            CALL 0x004049b7
004775BC  8A D0                     MOV DL,AL
004775BE  8B 07                     MOV EAX,dword ptr [EDI]
004775C0  81 E2 FF 00 00 00         AND EDX,0xff
004775C6  8B CF                     MOV ECX,EDI
004775C8  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004775CB  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004775CE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004775D1  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004775D4  03 D1                     ADD EDX,ECX
004775D6  8D 4D C4                  LEA ECX,[EBP + -0x3c]
004775D9  33 FF                     XOR EDI,EDI
004775DB  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
004775DE  8B 04 95 74 13 7E 00      MOV EAX,dword ptr [EDX*0x4 + 0x7e1374]
004775E5  8B 13                     MOV EDX,dword ptr [EBX]
004775E7  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004775EA  8D 45 A0                  LEA EAX,[EBP + -0x60]
004775ED  50                        PUSH EAX
004775EE  8B CB                     MOV ECX,EBX
004775F0  C7 45 CC FF 00 00 00      MOV dword ptr [EBP + -0x34],0xff
004775F7  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
004775FA  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
004775FD  C7 45 B0 10 01 00 00      MOV dword ptr [EBP + -0x50],0x110
00477604  FF 12                     CALL dword ptr [EDX]
00477606  0F BF 83 09 06 00 00      MOVSX EAX,word ptr [EBX + 0x609]
0047760D  40                        INC EAX
0047760E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00477611  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00477614  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00477617  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
0047761B  3B C2                     CMP EAX,EDX
0047761D  75 2E                     JNZ 0x0047764d
0047761F  0F BF 83 0B 06 00 00      MOVSX EAX,word ptr [EBX + 0x60b]
00477626  40                        INC EAX
00477627  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047762A  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047762D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00477630  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
00477634  3B C2                     CMP EAX,EDX
00477636  75 15                     JNZ 0x0047764d
00477638  C7 83 11 06 00 00 04 00 00 00  MOV dword ptr [EBX + 0x611],0x4
00477642  89 BB 15 06 00 00         MOV dword ptr [EBX + 0x615],EDI
00477648  E9 1E FE FF FF            JMP 0x0047746b
LAB_0047764d:
0047764D  8B CB                     MOV ECX,EBX
0047764F  C7 83 11 06 00 00 05 00 00 00  MOV dword ptr [EBX + 0x611],0x5
00477659  E8 94 A7 F8 FF            CALL 0x00401df2
0047765E  0F BF 8B 0D 06 00 00      MOVSX ECX,word ptr [EBX + 0x60d]
00477665  0F BF 93 0B 06 00 00      MOVSX EDX,word ptr [EBX + 0x60b]
0047766C  0F BF 83 09 06 00 00      MOVSX EAX,word ptr [EBX + 0x609]
00477673  51                        PUSH ECX
00477674  52                        PUSH EDX
00477675  50                        PUSH EAX
00477676  8B CB                     MOV ECX,EBX
00477678  E8 EE D8 F8 FF            CALL 0x00404f6b
0047767D  57                        PUSH EDI
0047767E  8B CB                     MOV ECX,EBX
00477680  E8 AF C4 F8 FF            CALL 0x00403b34
00477685  83 F8 FF                  CMP EAX,-0x1
00477688  0F 85 DD FD FF FF         JNZ 0x0047746b
0047768E  0B C0                     OR EAX,EAX
00477690  5F                        POP EDI
00477691  5E                        POP ESI
00477692  5B                        POP EBX
00477693  8B E5                     MOV ESP,EBP
00477695  5D                        POP EBP
00477696  C2 04 00                  RET 0x4
LAB_00477699:
00477699  0F BF 83 09 06 00 00      MOVSX EAX,word ptr [EBX + 0x609]
004776A0  40                        INC EAX
004776A1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004776A4  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004776A7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004776AA  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
004776AE  3B C2                     CMP EAX,EDX
004776B0  75 49                     JNZ 0x004776fb
004776B2  0F BF 83 0B 06 00 00      MOVSX EAX,word ptr [EBX + 0x60b]
004776B9  40                        INC EAX
004776BA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004776BD  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004776C0  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004776C3  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
004776C7  3B C2                     CMP EAX,EDX
004776C9  75 30                     JNZ 0x004776fb
004776CB  8B 13                     MOV EDX,dword ptr [EBX]
004776CD  8B CB                     MOV ECX,EBX
004776CF  C7 83 11 06 00 00 04 00 00 00  MOV dword ptr [EBX + 0x611],0x4
004776D9  C7 83 15 06 00 00 00 00 00 00  MOV dword ptr [EBX + 0x615],0x0
004776E3  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004776E9  F7 D8                     NEG EAX
004776EB  1B C0                     SBB EAX,EAX
004776ED  24 FD                     AND AL,0xfd
004776EF  83 C0 02                  ADD EAX,0x2
004776F2  5F                        POP EDI
004776F3  5E                        POP ESI
004776F4  5B                        POP EBX
004776F5  8B E5                     MOV ESP,EBP
004776F7  5D                        POP EBP
004776F8  C2 04 00                  RET 0x4
LAB_004776fb:
004776FB  8B 03                     MOV EAX,dword ptr [EBX]
004776FD  8B CB                     MOV ECX,EBX
004776FF  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00477705  F7 D8                     NEG EAX
00477707  1B C0                     SBB EAX,EAX
00477709  5F                        POP EDI
0047770A  5E                        POP ESI
0047770B  5B                        POP EBX
0047770C  8B E5                     MOV ESP,EBP
0047770E  5D                        POP EBP
0047770F  C2 04 00                  RET 0x4
LAB_00477712:
00477712  83 F8 04                  CMP EAX,0x4
00477715  0F 85 C5 03 00 00         JNZ 0x00477ae0
0047771B  8B 83 15 06 00 00         MOV EAX,dword ptr [EBX + 0x615]
00477721  85 C0                     TEST EAX,EAX
00477723  75 53                     JNZ 0x00477778
00477725  66 8B 83 07 06 00 00      MOV AX,word ptr [EBX + 0x607]
0047772C  66 8B 8B 05 06 00 00      MOV CX,word ptr [EBX + 0x605]
00477733  66 69 C0 C8 00            IMUL AX,AX,0xc8
00477738  66 69 C9 C9 00            IMUL CX,CX,0xc9
0047773D  83 C0 64                  ADD EAX,0x64
00477740  8B 13                     MOV EDX,dword ptr [EBX]
00477742  50                        PUSH EAX
00477743  66 8B 83 03 06 00 00      MOV AX,word ptr [EBX + 0x603]
0047774A  66 69 C0 C9 00            IMUL AX,AX,0xc9
0047774F  83 C1 64                  ADD ECX,0x64
00477752  83 C0 64                  ADD EAX,0x64
00477755  51                        PUSH ECX
00477756  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
0047775A  50                        PUSH EAX
0047775B  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
0047775F  51                        PUSH ECX
00477760  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
00477764  50                        PUSH EAX
00477765  51                        PUSH ECX
00477766  8B CB                     MOV ECX,EBX
00477768  FF 52 10                  CALL dword ptr [EDX + 0x10]
0047776B  66 89 83 0F 06 00 00      MOV word ptr [EBX + 0x60f],AX
00477772  89 B3 15 06 00 00         MOV dword ptr [EBX + 0x615],ESI
LAB_00477778:
00477778  39 B3 15 06 00 00         CMP dword ptr [EBX + 0x615],ESI
0047777E  75 60                     JNZ 0x004777e0
00477780  66 8B 93 0F 06 00 00      MOV DX,word ptr [EBX + 0x60f]
00477787  8B CB                     MOV ECX,EBX
00477789  52                        PUSH EDX
0047778A  E8 23 B9 F8 FF            CALL 0x004030b2
0047778F  50                        PUSH EAX
00477790  8B CB                     MOV ECX,EBX
00477792  E8 65 AB F8 FF            CALL 0x004022fc
00477797  83 F8 FF                  CMP EAX,-0x1
0047779A  74 13                     JZ 0x004777af
0047779C  85 C0                     TEST EAX,EAX
0047779E  75 40                     JNZ 0x004777e0
004777A0  C7 83 15 06 00 00 02 00 00 00  MOV dword ptr [EBX + 0x615],0x2
004777AA  E9 7F 03 00 00            JMP 0x00477b2e
LAB_004777af:
004777AF  68 BC B1 7A 00            PUSH 0x7ab1bc
004777B4  68 CC 4C 7A 00            PUSH 0x7a4ccc
004777B9  6A 00                     PUSH 0x0
004777BB  6A 00                     PUSH 0x0
004777BD  68 C1 32 00 00            PUSH 0x32c1
004777C2  68 3C 9D 7A 00            PUSH 0x7a9d3c
004777C7  E8 04 5D 23 00            CALL 0x006ad4d0
004777CC  83 C4 18                  ADD ESP,0x18
004777CF  85 C0                     TEST EAX,EAX
004777D1  74 01                     JZ 0x004777d4
004777D3  CC                        INT3
LAB_004777d4:
004777D4  83 C8 FF                  OR EAX,0xffffffff
004777D7  5F                        POP EDI
004777D8  5E                        POP ESI
004777D9  5B                        POP EBX
004777DA  8B E5                     MOV ESP,EBP
004777DC  5D                        POP EBP
004777DD  C2 04 00                  RET 0x4
LAB_004777e0:
004777E0  83 BB 15 06 00 00 02      CMP dword ptr [EBX + 0x615],0x2
004777E7  75 50                     JNZ 0x00477839
004777E9  8A 4B 61                  MOV CL,byte ptr [EBX + 0x61]
004777EC  66 8B 93 07 06 00 00      MOV DX,word ptr [EBX + 0x607]
004777F3  66 8B 83 05 06 00 00      MOV AX,word ptr [EBX + 0x605]
004777FA  51                        PUSH ECX
004777FB  66 8B 8B 03 06 00 00      MOV CX,word ptr [EBX + 0x603]
00477802  66 69 D2 C8 00            IMUL DX,DX,0xc8
00477807  66 69 C0 C9 00            IMUL AX,AX,0xc9
0047780C  66 69 C9 C9 00            IMUL CX,CX,0xc9
00477811  83 C2 64                  ADD EDX,0x64
00477814  83 C0 64                  ADD EAX,0x64
00477817  52                        PUSH EDX
00477818  66 8B 53 45               MOV DX,word ptr [EBX + 0x45]
0047781C  83 C1 64                  ADD ECX,0x64
0047781F  50                        PUSH EAX
00477820  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
00477824  51                        PUSH ECX
00477825  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
00477829  52                        PUSH EDX
0047782A  50                        PUSH EAX
0047782B  51                        PUSH ECX
0047782C  8B CB                     MOV ECX,EBX
0047782E  E8 22 AC F8 FF            CALL 0x00402455
00477833  89 BB 15 06 00 00         MOV dword ptr [EBX + 0x615],EDI
LAB_00477839:
00477839  39 BB 15 06 00 00         CMP dword ptr [EBX + 0x615],EDI
0047783F  0F 85 7F 02 00 00         JNZ 0x00477ac4
00477845  8D 55 F4                  LEA EDX,[EBP + -0xc]
00477848  8D 45 F8                  LEA EAX,[EBP + -0x8]
0047784B  52                        PUSH EDX
0047784C  50                        PUSH EAX
0047784D  8B CB                     MOV ECX,EBX
0047784F  E8 F3 AF F8 FF            CALL 0x00402847
00477854  8A 93 BF 02 00 00         MOV DL,byte ptr [EBX + 0x2bf]
0047785A  33 C9                     XOR ECX,ECX
0047785C  84 D2                     TEST DL,DL
0047785E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00477861  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00477864  0F 86 D7 01 00 00         JBE 0x00477a41
LAB_0047786a:
0047786A  66 8B 53 6C               MOV DX,word ptr [EBX + 0x6c]
0047786E  0F BF C1                  MOVSX EAX,CX
00477871  52                        PUSH EDX
00477872  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00477875  83 EC 08                  SUB ESP,0x8
00477878  8B D4                     MOV EDX,ESP
0047787A  8D 8C 43 B3 02 00 00      LEA ECX,[EBX + EAX*0x2 + 0x2b3]
00477881  8B 84 43 B3 02 00 00      MOV EAX,dword ptr [EBX + EAX*0x2 + 0x2b3]
00477888  89 02                     MOV dword ptr [EDX],EAX
0047788A  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0047788E  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
00477892  8D 55 E0                  LEA EDX,[EBP + -0x20]
00477895  52                        PUSH EDX
00477896  8B CB                     MOV ECX,EBX
00477898  E8 8F BB F8 FF            CALL 0x0040342c
0047789D  8B 08                     MOV ECX,dword ptr [EAX]
0047789F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004778A2  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
004778A6  A1 2C 73 80 00            MOV EAX,[0x0080732c]
004778AB  3B C6                     CMP EAX,ESI
004778AD  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
004778B0  66 89 55 EC               MOV word ptr [EBP + -0x14],DX
004778B4  0F 85 C6 00 00 00         JNZ 0x00477980
004778BA  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004778C0  6A 00                     PUSH 0x0
004778C2  6A 00                     PUSH 0x0
004778C4  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
004778CA  6A FF                     PUSH -0x1
004778CC  8B CF                     MOV ECX,EDI
004778CE  89 7B 1C                  MOV dword ptr [EBX + 0x1c],EDI
004778D1  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
004778D7  6A 00                     PUSH 0x0
004778D9  6A 00                     PUSH 0x0
004778DB  8D B1 39 30 00 00         LEA ESI,[ECX + 0x3039]
004778E1  6A 00                     PUSH 0x0
004778E3  8B D6                     MOV EDX,ESI
004778E5  89 73 1C                  MOV dword ptr [EBX + 0x1c],ESI
004778E8  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004778EE  6A 00                     PUSH 0x0
004778F0  6A 00                     PUSH 0x0
004778F2  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004778F8  6A 00                     PUSH 0x0
004778FA  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
004778FD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00477900  D9 43 70                  FLD float ptr [EBX + 0x70]
00477903  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00477909  E8 7A 69 2B 00            CALL 0x0072e288
0047790E  0F BF C8                  MOVSX ECX,AX
00477911  8B C7                     MOV EAX,EDI
00477913  33 D2                     XOR EDX,EDX
00477915  C1 E8 10                  SHR EAX,0x10
00477918  BF 07 00 00 00            MOV EDI,0x7
0047791D  F7 F7                     DIV EDI
0047791F  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
00477923  03 CA                     ADD ECX,EDX
00477925  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
00477929  03 CA                     ADD ECX,EDX
0047792B  33 D2                     XOR EDX,EDX
0047792D  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
00477931  8B C6                     MOV EAX,ESI
00477933  51                        PUSH ECX
00477934  8B CF                     MOV ECX,EDI
00477936  C1 E8 10                  SHR EAX,0x10
00477939  F7 F1                     DIV ECX
0047793B  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
0047793F  0F BF 4D EA               MOVSX ECX,word ptr [EBP + -0x16]
00477943  03 D0                     ADD EDX,EAX
00477945  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00477948  2B D1                     SUB EDX,ECX
0047794A  8B CF                     MOV ECX,EDI
0047794C  83 EA 03                  SUB EDX,0x3
0047794F  52                        PUSH EDX
00477950  33 D2                     XOR EDX,EDX
00477952  C1 E8 10                  SHR EAX,0x10
00477955  F7 F1                     DIV ECX
00477957  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
0047795B  0F BF 4D E8               MOVSX ECX,word ptr [EBP + -0x18]
0047795F  03 D0                     ADD EDX,EAX
00477961  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
00477965  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047796B  52                        PUSH EDX
0047796C  57                        PUSH EDI
0047796D  6A 02                     PUSH 0x2
0047796F  6A 01                     PUSH 0x1
00477971  E8 BD 9A F8 FF            CALL 0x00401433
00477976  BE 01 00 00 00            MOV ESI,0x1
0047797B  E9 A6 00 00 00            JMP 0x00477a26
LAB_00477980:
00477980  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00477986  05 39 30 00 00            ADD EAX,0x3039
0047798B  BE 07 00 00 00            MOV ESI,0x7
00477990  8B C8                     MOV ECX,EAX
00477992  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00477995  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047799B  81 C1 39 30 00 00         ADD ECX,0x3039
004779A1  6A 00                     PUSH 0x0
004779A3  8B D1                     MOV EDX,ECX
004779A5  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
004779A8  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004779AE  C1 E8 10                  SHR EAX,0x10
004779B1  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
004779B7  33 D2                     XOR EDX,EDX
004779B9  F7 F6                     DIV ESI
004779BB  89 7B 1C                  MOV dword ptr [EBX + 0x1c],EDI
004779BE  6A 00                     PUSH 0x0
004779C0  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
004779C4  6A FF                     PUSH -0x1
004779C6  6A 00                     PUSH 0x0
004779C8  6A 00                     PUSH 0x0
004779CA  6A 00                     PUSH 0x0
004779CC  6A 00                     PUSH 0x0
004779CE  6A 00                     PUSH 0x0
004779D0  6A 00                     PUSH 0x0
004779D2  03 D0                     ADD EDX,EAX
004779D4  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
004779D8  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
004779DC  8B C1                     MOV EAX,ECX
004779DE  52                        PUSH EDX
004779DF  33 D2                     XOR EDX,EDX
004779E1  C1 E8 10                  SHR EAX,0x10
004779E4  8B CE                     MOV ECX,ESI
004779E6  F7 F1                     DIV ECX
004779E8  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
004779EC  0F BF 4D EA               MOVSX ECX,word ptr [EBP + -0x16]
004779F0  03 D0                     ADD EDX,EAX
004779F2  8B C7                     MOV EAX,EDI
004779F4  2B D1                     SUB EDX,ECX
004779F6  8B CE                     MOV ECX,ESI
004779F8  83 EA 03                  SUB EDX,0x3
004779FB  52                        PUSH EDX
004779FC  33 D2                     XOR EDX,EDX
004779FE  C1 E8 10                  SHR EAX,0x10
00477A01  F7 F1                     DIV ECX
00477A03  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
00477A07  0F BF 4D E8               MOVSX ECX,word ptr [EBP + -0x18]
00477A0B  03 D0                     ADD EDX,EAX
00477A0D  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
00477A11  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00477A17  52                        PUSH EDX
00477A18  56                        PUSH ESI
00477A19  BE 01 00 00 00            MOV ESI,0x1
00477A1E  6A 02                     PUSH 0x2
00477A20  56                        PUSH ESI
00477A21  E8 0D 9A F8 FF            CALL 0x00401433
LAB_00477a26:
00477A26  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00477A29  66 0F B6 83 BF 02 00 00   MOVZX AX,byte ptr [EBX + 0x2bf]
00477A31  41                        INC ECX
00477A32  66 3B C8                  CMP CX,AX
00477A35  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00477A38  0F 8C 2C FE FF FF         JL 0x0047786a
00477A3E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00477a41:
00477A41  83 F8 FF                  CMP EAX,-0x1
00477A44  74 4D                     JZ 0x00477a93
00477A46  85 C0                     TEST EAX,EAX
00477A48  75 7A                     JNZ 0x00477ac4
00477A4A  8B CB                     MOV ECX,EBX
00477A4C  C7 83 11 06 00 00 05 00 00 00  MOV dword ptr [EBX + 0x611],0x5
00477A56  E8 97 A3 F8 FF            CALL 0x00401df2
00477A5B  0F BF 8B 0D 06 00 00      MOVSX ECX,word ptr [EBX + 0x60d]
00477A62  0F BF 93 0B 06 00 00      MOVSX EDX,word ptr [EBX + 0x60b]
00477A69  0F BF 83 09 06 00 00      MOVSX EAX,word ptr [EBX + 0x609]
00477A70  51                        PUSH ECX
00477A71  52                        PUSH EDX
00477A72  50                        PUSH EAX
00477A73  8B CB                     MOV ECX,EBX
00477A75  E8 F1 D4 F8 FF            CALL 0x00404f6b
00477A7A  6A 00                     PUSH 0x0
00477A7C  8B CB                     MOV ECX,EBX
00477A7E  E8 B1 C0 F8 FF            CALL 0x00403b34
00477A83  83 F8 FF                  CMP EAX,-0x1
00477A86  75 3C                     JNZ 0x00477ac4
00477A88  0B C0                     OR EAX,EAX
00477A8A  5F                        POP EDI
00477A8B  5E                        POP ESI
00477A8C  5B                        POP EBX
00477A8D  8B E5                     MOV ESP,EBP
00477A8F  5D                        POP EBP
00477A90  C2 04 00                  RET 0x4
LAB_00477a93:
00477A93  68 94 B1 7A 00            PUSH 0x7ab194
00477A98  68 CC 4C 7A 00            PUSH 0x7a4ccc
00477A9D  6A 00                     PUSH 0x0
00477A9F  6A 00                     PUSH 0x0
00477AA1  68 E6 32 00 00            PUSH 0x32e6
00477AA6  68 3C 9D 7A 00            PUSH 0x7a9d3c
00477AAB  E8 20 5A 23 00            CALL 0x006ad4d0
00477AB0  83 C4 18                  ADD ESP,0x18
00477AB3  85 C0                     TEST EAX,EAX
00477AB5  74 01                     JZ 0x00477ab8
00477AB7  CC                        INT3
LAB_00477ab8:
00477AB8  83 C8 FF                  OR EAX,0xffffffff
00477ABB  5F                        POP EDI
00477ABC  5E                        POP ESI
00477ABD  5B                        POP EBX
00477ABE  8B E5                     MOV ESP,EBP
00477AC0  5D                        POP EBP
00477AC1  C2 04 00                  RET 0x4
LAB_00477ac4:
00477AC4  8B 13                     MOV EDX,dword ptr [EBX]
00477AC6  8B CB                     MOV ECX,EBX
00477AC8  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00477ACE  F7 D8                     NEG EAX
00477AD0  1B C0                     SBB EAX,EAX
00477AD2  24 FD                     AND AL,0xfd
00477AD4  83 C0 02                  ADD EAX,0x2
00477AD7  5F                        POP EDI
00477AD8  5E                        POP ESI
00477AD9  5B                        POP EBX
00477ADA  8B E5                     MOV ESP,EBP
00477ADC  5D                        POP EBP
00477ADD  C2 04 00                  RET 0x4
LAB_00477ae0:
00477AE0  83 F8 05                  CMP EAX,0x5
00477AE3  0F 85 A9 00 00 00         JNZ 0x00477b92
00477AE9  6A 02                     PUSH 0x2
00477AEB  8B CB                     MOV ECX,EBX
00477AED  E8 42 C0 F8 FF            CALL 0x00403b34
00477AF2  83 F8 FF                  CMP EAX,-0x1
00477AF5  74 6A                     JZ 0x00477b61
00477AF7  85 C0                     TEST EAX,EAX
00477AF9  74 4F                     JZ 0x00477b4a
00477AFB  3B C7                     CMP EAX,EDI
00477AFD  75 2F                     JNZ 0x00477b2e
00477AFF  8B CB                     MOV ECX,EBX
00477B01  E8 EC A2 F8 FF            CALL 0x00401df2
00477B06  0F BF 83 0D 06 00 00      MOVSX EAX,word ptr [EBX + 0x60d]
00477B0D  0F BF 8B 0B 06 00 00      MOVSX ECX,word ptr [EBX + 0x60b]
00477B14  0F BF 93 09 06 00 00      MOVSX EDX,word ptr [EBX + 0x609]
00477B1B  50                        PUSH EAX
00477B1C  51                        PUSH ECX
00477B1D  52                        PUSH EDX
00477B1E  8B CB                     MOV ECX,EBX
00477B20  E8 46 D4 F8 FF            CALL 0x00404f6b
00477B25  6A 00                     PUSH 0x0
00477B27  8B CB                     MOV ECX,EBX
00477B29  E8 06 C0 F8 FF            CALL 0x00403b34
LAB_00477b2e:
00477B2E  8B 03                     MOV EAX,dword ptr [EBX]
00477B30  8B CB                     MOV ECX,EBX
00477B32  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00477B38  F7 D8                     NEG EAX
00477B3A  1B C0                     SBB EAX,EAX
00477B3C  24 FD                     AND AL,0xfd
00477B3E  83 C0 02                  ADD EAX,0x2
00477B41  5F                        POP EDI
00477B42  5E                        POP ESI
00477B43  5B                        POP EBX
00477B44  8B E5                     MOV ESP,EBP
00477B46  5D                        POP EBP
00477B47  C2 04 00                  RET 0x4
LAB_00477b4a:
00477B4A  8B 13                     MOV EDX,dword ptr [EBX]
00477B4C  8B CB                     MOV ECX,EBX
00477B4E  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00477B54  F7 D8                     NEG EAX
00477B56  1B C0                     SBB EAX,EAX
00477B58  5F                        POP EDI
00477B59  5E                        POP ESI
00477B5A  5B                        POP EBX
00477B5B  8B E5                     MOV ESP,EBP
00477B5D  5D                        POP EBP
00477B5E  C2 04 00                  RET 0x4
LAB_00477b61:
00477B61  68 64 B1 7A 00            PUSH 0x7ab164
00477B66  68 CC 4C 7A 00            PUSH 0x7a4ccc
00477B6B  6A 00                     PUSH 0x0
00477B6D  6A 00                     PUSH 0x0
00477B6F  68 FC 32 00 00            PUSH 0x32fc
00477B74  68 3C 9D 7A 00            PUSH 0x7a9d3c
00477B79  E8 52 59 23 00            CALL 0x006ad4d0
00477B7E  83 C4 18                  ADD ESP,0x18
00477B81  85 C0                     TEST EAX,EAX
00477B83  74 01                     JZ 0x00477b86
00477B85  CC                        INT3
LAB_00477b86:
00477B86  83 C8 FF                  OR EAX,0xffffffff
00477B89  5F                        POP EDI
00477B8A  5E                        POP ESI
00477B8B  5B                        POP EBX
00477B8C  8B E5                     MOV ESP,EBP
00477B8E  5D                        POP EBP
00477B8F  C2 04 00                  RET 0x4
LAB_00477b92:
00477B92  68 38 B1 7A 00            PUSH 0x7ab138
00477B97  68 CC 4C 7A 00            PUSH 0x7a4ccc
00477B9C  6A 00                     PUSH 0x0
00477B9E  6A 00                     PUSH 0x0
00477BA0  68 0E 33 00 00            PUSH 0x330e
00477BA5  68 3C 9D 7A 00            PUSH 0x7a9d3c
00477BAA  E8 21 59 23 00            CALL 0x006ad4d0
00477BAF  83 C4 18                  ADD ESP,0x18
00477BB2  85 C0                     TEST EAX,EAX
00477BB4  74 01                     JZ 0x00477bb7
00477BB6  CC                        INT3
LAB_00477bb7:
00477BB7  5F                        POP EDI
00477BB8  5E                        POP ESI
00477BB9  83 C8 FF                  OR EAX,0xffffffff
00477BBC  5B                        POP EBX
00477BBD  8B E5                     MOV ESP,EBP
00477BBF  5D                        POP EBP
00477BC0  C2 04 00                  RET 0x4
LAB_00477bc3:
00477BC3  B9 17 00 00 00            MOV ECX,0x17
00477BC8  33 C0                     XOR EAX,EAX
00477BCA  8D BB CC 02 00 00         LEA EDI,[EBX + 0x2cc]
00477BD0  F3 AB                     STOSD.REP ES:EDI
00477BD2  66 8B 8B ED 03 00 00      MOV CX,word ptr [EBX + 0x3ed]
00477BD9  8B 93 EF 03 00 00         MOV EDX,dword ptr [EBX + 0x3ef]
00477BDF  89 83 C4 02 00 00         MOV dword ptr [EBX + 0x2c4],EAX
00477BE5  8A 83 EC 03 00 00         MOV AL,byte ptr [EBX + 0x3ec]
00477BEB  66 89 8B FD 05 00 00      MOV word ptr [EBX + 0x5fd],CX
00477BF2  8B CB                     MOV ECX,EBX
00477BF4  88 83 FC 05 00 00         MOV byte ptr [EBX + 0x5fc],AL
00477BFA  89 93 FF 05 00 00         MOV dword ptr [EBX + 0x5ff],EDX
00477C00  E8 9F C7 F8 FF            CALL 0x004043a4
00477C05  3B C6                     CMP EAX,ESI
00477C07  0F 85 18 F2 FF FF         JNZ 0x00476e25
00477C0D  0F BF 83 07 06 00 00      MOVSX EAX,word ptr [EBX + 0x607]
00477C14  0F BF 8B 05 06 00 00      MOVSX ECX,word ptr [EBX + 0x605]
00477C1B  0F BF 93 03 06 00 00      MOVSX EDX,word ptr [EBX + 0x603]
00477C22  50                        PUSH EAX
00477C23  51                        PUSH ECX
00477C24  C7 83 11 06 00 00 00 00 00 00  MOV dword ptr [EBX + 0x611],0x0
00477C2E  52                        PUSH EDX
00477C2F  E9 86 F1 FF FF            JMP 0x00476dba
