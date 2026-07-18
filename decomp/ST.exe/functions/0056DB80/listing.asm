FUN_0056db80:
0056DB80  55                        PUSH EBP
0056DB81  8B EC                     MOV EBP,ESP
0056DB83  81 EC 24 03 00 00         SUB ESP,0x324
0056DB89  A0 A0 16 80 00            MOV AL,[0x008016a0]
0056DB8E  53                        PUSH EBX
0056DB8F  56                        PUSH ESI
0056DB90  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0056DB93  57                        PUSH EDI
0056DB94  88 85 E0 FD FF FF         MOV byte ptr [EBP + 0xfffffde0],AL
0056DB9A  B9 40 00 00 00            MOV ECX,0x40
0056DB9F  33 C0                     XOR EAX,EAX
0056DBA1  8D BD E1 FD FF FF         LEA EDI,[EBP + 0xfffffde1]
0056DBA7  33 DB                     XOR EBX,EBX
0056DBA9  F3 AB                     STOSD.REP ES:EDI
0056DBAB  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0056DBB1  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
0056DBB7  66 AB                     STOSW ES:EDI
0056DBB9  AA                        STOSB ES:EDI
0056DBBA  8D 85 70 FF FF FF         LEA EAX,[EBP + 0xffffff70]
0056DBC0  53                        PUSH EBX
0056DBC1  50                        PUSH EAX
0056DBC2  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
0056DBC8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056DBCE  E8 1D FC 1B 00            CALL 0x0072d7f0
0056DBD3  83 C4 08                  ADD ESP,0x8
0056DBD6  3B C3                     CMP EAX,EBX
0056DBD8  0F 85 92 0A 00 00         JNZ 0x0056e670
0056DBDE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056DBE1  8A 86 95 11 00 00         MOV AL,byte ptr [ESI + 0x1195]
0056DBE7  89 9E EE 4E 00 00         MOV dword ptr [ESI + 0x4eee],EBX
0056DBED  3A C3                     CMP AL,BL
0056DBEF  89 9E EA 4E 00 00         MOV dword ptr [ESI + 0x4eea],EBX
0056DBF5  89 9E F2 4E 00 00         MOV dword ptr [ESI + 0x4ef2],EBX
0056DBFB  89 9E FE 4E 00 00         MOV dword ptr [ESI + 0x4efe],EBX
0056DC01  75 06                     JNZ 0x0056dc09
0056DC03  89 9E 81 11 00 00         MOV dword ptr [ESI + 0x1181],EBX
LAB_0056dc09:
0056DC09  80 3D 68 17 81 00 01      CMP byte ptr [0x00811768],0x1
0056DC10  75 07                     JNZ 0x0056dc19
0056DC12  C6 05 68 17 81 00 02      MOV byte ptr [0x00811768],0x2
LAB_0056dc19:
0056DC19  A1 64 17 81 00            MOV EAX,[0x00811764]
0056DC1E  3B C3                     CMP EAX,EBX
0056DC20  74 0D                     JZ 0x0056dc2f
0056DC22  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
0056DC28  51                        PUSH ECX
0056DC29  50                        PUSH EAX
0056DC2A  E8 D1 88 14 00            CALL 0x006b6500
LAB_0056dc2f:
0056DC2F  8D BE AF 4E 00 00         LEA EDI,[ESI + 0x4eaf]
0056DC35  66 C7 86 D7 4E 00 00 02 00  MOV word ptr [ESI + 0x4ed7],0x2
0056DC3E  C7 86 B3 4E 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4eb3],0x2
0056DC48  6A 01                     PUSH 0x1
0056DC4A  89 1F                     MOV dword ptr [EDI],EBX
0056DC4C  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
0056DC52  53                        PUSH EBX
0056DC53  53                        PUSH EBX
0056DC54  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
0056DC5A  E8 46 43 E9 FF            CALL 0x00401fa5
0056DC5F  8A 15 27 73 80 00         MOV DL,byte ptr [0x00807327]
0056DC65  A0 3B 73 80 00            MOV AL,[0x0080733b]
0056DC6A  80 CA 01                  OR DL,0x1
0056DC6D  3A C3                     CMP AL,BL
0056DC6F  88 15 27 73 80 00         MOV byte ptr [0x00807327],DL
0056DC75  74 04                     JZ 0x0056dc7b
0056DC77  3C 03                     CMP AL,0x3
0056DC79  76 07                     JBE 0x0056dc82
LAB_0056dc7b:
0056DC7B  B0 02                     MOV AL,0x2
0056DC7D  A2 3B 73 80 00            MOV [0x0080733b],AL
LAB_0056dc82:
0056DC82  33 C9                     XOR ECX,ECX
0056DC84  6A 02                     PUSH 0x2
0056DC86  8A C8                     MOV CL,AL
0056DC88  6A 0A                     PUSH 0xa
0056DC8A  8B C1                     MOV EAX,ECX
0056DC8C  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0056DC8F  8B 04 D5 E8 2A 7C 00      MOV EAX,dword ptr [EDX*0x8 + 0x7c2ae8]
0056DC96  89 9E 68 11 00 00         MOV dword ptr [ESI + 0x1168],EBX
0056DC9C  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0056DC9F  89 9E 64 11 00 00         MOV dword ptr [ESI + 0x1164],EBX
0056DCA5  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0056DCAB  51                        PUSH ECX
0056DCAC  E8 92 40 E9 FF            CALL 0x00401d43
0056DCB1  A1 30 2A 80 00            MOV EAX,[0x00802a30]
0056DCB6  83 C4 0C                  ADD ESP,0xc
0056DCB9  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
0056DCBF  3B CB                     CMP ECX,EBX
0056DCC1  74 14                     JZ 0x0056dcd7
0056DCC3  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0056DCC6  83 F9 FF                  CMP ECX,-0x1
0056DCC9  74 18                     JZ 0x0056dce3
0056DCCB  8B 50 60                  MOV EDX,dword ptr [EAX + 0x60]
0056DCCE  51                        PUSH ECX
0056DCCF  52                        PUSH EDX
0056DCD0  E8 1B 5E 14 00            CALL 0x006b3af0
0056DCD5  EB 0C                     JMP 0x0056dce3
LAB_0056dcd7:
0056DCD7  8B 80 AD 00 00 00         MOV EAX,dword ptr [EAX + 0xad]
0056DCDD  50                        PUSH EAX
0056DCDE  E8 2D AE 14 00            CALL 0x006b8b10
LAB_0056dce3:
0056DCE3  6A 01                     PUSH 0x1
0056DCE5  68 D4 A1 7C 00            PUSH 0x7ca1d4
0056DCEA  6A 5C                     PUSH 0x5c
0056DCEC  E8 3D 6E E9 FF            CALL 0x00404b2e
0056DCF1  83 C4 0C                  ADD ESP,0xc
0056DCF4  3B C3                     CMP EAX,EBX
0056DCF6  74 09                     JZ 0x0056dd01
0056DCF8  8B C8                     MOV ECX,EAX
0056DCFA  E8 B4 52 E9 FF            CALL 0x00402fb3
0056DCFF  EB 02                     JMP 0x0056dd03
LAB_0056dd01:
0056DD01  33 C0                     XOR EAX,EAX
LAB_0056dd03:
0056DD03  3B C3                     CMP EAX,EBX
0056DD05  A3 58 2A 80 00            MOV [0x00802a58],EAX
0056DD0A  74 35                     JZ 0x0056dd41
0056DD0C  53                        PUSH EBX
0056DD0D  6A 01                     PUSH 0x1
0056DD0F  6A 0A                     PUSH 0xa
0056DD11  8B C8                     MOV ECX,EAX
0056DD13  E8 3A 5E E9 FF            CALL 0x00403b52
0056DD18  A1 58 2A 80 00            MOV EAX,[0x00802a58]
0056DD1D  3B C3                     CMP EAX,EBX
0056DD1F  74 20                     JZ 0x0056dd41
0056DD21  53                        PUSH EBX
0056DD22  68 C6 21 40 00            PUSH 0x4021c6
0056DD27  6A 02                     PUSH 0x2
0056DD29  6A 01                     PUSH 0x1
0056DD2B  53                        PUSH EBX
0056DD2C  68 44 02 00 00            PUSH 0x244
0056DD31  68 16 03 00 00            PUSH 0x316
0056DD36  6A 0A                     PUSH 0xa
0056DD38  6A 14                     PUSH 0x14
0056DD3A  8B C8                     MOV ECX,EAX
0056DD3C  E8 97 69 E9 FF            CALL 0x004046d8
LAB_0056dd41:
0056DD41  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0056DD47  53                        PUSH EBX
0056DD48  53                        PUSH EBX
0056DD49  8D 8E F6 76 00 00         LEA ECX,[ESI + 0x76f6]
0056DD4F  53                        PUSH EBX
0056DD50  51                        PUSH ECX
0056DD51  68 45 03 00 00            PUSH 0x345
0056DD56  A3 20 67 80 00            MOV [0x00806720],EAX
0056DD5B  E8 60 31 18 00            CALL 0x006f0ec0
0056DD60  8B 0D 68 B0 79 00         MOV ECX,dword ptr [0x0079b068]
0056DD66  83 C4 14                  ADD ESP,0x14
0056DD69  8D 55 FC                  LEA EDX,[EBP + -0x4]
0056DD6C  A3 54 67 80 00            MOV [0x00806754],EAX
0056DD71  53                        PUSH EBX
0056DD72  52                        PUSH EDX
0056DD73  51                        PUSH ECX
0056DD74  6A 0C                     PUSH 0xc
0056DD76  8B C8                     MOV ECX,EAX
0056DD78  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0056DD7B  E8 60 3F 18 00            CALL 0x006f1ce0
0056DD80  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056DD86  8D 86 B3 4E 00 00         LEA EAX,[ESI + 0x4eb3]
0056DD8C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0056DD8F  A1 64 B0 79 00            MOV EAX,[0x0079b064]
0056DD94  8D 55 FC                  LEA EDX,[EBP + -0x4]
0056DD97  53                        PUSH EBX
0056DD98  52                        PUSH EDX
0056DD99  50                        PUSH EAX
0056DD9A  6A 0C                     PUSH 0xc
0056DD9C  E8 3F 3F 18 00            CALL 0x006f1ce0
0056DDA1  A1 6C B0 79 00            MOV EAX,[0x0079b06c]
0056DDA6  8D 55 FC                  LEA EDX,[EBP + -0x4]
0056DDA9  8D 8E B7 4E 00 00         LEA ECX,[ESI + 0x4eb7]
0056DDAF  53                        PUSH EBX
0056DDB0  52                        PUSH EDX
0056DDB1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056DDB4  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056DDBA  50                        PUSH EAX
0056DDBB  6A 0C                     PUSH 0xc
0056DDBD  E8 1E 3F 18 00            CALL 0x006f1ce0
0056DDC2  85 C0                     TEST EAX,EAX
0056DDC4  0F 95 C1                  SETNZ CL
0056DDC7  8D 86 80 11 00 00         LEA EAX,[ESI + 0x1180]
0056DDCD  88 8E D9 4E 00 00         MOV byte ptr [ESI + 0x4ed9],CL
0056DDD3  8A 08                     MOV CL,byte ptr [EAX]
0056DDD5  80 F9 0C                  CMP CL,0xc
0056DDD8  74 20                     JZ 0x0056ddfa
0056DDDA  80 F9 10                  CMP CL,0x10
0056DDDD  74 1B                     JZ 0x0056ddfa
0056DDDF  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056DDE5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0056DDE8  A1 8C B0 79 00            MOV EAX,[0x0079b08c]
0056DDED  8D 55 FC                  LEA EDX,[EBP + -0x4]
0056DDF0  53                        PUSH EBX
0056DDF1  52                        PUSH EDX
0056DDF2  50                        PUSH EAX
0056DDF3  6A 0C                     PUSH 0xc
0056DDF5  E8 E6 3E 18 00            CALL 0x006f1ce0
LAB_0056ddfa:
0056DDFA  A1 60 B0 79 00            MOV EAX,[0x0079b060]
0056DDFF  8D 55 FC                  LEA EDX,[EBP + -0x4]
0056DE02  8D 8E 2F 2B 00 00         LEA ECX,[ESI + 0x2b2f]
0056DE08  53                        PUSH EBX
0056DE09  52                        PUSH EDX
0056DE0A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056DE0D  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056DE13  50                        PUSH EAX
0056DE14  53                        PUSH EBX
0056DE15  E8 C6 3E 18 00            CALL 0x006f1ce0
0056DE1A  A1 58 67 80 00            MOV EAX,[0x00806758]
0056DE1F  3B C3                     CMP EAX,EBX
0056DE21  74 09                     JZ 0x0056de2c
0056DE23  50                        PUSH EAX
0056DE24  E8 47 33 18 00            CALL 0x006f1170
0056DE29  83 C4 04                  ADD ESP,0x4
LAB_0056de2c:
0056DE2C  8D 96 1A 7D 00 00         LEA EDX,[ESI + 0x7d1a]
0056DE32  B9 0D 02 00 00            MOV ECX,0x20d
0056DE37  33 C0                     XOR EAX,EAX
0056DE39  8B FA                     MOV EDI,EDX
0056DE3B  89 1D 58 67 80 00         MOV dword ptr [0x00806758],EBX
0056DE41  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0056DE44  F3 AB                     STOSD.REP ES:EDI
0056DE46  8B 15 88 B0 79 00         MOV EDX,dword ptr [0x0079b088]
0056DE4C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0056DE4F  53                        PUSH EBX
0056DE50  51                        PUSH ECX
0056DE51  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056DE57  52                        PUSH EDX
0056DE58  53                        PUSH EBX
0056DE59  E8 82 3E 18 00            CALL 0x006f1ce0
0056DE5E  85 C0                     TEST EAX,EAX
0056DE60  0F 84 A4 00 00 00         JZ 0x0056df0a
0056DE66  8A 8E 1A 7D 00 00         MOV CL,byte ptr [ESI + 0x7d1a]
0056DE6C  8D 86 1A 7D 00 00         LEA EAX,[ESI + 0x7d1a]
0056DE72  3A CB                     CMP CL,BL
0056DE74  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0056DE77  0F 84 8D 00 00 00         JZ 0x0056df0a
0056DE7D  8D BE FE 78 00 00         LEA EDI,[ESI + 0x78fe]
0056DE83  68 03 01 00 00            PUSH 0x103
0056DE88  50                        PUSH EAX
0056DE89  57                        PUSH EDI
0056DE8A  E8 B1 04 1C 00            CALL 0x0072e340
0056DE8F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0056DE92  88 9E 01 7A 00 00         MOV byte ptr [ESI + 0x7a01],BL
0056DE98  83 C6 60                  ADD ESI,0x60
0056DE9B  57                        PUSH EDI
0056DE9C  56                        PUSH ESI
0056DE9D  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056DEA2  50                        PUSH EAX
0056DEA3  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056DEA9  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0056DEAF  8D 85 E8 FE FF FF         LEA EAX,[EBP + 0xfffffee8]
0056DEB5  8D 95 E4 FE FF FF         LEA EDX,[EBP + 0xfffffee4]
0056DEBB  53                        PUSH EBX
0056DEBC  50                        PUSH EAX
0056DEBD  89 8D E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],ECX
0056DEC3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056DEC9  E8 22 F9 1B 00            CALL 0x0072d7f0
0056DECE  83 C4 24                  ADD ESP,0x24
0056DED1  3B C3                     CMP EAX,EBX
0056DED3  75 2D                     JNZ 0x0056df02
0056DED5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056DED8  53                        PUSH EBX
0056DED9  53                        PUSH EBX
0056DEDA  53                        PUSH EBX
0056DEDB  8D 8E 1A 7D 00 00         LEA ECX,[ESI + 0x7d1a]
0056DEE1  51                        PUSH ECX
0056DEE2  68 45 03 00 00            PUSH 0x345
0056DEE7  E8 D4 2F 18 00            CALL 0x006f0ec0
0056DEEC  8B 95 E4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee4]
0056DEF2  83 C4 14                  ADD ESP,0x14
0056DEF5  A3 58 67 80 00            MOV [0x00806758],EAX
0056DEFA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056DF00  EB 6F                     JMP 0x0056df71
LAB_0056df02:
0056DF02  8B 85 E4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee4]
0056DF08  EB 5F                     JMP 0x0056df69
LAB_0056df0a:
0056DF0A  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0056DF10  8D 85 2C FF FF FF         LEA EAX,[EBP + 0xffffff2c]
0056DF16  8D 95 28 FF FF FF         LEA EDX,[EBP + 0xffffff28]
0056DF1C  53                        PUSH EBX
0056DF1D  50                        PUSH EAX
0056DF1E  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
0056DF24  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056DF2A  E8 C1 F8 1B 00            CALL 0x0072d7f0
0056DF2F  83 C4 08                  ADD ESP,0x8
0056DF32  3B C3                     CMP EAX,EBX
0056DF34  75 2D                     JNZ 0x0056df63
0056DF36  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056DF39  53                        PUSH EBX
0056DF3A  53                        PUSH EBX
0056DF3B  53                        PUSH EBX
0056DF3C  8D 8E F6 76 00 00         LEA ECX,[ESI + 0x76f6]
0056DF42  51                        PUSH ECX
0056DF43  68 45 03 00 00            PUSH 0x345
0056DF48  E8 73 2F 18 00            CALL 0x006f0ec0
0056DF4D  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
0056DF53  83 C4 14                  ADD ESP,0x14
0056DF56  A3 58 67 80 00            MOV [0x00806758],EAX
0056DF5B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056DF61  EB 0E                     JMP 0x0056df71
LAB_0056df63:
0056DF63  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
LAB_0056df69:
0056DF69  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056DF6C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_0056df71:
0056DF71  8B 86 12 7D 00 00         MOV EAX,dword ptr [ESI + 0x7d12]
0056DF77  8D BE 12 7D 00 00         LEA EDI,[ESI + 0x7d12]
0056DF7D  3B C3                     CMP EAX,EBX
0056DF7F  74 06                     JZ 0x0056df87
0056DF81  57                        PUSH EDI
0056DF82  E8 D9 D0 13 00            CALL 0x006ab060
LAB_0056df87:
0056DF87  8B 0D 7C B0 79 00         MOV ECX,dword ptr [0x0079b07c]
0056DF8D  8B 15 54 67 80 00         MOV EDX,dword ptr [0x00806754]
0056DF93  6A 01                     PUSH 0x1
0056DF95  6A 04                     PUSH 0x4
0056DF97  51                        PUSH ECX
0056DF98  52                        PUSH EDX
0056DF99  E8 62 CD 1A 00            CALL 0x0071ad00
0056DF9E  83 C4 10                  ADD ESP,0x10
0056DFA1  89 07                     MOV dword ptr [EDI],EAX
0056DFA3  A1 7C B0 79 00            MOV EAX,[0x0079b07c]
0056DFA8  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056DFAE  6A 01                     PUSH 0x1
0056DFB0  53                        PUSH EBX
0056DFB1  50                        PUSH EAX
0056DFB2  53                        PUSH EBX
0056DFB3  E8 48 46 18 00            CALL 0x006f2600
0056DFB8  8B 0F                     MOV ECX,dword ptr [EDI]
0056DFBA  89 86 16 7D 00 00         MOV dword ptr [ESI + 0x7d16],EAX
0056DFC0  8B 15 30 B0 79 00         MOV EDX,dword ptr [0x0079b030]
0056DFC6  51                        PUSH ECX
0056DFC7  8D 46 60                  LEA EAX,[ESI + 0x60]
0056DFCA  52                        PUSH EDX
0056DFCB  50                        PUSH EAX
0056DFCC  8D 8D E0 FD FF FF         LEA ECX,[EBP + 0xfffffde0]
0056DFD2  68 DC 6E 7C 00            PUSH 0x7c6edc
0056DFD7  51                        PUSH ECX
0056DFD8  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056DFDE  A1 60 67 80 00            MOV EAX,[0x00806760]
0056DFE3  83 C4 14                  ADD ESP,0x14
0056DFE6  3B C3                     CMP EAX,EBX
0056DFE8  74 43                     JZ 0x0056e02d
0056DFEA  50                        PUSH EAX
0056DFEB  E8 49 60 E9 FF            CALL 0x00404039
0056DFF0  8B 0D 60 67 80 00         MOV ECX,dword ptr [0x00806760]
0056DFF6  83 C4 04                  ADD ESP,0x4
0056DFF9  68 9C 67 80 00            PUSH 0x80679c
0056DFFE  E8 DD 40 18 00            CALL 0x006f20e0
0056E003  39 1D 64 67 80 00         CMP dword ptr [0x00806764],EBX
0056E009  74 0D                     JZ 0x0056e018
0056E00B  68 64 67 80 00            PUSH 0x806764
0056E010  E8 EB C2 19 00            CALL 0x0070a300
0056E015  83 C4 04                  ADD ESP,0x4
LAB_0056e018:
0056E018  8B 15 60 67 80 00         MOV EDX,dword ptr [0x00806760]
0056E01E  52                        PUSH EDX
0056E01F  E8 4C 31 18 00            CALL 0x006f1170
0056E024  83 C4 04                  ADD ESP,0x4
0056E027  89 1D 60 67 80 00         MOV dword ptr [0x00806760],EBX
LAB_0056e02d:
0056E02D  53                        PUSH EBX
0056E02E  53                        PUSH EBX
0056E02F  8D 85 E0 FD FF FF         LEA EAX,[EBP + 0xfffffde0]
0056E035  53                        PUSH EBX
0056E036  50                        PUSH EAX
0056E037  68 45 03 00 00            PUSH 0x345
0056E03C  E8 7F 2E 18 00            CALL 0x006f0ec0
0056E041  50                        PUSH EAX
0056E042  A3 60 67 80 00            MOV [0x00806760],EAX
0056E047  E8 74 B7 19 00            CALL 0x007097c0
0056E04C  8B 0D 60 67 80 00         MOV ECX,dword ptr [0x00806760]
0056E052  6A 01                     PUSH 0x1
0056E054  6A 02                     PUSH 0x2
0056E056  68 C8 A1 7C 00            PUSH 0x7ca1c8
0056E05B  51                        PUSH ECX
0056E05C  A3 64 67 80 00            MOV [0x00806764],EAX
0056E061  E8 8A C9 19 00            CALL 0x0070a9f0
0056E066  8B 15 60 67 80 00         MOV EDX,dword ptr [0x00806760]
0056E06C  53                        PUSH EBX
0056E06D  52                        PUSH EDX
0056E06E  A3 9C 67 80 00            MOV [0x0080679c],EAX
0056E073  E8 CB 4B E9 FF            CALL 0x00402c43
0056E078  8B 86 0E 7D 00 00         MOV EAX,dword ptr [ESI + 0x7d0e]
0056E07E  83 C4 30                  ADD ESP,0x30
0056E081  3B C3                     CMP EAX,EBX
0056E083  0F 84 4B 02 00 00         JZ 0x0056e2d4
0056E089  8D 96 A3 4D 00 00         LEA EDX,[ESI + 0x4da3]
0056E08F  B9 41 00 00 00            MOV ECX,0x41
0056E094  33 C0                     XOR EAX,EAX
0056E096  8B FA                     MOV EDI,EDX
0056E098  F3 AB                     STOSD.REP ES:EDI
0056E09A  8B 0D 70 B0 79 00         MOV ECX,dword ptr [0x0079b070]
0056E0A0  8D 45 FC                  LEA EAX,[EBP + -0x4]
0056E0A3  53                        PUSH EBX
0056E0A4  50                        PUSH EAX
0056E0A5  51                        PUSH ECX
0056E0A6  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056E0AC  6A 0C                     PUSH 0xc
0056E0AE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0056E0B1  E8 2A 3C 18 00            CALL 0x006f1ce0
0056E0B6  85 C0                     TEST EAX,EAX
0056E0B8  74 20                     JZ 0x0056e0da
0056E0BA  8A 8E A3 4D 00 00         MOV CL,byte ptr [ESI + 0x4da3]
0056E0C0  8D 86 A3 4D 00 00         LEA EAX,[ESI + 0x4da3]
0056E0C6  3A CB                     CMP CL,BL
0056E0C8  74 10                     JZ 0x0056e0da
0056E0CA  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0056E0D0  50                        PUSH EAX
0056E0D1  8D BE 1A 7D 00 00         LEA EDI,[ESI + 0x7d1a]
0056E0D7  52                        PUSH EDX
0056E0D8  EB 2C                     JMP 0x0056e106
LAB_0056e0da:
0056E0DA  8D 85 DC FC FF FF         LEA EAX,[EBP + 0xfffffcdc]
0056E0E0  53                        PUSH EBX
0056E0E1  50                        PUSH EAX
0056E0E2  53                        PUSH EBX
0056E0E3  8D 8E F6 76 00 00         LEA ECX,[ESI + 0x76f6]
0056E0E9  53                        PUSH EBX
0056E0EA  51                        PUSH ECX
0056E0EB  E8 40 06 1C 00            CALL 0x0072e730
0056E0F0  A1 18 76 80 00            MOV EAX,[0x00807618]
0056E0F5  83 C4 14                  ADD ESP,0x14
0056E0F8  8D 95 DC FC FF FF         LEA EDX,[EBP + 0xfffffcdc]
0056E0FE  8D BE 1A 7D 00 00         LEA EDI,[ESI + 0x7d1a]
0056E104  52                        PUSH EDX
0056E105  50                        PUSH EAX
LAB_0056e106:
0056E106  68 7F 26 00 00            PUSH 0x267f
0056E10B  E8 30 20 14 00            CALL 0x006b0140
0056E110  50                        PUSH EAX
0056E111  68 1C 41 7C 00            PUSH 0x7c411c
0056E116  57                        PUSH EDI
0056E117  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056E11D  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0056E123  83 C4 10                  ADD ESP,0x10
0056E126  3B CB                     CMP ECX,EBX
0056E128  74 06                     JZ 0x0056e130
0056E12A  57                        PUSH EDI
0056E12B  E8 00 31 E9 FF            CALL 0x00401230
LAB_0056e130:
0056E130  8A 86 80 11 00 00         MOV AL,byte ptr [ESI + 0x1180]
0056E136  8D BE 80 11 00 00         LEA EDI,[ESI + 0x1180]
0056E13C  3C 0C                     CMP AL,0xc
0056E13E  74 34                     JZ 0x0056e174
0056E140  3C 10                     CMP AL,0x10
0056E142  74 30                     JZ 0x0056e174
0056E144  A1 80 B0 79 00            MOV EAX,[0x0079b080]
0056E149  8D 55 F4                  LEA EDX,[EBP + -0xc]
0056E14C  8D 8E 96 11 00 00         LEA ECX,[ESI + 0x1196]
0056E152  53                        PUSH EBX
0056E153  52                        PUSH EDX
0056E154  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0056E157  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056E15D  50                        PUSH EAX
0056E15E  53                        PUSH EBX
0056E15F  E8 7C 3B 18 00            CALL 0x006f1ce0
0056E164  8B CE                     MOV ECX,ESI
0056E166  E8 48 44 E9 FF            CALL 0x004025b3
0056E16B  8B CE                     MOV ECX,ESI
0056E16D  E8 3C 58 E9 FF            CALL 0x004039ae
0056E172  EB 1C                     JMP 0x0056e190
LAB_0056e174:
0056E174  8B 15 8C B0 79 00         MOV EDX,dword ptr [0x0079b08c]
0056E17A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0056E17D  53                        PUSH EBX
0056E17E  51                        PUSH ECX
0056E17F  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056E185  52                        PUSH EDX
0056E186  6A 0C                     PUSH 0xc
0056E188  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0056E18B  E8 50 3B 18 00            CALL 0x006f1ce0
LAB_0056e190:
0056E190  8B 86 A7 4E 00 00         MOV EAX,dword ptr [ESI + 0x4ea7]
0056E196  3B C3                     CMP EAX,EBX
0056E198  74 06                     JZ 0x0056e1a0
0056E19A  50                        PUSH EAX
0056E19B  E8 D0 73 14 00            CALL 0x006b5570
LAB_0056e1a0:
0056E1A0  A1 74 B0 79 00            MOV EAX,[0x0079b074]
0056E1A5  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056E1AB  53                        PUSH EBX
0056E1AC  50                        PUSH EAX
0056E1AD  51                        PUSH ECX
0056E1AE  E8 5D C8 1A 00            CALL 0x0071aa10
0056E1B3  83 C4 0C                  ADD ESP,0xc
0056E1B6  3B C3                     CMP EAX,EBX
0056E1B8  89 86 A7 4E 00 00         MOV dword ptr [ESI + 0x4ea7],EAX
0056E1BE  75 10                     JNZ 0x0056e1d0
0056E1C0  6A 0A                     PUSH 0xa
0056E1C2  6A 0A                     PUSH 0xa
0056E1C4  53                        PUSH EBX
0056E1C5  E8 26 73 14 00            CALL 0x006b54f0
0056E1CA  89 86 A7 4E 00 00         MOV dword ptr [ESI + 0x4ea7],EAX
LAB_0056e1d0:
0056E1D0  8B 86 AB 4E 00 00         MOV EAX,dword ptr [ESI + 0x4eab]
0056E1D6  3B C3                     CMP EAX,EBX
0056E1D8  74 06                     JZ 0x0056e1e0
0056E1DA  50                        PUSH EAX
0056E1DB  E8 90 73 14 00            CALL 0x006b5570
LAB_0056e1e0:
0056E1E0  8B 15 78 B0 79 00         MOV EDX,dword ptr [0x0079b078]
0056E1E6  A1 54 67 80 00            MOV EAX,[0x00806754]
0056E1EB  53                        PUSH EBX
0056E1EC  52                        PUSH EDX
0056E1ED  50                        PUSH EAX
0056E1EE  E8 1D C8 1A 00            CALL 0x0071aa10
0056E1F3  83 C4 0C                  ADD ESP,0xc
0056E1F6  3B C3                     CMP EAX,EBX
0056E1F8  89 86 AB 4E 00 00         MOV dword ptr [ESI + 0x4eab],EAX
0056E1FE  75 10                     JNZ 0x0056e210
0056E200  6A 0A                     PUSH 0xa
0056E202  6A 0A                     PUSH 0xa
0056E204  53                        PUSH EBX
0056E205  E8 E6 72 14 00            CALL 0x006b54f0
0056E20A  89 86 AB 4E 00 00         MOV dword ptr [ESI + 0x4eab],EAX
LAB_0056e210:
0056E210  39 9E 7C 11 00 00         CMP dword ptr [ESI + 0x117c],EBX
0056E216  0F 85 81 00 00 00         JNZ 0x0056e29d
0056E21C  8A 07                     MOV AL,byte ptr [EDI]
0056E21E  3C 08                     CMP AL,0x8
0056E220  74 04                     JZ 0x0056e226
0056E222  3C 03                     CMP AL,0x3
0056E224  75 77                     JNZ 0x0056e29d
LAB_0056e226:
0056E226  B9 41 00 00 00            MOV ECX,0x41
0056E22B  33 C0                     XOR EAX,EAX
0056E22D  8D BE 12 50 00 00         LEA EDI,[ESI + 0x5012]
0056E233  F3 AB                     STOSD.REP ES:EDI
0056E235  B9 41 00 00 00            MOV ECX,0x41
0056E23A  8D BE 16 51 00 00         LEA EDI,[ESI + 0x5116]
0056E240  F3 AB                     STOSD.REP ES:EDI
0056E242  B9 08 00 00 00            MOV ECX,0x8
0056E247  8D BE E3 6C 00 00         LEA EDI,[ESI + 0x6ce3]
0056E24D  F3 AB                     STOSD.REP ES:EDI
0056E24F  B9 46 00 00 00            MOV ECX,0x46
0056E254  8D BE 03 6D 00 00         LEA EDI,[ESI + 0x6d03]
0056E25A  F3 AB                     STOSD.REP ES:EDI
0056E25C  B9 4A 00 00 00            MOV ECX,0x4a
0056E261  8D BE 1E 52 00 00         LEA EDI,[ESI + 0x521e]
0056E267  F3 AB                     STOSD.REP ES:EDI
0056E269  AA                        STOSB ES:EDI
0056E26A  B9 66 06 00 00            MOV ECX,0x666
0056E26F  33 C0                     XOR EAX,EAX
0056E271  8D BE 47 53 00 00         LEA EDI,[ESI + 0x5347]
0056E277  F3 AB                     STOSD.REP ES:EDI
0056E279  AA                        STOSB ES:EDI
0056E27A  88 9E E2 6C 00 00         MOV byte ptr [ESI + 0x6ce2],BL
0056E280  88 9E E0 6C 00 00         MOV byte ptr [ESI + 0x6ce0],BL
0056E286  88 9E E1 6C 00 00         MOV byte ptr [ESI + 0x6ce1],BL
0056E28C  89 9E 1A 52 00 00         MOV dword ptr [ESI + 0x521a],EBX
0056E292  89 9E 0E 7D 00 00         MOV dword ptr [ESI + 0x7d0e],EBX
0056E298  E9 00 01 00 00            JMP 0x0056e39d
LAB_0056e29d:
0056E29D  8B 15 90 B0 79 00         MOV EDX,dword ptr [0x0079b090]
0056E2A3  8D 4D F4                  LEA ECX,[EBP + -0xc]
0056E2A6  53                        PUSH EBX
0056E2A7  51                        PUSH ECX
0056E2A8  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056E2AE  8D BE 02 4F 00 00         LEA EDI,[ESI + 0x4f02]
0056E2B4  52                        PUSH EDX
0056E2B5  53                        PUSH EBX
0056E2B6  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0056E2B9  E8 22 3A 18 00            CALL 0x006f1ce0
0056E2BE  85 C0                     TEST EAX,EAX
0056E2C0  75 07                     JNZ 0x0056e2c9
0056E2C2  B9 FC 09 00 00            MOV ECX,0x9fc
0056E2C7  F3 AB                     STOSD.REP ES:EDI
LAB_0056e2c9:
0056E2C9  89 9E 0E 7D 00 00         MOV dword ptr [ESI + 0x7d0e],EBX
0056E2CF  E9 C9 00 00 00            JMP 0x0056e39d
LAB_0056e2d4:
0056E2D4  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0056E2DA  8D 86 A3 4D 00 00         LEA EAX,[ESI + 0x4da3]
0056E2E0  50                        PUSH EAX
0056E2E1  51                        PUSH ECX
0056E2E2  68 7F 26 00 00            PUSH 0x267f
0056E2E7  8D BE 1A 7D 00 00         LEA EDI,[ESI + 0x7d1a]
0056E2ED  E8 4E 1E 14 00            CALL 0x006b0140
0056E2F2  50                        PUSH EAX
0056E2F3  68 1C 41 7C 00            PUSH 0x7c411c
0056E2F8  57                        PUSH EDI
0056E2F9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056E2FF  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0056E305  83 C4 10                  ADD ESP,0x10
0056E308  3B CB                     CMP ECX,EBX
0056E30A  74 06                     JZ 0x0056e312
0056E30C  57                        PUSH EDI
0056E30D  E8 1E 2F E9 FF            CALL 0x00401230
LAB_0056e312:
0056E312  8A 86 80 11 00 00         MOV AL,byte ptr [ESI + 0x1180]
0056E318  3C 03                     CMP AL,0x3
0056E31A  74 15                     JZ 0x0056e331
0056E31C  3C 08                     CMP AL,0x8
0056E31E  74 11                     JZ 0x0056e331
0056E320  B9 FC 09 00 00            MOV ECX,0x9fc
0056E325  33 C0                     XOR EAX,EAX
0056E327  8D BE 02 4F 00 00         LEA EDI,[ESI + 0x4f02]
0056E32D  F3 AB                     STOSD.REP ES:EDI
0056E32F  EB 6C                     JMP 0x0056e39d
LAB_0056e331:
0056E331  B9 41 00 00 00            MOV ECX,0x41
0056E336  33 C0                     XOR EAX,EAX
0056E338  8D BE 12 50 00 00         LEA EDI,[ESI + 0x5012]
0056E33E  F3 AB                     STOSD.REP ES:EDI
0056E340  B9 41 00 00 00            MOV ECX,0x41
0056E345  8D BE 16 51 00 00         LEA EDI,[ESI + 0x5116]
0056E34B  F3 AB                     STOSD.REP ES:EDI
0056E34D  B9 08 00 00 00            MOV ECX,0x8
0056E352  8D BE E3 6C 00 00         LEA EDI,[ESI + 0x6ce3]
0056E358  F3 AB                     STOSD.REP ES:EDI
0056E35A  B9 46 00 00 00            MOV ECX,0x46
0056E35F  8D BE 03 6D 00 00         LEA EDI,[ESI + 0x6d03]
0056E365  F3 AB                     STOSD.REP ES:EDI
0056E367  B9 4A 00 00 00            MOV ECX,0x4a
0056E36C  8D BE 1E 52 00 00         LEA EDI,[ESI + 0x521e]
0056E372  F3 AB                     STOSD.REP ES:EDI
0056E374  AA                        STOSB ES:EDI
0056E375  B9 66 06 00 00            MOV ECX,0x666
0056E37A  33 C0                     XOR EAX,EAX
0056E37C  8D BE 47 53 00 00         LEA EDI,[ESI + 0x5347]
0056E382  F3 AB                     STOSD.REP ES:EDI
0056E384  AA                        STOSB ES:EDI
0056E385  88 9E E2 6C 00 00         MOV byte ptr [ESI + 0x6ce2],BL
0056E38B  88 9E E0 6C 00 00         MOV byte ptr [ESI + 0x6ce0],BL
0056E391  88 9E E1 6C 00 00         MOV byte ptr [ESI + 0x6ce1],BL
0056E397  89 9E 1A 52 00 00         MOV dword ptr [ESI + 0x521a],EBX
LAB_0056e39d:
0056E39D  8B 86 85 11 00 00         MOV EAX,dword ptr [ESI + 0x1185]
0056E3A3  89 9E 02 4F 00 00         MOV dword ptr [ESI + 0x4f02],EBX
0056E3A9  3B C3                     CMP EAX,EBX
0056E3AB  75 1E                     JNZ 0x0056e3cb
0056E3AD  39 9E 81 11 00 00         CMP dword ptr [ESI + 0x1181],EBX
0056E3B3  75 16                     JNZ 0x0056e3cb
0056E3B5  80 BE 63 11 00 00 03      CMP byte ptr [ESI + 0x1163],0x3
0056E3BC  74 0D                     JZ 0x0056e3cb
0056E3BE  8B CE                     MOV ECX,ESI
0056E3C0  E8 EB 6D 17 00            CALL 0x006e51b0
0056E3C5  89 86 34 11 00 00         MOV dword ptr [ESI + 0x1134],EAX
LAB_0056e3cb:
0056E3CB  8B 0D 5C B0 79 00         MOV ECX,dword ptr [0x0079b05c]
0056E3D1  8D 45 FC                  LEA EAX,[EBP + -0x4]
0056E3D4  53                        PUSH EBX
0056E3D5  50                        PUSH EAX
0056E3D6  8D 96 34 11 00 00         LEA EDX,[ESI + 0x1134]
0056E3DC  51                        PUSH ECX
0056E3DD  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
0056E3E3  6A 0C                     PUSH 0xc
0056E3E5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0056E3E8  E8 F3 38 18 00            CALL 0x006f1ce0
0056E3ED  E8 81 54 E9 FF            CALL 0x00403873
0056E3F2  33 C0                     XOR EAX,EAX
0056E3F4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056E3FA  A0 3B 73 80 00            MOV AL,[0x0080733b]
0056E3FF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0056E402  C1 E0 03                  SHL EAX,0x3
0056E405  8B 90 E4 2A 7C 00         MOV EDX,dword ptr [EAX + 0x7c2ae4]
0056E40B  8B 80 F0 2A 7C 00         MOV EAX,dword ptr [EAX + 0x7c2af0]
0056E411  52                        PUSH EDX
0056E412  50                        PUSH EAX
0056E413  E8 28 A2 17 00            CALL 0x006e8640
0056E418  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056E41E  68 33 33 73 3F            PUSH 0x3f733333
0056E423  68 33 33 33 3F            PUSH 0x3f333333
0056E428  E8 63 F6 16 00            CALL 0x006dda90
0056E42D  8B 0D C8 32 80 00         MOV ECX,dword ptr [0x008032c8]
0056E433  51                        PUSH ECX
0056E434  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056E43A  6A 04                     PUSH 0x4
0056E43C  6A 04                     PUSH 0x4
0056E43E  6A 10                     PUSH 0x10
0056E440  E8 9B F6 16 00            CALL 0x006ddae0
0056E445  39 1D 28 73 80 00         CMP dword ptr [0x00807328],EBX
0056E44B  75 0B                     JNZ 0x0056e458
0056E44D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056E453  E8 58 F7 16 00            CALL 0x006ddbb0
LAB_0056e458:
0056E458  A1 98 75 80 00            MOV EAX,[0x00807598]
0056E45D  8B 0D C0 32 80 00         MOV ECX,dword ptr [0x008032c0]
0056E463  C7 80 78 02 00 00 10 00 00 00  MOV dword ptr [EAX + 0x278],0x10
0056E46D  89 88 7C 02 00 00         MOV dword ptr [EAX + 0x27c],ECX
0056E473  8B 15 2C 73 80 00         MOV EDX,dword ptr [0x0080732c]
0056E479  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056E47F  52                        PUSH EDX
0056E480  E8 AB A1 17 00            CALL 0x006e8630
0056E485  E8 27 2F E9 FF            CALL 0x004013b1
0056E48A  E8 6A 6E E9 FF            CALL 0x004052f9
0056E48F  A1 54 67 80 00            MOV EAX,[0x00806754]
0056E494  50                        PUSH EAX
0056E495  E8 D6 2C 18 00            CALL 0x006f1170
0056E49A  A1 58 2A 80 00            MOV EAX,[0x00802a58]
0056E49F  83 C4 04                  ADD ESP,0x4
0056E4A2  3B C3                     CMP EAX,EBX
0056E4A4  89 1D 54 67 80 00         MOV dword ptr [0x00806754],EBX
0056E4AA  74 5D                     JZ 0x0056e509
0056E4AC  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0056E4B2  51                        PUSH ECX
0056E4B3  68 80 26 00 00            PUSH 0x2680
0056E4B8  E8 83 1C 14 00            CALL 0x006b0140
0056E4BD  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0056E4C3  50                        PUSH EAX
0056E4C4  E8 67 2D E9 FF            CALL 0x00401230
0056E4C9  38 9E 5E 11 00 00         CMP byte ptr [ESI + 0x115e],BL
0056E4CF  74 14                     JZ 0x0056e4e5
0056E4D1  80 BE 63 11 00 00 03      CMP byte ptr [ESI + 0x1163],0x3
0056E4D8  75 0B                     JNZ 0x0056e4e5
0056E4DA  68 D0 07 00 00            PUSH 0x7d0
0056E4DF  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_0056e4e5:
0056E4E5  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0056E4EB  6A 01                     PUSH 0x1
0056E4ED  6A 0A                     PUSH 0xa
0056E4EF  E8 5C 4E E9 FF            CALL 0x00403350
0056E4F4  8B 15 58 2A 80 00         MOV EDX,dword ptr [0x00802a58]
0056E4FA  52                        PUSH EDX
0056E4FB  E8 28 76 E9 FF            CALL 0x00405b28
0056E500  83 C4 04                  ADD ESP,0x4
0056E503  89 1D 58 2A 80 00         MOV dword ptr [0x00802a58],EBX
LAB_0056e509:
0056E509  53                        PUSH EBX
0056E50A  E8 B7 3C E9 FF            CALL 0x004021c6
0056E50F  B9 08 00 00 00            MOV ECX,0x8
0056E514  33 C0                     XOR EAX,EAX
0056E516  8D 7D D0                  LEA EDI,[EBP + -0x30]
0056E519  83 C4 04                  ADD ESP,0x4
0056E51C  F3 AB                     STOSD.REP ES:EDI
0056E51E  8B 06                     MOV EAX,dword ptr [ESI]
0056E520  8D 4D D0                  LEA ECX,[EBP + -0x30]
0056E523  51                        PUSH ECX
0056E524  8B CE                     MOV ECX,ESI
0056E526  C7 45 E0 07 61 00 00      MOV dword ptr [EBP + -0x20],0x6107
0056E52D  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0056E534  FF 50 18                  CALL dword ptr [EAX + 0x18]
0056E537  53                        PUSH EBX
0056E538  E8 89 3C E9 FF            CALL 0x004021c6
0056E53D  B9 41 00 00 00            MOV ECX,0x41
0056E542  33 C0                     XOR EAX,EAX
0056E544  8D BE 12 50 00 00         LEA EDI,[ESI + 0x5012]
0056E54A  83 C4 04                  ADD ESP,0x4
0056E54D  F3 AB                     STOSD.REP ES:EDI
0056E54F  B9 4A 00 00 00            MOV ECX,0x4a
0056E554  8D BE 1E 52 00 00         LEA EDI,[ESI + 0x521e]
0056E55A  F3 AB                     STOSD.REP ES:EDI
0056E55C  AA                        STOSB ES:EDI
0056E55D  8D BE 27 53 00 00         LEA EDI,[ESI + 0x5327]
0056E563  B9 08 00 00 00            MOV ECX,0x8
0056E568  83 C8 FF                  OR EAX,0xffffffff
0056E56B  F3 AB                     STOSD.REP ES:EDI
0056E56D  B9 08 00 00 00            MOV ECX,0x8
0056E572  33 C0                     XOR EAX,EAX
0056E574  8D BE E3 6C 00 00         LEA EDI,[ESI + 0x6ce3]
0056E57A  F3 AB                     STOSD.REP ES:EDI
0056E57C  88 9E E1 6C 00 00         MOV byte ptr [ESI + 0x6ce1],BL
0056E582  88 9E E0 6C 00 00         MOV byte ptr [ESI + 0x6ce0],BL
0056E588  A1 30 2A 80 00            MOV EAX,[0x00802a30]
0056E58D  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
0056E593  74 1E                     JZ 0x0056e5b3
0056E595  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0056E598  83 F9 FF                  CMP ECX,-0x1
0056E59B  74 22                     JZ 0x0056e5bf
0056E59D  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
0056E5A0  52                        PUSH EDX
0056E5A1  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
0056E5A4  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
0056E5A7  52                        PUSH EDX
0056E5A8  6A FE                     PUSH -0x2
0056E5AA  51                        PUSH ECX
0056E5AB  50                        PUSH EAX
0056E5AC  E8 1F 4F 14 00            CALL 0x006b34d0
0056E5B1  EB 0C                     JMP 0x0056e5bf
LAB_0056e5b3:
0056E5B3  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
0056E5B9  51                        PUSH ECX
0056E5BA  E8 A1 A4 14 00            CALL 0x006b8a60
LAB_0056e5bf:
0056E5BF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0056E5C5  33 D2                     XOR EDX,EDX
0056E5C7  8A 15 26 73 80 00         MOV DL,byte ptr [0x00807326]
0056E5CD  52                        PUSH EDX
0056E5CE  E8 A1 38 E9 FF            CALL 0x00401e74
0056E5D3  53                        PUSH EBX
0056E5D4  E8 ED 3B E9 FF            CALL 0x004021c6
0056E5D9  B9 08 00 00 00            MOV ECX,0x8
0056E5DE  33 C0                     XOR EAX,EAX
0056E5E0  8D 7D D0                  LEA EDI,[EBP + -0x30]
0056E5E3  83 C4 04                  ADD ESP,0x4
0056E5E6  F3 AB                     STOSD.REP ES:EDI
0056E5E8  8D 45 D0                  LEA EAX,[EBP + -0x30]
0056E5EB  8B CE                     MOV ECX,ESI
0056E5ED  50                        PUSH EAX
0056E5EE  C7 45 DC 0F 00 00 00      MOV dword ptr [EBP + -0x24],0xf
0056E5F5  C7 45 E0 05 00 00 00      MOV dword ptr [EBP + -0x20],0x5
0056E5FC  E8 AF 57 17 00            CALL 0x006e3db0
0056E601  53                        PUSH EBX
0056E602  E8 BF 3B E9 FF            CALL 0x004021c6
0056E607  8B 0D 3C 16 81 00         MOV ECX,dword ptr [0x0081163c]
0056E60D  83 C4 04                  ADD ESP,0x4
0056E610  E8 70 4A E9 FF            CALL 0x00403085
0056E615  53                        PUSH EBX
0056E616  53                        PUSH EBX
0056E617  68 B7 04 00 00            PUSH 0x4b7
0056E61C  53                        PUSH EBX
0056E61D  6A 01                     PUSH 0x1
0056E61F  8D 4E 38                  LEA ECX,[ESI + 0x38]
0056E622  E8 B1 65 E9 FF            CALL 0x00404bd8
0056E627  53                        PUSH EBX
0056E628  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0056E632  FF 15 40 BE 85 00         CALL dword ptr [0x0085be40]
0056E638  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0056E63E  53                        PUSH EBX
0056E63F  51                        PUSH ECX
0056E640  89 1D 7C 6D 85 00         MOV dword ptr [0x00856d7c],EBX
0056E646  E8 D5 D4 14 00            CALL 0x006bbb20
0056E64B  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
0056E651  53                        PUSH EBX
0056E652  52                        PUSH EDX
0056E653  E8 28 C1 14 00            CALL 0x006ba780
0056E658  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0056E65E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056E663  88 9E 95 11 00 00         MOV byte ptr [ESI + 0x1195],BL
0056E669  5F                        POP EDI
0056E66A  5E                        POP ESI
0056E66B  5B                        POP EBX
0056E66C  8B E5                     MOV ESP,EBP
0056E66E  5D                        POP EBP
0056E66F  C3                        RET
LAB_0056e670:
0056E670  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
0056E676  68 B0 A1 7C 00            PUSH 0x7ca1b0
0056E67B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056E680  50                        PUSH EAX
0056E681  53                        PUSH EBX
0056E682  68 4D 05 00 00            PUSH 0x54d
0056E687  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056E68C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056E692  E8 39 EE 13 00            CALL 0x006ad4d0
0056E697  83 C4 18                  ADD ESP,0x18
0056E69A  85 C0                     TEST EAX,EAX
0056E69C  74 01                     JZ 0x0056e69f
0056E69E  CC                        INT3
LAB_0056e69f:
0056E69F  A1 54 67 80 00            MOV EAX,[0x00806754]
0056E6A4  3B C3                     CMP EAX,EBX
0056E6A6  74 09                     JZ 0x0056e6b1
0056E6A8  50                        PUSH EAX
0056E6A9  E8 C2 2A 18 00            CALL 0x006f1170
0056E6AE  83 C4 04                  ADD ESP,0x4
LAB_0056e6b1:
0056E6B1  A1 58 2A 80 00            MOV EAX,[0x00802a58]
0056E6B6  89 1D 54 67 80 00         MOV dword ptr [0x00806754],EBX
0056E6BC  3B C3                     CMP EAX,EBX
0056E6BE  74 09                     JZ 0x0056e6c9
0056E6C0  50                        PUSH EAX
0056E6C1  E8 62 74 E9 FF            CALL 0x00405b28
0056E6C6  83 C4 04                  ADD ESP,0x4
LAB_0056e6c9:
0056E6C9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056E6CC  B9 08 00 00 00            MOV ECX,0x8
0056E6D1  33 C0                     XOR EAX,EAX
0056E6D3  8D 7D B0                  LEA EDI,[EBP + -0x50]
0056E6D6  F3 AB                     STOSD.REP ES:EDI
0056E6D8  89 1D 58 2A 80 00         MOV dword ptr [0x00802a58],EBX
0056E6DE  8B 16                     MOV EDX,dword ptr [ESI]
0056E6E0  8D 45 B0                  LEA EAX,[EBP + -0x50]
0056E6E3  8B CE                     MOV ECX,ESI
0056E6E5  50                        PUSH EAX
0056E6E6  C7 45 C0 02 61 00 00      MOV dword ptr [EBP + -0x40],0x6102
0056E6ED  FF 52 18                  CALL dword ptr [EDX + 0x18]
0056E6F0  88 9E 95 11 00 00         MOV byte ptr [ESI + 0x1195],BL
0056E6F6  5F                        POP EDI
0056E6F7  5E                        POP ESI
0056E6F8  5B                        POP EBX
0056E6F9  8B E5                     MOV ESP,EBP
0056E6FB  5D                        POP EBP
0056E6FC  C3                        RET
