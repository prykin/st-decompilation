FUN_00558dc0:
00558DC0  55                        PUSH EBP
00558DC1  8B EC                     MOV EBP,ESP
00558DC3  83 EC 0C                  SUB ESP,0xc
00558DC6  53                        PUSH EBX
00558DC7  56                        PUSH ESI
00558DC8  57                        PUSH EDI
00558DC9  8B F9                     MOV EDI,ECX
00558DCB  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
00558DD1  85 C0                     TEST EAX,EAX
00558DD3  0F 84 77 02 00 00         JZ 0x00559050
00558DD9  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00558DDC  85 F6                     TEST ESI,ESI
00558DDE  0F 8C 6C 02 00 00         JL 0x00559050
00558DE4  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00558DE7  83 FB 08                  CMP EBX,0x8
00558DEA  0F 83 60 02 00 00         JNC 0x00559050
00558DF0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00558DF5  85 C0                     TEST EAX,EAX
00558DF7  74 11                     JZ 0x00558e0a
00558DF9  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
00558DFC  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00558E04  0F 83 46 02 00 00         JNC 0x00559050
LAB_00558e0a:
00558E0A  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00558E0D  F6 C4 10                  TEST AH,0x10
00558E10  74 1B                     JZ 0x00558e2d
00558E12  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00558E15  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00558E18  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00558E1B  50                        PUSH EAX
00558E1C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00558E1F  56                        PUSH ESI
00558E20  53                        PUSH EBX
00558E21  51                        PUSH ECX
00558E22  52                        PUSH EDX
00558E23  50                        PUSH EAX
00558E24  6A 00                     PUSH 0x0
00558E26  8B CF                     MOV ECX,EDI
00558E28  E8 D5 AC EA FF            CALL 0x00403b02
LAB_00558e2d:
00558E2D  8A 84 3B FC 00 00 00      MOV AL,byte ptr [EBX + EDI*0x1 + 0xfc]
00558E34  84 C0                     TEST AL,AL
00558E36  0F 84 14 02 00 00         JZ 0x00559050
00558E3C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00558E3F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00558E42  8D 5C 36 01               LEA EBX,[ESI + ESI*0x1 + 0x1]
00558E46  2B CE                     SUB ECX,ESI
00558E48  2B D6                     SUB EDX,ESI
00558E4A  56                        PUSH ESI
00558E4B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00558E4E  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00558E51  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00558E54  E8 66 9A EA FF            CALL 0x004028bf
00558E59  83 C4 04                  ADD ESP,0x4
00558E5C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00558E5F  85 C0                     TEST EAX,EAX
00558E61  74 6E                     JZ 0x00558ed1
00558E63  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
00558E66  85 C9                     TEST ECX,ECX
00558E68  74 67                     JZ 0x00558ed1
00558E6A  F6 45 20 01               TEST byte ptr [EBP + 0x20],0x1
00558E6E  74 61                     JZ 0x00558ed1
00558E70  33 F6                     XOR ESI,ESI
00558E72  85 DB                     TEST EBX,EBX
00558E74  7E 58                     JLE 0x00558ece
00558E76  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00558e79:
00558E79  33 DB                     XOR EBX,EBX
LAB_00558e7b:
00558E7B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00558E7E  80 3C 18 00               CMP byte ptr [EAX + EBX*0x1],0x0
00558E82  74 35                     JZ 0x00558eb9
00558E84  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00558E87  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00558E8A  8D 14 0E                  LEA EDX,[ESI + ECX*0x1]
00558E8D  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00558E90  85 C9                     TEST ECX,ECX
00558E92  7C 25                     JL 0x00558eb9
00558E94  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00558E97  3B C8                     CMP ECX,EAX
00558E99  7D 1E                     JGE 0x00558eb9
00558E9B  85 D2                     TEST EDX,EDX
00558E9D  7C 1A                     JL 0x00558eb9
00558E9F  3B 57 24                  CMP EDX,dword ptr [EDI + 0x24]
00558EA2  7D 15                     JGE 0x00558eb9
00558EA4  0F AF C2                  IMUL EAX,EDX
00558EA7  03 C1                     ADD EAX,ECX
00558EA9  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
00558EAC  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00558EAF  8A 01                     MOV AL,byte ptr [ECX]
00558EB1  3C FF                     CMP AL,0xff
00558EB3  73 04                     JNC 0x00558eb9
00558EB5  FE C0                     INC AL
00558EB7  88 01                     MOV byte ptr [ECX],AL
LAB_00558eb9:
00558EB9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00558EBC  43                        INC EBX
00558EBD  3B D8                     CMP EBX,EAX
00558EBF  7C BA                     JL 0x00558e7b
00558EC1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00558EC4  46                        INC ESI
00558EC5  03 D0                     ADD EDX,EAX
00558EC7  3B F0                     CMP ESI,EAX
00558EC9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00558ECC  7C AB                     JL 0x00558e79
LAB_00558ece:
00558ECE  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
LAB_00558ed1:
00558ED1  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00558ED4  85 DB                     TEST EBX,EBX
00558ED6  0F 8C 74 01 00 00         JL 0x00559050
00558EDC  83 FB 05                  CMP EBX,0x5
00558EDF  0F 8D 6B 01 00 00         JGE 0x00559050
00558EE5  F7 45 20 08 20 00 00      TEST dword ptr [EBP + 0x20],0x2008
00558EEC  74 5F                     JZ 0x00558f4d
00558EEE  33 DB                     XOR EBX,EBX
00558EF0  8D 77 3C                  LEA ESI,[EDI + 0x3c]
LAB_00558ef3:
00558EF3  83 3E 00                  CMP dword ptr [ESI],0x0
00558EF6  74 46                     JZ 0x00558f3e
00558EF8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00558EFB  8D 55 14                  LEA EDX,[EBP + 0x14]
00558EFE  8D 45 1C                  LEA EAX,[EBP + 0x1c]
00558F01  52                        PUSH EDX
00558F02  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00558F05  50                        PUSH EAX
00558F06  51                        PUSH ECX
00558F07  52                        PUSH EDX
00558F08  53                        PUSH EBX
00558F09  8B CF                     MOV ECX,EDI
00558F0B  E8 43 B0 EA FF            CALL 0x00403f53
00558F10  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00558F13  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00558F16  8B 14 8D D0 AE 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x79aed0]
00558F1D  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
00558F20  03 C2                     ADD EAX,EDX
00558F22  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00558F25  52                        PUSH EDX
00558F26  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
00558F29  51                        PUSH ECX
00558F2A  8B 0E                     MOV ECX,dword ptr [ESI]
00558F2C  52                        PUSH EDX
00558F2D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00558F30  51                        PUSH ECX
00558F31  50                        PUSH EAX
00558F32  52                        PUSH EDX
00558F33  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00558F36  E8 8F CA EA FF            CALL 0x004059ca
00558F3B  83 C4 18                  ADD ESP,0x18
LAB_00558f3e:
00558F3E  43                        INC EBX
00558F3F  83 C6 04                  ADD ESI,0x4
00558F42  83 FB 04                  CMP EBX,0x4
00558F45  7C AC                     JL 0x00558ef3
00558F47  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00558F4A  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
LAB_00558f4d:
00558F4D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00558F50  85 C0                     TEST EAX,EAX
00558F52  0F 84 F8 00 00 00         JZ 0x00559050
00558F58  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
00558F5B  85 C0                     TEST EAX,EAX
00558F5D  0F 84 ED 00 00 00         JZ 0x00559050
00558F63  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
00558F66  85 C0                     TEST EAX,EAX
00558F68  0F 84 E2 00 00 00         JZ 0x00559050
00558F6E  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00558F71  F6 C4 40                  TEST AH,0x40
00558F74  0F 84 D6 00 00 00         JZ 0x00559050
00558F7A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00558F7D  8D 45 14                  LEA EAX,[EBP + 0x14]
00558F80  8D 4D 1C                  LEA ECX,[EBP + 0x1c]
00558F83  50                        PUSH EAX
00558F84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00558F87  51                        PUSH ECX
00558F88  8B 8F 0C 01 00 00         MOV ECX,dword ptr [EDI + 0x10c]
00558F8E  52                        PUSH EDX
00558F8F  50                        PUSH EAX
00558F90  51                        PUSH ECX
00558F91  8B CF                     MOV ECX,EDI
00558F93  E8 BB AF EA FF            CALL 0x00403f53
00558F98  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00558F9B  8B 14 9D D0 AE 79 00      MOV EDX,dword ptr [EBX*0x4 + 0x79aed0]
00558FA2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00558FA5  2B C6                     SUB EAX,ESI
00558FA7  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00558FAA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00558FAD  2B D6                     SUB EDX,ESI
00558FAF  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
00558FB6  03 CA                     ADD ECX,EDX
00558FB8  85 C0                     TEST EAX,EAX
00558FBA  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00558FBD  0F 8E 8D 00 00 00         JLE 0x00559050
00558FC3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00558FC6  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00558fc9:
00558FC9  33 DB                     XOR EBX,EBX
00558FCB  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
LAB_00558fce:
00558FCE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00558FD1  80 3C 19 00               CMP byte ptr [ECX + EBX*0x1],0x0
00558FD5  74 57                     JZ 0x0055902e
00558FD7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00558FDA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00558FDD  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
00558FE0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00558FE3  03 CA                     ADD ECX,EDX
00558FE5  85 C0                     TEST EAX,EAX
00558FE7  7C 45                     JL 0x0055902e
00558FE9  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
00558FEC  3B C2                     CMP EAX,EDX
00558FEE  7D 3E                     JGE 0x0055902e
00558FF0  85 C9                     TEST ECX,ECX
00558FF2  7C 3A                     JL 0x0055902e
00558FF4  3B 4F 34                  CMP ECX,dword ptr [EDI + 0x34]
00558FF7  7D 35                     JGE 0x0055902e
00558FF9  8B F2                     MOV ESI,EDX
00558FFB  0F AF F1                  IMUL ESI,ECX
00558FFE  03 F0                     ADD ESI,EAX
00559000  85 F6                     TEST ESI,ESI
00559002  7C 2A                     JL 0x0055902e
00559004  8B 5F 50                  MOV EBX,dword ptr [EDI + 0x50]
00559007  66 83 3C 73 00            CMP word ptr [EBX + ESI*0x2],0x0
0055900C  75 13                     JNZ 0x00559021
0055900E  8B 5F 34                  MOV EBX,dword ptr [EDI + 0x34]
00559011  53                        PUSH EBX
00559012  52                        PUSH EDX
00559013  8B 57 4C                  MOV EDX,dword ptr [EDI + 0x4c]
00559016  52                        PUSH EDX
00559017  51                        PUSH ECX
00559018  50                        PUSH EAX
00559019  E8 58 9B EA FF            CALL 0x00402b76
0055901E  83 C4 14                  ADD ESP,0x14
LAB_00559021:
00559021  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
00559024  66 FF 04 70               INC word ptr [EAX + ESI*0x2]
00559028  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0055902B  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
LAB_0055902e:
0055902E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00559031  43                        INC EBX
00559032  3B D8                     CMP EBX,EAX
00559034  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
00559037  7C 95                     JL 0x00558fce
00559039  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0055903C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0055903F  41                        INC ECX
00559040  03 F0                     ADD ESI,EAX
00559042  3B C8                     CMP ECX,EAX
00559044  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
00559047  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0055904A  0F 8C 79 FF FF FF         JL 0x00558fc9
LAB_00559050:
00559050  5F                        POP EDI
00559051  5E                        POP ESI
00559052  5B                        POP EBX
00559053  8B E5                     MOV ESP,EBP
00559055  5D                        POP EBP
00559056  C2 1C 00                  RET 0x1c
