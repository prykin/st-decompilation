FUN_00597e70:
00597E70  55                        PUSH EBP
00597E71  8B EC                     MOV EBP,ESP
00597E73  81 EC 6C 02 00 00         SUB ESP,0x26c
00597E79  53                        PUSH EBX
00597E7A  56                        PUSH ESI
00597E7B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00597E7E  57                        PUSH EDI
00597E7F  B9 7E 00 00 00            MOV ECX,0x7e
00597E84  33 C0                     XOR EAX,EAX
00597E86  8D BD F4 FD FF FF         LEA EDI,[EBP + 0xfffffdf4]
00597E8C  8D 95 B4 FD FF FF         LEA EDX,[EBP + 0xfffffdb4]
00597E92  F3 AB                     STOSD.REP ES:EDI
00597E94  66 AB                     STOSW ES:EDI
00597E96  AA                        STOSB ES:EDI
00597E97  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00597E9C  33 FF                     XOR EDI,EDI
00597E9E  8D 8D B0 FD FF FF         LEA ECX,[EBP + 0xfffffdb0]
00597EA4  57                        PUSH EDI
00597EA5  52                        PUSH EDX
00597EA6  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00597EAD  89 85 B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],EAX
00597EB3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00597EB9  E8 32 59 19 00            CALL 0x0072d7f0
00597EBE  8B F0                     MOV ESI,EAX
00597EC0  83 C4 08                  ADD ESP,0x8
00597EC3  3B F7                     CMP ESI,EDI
00597EC5  0F 85 AC 14 00 00         JNZ 0x00599377
00597ECB  A1 30 2A 80 00            MOV EAX,[0x00802a30]
00597ED0  3B C7                     CMP EAX,EDI
00597ED2  74 28                     JZ 0x00597efc
00597ED4  39 B8 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EDI
00597EDA  74 14                     JZ 0x00597ef0
00597EDC  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00597EDF  83 F9 FF                  CMP ECX,-0x1
00597EE2  74 18                     JZ 0x00597efc
00597EE4  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
00597EE7  51                        PUSH ECX
00597EE8  50                        PUSH EAX
00597EE9  E8 02 BC 11 00            CALL 0x006b3af0
00597EEE  EB 0C                     JMP 0x00597efc
LAB_00597ef0:
00597EF0  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
00597EF6  51                        PUSH ECX
00597EF7  E8 14 0C 12 00            CALL 0x006b8b10
LAB_00597efc:
00597EFC  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00597EFF  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
00597F02  88 56 65                  MOV byte ptr [ESI + 0x65],DL
00597F05  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00597F0B  3B CF                     CMP ECX,EDI
00597F0D  74 1A                     JZ 0x00597f29
00597F0F  E8 76 93 E6 FF            CALL 0x0040128a
00597F14  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
00597F1A  50                        PUSH EAX
00597F1B  E8 90 63 19 00            CALL 0x0072e2b0
00597F20  83 C4 04                  ADD ESP,0x4
00597F23  89 BE 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EDI
LAB_00597f29:
00597F29  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
00597F2F  3B CF                     CMP ECX,EDI
00597F31  74 1A                     JZ 0x00597f4d
00597F33  E8 52 93 E6 FF            CALL 0x0040128a
00597F38  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
00597F3E  51                        PUSH ECX
00597F3F  E8 6C 63 19 00            CALL 0x0072e2b0
00597F44  83 C4 04                  ADD ESP,0x4
00597F47  89 BE 27 1F 00 00         MOV dword ptr [ESI + 0x1f27],EDI
LAB_00597f4d:
00597F4D  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
00597F53  3B CF                     CMP ECX,EDI
00597F55  74 1A                     JZ 0x00597f71
00597F57  E8 2E 93 E6 FF            CALL 0x0040128a
00597F5C  8B 96 2B 1F 00 00         MOV EDX,dword ptr [ESI + 0x1f2b]
00597F62  52                        PUSH EDX
00597F63  E8 48 63 19 00            CALL 0x0072e2b0
00597F68  83 C4 04                  ADD ESP,0x4
00597F6B  89 BE 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EDI
LAB_00597f71:
00597F71  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
00597F77  3B CF                     CMP ECX,EDI
00597F79  74 1A                     JZ 0x00597f95
00597F7B  E8 0A 93 E6 FF            CALL 0x0040128a
00597F80  8B 86 2F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2f]
00597F86  50                        PUSH EAX
00597F87  E8 24 63 19 00            CALL 0x0072e2b0
00597F8C  83 C4 04                  ADD ESP,0x4
00597F8F  89 BE 2F 1F 00 00         MOV dword ptr [ESI + 0x1f2f],EDI
LAB_00597f95:
00597F95  33 C0                     XOR EAX,EAX
00597F97  8A 46 65                  MOV AL,byte ptr [ESI + 0x65]
00597F9A  83 C0 FA                  ADD EAX,-0x6
00597F9D  83 F8 04                  CMP EAX,0x4
00597FA0  0F 87 1A 13 00 00         JA 0x005992c0
switchD_00597fa6::switchD:
00597FA6  FF 24 85 C0 93 59 00      JMP dword ptr [EAX*0x4 + 0x5993c0]
switchD_00597fa6::caseD_6:
00597FAD  8A 86 BB 1A 00 00         MOV AL,byte ptr [ESI + 0x1abb]
00597FB3  84 C0                     TEST AL,AL
00597FB5  74 09                     JZ 0x00597fc0
00597FB7  6A 00                     PUSH 0x0
00597FB9  8B CE                     MOV ECX,ESI
00597FBB  E8 9E 96 E6 FF            CALL 0x0040165e
LAB_00597fc0:
00597FC0  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00597FC6  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
00597FC9  85 DB                     TEST EBX,EBX
00597FCB  75 18                     JNZ 0x00597fe5
00597FCD  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
00597FD1  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
00597FD5  83 C3 1F                  ADD EBX,0x1f
00597FD8  C1 EB 03                  SHR EBX,0x3
00597FDB  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
00597FE1  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_00597fe5:
00597FE5  50                        PUSH EAX
00597FE6  E8 B5 CF 11 00            CALL 0x006b4fa0
00597FEB  8B CB                     MOV ECX,EBX
00597FED  8B F8                     MOV EDI,EAX
00597FEF  8B D1                     MOV EDX,ECX
00597FF1  83 C8 FF                  OR EAX,0xffffffff
00597FF4  C1 E9 02                  SHR ECX,0x2
00597FF7  F3 AB                     STOSD.REP ES:EDI
00597FF9  8B CA                     MOV ECX,EDX
00597FFB  68 F0 00 00 00            PUSH 0xf0
00598000  83 E1 03                  AND ECX,0x3
00598003  68 B8 01 00 00            PUSH 0x1b8
00598008  F3 AA                     STOSB.REP ES:EDI
0059800A  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00598010  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00598016  6A 16                     PUSH 0x16
00598018  6A 00                     PUSH 0x0
0059801A  6A 00                     PUSH 0x0
0059801C  50                        PUSH EAX
0059801D  E8 6E 8A 17 00            CALL 0x00710a90
00598022  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00598028  6A FF                     PUSH -0x1
0059802A  6A FF                     PUSH -0x1
0059802C  6A 02                     PUSH 0x2
0059802E  6A FF                     PUSH -0x1
00598030  6A FF                     PUSH -0x1
00598032  51                        PUSH ECX
00598033  68 4E 25 00 00            PUSH 0x254e
00598038  E8 03 81 11 00            CALL 0x006b0140
0059803D  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00598043  50                        PUSH EAX
00598044  E8 27 9B 17 00            CALL 0x00711b70
00598049  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
0059804F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598054  52                        PUSH EDX
00598055  50                        PUSH EAX
00598056  E8 D5 B3 11 00            CALL 0x006b3430
0059805B  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
00598061  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00598067  51                        PUSH ECX
00598068  52                        PUSH EDX
00598069  E8 62 B5 11 00            CALL 0x006b35d0
0059806E  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598074  68 63 25 00 00            PUSH 0x2563
00598079  68 06 01 00 00            PUSH 0x106
0059807E  68 B8 01 00 00            PUSH 0x1b8
00598083  68 E9 35 40 00            PUSH 0x4035e9
00598088  8D 45 FC                  LEA EAX,[EBP + -0x4]
0059808B  6A 32                     PUSH 0x32
0059808D  50                        PUSH EAX
0059808E  51                        PUSH ECX
0059808F  E8 9C A2 11 00            CALL 0x006b2330
00598094  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00598097  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059809C  68 AA 00 00 00            PUSH 0xaa
005980A1  68 B4 00 00 00            PUSH 0xb4
005980A6  6A FF                     PUSH -0x1
005980A8  52                        PUSH EDX
005980A9  50                        PUSH EAX
005980AA  E8 91 B5 11 00            CALL 0x006b3640
005980AF  6A 33                     PUSH 0x33
005980B1  E8 7A 64 19 00            CALL 0x0072e530
005980B6  83 C4 04                  ADD ESP,0x4
005980B9  BB 01 00 00 00            MOV EBX,0x1
005980BE  85 C0                     TEST EAX,EAX
005980C0  74 32                     JZ 0x005980f4
005980C2  83 C9 FF                  OR ECX,0xffffffff
005980C5  33 FF                     XOR EDI,EDI
005980C7  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005980CA  C6 00 00                  MOV byte ptr [EAX],0x0
005980CD  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005980D0  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005980D4  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
005980D7  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
005980DA  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
005980DD  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
005980E0  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
005980E3  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005980E6  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
005980E9  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
005980EC  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
005980EF  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
005980F2  EB 04                     JMP 0x005980f8
LAB_005980f4:
005980F4  33 C0                     XOR EAX,EAX
005980F6  33 FF                     XOR EDI,EDI
LAB_005980f8:
005980F8  3B C7                     CMP EAX,EDI
005980FA  89 86 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EAX
00598100  0F 84 87 00 00 00         JZ 0x0059818d
00598106  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059810C  57                        PUSH EDI
0059810D  53                        PUSH EBX
0059810E  6A 10                     PUSH 0x10
00598110  53                        PUSH EBX
00598111  68 06 01 00 00            PUSH 0x106
00598116  68 B8 01 00 00            PUSH 0x1b8
0059811B  68 AA 00 00 00            PUSH 0xaa
00598120  68 B4 00 00 00            PUSH 0xb4
00598125  51                        PUSH ECX
00598126  E8 C5 78 12 00            CALL 0x006bf9f0
0059812B  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00598131  50                        PUSH EAX
00598132  68 AA 00 00 00            PUSH 0xaa
00598137  68 B4 00 00 00            PUSH 0xb4
0059813C  6A 02                     PUSH 0x2
0059813E  E8 5A C4 E6 FF            CALL 0x0040459d
00598143  85 C0                     TEST EAX,EAX
00598145  74 46                     JZ 0x0059818d
00598147  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059814D  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
00598150  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598153  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
00598156  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059815C  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
0059815F  3B C7                     CMP EAX,EDI
00598161  7C 0C                     JL 0x0059816f
00598163  50                        PUSH EAX
00598164  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598169  50                        PUSH EAX
0059816A  E8 C1 B2 11 00            CALL 0x006b3430
LAB_0059816f:
0059816F  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00598175  E8 77 D4 E6 FF            CALL 0x004055f1
0059817A  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
00598180  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00598186  51                        PUSH ECX
00598187  52                        PUSH EDX
00598188  E8 63 B9 11 00            CALL 0x006b3af0
LAB_0059818d:
0059818D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00598190  83 F8 FF                  CMP EAX,-0x1
00598193  74 13                     JZ 0x005981a8
00598195  50                        PUSH EAX
00598196  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059819B  50                        PUSH EAX
0059819C  E8 0F BA 11 00            CALL 0x006b3bb0
005981A1  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_005981a8:
005981A8  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005981AB  C7 85 DE FE FF FF 36 23 00 00  MOV dword ptr [EBP + 0xfffffede],0x2336
005981B5  89 8D EB FE FF FF         MOV dword ptr [EBP + 0xfffffeeb],ECX
005981BB  C7 85 EF FE FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffeef],0x2
005981C5  C7 85 F3 FE FF FF 41 69 00 00  MOV dword ptr [EBP + 0xfffffef3],0x6941
005981CF  E9 EC 10 00 00            JMP 0x005992c0
switchD_00597fa6::caseD_7:
005981D4  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005981DA  C7 45 F8 63 25 00 00      MOV dword ptr [EBP + -0x8],0x2563
005981E1  3C 03                     CMP AL,0x3
005981E3  0F 84 EF 01 00 00         JZ 0x005983d8
005981E9  3C 09                     CMP AL,0x9
005981EB  0F 84 DF 01 00 00         JZ 0x005983d0
005981F1  25 FF 00 00 00            AND EAX,0xff
005981F6  BB 01 00 00 00            MOV EBX,0x1
005981FB  83 C0 FE                  ADD EAX,-0x2
005981FE  83 F8 08                  CMP EAX,0x8
00598201  77 25                     JA 0x00598228
switchD_00598203::switchD:
00598203  FF 24 85 D4 93 59 00      JMP dword ptr [EAX*0x4 + 0x5993d4]
switchD_00598203::caseD_2:
0059820A  8A 86 BB 1A 00 00         MOV AL,byte ptr [ESI + 0x1abb]
00598210  84 C0                     TEST AL,AL
00598212  74 14                     JZ 0x00598228
00598214  6A 00                     PUSH 0x0
00598216  EB 09                     JMP 0x00598221
switchD_00598203::caseD_a:
00598218  38 9E BB 1A 00 00         CMP byte ptr [ESI + 0x1abb],BL
0059821E  74 08                     JZ 0x00598228
00598220  53                        PUSH EBX
LAB_00598221:
00598221  8B CE                     MOV ECX,ESI
00598223  E8 36 94 E6 FF            CALL 0x0040165e
switchD_00598203::caseD_3:
00598228  33 C0                     XOR EAX,EAX
0059822A  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
00598230  83 C0 FE                  ADD EAX,-0x2
00598233  83 F8 08                  CMP EAX,0x8
00598236  77 5C                     JA 0x00598294
switchD_00598238::switchD:
00598238  FF 24 85 F8 93 59 00      JMP dword ptr [EAX*0x4 + 0x5993f8]
switchD_00598238::caseD_2:
0059823F  8B CE                     MOV ECX,ESI
00598241  E8 05 B1 E6 FF            CALL 0x0040334b
00598246  C7 45 F8 53 25 00 00      MOV dword ptr [EBP + -0x8],0x2553
0059824D  EB 45                     JMP 0x00598294
switchD_00598238::caseD_4:
0059824F  8B CE                     MOV ECX,ESI
00598251  E8 F3 99 E6 FF            CALL 0x00401c49
00598256  C6 05 5F 73 80 00 00      MOV byte ptr [0x0080735f],0x0
0059825D  C7 45 F8 52 25 00 00      MOV dword ptr [EBP + -0x8],0x2552
00598264  EB 2E                     JMP 0x00598294
switchD_00598238::caseD_5:
00598266  8B CE                     MOV ECX,ESI
00598268  E8 37 B2 E6 FF            CALL 0x004034a4
0059826D  C7 45 F8 62 25 00 00      MOV dword ptr [EBP + -0x8],0x2562
00598274  EB 1E                     JMP 0x00598294
switchD_00598238::caseD_7:
00598276  8B CE                     MOV ECX,ESI
00598278  E8 43 A0 E6 FF            CALL 0x004022c0
0059827D  C7 45 F8 5B 25 00 00      MOV dword ptr [EBP + -0x8],0x255b
00598284  EB 0E                     JMP 0x00598294
switchD_00598238::caseD_a:
00598286  8B CE                     MOV ECX,ESI
00598288  E8 31 A2 E6 FF            CALL 0x004024be
0059828D  C7 45 F8 9C 25 00 00      MOV dword ptr [EBP + -0x8],0x259c
switchD_00598238::caseD_3:
00598294  8A 86 BB 1A 00 00         MOV AL,byte ptr [ESI + 0x1abb]
0059829A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0059829D  8A D0                     MOV DL,AL
0059829F  51                        PUSH ECX
005982A0  F6 DA                     NEG DL
005982A2  1B D2                     SBB EDX,EDX
005982A4  83 E2 B4                  AND EDX,0xffffffb4
005982A7  81 C2 AA 00 00 00         ADD EDX,0xaa
005982AD  F6 D8                     NEG AL
005982AF  1B C0                     SBB EAX,EAX
005982B1  8B FA                     MOV EDI,EDX
005982B3  83 E0 74                  AND EAX,0x74
005982B6  8D 55 FC                  LEA EDX,[EBP + -0x4]
005982B9  05 06 01 00 00            ADD EAX,0x106
005982BE  50                        PUSH EAX
005982BF  68 B8 01 00 00            PUSH 0x1b8
005982C4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005982C7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005982CC  68 E9 35 40 00            PUSH 0x4035e9
005982D1  6A 32                     PUSH 0x32
005982D3  52                        PUSH EDX
005982D4  50                        PUSH EAX
005982D5  E8 56 A0 11 00            CALL 0x006b2330
005982DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005982DD  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005982E3  57                        PUSH EDI
005982E4  68 B4 00 00 00            PUSH 0xb4
005982E9  6A FF                     PUSH -0x1
005982EB  51                        PUSH ECX
005982EC  52                        PUSH EDX
005982ED  E8 4E B3 11 00            CALL 0x006b3640
005982F2  6A 33                     PUSH 0x33
005982F4  E8 37 62 19 00            CALL 0x0072e530
005982F9  83 C4 04                  ADD ESP,0x4
005982FC  85 C0                     TEST EAX,EAX
005982FE  74 32                     JZ 0x00598332
00598300  83 CA FF                  OR EDX,0xffffffff
00598303  33 C9                     XOR ECX,ECX
00598305  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598308  C6 00 00                  MOV byte ptr [EAX],0x0
0059830B  89 50 03                  MOV dword ptr [EAX + 0x3],EDX
0059830E  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
00598312  89 48 07                  MOV dword ptr [EAX + 0x7],ECX
00598315  89 48 0B                  MOV dword ptr [EAX + 0xb],ECX
00598318  89 48 0F                  MOV dword ptr [EAX + 0xf],ECX
0059831B  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
0059831E  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
00598321  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
00598324  89 48 27                  MOV dword ptr [EAX + 0x27],ECX
00598327  89 48 23                  MOV dword ptr [EAX + 0x23],ECX
0059832A  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
0059832D  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
00598330  EB 04                     JMP 0x00598336
LAB_00598332:
00598332  33 C0                     XOR EAX,EAX
00598334  33 C9                     XOR ECX,ECX
LAB_00598336:
00598336  3B C1                     CMP EAX,ECX
00598338  89 86 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EAX
0059833E  74 7F                     JZ 0x005983bf
00598340  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00598343  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598349  6A 00                     PUSH 0x0
0059834B  53                        PUSH EBX
0059834C  6A 10                     PUSH 0x10
0059834E  53                        PUSH EBX
0059834F  50                        PUSH EAX
00598350  68 B8 01 00 00            PUSH 0x1b8
00598355  57                        PUSH EDI
00598356  68 B4 00 00 00            PUSH 0xb4
0059835B  51                        PUSH ECX
0059835C  E8 8F 76 12 00            CALL 0x006bf9f0
00598361  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00598367  50                        PUSH EAX
00598368  57                        PUSH EDI
00598369  68 B4 00 00 00            PUSH 0xb4
0059836E  6A 02                     PUSH 0x2
00598370  E8 28 C2 E6 FF            CALL 0x0040459d
00598375  85 C0                     TEST EAX,EAX
00598377  74 46                     JZ 0x005983bf
00598379  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059837F  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
00598382  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598385  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
00598388  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059838E  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
00598391  85 C0                     TEST EAX,EAX
00598393  7C 0C                     JL 0x005983a1
00598395  50                        PUSH EAX
00598396  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059839B  50                        PUSH EAX
0059839C  E8 8F B0 11 00            CALL 0x006b3430
LAB_005983a1:
005983A1  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
005983A7  E8 45 D2 E6 FF            CALL 0x004055f1
005983AC  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
005983B2  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005983B8  51                        PUSH ECX
005983B9  52                        PUSH EDX
005983BA  E8 31 B7 11 00            CALL 0x006b3af0
LAB_005983bf:
005983BF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005983C2  83 F8 FF                  CMP EAX,-0x1
005983C5  0F 84 C9 03 00 00         JZ 0x00598794
005983CB  E9 B1 03 00 00            JMP 0x00598781
LAB_005983d0:
005983D0  3C 03                     CMP AL,0x3
005983D2  0F 85 9E 02 00 00         JNZ 0x00598676
LAB_005983d8:
005983D8  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005983DE  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005983E3  81 C1 40 01 00 00         ADD ECX,0x140
005983E9  8D 55 FC                  LEA EDX,[EBP + -0x4]
005983EC  51                        PUSH ECX
005983ED  68 4C 01 00 00            PUSH 0x14c
005983F2  68 E1 02 00 00            PUSH 0x2e1
005983F7  68 D2 42 40 00            PUSH 0x4042d2
005983FC  6A 32                     PUSH 0x32
005983FE  52                        PUSH EDX
005983FF  50                        PUSH EAX
00598400  E8 2B 9F 11 00            CALL 0x006b2330
00598405  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00598408  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059840E  6A 72                     PUSH 0x72
00598410  6A 22                     PUSH 0x22
00598412  6A FF                     PUSH -0x1
00598414  51                        PUSH ECX
00598415  52                        PUSH EDX
00598416  E8 25 B2 11 00            CALL 0x006b3640
0059841B  8B 96 4C 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b4c]
00598421  B8 FE 02 00 00            MOV EAX,0x2fe
00598426  2B C2                     SUB EAX,EDX
00598428  C7 86 48 1B 00 00 77 00 00 00  MOV dword ptr [ESI + 0x1b48],0x77
00598432  89 86 44 1B 00 00         MOV dword ptr [ESI + 0x1b44],EAX
00598438  8B 86 2C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b2c]
0059843E  83 F8 FF                  CMP EAX,-0x1
00598441  74 1D                     JZ 0x00598460
00598443  8B 8E 48 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b48]
00598449  8B 96 44 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b44]
0059844F  51                        PUSH ECX
00598450  52                        PUSH EDX
00598451  6A FE                     PUSH -0x2
00598453  50                        PUSH EAX
00598454  8B 86 70 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b70]
0059845A  50                        PUSH EAX
0059845B  E8 70 B0 11 00            CALL 0x006b34d0
LAB_00598460:
00598460  8B 86 2C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b2c]
00598466  83 F8 FF                  CMP EAX,-0x1
00598469  74 0D                     JZ 0x00598478
0059846B  8B 8E 70 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b70]
00598471  50                        PUSH EAX
00598472  51                        PUSH ECX
00598473  E8 58 B1 11 00            CALL 0x006b35d0
LAB_00598478:
00598478  8B BE DD 1B 00 00         MOV EDI,dword ptr [ESI + 0x1bdd]
0059847E  BA FE 02 00 00            MOV EDX,0x2fe
00598483  2B D7                     SUB EDX,EDI
00598485  B8 B9 01 00 00            MOV EAX,0x1b9
0059848A  89 96 D5 1B 00 00         MOV dword ptr [ESI + 0x1bd5],EDX
00598490  8B 96 E1 1B 00 00         MOV EDX,dword ptr [ESI + 0x1be1]
00598496  2B C2                     SUB EAX,EDX
00598498  89 86 D9 1B 00 00         MOV dword ptr [ESI + 0x1bd9],EAX
0059849E  8B 86 BD 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bbd]
005984A4  83 F8 FF                  CMP EAX,-0x1
005984A7  74 1D                     JZ 0x005984c6
005984A9  8B 8E D9 1B 00 00         MOV ECX,dword ptr [ESI + 0x1bd9]
005984AF  8B 96 D5 1B 00 00         MOV EDX,dword ptr [ESI + 0x1bd5]
005984B5  51                        PUSH ECX
005984B6  52                        PUSH EDX
005984B7  6A FE                     PUSH -0x2
005984B9  50                        PUSH EAX
005984BA  8B 86 01 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c01]
005984C0  50                        PUSH EAX
005984C1  E8 0A B0 11 00            CALL 0x006b34d0
LAB_005984c6:
005984C6  8B 86 BD 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bbd]
005984CC  83 F8 FF                  CMP EAX,-0x1
005984CF  74 0D                     JZ 0x005984de
005984D1  8B 8E 01 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c01]
005984D7  50                        PUSH EAX
005984D8  51                        PUSH ECX
005984D9  E8 F2 B0 11 00            CALL 0x006b35d0
LAB_005984de:
005984DE  8B 86 6E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c6e]
005984E4  C7 86 6A 1C 00 00 98 00 00 00  MOV dword ptr [ESI + 0x1c6a],0x98
005984EE  83 E8 07                  SUB EAX,0x7
005984F1  99                        CDQ
005984F2  2B C2                     SUB EAX,EDX
005984F4  BA EE 02 00 00            MOV EDX,0x2ee
005984F9  D1 F8                     SAR EAX,0x1
005984FB  2B D0                     SUB EDX,EAX
005984FD  89 96 66 1C 00 00         MOV dword ptr [ESI + 0x1c66],EDX
00598503  8B 86 4E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c4e]
00598509  83 F8 FF                  CMP EAX,-0x1
0059850C  74 17                     JZ 0x00598525
0059850E  8B 8E 6A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c6a]
00598514  51                        PUSH ECX
00598515  52                        PUSH EDX
00598516  6A FE                     PUSH -0x2
00598518  50                        PUSH EAX
00598519  8B 86 92 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c92]
0059851F  50                        PUSH EAX
00598520  E8 AB AF 11 00            CALL 0x006b34d0
LAB_00598525:
00598525  8B 86 4E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c4e]
0059852B  83 F8 FF                  CMP EAX,-0x1
0059852E  74 0D                     JZ 0x0059853d
00598530  8B 8E 92 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c92]
00598536  50                        PUSH EAX
00598537  51                        PUSH ECX
00598538  E8 93 B0 11 00            CALL 0x006b35d0
LAB_0059853d:
0059853D  6A 33                     PUSH 0x33
0059853F  E8 EC 5F 19 00            CALL 0x0072e530
00598544  33 FF                     XOR EDI,EDI
00598546  83 C4 04                  ADD ESP,0x4
00598549  3B C7                     CMP EAX,EDI
0059854B  BB 01 00 00 00            MOV EBX,0x1
00598550  74 30                     JZ 0x00598582
00598552  83 C9 FF                  OR ECX,0xffffffff
00598555  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598558  C6 00 00                  MOV byte ptr [EAX],0x0
0059855B  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
0059855E  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
00598562  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
00598565  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
00598568  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
0059856B  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
0059856E  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
00598571  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
00598574  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
00598577  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
0059857A  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
0059857D  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
00598580  EB 02                     JMP 0x00598584
LAB_00598582:
00598582  33 C0                     XOR EAX,EAX
LAB_00598584:
00598584  3B C7                     CMP EAX,EDI
00598586  89 86 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EAX
0059858C  74 69                     JZ 0x005985f7
0059858E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00598594  57                        PUSH EDI
00598595  53                        PUSH EBX
00598596  6A 10                     PUSH 0x10
00598598  53                        PUSH EBX
00598599  68 4C 01 00 00            PUSH 0x14c
0059859E  68 E1 02 00 00            PUSH 0x2e1
005985A3  6A 72                     PUSH 0x72
005985A5  6A 22                     PUSH 0x22
005985A7  52                        PUSH EDX
005985A8  E8 43 74 12 00            CALL 0x006bf9f0
005985AD  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
005985B3  50                        PUSH EAX
005985B4  6A 72                     PUSH 0x72
005985B6  6A 22                     PUSH 0x22
005985B8  6A 02                     PUSH 0x2
005985BA  E8 DE BF E6 FF            CALL 0x0040459d
005985BF  85 C0                     TEST EAX,EAX
005985C1  74 34                     JZ 0x005985f7
005985C3  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
005985C9  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005985CC  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005985CF  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005985D2  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
005985D8  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005985DB  3B C7                     CMP EAX,EDI
005985DD  7C 0D                     JL 0x005985ec
005985DF  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005985E5  50                        PUSH EAX
005985E6  52                        PUSH EDX
005985E7  E8 44 AE 11 00            CALL 0x006b3430
LAB_005985ec:
005985EC  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
005985F2  E8 FA CF E6 FF            CALL 0x004055f1
LAB_005985f7:
005985F7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005985FA  83 F8 FF                  CMP EAX,-0x1
005985FD  74 13                     JZ 0x00598612
005985FF  50                        PUSH EAX
00598600  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598605  50                        PUSH EAX
00598606  E8 A5 B5 11 00            CALL 0x006b3bb0
0059860B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_00598612:
00598612  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
00598618  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059861E  51                        PUSH ECX
0059861F  52                        PUSH EDX
00598620  E8 CB B4 11 00            CALL 0x006b3af0
00598625  8B 86 2C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b2c]
0059862B  83 F8 FF                  CMP EAX,-0x1
0059862E  74 0D                     JZ 0x0059863d
00598630  50                        PUSH EAX
00598631  8B 86 70 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b70]
00598637  50                        PUSH EAX
00598638  E8 B3 B4 11 00            CALL 0x006b3af0
LAB_0059863d:
0059863D  8B 86 BD 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bbd]
00598643  83 F8 FF                  CMP EAX,-0x1
00598646  74 0D                     JZ 0x00598655
00598648  8B 8E 01 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c01]
0059864E  50                        PUSH EAX
0059864F  51                        PUSH ECX
00598650  E8 9B B4 11 00            CALL 0x006b3af0
LAB_00598655:
00598655  8B 86 4E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c4e]
0059865B  83 F8 FF                  CMP EAX,-0x1
0059865E  0F 84 30 01 00 00         JZ 0x00598794
00598664  8B 96 92 1C 00 00         MOV EDX,dword ptr [ESI + 0x1c92]
0059866A  50                        PUSH EAX
0059866B  52                        PUSH EDX
0059866C  E8 7F B4 11 00            CALL 0x006b3af0
00598671  E9 1E 01 00 00            JMP 0x00598794
LAB_00598676:
00598676  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059867C  33 FF                     XOR EDI,EDI
0059867E  57                        PUSH EDI
0059867F  68 75 01 00 00            PUSH 0x175
00598684  68 E1 02 00 00            PUSH 0x2e1
00598689  68 32 10 40 00            PUSH 0x401032
0059868E  8D 45 FC                  LEA EAX,[EBP + -0x4]
00598691  6A 32                     PUSH 0x32
00598693  50                        PUSH EAX
00598694  51                        PUSH ECX
00598695  E8 96 9C 11 00            CALL 0x006b2330
0059869A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0059869D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005986A2  6A 5E                     PUSH 0x5e
005986A4  6A 22                     PUSH 0x22
005986A6  6A FF                     PUSH -0x1
005986A8  52                        PUSH EDX
005986A9  50                        PUSH EAX
005986AA  E8 91 AF 11 00            CALL 0x006b3640
005986AF  6A 33                     PUSH 0x33
005986B1  E8 7A 5E 19 00            CALL 0x0072e530
005986B6  83 C4 04                  ADD ESP,0x4
005986B9  3B C7                     CMP EAX,EDI
005986BB  BB 01 00 00 00            MOV EBX,0x1
005986C0  74 30                     JZ 0x005986f2
005986C2  83 C9 FF                  OR ECX,0xffffffff
005986C5  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005986C8  C6 00 00                  MOV byte ptr [EAX],0x0
005986CB  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005986CE  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005986D2  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
005986D5  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
005986D8  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
005986DB  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
005986DE  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
005986E1  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005986E4  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
005986E7  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
005986EA  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
005986ED  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
005986F0  EB 02                     JMP 0x005986f4
LAB_005986f2:
005986F2  33 C0                     XOR EAX,EAX
LAB_005986f4:
005986F4  3B C7                     CMP EAX,EDI
005986F6  89 86 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EAX
005986FC  74 7B                     JZ 0x00598779
005986FE  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598704  57                        PUSH EDI
00598705  53                        PUSH EBX
00598706  6A 10                     PUSH 0x10
00598708  53                        PUSH EBX
00598709  68 75 01 00 00            PUSH 0x175
0059870E  68 E1 02 00 00            PUSH 0x2e1
00598713  6A 5E                     PUSH 0x5e
00598715  6A 22                     PUSH 0x22
00598717  51                        PUSH ECX
00598718  E8 D3 72 12 00            CALL 0x006bf9f0
0059871D  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00598723  50                        PUSH EAX
00598724  6A 5E                     PUSH 0x5e
00598726  6A 22                     PUSH 0x22
00598728  6A 02                     PUSH 0x2
0059872A  E8 6E BE E6 FF            CALL 0x0040459d
0059872F  85 C0                     TEST EAX,EAX
00598731  74 46                     JZ 0x00598779
00598733  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
00598739  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
0059873C  88 58 02                  MOV byte ptr [EAX + 0x2],BL
0059873F  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
00598742  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
00598748  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
0059874B  3B C7                     CMP EAX,EDI
0059874D  7C 0C                     JL 0x0059875b
0059874F  50                        PUSH EAX
00598750  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598755  50                        PUSH EAX
00598756  E8 D5 AC 11 00            CALL 0x006b3430
LAB_0059875b:
0059875B  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
00598761  E8 8B CE E6 FF            CALL 0x004055f1
00598766  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
0059876C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00598772  51                        PUSH ECX
00598773  52                        PUSH EDX
00598774  E8 77 B3 11 00            CALL 0x006b3af0
LAB_00598779:
00598779  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0059877C  83 F8 FF                  CMP EAX,-0x1
0059877F  74 13                     JZ 0x00598794
LAB_00598781:
00598781  50                        PUSH EAX
00598782  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598787  50                        PUSH EAX
00598788  E8 23 B4 11 00            CALL 0x006b3bb0
0059878D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_00598794:
00598794  33 C0                     XOR EAX,EAX
00598796  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
0059879C  83 C0 FE                  ADD EAX,-0x2
0059879F  83 F8 08                  CMP EAX,0x8
005987A2  0F 87 18 0B 00 00         JA 0x005992c0
switchD_005987a8::switchD:
005987A8  FF 24 85 1C 94 59 00      JMP dword ptr [EAX*0x4 + 0x59941c]
switchD_005987a8::caseD_2:
005987AF  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005987B2  8A 96 D2 1E 00 00         MOV DL,byte ptr [ESI + 0x1ed2]
005987B8  B9 02 00 00 00            MOV ECX,0x2
005987BD  C7 85 F4 FD FF FF 52 25 00 00  MOV dword ptr [EBP + 0xfffffdf4],0x2552
005987C7  89 85 01 FE FF FF         MOV dword ptr [EBP + 0xfffffe01],EAX
005987CD  89 8D 05 FE FF FF         MOV dword ptr [EBP + 0xfffffe05],ECX
005987D3  C7 85 09 FE FF FF 54 69 00 00  MOV dword ptr [EBP + 0xfffffe09],0x6954
005987DD  C7 85 1B FE FF FF 53 25 00 00  MOV dword ptr [EBP + 0xfffffe1b],0x2553
005987E7  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
005987ED  89 8D 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],ECX
005987F3  C7 85 30 FE FF FF 53 69 00 00  MOV dword ptr [EBP + 0xfffffe30],0x6953
005987FD  C7 85 42 FE FF FF 64 25 00 00  MOV dword ptr [EBP + 0xfffffe42],0x2564
00598807  89 85 4F FE FF FF         MOV dword ptr [EBP + 0xfffffe4f],EAX
0059880D  89 8D 53 FE FF FF         MOV dword ptr [EBP + 0xfffffe53],ECX
00598813  C7 85 57 FE FF FF 4B 69 00 00  MOV dword ptr [EBP + 0xfffffe57],0x694b
0059881D  C7 85 DE FE FF FF 36 23 00 00  MOV dword ptr [EBP + 0xfffffede],0x2336
00598827  88 95 E2 FE FF FF         MOV byte ptr [EBP + 0xfffffee2],DL
0059882D  89 85 EB FE FF FF         MOV dword ptr [EBP + 0xfffffeeb],EAX
00598833  89 8D EF FE FF FF         MOV dword ptr [EBP + 0xfffffeef],ECX
00598839  C7 85 F3 FE FF FF 41 69 00 00  MOV dword ptr [EBP + 0xfffffef3],0x6941
00598843  E9 78 0A 00 00            JMP 0x005992c0
switchD_005987a8::caseD_4:
00598848  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059884B  B9 02 00 00 00            MOV ECX,0x2
00598850  C7 85 1B FE FF FF 53 25 00 00  MOV dword ptr [EBP + 0xfffffe1b],0x2553
0059885A  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
00598860  89 8D 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],ECX
00598866  C7 85 30 FE FF FF 53 69 00 00  MOV dword ptr [EBP + 0xfffffe30],0x6953
00598870  E9 0B 0A 00 00            JMP 0x00599280
switchD_005987a8::caseD_5:
00598875  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00598878  B9 02 00 00 00            MOV ECX,0x2
0059887D  C7 85 1B FE FF FF 61 25 00 00  MOV dword ptr [EBP + 0xfffffe1b],0x2561
00598887  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
0059888D  89 8D 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],ECX
00598893  C7 85 30 FE FF FF 4B 69 00 00  MOV dword ptr [EBP + 0xfffffe30],0x694b
0059889D  E9 DE 09 00 00            JMP 0x00599280
switchD_005987a8::caseD_3:
005988A2  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005988A5  B9 02 00 00 00            MOV ECX,0x2
005988AA  BA 52 69 00 00            MOV EDX,0x6952
005988AF  C7 85 F4 FD FF FF 5F 25 00 00  MOV dword ptr [EBP + 0xfffffdf4],0x255f
005988B9  89 85 01 FE FF FF         MOV dword ptr [EBP + 0xfffffe01],EAX
005988BF  89 8D 05 FE FF FF         MOV dword ptr [EBP + 0xfffffe05],ECX
005988C5  C7 85 09 FE FF FF FF 63 00 00  MOV dword ptr [EBP + 0xfffffe09],0x63ff
005988CF  C7 85 1B FE FF FF 60 25 00 00  MOV dword ptr [EBP + 0xfffffe1b],0x2560
005988D9  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
005988DF  89 8D 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],ECX
005988E5  89 95 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],EDX
005988EB  C7 85 B7 FE FF FF 4C 25 00 00  MOV dword ptr [EBP + 0xfffffeb7],0x254c
005988F5  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
005988FB  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
00598901  C7 85 CC FE FF FF 41 69 00 00  MOV dword ptr [EBP + 0xfffffecc],0x6941
0059890B  C7 85 DE FE FF FF BC 24 00 00  MOV dword ptr [EBP + 0xfffffede],0x24bc
00598915  89 85 EB FE FF FF         MOV dword ptr [EBP + 0xfffffeeb],EAX
0059891B  89 8D EF FE FF FF         MOV dword ptr [EBP + 0xfffffeef],ECX
00598921  89 95 F3 FE FF FF         MOV dword ptr [EBP + 0xfffffef3],EDX
00598927  E9 94 09 00 00            JMP 0x005992c0
switchD_005987a8::caseD_9:
0059892C  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059892F  C7 85 B7 FE FF FF 4C 25 00 00  MOV dword ptr [EBP + 0xfffffeb7],0x254c
00598939  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
0059893F  B9 02 00 00 00            MOV ECX,0x2
00598944  E9 47 09 00 00            JMP 0x00599290
switchD_00597fa6::caseD_8:
00598949  8B 96 4C 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b4c]
0059894F  B8 CD 01 00 00            MOV EAX,0x1cd
00598954  2B C2                     SUB EAX,EDX
00598956  C7 86 48 1B 00 00 63 00 00 00  MOV dword ptr [ESI + 0x1b48],0x63
00598960  89 86 44 1B 00 00         MOV dword ptr [ESI + 0x1b44],EAX
00598966  8B 86 2C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b2c]
0059896C  83 F8 FF                  CMP EAX,-0x1
0059896F  74 1D                     JZ 0x0059898e
00598971  8B 8E 48 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b48]
00598977  8B 96 44 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b44]
0059897D  51                        PUSH ECX
0059897E  52                        PUSH EDX
0059897F  6A FE                     PUSH -0x2
00598981  50                        PUSH EAX
00598982  8B 86 70 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b70]
00598988  50                        PUSH EAX
00598989  E8 42 AB 11 00            CALL 0x006b34d0
LAB_0059898e:
0059898E  8B 86 2C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b2c]
00598994  83 F8 FF                  CMP EAX,-0x1
00598997  74 0D                     JZ 0x005989a6
00598999  8B 8E 70 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b70]
0059899F  50                        PUSH EAX
005989A0  51                        PUSH ECX
005989A1  E8 2A AC 11 00            CALL 0x006b35d0
LAB_005989a6:
005989A6  8B BE DD 1B 00 00         MOV EDI,dword ptr [ESI + 0x1bdd]
005989AC  BA CD 01 00 00            MOV EDX,0x1cd
005989B1  2B D7                     SUB EDX,EDI
005989B3  B8 B8 01 00 00            MOV EAX,0x1b8
005989B8  89 96 D5 1B 00 00         MOV dword ptr [ESI + 0x1bd5],EDX
005989BE  8B 96 E1 1B 00 00         MOV EDX,dword ptr [ESI + 0x1be1]
005989C4  2B C2                     SUB EAX,EDX
005989C6  89 86 D9 1B 00 00         MOV dword ptr [ESI + 0x1bd9],EAX
005989CC  8B 86 BD 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bbd]
005989D2  83 F8 FF                  CMP EAX,-0x1
005989D5  74 1D                     JZ 0x005989f4
005989D7  8B 8E D9 1B 00 00         MOV ECX,dword ptr [ESI + 0x1bd9]
005989DD  8B 96 D5 1B 00 00         MOV EDX,dword ptr [ESI + 0x1bd5]
005989E3  51                        PUSH ECX
005989E4  52                        PUSH EDX
005989E5  6A FE                     PUSH -0x2
005989E7  50                        PUSH EAX
005989E8  8B 86 01 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c01]
005989EE  50                        PUSH EAX
005989EF  E8 DC AA 11 00            CALL 0x006b34d0
LAB_005989f4:
005989F4  8B 86 BD 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bbd]
005989FA  83 F8 FF                  CMP EAX,-0x1
005989FD  74 0D                     JZ 0x00598a0c
005989FF  8B 8E 01 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c01]
00598A05  50                        PUSH EAX
00598A06  51                        PUSH ECX
00598A07  E8 C4 AB 11 00            CALL 0x006b35d0
LAB_00598a0c:
00598A0C  8B 86 6E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c6e]
00598A12  C7 86 6A 1C 00 00 84 00 00 00  MOV dword ptr [ESI + 0x1c6a],0x84
00598A1C  83 E8 07                  SUB EAX,0x7
00598A1F  99                        CDQ
00598A20  2B C2                     SUB EAX,EDX
00598A22  BA BD 01 00 00            MOV EDX,0x1bd
00598A27  D1 F8                     SAR EAX,0x1
00598A29  2B D0                     SUB EDX,EAX
00598A2B  89 96 66 1C 00 00         MOV dword ptr [ESI + 0x1c66],EDX
00598A31  8B 86 4E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c4e]
00598A37  83 F8 FF                  CMP EAX,-0x1
00598A3A  74 17                     JZ 0x00598a53
00598A3C  8B 8E 6A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c6a]
00598A42  51                        PUSH ECX
00598A43  52                        PUSH EDX
00598A44  6A FE                     PUSH -0x2
00598A46  50                        PUSH EAX
00598A47  8B 86 92 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c92]
00598A4D  50                        PUSH EAX
00598A4E  E8 7D AA 11 00            CALL 0x006b34d0
LAB_00598a53:
00598A53  8B 86 4E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c4e]
00598A59  83 F8 FF                  CMP EAX,-0x1
00598A5C  74 0D                     JZ 0x00598a6b
00598A5E  8B 8E 92 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c92]
00598A64  50                        PUSH EAX
00598A65  51                        PUSH ECX
00598A66  E8 65 AB 11 00            CALL 0x006b35d0
LAB_00598a6b:
00598A6B  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00598A71  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598A77  81 C2 40 01 00 00         ADD EDX,0x140
00598A7D  8D 45 FC                  LEA EAX,[EBP + -0x4]
00598A80  52                        PUSH EDX
00598A81  68 75 01 00 00            PUSH 0x175
00598A86  68 BF 01 00 00            PUSH 0x1bf
00598A8B  68 B0 23 40 00            PUSH 0x4023b0
00598A90  6A 32                     PUSH 0x32
00598A92  50                        PUSH EAX
00598A93  51                        PUSH ECX
00598A94  E8 97 98 11 00            CALL 0x006b2330
00598A99  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00598A9C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598AA1  6A 5E                     PUSH 0x5e
00598AA3  6A 13                     PUSH 0x13
00598AA5  6A FF                     PUSH -0x1
00598AA7  52                        PUSH EDX
00598AA8  50                        PUSH EAX
00598AA9  E8 92 AB 11 00            CALL 0x006b3640
00598AAE  6A 33                     PUSH 0x33
00598AB0  E8 7B 5A 19 00            CALL 0x0072e530
00598AB5  33 FF                     XOR EDI,EDI
00598AB7  83 C4 04                  ADD ESP,0x4
00598ABA  3B C7                     CMP EAX,EDI
00598ABC  BB 01 00 00 00            MOV EBX,0x1
00598AC1  74 30                     JZ 0x00598af3
00598AC3  83 C9 FF                  OR ECX,0xffffffff
00598AC6  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598AC9  C6 00 00                  MOV byte ptr [EAX],0x0
00598ACC  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
00598ACF  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
00598AD3  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
00598AD6  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
00598AD9  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
00598ADC  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
00598ADF  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
00598AE2  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
00598AE5  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
00598AE8  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
00598AEB  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
00598AEE  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
00598AF1  EB 02                     JMP 0x00598af5
LAB_00598af3:
00598AF3  33 C0                     XOR EAX,EAX
LAB_00598af5:
00598AF5  3B C7                     CMP EAX,EDI
00598AF7  89 86 27 1F 00 00         MOV dword ptr [ESI + 0x1f27],EAX
00598AFD  0F 84 B0 00 00 00         JZ 0x00598bb3
00598B03  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598B09  57                        PUSH EDI
00598B0A  53                        PUSH EBX
00598B0B  6A 10                     PUSH 0x10
00598B0D  53                        PUSH EBX
00598B0E  68 75 01 00 00            PUSH 0x175
00598B13  68 BF 01 00 00            PUSH 0x1bf
00598B18  6A 5E                     PUSH 0x5e
00598B1A  6A 13                     PUSH 0x13
00598B1C  51                        PUSH ECX
00598B1D  E8 CE 6E 12 00            CALL 0x006bf9f0
00598B22  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
00598B28  50                        PUSH EAX
00598B29  6A 5E                     PUSH 0x5e
00598B2B  6A 13                     PUSH 0x13
00598B2D  6A 04                     PUSH 0x4
00598B2F  E8 69 BA E6 FF            CALL 0x0040459d
00598B34  85 C0                     TEST EAX,EAX
00598B36  74 7B                     JZ 0x00598bb3
00598B38  8B 86 27 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f27]
00598B3E  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
00598B41  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598B44  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
00598B47  8B 86 27 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f27]
00598B4D  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
00598B50  3B C7                     CMP EAX,EDI
00598B52  7C 0C                     JL 0x00598b60
00598B54  50                        PUSH EAX
00598B55  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598B5A  50                        PUSH EAX
00598B5B  E8 D0 A8 11 00            CALL 0x006b3430
LAB_00598b60:
00598B60  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
00598B66  E8 86 CA E6 FF            CALL 0x004055f1
00598B6B  8B 86 2C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b2c]
00598B71  83 F8 FF                  CMP EAX,-0x1
00598B74  74 0D                     JZ 0x00598b83
00598B76  8B 8E 70 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b70]
00598B7C  50                        PUSH EAX
00598B7D  51                        PUSH ECX
00598B7E  E8 6D AF 11 00            CALL 0x006b3af0
LAB_00598b83:
00598B83  8B 86 BD 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bbd]
00598B89  83 F8 FF                  CMP EAX,-0x1
00598B8C  74 0D                     JZ 0x00598b9b
00598B8E  8B 96 01 1C 00 00         MOV EDX,dword ptr [ESI + 0x1c01]
00598B94  50                        PUSH EAX
00598B95  52                        PUSH EDX
00598B96  E8 55 AF 11 00            CALL 0x006b3af0
LAB_00598b9b:
00598B9B  8B 86 4E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c4e]
00598BA1  83 F8 FF                  CMP EAX,-0x1
00598BA4  74 0D                     JZ 0x00598bb3
00598BA6  50                        PUSH EAX
00598BA7  8B 86 92 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c92]
00598BAD  50                        PUSH EAX
00598BAE  E8 3D AF 11 00            CALL 0x006b3af0
LAB_00598bb3:
00598BB3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00598BB6  83 F8 FF                  CMP EAX,-0x1
00598BB9  74 14                     JZ 0x00598bcf
00598BBB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598BC1  50                        PUSH EAX
00598BC2  51                        PUSH ECX
00598BC3  E8 E8 AF 11 00            CALL 0x006b3bb0
00598BC8  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_00598bcf:
00598BCF  8B 86 FF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cff]
00598BD5  BA 08 03 00 00            MOV EDX,0x308
00598BDA  2B D0                     SUB EDX,EAX
00598BDC  C7 86 FB 1C 00 00 63 00 00 00  MOV dword ptr [ESI + 0x1cfb],0x63
00598BE6  89 96 F7 1C 00 00         MOV dword ptr [ESI + 0x1cf7],EDX
00598BEC  8B 86 DF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cdf]
00598BF2  83 F8 FF                  CMP EAX,-0x1
00598BF5  74 17                     JZ 0x00598c0e
00598BF7  8B 8E FB 1C 00 00         MOV ECX,dword ptr [ESI + 0x1cfb]
00598BFD  51                        PUSH ECX
00598BFE  52                        PUSH EDX
00598BFF  6A FE                     PUSH -0x2
00598C01  50                        PUSH EAX
00598C02  8B 86 23 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d23]
00598C08  50                        PUSH EAX
00598C09  E8 C2 A8 11 00            CALL 0x006b34d0
LAB_00598c0e:
00598C0E  8B 86 DF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cdf]
00598C14  83 F8 FF                  CMP EAX,-0x1
00598C17  74 0D                     JZ 0x00598c26
00598C19  8B 8E 23 1D 00 00         MOV ECX,dword ptr [ESI + 0x1d23]
00598C1F  50                        PUSH EAX
00598C20  51                        PUSH ECX
00598C21  E8 AA A9 11 00            CALL 0x006b35d0
LAB_00598c26:
00598C26  8B 86 90 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d90]
00598C2C  BA 08 03 00 00            MOV EDX,0x308
00598C31  2B D0                     SUB EDX,EAX
00598C33  B8 6F 01 00 00            MOV EAX,0x16f
00598C38  89 96 88 1D 00 00         MOV dword ptr [ESI + 0x1d88],EDX
00598C3E  8B 96 94 1D 00 00         MOV EDX,dword ptr [ESI + 0x1d94]
00598C44  2B C2                     SUB EAX,EDX
00598C46  89 86 8C 1D 00 00         MOV dword ptr [ESI + 0x1d8c],EAX
00598C4C  8B 86 70 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d70]
00598C52  83 F8 FF                  CMP EAX,-0x1
00598C55  74 1D                     JZ 0x00598c74
00598C57  8B 8E 8C 1D 00 00         MOV ECX,dword ptr [ESI + 0x1d8c]
00598C5D  8B 96 88 1D 00 00         MOV EDX,dword ptr [ESI + 0x1d88]
00598C63  51                        PUSH ECX
00598C64  52                        PUSH EDX
00598C65  6A FE                     PUSH -0x2
00598C67  50                        PUSH EAX
00598C68  8B 86 B4 1D 00 00         MOV EAX,dword ptr [ESI + 0x1db4]
00598C6E  50                        PUSH EAX
00598C6F  E8 5C A8 11 00            CALL 0x006b34d0
LAB_00598c74:
00598C74  8B 86 70 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d70]
00598C7A  83 F8 FF                  CMP EAX,-0x1
00598C7D  74 0D                     JZ 0x00598c8c
00598C7F  8B 8E B4 1D 00 00         MOV ECX,dword ptr [ESI + 0x1db4]
00598C85  50                        PUSH EAX
00598C86  51                        PUSH ECX
00598C87  E8 44 A9 11 00            CALL 0x006b35d0
LAB_00598c8c:
00598C8C  8B 86 21 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e21]
00598C92  C7 86 1D 1E 00 00 84 00 00 00  MOV dword ptr [ESI + 0x1e1d],0x84
00598C9C  83 E8 07                  SUB EAX,0x7
00598C9F  99                        CDQ
00598CA0  2B C2                     SUB EAX,EDX
00598CA2  BA F8 02 00 00            MOV EDX,0x2f8
00598CA7  D1 F8                     SAR EAX,0x1
00598CA9  2B D0                     SUB EDX,EAX
00598CAB  89 96 19 1E 00 00         MOV dword ptr [ESI + 0x1e19],EDX
00598CB1  8B 86 01 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e01]
00598CB7  83 F8 FF                  CMP EAX,-0x1
00598CBA  74 17                     JZ 0x00598cd3
00598CBC  8B 8E 1D 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e1d]
00598CC2  51                        PUSH ECX
00598CC3  52                        PUSH EDX
00598CC4  6A FE                     PUSH -0x2
00598CC6  50                        PUSH EAX
00598CC7  8B 86 45 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e45]
00598CCD  50                        PUSH EAX
00598CCE  E8 FD A7 11 00            CALL 0x006b34d0
LAB_00598cd3:
00598CD3  8B 86 01 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e01]
00598CD9  83 F8 FF                  CMP EAX,-0x1
00598CDC  74 0D                     JZ 0x00598ceb
00598CDE  8B 8E 45 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e45]
00598CE4  50                        PUSH EAX
00598CE5  51                        PUSH ECX
00598CE6  E8 E5 A8 11 00            CALL 0x006b35d0
LAB_00598ceb:
00598CEB  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00598CF1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598CF7  81 C2 40 01 00 00         ADD EDX,0x140
00598CFD  8D 45 FC                  LEA EAX,[EBP + -0x4]
00598D00  52                        PUSH EDX
00598D01  68 75 01 00 00            PUSH 0x175
00598D06  68 24 01 00 00            PUSH 0x124
00598D0B  68 3F 30 40 00            PUSH 0x40303f
00598D10  6A 32                     PUSH 0x32
00598D12  50                        PUSH EAX
00598D13  51                        PUSH ECX
00598D14  E8 17 96 11 00            CALL 0x006b2330
00598D19  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00598D1C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598D21  6A 5E                     PUSH 0x5e
00598D23  68 E9 01 00 00            PUSH 0x1e9
00598D28  6A FF                     PUSH -0x1
00598D2A  52                        PUSH EDX
00598D2B  50                        PUSH EAX
00598D2C  E8 0F A9 11 00            CALL 0x006b3640
00598D31  6A 33                     PUSH 0x33
00598D33  E8 F8 57 19 00            CALL 0x0072e530
00598D38  83 C4 04                  ADD ESP,0x4
00598D3B  3B C7                     CMP EAX,EDI
00598D3D  74 30                     JZ 0x00598d6f
00598D3F  83 C9 FF                  OR ECX,0xffffffff
00598D42  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598D45  C6 00 00                  MOV byte ptr [EAX],0x0
00598D48  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
00598D4B  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
00598D4F  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
00598D52  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
00598D55  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
00598D58  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
00598D5B  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
00598D5E  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
00598D61  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
00598D64  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
00598D67  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
00598D6A  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
00598D6D  EB 02                     JMP 0x00598d71
LAB_00598d6f:
00598D6F  33 C0                     XOR EAX,EAX
LAB_00598d71:
00598D71  3B C7                     CMP EAX,EDI
00598D73  89 86 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EAX
00598D79  0F 84 B6 00 00 00         JZ 0x00598e35
00598D7F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598D85  57                        PUSH EDI
00598D86  53                        PUSH EBX
00598D87  6A 10                     PUSH 0x10
00598D89  53                        PUSH EBX
00598D8A  68 75 01 00 00            PUSH 0x175
00598D8F  68 24 01 00 00            PUSH 0x124
00598D94  6A 5E                     PUSH 0x5e
00598D96  68 E9 01 00 00            PUSH 0x1e9
00598D9B  51                        PUSH ECX
00598D9C  E8 4F 6C 12 00            CALL 0x006bf9f0
00598DA1  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
00598DA7  50                        PUSH EAX
00598DA8  6A 5E                     PUSH 0x5e
00598DAA  68 E9 01 00 00            PUSH 0x1e9
00598DAF  6A 02                     PUSH 0x2
00598DB1  E8 E7 B7 E6 FF            CALL 0x0040459d
00598DB6  85 C0                     TEST EAX,EAX
00598DB8  74 7B                     JZ 0x00598e35
00598DBA  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
00598DC0  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
00598DC3  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598DC6  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
00598DC9  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
00598DCF  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
00598DD2  3B C7                     CMP EAX,EDI
00598DD4  7C 0C                     JL 0x00598de2
00598DD6  50                        PUSH EAX
00598DD7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598DDC  50                        PUSH EAX
00598DDD  E8 4E A6 11 00            CALL 0x006b3430
LAB_00598de2:
00598DE2  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
00598DE8  E8 04 C8 E6 FF            CALL 0x004055f1
00598DED  8B 86 DF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cdf]
00598DF3  83 F8 FF                  CMP EAX,-0x1
00598DF6  74 0D                     JZ 0x00598e05
00598DF8  8B 8E 23 1D 00 00         MOV ECX,dword ptr [ESI + 0x1d23]
00598DFE  50                        PUSH EAX
00598DFF  51                        PUSH ECX
00598E00  E8 EB AC 11 00            CALL 0x006b3af0
LAB_00598e05:
00598E05  8B 86 70 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d70]
00598E0B  83 F8 FF                  CMP EAX,-0x1
00598E0E  74 0D                     JZ 0x00598e1d
00598E10  8B 96 B4 1D 00 00         MOV EDX,dword ptr [ESI + 0x1db4]
00598E16  50                        PUSH EAX
00598E17  52                        PUSH EDX
00598E18  E8 D3 AC 11 00            CALL 0x006b3af0
LAB_00598e1d:
00598E1D  8B 86 01 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e01]
00598E23  83 F8 FF                  CMP EAX,-0x1
00598E26  74 0D                     JZ 0x00598e35
00598E28  50                        PUSH EAX
00598E29  8B 86 45 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e45]
00598E2F  50                        PUSH EAX
00598E30  E8 BB AC 11 00            CALL 0x006b3af0
LAB_00598e35:
00598E35  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00598E38  83 F8 FF                  CMP EAX,-0x1
00598E3B  74 14                     JZ 0x00598e51
00598E3D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598E43  50                        PUSH EAX
00598E44  51                        PUSH ECX
00598E45  E8 66 AD 11 00            CALL 0x006b3bb0
00598E4A  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_00598e51:
00598E51  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00598E54  B9 02 00 00 00            MOV ECX,0x2
00598E59  C7 85 F4 FD FF FF 5B 25 00 00  MOV dword ptr [EBP + 0xfffffdf4],0x255b
00598E63  89 85 01 FE FF FF         MOV dword ptr [EBP + 0xfffffe01],EAX
00598E69  89 8D 05 FE FF FF         MOV dword ptr [EBP + 0xfffffe05],ECX
00598E6F  C7 85 09 FE FF FF 4A 69 00 00  MOV dword ptr [EBP + 0xfffffe09],0x694a
00598E79  C7 85 1B FE FF FF 5C 25 00 00  MOV dword ptr [EBP + 0xfffffe1b],0x255c
00598E83  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
00598E89  89 8D 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],ECX
00598E8F  C7 85 30 FE FF FF 4E 69 00 00  MOV dword ptr [EBP + 0xfffffe30],0x694e
00598E99  C7 85 42 FE FF FF 5D 25 00 00  MOV dword ptr [EBP + 0xfffffe42],0x255d
00598EA3  89 85 4F FE FF FF         MOV dword ptr [EBP + 0xfffffe4f],EAX
00598EA9  89 8D 53 FE FF FF         MOV dword ptr [EBP + 0xfffffe53],ECX
00598EAF  C7 85 57 FE FF FF 49 69 00 00  MOV dword ptr [EBP + 0xfffffe57],0x6949
00598EB9  E9 C2 03 00 00            JMP 0x00599280
switchD_00597fa6::caseD_a:
00598EBE  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00598EC4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598ECA  81 C2 40 01 00 00         ADD EDX,0x140
00598ED0  8D 45 FC                  LEA EAX,[EBP + -0x4]
00598ED3  52                        PUSH EDX
00598ED4  68 75 01 00 00            PUSH 0x175
00598ED9  68 74 01 00 00            PUSH 0x174
00598EDE  68 81 39 40 00            PUSH 0x403981
00598EE3  6A 32                     PUSH 0x32
00598EE5  50                        PUSH EAX
00598EE6  51                        PUSH ECX
00598EE7  E8 44 94 11 00            CALL 0x006b2330
00598EEC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00598EEF  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598EF4  6A 5E                     PUSH 0x5e
00598EF6  68 99 01 00 00            PUSH 0x199
00598EFB  6A FF                     PUSH -0x1
00598EFD  52                        PUSH EDX
00598EFE  50                        PUSH EAX
00598EFF  E8 3C A7 11 00            CALL 0x006b3640
00598F04  6A 33                     PUSH 0x33
00598F06  E8 25 56 19 00            CALL 0x0072e530
00598F0B  33 FF                     XOR EDI,EDI
00598F0D  83 C4 04                  ADD ESP,0x4
00598F10  3B C7                     CMP EAX,EDI
00598F12  BB 01 00 00 00            MOV EBX,0x1
00598F17  74 30                     JZ 0x00598f49
00598F19  83 C9 FF                  OR ECX,0xffffffff
00598F1C  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598F1F  C6 00 00                  MOV byte ptr [EAX],0x0
00598F22  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
00598F25  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
00598F29  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
00598F2C  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
00598F2F  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
00598F32  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
00598F35  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
00598F38  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
00598F3B  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
00598F3E  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
00598F41  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
00598F44  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
00598F47  EB 02                     JMP 0x00598f4b
LAB_00598f49:
00598F49  33 C0                     XOR EAX,EAX
LAB_00598f4b:
00598F4B  3B C7                     CMP EAX,EDI
00598F4D  89 86 2F 1F 00 00         MOV dword ptr [ESI + 0x1f2f],EAX
00598F53  74 6E                     JZ 0x00598fc3
00598F55  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598F5B  57                        PUSH EDI
00598F5C  53                        PUSH EBX
00598F5D  6A 10                     PUSH 0x10
00598F5F  53                        PUSH EBX
00598F60  68 75 01 00 00            PUSH 0x175
00598F65  68 74 01 00 00            PUSH 0x174
00598F6A  6A 5E                     PUSH 0x5e
00598F6C  68 99 01 00 00            PUSH 0x199
00598F71  51                        PUSH ECX
00598F72  E8 79 6A 12 00            CALL 0x006bf9f0
00598F77  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
00598F7D  50                        PUSH EAX
00598F7E  6A 5E                     PUSH 0x5e
00598F80  68 99 01 00 00            PUSH 0x199
00598F85  6A 02                     PUSH 0x2
00598F87  E8 11 B6 E6 FF            CALL 0x0040459d
00598F8C  85 C0                     TEST EAX,EAX
00598F8E  74 33                     JZ 0x00598fc3
00598F90  8B 86 2F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2f]
00598F96  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
00598F99  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00598F9C  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
00598F9F  8B 86 2F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2f]
00598FA5  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
00598FA8  3B C7                     CMP EAX,EDI
00598FAA  7C 0C                     JL 0x00598fb8
00598FAC  50                        PUSH EAX
00598FAD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00598FB2  50                        PUSH EAX
00598FB3  E8 78 A4 11 00            CALL 0x006b3430
LAB_00598fb8:
00598FB8  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
00598FBE  E8 2E C6 E6 FF            CALL 0x004055f1
LAB_00598fc3:
00598FC3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00598FC6  83 F8 FF                  CMP EAX,-0x1
00598FC9  74 14                     JZ 0x00598fdf
00598FCB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00598FD1  50                        PUSH EAX
00598FD2  51                        PUSH ECX
00598FD3  E8 D8 AB 11 00            CALL 0x006b3bb0
00598FD8  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_00598fdf:
00598FDF  8B 86 FF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cff]
00598FE5  BA 82 01 00 00            MOV EDX,0x182
00598FEA  2B D0                     SUB EDX,EAX
00598FEC  C7 86 FB 1C 00 00 63 00 00 00  MOV dword ptr [ESI + 0x1cfb],0x63
00598FF6  89 96 F7 1C 00 00         MOV dword ptr [ESI + 0x1cf7],EDX
00598FFC  8B 86 DF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cdf]
00599002  83 F8 FF                  CMP EAX,-0x1
00599005  74 17                     JZ 0x0059901e
00599007  8B 8E FB 1C 00 00         MOV ECX,dword ptr [ESI + 0x1cfb]
0059900D  51                        PUSH ECX
0059900E  52                        PUSH EDX
0059900F  6A FE                     PUSH -0x2
00599011  50                        PUSH EAX
00599012  8B 86 23 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d23]
00599018  50                        PUSH EAX
00599019  E8 B2 A4 11 00            CALL 0x006b34d0
LAB_0059901e:
0059901E  8B 86 DF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cdf]
00599024  83 F8 FF                  CMP EAX,-0x1
00599027  74 0D                     JZ 0x00599036
00599029  8B 8E 23 1D 00 00         MOV ECX,dword ptr [ESI + 0x1d23]
0059902F  50                        PUSH EAX
00599030  51                        PUSH ECX
00599031  E8 9A A5 11 00            CALL 0x006b35d0
LAB_00599036:
00599036  8B 86 90 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d90]
0059903C  BA 82 01 00 00            MOV EDX,0x182
00599041  2B D0                     SUB EDX,EAX
00599043  B8 CE 01 00 00            MOV EAX,0x1ce
00599048  89 96 88 1D 00 00         MOV dword ptr [ESI + 0x1d88],EDX
0059904E  8B 96 94 1D 00 00         MOV EDX,dword ptr [ESI + 0x1d94]
00599054  2B C2                     SUB EAX,EDX
00599056  89 86 8C 1D 00 00         MOV dword ptr [ESI + 0x1d8c],EAX
0059905C  8B 86 70 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d70]
00599062  83 F8 FF                  CMP EAX,-0x1
00599065  74 1D                     JZ 0x00599084
00599067  8B 8E 8C 1D 00 00         MOV ECX,dword ptr [ESI + 0x1d8c]
0059906D  8B 96 88 1D 00 00         MOV EDX,dword ptr [ESI + 0x1d88]
00599073  51                        PUSH ECX
00599074  52                        PUSH EDX
00599075  6A FE                     PUSH -0x2
00599077  50                        PUSH EAX
00599078  8B 86 B4 1D 00 00         MOV EAX,dword ptr [ESI + 0x1db4]
0059907E  50                        PUSH EAX
0059907F  E8 4C A4 11 00            CALL 0x006b34d0
LAB_00599084:
00599084  8B 86 70 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d70]
0059908A  83 F8 FF                  CMP EAX,-0x1
0059908D  74 0D                     JZ 0x0059909c
0059908F  8B 8E B4 1D 00 00         MOV ECX,dword ptr [ESI + 0x1db4]
00599095  50                        PUSH EAX
00599096  51                        PUSH ECX
00599097  E8 34 A5 11 00            CALL 0x006b35d0
LAB_0059909c:
0059909C  8B 86 21 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e21]
005990A2  C7 86 1D 1E 00 00 84 00 00 00  MOV dword ptr [ESI + 0x1e1d],0x84
005990AC  83 E8 07                  SUB EAX,0x7
005990AF  99                        CDQ
005990B0  2B C2                     SUB EAX,EDX
005990B2  BA 72 01 00 00            MOV EDX,0x172
005990B7  D1 F8                     SAR EAX,0x1
005990B9  2B D0                     SUB EDX,EAX
005990BB  89 96 19 1E 00 00         MOV dword ptr [ESI + 0x1e19],EDX
005990C1  8B 86 01 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e01]
005990C7  83 F8 FF                  CMP EAX,-0x1
005990CA  74 17                     JZ 0x005990e3
005990CC  8B 8E 1D 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e1d]
005990D2  51                        PUSH ECX
005990D3  52                        PUSH EDX
005990D4  6A FE                     PUSH -0x2
005990D6  50                        PUSH EAX
005990D7  8B 86 45 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e45]
005990DD  50                        PUSH EAX
005990DE  E8 ED A3 11 00            CALL 0x006b34d0
LAB_005990e3:
005990E3  8B 86 01 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e01]
005990E9  83 F8 FF                  CMP EAX,-0x1
005990EC  74 0D                     JZ 0x005990fb
005990EE  8B 8E 45 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e45]
005990F4  50                        PUSH EAX
005990F5  51                        PUSH ECX
005990F6  E8 D5 A4 11 00            CALL 0x006b35d0
LAB_005990fb:
005990FB  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00599101  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00599107  81 C2 40 01 00 00         ADD EDX,0x140
0059910D  8D 45 FC                  LEA EAX,[EBP + -0x4]
00599110  52                        PUSH EDX
00599111  68 75 01 00 00            PUSH 0x175
00599116  68 74 01 00 00            PUSH 0x174
0059911B  68 D2 42 40 00            PUSH 0x4042d2
00599120  6A 32                     PUSH 0x32
00599122  50                        PUSH EAX
00599123  51                        PUSH ECX
00599124  E8 07 92 11 00            CALL 0x006b2330
00599129  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0059912C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00599131  6A 5E                     PUSH 0x5e
00599133  6A 13                     PUSH 0x13
00599135  6A FF                     PUSH -0x1
00599137  52                        PUSH EDX
00599138  50                        PUSH EAX
00599139  E8 02 A5 11 00            CALL 0x006b3640
0059913E  6A 33                     PUSH 0x33
00599140  E8 EB 53 19 00            CALL 0x0072e530
00599145  83 C4 04                  ADD ESP,0x4
00599148  3B C7                     CMP EAX,EDI
0059914A  74 30                     JZ 0x0059917c
0059914C  83 C9 FF                  OR ECX,0xffffffff
0059914F  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00599152  C6 00 00                  MOV byte ptr [EAX],0x0
00599155  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
00599158  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
0059915C  89 78 07                  MOV dword ptr [EAX + 0x7],EDI
0059915F  89 78 0B                  MOV dword ptr [EAX + 0xb],EDI
00599162  89 78 0F                  MOV dword ptr [EAX + 0xf],EDI
00599165  89 58 1B                  MOV dword ptr [EAX + 0x1b],EBX
00599168  89 58 13                  MOV dword ptr [EAX + 0x13],EBX
0059916B  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0059916E  89 78 27                  MOV dword ptr [EAX + 0x27],EDI
00599171  89 78 23                  MOV dword ptr [EAX + 0x23],EDI
00599174  89 58 2F                  MOV dword ptr [EAX + 0x2f],EBX
00599177  89 58 2B                  MOV dword ptr [EAX + 0x2b],EBX
0059917A  EB 02                     JMP 0x0059917e
LAB_0059917c:
0059917C  33 C0                     XOR EAX,EAX
LAB_0059917e:
0059917E  3B C7                     CMP EAX,EDI
00599180  89 86 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EAX
00599186  0F 84 B0 00 00 00         JZ 0x0059923c
0059918C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00599192  57                        PUSH EDI
00599193  53                        PUSH EBX
00599194  6A 10                     PUSH 0x10
00599196  53                        PUSH EBX
00599197  68 75 01 00 00            PUSH 0x175
0059919C  68 74 01 00 00            PUSH 0x174
005991A1  6A 5E                     PUSH 0x5e
005991A3  6A 13                     PUSH 0x13
005991A5  51                        PUSH ECX
005991A6  E8 45 68 12 00            CALL 0x006bf9f0
005991AB  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
005991B1  50                        PUSH EAX
005991B2  6A 5E                     PUSH 0x5e
005991B4  6A 13                     PUSH 0x13
005991B6  6A 04                     PUSH 0x4
005991B8  E8 E0 B3 E6 FF            CALL 0x0040459d
005991BD  85 C0                     TEST EAX,EAX
005991BF  74 7B                     JZ 0x0059923c
005991C1  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
005991C7  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
005991CA  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005991CD  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005991D0  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
005991D6  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005991D9  3B C7                     CMP EAX,EDI
005991DB  7C 0C                     JL 0x005991e9
005991DD  50                        PUSH EAX
005991DE  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005991E3  50                        PUSH EAX
005991E4  E8 47 A2 11 00            CALL 0x006b3430
LAB_005991e9:
005991E9  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
005991EF  E8 FD C3 E6 FF            CALL 0x004055f1
005991F4  8B 86 DF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cdf]
005991FA  83 F8 FF                  CMP EAX,-0x1
005991FD  74 0D                     JZ 0x0059920c
005991FF  8B 8E 23 1D 00 00         MOV ECX,dword ptr [ESI + 0x1d23]
00599205  50                        PUSH EAX
00599206  51                        PUSH ECX
00599207  E8 E4 A8 11 00            CALL 0x006b3af0
LAB_0059920c:
0059920C  8B 86 70 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d70]
00599212  83 F8 FF                  CMP EAX,-0x1
00599215  74 0D                     JZ 0x00599224
00599217  8B 96 B4 1D 00 00         MOV EDX,dword ptr [ESI + 0x1db4]
0059921D  50                        PUSH EAX
0059921E  52                        PUSH EDX
0059921F  E8 CC A8 11 00            CALL 0x006b3af0
LAB_00599224:
00599224  8B 86 01 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e01]
0059922A  83 F8 FF                  CMP EAX,-0x1
0059922D  74 0D                     JZ 0x0059923c
0059922F  50                        PUSH EAX
00599230  8B 86 45 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e45]
00599236  50                        PUSH EAX
00599237  E8 B4 A8 11 00            CALL 0x006b3af0
LAB_0059923c:
0059923C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0059923F  83 F8 FF                  CMP EAX,-0x1
00599242  74 14                     JZ 0x00599258
00599244  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059924A  50                        PUSH EAX
0059924B  51                        PUSH ECX
0059924C  E8 5F A9 11 00            CALL 0x006b3bb0
00599251  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
switchD_005987a8::caseD_7:
00599258  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059925B  B9 02 00 00 00            MOV ECX,0x2
00599260  C7 85 1B FE FF FF B8 24 00 00  MOV dword ptr [EBP + 0xfffffe1b],0x24b8
0059926A  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
00599270  89 8D 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],ECX
00599276  C7 85 30 FE FF FF FF 63 00 00  MOV dword ptr [EBP + 0xfffffe30],0x63ff
LAB_00599280:
00599280  C7 85 B7 FE FF FF 4C 25 00 00  MOV dword ptr [EBP + 0xfffffeb7],0x254c
0059928A  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
LAB_00599290:
00599290  89 8D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ECX
00599296  C7 85 CC FE FF FF 41 69 00 00  MOV dword ptr [EBP + 0xfffffecc],0x6941
005992A0  C7 85 DE FE FF FF BC 24 00 00  MOV dword ptr [EBP + 0xfffffede],0x24bc
005992AA  89 85 EB FE FF FF         MOV dword ptr [EBP + 0xfffffeeb],EAX
005992B0  89 8D EF FE FF FF         MOV dword ptr [EBP + 0xfffffeef],ECX
005992B6  C7 85 F3 FE FF FF 52 69 00 00  MOV dword ptr [EBP + 0xfffffef3],0x6952
switchD_00597fa6::caseD_9:
005992C0  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005992C6  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005992CC  85 C0                     TEST EAX,EAX
005992CE  74 42                     JZ 0x00599312
005992D0  B9 06 00 00 00            MOV ECX,0x6
005992D5  83 C8 FF                  OR EAX,0xffffffff
005992D8  8D BD 94 FD FF FF         LEA EDI,[EBP + 0xfffffd94]
005992DE  6A 00                     PUSH 0x0
005992E0  F3 AB                     STOSD.REP ES:EDI
005992E2  66 AB                     STOSW ES:EDI
005992E4  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005992EA  8D 85 F4 FD FF FF         LEA EAX,[EBP + 0xfffffdf4]
005992F0  6A 00                     PUSH 0x0
005992F2  50                        PUSH EAX
005992F3  6A 00                     PUSH 0x0
005992F5  E8 1D 84 E6 FF            CALL 0x00401717
005992FA  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00599300  8D 8D 94 FD FF FF         LEA ECX,[EBP + 0xfffffd94]
00599306  51                        PUSH ECX
00599307  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
0059930D  E8 3F B8 E6 FF            CALL 0x00404b51
LAB_00599312:
00599312  A1 30 2A 80 00            MOV EAX,[0x00802a30]
00599317  85 C0                     TEST EAX,EAX
00599319  74 47                     JZ 0x00599362
0059931B  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
00599321  85 C9                     TEST ECX,ECX
00599323  74 31                     JZ 0x00599356
00599325  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00599328  83 F9 FF                  CMP ECX,-0x1
0059932B  74 35                     JZ 0x00599362
0059932D  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
00599330  52                        PUSH EDX
00599331  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
00599334  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
00599337  52                        PUSH EDX
00599338  6A FE                     PUSH -0x2
0059933A  51                        PUSH ECX
0059933B  50                        PUSH EAX
0059933C  E8 8F A1 11 00            CALL 0x006b34d0
00599341  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
00599347  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059934D  5F                        POP EDI
0059934E  5E                        POP ESI
0059934F  5B                        POP EBX
00599350  8B E5                     MOV ESP,EBP
00599352  5D                        POP EBP
00599353  C2 04 00                  RET 0x4
LAB_00599356:
00599356  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
0059935C  51                        PUSH ECX
0059935D  E8 FE F6 11 00            CALL 0x006b8a60
LAB_00599362:
00599362  8B 95 B0 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdb0]
00599368  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059936E  5F                        POP EDI
0059936F  5E                        POP ESI
00599370  5B                        POP EBX
00599371  8B E5                     MOV ESP,EBP
00599373  5D                        POP EBP
00599374  C2 04 00                  RET 0x4
LAB_00599377:
00599377  8B 85 B0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdb0]
0059937D  68 B8 C1 7C 00            PUSH 0x7cc1b8
00599382  68 CC 4C 7A 00            PUSH 0x7a4ccc
00599387  56                        PUSH ESI
00599388  57                        PUSH EDI
00599389  68 97 03 00 00            PUSH 0x397
0059938E  68 70 BF 7C 00            PUSH 0x7cbf70
00599393  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00599398  E8 33 41 11 00            CALL 0x006ad4d0
0059939D  83 C4 18                  ADD ESP,0x18
005993A0  85 C0                     TEST EAX,EAX
005993A2  74 01                     JZ 0x005993a5
005993A4  CC                        INT3
LAB_005993a5:
005993A5  68 97 03 00 00            PUSH 0x397
005993AA  68 70 BF 7C 00            PUSH 0x7cbf70
005993AF  57                        PUSH EDI
005993B0  56                        PUSH ESI
005993B1  E8 8A CA 10 00            CALL 0x006a5e40
005993B6  5F                        POP EDI
005993B7  5E                        POP ESI
005993B8  5B                        POP EBX
005993B9  8B E5                     MOV ESP,EBP
005993BB  5D                        POP EBP
005993BC  C2 04 00                  RET 0x4
