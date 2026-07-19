STGenBombC::LoadImagSpr:
006132F0  55                        PUSH EBP
006132F1  8B EC                     MOV EBP,ESP
006132F3  83 EC 58                  SUB ESP,0x58
006132F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006132FB  53                        PUSH EBX
006132FC  56                        PUSH ESI
006132FD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00613300  33 DB                     XOR EBX,EBX
00613302  57                        PUSH EDI
00613303  8D 55 AC                  LEA EDX,[EBP + -0x54]
00613306  8D 4D A8                  LEA ECX,[EBP + -0x58]
00613309  53                        PUSH EBX
0061330A  52                        PUSH EDX
0061330B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0061330E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00613311  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00613317  E8 D4 A4 11 00            CALL 0x0072d7f0
0061331C  8B F0                     MOV ESI,EAX
0061331E  83 C4 08                  ADD ESP,0x8
00613321  3B F3                     CMP ESI,EBX
00613323  0F 85 C9 04 00 00         JNZ 0x006137f2
00613329  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0061332C  39 9E 52 02 00 00         CMP dword ptr [ESI + 0x252],EBX
00613332  75 78                     JNZ 0x006133ac
00613334  6A 40                     PUSH 0x40
00613336  E8 F5 B1 11 00            CALL 0x0072e530
0061333B  83 C4 04                  ADD ESP,0x4
0061333E  3B C3                     CMP EAX,EBX
00613340  74 09                     JZ 0x0061334b
00613342  8B C8                     MOV ECX,EAX
00613344  E8 CD DF DE FF            CALL 0x00401316
00613349  EB 02                     JMP 0x0061334d
LAB_0061334b:
0061334B  33 C0                     XOR EAX,EAX
LAB_0061334d:
0061334D  3B C3                     CMP EAX,EBX
0061334F  89 86 52 02 00 00         MOV dword ptr [ESI + 0x252],EAX
00613355  75 0C                     JNZ 0x00613363
00613357  83 C8 FF                  OR EAX,0xffffffff
0061335A  5F                        POP EDI
0061335B  5E                        POP ESI
0061335C  5B                        POP EBX
0061335D  8B E5                     MOV ESP,EBP
0061335F  5D                        POP EBP
00613360  C2 08 00                  RET 0x8
LAB_00613363:
00613363  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
00613369  6A 11                     PUSH 0x11
0061336B  68 8C 00 00 00            PUSH 0x8c
00613370  68 B4 00 00 00            PUSH 0xb4
00613375  53                        PUSH EBX
00613376  6A 45                     PUSH 0x45
00613378  6A 5A                     PUSH 0x5a
0061337A  51                        PUSH ECX
0061337B  8B C8                     MOV ECX,EAX
0061337D  E8 F9 1F DF FF            CALL 0x0040537b
00613382  85 C0                     TEST EAX,EAX
00613384  74 26                     JZ 0x006133ac
00613386  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0061338C  68 09 05 00 00            PUSH 0x509
00613391  68 18 00 7D 00            PUSH 0x7d0018
00613396  52                        PUSH EDX
00613397  6A FF                     PUSH -0x1
00613399  E8 A2 2A 09 00            CALL 0x006a5e40
0061339E  B8 FF FF 00 00            MOV EAX,0xffff
006133A3  5F                        POP EDI
006133A4  5E                        POP ESI
006133A5  5B                        POP EBX
006133A6  8B E5                     MOV ESP,EBP
006133A8  5D                        POP EBP
006133A9  C2 08 00                  RET 0x8
LAB_006133ac:
006133AC  39 5D 08                  CMP dword ptr [EBP + 0x8],EBX
006133AF  0F 84 FC 00 00 00         JZ 0x006134b1
006133B5  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
006133BB  2B C3                     SUB EAX,EBX
006133BD  74 42                     JZ 0x00613401
006133BF  48                        DEC EAX
006133C0  74 12                     JZ 0x006133d4
006133C2  48                        DEC EAX
006133C3  75 5F                     JNZ 0x00613424
006133C5  A1 74 67 80 00            MOV EAX,[0x00806774]
006133CA  6A 1D                     PUSH 0x1d
006133CC  68 B4 F8 7C 00            PUSH 0x7cf8b4
006133D1  50                        PUSH EAX
006133D2  EB 0E                     JMP 0x006133e2
LAB_006133d4:
006133D4  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
006133DA  6A 1D                     PUSH 0x1d
006133DC  68 BC F8 7C 00            PUSH 0x7cf8bc
006133E1  51                        PUSH ECX
LAB_006133e2:
006133E2  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006133E8  6A 0D                     PUSH 0xd
006133EA  E8 94 0D DF FF            CALL 0x00404183
006133EF  85 C0                     TEST EAX,EAX
006133F1  74 31                     JZ 0x00613424
006133F3  B8 FF FF 00 00            MOV EAX,0xffff
006133F8  5F                        POP EDI
006133F9  5E                        POP ESI
006133FA  5B                        POP EBX
006133FB  8B E5                     MOV ESP,EBP
006133FD  5D                        POP EBP
006133FE  C2 08 00                  RET 0x8
LAB_00613401:
00613401  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00613407  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
0061340D  6A 1D                     PUSH 0x1d
0061340F  68 B4 F8 7C 00            PUSH 0x7cf8b4
00613414  52                        PUSH EDX
00613415  6A 0D                     PUSH 0xd
00613417  E8 67 0D DF FF            CALL 0x00404183
0061341C  85 C0                     TEST EAX,EAX
0061341E  0F 85 0B 04 00 00         JNZ 0x0061382f
LAB_00613424:
00613424  8B 86 37 02 00 00         MOV EAX,dword ptr [ESI + 0x237]
0061342A  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00613430  50                        PUSH EAX
00613431  6A 0D                     PUSH 0xd
00613433  E8 2C DC DE FF            CALL 0x00401064
00613438  DB 86 33 02 00 00         FILD dword ptr [ESI + 0x233]
0061343E  51                        PUSH ECX
0061343F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00613445  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061344B  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00613451  D9 1C 24                  FSTP float ptr [ESP]
00613454  DB 86 2F 02 00 00         FILD dword ptr [ESI + 0x22f]
0061345A  51                        PUSH ECX
0061345B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00613461  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00613467  D9 1C 24                  FSTP float ptr [ESP]
0061346A  DB 86 2B 02 00 00         FILD dword ptr [ESI + 0x22b]
00613470  51                        PUSH ECX
00613471  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00613477  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061347D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00613483  D9 1C 24                  FSTP float ptr [ESP]
00613486  E8 4E 11 DF FF            CALL 0x004045d9
0061348B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00613491  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00613497  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
0061349D  52                        PUSH EDX
0061349E  6A 0D                     PUSH 0xd
006134A0  E8 9B 1D DF FF            CALL 0x00405240
006134A5  C6 86 50 02 00 00 01      MOV byte ptr [ESI + 0x250],0x1
006134AC  E9 93 01 00 00            JMP 0x00613644
LAB_006134b1:
006134B1  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
006134B4  0F 85 91 01 00 00         JNZ 0x0061364b
006134BA  A1 74 67 80 00            MOV EAX,[0x00806774]
006134BF  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006134C5  6A 1D                     PUSH 0x1d
006134C7  68 CC F8 7C 00            PUSH 0x7cf8cc
006134CC  50                        PUSH EAX
006134CD  6A 0D                     PUSH 0xd
006134CF  E8 AF 0C DF FF            CALL 0x00404183
006134D4  85 C0                     TEST EAX,EAX
006134D6  0F 85 53 03 00 00         JNZ 0x0061382f
006134DC  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
006134E2  6A 1D                     PUSH 0x1d
006134E4  68 C4 F8 7C 00            PUSH 0x7cf8c4
006134E9  51                        PUSH ECX
006134EA  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006134F0  6A 0F                     PUSH 0xf
006134F2  E8 8C 0C DF FF            CALL 0x00404183
006134F7  85 C0                     TEST EAX,EAX
006134F9  0F 85 30 03 00 00         JNZ 0x0061382f
006134FF  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00613505  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
0061350B  6A 1D                     PUSH 0x1d
0061350D  68 D4 F8 7C 00            PUSH 0x7cf8d4
00613512  52                        PUSH EDX
00613513  6A 0E                     PUSH 0xe
00613515  E8 69 0C DF FF            CALL 0x00404183
0061351A  85 C0                     TEST EAX,EAX
0061351C  0F 85 0D 03 00 00         JNZ 0x0061382f
00613522  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00613527  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0061352D  51                        PUSH ECX
0061352E  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00613534  6A 0E                     PUSH 0xe
00613536  E8 05 1D DF FF            CALL 0x00405240
0061353B  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00613541  6A 53                     PUSH 0x53
00613543  6A 5A                     PUSH 0x5a
00613545  6A 01                     PUSH 0x1
00613547  C6 86 51 02 00 00 01      MOV byte ptr [ESI + 0x251],0x1
0061354E  E8 79 1D DF FF            CALL 0x004052cc
00613553  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00613559  50                        PUSH EAX
0061355A  E8 81 6F 0D 00            CALL 0x006ea4e0
0061355F  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00613565  6A 0F                     PUSH 0xf
00613567  E8 68 ED DE FF            CALL 0x004022d4
0061356C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00613572  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00613578  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0061357E  50                        PUSH EAX
0061357F  6A 0D                     PUSH 0xd
00613581  E8 BA 1C DF FF            CALL 0x00405240
00613586  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0061358C  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
00613590  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00613596  52                        PUSH EDX
00613597  53                        PUSH EBX
00613598  E8 2F 1D DF FF            CALL 0x004052cc
0061359D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006135A3  50                        PUSH EAX
006135A4  E8 A7 5D 0D 00            CALL 0x006e9350
006135A9  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006135AF  C6 86 50 02 00 00 01      MOV byte ptr [ESI + 0x250],0x1
006135B6  A1 B8 32 80 00            MOV EAX,[0x008032b8]
006135BB  6A 10                     PUSH 0x10
006135BD  50                        PUSH EAX
006135BE  E8 2B 0F DF FF            CALL 0x004044ee
006135C3  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006135C9  53                        PUSH EBX
006135CA  6A 0D                     PUSH 0xd
006135CC  89 9E 37 02 00 00         MOV dword ptr [ESI + 0x237],EBX
006135D2  E8 8D DA DE FF            CALL 0x00401064
006135D7  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006135DD  6A 0D                     PUSH 0xd
006135DF  E8 D8 FA DE FF            CALL 0x004030bc
006135E4  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006135EA  6A 0E                     PUSH 0xe
006135EC  E8 42 FC DE FF            CALL 0x00403233
006135F1  DB 86 33 02 00 00         FILD dword ptr [ESI + 0x233]
006135F7  51                        PUSH ECX
006135F8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006135FE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00613604  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0061360A  D9 1C 24                  FSTP float ptr [ESP]
0061360D  DB 86 2F 02 00 00         FILD dword ptr [ESI + 0x22f]
00613613  51                        PUSH ECX
00613614  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061361A  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00613620  D9 1C 24                  FSTP float ptr [ESP]
00613623  DB 86 2B 02 00 00         FILD dword ptr [ESI + 0x22b]
00613629  51                        PUSH ECX
0061362A  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00613630  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00613636  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061363C  D9 1C 24                  FSTP float ptr [ESP]
0061363F  E8 95 0F DF FF            CALL 0x004045d9
LAB_00613644:
00613644  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_0061364b:
0061364B  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00613651  3B FB                     CMP EDI,EBX
00613653  0F 84 85 01 00 00         JZ 0x006137de
00613659  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
0061365F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00613664  3B CB                     CMP ECX,EBX
00613666  7C 14                     JL 0x0061367c
00613668  F7 E9                     IMUL ECX
0061366A  C1 FA 06                  SAR EDX,0x6
0061366D  8B CA                     MOV ECX,EDX
0061366F  C1 E9 1F                  SHR ECX,0x1f
00613672  03 D1                     ADD EDX,ECX
00613674  0F BF D2                  MOVSX EDX,DX
00613677  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061367A  EB 13                     JMP 0x0061368f
LAB_0061367c:
0061367C  F7 E9                     IMUL ECX
0061367E  C1 FA 06                  SAR EDX,0x6
00613681  8B C2                     MOV EAX,EDX
00613683  C1 E8 1F                  SHR EAX,0x1f
00613686  03 D0                     ADD EDX,EAX
00613688  0F BF C2                  MOVSX EAX,DX
0061368B  48                        DEC EAX
0061368C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0061368f:
0061368F  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
00613695  B8 79 19 8C 02            MOV EAX,0x28c1979
0061369A  3B CB                     CMP ECX,EBX
0061369C  7C 10                     JL 0x006136ae
0061369E  F7 E9                     IMUL ECX
006136A0  D1 FA                     SAR EDX,0x1
006136A2  8B CA                     MOV ECX,EDX
006136A4  C1 E9 1F                  SHR ECX,0x1f
006136A7  03 D1                     ADD EDX,ECX
006136A9  0F BF DA                  MOVSX EBX,DX
006136AC  EB 0F                     JMP 0x006136bd
LAB_006136ae:
006136AE  F7 E9                     IMUL ECX
006136B0  D1 FA                     SAR EDX,0x1
006136B2  8B C2                     MOV EAX,EDX
006136B4  C1 E8 1F                  SHR EAX,0x1f
006136B7  03 D0                     ADD EDX,EAX
006136B9  0F BF DA                  MOVSX EBX,DX
006136BC  4B                        DEC EBX
LAB_006136bd:
006136BD  8B 8E 2B 02 00 00         MOV ECX,dword ptr [ESI + 0x22b]
006136C3  B8 79 19 8C 02            MOV EAX,0x28c1979
006136C8  85 C9                     TEST ECX,ECX
006136CA  7C 10                     JL 0x006136dc
006136CC  F7 E9                     IMUL ECX
006136CE  D1 FA                     SAR EDX,0x1
006136D0  8B CA                     MOV ECX,EDX
006136D2  C1 E9 1F                  SHR ECX,0x1f
006136D5  03 D1                     ADD EDX,ECX
006136D7  0F BF C2                  MOVSX EAX,DX
006136DA  EB 0F                     JMP 0x006136eb
LAB_006136dc:
006136DC  F7 E9                     IMUL ECX
006136DE  D1 FA                     SAR EDX,0x1
006136E0  8B C2                     MOV EAX,EDX
006136E2  C1 E8 1F                  SHR EAX,0x1f
006136E5  03 D0                     ADD EDX,EAX
006136E7  0F BF C2                  MOVSX EAX,DX
006136EA  48                        DEC EAX
LAB_006136eb:
006136EB  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
006136F2  0F 84 94 00 00 00         JZ 0x0061378c
006136F8  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
006136FE  85 C9                     TEST ECX,ECX
00613700  0F 84 86 00 00 00         JZ 0x0061378c
00613706  8D 4D EC                  LEA ECX,[EBP + -0x14]
00613709  8D 55 F0                  LEA EDX,[EBP + -0x10]
0061370C  51                        PUSH ECX
0061370D  52                        PUSH EDX
0061370E  53                        PUSH EBX
0061370F  50                        PUSH EAX
00613710  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00613716  8B CF                     MOV ECX,EDI
00613718  50                        PUSH EAX
00613719  E8 35 08 DF FF            CALL 0x00403f53
0061371E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00613721  85 C9                     TEST ECX,ECX
00613723  7C 67                     JL 0x0061378c
00613725  83 F9 05                  CMP ECX,0x5
00613728  7D 62                     JGE 0x0061378c
0061372A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0061372D  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00613730  85 D2                     TEST EDX,EDX
00613732  7C 1E                     JL 0x00613752
00613734  3B 57 30                  CMP EDX,dword ptr [EDI + 0x30]
00613737  7D 19                     JGE 0x00613752
00613739  8B 04 8D D0 AE 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x79aed0]
00613740  03 C3                     ADD EAX,EBX
00613742  85 C0                     TEST EAX,EAX
00613744  7C 0C                     JL 0x00613752
00613746  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00613749  7D 07                     JGE 0x00613752
0061374B  B8 01 00 00 00            MOV EAX,0x1
00613750  EB 02                     JMP 0x00613754
LAB_00613752:
00613752  33 C0                     XOR EAX,EAX
LAB_00613754:
00613754  85 C0                     TEST EAX,EAX
00613756  74 26                     JZ 0x0061377e
00613758  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
0061375B  85 C0                     TEST EAX,EAX
0061375D  74 1F                     JZ 0x0061377e
0061375F  8B 0C 8D D0 AE 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x79aed0]
00613766  03 CB                     ADD ECX,EBX
00613768  0F AF 4F 30               IMUL ECX,dword ptr [EDI + 0x30]
0061376C  03 C8                     ADD ECX,EAX
0061376E  33 C0                     XOR EAX,EAX
00613770  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
00613773  33 D2                     XOR EDX,EDX
00613775  85 C0                     TEST EAX,EAX
00613777  0F 95 C2                  SETNZ DL
0061377A  8B C2                     MOV EAX,EDX
0061377C  EB 13                     JMP 0x00613791
LAB_0061377e:
0061377E  83 C8 FF                  OR EAX,0xffffffff
00613781  33 D2                     XOR EDX,EDX
00613783  85 C0                     TEST EAX,EAX
00613785  0F 95 C2                  SETNZ DL
00613788  8B C2                     MOV EAX,EDX
0061378A  EB 05                     JMP 0x00613791
LAB_0061378c:
0061378C  B8 01 00 00 00            MOV EAX,0x1
LAB_00613791:
00613791  83 F8 01                  CMP EAX,0x1
00613794  8A 86 50 02 00 00         MOV AL,byte ptr [ESI + 0x250]
0061379A  75 2C                     JNZ 0x006137c8
0061379C  84 C0                     TEST AL,AL
0061379E  75 3E                     JNZ 0x006137de
006137A0  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006137A6  6A 00                     PUSH 0x0
006137A8  E8 D5 F1 DE FF            CALL 0x00402982
006137AD  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006137B0  C6 86 50 02 00 00 01      MOV byte ptr [ESI + 0x250],0x1
006137B7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006137BC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006137BF  5F                        POP EDI
006137C0  5E                        POP ESI
006137C1  5B                        POP EBX
006137C2  8B E5                     MOV ESP,EBP
006137C4  5D                        POP EBP
006137C5  C2 08 00                  RET 0x8
LAB_006137c8:
006137C8  84 C0                     TEST AL,AL
006137CA  74 12                     JZ 0x006137de
006137CC  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
006137D2  E8 38 05 DF FF            CALL 0x00403d0f
006137D7  C6 86 50 02 00 00 00      MOV byte ptr [ESI + 0x250],0x0
LAB_006137de:
006137DE  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006137E1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006137E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006137E9  5F                        POP EDI
006137EA  5E                        POP ESI
006137EB  5B                        POP EBX
006137EC  8B E5                     MOV ESP,EBP
006137EE  5D                        POP EBP
006137EF  C2 08 00                  RET 0x8
LAB_006137f2:
006137F2  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006137F5  68 3C 00 7D 00            PUSH 0x7d003c
006137FA  68 CC 4C 7A 00            PUSH 0x7a4ccc
006137FF  56                        PUSH ESI
00613800  53                        PUSH EBX
00613801  68 4B 05 00 00            PUSH 0x54b
00613806  68 18 00 7D 00            PUSH 0x7d0018
0061380B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00613811  E8 BA 9C 09 00            CALL 0x006ad4d0
00613816  83 C4 18                  ADD ESP,0x18
00613819  85 C0                     TEST EAX,EAX
0061381B  74 01                     JZ 0x0061381e
0061381D  CC                        INT3
LAB_0061381e:
0061381E  68 4D 05 00 00            PUSH 0x54d
00613823  68 18 00 7D 00            PUSH 0x7d0018
00613828  53                        PUSH EBX
00613829  56                        PUSH ESI
0061382A  E8 11 26 09 00            CALL 0x006a5e40
LAB_0061382f:
0061382F  5F                        POP EDI
00613830  5E                        POP ESI
00613831  B8 FF FF 00 00            MOV EAX,0xffff
00613836  5B                        POP EBX
00613837  8B E5                     MOV ESP,EBP
00613839  5D                        POP EBP
0061383A  C2 08 00                  RET 0x8
