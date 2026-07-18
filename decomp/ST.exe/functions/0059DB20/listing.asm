FSGSTy::ChatCtrls:
0059DB20  55                        PUSH EBP
0059DB21  8B EC                     MOV EBP,ESP
0059DB23  B8 50 16 00 00            MOV EAX,0x1650
0059DB28  E8 13 FF 18 00            CALL 0x0072da40
0059DB2D  53                        PUSH EBX
0059DB2E  56                        PUSH ESI
0059DB2F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059DB32  57                        PUSH EDI
0059DB33  B9 23 02 00 00            MOV ECX,0x223
0059DB38  33 C0                     XOR EAX,EAX
0059DB3A  8D BD B0 E9 FF FF         LEA EDI,[EBP + 0xffffe9b0]
0059DB40  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059DB43  F3 AB                     STOSD.REP ES:EDI
0059DB45  B9 1E 02 00 00            MOV ECX,0x21e
0059DB4A  8D BD 3C F2 FF FF         LEA EDI,[EBP + 0xfffff23c]
0059DB50  F3 AB                     STOSD.REP ES:EDI
0059DB52  B9 35 01 00 00            MOV ECX,0x135
0059DB57  8D BD E4 FA FF FF         LEA EDI,[EBP + 0xfffffae4]
0059DB5D  F3 AB                     STOSD.REP ES:EDI
0059DB5F  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059DB64  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059DB67  6A 00                     PUSH 0x0
0059DB69  52                        PUSH EDX
0059DB6A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059DB6D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059DB73  E8 78 FC 18 00            CALL 0x0072d7f0
0059DB78  8B F0                     MOV ESI,EAX
0059DB7A  83 C4 08                  ADD ESP,0x8
0059DB7D  85 F6                     TEST ESI,ESI
0059DB7F  0F 85 8D 09 00 00         JNZ 0x0059e512
0059DB85  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0059DB88  88 83 60 1A 00 00         MOV byte ptr [EBX + 0x1a60],AL
0059DB8E  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
0059DB94  8D 83 8E 1E 00 00         LEA EAX,[EBX + 0x1e8e]
0059DB9A  85 C9                     TEST ECX,ECX
0059DB9C  74 06                     JZ 0x0059dba4
0059DB9E  50                        PUSH EAX
0059DB9F  E8 BC D4 10 00            CALL 0x006ab060
LAB_0059dba4:
0059DBA4  8B 83 92 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e92]
0059DBAA  8D B3 92 1E 00 00         LEA ESI,[EBX + 0x1e92]
0059DBB0  85 C0                     TEST EAX,EAX
0059DBB2  74 06                     JZ 0x0059dbba
0059DBB4  56                        PUSH ESI
0059DBB5  E8 A6 D4 10 00            CALL 0x006ab060
LAB_0059dbba:
0059DBBA  8B 83 9A 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e9a]
0059DBC0  8D BB 9A 1E 00 00         LEA EDI,[EBX + 0x1e9a]
0059DBC6  85 C0                     TEST EAX,EAX
0059DBC8  74 06                     JZ 0x0059dbd0
0059DBCA  57                        PUSH EDI
0059DBCB  E8 90 D4 10 00            CALL 0x006ab060
LAB_0059dbd0:
0059DBD0  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
0059DBD3  6A 01                     PUSH 0x1
0059DBD5  8D 48 28                  LEA ECX,[EAX + 0x28]
0059DBD8  51                        PUSH ECX
0059DBD9  50                        PUSH EAX
0059DBDA  E8 01 74 11 00            CALL 0x006b4fe0
0059DBDF  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
0059DBE2  50                        PUSH EAX
0059DBE3  33 C0                     XOR EAX,EAX
0059DBE5  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
0059DBE9  50                        PUSH EAX
0059DBEA  68 75 01 00 00            PUSH 0x175
0059DBEF  68 BF 01 00 00            PUSH 0x1bf
0059DBF4  E8 C7 74 11 00            CALL 0x006b50c0
0059DBF9  6A 08                     PUSH 0x8
0059DBFB  68 75 01 00 00            PUSH 0x175
0059DC00  89 83 8E 1E 00 00         MOV dword ptr [EBX + 0x1e8e],EAX
0059DC06  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0059DC0C  68 BF 01 00 00            PUSH 0x1bf
0059DC11  6A 5E                     PUSH 0x5e
0059DC13  6A 13                     PUSH 0x13
0059DC15  51                        PUSH ECX
0059DC16  E8 65 6C 12 00            CALL 0x006c4880
0059DC1B  6A 08                     PUSH 0x8
0059DC1D  68 75 01 00 00            PUSH 0x175
0059DC22  89 06                     MOV dword ptr [ESI],EAX
0059DC24  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
0059DC2A  68 24 01 00 00            PUSH 0x124
0059DC2F  6A 5E                     PUSH 0x5e
0059DC31  68 E9 01 00 00            PUSH 0x1e9
0059DC36  52                        PUSH EDX
0059DC37  E8 44 6C 12 00            CALL 0x006c4880
0059DC3C  6A 0A                     PUSH 0xa
0059DC3E  6A 2E                     PUSH 0x2e
0059DC40  33 F6                     XOR ESI,ESI
0059DC42  6A 14                     PUSH 0x14
0059DC44  56                        PUSH ESI
0059DC45  89 07                     MOV dword ptr [EDI],EAX
0059DC47  E8 44 06 11 00            CALL 0x006ae290
0059DC4C  8D 8D B4 FA FF FF         LEA ECX,[EBP + 0xfffffab4]
0059DC52  89 83 A6 1E 00 00         MOV dword ptr [EBX + 0x1ea6],EAX
0059DC58  51                        PUSH ECX
0059DC59  50                        PUSH EAX
0059DC5A  C6 85 E1 FA FF FF 01      MOV byte ptr [EBP + 0xfffffae1],0x1
0059DC61  E8 5A 05 11 00            CALL 0x006ae1c0
0059DC66  6A 0A                     PUSH 0xa
0059DC68  6A 68                     PUSH 0x68
0059DC6A  6A 14                     PUSH 0x14
0059DC6C  56                        PUSH ESI
0059DC6D  E8 1E 06 11 00            CALL 0x006ae290
0059DC72  6A 01                     PUSH 0x1
0059DC74  6A 01                     PUSH 0x1
0059DC76  56                        PUSH ESI
0059DC77  89 83 AA 1E 00 00         MOV dword ptr [EBX + 0x1eaa],EAX
0059DC7D  E8 6E 78 11 00            CALL 0x006b54f0
0059DC82  68 A0 16 80 00            PUSH 0x8016a0
0059DC87  50                        PUSH EAX
0059DC88  89 83 E8 1A 00 00         MOV dword ptr [EBX + 0x1ae8],EAX
0059DC8E  E8 0D 7E 11 00            CALL 0x006b5aa0
0059DC93  6A 01                     PUSH 0x1
0059DC95  6A 01                     PUSH 0x1
0059DC97  56                        PUSH ESI
0059DC98  E8 53 78 11 00            CALL 0x006b54f0
0059DC9D  68 A0 16 80 00            PUSH 0x8016a0
0059DCA2  50                        PUSH EAX
0059DCA3  89 83 EC 1A 00 00         MOV dword ptr [EBX + 0x1aec],EAX
0059DCA9  E8 F2 7D 11 00            CALL 0x006b5aa0
0059DCAE  6A 01                     PUSH 0x1
0059DCB0  6A 01                     PUSH 0x1
0059DCB2  56                        PUSH ESI
0059DCB3  E8 38 78 11 00            CALL 0x006b54f0
0059DCB8  68 A0 16 80 00            PUSH 0x8016a0
0059DCBD  50                        PUSH EAX
0059DCBE  89 83 A2 1E 00 00         MOV dword ptr [EBX + 0x1ea2],EAX
0059DCC4  E8 D7 7D 11 00            CALL 0x006b5aa0
0059DCC9  BF 02 00 00 00            MOV EDI,0x2
0059DCCE  89 B5 3C F2 FF FF         MOV dword ptr [EBP + 0xfffff23c],ESI
0059DCD4  89 BD 40 F2 FF FF         MOV dword ptr [EBP + 0xfffff240],EDI
0059DCDA  C7 85 5C F2 FF FF 19 00 00 00  MOV dword ptr [EBP + 0xfffff25c],0x19
0059DCE4  C7 85 60 F2 FF FF 5F 00 00 00  MOV dword ptr [EBP + 0xfffff260],0x5f
0059DCEE  C7 85 44 F2 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff244],0x1
0059DCF8  8B 8B 4C 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b4c]
0059DCFE  BA A6 01 00 00            MOV EDX,0x1a6
0059DD03  89 B5 48 F2 FF FF         MOV dword ptr [EBP + 0xfffff248],ESI
0059DD09  8B B3 77 1A 00 00         MOV ESI,dword ptr [EBX + 0x1a77]
0059DD0F  2B D1                     SUB EDX,ECX
0059DD11  89 95 4C F2 FF FF         MOV dword ptr [EBP + 0xfffff24c],EDX
0059DD17  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
0059DD1D  85 C0                     TEST EAX,EAX
0059DD1F  74 09                     JZ 0x0059dd2a
0059DD21  56                        PUSH ESI
0059DD22  E8 69 2A 17 00            CALL 0x00710790
0059DD27  83 C4 04                  ADD ESP,0x4
LAB_0059dd2a:
0059DD2A  8B B6 8A 00 00 00         MOV ESI,dword ptr [ESI + 0x8a]
0059DD30  B8 5E 01 00 00            MOV EAX,0x15e
0059DD35  99                        CDQ
0059DD36  F7 FE                     IDIV ESI
0059DD38  8B 93 D9 1B 00 00         MOV EDX,dword ptr [EBX + 0x1bd9]
0059DD3E  33 C9                     XOR ECX,ECX
0059DD40  89 8D F0 F2 FF FF         MOV dword ptr [EBP + 0xfffff2f0],ECX
0059DD46  89 8D F8 F2 FF FF         MOV dword ptr [EBP + 0xfffff2f8],ECX
0059DD4C  8B 8B D5 1B 00 00         MOV ECX,dword ptr [EBX + 0x1bd5]
0059DD52  89 95 04 F3 FF FF         MOV dword ptr [EBP + 0xfffff304],EDX
0059DD58  8B 93 E1 1B 00 00         MOV EDX,dword ptr [EBX + 0x1be1]
0059DD5E  89 8D 00 F3 FF FF         MOV dword ptr [EBP + 0xfffff300],ECX
0059DD64  8B 8B DD 1B 00 00         MOV ECX,dword ptr [EBX + 0x1bdd]
0059DD6A  89 B5 50 F2 FF FF         MOV dword ptr [EBP + 0xfffff250],ESI
0059DD70  89 BD 78 F2 FF FF         MOV dword ptr [EBP + 0xfffff278],EDI
0059DD76  89 BD F4 F2 FF FF         MOV dword ptr [EBP + 0xfffff2f4],EDI
0059DD7C  89 BD FC F2 FF FF         MOV dword ptr [EBP + 0xfffff2fc],EDI
0059DD82  89 8D 08 F3 FF FF         MOV dword ptr [EBP + 0xfffff308],ECX
0059DD88  89 BD 5C F3 FF FF         MOV dword ptr [EBP + 0xfffff35c],EDI
0059DD8E  89 BD 74 F4 FF FF         MOV dword ptr [EBP + 0xfffff474],EDI
0059DD94  B9 5F 00 00 00            MOV ECX,0x5f
0059DD99  8D B5 F8 F2 FF FF         LEA ESI,[EBP + 0xfffff2f8]
0059DD9F  8D BD 78 F4 FF FF         LEA EDI,[EBP + 0xfffff478]
0059DDA5  C7 85 54 F2 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff254],0x1
0059DDAF  C7 85 7C F2 FF FF 82 69 00 00  MOV dword ptr [EBP + 0xfffff27c],0x6982
0059DDB9  C7 85 EC F2 FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffff2ec],0x4
0059DDC3  89 95 0C F3 FF FF         MOV dword ptr [EBP + 0xfffff30c],EDX
0059DDC9  C7 85 08 F4 FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffff408],0x1f4
0059DDD3  C7 85 0C F4 FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffff40c],0x32
0059DDDD  C7 85 60 F3 FF FF 34 63 00 00  MOV dword ptr [EBP + 0xfffff360],0x6334
0059DDE7  8B 93 48 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b48]
0059DDED  6A 00                     PUSH 0x0
0059DDEF  89 85 58 F2 FF FF         MOV dword ptr [EBP + 0xfffff258],EAX
0059DDF5  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0059DDF8  89 85 74 F2 FF FF         MOV dword ptr [EBP + 0xfffff274],EAX
0059DDFE  89 85 58 F3 FF FF         MOV dword ptr [EBP + 0xfffff358],EAX
0059DE04  F3 A5                     MOVSD.REP ES:EDI,ESI
0059DE06  8B 8B 44 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b44]
0059DE0C  89 95 84 F4 FF FF         MOV dword ptr [EBP + 0xfffff484],EDX
0059DE12  8B 93 50 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b50]
0059DE18  89 8D 80 F4 FF FF         MOV dword ptr [EBP + 0xfffff480],ECX
0059DE1E  8B 8B 4C 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b4c]
0059DE24  89 85 48 F6 FF FF         MOV dword ptr [EBP + 0xfffff648],EAX
0059DE2A  89 8D 88 F4 FF FF         MOV dword ptr [EBP + 0xfffff488],ECX
0059DE30  8B 8B 66 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c66]
0059DE36  89 8D 04 F6 FF FF         MOV dword ptr [EBP + 0xfffff604],ECX
0059DE3C  8B 8B 6E 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c6e]
0059DE42  89 95 8C F4 FF FF         MOV dword ptr [EBP + 0xfffff48c],EDX
0059DE48  8B 93 6A 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c6a]
0059DE4E  89 8D 0C F6 FF FF         MOV dword ptr [EBP + 0xfffff60c],ECX
0059DE54  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059DE57  8D 85 3C F2 FF FF         LEA EAX,[EBP + 0xfffff23c]
0059DE5D  BE 02 00 00 00            MOV ESI,0x2
0059DE62  8D BB 14 1B 00 00         LEA EDI,[EBX + 0x1b14]
0059DE68  50                        PUSH EAX
0059DE69  C7 85 E0 F4 FF FF 33 63 00 00  MOV dword ptr [EBP + 0xfffff4e0],0x6333
0059DE73  C7 85 F4 F5 FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffff5f4],0x3
0059DE7D  C7 85 F8 F5 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff5f8],0x1
0059DE87  C7 85 00 F6 FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffff600],0x0
0059DE91  89 95 08 F6 FF FF         MOV dword ptr [EBP + 0xfffff608],EDX
0059DE97  C7 85 10 F6 FF FF 10 01 00 00  MOV dword ptr [EBP + 0xfffff610],0x110
0059DEA1  C7 85 14 F6 FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xfffff614],0xe
0059DEAB  89 B5 4C F6 FF FF         MOV dword ptr [EBP + 0xfffff64c],ESI
0059DEB1  C7 85 50 F6 FF FF 35 63 00 00  MOV dword ptr [EBP + 0xfffff650],0x6335
0059DEBB  8B 11                     MOV EDX,dword ptr [ECX]
0059DEBD  6A 00                     PUSH 0x0
0059DEBF  57                        PUSH EDI
0059DEC0  6A 08                     PUSH 0x8
0059DEC2  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059DEC5  8B 0F                     MOV ECX,dword ptr [EDI]
0059DEC7  8D 43 1D                  LEA EAX,[EBX + 0x1d]
0059DECA  50                        PUSH EAX
0059DECB  51                        PUSH ECX
0059DECC  56                        PUSH ESI
0059DECD  8B CB                     MOV ECX,EBX
0059DECF  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
0059DED6  E8 A5 81 14 00            CALL 0x006e6080
0059DEDB  8B 83 2C 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b2c]
0059DEE1  83 F8 FF                  CMP EAX,-0x1
0059DEE4  74 1D                     JZ 0x0059df03
0059DEE6  8B 93 48 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b48]
0059DEEC  8B 8B 44 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b44]
0059DEF2  52                        PUSH EDX
0059DEF3  8B 93 70 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b70]
0059DEF9  51                        PUSH ECX
0059DEFA  6A FE                     PUSH -0x2
0059DEFC  50                        PUSH EAX
0059DEFD  52                        PUSH EDX
0059DEFE  E8 CD 55 11 00            CALL 0x006b34d0
LAB_0059df03:
0059DF03  8B 83 BD 1B 00 00         MOV EAX,dword ptr [EBX + 0x1bbd]
0059DF09  83 F8 FF                  CMP EAX,-0x1
0059DF0C  74 1D                     JZ 0x0059df2b
0059DF0E  8B 8B D9 1B 00 00         MOV ECX,dword ptr [EBX + 0x1bd9]
0059DF14  8B 93 D5 1B 00 00         MOV EDX,dword ptr [EBX + 0x1bd5]
0059DF1A  51                        PUSH ECX
0059DF1B  52                        PUSH EDX
0059DF1C  6A FE                     PUSH -0x2
0059DF1E  50                        PUSH EAX
0059DF1F  8B 83 01 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c01]
0059DF25  50                        PUSH EAX
0059DF26  E8 A5 55 11 00            CALL 0x006b34d0
LAB_0059df2b:
0059DF2B  8B 83 4E 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c4e]
0059DF31  83 F8 FF                  CMP EAX,-0x1
0059DF34  74 1D                     JZ 0x0059df53
0059DF36  8B 8B 6A 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c6a]
0059DF3C  8B 93 66 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c66]
0059DF42  51                        PUSH ECX
0059DF43  52                        PUSH EDX
0059DF44  6A FE                     PUSH -0x2
0059DF46  50                        PUSH EAX
0059DF47  8B 83 92 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c92]
0059DF4D  50                        PUSH EAX
0059DF4E  E8 7D 55 11 00            CALL 0x006b34d0
LAB_0059df53:
0059DF53  8B 8B 9E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e9e]
0059DF59  8D 43 1D                  LEA EAX,[EBX + 0x1d]
0059DF5C  50                        PUSH EAX
0059DF5D  8B 07                     MOV EAX,dword ptr [EDI]
0059DF5F  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
0059DF66  66 C7 43 31 01 00         MOV word ptr [EBX + 0x31],0x1
0059DF6C  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
0059DF70  50                        PUSH EAX
0059DF71  56                        PUSH ESI
0059DF72  8B CB                     MOV ECX,EBX
0059DF74  66 89 53 33               MOV word ptr [EBX + 0x33],DX
0059DF78  E8 03 81 14 00            CALL 0x006e6080
0059DF7D  8B 8B 9E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e9e]
0059DF83  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
0059DF8A  66 C7 43 31 00 00         MOV word ptr [EBX + 0x31],0x0
0059DF90  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0059DF93  83 F8 19                  CMP EAX,0x19
0059DF96  7D 04                     JGE 0x0059df9c
0059DF98  33 C0                     XOR EAX,EAX
0059DF9A  EB 03                     JMP 0x0059df9f
LAB_0059df9c:
0059DF9C  83 C0 E7                  ADD EAX,-0x19
LAB_0059df9f:
0059DF9F  8B 17                     MOV EDX,dword ptr [EDI]
0059DFA1  66 89 43 33               MOV word ptr [EBX + 0x33],AX
0059DFA5  8D 43 1D                  LEA EAX,[EBX + 0x1d]
0059DFA8  8B CB                     MOV ECX,EBX
0059DFAA  50                        PUSH EAX
0059DFAB  52                        PUSH EDX
0059DFAC  56                        PUSH ESI
0059DFAD  E8 CE 80 14 00            CALL 0x006e6080
0059DFB2  B9 23 02 00 00            MOV ECX,0x223
0059DFB7  33 C0                     XOR EAX,EAX
0059DFB9  8D BD B0 E9 FF FF         LEA EDI,[EBP + 0xffffe9b0]
0059DFBF  F3 AB                     STOSD.REP ES:EDI
0059DFC1  8B 83 77 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a77]
0059DFC7  8B 8B A2 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ea2]
0059DFCD  89 85 B8 E9 FF FF         MOV dword ptr [EBP + 0xffffe9b8],EAX
0059DFD3  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0059DFD6  89 85 FC E9 FF FF         MOV dword ptr [EBP + 0xffffe9fc],EAX
0059DFDC  89 85 3C EA FF FF         MOV dword ptr [EBP + 0xffffea3c],EAX
0059DFE2  33 FF                     XOR EDI,EDI
0059DFE4  8D 85 B0 E9 FF FF         LEA EAX,[EBP + 0xffffe9b0]
0059DFEA  89 8D D0 E9 FF FF         MOV dword ptr [EBP + 0xffffe9d0],ECX
0059DFF0  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059DFF3  57                        PUSH EDI
0059DFF4  50                        PUSH EAX
0059DFF5  8D 83 10 1B 00 00         LEA EAX,[EBX + 0x1b10]
0059DFFB  C7 85 B0 E9 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffe9b0],0x1
0059E005  C7 85 B4 E9 FF FF 09 00 00 00  MOV dword ptr [EBP + 0xffffe9b4],0x9
0059E00F  C7 85 BC E9 FF FF 19 00 00 00  MOV dword ptr [EBP + 0xffffe9bc],0x19
0059E019  C7 85 C0 E9 FF FF BD 01 00 00  MOV dword ptr [EBP + 0xffffe9c0],0x1bd
0059E023  C7 85 C4 E9 FF FF 5B 01 00 00  MOV dword ptr [EBP + 0xffffe9c4],0x15b
0059E02D  C7 85 C8 E9 FF FF 14 00 00 00  MOV dword ptr [EBP + 0xffffe9c8],0x14
0059E037  C7 85 CC E9 FF FF 04 01 00 00  MOV dword ptr [EBP + 0xffffe9cc],0x104
0059E041  C7 85 14 F2 FF FF 00 01 00 00  MOV dword ptr [EBP + 0xfffff214],0x100
0059E04B  89 B5 00 EA FF FF         MOV dword ptr [EBP + 0xffffea00],ESI
0059E051  C7 85 04 EA FF FF 83 69 00 00  MOV dword ptr [EBP + 0xffffea04],0x6983
0059E05B  89 B5 40 EA FF FF         MOV dword ptr [EBP + 0xffffea40],ESI
0059E061  C7 85 44 EA FF FF A2 C0 00 00  MOV dword ptr [EBP + 0xffffea44],0xc0a2
0059E06B  8B 11                     MOV EDX,dword ptr [ECX]
0059E06D  57                        PUSH EDI
0059E06E  50                        PUSH EAX
0059E06F  6A 06                     PUSH 0x6
0059E071  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059E074  57                        PUSH EDI
0059E075  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0059E078  57                        PUSH EDI
0059E079  57                        PUSH EDI
0059E07A  57                        PUSH EDI
0059E07B  57                        PUSH EDI
0059E07C  57                        PUSH EDI
0059E07D  6A 1C                     PUSH 0x1c
0059E07F  56                        PUSH ESI
0059E080  68 A1 C0 00 00            PUSH 0xc0a1
0059E085  56                        PUSH ESI
0059E086  51                        PUSH ECX
0059E087  6A 01                     PUSH 0x1
0059E089  E8 31 4D E6 FF            CALL 0x00402dbf
0059E08E  57                        PUSH EDI
0059E08F  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0059E092  57                        PUSH EDI
0059E093  57                        PUSH EDI
0059E094  57                        PUSH EDI
0059E095  57                        PUSH EDI
0059E096  57                        PUSH EDI
0059E097  68 31 00 00 08            PUSH 0x8000031
0059E09C  56                        PUSH ESI
0059E09D  68 A4 C0 00 00            PUSH 0xc0a4
0059E0A2  56                        PUSH ESI
0059E0A3  52                        PUSH EDX
0059E0A4  6A 01                     PUSH 0x1
0059E0A6  E8 14 4D E6 FF            CALL 0x00402dbf
0059E0AB  83 C4 60                  ADD ESP,0x60
0059E0AE  57                        PUSH EDI
0059E0AF  57                        PUSH EDI
0059E0B0  57                        PUSH EDI
0059E0B1  57                        PUSH EDI
0059E0B2  57                        PUSH EDI
0059E0B3  57                        PUSH EDI
0059E0B4  68 2F 00 00 40            PUSH 0x4000002f
0059E0B9  56                        PUSH ESI
0059E0BA  68 A5 C0 00 00            PUSH 0xc0a5
0059E0BF  56                        PUSH ESI
0059E0C0  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0059E0C3  50                        PUSH EAX
0059E0C4  6A 01                     PUSH 0x1
0059E0C6  E8 F4 4C E6 FF            CALL 0x00402dbf
0059E0CB  83 C4 30                  ADD ESP,0x30
0059E0CE  8B CB                     MOV ECX,EBX
0059E0D0  68 84 69 00 00            PUSH 0x6984
0059E0D5  68 01 69 00 00            PUSH 0x6901
0059E0DA  6A 14                     PUSH 0x14
0059E0DC  6A 55                     PUSH 0x55
0059E0DE  68 BE 01 00 00            PUSH 0x1be
0059E0E3  68 7C 01 00 00            PUSH 0x17c
0059E0E8  6A 01                     PUSH 0x1
0059E0EA  6A 01                     PUSH 0x1
0059E0EC  E8 2A 55 E6 FF            CALL 0x0040361b
0059E0F1  68 86 69 00 00            PUSH 0x6986
0059E0F6  68 03 69 00 00            PUSH 0x6903
0059E0FB  6A 19                     PUSH 0x19
0059E0FD  68 E6 00 00 00            PUSH 0xe6
0059E102  68 56 01 00 00            PUSH 0x156
0059E107  68 F3 01 00 00            PUSH 0x1f3
0059E10C  57                        PUSH EDI
0059E10D  6A 01                     PUSH 0x1
0059E10F  8B CB                     MOV ECX,EBX
0059E111  89 83 18 1B 00 00         MOV dword ptr [EBX + 0x1b18],EAX
0059E117  E8 FF 54 E6 FF            CALL 0x0040361b
0059E11C  68 85 69 00 00            PUSH 0x6985
0059E121  68 02 69 00 00            PUSH 0x6902
0059E126  6A 19                     PUSH 0x19
0059E128  68 A0 00 00 00            PUSH 0xa0
0059E12D  68 B3 01 00 00            PUSH 0x1b3
0059E132  68 61 02 00 00            PUSH 0x261
0059E137  6A 01                     PUSH 0x1
0059E139  6A 01                     PUSH 0x1
0059E13B  8B CB                     MOV ECX,EBX
0059E13D  89 83 24 1B 00 00         MOV dword ptr [EBX + 0x1b24],EAX
0059E143  E8 D3 54 E6 FF            CALL 0x0040361b
0059E148  8B 8B FF 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cff]
0059E14E  BA 0B 01 00 00            MOV EDX,0x10b
0059E153  2B D1                     SUB EDX,ECX
0059E155  89 83 1C 1B 00 00         MOV dword ptr [EBX + 0x1b1c],EAX
0059E15B  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0059E15E  89 95 F4 FA FF FF         MOV dword ptr [EBP + 0xfffffaf4],EDX
0059E164  8A 15 4C 73 80 00         MOV DL,byte ptr [0x0080734c]
0059E16A  89 BD E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],EDI
0059E170  84 D2                     TEST DL,DL
0059E172  C7 85 EC FA FF FF EA 01 00 00  MOV dword ptr [EBP + 0xfffffaec],0x1ea
0059E17C  C7 85 F0 FA FF FF 5F 00 00 00  MOV dword ptr [EBP + 0xfffffaf0],0x5f
0059E186  C7 85 F8 FA FF FF F2 00 00 00  MOV dword ptr [EBP + 0xfffffaf8],0xf2
0059E190  89 BD FC FA FF FF         MOV dword ptr [EBP + 0xfffffafc],EDI
0059E196  89 BD 00 FB FF FF         MOV dword ptr [EBP + 0xfffffb00],EDI
0059E19C  89 85 0C FB FF FF         MOV dword ptr [EBP + 0xfffffb0c],EAX
0059E1A2  89 B5 10 FB FF FF         MOV dword ptr [EBP + 0xfffffb10],ESI
0059E1A8  C7 85 14 FB FF FF 60 81 00 00  MOV dword ptr [EBP + 0xfffffb14],0x8160
0059E1B2  89 85 2C FB FF FF         MOV dword ptr [EBP + 0xfffffb2c],EAX
0059E1B8  89 B5 30 FB FF FF         MOV dword ptr [EBP + 0xfffffb30],ESI
0059E1BE  C7 85 34 FB FF FF 61 81 00 00  MOV dword ptr [EBP + 0xfffffb34],0x8161
0059E1C8  89 85 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],EAX
0059E1CE  89 B5 50 FB FF FF         MOV dword ptr [EBP + 0xfffffb50],ESI
0059E1D4  C7 85 54 FB FF FF 62 81 00 00  MOV dword ptr [EBP + 0xfffffb54],0x8162
0059E1DE  89 85 6C FB FF FF         MOV dword ptr [EBP + 0xfffffb6c],EAX
0059E1E4  89 B5 70 FB FF FF         MOV dword ptr [EBP + 0xfffffb70],ESI
0059E1EA  C7 85 74 FB FF FF 63 81 00 00  MOV dword ptr [EBP + 0xfffffb74],0x8163
0059E1F4  74 07                     JZ 0x0059e1fd
0059E1F6  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
LAB_0059e1fd:
0059E1FD  8B 93 F7 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cf7]
0059E203  89 8D 24 FC FF FF         MOV dword ptr [EBP + 0xfffffc24],ECX
0059E209  8B 8B 03 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d03]
0059E20F  89 95 1C FC FF FF         MOV dword ptr [EBP + 0xfffffc1c],EDX
0059E215  8B 93 FB 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cfb]
0059E21B  89 B5 10 FC FF FF         MOV dword ptr [EBP + 0xfffffc10],ESI
0059E221  89 BD 14 FC FF FF         MOV dword ptr [EBP + 0xfffffc14],EDI
0059E227  89 B5 18 FC FF FF         MOV dword ptr [EBP + 0xfffffc18],ESI
0059E22D  89 8D 28 FC FF FF         MOV dword ptr [EBP + 0xfffffc28],ECX
0059E233  89 B5 78 FC FF FF         MOV dword ptr [EBP + 0xfffffc78],ESI
0059E239  89 B5 90 FD FF FF         MOV dword ptr [EBP + 0xfffffd90],ESI
0059E23F  89 95 20 FC FF FF         MOV dword ptr [EBP + 0xfffffc20],EDX
0059E245  8B 93 88 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d88]
0059E24B  B9 5F 00 00 00            MOV ECX,0x5f
0059E250  8D B5 14 FC FF FF         LEA ESI,[EBP + 0xfffffc14]
0059E256  8D BD 94 FD FF FF         LEA EDI,[EBP + 0xfffffd94]
0059E25C  C7 85 24 FD FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffd24],0x1f4
0059E266  C7 85 28 FD FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffd28],0x32
0059E270  89 85 74 FC FF FF         MOV dword ptr [EBP + 0xfffffc74],EAX
0059E276  C7 85 7C FC FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffffc7c],0x8164
0059E280  F3 A5                     MOVSD.REP ES:EDI,ESI
0059E282  8B 8B 8C 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d8c]
0059E288  89 95 9C FD FF FF         MOV dword ptr [EBP + 0xfffffd9c],EDX
0059E28E  8B 93 90 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d90]
0059E294  89 8D A0 FD FF FF         MOV dword ptr [EBP + 0xfffffda0],ECX
0059E29A  8B 8B 94 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d94]
0059E2A0  89 95 A4 FD FF FF         MOV dword ptr [EBP + 0xfffffda4],EDX
0059E2A6  8B 93 19 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e19]
0059E2AC  89 8D A8 FD FF FF         MOV dword ptr [EBP + 0xfffffda8],ECX
0059E2B2  8B 8B 1D 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e1d]
0059E2B8  89 95 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EDX
0059E2BE  8B 93 21 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e21]
0059E2C4  89 8D 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ECX
0059E2CA  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059E2CD  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
0059E2D3  8D 95 E4 FA FF FF         LEA EDX,[EBP + 0xfffffae4]
0059E2D9  6A 00                     PUSH 0x0
0059E2DB  BE 02 00 00 00            MOV ESI,0x2
0059E2E0  52                        PUSH EDX
0059E2E1  8D 93 20 1B 00 00         LEA EDX,[EBX + 0x1b20]
0059E2E7  C7 85 FC FD FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffffdfc],0x8165
0059E2F1  C7 85 10 FF FF FF 03 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x3
0059E2FB  C7 85 14 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff14],0x1
0059E305  C7 85 1C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff1c],0x0
0059E30F  C7 85 2C FF FF FF C7 00 00 00  MOV dword ptr [EBP + 0xffffff2c],0xc7
0059E319  C7 85 30 FF FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xffffff30],0xe
0059E323  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0059E329  89 B5 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ESI
0059E32F  C7 85 6C FF FF FF 66 81 00 00  MOV dword ptr [EBP + 0xffffff6c],0x8166
0059E339  8B 01                     MOV EAX,dword ptr [ECX]
0059E33B  6A 00                     PUSH 0x0
0059E33D  52                        PUSH EDX
0059E33E  6A 07                     PUSH 0x7
0059E340  FF 50 08                  CALL dword ptr [EAX + 0x8]
0059E343  8B 83 DF 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cdf]
0059E349  83 F8 FF                  CMP EAX,-0x1
0059E34C  74 1D                     JZ 0x0059e36b
0059E34E  8B 8B FB 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cfb]
0059E354  8B 93 F7 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cf7]
0059E35A  51                        PUSH ECX
0059E35B  52                        PUSH EDX
0059E35C  6A FE                     PUSH -0x2
0059E35E  50                        PUSH EAX
0059E35F  8B 83 23 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d23]
0059E365  50                        PUSH EAX
0059E366  E8 65 51 11 00            CALL 0x006b34d0
LAB_0059e36b:
0059E36B  8B 83 70 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d70]
0059E371  83 F8 FF                  CMP EAX,-0x1
0059E374  74 1D                     JZ 0x0059e393
0059E376  8B 8B 8C 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d8c]
0059E37C  8B 93 88 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d88]
0059E382  51                        PUSH ECX
0059E383  52                        PUSH EDX
0059E384  6A FE                     PUSH -0x2
0059E386  50                        PUSH EAX
0059E387  8B 83 B4 1D 00 00         MOV EAX,dword ptr [EBX + 0x1db4]
0059E38D  50                        PUSH EAX
0059E38E  E8 3D 51 11 00            CALL 0x006b34d0
LAB_0059e393:
0059E393  8B 83 01 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e01]
0059E399  83 F8 FF                  CMP EAX,-0x1
0059E39C  74 1D                     JZ 0x0059e3bb
0059E39E  8B 8B 1D 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e1d]
0059E3A4  8B 93 19 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e19]
0059E3AA  51                        PUSH ECX
0059E3AB  52                        PUSH EDX
0059E3AC  6A FE                     PUSH -0x2
0059E3AE  50                        PUSH EAX
0059E3AF  8B 83 45 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e45]
0059E3B5  50                        PUSH EAX
0059E3B6  E8 15 51 11 00            CALL 0x006b34d0
LAB_0059e3bb:
0059E3BB  8B 93 E8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ae8]
0059E3C1  B9 23 02 00 00            MOV ECX,0x223
0059E3C6  33 C0                     XOR EAX,EAX
0059E3C8  8D BD B0 E9 FF FF         LEA EDI,[EBP + 0xffffe9b0]
0059E3CE  F3 AB                     STOSD.REP ES:EDI
0059E3D0  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
0059E3D6  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0059E3D9  89 95 D0 E9 FF FF         MOV dword ptr [EBP + 0xffffe9d0],EDX
0059E3DF  8D 95 B0 E9 FF FF         LEA EDX,[EBP + 0xffffe9b0]
0059E3E5  89 8D B8 E9 FF FF         MOV dword ptr [EBP + 0xffffe9b8],ECX
0059E3EB  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059E3EE  6A 00                     PUSH 0x0
0059E3F0  52                        PUSH EDX
0059E3F1  8D 93 C4 1A 00 00         LEA EDX,[EBX + 0x1ac4]
0059E3F7  C7 85 B0 E9 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffe9b0],0x1
0059E401  C7 85 B4 E9 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xffffe9b4],0x89
0059E40B  C7 85 BC E9 FF FF F3 01 00 00  MOV dword ptr [EBP + 0xffffe9bc],0x1f3
0059E415  C7 85 C0 E9 FF FF 8D 01 00 00  MOV dword ptr [EBP + 0xffffe9c0],0x18d
0059E41F  C7 85 C4 E9 FF FF 0B 01 00 00  MOV dword ptr [EBP + 0xffffe9c4],0x10b
0059E429  C7 85 C8 E9 FF FF 16 00 00 00  MOV dword ptr [EBP + 0xffffe9c8],0x16
0059E433  C7 85 CC E9 FF FF 40 00 00 00  MOV dword ptr [EBP + 0xffffe9cc],0x40
0059E43D  89 85 3C EA FF FF         MOV dword ptr [EBP + 0xffffea3c],EAX
0059E443  89 85 20 F2 FF FF         MOV dword ptr [EBP + 0xfffff220],EAX
0059E449  89 85 DC E9 FF FF         MOV dword ptr [EBP + 0xffffe9dc],EAX
0059E44F  89 85 FC E9 FF FF         MOV dword ptr [EBP + 0xffffe9fc],EAX
0059E455  89 B5 40 EA FF FF         MOV dword ptr [EBP + 0xffffea40],ESI
0059E45B  89 B5 24 F2 FF FF         MOV dword ptr [EBP + 0xfffff224],ESI
0059E461  89 B5 E0 E9 FF FF         MOV dword ptr [EBP + 0xffffe9e0],ESI
0059E467  89 B5 00 EA FF FF         MOV dword ptr [EBP + 0xffffea00],ESI
0059E46D  C7 85 E4 E9 FF FF FF 68 00 00  MOV dword ptr [EBP + 0xffffe9e4],0x68ff
0059E477  C7 85 04 EA FF FF 87 69 00 00  MOV dword ptr [EBP + 0xffffea04],0x6987
0059E481  C7 85 28 F2 FF FF 55 69 00 00  MOV dword ptr [EBP + 0xfffff228],0x6955
0059E48B  C7 85 44 EA FF FF A3 C0 00 00  MOV dword ptr [EBP + 0xffffea44],0xc0a3
0059E495  8B 01                     MOV EAX,dword ptr [ECX]
0059E497  6A 00                     PUSH 0x0
0059E499  52                        PUSH EDX
0059E49A  6A 06                     PUSH 0x6
0059E49C  FF 50 08                  CALL dword ptr [EAX + 0x8]
0059E49F  8B 83 EC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aec]
0059E4A5  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059E4A8  89 85 D0 E9 FF FF         MOV dword ptr [EBP + 0xffffe9d0],EAX
0059E4AE  8D 85 B0 E9 FF FF         LEA EAX,[EBP + 0xffffe9b0]
0059E4B4  6A 00                     PUSH 0x0
0059E4B6  50                        PUSH EAX
0059E4B7  8D 83 C8 1A 00 00         LEA EAX,[EBX + 0x1ac8]
0059E4BD  C7 85 C0 E9 FF FF B5 01 00 00  MOV dword ptr [EBP + 0xffffe9c0],0x1b5
0059E4C7  C7 85 C4 E9 FF FF 5F 00 00 00  MOV dword ptr [EBP + 0xffffe9c4],0x5f
0059E4D1  C7 85 CC E9 FF FF 20 00 00 00  MOV dword ptr [EBP + 0xffffe9cc],0x20
0059E4DB  8B 11                     MOV EDX,dword ptr [ECX]
0059E4DD  6A 00                     PUSH 0x0
0059E4DF  50                        PUSH EAX
0059E4E0  6A 06                     PUSH 0x6
0059E4E2  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059E4E5  8D 43 1D                  LEA EAX,[EBX + 0x1d]
0059E4E8  8B CB                     MOV ECX,EBX
0059E4EA  50                        PUSH EAX
0059E4EB  6A 00                     PUSH 0x0
0059E4ED  6A 0F                     PUSH 0xf
0059E4EF  C7 43 2D 61 00 00 00      MOV dword ptr [EBX + 0x2d],0x61
0059E4F6  C7 43 35 00 00 00 00      MOV dword ptr [EBX + 0x35],0x0
0059E4FD  E8 7E 7B 14 00            CALL 0x006e6080
0059E502  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0059E505  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059E50B  5F                        POP EDI
0059E50C  5E                        POP ESI
0059E50D  5B                        POP EBX
0059E50E  8B E5                     MOV ESP,EBP
0059E510  5D                        POP EBP
0059E511  C3                        RET
LAB_0059e512:
0059E512  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059E515  68 54 C3 7C 00            PUSH 0x7cc354
0059E51A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059E51F  56                        PUSH ESI
0059E520  6A 00                     PUSH 0x0
0059E522  68 58 07 00 00            PUSH 0x758
0059E527  68 70 BF 7C 00            PUSH 0x7cbf70
0059E52C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059E532  E8 99 EF 10 00            CALL 0x006ad4d0
0059E537  83 C4 18                  ADD ESP,0x18
0059E53A  85 C0                     TEST EAX,EAX
0059E53C  74 01                     JZ 0x0059e53f
0059E53E  CC                        INT3
LAB_0059e53f:
0059E53F  68 58 07 00 00            PUSH 0x758
0059E544  68 70 BF 7C 00            PUSH 0x7cbf70
0059E549  6A 00                     PUSH 0x0
0059E54B  56                        PUSH ESI
0059E54C  E8 EF 78 10 00            CALL 0x006a5e40
0059E551  5F                        POP EDI
0059E552  5E                        POP ESI
0059E553  5B                        POP EBX
0059E554  8B E5                     MOV ESP,EBP
0059E556  5D                        POP EBP
0059E557  C3                        RET
