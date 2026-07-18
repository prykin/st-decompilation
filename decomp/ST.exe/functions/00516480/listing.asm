HelpPanelTy::TTreeProc:
00516480  55                        PUSH EBP
00516481  8B EC                     MOV EBP,ESP
00516483  83 EC 54                  SUB ESP,0x54
00516486  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051648B  53                        PUSH EBX
0051648C  56                        PUSH ESI
0051648D  57                        PUSH EDI
0051648E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00516491  33 FF                     XOR EDI,EDI
00516493  8D 55 B0                  LEA EDX,[EBP + -0x50]
00516496  8D 4D AC                  LEA ECX,[EBP + -0x54]
00516499  57                        PUSH EDI
0051649A  52                        PUSH EDX
0051649B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0051649E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005164A4  E8 47 73 21 00            CALL 0x0072d7f0
005164A9  8B F0                     MOV ESI,EAX
005164AB  83 C4 08                  ADD ESP,0x8
005164AE  3B F7                     CMP ESI,EDI
005164B0  0F 85 10 04 00 00         JNZ 0x005168c6
005164B6  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
005164B9  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005164BC  84 C0                     TEST AL,AL
005164BE  BB 02 00 00 00            MOV EBX,0x2
005164C3  0F 85 83 00 00 00         JNZ 0x0051654c
005164C9  8A 86 A1 01 00 00         MOV AL,byte ptr [ESI + 0x1a1]
005164CF  84 C0                     TEST AL,AL
005164D1  74 17                     JZ 0x005164ea
005164D3  3C 06                     CMP AL,0x6
005164D5  74 13                     JZ 0x005164ea
005164D7  3C 0A                     CMP AL,0xa
005164D9  74 0F                     JZ 0x005164ea
005164DB  C6 86 A2 01 00 00 00      MOV byte ptr [ESI + 0x1a2],0x0
005164E2  89 BE AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EDI
005164E8  EB 12                     JMP 0x005164fc
LAB_005164ea:
005164EA  88 86 A2 01 00 00         MOV byte ptr [ESI + 0x1a2],AL
005164F0  8B 86 A3 01 00 00         MOV EAX,dword ptr [ESI + 0x1a3]
005164F6  89 86 AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EAX
LAB_005164fc:
005164FC  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00516502  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00516505  3B C7                     CMP EAX,EDI
00516507  C6 86 A1 01 00 00 06      MOV byte ptr [ESI + 0x1a1],0x6
0051650E  89 8E A3 01 00 00         MOV dword ptr [ESI + 0x1a3],ECX
00516514  66 C7 86 AF 01 00 00 23 00  MOV word ptr [ESI + 0x1af],0x23
0051651D  66 C7 86 B1 01 00 00 0A 00  MOV word ptr [ESI + 0x1b1],0xa
00516526  74 24                     JZ 0x0051654c
00516528  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
0051652F  66 89 7E 2C               MOV word ptr [ESI + 0x2c],DI
00516533  66 89 5E 2E               MOV word ptr [ESI + 0x2e],BX
00516537  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0051653A  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00516540  3B CF                     CMP ECX,EDI
00516542  74 08                     JZ 0x0051654c
00516544  8B 11                     MOV EDX,dword ptr [ECX]
00516546  8D 46 18                  LEA EAX,[ESI + 0x18]
00516549  50                        PUSH EAX
0051654A  FF 12                     CALL dword ptr [EDX]
LAB_0051654c:
0051654C  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
00516552  3B C7                     CMP EAX,EDI
00516554  74 09                     JZ 0x0051655f
00516556  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00516559  50                        PUSH EAX
0051655A  E8 51 F1 1C 00            CALL 0x006e56b0
LAB_0051655f:
0051655F  8B 8E DC 01 00 00         MOV ECX,dword ptr [ESI + 0x1dc]
00516565  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00516568  68 18 01 00 00            PUSH 0x118
0051656D  68 B8 01 00 00            PUSH 0x1b8
00516572  6A 16                     PUSH 0x16
00516574  6A 21                     PUSH 0x21
00516576  57                        PUSH EDI
00516577  51                        PUSH ECX
00516578  6A 16                     PUSH 0x16
0051657A  6A 21                     PUSH 0x21
0051657C  57                        PUSH EDI
0051657D  52                        PUSH EDX
0051657E  E8 6D F0 19 00            CALL 0x006b55f0
00516583  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00516586  48                        DEC EAX
00516587  74 34                     JZ 0x005165bd
00516589  48                        DEC EAX
0051658A  74 18                     JZ 0x005165a4
0051658C  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0051658F  BB 06 56 00 00            MOV EBX,0x5606
00516594  C7 45 F4 D8 30 7C 00      MOV dword ptr [EBP + -0xc],0x7c30d8
0051659B  C7 45 F8 46 00 00 00      MOV dword ptr [EBP + -0x8],0x46
005165A2  EB 30                     JMP 0x005165d4
LAB_005165a4:
005165A4  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
005165A8  BB 05 56 00 00            MOV EBX,0x5605
005165AD  C7 45 F4 F0 2D 7C 00      MOV dword ptr [EBP + -0xc],0x7c2df0
005165B4  C7 45 F8 39 00 00 00      MOV dword ptr [EBP + -0x8],0x39
005165BB  EB 17                     JMP 0x005165d4
LAB_005165bd:
005165BD  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005165C1  BB 04 56 00 00            MOV EBX,0x5604
005165C6  C7 45 F4 58 2B 7C 00      MOV dword ptr [EBP + -0xc],0x7c2b58
005165CD  C7 45 F8 33 00 00 00      MOV dword ptr [EBP + -0x8],0x33
LAB_005165d4:
005165D4  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
005165D7  8B 8E E4 01 00 00         MOV ECX,dword ptr [ESI + 0x1e4]
005165DD  6A 14                     PUSH 0x14
005165DF  68 9C 01 00 00            PUSH 0x19c
005165E4  6A 16                     PUSH 0x16
005165E6  6A 21                     PUSH 0x21
005165E8  57                        PUSH EDI
005165E9  50                        PUSH EAX
005165EA  E8 A1 A4 1F 00            CALL 0x00710a90
005165EF  A0 4E 87 80 00            MOV AL,[0x0080874e]
005165F4  3C 03                     CMP AL,0x3
005165F6  75 07                     JNZ 0x005165ff
005165F8  B8 05 00 00 00            MOV EAX,0x5
005165FD  EB 0A                     JMP 0x00516609
LAB_005165ff:
005165FF  FE C8                     DEC AL
00516601  F6 D8                     NEG AL
00516603  1B C0                     SBB EAX,EAX
00516605  83 E0 06                  AND EAX,0x6
00516608  40                        INC EAX
LAB_00516609:
00516609  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051660F  50                        PUSH EAX
00516610  6A FF                     PUSH -0x1
00516612  6A FF                     PUSH -0x1
00516614  51                        PUSH ECX
00516615  68 F4 55 00 00            PUSH 0x55f4
0051661A  E8 21 9B 19 00            CALL 0x006b0140
0051661F  8B 8E E4 01 00 00         MOV ECX,dword ptr [ESI + 0x1e4]
00516625  50                        PUSH EAX
00516626  E8 95 B3 1F 00            CALL 0x007119c0
0051662B  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
0051662E  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00516634  6A 0F                     PUSH 0xf
00516636  68 9C 01 00 00            PUSH 0x19c
0051663B  6A 2A                     PUSH 0x2a
0051663D  6A 21                     PUSH 0x21
0051663F  57                        PUSH EDI
00516640  52                        PUSH EDX
00516641  E8 4A A4 1F 00            CALL 0x00710a90
00516646  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051664C  33 C0                     XOR EAX,EAX
0051664E  80 F9 03                  CMP CL,0x3
00516651  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00516657  0F 95 C0                  SETNZ AL
0051665A  48                        DEC EAX
0051665B  83 E0 05                  AND EAX,0x5
0051665E  50                        PUSH EAX
0051665F  6A FF                     PUSH -0x1
00516661  6A FF                     PUSH -0x1
00516663  51                        PUSH ECX
00516664  53                        PUSH EBX
00516665  E8 D6 9A 19 00            CALL 0x006b0140
0051666A  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00516670  50                        PUSH EAX
00516671  E8 4A B3 1F 00            CALL 0x007119c0
00516676  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051667C  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0051667F  3B DF                     CMP EBX,EDI
00516681  75 1A                     JNZ 0x0051669d
00516683  33 DB                     XOR EBX,EBX
00516685  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
00516689  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0051668D  83 C3 1F                  ADD EBX,0x1f
00516690  C1 EB 03                  SHR EBX,0x3
00516693  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
00516699  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0051669d:
0051669D  50                        PUSH EAX
0051669E  E8 FD E8 19 00            CALL 0x006b4fa0
005166A3  8B CB                     MOV ECX,EBX
005166A5  8B F8                     MOV EDI,EAX
005166A7  8B D1                     MOV EDX,ECX
005166A9  83 C8 FF                  OR EAX,0xffffffff
005166AC  C1 E9 02                  SHR ECX,0x2
005166AF  F3 AB                     STOSD.REP ES:EDI
005166B1  8B CA                     MOV ECX,EDX
005166B3  83 E1 03                  AND ECX,0x3
005166B6  F3 AA                     STOSB.REP ES:EDI
005166B8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005166BB  8B 8E 24 02 00 00         MOV ECX,dword ptr [ESI + 0x224]
005166C1  25 FF 00 00 00            AND EAX,0xff
005166C6  50                        PUSH EAX
005166C7  51                        PUSH ECX
005166C8  E8 D3 4C 1F 00            CALL 0x0070b3a0
005166CD  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
005166D3  8B F8                     MOV EDI,EAX
005166D5  57                        PUSH EDI
005166D6  6A 06                     PUSH 0x6
005166D8  6A 00                     PUSH 0x0
005166DA  6A 00                     PUSH 0x0
005166DC  52                        PUSH EDX
005166DD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005166E0  E8 44 CB EE FF            CALL 0x00403229
005166E5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005166E8  33 C0                     XOR EAX,EAX
005166EA  A0 4E 87 80 00            MOV AL,[0x0080874e]
005166EF  83 C4 1C                  ADD ESP,0x1c
005166F2  3B C8                     CMP ECX,EAX
005166F4  0F 85 27 01 00 00         JNZ 0x00516821
005166FA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005166FD  66 85 C0                  TEST AX,AX
00516700  0F 86 1B 01 00 00         JBE 0x00516821
00516706  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00516709  25 FF FF 00 00            AND EAX,0xffff
0051670E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00516711  8D 79 04                  LEA EDI,[ECX + 0x4]
LAB_00516714:
00516714  8B 57 FC                  MOV EDX,dword ptr [EDI + -0x4]
00516717  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0051671D  33 C0                     XOR EAX,EAX
0051671F  52                        PUSH EDX
00516720  A0 4D 87 80 00            MOV AL,[0x0080874d]
00516725  50                        PUSH EAX
00516726  E8 24 EB EE FF            CALL 0x0040524f
0051672B  85 C0                     TEST EAX,EAX
0051672D  74 47                     JZ 0x00516776
0051672F  8B 4F FC                  MOV ECX,dword ptr [EDI + -0x4]
00516732  33 D2                     XOR EDX,EDX
00516734  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0051673A  51                        PUSH ECX
0051673B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516741  52                        PUSH EDX
00516742  E8 C6 EB EE FF            CALL 0x0040530d
00516747  33 C9                     XOR ECX,ECX
00516749  8A 0F                     MOV CL,byte ptr [EDI]
0051674B  3B C8                     CMP ECX,EAX
0051674D  7F 27                     JG 0x00516776
0051674F  8B 57 FC                  MOV EDX,dword ptr [EDI + -0x4]
00516752  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00516758  33 C0                     XOR EAX,EAX
0051675A  52                        PUSH EDX
0051675B  A0 4D 87 80 00            MOV AL,[0x0080874d]
00516760  50                        PUSH EAX
00516761  E8 05 B1 EE FF            CALL 0x0040186b
00516766  33 C9                     XOR ECX,ECX
00516768  8A 0F                     MOV CL,byte ptr [EDI]
0051676A  3B C1                     CMP EAX,ECX
0051676C  7C 08                     JL 0x00516776
0051676E  8B 9E 28 02 00 00         MOV EBX,dword ptr [ESI + 0x228]
00516774  EB 06                     JMP 0x0051677c
LAB_00516776:
00516776  8B 9E 2C 02 00 00         MOV EBX,dword ptr [ESI + 0x22c]
LAB_0051677c:
0051677C  8A 17                     MOV DL,byte ptr [EDI]
0051677E  8A 47 FC                  MOV AL,byte ptr [EDI + -0x4]
00516781  52                        PUSH EDX
00516782  50                        PUSH EAX
00516783  E8 68 CC EE FF            CALL 0x004033f0
00516788  50                        PUSH EAX
00516789  53                        PUSH EBX
0051678A  E8 11 4C 1F 00            CALL 0x0070b3a0
0051678F  8B 4F 05                  MOV ECX,dword ptr [EDI + 0x5]
00516792  8B 57 01                  MOV EDX,dword ptr [EDI + 0x1]
00516795  50                        PUSH EAX
00516796  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
0051679C  6A 01                     PUSH 0x1
0051679E  51                        PUSH ECX
0051679F  52                        PUSH EDX
005167A0  50                        PUSH EAX
005167A1  E8 83 CA EE FF            CALL 0x00403229
005167A6  8B 4F FC                  MOV ECX,dword ptr [EDI + -0x4]
005167A9  83 C4 24                  ADD ESP,0x24
005167AC  33 D2                     XOR EDX,EDX
005167AE  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005167B4  51                        PUSH ECX
005167B5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005167BB  52                        PUSH EDX
005167BC  E8 8E EA EE FF            CALL 0x0040524f
005167C1  85 C0                     TEST EAX,EAX
005167C3  74 49                     JZ 0x0051680e
005167C5  8B 4F FC                  MOV ECX,dword ptr [EDI + -0x4]
005167C8  33 C0                     XOR EAX,EAX
005167CA  8A 07                     MOV AL,byte ptr [EDI]
005167CC  33 D2                     XOR EDX,EDX
005167CE  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005167D4  50                        PUSH EAX
005167D5  51                        PUSH ECX
005167D6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005167DC  52                        PUSH EDX
005167DD  E8 AD D7 EE FF            CALL 0x00403f8f
005167E2  85 C0                     TEST EAX,EAX
005167E4  74 28                     JZ 0x0051680e
005167E6  8B 86 48 02 00 00         MOV EAX,dword ptr [ESI + 0x248]
005167EC  6A 00                     PUSH 0x0
005167EE  50                        PUSH EAX
005167EF  E8 AC 4B 1F 00            CALL 0x0070b3a0
005167F4  8B 4F 05                  MOV ECX,dword ptr [EDI + 0x5]
005167F7  8B 57 01                  MOV EDX,dword ptr [EDI + 0x1]
005167FA  50                        PUSH EAX
005167FB  8B 86 18 02 00 00         MOV EAX,dword ptr [ESI + 0x218]
00516801  6A 06                     PUSH 0x6
00516803  51                        PUSH ECX
00516804  52                        PUSH EDX
00516805  50                        PUSH EAX
00516806  E8 1E CA EE FF            CALL 0x00403229
0051680B  83 C4 1C                  ADD ESP,0x1c
LAB_0051680e:
0051680E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00516811  83 C7 0D                  ADD EDI,0xd
00516814  48                        DEC EAX
00516815  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00516818  0F 85 F6 FE FF FF         JNZ 0x00516714
0051681E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00516821:
00516821  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
00516824  33 C9                     XOR ECX,ECX
00516826  66 8B 8E AF 01 00 00      MOV CX,word ptr [ESI + 0x1af]
0051682D  8D 9C 0A E8 FE FF FF      LEA EBX,[EDX + ECX*0x1 + 0xfffffee8]
00516834  85 DB                     TEST EBX,EBX
00516836  7E 1F                     JLE 0x00516857
00516838  8B C3                     MOV EAX,EBX
0051683A  33 FF                     XOR EDI,EDI
0051683C  66 8B BE B1 01 00 00      MOV DI,word ptr [ESI + 0x1b1]
00516843  99                        CDQ
00516844  F7 FF                     IDIV EDI
00516846  8B C3                     MOV EAX,EBX
00516848  8B CA                     MOV ECX,EDX
0051684A  F7 D9                     NEG ECX
0051684C  99                        CDQ
0051684D  1B C9                     SBB ECX,ECX
0051684F  F7 FF                     IDIV EDI
00516851  F7 D9                     NEG ECX
00516853  03 C8                     ADD ECX,EAX
00516855  EB 02                     JMP 0x00516859
LAB_00516857:
00516857  33 C9                     XOR ECX,ECX
LAB_00516859:
00516859  51                        PUSH ECX
0051685A  8B CE                     MOV ECX,ESI
0051685C  E8 8A C6 EE FF            CALL 0x00402eeb
00516861  33 C0                     XOR EAX,EAX
00516863  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
00516869  66 8B 86 AF 01 00 00      MOV AX,word ptr [ESI + 0x1af]
00516870  B9 17 01 00 00            MOV ECX,0x117
00516875  2B C8                     SUB ECX,EAX
00516877  68 FF 00 00 00            PUSH 0xff
0051687C  51                        PUSH ECX
0051687D  68 9C 01 00 00            PUSH 0x19c
00516882  6A 00                     PUSH 0x0
00516884  6A 00                     PUSH 0x0
00516886  6A 00                     PUSH 0x0
00516888  83 C0 16                  ADD EAX,0x16
0051688B  52                        PUSH EDX
0051688C  50                        PUSH EAX
0051688D  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00516890  6A 21                     PUSH 0x21
00516892  6A 00                     PUSH 0x0
00516894  50                        PUSH EAX
00516895  E8 76 E8 19 00            CALL 0x006b5110
0051689A  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0051689D  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
005168A0  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
005168A3  51                        PUSH ECX
005168A4  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005168AA  52                        PUSH EDX
005168AB  6A FF                     PUSH -0x1
005168AD  50                        PUSH EAX
005168AE  51                        PUSH ECX
005168AF  E8 8C CD 19 00            CALL 0x006b3640
005168B4  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005168B7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005168BD  5F                        POP EDI
005168BE  5E                        POP ESI
005168BF  5B                        POP EBX
005168C0  8B E5                     MOV ESP,EBP
005168C2  5D                        POP EBP
005168C3  C2 08 00                  RET 0x8
LAB_005168c6:
005168C6  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
005168C9  68 28 3C 7C 00            PUSH 0x7c3c28
005168CE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005168D3  56                        PUSH ESI
005168D4  57                        PUSH EDI
005168D5  68 AA 04 00 00            PUSH 0x4aa
005168DA  68 3C 38 7C 00            PUSH 0x7c383c
005168DF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005168E4  E8 E7 6B 19 00            CALL 0x006ad4d0
005168E9  83 C4 18                  ADD ESP,0x18
005168EC  85 C0                     TEST EAX,EAX
005168EE  74 01                     JZ 0x005168f1
005168F0  CC                        INT3
LAB_005168f1:
005168F1  68 AA 04 00 00            PUSH 0x4aa
005168F6  68 3C 38 7C 00            PUSH 0x7c383c
005168FB  57                        PUSH EDI
005168FC  56                        PUSH ESI
005168FD  E8 3E F5 18 00            CALL 0x006a5e40
00516902  5F                        POP EDI
00516903  5E                        POP ESI
00516904  5B                        POP EBX
00516905  8B E5                     MOV ESP,EBP
00516907  5D                        POP EBP
00516908  C2 08 00                  RET 0x8
