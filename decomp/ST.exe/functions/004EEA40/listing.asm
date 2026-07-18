BldBoatPanelTy::InitBldBoatPanel:
004EEA40  55                        PUSH EBP
004EEA41  8B EC                     MOV EBP,ESP
004EEA43  81 EC E4 02 00 00         SUB ESP,0x2e4
004EEA49  53                        PUSH EBX
004EEA4A  56                        PUSH ESI
004EEA4B  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004EEA4E  57                        PUSH EDI
004EEA4F  B9 16 00 00 00            MOV ECX,0x16
004EEA54  33 C0                     XOR EAX,EAX
004EEA56  8D 7D 90                  LEA EDI,[EBP + -0x70]
004EEA59  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
004EEA5F  F3 AB                     STOSD.REP ES:EDI
004EEA61  B9 8C 00 00 00            MOV ECX,0x8c
004EEA66  8D BD 1C FD FF FF         LEA EDI,[EBP + 0xfffffd1c]
004EEA6C  F3 AB                     STOSD.REP ES:EDI
004EEA6E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004EEA73  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
004EEA79  6A 00                     PUSH 0x0
004EEA7B  52                        PUSH EDX
004EEA7C  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
004EEA82  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EEA88  E8 63 ED 23 00            CALL 0x0072d7f0
004EEA8D  8B F0                     MOV ESI,EAX
004EEA8F  83 C4 08                  ADD ESP,0x8
004EEA92  85 F6                     TEST ESI,ESI
004EEA94  0F 85 2E 03 00 00         JNZ 0x004eedc8
004EEA9A  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004EEA9D  BB 04 00 00 00            MOV EBX,0x4
004EEAA2  89 35 7C 16 80 00         MOV dword ptr [0x0080167c],ESI
004EEAA8  8D BE 7A 02 00 00         LEA EDI,[ESI + 0x27a]
LAB_004eeaae:
004EEAAE  6A 05                     PUSH 0x5
004EEAB0  6A 30                     PUSH 0x30
004EEAB2  6A 0A                     PUSH 0xa
004EEAB4  6A 00                     PUSH 0x0
004EEAB6  E8 D5 F7 1B 00            CALL 0x006ae290
004EEABB  89 07                     MOV dword ptr [EDI],EAX
004EEABD  83 C7 04                  ADD EDI,0x4
004EEAC0  4B                        DEC EBX
004EEAC1  75 EB                     JNZ 0x004eeaae
004EEAC3  A1 30 67 80 00            MOV EAX,[0x00806730]
004EEAC8  8B 7E 3C                  MOV EDI,dword ptr [ESI + 0x3c]
004EEACB  05 E0 FC FF FF            ADD EAX,0xfffffce0
004EEAD0  33 DB                     XOR EBX,EBX
004EEAD2  99                        CDQ
004EEAD3  2B C2                     SUB EAX,EDX
004EEAD5  53                        PUSH EBX
004EEAD6  D1 F8                     SAR EAX,0x1
004EEAD8  03 F8                     ADD EDI,EAX
004EEADA  68 44 18 7C 00            PUSH 0x7c1844
004EEADF  89 7E 3C                  MOV dword ptr [ESI + 0x3c],EDI
004EEAE2  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004EEAE8  51                        PUSH ECX
004EEAE9  68 9D 01 00 00            PUSH 0x19d
004EEAEE  E8 BD E3 21 00            CALL 0x0070ceb0
004EEAF3  83 C4 10                  ADD ESP,0x10
004EEAF6  89 86 8A 02 00 00         MOV dword ptr [ESI + 0x28a],EAX
004EEAFC  C7 40 58 01 00 00 00      MOV dword ptr [EAX + 0x58],0x1
004EEB03  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
004EEB06  6A 01                     PUSH 0x1
004EEB08  53                        PUSH EBX
004EEB09  53                        PUSH EBX
004EEB0A  68 34 18 7C 00            PUSH 0x7c1834
004EEB0F  E8 68 6C F1 FF            CALL 0x0040577c
004EEB14  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004EEB1A  83 C4 08                  ADD ESP,0x8
004EEB1D  50                        PUSH EAX
004EEB1E  6A 01                     PUSH 0x1
004EEB20  E8 BB 31 20 00            CALL 0x006f1ce0
004EEB25  53                        PUSH EBX
004EEB26  68 20 18 7C 00            PUSH 0x7c1820
004EEB2B  89 86 84 01 00 00         MOV dword ptr [ESI + 0x184],EAX
004EEB31  8D 7E 6C                  LEA EDI,[ESI + 0x6c]
004EEB34  E8 43 6C F1 FF            CALL 0x0040577c
004EEB39  50                        PUSH EAX
004EEB3A  68 1C 18 7C 00            PUSH 0x7c181c
004EEB3F  57                        PUSH EDI
004EEB40  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004EEB46  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004EEB4C  83 C4 14                  ADD ESP,0x14
004EEB4F  6A 01                     PUSH 0x1
004EEB51  53                        PUSH EBX
004EEB52  57                        PUSH EDI
004EEB53  6A 01                     PUSH 0x1
004EEB55  E8 86 31 20 00            CALL 0x006f1ce0
004EEB5A  89 86 8E 02 00 00         MOV dword ptr [ESI + 0x28e],EAX
004EEB60  A0 4D 87 80 00            MOV AL,[0x0080874d]
004EEB65  3C FF                     CMP AL,0xff
004EEB67  74 08                     JZ 0x004eeb71
004EEB69  33 D2                     XOR EDX,EDX
004EEB6B  8A D0                     MOV DL,AL
004EEB6D  42                        INC EDX
004EEB6E  52                        PUSH EDX
004EEB6F  EB 02                     JMP 0x004eeb73
LAB_004eeb71:
004EEB71  6A 01                     PUSH 0x1
LAB_004eeb73:
004EEB73  68 10 18 7C 00            PUSH 0x7c1810
004EEB78  57                        PUSH EDI
004EEB79  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004EEB7F  83 C4 0C                  ADD ESP,0xc
004EEB82  A1 94 67 80 00            MOV EAX,[0x00806794]
004EEB87  53                        PUSH EBX
004EEB88  53                        PUSH EBX
004EEB89  6A 01                     PUSH 0x1
004EEB8B  53                        PUSH EBX
004EEB8C  6A FF                     PUSH -0x1
004EEB8E  57                        PUSH EDI
004EEB8F  6A 0B                     PUSH 0xb
004EEB91  50                        PUSH EAX
004EEB92  E8 59 AF 21 00            CALL 0x00709af0
004EEB97  53                        PUSH EBX
004EEB98  BF 01 00 00 00            MOV EDI,0x1
004EEB9D  53                        PUSH EBX
004EEB9E  57                        PUSH EDI
004EEB9F  53                        PUSH EBX
004EEBA0  89 86 88 01 00 00         MOV dword ptr [ESI + 0x188],EAX
004EEBA6  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004EEBAC  6A FF                     PUSH -0x1
004EEBAE  68 04 18 7C 00            PUSH 0x7c1804
004EEBB3  6A 0B                     PUSH 0xb
004EEBB5  51                        PUSH ECX
004EEBB6  E8 35 AF 21 00            CALL 0x00709af0
004EEBBB  83 C4 40                  ADD ESP,0x40
004EEBBE  89 86 8C 01 00 00         MOV dword ptr [ESI + 0x18c],EAX
004EEBC4  53                        PUSH EBX
004EEBC5  68 20 18 7C 00            PUSH 0x7c1820
004EEBCA  E8 AD 6B F1 FF            CALL 0x0040577c
004EEBCF  83 C4 08                  ADD ESP,0x8
004EEBD2  8B CE                     MOV ECX,ESI
004EEBD4  50                        PUSH EAX
004EEBD5  6A 33                     PUSH 0x33
004EEBD7  6A 13                     PUSH 0x13
004EEBD9  6A 20                     PUSH 0x20
004EEBDB  6A 63                     PUSH 0x63
004EEBDD  68 C4 00 00 00            PUSH 0xc4
004EEBE2  6A 68                     PUSH 0x68
004EEBE4  6A 63                     PUSH 0x63
004EEBE6  68 85 00 00 00            PUSH 0x85
004EEBEB  6A 0C                     PUSH 0xc
004EEBED  68 C1 00 00 00            PUSH 0xc1
004EEBF2  6A 02                     PUSH 0x2
004EEBF4  6A 3F                     PUSH 0x3f
004EEBF6  68 23 27 00 00            PUSH 0x2723
004EEBFB  E8 41 56 F1 FF            CALL 0x00404241
004EEC00  A0 4E 87 80 00            MOV AL,[0x0080874e]
004EEC05  33 C9                     XOR ECX,ECX
004EEC07  3C 03                     CMP AL,0x3
004EEC09  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
004EEC0D  0F 95 C1                  SETNZ CL
004EEC10  83 C1 03                  ADD ECX,0x3
004EEC13  3B CB                     CMP ECX,EBX
004EEC15  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004EEC18  0F 8E 3D 01 00 00         JLE 0x004eed5b
004EEC1E  2C 03                     SUB AL,0x3
004EEC20  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
004EEC23  F6 D8                     NEG AL
004EEC25  1B C0                     SBB EAX,EAX
004EEC27  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004EEC2A  24 EA                     AND AL,0xea
004EEC2C  83 C0 5E                  ADD EAX,0x5e
004EEC2F  33 C9                     XOR ECX,ECX
004EEC31  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004EEC34  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
004EEC37  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004eec3a:
004EEC3A  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
004EEC41  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004EEC44  2B C1                     SUB EAX,ECX
004EEC46  8D 51 01                  LEA EDX,[ECX + 0x1]
004EEC49  C1 E0 04                  SHL EAX,0x4
004EEC4C  89 94 05 1C FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd1c],EDX
004EEC53  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004EEC56  89 9C 05 20 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd20],EBX
004EEC5D  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004EEC60  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004EEC63  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004EEC66  03 D7                     ADD EDX,EDI
004EEC68  89 94 05 28 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd28],EDX
004EEC6F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004EEC72  3B D3                     CMP EDX,EBX
004EEC74  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
004EEC7A  C7 84 05 30 FD FF FF 2B 00 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffffd30],0x2b
004EEC85  74 03                     JZ 0x004eec8a
004EEC87  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
LAB_004eec8a:
004EEC8A  83 C2 3D                  ADD EDX,0x3d
004EEC8D  BF 02 00 00 00            MOV EDI,0x2
004EEC92  89 94 05 2C FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd2c],EDX
004EEC99  C7 84 05 34 FD FF FF 1B 00 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffffd34],0x1b
004EECA4  BA 01 01 00 00            MOV EDX,0x101
004EECA9  89 9C 05 64 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd64],EBX
004EECB0  89 94 05 74 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd74],EDX
004EECB7  89 94 05 48 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd48],EDX
004EECBE  BA 03 00 00 00            MOV EDX,0x3
004EECC3  89 94 05 78 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd78],EDX
004EECCA  89 94 05 4C FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd4c],EDX
004EECD1  C7 84 05 50 FD FF FF 01 42 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffffd50],0x4201
004EECDC  C7 84 05 7C FD FF FF 02 42 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffffd7c],0x4202
004EECE7  66 89 9C 05 80 FD FF FF   MOV word ptr [EBP + EAX*0x1 + 0xfffffd80],BX
004EECEF  66 89 9C 05 54 FD FF FF   MOV word ptr [EBP + EAX*0x1 + 0xfffffd54],BX
004EECF7  66 89 BC 05 82 FD FF FF   MOV word ptr [EBP + EAX*0x1 + 0xfffffd82],DI
004EECFF  3B CA                     CMP ECX,EDX
004EED01  66 89 BC 05 56 FD FF FF   MOV word ptr [EBP + EAX*0x1 + 0xfffffd56],DI
004EED09  77 2F                     JA 0x004eed3a
switchD_004eed0b::switchD:
004EED0B  FF 24 8D 0C EE 4E 00      JMP dword ptr [ECX*0x4 + 0x4eee0c]
switchD_004eed0b::caseD_0:
004EED12  B9 9F 3A 00 00            MOV ECX,0x3a9f
004EED17  EB 13                     JMP 0x004eed2c
switchD_004eed0b::caseD_1:
004EED19  B9 A0 3A 00 00            MOV ECX,0x3aa0
004EED1E  EB 0C                     JMP 0x004eed2c
switchD_004eed0b::caseD_2:
004EED20  B9 A2 3A 00 00            MOV ECX,0x3aa2
004EED25  EB 05                     JMP 0x004eed2c
switchD_004eed0b::caseD_3:
004EED27  B9 A1 3A 00 00            MOV ECX,0x3aa1
LAB_004eed2c:
004EED2C  89 8C 05 84 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd84],ECX
004EED33  89 8C 05 58 FD FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffffd58],ECX
switchD_004eed0b::default:
004EED3A  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
004EED3D  FE C0                     INC AL
004EED3F  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
004EED42  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004EED45  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004EED48  81 E1 FF 00 00 00         AND ECX,0xff
004EED4E  3B C8                     CMP ECX,EAX
004EED50  0F 8C E4 FE FF FF         JL 0x004eec3a
004EED56  BF 01 00 00 00            MOV EDI,0x1
LAB_004eed5b:
004EED5B  33 C0                     XOR EAX,EAX
004EED5D  8D 8D 1C FD FF FF         LEA ECX,[EBP + 0xfffffd1c]
004EED63  8A 86 78 02 00 00         MOV AL,byte ptr [ESI + 0x278]
004EED69  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004EED6C  40                        INC EAX
004EED6D  B9 02 00 00 00            MOV ECX,0x2
004EED72  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004EED75  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004EED78  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004EED7B  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004EED7E  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
004EED81  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
004EED84  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004EED87  8D 45 90                  LEA EAX,[EBP + -0x70]
004EED8A  53                        PUSH EBX
004EED8B  50                        PUSH EAX
004EED8C  81 C6 92 02 00 00         ADD ESI,0x292
004EED92  89 7D 90                  MOV dword ptr [EBP + -0x70],EDI
004EED95  89 7D 94                  MOV dword ptr [EBP + -0x6c],EDI
004EED98  C7 45 A8 01 B2 00 00      MOV dword ptr [EBP + -0x58],0xb201
004EED9F  C7 45 C8 02 B2 00 00      MOV dword ptr [EBP + -0x38],0xb202
004EEDA6  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
004EEDA9  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004EEDAC  8B 11                     MOV EDX,dword ptr [ECX]
004EEDAE  53                        PUSH EBX
004EEDAF  56                        PUSH ESI
004EEDB0  6A 05                     PUSH 0x5
004EEDB2  FF 52 08                  CALL dword ptr [EDX + 0x8]
004EEDB5  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
004EEDBB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EEDC1  5F                        POP EDI
004EEDC2  5E                        POP ESI
004EEDC3  5B                        POP EBX
004EEDC4  8B E5                     MOV ESP,EBP
004EEDC6  5D                        POP EBP
004EEDC7  C3                        RET
LAB_004eedc8:
004EEDC8  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
004EEDCE  68 DC 17 7C 00            PUSH 0x7c17dc
004EEDD3  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EEDD8  56                        PUSH ESI
004EEDD9  6A 00                     PUSH 0x0
004EEDDB  6A 3F                     PUSH 0x3f
004EEDDD  68 B4 17 7C 00            PUSH 0x7c17b4
004EEDE2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EEDE8  E8 E3 E6 1B 00            CALL 0x006ad4d0
004EEDED  83 C4 18                  ADD ESP,0x18
004EEDF0  85 C0                     TEST EAX,EAX
004EEDF2  74 01                     JZ 0x004eedf5
004EEDF4  CC                        INT3
LAB_004eedf5:
004EEDF5  6A 3F                     PUSH 0x3f
004EEDF7  68 B4 17 7C 00            PUSH 0x7c17b4
004EEDFC  6A 00                     PUSH 0x0
004EEDFE  56                        PUSH ESI
004EEDFF  E8 3C 70 1B 00            CALL 0x006a5e40
004EEE04  5F                        POP EDI
004EEE05  5E                        POP ESI
004EEE06  5B                        POP EBX
004EEE07  8B E5                     MOV ESP,EBP
004EEE09  5D                        POP EBP
004EEE0A  C3                        RET
