FUN_005aa880:
005AA880  55                        PUSH EBP
005AA881  8B EC                     MOV EBP,ESP
005AA883  83 EC 74                  SUB ESP,0x74
005AA886  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AA88B  53                        PUSH EBX
005AA88C  56                        PUSH ESI
005AA88D  57                        PUSH EDI
005AA88E  8D 55 90                  LEA EDX,[EBP + -0x70]
005AA891  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005AA894  6A 00                     PUSH 0x0
005AA896  52                        PUSH EDX
005AA897  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
005AA89A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AA8A0  E8 4B 2F 18 00            CALL 0x0072d7f0
005AA8A5  83 C4 08                  ADD ESP,0x8
005AA8A8  85 C0                     TEST EAX,EAX
005AA8AA  0F 85 DF 02 00 00         JNZ 0x005aab8f
005AA8B0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005AA8B3  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005AA8B6  8B C1                     MOV EAX,ECX
005AA8B8  99                        CDQ
005AA8B9  F7 FE                     IDIV ESI
005AA8BB  8B C1                     MOV EAX,ECX
005AA8BD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005AA8C0  8B FA                     MOV EDI,EDX
005AA8C2  F7 DF                     NEG EDI
005AA8C4  99                        CDQ
005AA8C5  1B FF                     SBB EDI,EDI
005AA8C7  F7 FE                     IDIV ESI
005AA8C9  F7 DF                     NEG EDI
005AA8CB  03 C7                     ADD EAX,EDI
005AA8CD  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
005AA8D0  81 E7 FF 00 00 00         AND EDI,0xff
005AA8D6  89 01                     MOV dword ptr [ECX],EAX
005AA8D8  8D 58 01                  LEA EBX,[EAX + 0x1]
005AA8DB  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
005AA8DE  D1 EB                     SHR EBX,0x1
005AA8E0  3B FB                     CMP EDI,EBX
005AA8E2  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
005AA8E5  7E 0B                     JLE 0x005aa8f2
005AA8E7  33 C0                     XOR EAX,EAX
005AA8E9  5F                        POP EDI
005AA8EA  5E                        POP ESI
005AA8EB  5B                        POP EBX
005AA8EC  8B E5                     MOV ESP,EBP
005AA8EE  5D                        POP EBP
005AA8EF  C2 18 00                  RET 0x18
LAB_005aa8f2:
005AA8F2  8B D7                     MOV EDX,EDI
005AA8F4  0F AF D0                  IMUL EDX,EAX
005AA8F7  C1 E2 02                  SHL EDX,0x2
005AA8FA  52                        PUSH EDX
005AA8FB  E8 10 03 10 00            CALL 0x006aac10
005AA900  33 F6                     XOR ESI,ESI
005AA902  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005AA905  3B C6                     CMP EAX,ESI
005AA907  0F 84 6E 02 00 00         JZ 0x005aab7b
005AA90D  3B DE                     CMP EBX,ESI
005AA90F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005AA912  0F 8E 63 02 00 00         JLE 0x005aab7b
005AA918  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005AA91B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005AA91E  81 E2 FF 00 00 00         AND EDX,0xff
005AA924  8D 43 FF                  LEA EAX,[EBX + -0x1]
005AA927  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
005AA92A  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005AA92D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005AA930  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005AA933  EB 05                     JMP 0x005aa93a
LAB_005aa935:
005AA935  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
005AA938  33 F6                     XOR ESI,ESI
LAB_005aa93a:
005AA93A  8B C2                     MOV EAX,EDX
005AA93C  83 C9 FF                  OR ECX,0xffffffff
005AA93F  2B C6                     SUB EAX,ESI
005AA941  0F 84 37 01 00 00         JZ 0x005aaa7e
005AA947  48                        DEC EAX
005AA948  0F 84 87 00 00 00         JZ 0x005aa9d5
005AA94E  48                        DEC EAX
005AA94F  0F 85 B2 01 00 00         JNZ 0x005aab07
005AA955  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005AA958  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005AA95B  83 C0 0B                  ADD EAX,0xb
005AA95E  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
005AA961  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_005aa964:
005AA964  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005AA967  99                        CDQ
005AA968  F7 FB                     IDIV EBX
005AA96A  8B F0                     MOV ESI,EAX
005AA96C  3B F1                     CMP ESI,ECX
005AA96E  74 4D                     JZ 0x005aa9bd
005AA970  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005AA973  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AA976  3B C1                     CMP EAX,ECX
005AA978  7D 2E                     JGE 0x005aa9a8
005AA97A  DB 45 DC                  FILD dword ptr [EBP + -0x24]
005AA97D  DB 45 FC                  FILD dword ptr [EBP + -0x4]
005AA980  DB 45 FC                  FILD dword ptr [EBP + -0x4]
005AA983  DC 0D 40 C0 79 00         FMUL double ptr [0x0079c040]
005AA989  D8 F2                     FDIV ST0,ST2
005AA98B  D9 FE                     FSIN
005AA98D  DB 45 0C                  FILD dword ptr [EBP + 0xc]
005AA990  D8 CA                     FMUL ST2
005AA992  D8 CA                     FMUL ST2
005AA994  D8 CA                     FMUL ST2
005AA996  DE C9                     FMULP
005AA998  D8 F2                     FDIV ST0,ST2
005AA99A  D8 F2                     FDIV ST0,ST2
005AA99C  DE F2                     FDIVRP ST2,ST0
005AA99E  D9 C9                     FXCH
005AA9A0  D9 E0                     FCHS
005AA9A2  D9 C9                     FXCH
005AA9A4  DD D8                     FSTP ST0
005AA9A6  EB 03                     JMP 0x005aa9ab
LAB_005aa9a8:
005AA9A8  DB 45 0C                  FILD dword ptr [EBP + 0xc]
LAB_005aa9ab:
005AA9AB  E8 D8 38 18 00            CALL 0x0072e288
005AA9B0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005AA9B3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005AA9B6  03 D6                     ADD EDX,ESI
005AA9B8  89 04 91                  MOV dword ptr [ECX + EDX*0x4],EAX
005AA9BB  8B CE                     MOV ECX,ESI
LAB_005aa9bd:
005AA9BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AA9C0  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
005AA9C3  40                        INC EAX
005AA9C4  03 F7                     ADD ESI,EDI
005AA9C6  3B C3                     CMP EAX,EBX
005AA9C8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AA9CB  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
005AA9CE  7C 94                     JL 0x005aa964
005AA9D0  E9 32 01 00 00            JMP 0x005aab07
LAB_005aa9d5:
005AA9D5  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
005AA9D8  85 C0                     TEST EAX,EAX
005AA9DA  0F 8E 27 01 00 00         JLE 0x005aab07
005AA9E0  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_005aa9e7:
005AA9E7  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005AA9EA  99                        CDQ
005AA9EB  2B C2                     SUB EAX,EDX
005AA9ED  D1 F8                     SAR EAX,0x1
005AA9EF  99                        CDQ
005AA9F0  F7 FB                     IDIV EBX
005AA9F2  3B C1                     CMP EAX,ECX
005AA9F4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AA9F7  74 6C                     JZ 0x005aaa65
005AA9F9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005AA9FC  8B D6                     MOV EDX,ESI
005AA9FE  2B D0                     SUB EDX,EAX
005AAA00  3B C6                     CMP EAX,ESI
005AAA02  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005AAA05  7F 35                     JG 0x005aaa3c
005AAA07  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
005AAA0A  3B F1                     CMP ESI,ECX
005AAA0C  7D 2E                     JGE 0x005aaa3c
005AAA0E  DB 45 D0                  FILD dword ptr [EBP + -0x30]
005AAA11  DB 45 DC                  FILD dword ptr [EBP + -0x24]
005AAA14  DB 45 DC                  FILD dword ptr [EBP + -0x24]
005AAA17  DC 0D 40 C0 79 00         FMUL double ptr [0x0079c040]
005AAA1D  D8 F2                     FDIV ST0,ST2
005AAA1F  D9 FE                     FSIN
005AAA21  DB 45 0C                  FILD dword ptr [EBP + 0xc]
005AAA24  D8 CA                     FMUL ST2
005AAA26  D8 CA                     FMUL ST2
005AAA28  D8 CA                     FMUL ST2
005AAA2A  DE C9                     FMULP
005AAA2C  D8 F2                     FDIV ST0,ST2
005AAA2E  D8 F2                     FDIV ST0,ST2
005AAA30  DE F2                     FDIVRP ST2,ST0
005AAA32  D9 C9                     FXCH
005AAA34  D9 E0                     FCHS
005AAA36  D9 C9                     FXCH
005AAA38  DD D8                     FSTP ST0
005AAA3A  EB 13                     JMP 0x005aaa4f
LAB_005aaa3c:
005AAA3C  33 D2                     XOR EDX,EDX
005AAA3E  3B C6                     CMP EAX,ESI
005AAA40  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005AAA43  0F 9F C2                  SETG DL
005AAA46  4A                        DEC EDX
005AAA47  23 D0                     AND EDX,EAX
005AAA49  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005AAA4C  DB 45 DC                  FILD dword ptr [EBP + -0x24]
LAB_005aaa4f:
005AAA4F  E8 34 38 18 00            CALL 0x0072e288
005AAA54  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005AAA57  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005AAA5A  03 CA                     ADD ECX,EDX
005AAA5C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005AAA5F  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
005AAA62  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_005aaa65:
005AAA65  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005AAA68  46                        INC ESI
005AAA69  03 C7                     ADD EAX,EDI
005AAA6B  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005AAA6E  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
005AAA71  3B F0                     CMP ESI,EAX
005AAA73  0F 8C 6E FF FF FF         JL 0x005aa9e7
005AAA79  E9 89 00 00 00            JMP 0x005aab07
LAB_005aaa7e:
005AAA7E  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
005AAA81  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005AAA84  3B C6                     CMP EAX,ESI
005AAA86  7E 7F                     JLE 0x005aab07
005AAA88  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_005aaa8b:
005AAA8B  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005AAA8E  99                        CDQ
005AAA8F  2B C2                     SUB EAX,EDX
005AAA91  D1 F8                     SAR EAX,0x1
005AAA93  99                        CDQ
005AAA94  F7 FB                     IDIV EBX
005AAA96  8B F0                     MOV ESI,EAX
005AAA98  3B F1                     CMP ESI,ECX
005AAA9A  74 55                     JZ 0x005aaaf1
005AAA9C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005AAA9F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005AAAA2  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
005AAAA5  2B C2                     SUB EAX,EDX
005AAAA7  3B C8                     CMP ECX,EAX
005AAAA9  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005AAAAC  7D 2E                     JGE 0x005aaadc
005AAAAE  DB 45 DC                  FILD dword ptr [EBP + -0x24]
005AAAB1  DB 45 FC                  FILD dword ptr [EBP + -0x4]
005AAAB4  DB 45 FC                  FILD dword ptr [EBP + -0x4]
005AAAB7  DC 0D 40 C0 79 00         FMUL double ptr [0x0079c040]
005AAABD  D8 F2                     FDIV ST0,ST2
005AAABF  D9 FE                     FSIN
005AAAC1  DB 45 0C                  FILD dword ptr [EBP + 0xc]
005AAAC4  D8 CA                     FMUL ST2
005AAAC6  D8 CA                     FMUL ST2
005AAAC8  D8 CA                     FMUL ST2
005AAACA  DE C9                     FMULP
005AAACC  D8 F2                     FDIV ST0,ST2
005AAACE  D8 F2                     FDIV ST0,ST2
005AAAD0  DE F2                     FDIVRP ST2,ST0
005AAAD2  D9 C9                     FXCH
005AAAD4  D9 E0                     FCHS
005AAAD6  D9 C9                     FXCH
005AAAD8  DD D8                     FSTP ST0
005AAADA  EB 03                     JMP 0x005aaadf
LAB_005aaadc:
005AAADC  DB 45 0C                  FILD dword ptr [EBP + 0xc]
LAB_005aaadf:
005AAADF  E8 A4 37 18 00            CALL 0x0072e288
005AAAE4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005AAAE7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005AAAEA  03 CE                     ADD ECX,ESI
005AAAEC  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
005AAAEF  8B CE                     MOV ECX,ESI
LAB_005aaaf1:
005AAAF1  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005AAAF4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AAAF7  03 D7                     ADD EDX,EDI
005AAAF9  40                        INC EAX
005AAAFA  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005AAAFD  8D 14 1B                  LEA EDX,[EBX + EBX*0x1]
005AAB00  3B C2                     CMP EAX,EDX
005AAB02  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AAB05  7C 84                     JL 0x005aaa8b
LAB_005aab07:
005AAB07  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005AAB0A  8B 00                     MOV EAX,dword ptr [EAX]
005AAB0C  A8 01                     TEST AL,0x1
005AAB0E  74 19                     JZ 0x005aab29
005AAB10  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005AAB13  8D 4B FF                  LEA ECX,[EBX + -0x1]
005AAB16  3B D1                     CMP EDX,ECX
005AAB18  7D 28                     JGE 0x005aab42
005AAB1A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005AAB1D  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005AAB20  2B C2                     SUB EAX,EDX
005AAB22  8B CF                     MOV ECX,EDI
005AAB24  83 E8 02                  SUB EAX,0x2
005AAB27  EB 0B                     JMP 0x005aab34
LAB_005aab29:
005AAB29  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005AAB2C  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005AAB2F  2B C2                     SUB EAX,EDX
005AAB31  8B CF                     MOV ECX,EDI
005AAB33  48                        DEC EAX
LAB_005aab34:
005AAB34  0F AF C7                  IMUL EAX,EDI
005AAB37  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005AAB3A  8D 3C 82                  LEA EDI,[EDX + EAX*0x4]
005AAB3D  F3 A5                     MOVSD.REP ES:EDI,ESI
005AAB3F  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
LAB_005aab42:
005AAB42  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005AAB45  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005AAB48  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005AAB4B  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
005AAB4E  41                        INC ECX
005AAB4F  4E                        DEC ESI
005AAB50  03 D0                     ADD EDX,EAX
005AAB52  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005AAB55  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005AAB58  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005AAB5B  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005AAB5E  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
005AAB65  03 F0                     ADD ESI,EAX
005AAB67  83 C2 02                  ADD EDX,0x2
005AAB6A  3B CB                     CMP ECX,EBX
005AAB6C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005AAB6F  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
005AAB72  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005AAB75  0F 8C BA FD FF FF         JL 0x005aa935
LAB_005aab7b:
005AAB7B  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
005AAB7E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AAB83  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005AAB86  5F                        POP EDI
005AAB87  5E                        POP ESI
005AAB88  5B                        POP EBX
005AAB89  8B E5                     MOV ESP,EBP
005AAB8B  5D                        POP EBP
005AAB8C  C2 18 00                  RET 0x18
LAB_005aab8f:
005AAB8F  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
005AAB92  68 B4 C6 7C 00            PUSH 0x7cc6b4
005AAB97  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AAB9C  50                        PUSH EAX
005AAB9D  6A 00                     PUSH 0x0
005AAB9F  6A 63                     PUSH 0x63
005AABA1  68 74 C6 7C 00            PUSH 0x7cc674
005AABA6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AABAC  E8 1F 29 10 00            CALL 0x006ad4d0
005AABB1  83 C4 18                  ADD ESP,0x18
005AABB4  85 C0                     TEST EAX,EAX
005AABB6  74 01                     JZ 0x005aabb9
005AABB8  CC                        INT3
LAB_005aabb9:
005AABB9  5F                        POP EDI
005AABBA  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005AABC1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005AABC4  5E                        POP ESI
005AABC5  5B                        POP EBX
005AABC6  8B E5                     MOV ESP,EBP
005AABC8  5D                        POP EBP
005AABC9  C2 18 00                  RET 0x18
