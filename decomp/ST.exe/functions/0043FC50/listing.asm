FUN_0043fc50:
0043FC50  55                        PUSH EBP
0043FC51  8B EC                     MOV EBP,ESP
0043FC53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043FC56  56                        PUSH ESI
0043FC57  25 FF 00 00 00            AND EAX,0xff
0043FC5C  48                        DEC EAX
0043FC5D  83 F8 12                  CMP EAX,0x12
0043FC60  0F 87 57 07 00 00         JA 0x004403bd
switchD_0043fc66::switchD:
0043FC66  FF 24 85 C4 03 44 00      JMP dword ptr [EAX*0x4 + 0x4403c4]
switchD_0043fc66::caseD_1:
0043FC6D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043FC70  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043FC76  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0043FC7C  85 C0                     TEST EAX,EAX
0043FC7E  74 27                     JZ 0x0043fca7
0043FC80  33 C0                     XOR EAX,EAX
0043FC82  8A C1                     MOV AL,CL
0043FC84  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043FC87  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043FC8A  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043FC8D  C1 E6 04                  SHL ESI,0x4
0043FC90  03 F0                     ADD ESI,EAX
0043FC92  8B 04 75 C7 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50c7]
0043FC99  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0043FC9F  3B C6                     CMP EAX,ESI
0043FCA1  0F 84 16 07 00 00         JZ 0x004403bd
LAB_0043fca7:
0043FCA7  33 C0                     XOR EAX,EAX
0043FCA9  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0043FCAF  8A C1                     MOV AL,CL
0043FCB1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043FCB4  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043FCB7  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043FCBA  C1 E1 04                  SHL ECX,0x4
0043FCBD  03 C8                     ADD ECX,EAX
0043FCBF  89 14 4D C7 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50c7],EDX
0043FCC6  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0043FCCC  85 C9                     TEST ECX,ECX
0043FCCE  0F 84 E9 06 00 00         JZ 0x004403bd
0043FCD4  6A 01                     PUSH 0x1
0043FCD6  E8 28 60 FC FF            CALL 0x00405d03
0043FCDB  EB 59                     JMP 0x0043fd36
switchD_0043fc66::caseD_2:
0043FCDD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043FCE0  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043FCE6  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0043FCEC  85 C0                     TEST EAX,EAX
0043FCEE  74 27                     JZ 0x0043fd17
0043FCF0  33 C0                     XOR EAX,EAX
0043FCF2  8A C1                     MOV AL,CL
0043FCF4  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043FCF7  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043FCFA  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043FCFD  C1 E6 04                  SHL ESI,0x4
0043FD00  03 F0                     ADD ESI,EAX
0043FD02  8B 04 75 CB 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50cb]
0043FD09  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0043FD0F  3B C6                     CMP EAX,ESI
0043FD11  0F 84 A6 06 00 00         JZ 0x004403bd
LAB_0043fd17:
0043FD17  33 C0                     XOR EAX,EAX
0043FD19  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0043FD1F  8A C1                     MOV AL,CL
0043FD21  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043FD24  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043FD27  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043FD2A  C1 E1 04                  SHL ECX,0x4
0043FD2D  03 C8                     ADD ECX,EAX
0043FD2F  89 14 4D CB 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50cb],EDX
LAB_0043fd36:
0043FD36  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0043FD3C  85 C9                     TEST ECX,ECX
0043FD3E  0F 84 79 06 00 00         JZ 0x004403bd
0043FD44  6A 02                     PUSH 0x2
0043FD46  E8 B8 5F FC FF            CALL 0x00405d03
0043FD4B  5E                        POP ESI
0043FD4C  5D                        POP EBP
0043FD4D  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_4:
0043FD50  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043FD53  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043FD59  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0043FD5F  85 C0                     TEST EAX,EAX
0043FD61  74 27                     JZ 0x0043fd8a
0043FD63  33 C0                     XOR EAX,EAX
0043FD65  8A C1                     MOV AL,CL
0043FD67  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043FD6A  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043FD6D  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043FD70  C1 E6 04                  SHL ESI,0x4
0043FD73  03 F0                     ADD ESI,EAX
0043FD75  8B 04 75 CF 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50cf]
0043FD7C  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0043FD82  3B C6                     CMP EAX,ESI
0043FD84  0F 84 33 06 00 00         JZ 0x004403bd
LAB_0043fd8a:
0043FD8A  33 C0                     XOR EAX,EAX
0043FD8C  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0043FD92  8A C1                     MOV AL,CL
0043FD94  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043FD97  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043FD9A  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043FD9D  C1 E1 04                  SHL ECX,0x4
0043FDA0  03 C8                     ADD ECX,EAX
0043FDA2  89 14 4D CF 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50cf],EDX
0043FDA9  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0043FDAF  85 C9                     TEST ECX,ECX
0043FDB1  0F 84 06 06 00 00         JZ 0x004403bd
0043FDB7  6A 04                     PUSH 0x4
0043FDB9  E8 45 5F FC FF            CALL 0x00405d03
0043FDBE  5E                        POP ESI
0043FDBF  5D                        POP EBP
0043FDC0  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_5:
0043FDC3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043FDC6  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043FDCC  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0043FDD2  85 C0                     TEST EAX,EAX
0043FDD4  74 27                     JZ 0x0043fdfd
0043FDD6  33 C0                     XOR EAX,EAX
0043FDD8  8A C1                     MOV AL,CL
0043FDDA  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043FDDD  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043FDE0  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043FDE3  C1 E6 04                  SHL ESI,0x4
0043FDE6  03 F0                     ADD ESI,EAX
0043FDE8  8B 04 75 D3 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50d3]
0043FDEF  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0043FDF5  3B C6                     CMP EAX,ESI
0043FDF7  0F 84 C0 05 00 00         JZ 0x004403bd
LAB_0043fdfd:
0043FDFD  33 C0                     XOR EAX,EAX
0043FDFF  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0043FE05  8A C1                     MOV AL,CL
0043FE07  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043FE0A  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043FE0D  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043FE10  C1 E1 04                  SHL ECX,0x4
0043FE13  03 C8                     ADD ECX,EAX
0043FE15  89 14 4D D3 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50d3],EDX
0043FE1C  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0043FE22  85 C9                     TEST ECX,ECX
0043FE24  0F 84 93 05 00 00         JZ 0x004403bd
0043FE2A  6A 05                     PUSH 0x5
0043FE2C  E8 D2 5E FC FF            CALL 0x00405d03
0043FE31  5E                        POP ESI
0043FE32  5D                        POP EBP
0043FE33  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_6:
0043FE36  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043FE39  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043FE3F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0043FE45  85 C0                     TEST EAX,EAX
0043FE47  74 27                     JZ 0x0043fe70
0043FE49  33 C0                     XOR EAX,EAX
0043FE4B  8A C1                     MOV AL,CL
0043FE4D  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043FE50  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043FE53  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043FE56  C1 E6 04                  SHL ESI,0x4
0043FE59  03 F0                     ADD ESI,EAX
0043FE5B  8B 04 75 D7 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50d7]
0043FE62  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0043FE68  3B C6                     CMP EAX,ESI
0043FE6A  0F 84 4D 05 00 00         JZ 0x004403bd
LAB_0043fe70:
0043FE70  33 C0                     XOR EAX,EAX
0043FE72  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0043FE78  8A C1                     MOV AL,CL
0043FE7A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043FE7D  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043FE80  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043FE83  C1 E1 04                  SHL ECX,0x4
0043FE86  03 C8                     ADD ECX,EAX
0043FE88  89 14 4D D7 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50d7],EDX
0043FE8F  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0043FE95  85 C9                     TEST ECX,ECX
0043FE97  0F 84 20 05 00 00         JZ 0x004403bd
0043FE9D  6A 06                     PUSH 0x6
0043FE9F  E8 5F 5E FC FF            CALL 0x00405d03
0043FEA4  5E                        POP ESI
0043FEA5  5D                        POP EBP
0043FEA6  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_7:
0043FEA9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043FEAC  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043FEB2  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0043FEB8  85 C0                     TEST EAX,EAX
0043FEBA  74 27                     JZ 0x0043fee3
0043FEBC  33 C0                     XOR EAX,EAX
0043FEBE  8A C1                     MOV AL,CL
0043FEC0  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043FEC3  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043FEC6  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043FEC9  C1 E6 04                  SHL ESI,0x4
0043FECC  03 F0                     ADD ESI,EAX
0043FECE  8B 04 75 DB 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50db]
0043FED5  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0043FEDB  3B C6                     CMP EAX,ESI
0043FEDD  0F 84 DA 04 00 00         JZ 0x004403bd
LAB_0043fee3:
0043FEE3  33 C0                     XOR EAX,EAX
0043FEE5  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0043FEEB  8A C1                     MOV AL,CL
0043FEED  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043FEF0  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043FEF3  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043FEF6  C1 E1 04                  SHL ECX,0x4
0043FEF9  03 C8                     ADD ECX,EAX
0043FEFB  89 14 4D DB 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50db],EDX
0043FF02  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0043FF08  85 C9                     TEST ECX,ECX
0043FF0A  0F 84 AD 04 00 00         JZ 0x004403bd
0043FF10  6A 07                     PUSH 0x7
0043FF12  E8 EC 5D FC FF            CALL 0x00405d03
0043FF17  5E                        POP ESI
0043FF18  5D                        POP EBP
0043FF19  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_8:
0043FF1C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043FF1F  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043FF25  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0043FF2B  85 C0                     TEST EAX,EAX
0043FF2D  74 27                     JZ 0x0043ff56
0043FF2F  33 C0                     XOR EAX,EAX
0043FF31  8A C1                     MOV AL,CL
0043FF33  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043FF36  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043FF39  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043FF3C  C1 E6 04                  SHL ESI,0x4
0043FF3F  03 F0                     ADD ESI,EAX
0043FF41  8B 04 75 DF 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50df]
0043FF48  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0043FF4E  3B C6                     CMP EAX,ESI
0043FF50  0F 84 67 04 00 00         JZ 0x004403bd
LAB_0043ff56:
0043FF56  33 C0                     XOR EAX,EAX
0043FF58  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0043FF5E  8A C1                     MOV AL,CL
0043FF60  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043FF63  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043FF66  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043FF69  C1 E1 04                  SHL ECX,0x4
0043FF6C  03 C8                     ADD ECX,EAX
0043FF6E  89 14 4D DF 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50df],EDX
0043FF75  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0043FF7B  85 C9                     TEST ECX,ECX
0043FF7D  0F 84 3A 04 00 00         JZ 0x004403bd
0043FF83  6A 08                     PUSH 0x8
0043FF85  E8 79 5D FC FF            CALL 0x00405d03
0043FF8A  5E                        POP ESI
0043FF8B  5D                        POP EBP
0043FF8C  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_9:
0043FF8F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043FF92  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043FF98  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0043FF9E  85 C0                     TEST EAX,EAX
0043FFA0  74 27                     JZ 0x0043ffc9
0043FFA2  33 C0                     XOR EAX,EAX
0043FFA4  8A C1                     MOV AL,CL
0043FFA6  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0043FFA9  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0043FFAC  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0043FFAF  C1 E6 04                  SHL ESI,0x4
0043FFB2  03 F0                     ADD ESI,EAX
0043FFB4  8B 04 75 E3 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50e3]
0043FFBB  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0043FFC1  3B C6                     CMP EAX,ESI
0043FFC3  0F 84 F4 03 00 00         JZ 0x004403bd
LAB_0043ffc9:
0043FFC9  33 C0                     XOR EAX,EAX
0043FFCB  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0043FFD1  8A C1                     MOV AL,CL
0043FFD3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043FFD6  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0043FFD9  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0043FFDC  C1 E1 04                  SHL ECX,0x4
0043FFDF  03 C8                     ADD ECX,EAX
0043FFE1  89 14 4D E3 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50e3],EDX
0043FFE8  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0043FFEE  85 C9                     TEST ECX,ECX
0043FFF0  0F 84 C7 03 00 00         JZ 0x004403bd
0043FFF6  6A 09                     PUSH 0x9
0043FFF8  E8 06 5D FC FF            CALL 0x00405d03
0043FFFD  5E                        POP ESI
0043FFFE  5D                        POP EBP
0043FFFF  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_a:
00440002  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00440005  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044000B  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00440011  85 C0                     TEST EAX,EAX
00440013  74 27                     JZ 0x0044003c
00440015  33 C0                     XOR EAX,EAX
00440017  8A C1                     MOV AL,CL
00440019  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0044001C  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0044001F  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
00440022  C1 E6 04                  SHL ESI,0x4
00440025  03 F0                     ADD ESI,EAX
00440027  8B 04 75 E7 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50e7]
0044002E  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
00440034  3B C6                     CMP EAX,ESI
00440036  0F 84 81 03 00 00         JZ 0x004403bd
LAB_0044003c:
0044003C  33 C0                     XOR EAX,EAX
0044003E  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
00440044  8A C1                     MOV AL,CL
00440046  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00440049  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0044004C  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0044004F  C1 E1 04                  SHL ECX,0x4
00440052  03 C8                     ADD ECX,EAX
00440054  89 14 4D E7 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50e7],EDX
0044005B  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00440061  85 C9                     TEST ECX,ECX
00440063  0F 84 54 03 00 00         JZ 0x004403bd
00440069  6A 0A                     PUSH 0xa
0044006B  E8 93 5C FC FF            CALL 0x00405d03
00440070  5E                        POP ESI
00440071  5D                        POP EBP
00440072  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_b:
00440075  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00440078  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044007E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00440084  85 C0                     TEST EAX,EAX
00440086  74 27                     JZ 0x004400af
00440088  33 C0                     XOR EAX,EAX
0044008A  8A C1                     MOV AL,CL
0044008C  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0044008F  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
00440092  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
00440095  C1 E6 04                  SHL ESI,0x4
00440098  03 F0                     ADD ESI,EAX
0044009A  8B 04 75 EB 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50eb]
004400A1  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
004400A7  3B C6                     CMP EAX,ESI
004400A9  0F 84 0E 03 00 00         JZ 0x004403bd
LAB_004400af:
004400AF  33 C0                     XOR EAX,EAX
004400B1  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004400B7  8A C1                     MOV AL,CL
004400B9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004400BC  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004400BF  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
004400C2  C1 E1 04                  SHL ECX,0x4
004400C5  03 C8                     ADD ECX,EAX
004400C7  89 14 4D EB 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50eb],EDX
004400CE  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
004400D4  85 C9                     TEST ECX,ECX
004400D6  0F 84 E1 02 00 00         JZ 0x004403bd
004400DC  6A 0B                     PUSH 0xb
004400DE  E8 20 5C FC FF            CALL 0x00405d03
004400E3  5E                        POP ESI
004400E4  5D                        POP EBP
004400E5  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_c:
004400E8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004400EB  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004400F1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004400F7  85 C0                     TEST EAX,EAX
004400F9  74 27                     JZ 0x00440122
004400FB  33 C0                     XOR EAX,EAX
004400FD  8A C1                     MOV AL,CL
004400FF  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
00440102  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
00440105  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
00440108  C1 E6 04                  SHL ESI,0x4
0044010B  03 F0                     ADD ESI,EAX
0044010D  8B 04 75 EF 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50ef]
00440114  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0044011A  3B C6                     CMP EAX,ESI
0044011C  0F 84 9B 02 00 00         JZ 0x004403bd
LAB_00440122:
00440122  33 C0                     XOR EAX,EAX
00440124  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0044012A  8A C1                     MOV AL,CL
0044012C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044012F  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
00440132  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
00440135  C1 E1 04                  SHL ECX,0x4
00440138  03 C8                     ADD ECX,EAX
0044013A  89 14 4D EF 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50ef],EDX
00440141  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00440147  85 C9                     TEST ECX,ECX
00440149  0F 84 6E 02 00 00         JZ 0x004403bd
0044014F  6A 0C                     PUSH 0xc
00440151  E8 AD 5B FC FF            CALL 0x00405d03
00440156  5E                        POP ESI
00440157  5D                        POP EBP
00440158  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_d:
0044015B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044015E  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00440164  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0044016A  85 C0                     TEST EAX,EAX
0044016C  74 27                     JZ 0x00440195
0044016E  33 C0                     XOR EAX,EAX
00440170  8A C1                     MOV AL,CL
00440172  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
00440175  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
00440178  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
0044017B  C1 E6 04                  SHL ESI,0x4
0044017E  03 F0                     ADD ESI,EAX
00440180  8B 04 75 F3 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50f3]
00440187  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
0044018D  3B C6                     CMP EAX,ESI
0044018F  0F 84 28 02 00 00         JZ 0x004403bd
LAB_00440195:
00440195  33 C0                     XOR EAX,EAX
00440197  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0044019D  8A C1                     MOV AL,CL
0044019F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004401A2  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004401A5  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
004401A8  C1 E1 04                  SHL ECX,0x4
004401AB  03 C8                     ADD ECX,EAX
004401AD  89 14 4D F3 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50f3],EDX
004401B4  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
004401BA  85 C9                     TEST ECX,ECX
004401BC  0F 84 FB 01 00 00         JZ 0x004403bd
004401C2  6A 0D                     PUSH 0xd
004401C4  E8 3A 5B FC FF            CALL 0x00405d03
004401C9  5E                        POP ESI
004401CA  5D                        POP EBP
004401CB  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_e:
004401CE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004401D1  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004401D7  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004401DD  85 C0                     TEST EAX,EAX
004401DF  74 27                     JZ 0x00440208
004401E1  33 C0                     XOR EAX,EAX
004401E3  8A C1                     MOV AL,CL
004401E5  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004401E8  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
004401EB  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
004401EE  C1 E6 04                  SHL ESI,0x4
004401F1  03 F0                     ADD ESI,EAX
004401F3  8B 04 75 F7 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50f7]
004401FA  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
00440200  3B C6                     CMP EAX,ESI
00440202  0F 84 B5 01 00 00         JZ 0x004403bd
LAB_00440208:
00440208  33 C0                     XOR EAX,EAX
0044020A  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
00440210  8A C1                     MOV AL,CL
00440212  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00440215  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
00440218  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0044021B  C1 E1 04                  SHL ECX,0x4
0044021E  03 C8                     ADD ECX,EAX
00440220  89 14 4D F7 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50f7],EDX
00440227  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0044022D  85 C9                     TEST ECX,ECX
0044022F  0F 84 88 01 00 00         JZ 0x004403bd
00440235  6A 0E                     PUSH 0xe
00440237  E8 C7 5A FC FF            CALL 0x00405d03
0044023C  5E                        POP ESI
0044023D  5D                        POP EBP
0044023E  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_f:
00440241  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00440244  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044024A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00440250  85 C0                     TEST EAX,EAX
00440252  74 27                     JZ 0x0044027b
00440254  33 C0                     XOR EAX,EAX
00440256  8A C1                     MOV AL,CL
00440258  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0044025B  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0044025E  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
00440261  C1 E6 04                  SHL ESI,0x4
00440264  03 F0                     ADD ESI,EAX
00440266  8B 04 75 FB 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50fb]
0044026D  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
00440273  3B C6                     CMP EAX,ESI
00440275  0F 84 42 01 00 00         JZ 0x004403bd
LAB_0044027b:
0044027B  33 C0                     XOR EAX,EAX
0044027D  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
00440283  8A C1                     MOV AL,CL
00440285  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00440288  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0044028B  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0044028E  C1 E1 04                  SHL ECX,0x4
00440291  03 C8                     ADD ECX,EAX
00440293  89 14 4D FB 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50fb],EDX
0044029A  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
004402A0  85 C9                     TEST ECX,ECX
004402A2  0F 84 15 01 00 00         JZ 0x004403bd
004402A8  6A 0F                     PUSH 0xf
004402AA  E8 54 5A FC FF            CALL 0x00405d03
004402AF  5E                        POP ESI
004402B0  5D                        POP EBP
004402B1  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_10:
004402B4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004402B7  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004402BD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004402C3  85 C0                     TEST EAX,EAX
004402C5  74 27                     JZ 0x004402ee
004402C7  33 C0                     XOR EAX,EAX
004402C9  8A C1                     MOV AL,CL
004402CB  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004402CE  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
004402D1  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
004402D4  C1 E6 04                  SHL ESI,0x4
004402D7  03 F0                     ADD ESI,EAX
004402D9  8B 04 75 FF 50 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f50ff]
004402E0  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
004402E6  3B C6                     CMP EAX,ESI
004402E8  0F 84 CF 00 00 00         JZ 0x004403bd
LAB_004402ee:
004402EE  33 C0                     XOR EAX,EAX
004402F0  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004402F6  8A C1                     MOV AL,CL
004402F8  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004402FB  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004402FE  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
00440301  C1 E1 04                  SHL ECX,0x4
00440304  03 C8                     ADD ECX,EAX
00440306  89 14 4D FF 50 7F 00      MOV dword ptr [ECX*0x2 + 0x7f50ff],EDX
0044030D  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
00440313  85 C9                     TEST ECX,ECX
00440315  0F 84 A2 00 00 00         JZ 0x004403bd
0044031B  6A 10                     PUSH 0x10
0044031D  E8 E1 59 FC FF            CALL 0x00405d03
00440322  5E                        POP ESI
00440323  5D                        POP EBP
00440324  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_11:
00440327  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0044032D  85 C9                     TEST ECX,ECX
0044032F  0F 84 88 00 00 00         JZ 0x004403bd
00440335  6A 11                     PUSH 0x11
00440337  E8 C7 59 FC FF            CALL 0x00405d03
0044033C  5E                        POP ESI
0044033D  5D                        POP EBP
0044033E  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_12:
00440341  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00440344  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044034A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00440350  85 C0                     TEST EAX,EAX
00440352  74 23                     JZ 0x00440377
00440354  33 C0                     XOR EAX,EAX
00440356  8A C1                     MOV AL,CL
00440358  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0044035B  8D 34 F0                  LEA ESI,[EAX + ESI*0x8]
0044035E  8D 34 70                  LEA ESI,[EAX + ESI*0x2]
00440361  C1 E6 04                  SHL ESI,0x4
00440364  03 F0                     ADD ESI,EAX
00440366  8B 04 75 03 51 7F 00      MOV EAX,dword ptr [ESI*0x2 + 0x7f5103]
0044036D  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
00440373  3B C6                     CMP EAX,ESI
00440375  74 46                     JZ 0x004403bd
LAB_00440377:
00440377  33 C0                     XOR EAX,EAX
00440379  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
0044037F  8A C1                     MOV AL,CL
00440381  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00440384  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
00440387  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
0044038A  C1 E1 04                  SHL ECX,0x4
0044038D  03 C8                     ADD ECX,EAX
0044038F  89 14 4D 03 51 7F 00      MOV dword ptr [ECX*0x2 + 0x7f5103],EDX
00440396  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0044039C  85 C9                     TEST ECX,ECX
0044039E  74 1D                     JZ 0x004403bd
004403A0  6A 12                     PUSH 0x12
004403A2  E8 5C 59 FC FF            CALL 0x00405d03
004403A7  5E                        POP ESI
004403A8  5D                        POP EBP
004403A9  C2 08 00                  RET 0x8
switchD_0043fc66::caseD_13:
004403AC  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
004403B2  85 C9                     TEST ECX,ECX
004403B4  74 07                     JZ 0x004403bd
004403B6  6A 13                     PUSH 0x13
004403B8  E8 46 59 FC FF            CALL 0x00405d03
switchD_0043fc66::caseD_3:
004403BD  5E                        POP ESI
004403BE  5D                        POP EBP
004403BF  C2 08 00                  RET 0x8
