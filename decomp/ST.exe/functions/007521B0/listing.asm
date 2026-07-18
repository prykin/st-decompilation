FUN_007521b0:
007521B0  55                        PUSH EBP
007521B1  8B EC                     MOV EBP,ESP
007521B3  83 EC 44                  SUB ESP,0x44
007521B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007521B9  56                        PUSH ESI
007521BA  57                        PUSH EDI
007521BB  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
007521BE  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
007521C4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007521C7  85 C0                     TEST EAX,EAX
007521C9  75 09                     JNZ 0x007521d4
007521CB  57                        PUSH EDI
007521CC  E8 CF 2D F6 FF            CALL 0x006b4fa0
007521D1  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_007521d4:
007521D4  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
007521D7  33 F6                     XOR ESI,ESI
007521D9  66 8B 77 0E               MOV SI,word ptr [EDI + 0xe]
007521DD  8B 7F 08                  MOV EDI,dword ptr [EDI + 0x8]
007521E0  0F AF F0                  IMUL ESI,EAX
007521E3  83 C6 1F                  ADD ESI,0x1f
007521E6  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
007521E9  C1 EE 03                  SHR ESI,0x3
007521EC  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
007521F2  40                        INC EAX
007521F3  0F AF C7                  IMUL EAX,EDI
007521F6  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
007521F9  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
007521FC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
007521FF  99                        CDQ
00752200  2B C2                     SUB EAX,EDX
00752202  D1 F8                     SAR EAX,0x1
00752204  83 C0 16                  ADD EAX,0x16
00752207  50                        PUSH EAX
00752208  E8 63 8A F5 FF            CALL 0x006aac70
0075220D  8B F8                     MOV EDI,EAX
0075220F  85 FF                     TEST EDI,EDI
00752211  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
00752214  75 0D                     JNZ 0x00752223
00752216  5F                        POP EDI
00752217  B8 FE FF FF FF            MOV EAX,0xfffffffe
0075221C  5E                        POP ESI
0075221D  8B E5                     MOV ESP,EBP
0075221F  5D                        POP EBP
00752220  C2 18 00                  RET 0x18
LAB_00752223:
00752223  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00752226  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00752229  53                        PUSH EBX
0075222A  8D 5F 16                  LEA EBX,[EDI + 0x16]
0075222D  8D 42 FF                  LEA EAX,[EDX + -0x1]
00752230  C7 45 E8 FF FF FF FF      MOV dword ptr [EBP + -0x18],0xffffffff
00752237  0F AF C6                  IMUL EAX,ESI
0075223A  03 C1                     ADD EAX,ECX
0075223C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075223F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00752242  33 C9                     XOR ECX,ECX
00752244  85 D2                     TEST EDX,EDX
00752246  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
00752249  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0075224C  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0075224F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00752252  7E 66                     JLE 0x007522ba
LAB_00752254:
00752254  33 F6                     XOR ESI,ESI
LAB_00752256:
00752256  38 10                     CMP byte ptr [EAX],DL
00752258  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075225B  75 0A                     JNZ 0x00752267
LAB_0075225d:
0075225D  3B F1                     CMP ESI,ECX
0075225F  7D 41                     JGE 0x007522a2
00752261  40                        INC EAX
00752262  46                        INC ESI
00752263  38 10                     CMP byte ptr [EAX],DL
00752265  74 F6                     JZ 0x0075225d
LAB_00752267:
00752267  3B F1                     CMP ESI,ECX
00752269  7D 37                     JGE 0x007522a2
0075226B  83 7D E8 FF               CMP dword ptr [EBP + -0x18],-0x1
0075226F  75 06                     JNZ 0x00752277
00752271  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00752274  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_00752277:
00752277  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0075227A  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0075227D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00752280  3B CE                     CMP ECX,ESI
00752282  7E 03                     JLE 0x00752287
00752284  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_00752287:
00752287  38 10                     CMP byte ptr [EAX],DL
00752289  74 0D                     JZ 0x00752298
0075228B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_0075228e:
0075228E  3B F1                     CMP ESI,ECX
00752290  7D 06                     JGE 0x00752298
00752292  40                        INC EAX
00752293  46                        INC ESI
00752294  38 10                     CMP byte ptr [EAX],DL
00752296  75 F6                     JNZ 0x0075228e
LAB_00752298:
00752298  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
0075229B  7D B9                     JGE 0x00752256
0075229D  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
007522A0  EB B4                     JMP 0x00752256
LAB_007522a2:
007522A2  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
007522A5  03 CE                     ADD ECX,ESI
007522A7  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
007522AA  2B C1                     SUB EAX,ECX
007522AC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007522AF  41                        INC ECX
007522B0  3B CE                     CMP ECX,ESI
007522B2  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
007522B5  7C 9D                     JL 0x00752254
007522B7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_007522ba:
007522BA  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
007522BD  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007522C0  2B CA                     SUB ECX,EDX
007522C2  83 F8 FF                  CMP EAX,-0x1
007522C5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007522C8  0F 84 5E 04 00 00         JZ 0x0075272c
007522CE  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
007522D1  41                        INC ECX
007522D2  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
007522D5  2B C8                     SUB ECX,EAX
007522D7  8B C1                     MOV EAX,ECX
007522D9  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
007522DC  99                        CDQ
007522DD  83 E2 0F                  AND EDX,0xf
007522E0  03 C2                     ADD EAX,EDX
007522E2  8B F0                     MOV ESI,EAX
007522E4  C1 FE 04                  SAR ESI,0x4
007522E7  83 FE 07                  CMP ESI,0x7
007522EA  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
007522ED  7E 08                     JLE 0x007522f7
007522EF  BE 07 00 00 00            MOV ESI,0x7
007522F4  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_007522f7:
007522F7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007522FA  8B C6                     MOV EAX,ESI
007522FC  0F AF C3                  IMUL EAX,EBX
007522FF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00752302  99                        CDQ
00752303  2B C2                     SUB EAX,EDX
00752305  D1 F8                     SAR EAX,0x1
00752307  3D FF FF 00 00            CMP EAX,0xffff
0075230C  7E 10                     JLE 0x0075231e
0075230E  B8 FE FF 01 00            MOV EAX,0x1fffe
00752313  8D 34 5B                  LEA ESI,[EBX + EBX*0x2]
00752316  99                        CDQ
00752317  F7 FE                     IDIV ESI
00752319  8B F0                     MOV ESI,EAX
0075231B  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_0075231e:
0075231E  8D 47 16                  LEA EAX,[EDI + 0x16]
00752321  33 D2                     XOR EDX,EDX
00752323  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00752326  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0075232D  8D 1C 70                  LEA EBX,[EAX + ESI*0x2]
00752330  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
00752333  66 89 53 FE               MOV word ptr [EBX + -0x2],DX
00752337  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075233A  2B F2                     SUB ESI,EDX
0075233C  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0075233F  4E                        DEC ESI
00752340  0F AF 75 C8               IMUL ESI,dword ptr [EBP + -0x38]
00752344  03 F2                     ADD ESI,EDX
00752346  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00752349  03 F2                     ADD ESI,EDX
0075234B  85 C9                     TEST ECX,ECX
0075234D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00752350  0F 8E E1 03 00 00         JLE 0x00752737
00752356  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00752359:
00752359  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0075235C  33 FF                     XOR EDI,EDI
0075235E  85 C0                     TEST EAX,EAX
00752360  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
00752363  74 35                     JZ 0x0075239a
00752365  25 0F 00 00 80            AND EAX,0x8000000f
0075236A  79 05                     JNS 0x00752371
0075236C  48                        DEC EAX
0075236D  83 C8 F0                  OR EAX,0xfffffff0
00752370  40                        INC EAX
LAB_00752371:
00752371  75 27                     JNZ 0x0075239a
00752373  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00752376  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00752379  3B D0                     CMP EDX,EAX
0075237B  7D 1D                     JGE 0x0075239a
0075237D  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00752380  8B CB                     MOV ECX,EBX
00752382  8D 42 16                  LEA EAX,[EDX + 0x16]
00752385  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00752388  2B C8                     SUB ECX,EAX
0075238A  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0075238D  42                        INC EDX
0075238E  66 89 08                  MOV word ptr [EAX],CX
00752391  83 C0 02                  ADD EAX,0x2
00752394  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00752397  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_0075239a:
0075239A  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
0075239D  8A 16                     MOV DL,byte ptr [ESI]
0075239F  33 C0                     XOR EAX,EAX
007523A1  3A D1                     CMP DL,CL
007523A3  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007523A6  75 67                     JNZ 0x0075240f
LAB_007523a8:
007523A8  3B 7D F8                  CMP EDI,dword ptr [EBP + -0x8]
007523AB  7D 0A                     JGE 0x007523b7
007523AD  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
007523B0  40                        INC EAX
007523B1  46                        INC ESI
007523B2  47                        INC EDI
007523B3  3A D1                     CMP DL,CL
007523B5  74 F1                     JZ 0x007523a8
LAB_007523b7:
007523B7  83 F8 7F                  CMP EAX,0x7f
007523BA  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
007523BD  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007523C0  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007523C3  7E 43                     JLE 0x00752408
007523C5  8D 48 FF                  LEA ECX,[EAX + -0x1]
007523C8  B8 11 08 04 02            MOV EAX,0x2040811
007523CD  F7 E1                     MUL ECX
007523CF  2B CA                     SUB ECX,EDX
007523D1  B8 7F 7F 7F 7F            MOV EAX,0x7f7f7f7f
007523D6  D1 E9                     SHR ECX,0x1
007523D8  03 CA                     ADD ECX,EDX
007523DA  8B FB                     MOV EDI,EBX
007523DC  C1 E9 06                  SHR ECX,0x6
007523DF  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
007523E2  8B D1                     MOV EDX,ECX
007523E4  C1 E9 02                  SHR ECX,0x2
007523E7  F3 AB                     STOSD.REP ES:EDI
007523E9  8B CA                     MOV ECX,EDX
007523EB  83 E1 03                  AND ECX,0x3
007523EE  F3 AA                     STOSB.REP ES:EDI
007523F0  8B C2                     MOV EAX,EDX
007523F2  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
007523F5  8B C8                     MOV ECX,EAX
007523F7  03 D8                     ADD EBX,EAX
007523F9  C1 E1 07                  SHL ECX,0x7
007523FC  2B C8                     SUB ECX,EAX
007523FE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00752401  F7 D9                     NEG ECX
00752403  03 C1                     ADD EAX,ECX
00752405  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00752408:
00752408  85 C0                     TEST EAX,EAX
0075240A  7E 03                     JLE 0x0075240f
0075240C  88 03                     MOV byte ptr [EBX],AL
0075240E  43                        INC EBX
LAB_0075240f:
0075240F  3B 7D F8                  CMP EDI,dword ptr [EBP + -0x8]
00752412  0F 8D DA 01 00 00         JGE 0x007525f2
00752418  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0075241B  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0075241E  81 E1 FF 00 00 00         AND ECX,0xff
00752424  33 C0                     XOR EAX,EAX
00752426  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00752429  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0075242C  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0075242f:
0075242F  8A 06                     MOV AL,byte ptr [ESI]
00752431  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
00752434  3A C2                     CMP AL,DL
00752436  74 42                     JZ 0x0075247a
00752438  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075243B  25 FF 00 00 00            AND EAX,0xff
00752440  3B C2                     CMP EAX,EDX
00752442  7C 0C                     JL 0x00752450
00752444  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00752447  03 D1                     ADD EDX,ECX
00752449  3B C2                     CMP EAX,EDX
0075244B  7C 2D                     JL 0x0075247a
0075244D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00752450:
00752450  3B C1                     CMP EAX,ECX
00752452  75 11                     JNZ 0x00752465
00752454  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00752457  4A                        DEC EDX
00752458  3B FA                     CMP EDI,EDX
0075245A  7D 09                     JGE 0x00752465
0075245C  33 D2                     XOR EDX,EDX
0075245E  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
00752461  3B D1                     CMP EDX,ECX
00752463  74 51                     JZ 0x007524b6
LAB_00752465:
00752465  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00752468  8B C8                     MOV ECX,EAX
0075246A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075246D  42                        INC EDX
0075246E  46                        INC ESI
0075246F  47                        INC EDI
00752470  3B F8                     CMP EDI,EAX
00752472  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00752475  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00752478  7C B5                     JL 0x0075242f
LAB_0075247a:
0075247A  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
0075247D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00752480:
00752480  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00752483  85 C9                     TEST ECX,ECX
00752485  0F 85 8E 01 00 00         JNZ 0x00752619
0075248B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0075248E  B8 01 00 00 00            MOV EAX,0x1
00752493  3B C8                     CMP ECX,EAX
00752495  0F 85 99 00 00 00         JNZ 0x00752534
0075249B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075249E  33 C9                     XOR ECX,ECX
007524A0  8A 0E                     MOV CL,byte ptr [ESI]
007524A2  46                        INC ESI
007524A3  47                        INC EDI
007524A4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007524A7  3B FA                     CMP EDI,EDX
007524A9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007524AC  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
007524AF  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007524B2  7D 73                     JGE 0x00752527
007524B4  EB 12                     JMP 0x007524c8
LAB_007524b6:
007524B6  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
007524B9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007524BC  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
007524C3  EB BB                     JMP 0x00752480
LAB_007524c5:
007524C5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_007524c8:
007524C8  33 D2                     XOR EDX,EDX
007524CA  8A 16                     MOV DL,byte ptr [ESI]
007524CC  3B D1                     CMP EDX,ECX
007524CE  75 0A                     JNZ 0x007524da
007524D0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007524D3  40                        INC EAX
007524D4  46                        INC ESI
007524D5  47                        INC EDI
007524D6  3B F9                     CMP EDI,ECX
007524D8  7C EB                     JL 0x007524c5
LAB_007524da:
007524DA  83 F8 3F                  CMP EAX,0x3f
007524DD  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
007524E0  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007524E3  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007524E6  7E 31                     JLE 0x00752519
007524E8  8D 48 FF                  LEA ECX,[EAX + -0x1]
007524EB  B8 05 41 10 04            MOV EAX,0x4104105
007524F0  F7 E1                     MUL ECX
007524F2  2B CA                     SUB ECX,EDX
007524F4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007524F7  D1 E9                     SHR ECX,0x1
007524F9  03 CA                     ADD ECX,EDX
007524FB  C1 E9 05                  SHR ECX,0x5
007524FE  8B D1                     MOV EDX,ECX
00752500  C1 E2 06                  SHL EDX,0x6
00752503  2B D1                     SUB EDX,ECX
00752505  F7 DA                     NEG EDX
00752507  03 C2                     ADD EAX,EDX
00752509  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0075250c:
0075250C  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
0075250F  C6 03 FF                  MOV byte ptr [EBX],0xff
00752512  43                        INC EBX
00752513  88 03                     MOV byte ptr [EBX],AL
00752515  43                        INC EBX
00752516  49                        DEC ECX
00752517  75 F3                     JNZ 0x0075250c
LAB_00752519:
00752519  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075251C  85 C0                     TEST EAX,EAX
0075251E  0F 8E C5 00 00 00         JLE 0x007525e9
00752524  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00752527:
00752527  0C C0                     OR AL,0xc0
00752529  88 03                     MOV byte ptr [EBX],AL
0075252B  43                        INC EBX
0075252C  88 0B                     MOV byte ptr [EBX],CL
0075252E  43                        INC EBX
0075252F  E9 B5 00 00 00            JMP 0x007525e9
LAB_00752534:
00752534  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00752537  33 C9                     XOR ECX,ECX
00752539  3B F8                     CMP EDI,EAX
0075253B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0075253E  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00752541  0F 8D AB 00 00 00         JGE 0x007525f2
LAB_00752547:
00752547  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075254A  33 C0                     XOR EAX,EAX
0075254C  8A 06                     MOV AL,byte ptr [ESI]
0075254E  3B C2                     CMP EAX,EDX
00752550  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00752553  7C 16                     JL 0x0075256b
00752555  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00752558  03 D0                     ADD EDX,EAX
0075255A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075255D  3B C2                     CMP EAX,EDX
0075255F  7D 0A                     JGE 0x0075256b
00752561  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00752564  41                        INC ECX
00752565  46                        INC ESI
00752566  47                        INC EDI
00752567  3B F8                     CMP EDI,EAX
00752569  7C DC                     JL 0x00752547
LAB_0075256b:
0075256B  83 F9 3F                  CMP ECX,0x3f
0075256E  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
00752571  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00752574  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00752577  7E 44                     JLE 0x007525bd
00752579  8D 71 FF                  LEA ESI,[ECX + -0x1]
0075257C  B8 05 41 10 04            MOV EAX,0x4104105
00752581  F7 E6                     MUL ESI
00752583  2B F2                     SUB ESI,EDX
00752585  D1 EE                     SHR ESI,0x1
00752587  03 F2                     ADD ESI,EDX
00752589  C1 EE 05                  SHR ESI,0x5
0075258C  8B C6                     MOV EAX,ESI
0075258E  8B D0                     MOV EDX,EAX
00752590  C1 E2 06                  SHL EDX,0x6
00752593  2B D0                     SUB EDX,EAX
00752595  F7 DA                     NEG EDX
00752597  03 CA                     ADD ECX,EDX
00752599  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_0075259c:
0075259C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075259F  C6 03 BF                  MOV byte ptr [EBX],0xbf
007525A2  43                        INC EBX
007525A3  B9 0F 00 00 00            MOV ECX,0xf
007525A8  8B F2                     MOV ESI,EDX
007525AA  8B FB                     MOV EDI,EBX
007525AC  F3 A5                     MOVSD.REP ES:EDI,ESI
007525AE  66 A5                     MOVSW ES:EDI,ESI
007525B0  83 C3 3F                  ADD EBX,0x3f
007525B3  83 C2 3F                  ADD EDX,0x3f
007525B6  48                        DEC EAX
007525B7  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
007525BA  A4                        MOVSB ES:EDI,ESI
007525BB  75 DF                     JNZ 0x0075259c
LAB_007525bd:
007525BD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007525C0  85 C0                     TEST EAX,EAX
007525C2  7E 1F                     JLE 0x007525e3
007525C4  8A C8                     MOV CL,AL
007525C6  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
007525C9  80 C9 80                  OR CL,0x80
007525CC  88 0B                     MOV byte ptr [EBX],CL
007525CE  8B C8                     MOV ECX,EAX
007525D0  43                        INC EBX
007525D1  8B D1                     MOV EDX,ECX
007525D3  8B FB                     MOV EDI,EBX
007525D5  C1 E9 02                  SHR ECX,0x2
007525D8  F3 A5                     MOVSD.REP ES:EDI,ESI
007525DA  8B CA                     MOV ECX,EDX
007525DC  83 E1 03                  AND ECX,0x3
007525DF  03 D8                     ADD EBX,EAX
007525E1  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_007525e3:
007525E3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007525E6  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_007525e9:
007525E9  3B 7D F8                  CMP EDI,dword ptr [EBP + -0x8]
007525EC  0F 8C A8 FD FF FF         JL 0x0075239a
LAB_007525f2:
007525F2  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
007525F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007525F8  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
007525FB  03 C2                     ADD EAX,EDX
007525FD  2B F0                     SUB ESI,EAX
007525FF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00752602  40                        INC EAX
00752603  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00752606  3B C1                     CMP EAX,ECX
00752608  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075260B  0F 8C 48 FD FF FF         JL 0x00752359
00752611  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
00752614  E9 1E 01 00 00            JMP 0x00752737
LAB_00752619:
00752619  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0075261C  85 C0                     TEST EAX,EAX
0075261E  74 04                     JZ 0x00752624
00752620  49                        DEC ECX
00752621  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_00752624:
00752624  83 F9 3F                  CMP ECX,0x3f
00752627  7E 43                     JLE 0x0075266c
00752629  49                        DEC ECX
0075262A  B8 05 41 10 04            MOV EAX,0x4104105
0075262F  F7 E1                     MUL ECX
00752631  2B CA                     SUB ECX,EDX
00752633  D1 E9                     SHR ECX,0x1
00752635  03 CA                     ADD ECX,EDX
00752637  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075263A  C1 E9 05                  SHR ECX,0x5
0075263D  8B C1                     MOV EAX,ECX
0075263F  C1 E1 06                  SHL ECX,0x6
00752642  2B C8                     SUB ECX,EAX
00752644  F7 D9                     NEG ECX
00752646  03 D1                     ADD EDX,ECX
00752648  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_0075264b:
0075264B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075264E  C6 03 BF                  MOV byte ptr [EBX],0xbf
00752651  43                        INC EBX
00752652  B9 0F 00 00 00            MOV ECX,0xf
00752657  8B F2                     MOV ESI,EDX
00752659  8B FB                     MOV EDI,EBX
0075265B  F3 A5                     MOVSD.REP ES:EDI,ESI
0075265D  66 A5                     MOVSW ES:EDI,ESI
0075265F  83 C3 3F                  ADD EBX,0x3f
00752662  83 C2 3F                  ADD EDX,0x3f
00752665  48                        DEC EAX
00752666  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00752669  A4                        MOVSB ES:EDI,ESI
0075266A  75 DF                     JNZ 0x0075264b
LAB_0075266c:
0075266C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075266F  85 C0                     TEST EAX,EAX
00752671  7E 1F                     JLE 0x00752692
00752673  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00752676  8A D0                     MOV DL,AL
00752678  80 CA 80                  OR DL,0x80
0075267B  8B C8                     MOV ECX,EAX
0075267D  88 13                     MOV byte ptr [EBX],DL
0075267F  43                        INC EBX
00752680  8B D1                     MOV EDX,ECX
00752682  8B FB                     MOV EDI,EBX
00752684  C1 E9 02                  SHR ECX,0x2
00752687  F3 A5                     MOVSD.REP ES:EDI,ESI
00752689  8B CA                     MOV ECX,EDX
0075268B  83 E1 03                  AND ECX,0x3
0075268E  03 D8                     ADD EBX,EAX
00752690  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00752692:
00752692  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00752695  85 C0                     TEST EAX,EAX
00752697  0F 84 46 FF FF FF         JZ 0x007525e3
0075269D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
007526A0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007526A3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007526A6  83 C7 02                  ADD EDI,0x2
007526A9  B9 03 00 00 00            MOV ECX,0x3
007526AE  83 C6 02                  ADD ESI,0x2
007526B1  3B F8                     CMP EDI,EAX
007526B3  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
007526B6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007526B9  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
007526BC  7D 5D                     JGE 0x0075271b
LAB_007526be:
007526BE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007526C1  33 C0                     XOR EAX,EAX
007526C3  8A 06                     MOV AL,byte ptr [ESI]
007526C5  3B C2                     CMP EAX,EDX
007526C7  75 0A                     JNZ 0x007526d3
007526C9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007526CC  41                        INC ECX
007526CD  46                        INC ESI
007526CE  47                        INC EDI
007526CF  3B F8                     CMP EDI,EAX
007526D1  7C EB                     JL 0x007526be
LAB_007526d3:
007526D3  83 F9 3F                  CMP ECX,0x3f
007526D6  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
007526D9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007526DC  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
007526DF  7E 32                     JLE 0x00752713
007526E1  49                        DEC ECX
007526E2  B8 05 41 10 04            MOV EAX,0x4104105
007526E7  F7 E1                     MUL ECX
007526E9  2B CA                     SUB ECX,EDX
007526EB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007526EE  D1 E9                     SHR ECX,0x1
007526F0  03 CA                     ADD ECX,EDX
007526F2  C1 E9 05                  SHR ECX,0x5
007526F5  8B D1                     MOV EDX,ECX
007526F7  C1 E2 06                  SHL EDX,0x6
007526FA  2B D1                     SUB EDX,ECX
007526FC  F7 DA                     NEG EDX
007526FE  03 C2                     ADD EAX,EDX
00752700  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00752703:
00752703  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
00752706  C6 03 FF                  MOV byte ptr [EBX],0xff
00752709  43                        INC EBX
0075270A  88 03                     MOV byte ptr [EBX],AL
0075270C  43                        INC EBX
0075270D  49                        DEC ECX
0075270E  75 F3                     JNZ 0x00752703
00752710  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_00752713:
00752713  85 C9                     TEST ECX,ECX
00752715  0F 8E CE FE FF FF         JLE 0x007525e9
LAB_0075271b:
0075271B  80 C9 C0                  OR CL,0xc0
0075271E  88 0B                     MOV byte ptr [EBX],CL
00752720  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00752723  43                        INC EBX
00752724  88 0B                     MOV byte ptr [EBX],CL
00752726  43                        INC EBX
00752727  E9 BD FE FF FF            JMP 0x007525e9
LAB_0075272c:
0075272C  33 C0                     XOR EAX,EAX
0075272E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00752731  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00752734  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00752737:
00752737  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0075273A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075273D  2B DF                     SUB EBX,EDI
0075273F  83 F8 01                  CMP EAX,0x1
00752742  8A 45 E0                  MOV AL,byte ptr [EBP + -0x20]
00752745  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
00752748  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0075274B  53                        PUSH EBX
0075274C  0F 94 C1                  SETZ CL
0075274F  41                        INC ECX
00752750  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
00752753  C0 E0 02                  SHL AL,0x2
00752756  66 8B 55 DC               MOV DX,word ptr [EBP + -0x24]
0075275A  0A C8                     OR CL,AL
0075275C  66 8B 45 F8               MOV AX,word ptr [EBP + -0x8]
00752760  88 4F 0D                  MOV byte ptr [EDI + 0xd],CL
00752763  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00752766  66 89 47 12               MOV word ptr [EDI + 0x12],AX
0075276A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0075276D  57                        PUSH EDI
0075276E  2B C1                     SUB EAX,ECX
00752770  89 1F                     MOV dword ptr [EDI],EBX
00752772  C6 47 0C 80               MOV byte ptr [EDI + 0xc],0x80
00752776  66 89 57 0E               MOV word ptr [EDI + 0xe],DX
0075277A  66 89 4F 10               MOV word ptr [EDI + 0x10],CX
0075277E  66 89 47 14               MOV word ptr [EDI + 0x14],AX
00752782  E8 C9 D3 F6 FF            CALL 0x006bfb50
00752787  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075278A  5B                        POP EBX
0075278B  85 C0                     TEST EAX,EAX
0075278D  89 01                     MOV dword ptr [ECX],EAX
0075278F  75 02                     JNZ 0x00752793
00752791  89 39                     MOV dword ptr [ECX],EDI
LAB_00752793:
00752793  5F                        POP EDI
00752794  33 C0                     XOR EAX,EAX
00752796  5E                        POP ESI
00752797  8B E5                     MOV ESP,EBP
00752799  5D                        POP EBP
0075279A  C2 18 00                  RET 0x18
