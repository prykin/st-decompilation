FUN_00483300:
00483300  55                        PUSH EBP
00483301  8B EC                     MOV EBP,ESP
00483303  83 EC 34                  SUB ESP,0x34
00483306  53                        PUSH EBX
00483307  56                        PUSH ESI
00483308  8B F1                     MOV ESI,ECX
0048330A  57                        PUSH EDI
0048330B  8B 86 E2 07 00 00         MOV EAX,dword ptr [ESI + 0x7e2]
00483311  85 C0                     TEST EAX,EAX
00483313  75 0E                     JNZ 0x00483323
00483315  8B 8E A2 07 00 00         MOV ECX,dword ptr [ESI + 0x7a2]
0048331B  85 C9                     TEST ECX,ECX
0048331D  74 17                     JZ 0x00483336
0048331F  85 C0                     TEST EAX,EAX
00483321  74 1F                     JZ 0x00483342
LAB_00483323:
00483323  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00483329  85 C0                     TEST EAX,EAX
0048332B  75 15                     JNZ 0x00483342
0048332D  83 BE 2A 07 00 00 28      CMP dword ptr [ESI + 0x72a],0x28
00483334  7D 0C                     JGE 0x00483342
LAB_00483336:
00483336  B8 02 00 00 00            MOV EAX,0x2
0048333B  5F                        POP EDI
0048333C  5E                        POP ESI
0048333D  5B                        POP EBX
0048333E  8B E5                     MOV ESP,EBP
00483340  5D                        POP EBP
00483341  C3                        RET
LAB_00483342:
00483342  8B 86 83 04 00 00         MOV EAX,dword ptr [ESI + 0x483]
00483348  66 8B 8E 8B 04 00 00      MOV CX,word ptr [ESI + 0x48b]
0048334F  8A 96 87 04 00 00         MOV DL,byte ptr [ESI + 0x487]
00483355  50                        PUSH EAX
00483356  51                        PUSH ECX
00483357  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048335D  52                        PUSH EDX
0048335E  E8 57 F5 F7 FF            CALL 0x004028ba
00483363  8B F8                     MOV EDI,EAX
00483365  8D 45 FC                  LEA EAX,[EBP + -0x4]
00483368  8D 4D F0                  LEA ECX,[EBP + -0x10]
0048336B  50                        PUSH EAX
0048336C  8D 55 F4                  LEA EDX,[EBP + -0xc]
0048336F  51                        PUSH ECX
00483370  52                        PUSH EDX
00483371  8B CF                     MOV ECX,EDI
00483373  E8 6B FE F7 FF            CALL 0x004031e3
00483378  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0048337C  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
00483380  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
00483384  50                        PUSH EAX
00483385  51                        PUSH ECX
00483386  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0048338A  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0048338E  52                        PUSH EDX
0048338F  50                        PUSH EAX
00483390  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
00483394  51                        PUSH ECX
00483395  52                        PUSH EDX
00483396  E8 72 9B 22 00            CALL 0x006acf0d
0048339B  8B D8                     MOV EBX,EAX
0048339D  83 C4 18                  ADD ESP,0x18
004833A0  0F BF 86 14 08 00 00      MOVSX EAX,word ptr [ESI + 0x814]
004833A7  3B D8                     CMP EBX,EAX
004833A9  7E 17                     JLE 0x004833c2
004833AB  8B 86 E6 07 00 00         MOV EAX,dword ptr [ESI + 0x7e6]
004833B1  F7 D8                     NEG EAX
004833B3  1B C0                     SBB EAX,EAX
004833B5  83 E0 04                  AND EAX,0x4
004833B8  83 C0 05                  ADD EAX,0x5
004833BB  5F                        POP EDI
004833BC  5E                        POP ESI
004833BD  5B                        POP EBX
004833BE  8B E5                     MOV ESP,EBP
004833C0  5D                        POP EBP
004833C1  C3                        RET
LAB_004833c2:
004833C2  8B 17                     MOV EDX,dword ptr [EDI]
004833C4  8B CF                     MOV ECX,EDI
004833C6  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004833CC  85 C0                     TEST EAX,EAX
004833CE  0F 84 1B 02 00 00         JZ 0x004835ef
004833D4  8B 07                     MOV EAX,dword ptr [EDI]
004833D6  8B CF                     MOV ECX,EDI
004833D8  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
004833DE  85 C0                     TEST EAX,EAX
004833E0  0F 84 09 02 00 00         JZ 0x004835ef
004833E6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004833E9  8B 17                     MOV EDX,dword ptr [EDI]
004833EB  50                        PUSH EAX
004833EC  8B CF                     MOV ECX,EDI
004833EE  FF 92 F4 00 00 00         CALL dword ptr [EDX + 0xf4]
004833F4  85 C0                     TEST EAX,EAX
004833F6  0F 84 F3 01 00 00         JZ 0x004835ef
004833FC  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00483400  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00483403  0F BF D1                  MOVSX EDX,CX
00483406  0F BF C7                  MOVSX EAX,DI
00483409  2B C2                     SUB EAX,EDX
0048340B  99                        CDQ
0048340C  33 C2                     XOR EAX,EDX
0048340E  2B C2                     SUB EAX,EDX
00483410  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00483413  D1 E0                     SHL EAX,0x1
00483415  99                        CDQ
00483416  F7 FB                     IDIV EBX
00483418  83 F8 03                  CMP EAX,0x3
0048341B  7E 12                     JLE 0x0048342f
0048341D  33 C0                     XOR EAX,EAX
0048341F  66 3B F9                  CMP DI,CX
00483422  0F 9E C0                  SETLE AL
00483425  83 C0 06                  ADD EAX,0x6
00483428  5F                        POP EDI
00483429  5E                        POP ESI
0048342A  5B                        POP EBX
0048342B  8B E5                     MOV ESP,EBP
0048342D  5D                        POP EBP
0048342E  C3                        RET
LAB_0048342f:
0048342F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00483432  8B 06                     MOV EAX,dword ptr [ESI]
00483434  57                        PUSH EDI
00483435  52                        PUSH EDX
00483436  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00483439  52                        PUSH EDX
0048343A  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0048343E  51                        PUSH ECX
0048343F  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00483443  51                        PUSH ECX
00483444  52                        PUSH EDX
00483445  8B CE                     MOV ECX,ESI
00483447  FF 50 10                  CALL dword ptr [EAX + 0x10]
0048344A  0F BF C0                  MOVSX EAX,AX
0048344D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00483450  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
00483456  84 C0                     TEST AL,AL
00483458  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0048345F  0F 86 0A 01 00 00         JBE 0x0048356f
00483465  8D 8E A8 02 00 00         LEA ECX,[ESI + 0x2a8]
0048346B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0048346e:
0048346E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00483471  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00483474  52                        PUSH EDX
00483475  83 C0 FE                  ADD EAX,-0x2
00483478  83 EC 08                  SUB ESP,0x8
0048347B  8B 10                     MOV EDX,dword ptr [EAX]
0048347D  8B CC                     MOV ECX,ESP
0048347F  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00483483  89 11                     MOV dword ptr [ECX],EDX
00483485  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00483489  8D 4D D4                  LEA ECX,[EBP + -0x2c]
0048348C  51                        PUSH ECX
0048348D  8B CE                     MOV ECX,ESI
0048348F  E8 98 FF F7 FF            CALL 0x0040342c
00483494  8B 10                     MOV EDX,dword ptr [EAX]
00483496  66 8B 7E 41               MOV DI,word ptr [ESI + 0x41]
0048349A  66 8B 5E 43               MOV BX,word ptr [ESI + 0x43]
0048349E  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
004834A1  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
004834A5  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
004834A9  66 03 C1                  ADD AX,CX
004834AC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004834AF  66 2B 5D DE               SUB BX,word ptr [EBP + -0x22]
004834B3  66 03 FA                  ADD DI,DX
004834B6  66 8B 11                  MOV DX,word ptr [ECX]
004834B9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004834BC  51                        PUSH ECX
004834BD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004834C0  33 C0                     XOR EAX,EAX
004834C2  83 EC 08                  SUB ESP,0x8
004834C5  66 89 55 DE               MOV word ptr [EBP + -0x22],DX
004834C9  66 89 45 DC               MOV word ptr [EBP + -0x24],AX
004834CD  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004834D0  8B D4                     MOV EDX,ESP
004834D2  89 0A                     MOV dword ptr [EDX],ECX
004834D4  8B CE                     MOV ECX,ESI
004834D6  66 89 42 04               MOV word ptr [EDX + 0x4],AX
004834DA  8D 55 CC                  LEA EDX,[EBP + -0x34]
004834DD  52                        PUSH EDX
004834DE  E8 49 FF F7 FF            CALL 0x0040342c
004834E3  8B C8                     MOV ECX,EAX
004834E5  8B 01                     MOV EAX,dword ptr [ECX]
004834E7  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004834EA  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
004834EE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004834F1  66 89 55 E0               MOV word ptr [EBP + -0x20],DX
004834F5  8B 55 DE                  MOV EDX,dword ptr [EBP + -0x22]
004834F8  03 C8                     ADD ECX,EAX
004834FA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004834FD  2B C2                     SUB EAX,EDX
004834FF  8B 96 36 07 00 00         MOV EDX,dword ptr [ESI + 0x736]
00483505  85 D2                     TEST EDX,EDX
00483507  75 24                     JNZ 0x0048352d
00483509  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
0048350F  6A 00                     PUSH 0x0
00483511  6A 00                     PUSH 0x0
00483513  52                        PUSH EDX
00483514  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00483517  52                        PUSH EDX
00483518  50                        PUSH EAX
00483519  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0048351C  51                        PUSH ECX
0048351D  50                        PUSH EAX
0048351E  53                        PUSH EBX
0048351F  57                        PUSH EDI
00483520  8B CE                     MOV ECX,ESI
00483522  E8 E0 23 F8 FF            CALL 0x00405907
00483527  85 C0                     TEST EAX,EAX
00483529  74 59                     JZ 0x00483584
0048352B  EB 22                     JMP 0x0048354f
LAB_0048352d:
0048352D  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
00483533  6A 01                     PUSH 0x1
00483535  6A 00                     PUSH 0x0
00483537  52                        PUSH EDX
00483538  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048353B  52                        PUSH EDX
0048353C  50                        PUSH EAX
0048353D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00483540  51                        PUSH ECX
00483541  50                        PUSH EAX
00483542  53                        PUSH EBX
00483543  57                        PUSH EDI
00483544  8B CE                     MOV ECX,ESI
00483546  E8 BC 23 F8 FF            CALL 0x00405907
0048354B  85 C0                     TEST EAX,EAX
0048354D  74 35                     JZ 0x00483584
LAB_0048354f:
0048354F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00483552  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00483555  33 C9                     XOR ECX,ECX
00483557  40                        INC EAX
00483558  8A 8E B2 02 00 00         MOV CL,byte ptr [ESI + 0x2b2]
0048355E  83 C7 06                  ADD EDI,0x6
00483561  3B C1                     CMP EAX,ECX
00483563  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00483566  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00483569  0F 8C FF FE FF FF         JL 0x0048346e
LAB_0048356f:
0048356F  0F BF 56 6C               MOVSX EDX,word ptr [ESI + 0x6c]
00483573  39 55 EC                  CMP dword ptr [EBP + -0x14],EDX
00483576  74 18                     JZ 0x00483590
00483578  B8 09 00 00 00            MOV EAX,0x9
0048357D  5F                        POP EDI
0048357E  5E                        POP ESI
0048357F  5B                        POP EBX
00483580  8B E5                     MOV ESP,EBP
00483582  5D                        POP EBP
00483583  C3                        RET
LAB_00483584:
00483584  B8 08 00 00 00            MOV EAX,0x8
00483589  5F                        POP EDI
0048358A  5E                        POP ESI
0048358B  5B                        POP EBX
0048358C  8B E5                     MOV ESP,EBP
0048358E  5D                        POP EBP
0048358F  C3                        RET
LAB_00483590:
00483590  8B 86 E2 07 00 00         MOV EAX,dword ptr [ESI + 0x7e2]
00483596  85 C0                     TEST EAX,EAX
00483598  75 20                     JNZ 0x004835ba
0048359A  8B 86 AA 07 00 00         MOV EAX,dword ptr [ESI + 0x7aa]
004835A0  8B BE A6 07 00 00         MOV EDI,dword ptr [ESI + 0x7a6]
004835A6  33 C9                     XOR ECX,ECX
004835A8  3B C7                     CMP EAX,EDI
004835AA  0F 9D C1                  SETGE CL
004835AD  49                        DEC ECX
004835AE  83 E1 03                  AND ECX,0x3
004835B1  8B C1                     MOV EAX,ECX
004835B3  5F                        POP EDI
004835B4  5E                        POP ESI
004835B5  5B                        POP EBX
004835B6  8B E5                     MOV ESP,EBP
004835B8  5D                        POP EBP
004835B9  C3                        RET
LAB_004835ba:
004835BA  8B 96 AA 07 00 00         MOV EDX,dword ptr [ESI + 0x7aa]
004835C0  8B 86 A6 07 00 00         MOV EAX,dword ptr [ESI + 0x7a6]
004835C6  3B D0                     CMP EDX,EAX
004835C8  7C 09                     JL 0x004835d3
004835CA  33 C0                     XOR EAX,EAX
004835CC  5F                        POP EDI
004835CD  5E                        POP ESI
004835CE  5B                        POP EBX
004835CF  8B E5                     MOV ESP,EBP
004835D1  5D                        POP EBP
004835D2  C3                        RET
LAB_004835d3:
004835D3  8B BE 2A 07 00 00         MOV EDI,dword ptr [ESI + 0x72a]
004835D9  33 C0                     XOR EAX,EAX
004835DB  83 FF 28                  CMP EDI,0x28
004835DE  0F 9C C0                  SETL AL
004835E1  48                        DEC EAX
004835E2  83 E0 07                  AND EAX,0x7
004835E5  83 C0 03                  ADD EAX,0x3
004835E8  5F                        POP EDI
004835E9  5E                        POP ESI
004835EA  5B                        POP EBX
004835EB  8B E5                     MOV ESP,EBP
004835ED  5D                        POP EBP
004835EE  C3                        RET
LAB_004835ef:
004835EF  5F                        POP EDI
004835F0  5E                        POP ESI
004835F1  B8 03 00 00 00            MOV EAX,0x3
004835F6  5B                        POP EBX
004835F7  8B E5                     MOV ESP,EBP
004835F9  5D                        POP EBP
004835FA  C3                        RET
