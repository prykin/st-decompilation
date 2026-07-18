FUN_004653b0:
004653B0  55                        PUSH EBP
004653B1  8B EC                     MOV EBP,ESP
004653B3  51                        PUSH ECX
004653B4  56                        PUSH ESI
004653B5  8B F1                     MOV ESI,ECX
004653B7  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
004653BD  83 F8 09                  CMP EAX,0x9
004653C0  74 2F                     JZ 0x004653f1
004653C2  83 F8 15                  CMP EAX,0x15
004653C5  74 21                     JZ 0x004653e8
004653C7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004653CA  50                        PUSH EAX
004653CB  E8 20 EA F9 FF            CALL 0x00403df0
004653D0  85 C0                     TEST EAX,EAX
004653D2  0F 85 E0 03 00 00         JNZ 0x004657b8
004653D8  66 C7 86 16 08 00 00 05 00  MOV word ptr [ESI + 0x816],0x5
004653E1  5E                        POP ESI
004653E2  8B E5                     MOV ESP,EBP
004653E4  5D                        POP EBP
004653E5  C2 04 00                  RET 0x4
LAB_004653e8:
004653E8  83 F8 09                  CMP EAX,0x9
004653EB  0F 85 7E 01 00 00         JNZ 0x0046556f
LAB_004653f1:
004653F1  83 BE 2E 08 00 00 03      CMP dword ptr [ESI + 0x82e],0x3
004653F8  0F 85 83 01 00 00         JNZ 0x00465581
004653FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00465401  85 C0                     TEST EAX,EAX
00465403  74 05                     JZ 0x0046540a
00465405  83 F8 01                  CMP EAX,0x1
00465408  75 3D                     JNZ 0x00465447
LAB_0046540a:
0046540A  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046540E  66 3B 56 34               CMP DX,word ptr [ESI + 0x34]
00465412  75 29                     JNZ 0x0046543d
00465414  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00465418  66 3B 46 36               CMP AX,word ptr [ESI + 0x36]
0046541C  75 1F                     JNZ 0x0046543d
0046541E  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00465422  66 3B 4E 38               CMP CX,word ptr [ESI + 0x38]
00465426  75 15                     JNZ 0x0046543d
00465428  8B 16                     MOV EDX,dword ptr [ESI]
0046542A  8B CE                     MOV ECX,ESI
0046542C  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00465432  F7 D8                     NEG EAX
00465434  1B C0                     SBB EAX,EAX
00465436  5E                        POP ESI
00465437  8B E5                     MOV ESP,EBP
00465439  5D                        POP EBP
0046543A  C2 04 00                  RET 0x4
LAB_0046543d:
0046543D  C7 86 32 08 00 00 00 00 00 00  MOV dword ptr [ESI + 0x832],0x0
LAB_00465447:
00465447  8B 86 32 08 00 00         MOV EAX,dword ptr [ESI + 0x832]
0046544D  85 C0                     TEST EAX,EAX
0046544F  0F 85 C1 00 00 00         JNZ 0x00465516
00465455  66 8B 4E 38               MOV CX,word ptr [ESI + 0x38]
00465459  66 8B 56 36               MOV DX,word ptr [ESI + 0x36]
0046545D  8B 06                     MOV EAX,dword ptr [ESI]
0046545F  51                        PUSH ECX
00465460  66 8B 4E 34               MOV CX,word ptr [ESI + 0x34]
00465464  52                        PUSH EDX
00465465  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00465469  51                        PUSH ECX
0046546A  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046546E  52                        PUSH EDX
0046546F  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00465473  51                        PUSH ECX
00465474  52                        PUSH EDX
00465475  8B CE                     MOV ECX,ESI
00465477  FF 50 10                  CALL dword ptr [EAX + 0x10]
0046547A  50                        PUSH EAX
0046547B  8B CE                     MOV ECX,ESI
0046547D  E8 30 DC F9 FF            CALL 0x004030b2
00465482  50                        PUSH EAX
00465483  8B CE                     MOV ECX,ESI
00465485  E8 72 CE F9 FF            CALL 0x004022fc
0046548A  83 F8 FF                  CMP EAX,-0x1
0046548D  74 58                     JZ 0x004654e7
0046548F  85 C0                     TEST EAX,EAX
00465491  75 3A                     JNZ 0x004654cd
00465493  8A 46 61                  MOV AL,byte ptr [ESI + 0x61]
00465496  66 8B 4E 38               MOV CX,word ptr [ESI + 0x38]
0046549A  66 8B 56 36               MOV DX,word ptr [ESI + 0x36]
0046549E  50                        PUSH EAX
0046549F  66 8B 46 34               MOV AX,word ptr [ESI + 0x34]
004654A3  51                        PUSH ECX
004654A4  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004654A8  52                        PUSH EDX
004654A9  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
004654AD  50                        PUSH EAX
004654AE  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
004654B2  51                        PUSH ECX
004654B3  52                        PUSH EDX
004654B4  50                        PUSH EAX
004654B5  8B CE                     MOV ECX,ESI
004654B7  E8 99 CF F9 FF            CALL 0x00402455
004654BC  C7 46 7A 00 00 00 00      MOV dword ptr [ESI + 0x7a],0x0
004654C3  C7 86 32 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x832],0x1
LAB_004654cd:
004654CD  8B 16                     MOV EDX,dword ptr [ESI]
004654CF  8B CE                     MOV ECX,ESI
004654D1  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004654D7  F7 D8                     NEG EAX
004654D9  1B C0                     SBB EAX,EAX
004654DB  5E                        POP ESI
004654DC  24 FD                     AND AL,0xfd
004654DE  83 C0 02                  ADD EAX,0x2
004654E1  8B E5                     MOV ESP,EBP
004654E3  5D                        POP EBP
004654E4  C2 04 00                  RET 0x4
LAB_004654e7:
004654E7  68 10 A2 7A 00            PUSH 0x7aa210
004654EC  68 CC 4C 7A 00            PUSH 0x7a4ccc
004654F1  6A 00                     PUSH 0x0
004654F3  6A 00                     PUSH 0x0
004654F5  68 8C 1B 00 00            PUSH 0x1b8c
004654FA  68 3C 9D 7A 00            PUSH 0x7a9d3c
004654FF  E8 CC 7F 24 00            CALL 0x006ad4d0
00465504  83 C4 18                  ADD ESP,0x18
00465507  85 C0                     TEST EAX,EAX
00465509  74 01                     JZ 0x0046550c
0046550B  CC                        INT3
LAB_0046550c:
0046550C  68 8D 1B 00 00            PUSH 0x1b8d
00465511  E9 4D 02 00 00            JMP 0x00465763
LAB_00465516:
00465516  83 F8 01                  CMP EAX,0x1
00465519  0F 85 65 02 00 00         JNZ 0x00465784
0046551F  8D 4D 08                  LEA ECX,[EBP + 0x8]
00465522  8D 55 FC                  LEA EDX,[EBP + -0x4]
00465525  51                        PUSH ECX
00465526  52                        PUSH EDX
00465527  8B CE                     MOV ECX,ESI
00465529  E8 19 D3 F9 FF            CALL 0x00402847
0046552E  83 F8 FF                  CMP EAX,-0x1
00465531  74 0D                     JZ 0x00465540
00465533  85 C0                     TEST EAX,EAX
00465535  0F 84 A4 00 00 00         JZ 0x004655df
0046553B  E9 DF 01 00 00            JMP 0x0046571f
LAB_00465540:
00465540  68 E4 A1 7A 00            PUSH 0x7aa1e4
00465545  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046554A  6A 00                     PUSH 0x0
0046554C  6A 00                     PUSH 0x0
0046554E  68 9E 1B 00 00            PUSH 0x1b9e
00465553  68 3C 9D 7A 00            PUSH 0x7a9d3c
00465558  E8 73 7F 24 00            CALL 0x006ad4d0
0046555D  83 C4 18                  ADD ESP,0x18
00465560  85 C0                     TEST EAX,EAX
00465562  74 01                     JZ 0x00465565
00465564  CC                        INT3
LAB_00465565:
00465565  68 9F 1B 00 00            PUSH 0x1b9f
0046556A  E9 F4 01 00 00            JMP 0x00465763
LAB_0046556f:
0046556F  83 F8 15                  CMP EAX,0x15
00465572  0F 85 18 02 00 00         JNZ 0x00465790
00465578  83 BE 2E 08 00 00 03      CMP dword ptr [ESI + 0x82e],0x3
0046557F  74 1C                     JZ 0x0046559d
LAB_00465581:
00465581  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00465584  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0046558E  51                        PUSH ECX
0046558F  8B CE                     MOV ECX,ESI
00465591  E8 5A E8 F9 FF            CALL 0x00403df0
00465596  5E                        POP ESI
00465597  8B E5                     MOV ESP,EBP
00465599  5D                        POP EBP
0046559A  C2 04 00                  RET 0x4
LAB_0046559d:
0046559D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004655A0  85 C0                     TEST EAX,EAX
004655A2  74 05                     JZ 0x004655a9
004655A4  83 F8 01                  CMP EAX,0x1
004655A7  75 55                     JNZ 0x004655fe
LAB_004655a9:
004655A9  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
004655AD  66 69 D2 C9 00            IMUL DX,DX,0xc9
004655B2  83 C2 64                  ADD EDX,0x64
004655B5  66 39 56 41               CMP word ptr [ESI + 0x41],DX
004655B9  75 39                     JNZ 0x004655f4
004655BB  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
004655BF  66 69 C0 C9 00            IMUL AX,AX,0xc9
004655C4  83 C0 64                  ADD EAX,0x64
004655C7  66 39 46 43               CMP word ptr [ESI + 0x43],AX
004655CB  75 27                     JNZ 0x004655f4
004655CD  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
004655D1  66 69 C9 C8 00            IMUL CX,CX,0xc8
004655D6  83 C1 64                  ADD ECX,0x64
004655D9  66 39 4E 45               CMP word ptr [ESI + 0x45],CX
004655DD  75 15                     JNZ 0x004655f4
LAB_004655df:
004655DF  8B 16                     MOV EDX,dword ptr [ESI]
004655E1  8B CE                     MOV ECX,ESI
004655E3  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004655E9  F7 D8                     NEG EAX
004655EB  1B C0                     SBB EAX,EAX
004655ED  5E                        POP ESI
004655EE  8B E5                     MOV ESP,EBP
004655F0  5D                        POP EBP
004655F1  C2 04 00                  RET 0x4
LAB_004655f4:
004655F4  C7 86 32 08 00 00 00 00 00 00  MOV dword ptr [ESI + 0x832],0x0
LAB_004655fe:
004655FE  8B 86 32 08 00 00         MOV EAX,dword ptr [ESI + 0x832]
00465604  85 C0                     TEST EAX,EAX
00465606  0F 85 EE 00 00 00         JNZ 0x004656fa
0046560C  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00465610  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00465614  66 69 C9 C8 00            IMUL CX,CX,0xc8
00465619  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046561E  83 C1 64                  ADD ECX,0x64
00465621  8B 06                     MOV EAX,dword ptr [ESI]
00465623  51                        PUSH ECX
00465624  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00465628  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046562D  83 C2 64                  ADD EDX,0x64
00465630  83 C1 64                  ADD ECX,0x64
00465633  52                        PUSH EDX
00465634  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00465638  51                        PUSH ECX
00465639  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046563D  52                        PUSH EDX
0046563E  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00465642  51                        PUSH ECX
00465643  52                        PUSH EDX
00465644  8B CE                     MOV ECX,ESI
00465646  FF 50 10                  CALL dword ptr [EAX + 0x10]
00465649  50                        PUSH EAX
0046564A  8B CE                     MOV ECX,ESI
0046564C  E8 61 DA F9 FF            CALL 0x004030b2
00465651  50                        PUSH EAX
00465652  8B CE                     MOV ECX,ESI
00465654  E8 A3 CC F9 FF            CALL 0x004022fc
00465659  83 F8 FF                  CMP EAX,-0x1
0046565C  74 70                     JZ 0x004656ce
0046565E  85 C0                     TEST EAX,EAX
00465660  75 52                     JNZ 0x004656b4
00465662  8A 46 61                  MOV AL,byte ptr [ESI + 0x61]
00465665  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00465669  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
0046566D  50                        PUSH EAX
0046566E  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00465672  66 69 C9 C8 00            IMUL CX,CX,0xc8
00465677  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046567C  66 69 C0 C9 00            IMUL AX,AX,0xc9
00465681  83 C1 64                  ADD ECX,0x64
00465684  83 C2 64                  ADD EDX,0x64
00465687  51                        PUSH ECX
00465688  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046568C  83 C0 64                  ADD EAX,0x64
0046568F  52                        PUSH EDX
00465690  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
00465694  50                        PUSH EAX
00465695  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
00465699  51                        PUSH ECX
0046569A  52                        PUSH EDX
0046569B  50                        PUSH EAX
0046569C  8B CE                     MOV ECX,ESI
0046569E  E8 B2 CD F9 FF            CALL 0x00402455
004656A3  C7 46 7A 00 00 00 00      MOV dword ptr [ESI + 0x7a],0x0
004656AA  C7 86 32 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x832],0x1
LAB_004656b4:
004656B4  8B 16                     MOV EDX,dword ptr [ESI]
004656B6  8B CE                     MOV ECX,ESI
004656B8  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004656BE  F7 D8                     NEG EAX
004656C0  1B C0                     SBB EAX,EAX
004656C2  5E                        POP ESI
004656C3  24 FD                     AND AL,0xfd
004656C5  83 C0 02                  ADD EAX,0x2
004656C8  8B E5                     MOV ESP,EBP
004656CA  5D                        POP EBP
004656CB  C2 04 00                  RET 0x4
LAB_004656ce:
004656CE  68 B0 A1 7A 00            PUSH 0x7aa1b0
004656D3  68 CC 4C 7A 00            PUSH 0x7a4ccc
004656D8  6A 00                     PUSH 0x0
004656DA  6A 00                     PUSH 0x0
004656DC  68 C5 1B 00 00            PUSH 0x1bc5
004656E1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004656E6  E8 E5 7D 24 00            CALL 0x006ad4d0
004656EB  83 C4 18                  ADD ESP,0x18
004656EE  85 C0                     TEST EAX,EAX
004656F0  74 01                     JZ 0x004656f3
004656F2  CC                        INT3
LAB_004656f3:
004656F3  68 C6 1B 00 00            PUSH 0x1bc6
004656F8  EB 69                     JMP 0x00465763
LAB_004656fa:
004656FA  83 F8 01                  CMP EAX,0x1
004656FD  0F 85 81 00 00 00         JNZ 0x00465784
00465703  8D 4D 08                  LEA ECX,[EBP + 0x8]
00465706  8D 55 FC                  LEA EDX,[EBP + -0x4]
00465709  51                        PUSH ECX
0046570A  52                        PUSH EDX
0046570B  8B CE                     MOV ECX,ESI
0046570D  E8 35 D1 F9 FF            CALL 0x00402847
00465712  83 F8 FF                  CMP EAX,-0x1
00465715  74 22                     JZ 0x00465739
00465717  85 C0                     TEST EAX,EAX
00465719  0F 84 C0 FE FF FF         JZ 0x004655df
LAB_0046571f:
0046571F  8B 06                     MOV EAX,dword ptr [ESI]
00465721  8B CE                     MOV ECX,ESI
00465723  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00465729  F7 D8                     NEG EAX
0046572B  1B C0                     SBB EAX,EAX
0046572D  5E                        POP ESI
0046572E  24 FD                     AND AL,0xfd
00465730  83 C0 02                  ADD EAX,0x2
00465733  8B E5                     MOV ESP,EBP
00465735  5D                        POP EBP
00465736  C2 04 00                  RET 0x4
LAB_00465739:
00465739  68 80 A1 7A 00            PUSH 0x7aa180
0046573E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00465743  6A 00                     PUSH 0x0
00465745  6A 00                     PUSH 0x0
00465747  68 D7 1B 00 00            PUSH 0x1bd7
0046574C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00465751  E8 7A 7D 24 00            CALL 0x006ad4d0
00465756  83 C4 18                  ADD ESP,0x18
00465759  85 C0                     TEST EAX,EAX
0046575B  74 01                     JZ 0x0046575e
0046575D  CC                        INT3
LAB_0046575e:
0046575E  68 D8 1B 00 00            PUSH 0x1bd8
LAB_00465763:
00465763  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00465768  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046576D  50                        PUSH EAX
0046576E  68 FF FF 00 00            PUSH 0xffff
00465773  E8 C8 06 24 00            CALL 0x006a5e40
00465778  B8 FF FF 00 00            MOV EAX,0xffff
0046577D  5E                        POP ESI
0046577E  8B E5                     MOV ESP,EBP
00465780  5D                        POP EBP
00465781  C2 04 00                  RET 0x4
LAB_00465784:
00465784  B8 02 00 00 00            MOV EAX,0x2
00465789  5E                        POP ESI
0046578A  8B E5                     MOV ESP,EBP
0046578C  5D                        POP EBP
0046578D  C2 04 00                  RET 0x4
LAB_00465790:
00465790  68 50 A1 7A 00            PUSH 0x7aa150
00465795  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046579A  6A 00                     PUSH 0x0
0046579C  6A 00                     PUSH 0x0
0046579E  68 E5 1B 00 00            PUSH 0x1be5
004657A3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004657A8  E8 23 7D 24 00            CALL 0x006ad4d0
004657AD  83 C4 18                  ADD ESP,0x18
004657B0  85 C0                     TEST EAX,EAX
004657B2  74 01                     JZ 0x004657b5
004657B4  CC                        INT3
LAB_004657b5:
004657B5  83 C8 FF                  OR EAX,0xffffffff
LAB_004657b8:
004657B8  5E                        POP ESI
004657B9  8B E5                     MOV ESP,EBP
004657BB  5D                        POP EBP
004657BC  C2 04 00                  RET 0x4
