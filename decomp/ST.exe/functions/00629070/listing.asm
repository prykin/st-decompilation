STParticleC::InitVisibelFlight:
00629070  55                        PUSH EBP
00629071  8B EC                     MOV EBP,ESP
00629073  83 EC 6C                  SUB ESP,0x6c
00629076  53                        PUSH EBX
00629077  8B 59 14                  MOV EBX,dword ptr [ECX + 0x14]
0062907A  33 C0                     XOR EAX,EAX
0062907C  56                        PUSH ESI
0062907D  8A C7                     MOV AL,BH
0062907F  33 F6                     XOR ESI,ESI
00629081  3D 80 00 00 00            CMP EAX,0x80
00629086  57                        PUSH EDI
00629087  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0062908A  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062908D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00629090  0F 87 BA 01 00 00         JA 0x00629250
00629096  33 D2                     XOR EDX,EDX
00629098  8A 90 10 96 62 00         MOV DL,byte ptr [EAX + 0x629610]
switchD_0062909e::switchD:
0062909E  FF 24 95 EC 95 62 00      JMP dword ptr [EDX*0x4 + 0x6295ec]
switchD_0062909e::caseD_0:
006290A5  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
006290A8  83 FF 04                  CMP EDI,0x4
006290AB  75 33                     JNZ 0x006290e0
006290AD  33 C0                     XOR EAX,EAX
006290AF  BE 98 07 7D 00            MOV ESI,0x7d0798
006290B4  8A 41 14                  MOV AL,byte ptr [ECX + 0x14]
006290B7  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006290BA  8B F8                     MOV EDI,EAX
006290BC  C1 E7 03                  SHL EDI,0x3
006290BF  8B 87 F0 0A 7D 00         MOV EAX,dword ptr [EDI + 0x7d0af0]
006290C5  99                        CDQ
006290C6  2B C2                     SUB EAX,EDX
006290C8  D1 F8                     SAR EAX,0x1
006290CA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006290CD  8B 87 F4 0A 7D 00         MOV EAX,dword ptr [EDI + 0x7d0af4]
006290D3  99                        CDQ
006290D4  2B C2                     SUB EAX,EDX
006290D6  D1 F8                     SAR EAX,0x1
006290D8  83 E8 0E                  SUB EAX,0xe
006290DB  E9 6D 01 00 00            JMP 0x0062924d
LAB_006290e0:
006290E0  85 C0                     TEST EAX,EAX
006290E2  75 20                     JNZ 0x00629104
006290E4  33 D2                     XOR EDX,EDX
006290E6  8A 51 14                  MOV DL,byte ptr [ECX + 0x14]
006290E9  8B F2                     MOV ESI,EDX
006290EB  C1 E6 03                  SHL ESI,0x3
006290EE  8B 86 70 0A 7D 00         MOV EAX,dword ptr [ESI + 0x7d0a70]
006290F4  99                        CDQ
006290F5  2B C2                     SUB EAX,EDX
006290F7  D1 F8                     SAR EAX,0x1
006290F9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006290FC  8B 86 74 0A 7D 00         MOV EAX,dword ptr [ESI + 0x7d0a74]
00629102  EB 1E                     JMP 0x00629122
LAB_00629104:
00629104  33 C0                     XOR EAX,EAX
00629106  8A 41 14                  MOV AL,byte ptr [ECX + 0x14]
00629109  8B F0                     MOV ESI,EAX
0062910B  C1 E6 03                  SHL ESI,0x3
0062910E  8B 86 F0 0B 7D 00         MOV EAX,dword ptr [ESI + 0x7d0bf0]
00629114  99                        CDQ
00629115  2B C2                     SUB EAX,EDX
00629117  D1 F8                     SAR EAX,0x1
00629119  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062911C  8B 86 F4 0B 7D 00         MOV EAX,dword ptr [ESI + 0x7d0bf4]
LAB_00629122:
00629122  99                        CDQ
00629123  2B C2                     SUB EAX,EDX
00629125  D1 F8                     SAR EAX,0x1
00629127  83 E8 0E                  SUB EAX,0xe
0062912A  F6 C7 01                  TEST BH,0x1
0062912D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00629130  74 1F                     JZ 0x00629151
00629132  83 FF 02                  CMP EDI,0x2
00629135  74 0D                     JZ 0x00629144
00629137  BE D8 07 7D 00            MOV ESI,0x7d07d8
0062913C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062913F  E9 0C 01 00 00            JMP 0x00629250
LAB_00629144:
00629144  BE 00 08 7D 00            MOV ESI,0x7d0800
00629149  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062914C  E9 FF 00 00 00            JMP 0x00629250
LAB_00629151:
00629151  83 FF 02                  CMP EDI,0x2
00629154  74 0D                     JZ 0x00629163
00629156  BE 58 07 7D 00            MOV ESI,0x7d0758
0062915B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062915E  E9 ED 00 00 00            JMP 0x00629250
LAB_00629163:
00629163  BE 18 07 7D 00            MOV ESI,0x7d0718
00629168  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062916B  E9 E0 00 00 00            JMP 0x00629250
switchD_0062909e::caseD_2:
00629170  A1 D4 09 7D 00            MOV EAX,[0x007d09d4]
00629175  BE 28 08 7D 00            MOV ESI,0x7d0828
0062917A  99                        CDQ
0062917B  2B C2                     SUB EAX,EDX
0062917D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00629180  D1 F8                     SAR EAX,0x1
00629182  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00629185  83 C0 F2                  ADD EAX,-0xe
00629188  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062918B  E9 C0 00 00 00            JMP 0x00629250
switchD_0062909e::caseD_8:
00629190  A1 D4 09 7D 00            MOV EAX,[0x007d09d4]
00629195  BE 70 08 7D 00            MOV ESI,0x7d0870
0062919A  99                        CDQ
0062919B  2B C2                     SUB EAX,EDX
0062919D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006291A0  D1 F8                     SAR EAX,0x1
006291A2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006291A5  83 C0 F2                  ADD EAX,-0xe
006291A8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006291AB  E9 A0 00 00 00            JMP 0x00629250
switchD_0062909e::caseD_20:
006291B0  33 D2                     XOR EDX,EDX
006291B2  BE 24 09 7D 00            MOV ESI,0x7d0924
006291B7  8A 51 14                  MOV DL,byte ptr [ECX + 0x14]
006291BA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006291BD  8B FA                     MOV EDI,EDX
006291BF  C1 E7 03                  SHL EDI,0x3
006291C2  8B 87 70 0B 7D 00         MOV EAX,dword ptr [EDI + 0x7d0b70]
006291C8  99                        CDQ
006291C9  2B C2                     SUB EAX,EDX
006291CB  D1 F8                     SAR EAX,0x1
006291CD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006291D0  8B 87 74 0B 7D 00         MOV EAX,dword ptr [EDI + 0x7d0b74]
006291D6  99                        CDQ
006291D7  2B C2                     SUB EAX,EDX
006291D9  D1 F8                     SAR EAX,0x1
006291DB  83 E8 0E                  SUB EAX,0xe
006291DE  EB 6D                     JMP 0x0062924d
switchD_0062909e::caseD_80:
006291E0  A1 B8 08 7D 00            MOV EAX,[0x007d08b8]
006291E5  BE BC 08 7D 00            MOV ESI,0x7d08bc
006291EA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006291ED  EB 53                     JMP 0x00629242
switchD_0062909e::caseD_10:
006291EF  33 C0                     XOR EAX,EAX
006291F1  BE C4 08 7D 00            MOV ESI,0x7d08c4
006291F6  8A 41 14                  MOV AL,byte ptr [ECX + 0x14]
006291F9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006291FC  8B F8                     MOV EDI,EAX
006291FE  C1 E7 03                  SHL EDI,0x3
00629201  8B 87 F0 0A 7D 00         MOV EAX,dword ptr [EDI + 0x7d0af0]
00629207  99                        CDQ
00629208  2B C2                     SUB EAX,EDX
0062920A  D1 F8                     SAR EAX,0x1
0062920C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062920F  8B 87 F4 0A 7D 00         MOV EAX,dword ptr [EDI + 0x7d0af4]
00629215  99                        CDQ
00629216  2B C2                     SUB EAX,EDX
00629218  D1 F8                     SAR EAX,0x1
0062921A  83 E8 0E                  SUB EAX,0xe
0062921D  EB 2E                     JMP 0x0062924d
switchD_0062909e::caseD_40:
0062921F  A1 D4 09 7D 00            MOV EAX,[0x007d09d4]
00629224  BE 84 09 7D 00            MOV ESI,0x7d0984
00629229  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062922C  EB 14                     JMP 0x00629242
switchD_0062909e::caseD_4:
0062922E  33 D2                     XOR EDX,EDX
00629230  BE D8 09 7D 00            MOV ESI,0x7d09d8
00629235  8A 51 14                  MOV DL,byte ptr [ECX + 0x14]
00629238  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062923B  8B 04 95 00 0A 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d0a00]
LAB_00629242:
00629242  99                        CDQ
00629243  2B C2                     SUB EAX,EDX
00629245  D1 F8                     SAR EAX,0x1
00629247  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062924A  83 C0 F2                  ADD EAX,-0xe
LAB_0062924d:
0062924D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
switchD_0062909e::caseD_3:
00629250  85 F6                     TEST ESI,ESI
00629252  75 0C                     JNZ 0x00629260
00629254  83 C8 FF                  OR EAX,0xffffffff
00629257  5F                        POP EDI
00629258  5E                        POP ESI
00629259  5B                        POP EBX
0062925A  8B E5                     MOV ESP,EBP
0062925C  5D                        POP EBP
0062925D  C2 04 00                  RET 0x4
LAB_00629260:
00629260  8A 41 14                  MOV AL,byte ptr [ECX + 0x14]
00629263  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00629269  88 45 EC                  MOV byte ptr [EBP + -0x14],AL
0062926C  8D 45 98                  LEA EAX,[EBP + -0x68]
0062926F  8D 55 94                  LEA EDX,[EBP + -0x6c]
00629272  6A 00                     PUSH 0x0
00629274  50                        PUSH EAX
00629275  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
00629278  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062927E  E8 6D 45 10 00            CALL 0x0072d7f0
00629283  8B F0                     MOV ESI,EAX
00629285  83 C4 08                  ADD ESP,0x8
00629288  85 F6                     TEST ESI,ESI
0062928A  0F 85 10 03 00 00         JNZ 0x006295a0
00629290  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00629293  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00629296  50                        PUSH EAX
00629297  50                        PUSH EAX
00629298  81 E1 FF 00 00 00         AND ECX,0xff
0062929E  6A 01                     PUSH 0x1
006292A0  50                        PUSH EAX
006292A1  6A FF                     PUSH -0x1
006292A3  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
006292A6  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
006292AC  50                        PUSH EAX
006292AD  6A 1D                     PUSH 0x1d
006292AF  51                        PUSH ECX
006292B0  E8 3B 08 0E 00            CALL 0x00709af0
006292B5  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006292B8  8B F8                     MOV EDI,EAX
006292BA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006292BD  83 C4 20                  ADD ESP,0x20
006292C0  8B 17                     MOV EDX,dword ptr [EDI]
006292C2  85 C0                     TEST EAX,EAX
006292C4  89 96 B6 00 00 00         MOV dword ptr [ESI + 0xb6],EDX
006292CA  75 0B                     JNZ 0x006292d7
006292CC  33 C0                     XOR EAX,EAX
006292CE  5F                        POP EDI
006292CF  5E                        POP ESI
006292D0  5B                        POP EBX
006292D1  8B E5                     MOV ESP,EBP
006292D3  5D                        POP EBP
006292D4  C2 04 00                  RET 0x4
LAB_006292d7:
006292D7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006292DA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006292DD  89 BE CA 00 00 00         MOV dword ptr [ESI + 0xca],EDI
006292E3  8B 57 0D                  MOV EDX,dword ptr [EDI + 0xd]
006292E6  6A 00                     PUSH 0x0
006292E8  50                        PUSH EAX
006292E9  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
006292EC  51                        PUSH ECX
006292ED  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006292F3  52                        PUSH EDX
006292F4  50                        PUSH EAX
006292F5  8D 9E C6 00 00 00         LEA EBX,[ESI + 0xc6]
006292FB  6A 00                     PUSH 0x0
006292FD  6A 02                     PUSH 0x2
006292FF  53                        PUSH EBX
00629300  E8 5B F3 0B 00            CALL 0x006e8660
00629305  A0 26 73 80 00            MOV AL,[0x00807326]
0062930A  84 C0                     TEST AL,AL
0062930C  74 16                     JZ 0x00629324
0062930E  8B 0B                     MOV ECX,dword ptr [EBX]
00629310  56                        PUSH ESI
00629311  68 F8 49 40 00            PUSH 0x4049f8
00629316  6A 00                     PUSH 0x0
00629318  51                        PUSH ECX
00629319  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062931F  E8 FC 01 0C 00            CALL 0x006e9520
LAB_00629324:
00629324  8B 57 21                  MOV EDX,dword ptr [EDI + 0x21]
00629327  8B 07                     MOV EAX,dword ptr [EDI]
00629329  8B 0B                     MOV ECX,dword ptr [EBX]
0062932B  6A 01                     PUSH 0x1
0062932D  52                        PUSH EDX
0062932E  50                        PUSH EAX
0062932F  6A 00                     PUSH 0x0
00629331  51                        PUSH ECX
00629332  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629338  E8 A3 05 0C 00            CALL 0x006e98e0
0062933D  8B 13                     MOV EDX,dword ptr [EBX]
0062933F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629345  6A 00                     PUSH 0x0
00629347  6A 00                     PUSH 0x0
00629349  52                        PUSH EDX
0062934A  E8 21 0F 0C 00            CALL 0x006ea270
0062934F  DB 46 46                  FILD dword ptr [ESI + 0x46]
00629352  8B 13                     MOV EDX,dword ptr [EBX]
00629354  51                        PUSH ECX
00629355  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062935B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00629361  D9 55 E4                  FST float ptr [EBP + -0x1c]
00629364  D9 5E 6A                  FSTP float ptr [ESI + 0x6a]
00629367  DB 46 4A                  FILD dword ptr [ESI + 0x4a]
0062936A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0062936D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00629373  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00629379  D9 55 F0                  FST float ptr [EBP + -0x10]
0062937C  D9 5E 6E                  FSTP float ptr [ESI + 0x6e]
0062937F  DB 46 4E                  FILD dword ptr [ESI + 0x4e]
00629382  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00629385  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062938B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00629391  D9 56 72                  FST float ptr [ESI + 0x72]
00629394  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0062939A  D9 1C 24                  FSTP float ptr [ESP]
0062939D  50                        PUSH EAX
0062939E  51                        PUSH ECX
0062939F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006293A5  52                        PUSH EDX
006293A6  E8 B5 15 0C 00            CALL 0x006ea960
006293AB  8B 03                     MOV EAX,dword ptr [EBX]
006293AD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006293B3  6A 00                     PUSH 0x0
006293B5  50                        PUSH EAX
006293B6  E8 E5 16 0C 00            CALL 0x006eaaa0
006293BB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006293BE  C6 86 C1 00 00 00 01      MOV byte ptr [ESI + 0xc1],0x1
006293C5  83 F8 04                  CMP EAX,0x4
006293C8  75 2A                     JNZ 0x006293f4
006293CA  8B 0B                     MOV ECX,dword ptr [EBX]
006293CC  6A FF                     PUSH -0x1
006293CE  6A FF                     PUSH -0x1
006293D0  6A 01                     PUSH 0x1
006293D2  51                        PUSH ECX
006293D3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006293D9  E8 02 11 0C 00            CALL 0x006ea4e0
006293DE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006293E1  85 C0                     TEST EAX,EAX
006293E3  76 0F                     JBE 0x006293f4
006293E5  8B 13                     MOV EDX,dword ptr [EBX]
006293E7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006293ED  50                        PUSH EAX
006293EE  52                        PUSH EDX
006293EF  E8 6C 10 0C 00            CALL 0x006ea460
LAB_006293f4:
006293F4  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
006293FA  85 FF                     TEST EDI,EDI
006293FC  0F 84 8A 01 00 00         JZ 0x0062958c
00629402  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
00629405  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062940A  85 C9                     TEST ECX,ECX
0062940C  7C 14                     JL 0x00629422
0062940E  F7 E9                     IMUL ECX
00629410  C1 FA 06                  SAR EDX,0x6
00629413  8B C2                     MOV EAX,EDX
00629415  C1 E8 1F                  SHR EAX,0x1f
00629418  03 D0                     ADD EDX,EAX
0062941A  0F BF CA                  MOVSX ECX,DX
0062941D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00629420  EB 13                     JMP 0x00629435
LAB_00629422:
00629422  F7 E9                     IMUL ECX
00629424  C1 FA 06                  SAR EDX,0x6
00629427  8B C2                     MOV EAX,EDX
00629429  C1 E8 1F                  SHR EAX,0x1f
0062942C  03 D0                     ADD EDX,EAX
0062942E  0F BF C2                  MOVSX EAX,DX
00629431  48                        DEC EAX
00629432  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00629435:
00629435  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
00629438  B8 79 19 8C 02            MOV EAX,0x28c1979
0062943D  85 C9                     TEST ECX,ECX
0062943F  7C 10                     JL 0x00629451
00629441  F7 E9                     IMUL ECX
00629443  D1 FA                     SAR EDX,0x1
00629445  8B CA                     MOV ECX,EDX
00629447  C1 E9 1F                  SHR ECX,0x1f
0062944A  03 D1                     ADD EDX,ECX
0062944C  0F BF DA                  MOVSX EBX,DX
0062944F  EB 0F                     JMP 0x00629460
LAB_00629451:
00629451  F7 E9                     IMUL ECX
00629453  D1 FA                     SAR EDX,0x1
00629455  8B C2                     MOV EAX,EDX
00629457  C1 E8 1F                  SHR EAX,0x1f
0062945A  03 D0                     ADD EDX,EAX
0062945C  0F BF DA                  MOVSX EBX,DX
0062945F  4B                        DEC EBX
LAB_00629460:
00629460  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
00629463  B8 79 19 8C 02            MOV EAX,0x28c1979
00629468  85 C9                     TEST ECX,ECX
0062946A  7C 10                     JL 0x0062947c
0062946C  F7 E9                     IMUL ECX
0062946E  D1 FA                     SAR EDX,0x1
00629470  8B CA                     MOV ECX,EDX
00629472  C1 E9 1F                  SHR ECX,0x1f
00629475  03 D1                     ADD EDX,ECX
00629477  0F BF C2                  MOVSX EAX,DX
0062947A  EB 0F                     JMP 0x0062948b
LAB_0062947c:
0062947C  F7 E9                     IMUL ECX
0062947E  D1 FA                     SAR EDX,0x1
00629480  8B C2                     MOV EAX,EDX
00629482  C1 E8 1F                  SHR EAX,0x1f
00629485  03 D0                     ADD EDX,EAX
00629487  0F BF C2                  MOVSX EAX,DX
0062948A  48                        DEC EAX
LAB_0062948b:
0062948B  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00629492  0F 84 94 00 00 00         JZ 0x0062952c
00629498  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
0062949E  85 C9                     TEST ECX,ECX
006294A0  0F 84 86 00 00 00         JZ 0x0062952c
006294A6  8D 4D D8                  LEA ECX,[EBP + -0x28]
006294A9  8D 55 DC                  LEA EDX,[EBP + -0x24]
006294AC  51                        PUSH ECX
006294AD  52                        PUSH EDX
006294AE  53                        PUSH EBX
006294AF  50                        PUSH EAX
006294B0  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
006294B6  8B CF                     MOV ECX,EDI
006294B8  50                        PUSH EAX
006294B9  E8 95 AA DD FF            CALL 0x00403f53
006294BE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006294C1  85 C9                     TEST ECX,ECX
006294C3  7C 67                     JL 0x0062952c
006294C5  83 F9 05                  CMP ECX,0x5
006294C8  7D 62                     JGE 0x0062952c
006294CA  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006294CD  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006294D0  85 D2                     TEST EDX,EDX
006294D2  7C 1E                     JL 0x006294f2
006294D4  3B 57 30                  CMP EDX,dword ptr [EDI + 0x30]
006294D7  7D 19                     JGE 0x006294f2
006294D9  8B 04 8D D0 AE 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x79aed0]
006294E0  03 C3                     ADD EAX,EBX
006294E2  85 C0                     TEST EAX,EAX
006294E4  7C 0C                     JL 0x006294f2
006294E6  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
006294E9  7D 07                     JGE 0x006294f2
006294EB  B8 01 00 00 00            MOV EAX,0x1
006294F0  EB 02                     JMP 0x006294f4
LAB_006294f2:
006294F2  33 C0                     XOR EAX,EAX
LAB_006294f4:
006294F4  85 C0                     TEST EAX,EAX
006294F6  74 26                     JZ 0x0062951e
006294F8  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
006294FB  85 C0                     TEST EAX,EAX
006294FD  74 1F                     JZ 0x0062951e
006294FF  8B 0C 8D D0 AE 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x79aed0]
00629506  03 CB                     ADD ECX,EBX
00629508  0F AF 4F 30               IMUL ECX,dword ptr [EDI + 0x30]
0062950C  03 C8                     ADD ECX,EAX
0062950E  33 C0                     XOR EAX,EAX
00629510  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
00629513  33 D2                     XOR EDX,EDX
00629515  85 C0                     TEST EAX,EAX
00629517  0F 95 C2                  SETNZ DL
0062951A  8B C2                     MOV EAX,EDX
0062951C  EB 13                     JMP 0x00629531
LAB_0062951e:
0062951E  83 C8 FF                  OR EAX,0xffffffff
00629521  33 D2                     XOR EDX,EDX
00629523  85 C0                     TEST EAX,EAX
00629525  0F 95 C2                  SETNZ DL
00629528  8B C2                     MOV EAX,EDX
0062952A  EB 05                     JMP 0x00629531
LAB_0062952c:
0062952C  B8 01 00 00 00            MOV EAX,0x1
LAB_00629531:
00629531  83 F8 01                  CMP EAX,0x1
00629534  8A 86 C1 00 00 00         MOV AL,byte ptr [ESI + 0xc1]
0062953A  75 33                     JNZ 0x0062956f
0062953C  84 C0                     TEST AL,AL
0062953E  75 4C                     JNZ 0x0062958c
00629540  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
00629546  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062954C  6A 00                     PUSH 0x0
0062954E  50                        PUSH EAX
0062954F  E8 4C 15 0C 00            CALL 0x006eaaa0
00629554  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00629557  C6 86 C1 00 00 00 01      MOV byte ptr [ESI + 0xc1],0x1
0062955E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00629564  33 C0                     XOR EAX,EAX
00629566  5F                        POP EDI
00629567  5E                        POP ESI
00629568  5B                        POP EBX
00629569  8B E5                     MOV ESP,EBP
0062956B  5D                        POP EBP
0062956C  C2 04 00                  RET 0x4
LAB_0062956f:
0062956F  3C 01                     CMP AL,0x1
00629571  75 19                     JNZ 0x0062958c
00629573  8B 8E C6 00 00 00         MOV ECX,dword ptr [ESI + 0xc6]
00629579  51                        PUSH ECX
0062957A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629580  E8 DB 15 0C 00            CALL 0x006eab60
00629585  C6 86 C1 00 00 00 00      MOV byte ptr [ESI + 0xc1],0x0
LAB_0062958c:
0062958C  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0062958F  33 C0                     XOR EAX,EAX
00629591  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00629597  5F                        POP EDI
00629598  5E                        POP ESI
00629599  5B                        POP EBX
0062959A  8B E5                     MOV ESP,EBP
0062959C  5D                        POP EBP
0062959D  C2 04 00                  RET 0x4
LAB_006295a0:
006295A0  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006295A3  68 94 13 7D 00            PUSH 0x7d1394
006295A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
006295AD  56                        PUSH ESI
006295AE  6A 00                     PUSH 0x0
006295B0  68 AC 02 00 00            PUSH 0x2ac
006295B5  68 54 13 7D 00            PUSH 0x7d1354
006295BA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006295BF  E8 0C 3F 08 00            CALL 0x006ad4d0
006295C4  83 C4 18                  ADD ESP,0x18
006295C7  85 C0                     TEST EAX,EAX
006295C9  74 01                     JZ 0x006295cc
006295CB  CC                        INT3
LAB_006295cc:
006295CC  68 AE 02 00 00            PUSH 0x2ae
006295D1  68 54 13 7D 00            PUSH 0x7d1354
006295D6  6A 00                     PUSH 0x0
006295D8  56                        PUSH ESI
006295D9  E8 62 C8 07 00            CALL 0x006a5e40
006295DE  5F                        POP EDI
006295DF  5E                        POP ESI
006295E0  B8 FF FF 00 00            MOV EAX,0xffff
006295E5  5B                        POP EBX
006295E6  8B E5                     MOV ESP,EBP
006295E8  5D                        POP EBP
006295E9  C2 04 00                  RET 0x4
