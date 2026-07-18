FUN_005522a0:
005522A0  55                        PUSH EBP
005522A1  8B EC                     MOV EBP,ESP
005522A3  83 EC 64                  SUB ESP,0x64
005522A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005522AB  53                        PUSH EBX
005522AC  56                        PUSH ESI
005522AD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005522B0  57                        PUSH EDI
005522B1  8D 55 A0                  LEA EDX,[EBP + -0x60]
005522B4  8D 4D 9C                  LEA ECX,[EBP + -0x64]
005522B7  6A 00                     PUSH 0x0
005522B9  52                        PUSH EDX
005522BA  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
005522BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005522C3  E8 28 B5 1D 00            CALL 0x0072d7f0
005522C8  8B F0                     MOV ESI,EAX
005522CA  83 C4 08                  ADD ESP,0x8
005522CD  85 F6                     TEST ESI,ESI
005522CF  0F 85 97 03 00 00         JNZ 0x0055266c
005522D5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005522D8  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005522DB  57                        PUSH EDI
005522DC  8B CE                     MOV ECX,ESI
005522DE  E8 1E F1 EA FF            CALL 0x00401401
005522E3  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
005522E6  3D 02 B2 00 00            CMP EAX,0xb202
005522EB  0F 87 BA 01 00 00         JA 0x005524ab
005522F1  0F 84 7F 01 00 00         JZ 0x00552476
005522F7  3D FF B1 00 00            CMP EAX,0xb1ff
005522FC  0F 87 DF 00 00 00         JA 0x005523e1
00552302  74 42                     JZ 0x00552346
00552304  83 E8 02                  SUB EAX,0x2
00552307  74 22                     JZ 0x0055232b
00552309  48                        DEC EAX
0055230A  0F 85 48 03 00 00         JNZ 0x00552658
00552310  8B CE                     MOV ECX,ESI
00552312  E8 21 32 EB FF            CALL 0x00405538
00552317  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0055231A  33 C0                     XOR EAX,EAX
0055231C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00552322  5F                        POP EDI
00552323  5E                        POP ESI
00552324  5B                        POP EBX
00552325  8B E5                     MOV ESP,EBP
00552327  5D                        POP EBP
00552328  C2 04 00                  RET 0x4
LAB_0055232b:
0055232B  8B CE                     MOV ECX,ESI
0055232D  E8 46 33 EB FF            CALL 0x00405678
00552332  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00552335  33 C0                     XOR EAX,EAX
00552337  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055233D  5F                        POP EDI
0055233E  5E                        POP ESI
0055233F  5B                        POP EBX
00552340  8B E5                     MOV ESP,EBP
00552342  5D                        POP EBP
00552343  C2 04 00                  RET 0x4
LAB_00552346:
00552346  8A 8E BB 01 00 00         MOV CL,byte ptr [ESI + 0x1bb]
0055234C  33 C0                     XOR EAX,EAX
0055234E  84 C9                     TEST CL,CL
00552350  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00552353  0F 94 C2                  SETZ DL
00552356  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00552359  42                        INC EDX
0055235A  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0055235D  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
00552363  88 55 EC                  MOV byte ptr [EBP + -0x14],DL
00552366  33 D2                     XOR EDX,EDX
00552368  84 C0                     TEST AL,AL
0055236A  0F 95 C2                  SETNZ DL
0055236D  81 C2 DD 00 00 00         ADD EDX,0xdd
00552373  25 FF 00 00 00            AND EAX,0xff
00552378  66 89 55 ED               MOV word ptr [EBP + -0x13],DX
0055237C  33 D2                     XOR EDX,EDX
0055237E  66 8B 94 46 BC 01 00 00   MOV DX,word ptr [ESI + EAX*0x2 + 0x1bc]
00552386  84 C9                     TEST CL,CL
00552388  89 55 EF                  MOV dword ptr [EBP + -0x11],EDX
0055238B  75 0C                     JNZ 0x00552399
0055238D  66 8B 84 C6 AD 01 00 00   MOV AX,word ptr [ESI + EAX*0x8 + 0x1ad]
00552395  66 89 45 F3               MOV word ptr [EBP + -0xd],AX
LAB_00552399:
00552399  6A FF                     PUSH -0x1
0055239B  8D 4D EC                  LEA ECX,[EBP + -0x14]
0055239E  6A 00                     PUSH 0x0
005523A0  51                        PUSH ECX
005523A1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005523A7  6A 20                     PUSH 0x20
005523A9  E8 85 18 EB FF            CALL 0x00403c33
005523AE  8A 86 BB 01 00 00         MOV AL,byte ptr [ESI + 0x1bb]
005523B4  84 C0                     TEST AL,AL
005523B6  0F 84 9C 02 00 00         JZ 0x00552658
005523BC  8B 16                     MOV EDX,dword ptr [ESI]
005523BE  8D 46 18                  LEA EAX,[ESI + 0x18]
005523C1  50                        PUSH EAX
005523C2  8B CE                     MOV ECX,ESI
005523C4  C7 46 28 FF BF 00 00      MOV dword ptr [ESI + 0x28],0xbfff
005523CB  FF 12                     CALL dword ptr [EDX]
005523CD  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
005523D0  33 C0                     XOR EAX,EAX
005523D2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005523D8  5F                        POP EDI
005523D9  5E                        POP ESI
005523DA  5B                        POP EBX
005523DB  8B E5                     MOV ESP,EBP
005523DD  5D                        POP EBP
005523DE  C2 04 00                  RET 0x4
LAB_005523e1:
005523E1  2D 00 B2 00 00            SUB EAX,0xb200
005523E6  74 72                     JZ 0x0055245a
005523E8  48                        DEC EAX
005523E9  0F 85 69 02 00 00         JNZ 0x00552658
005523EF  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
005523F5  33 C9                     XOR ECX,ECX
005523F7  33 D2                     XOR EDX,EDX
005523F9  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
005523FC  84 C0                     TEST AL,AL
005523FE  0F 95 C2                  SETNZ DL
00552401  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00552404  81 C2 DD 00 00 00         ADD EDX,0xdd
0055240A  25 FF 00 00 00            AND EAX,0xff
0055240F  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
00552412  C6 45 E0 03               MOV byte ptr [EBP + -0x20],0x3
00552416  66 89 55 E1               MOV word ptr [EBP + -0x1f],DX
0055241A  66 8B 8C 46 BC 01 00 00   MOV CX,word ptr [ESI + EAX*0x2 + 0x1bc]
00552422  6A FF                     PUSH -0x1
00552424  89 4D E3                  MOV dword ptr [EBP + -0x1d],ECX
00552427  66 8B 94 C6 B1 01 00 00   MOV DX,word ptr [ESI + EAX*0x8 + 0x1b1]
0055242F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00552435  8D 45 E0                  LEA EAX,[EBP + -0x20]
00552438  6A 00                     PUSH 0x0
0055243A  50                        PUSH EAX
0055243B  6A 20                     PUSH 0x20
0055243D  66 89 55 E7               MOV word ptr [EBP + -0x19],DX
00552441  E8 ED 17 EB FF            CALL 0x00403c33
00552446  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00552449  33 C0                     XOR EAX,EAX
0055244B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00552451  5F                        POP EDI
00552452  5E                        POP ESI
00552453  5B                        POP EBX
00552454  8B E5                     MOV ESP,EBP
00552456  5D                        POP EBP
00552457  C2 04 00                  RET 0x4
LAB_0055245a:
0055245A  8A 8E BB 01 00 00         MOV CL,byte ptr [ESI + 0x1bb]
00552460  8B 1E                     MOV EBX,dword ptr [ESI]
00552462  F6 D9                     NEG CL
00552464  1B C9                     SBB ECX,ECX
00552466  6A 01                     PUSH 0x1
00552468  83 E1 FE                  AND ECX,0xfffffffe
0055246B  6A 00                     PUSH 0x0
0055246D  81 C1 53 27 00 00         ADD ECX,0x2753
00552473  51                        PUSH ECX
00552474  EB 0B                     JMP 0x00552481
LAB_00552476:
00552476  8B 1E                     MOV EBX,dword ptr [ESI]
00552478  6A 01                     PUSH 0x1
0055247A  6A 00                     PUSH 0x0
0055247C  68 54 27 00 00            PUSH 0x2754
LAB_00552481:
00552481  6A 00                     PUSH 0x0
00552483  68 94 38 7C 00            PUSH 0x7c3894
00552488  E8 EF 32 EB FF            CALL 0x0040577c
0055248D  83 C4 08                  ADD ESP,0x8
00552490  8B CE                     MOV ECX,ESI
00552492  50                        PUSH EAX
00552493  57                        PUSH EDI
00552494  FF 53 10                  CALL dword ptr [EBX + 0x10]
00552497  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0055249A  33 C0                     XOR EAX,EAX
0055249C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005524A2  5F                        POP EDI
005524A3  5E                        POP ESI
005524A4  5B                        POP EBX
005524A5  8B E5                     MOV ESP,EBP
005524A7  5D                        POP EBP
005524A8  C2 04 00                  RET 0x4
LAB_005524ab:
005524AB  3D 0C B2 00 00            CMP EAX,0xb20c
005524B0  0F 87 61 01 00 00         JA 0x00552617
005524B6  0F 84 25 01 00 00         JZ 0x005525e1
005524BC  2D 0A B2 00 00            SUB EAX,0xb20a
005524C1  0F 84 EB 00 00 00         JZ 0x005525b2
005524C7  48                        DEC EAX
005524C8  0F 85 8A 01 00 00         JNZ 0x00552658
005524CE  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005524D1  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
005524D4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005524D7  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
005524DA  A1 34 67 80 00            MOV EAX,[0x00806734]
005524DF  2B CA                     SUB ECX,EDX
005524E1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005524E4  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
005524E7  85 C9                     TEST ECX,ECX
005524E9  74 03                     JZ 0x005524ee
005524EB  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
LAB_005524ee:
005524EE  6A 00                     PUSH 0x0
005524F0  6A 00                     PUSH 0x0
005524F2  6A 01                     PUSH 0x1
005524F4  6A 00                     PUSH 0x0
005524F6  6A FF                     PUSH -0x1
005524F8  57                        PUSH EDI
005524F9  2B D8                     SUB EBX,EAX
005524FB  E8 A4 F6 EA FF            CALL 0x00401ba4
00552500  83 C4 04                  ADD ESP,0x4
00552503  50                        PUSH EAX
00552504  6A 02                     PUSH 0x2
00552506  6A 00                     PUSH 0x0
00552508  68 A8 87 7C 00            PUSH 0x7c87a8
0055250D  E8 6A 32 EB FF            CALL 0x0040577c
00552512  83 C4 08                  ADD ESP,0x8
00552515  50                        PUSH EAX
00552516  E8 E5 06 1A 00            CALL 0x006f2c00
0055251B  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
00552521  83 C4 0C                  ADD ESP,0xc
00552524  50                        PUSH EAX
00552525  6A 01                     PUSH 0x1
00552527  52                        PUSH EDX
00552528  E8 C3 75 1B 00            CALL 0x00709af0
0055252D  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00552530  50                        PUSH EAX
00552531  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00552534  6A 01                     PUSH 0x1
00552536  53                        PUSH EBX
00552537  50                        PUSH EAX
00552538  51                        PUSH ECX
00552539  E8 EB 0C EB FF            CALL 0x00403229
0055253E  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
00552541  83 C4 34                  ADD ESP,0x34
00552544  83 7A 04 03               CMP dword ptr [EDX + 0x4],0x3
00552548  75 3B                     JNZ 0x00552585
0055254A  6A 00                     PUSH 0x0
0055254C  6A 00                     PUSH 0x0
0055254E  6A 01                     PUSH 0x1
00552550  6A 00                     PUSH 0x0
00552552  6A FF                     PUSH -0x1
00552554  6A 00                     PUSH 0x0
00552556  68 98 87 7C 00            PUSH 0x7c8798
0055255B  E8 1C 32 EB FF            CALL 0x0040577c
00552560  83 C4 08                  ADD ESP,0x8
00552563  50                        PUSH EAX
00552564  A1 94 67 80 00            MOV EAX,[0x00806794]
00552569  6A 06                     PUSH 0x6
0055256B  50                        PUSH EAX
0055256C  E8 7F 75 1B 00            CALL 0x00709af0
00552571  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00552574  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00552577  50                        PUSH EAX
00552578  6A 06                     PUSH 0x6
0055257A  53                        PUSH EBX
0055257B  51                        PUSH ECX
0055257C  52                        PUSH EDX
0055257D  E8 A7 0C EB FF            CALL 0x00403229
00552582  83 C4 34                  ADD ESP,0x34
LAB_00552585:
00552585  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
00552588  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0055258B  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0055258E  50                        PUSH EAX
0055258F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00552594  51                        PUSH ECX
00552595  6A FF                     PUSH -0x1
00552597  52                        PUSH EDX
00552598  50                        PUSH EAX
00552599  E8 A2 10 16 00            CALL 0x006b3640
0055259E  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
005525A1  33 C0                     XOR EAX,EAX
005525A3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005525A9  5F                        POP EDI
005525AA  5E                        POP ESI
005525AB  5B                        POP EBX
005525AC  8B E5                     MOV ESP,EBP
005525AE  5D                        POP EBP
005525AF  C2 04 00                  RET 0x4
LAB_005525b2:
005525B2  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
005525B5  8A 11                     MOV DL,byte ptr [ECX]
005525B7  8B CE                     MOV ECX,ESI
005525B9  FE CA                     DEC DL
005525BB  88 96 D0 01 00 00         MOV byte ptr [ESI + 0x1d0],DL
005525C1  E8 D7 29 EB FF            CALL 0x00404f9d
005525C6  8B CE                     MOV ECX,ESI
005525C8  E8 50 13 EB FF            CALL 0x0040391d
005525CD  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
005525D0  33 C0                     XOR EAX,EAX
005525D2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005525D8  5F                        POP EDI
005525D9  5E                        POP ESI
005525DA  5B                        POP EBX
005525DB  8B E5                     MOV ESP,EBP
005525DD  5D                        POP EBP
005525DE  C2 04 00                  RET 0x4
LAB_005525e1:
005525E1  66 8B 4F 14               MOV CX,word ptr [EDI + 0x14]
005525E5  33 C0                     XOR EAX,EAX
005525E7  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
005525ED  66 89 8C 46 BC 01 00 00   MOV word ptr [ESI + EAX*0x2 + 0x1bc],CX
005525F5  8B CE                     MOV ECX,ESI
005525F7  E8 F8 22 EB FF            CALL 0x004048f4
005525FC  8B CE                     MOV ECX,ESI
005525FE  E8 88 31 EB FF            CALL 0x0040578b
00552603  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00552606  33 C0                     XOR EAX,EAX
00552608  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055260E  5F                        POP EDI
0055260F  5E                        POP ESI
00552610  5B                        POP EBX
00552611  8B E5                     MOV ESP,EBP
00552613  5D                        POP EBP
00552614  C2 04 00                  RET 0x4
LAB_00552617:
00552617  2D 05 C0 00 00            SUB EAX,0xc005
0055261C  74 17                     JZ 0x00552635
0055261E  48                        DEC EAX
0055261F  75 37                     JNZ 0x00552658
00552621  8B 1E                     MOV EBX,dword ptr [ESI]
00552623  6A 01                     PUSH 0x1
00552625  6A 00                     PUSH 0x0
00552627  68 88 1E 40 00            PUSH 0x401e88
0055262C  6A 00                     PUSH 0x0
0055262E  68 F4 22 7C 00            PUSH 0x7c22f4
00552633  EB 12                     JMP 0x00552647
LAB_00552635:
00552635  8B 1E                     MOV EBX,dword ptr [ESI]
00552637  6A 01                     PUSH 0x1
00552639  6A 00                     PUSH 0x0
0055263B  68 88 1E 40 00            PUSH 0x401e88
00552640  6A 00                     PUSH 0x0
00552642  68 D8 22 7C 00            PUSH 0x7c22d8
LAB_00552647:
00552647  E8 30 31 EB FF            CALL 0x0040577c
0055264C  83 C4 08                  ADD ESP,0x8
0055264F  8B CE                     MOV ECX,ESI
00552651  50                        PUSH EAX
00552652  6A 01                     PUSH 0x1
00552654  57                        PUSH EDI
00552655  FF 53 08                  CALL dword ptr [EBX + 0x8]
LAB_00552658:
00552658  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0055265B  33 C0                     XOR EAX,EAX
0055265D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00552663  5F                        POP EDI
00552664  5E                        POP ESI
00552665  5B                        POP EBX
00552666  8B E5                     MOV ESP,EBP
00552668  5D                        POP EBP
00552669  C2 04 00                  RET 0x4
LAB_0055266c:
0055266C  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0055266F  68 78 87 7C 00            PUSH 0x7c8778
00552674  68 CC 4C 7A 00            PUSH 0x7a4ccc
00552679  56                        PUSH ESI
0055267A  6A 00                     PUSH 0x0
0055267C  68 75 01 00 00            PUSH 0x175
00552681  68 24 86 7C 00            PUSH 0x7c8624
00552686  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055268B  E8 40 AE 15 00            CALL 0x006ad4d0
00552690  83 C4 18                  ADD ESP,0x18
00552693  85 C0                     TEST EAX,EAX
00552695  74 01                     JZ 0x00552698
00552697  CC                        INT3
LAB_00552698:
00552698  68 75 01 00 00            PUSH 0x175
0055269D  68 24 86 7C 00            PUSH 0x7c8624
005526A2  6A 00                     PUSH 0x0
005526A4  56                        PUSH ESI
005526A5  E8 96 37 15 00            CALL 0x006a5e40
005526AA  5F                        POP EDI
005526AB  5E                        POP ESI
005526AC  B8 FF FF 00 00            MOV EAX,0xffff
005526B1  5B                        POP EBX
005526B2  8B E5                     MOV ESP,EBP
005526B4  5D                        POP EBP
005526B5  C2 04 00                  RET 0x4
