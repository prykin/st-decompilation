STTorpC::GetMessage:
006406D0  55                        PUSH EBP
006406D1  8B EC                     MOV EBP,ESP
006406D3  81 EC 88 02 00 00         SUB ESP,0x288
006406D9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006406DE  53                        PUSH EBX
006406DF  56                        PUSH ESI
006406E0  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
006406E6  57                        PUSH EDI
006406E7  8D 95 7C FD FF FF         LEA EDX,[EBP + 0xfffffd7c]
006406ED  8D 8D 78 FD FF FF         LEA ECX,[EBP + 0xfffffd78]
006406F3  6A 00                     PUSH 0x0
006406F5  52                        PUSH EDX
006406F6  89 85 78 FD FF FF         MOV dword ptr [EBP + 0xfffffd78],EAX
006406FC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00640702  E8 E9 D0 0E 00            CALL 0x0072d7f0
00640707  8B F0                     MOV ESI,EAX
00640709  83 C4 08                  ADD ESP,0x8
0064070C  85 F6                     TEST ESI,ESI
0064070E  0F 85 9F 28 00 00         JNZ 0x00642fb3
00640714  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00640717  8B 9D 3C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff3c]
0064071D  56                        PUSH ESI
0064071E  8B CB                     MOV ECX,EBX
00640720  E8 E2 47 DC FF            CALL 0x00404f07
00640725  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00640728  83 F8 03                  CMP EAX,0x3
0064072B  0F 87 EA 25 00 00         JA 0x00642d1b
00640731  0F 84 94 25 00 00         JZ 0x00642ccb
00640737  83 E8 00                  SUB EAX,0x0
0064073A  0F 84 A7 09 00 00         JZ 0x006410e7
00640740  83 E8 02                  SUB EAX,0x2
00640743  0F 85 54 28 00 00         JNZ 0x00642f9d
00640749  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0064074C  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0064074F  48                        DEC EAX
00640750  0F 84 31 01 00 00         JZ 0x00640887
00640756  48                        DEC EAX
00640757  0F 85 40 28 00 00         JNZ 0x00642f9d
0064075D  6A 44                     PUSH 0x44
0064075F  E8 0C A5 06 00            CALL 0x006aac70
00640764  89 85 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EAX
0064076A  33 C0                     XOR EAX,EAX
LAB_0064076c:
0064076C  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00640772  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00640778  89 0C 10                  MOV dword ptr [EAX + EDX*0x1],ECX
0064077B  83 C0 04                  ADD EAX,0x4
0064077E  83 F8 44                  CMP EAX,0x44
00640781  7C E9                     JL 0x0064076c
00640783  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00640789  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
0064078F  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00640792  8B 15 B8 32 80 00         MOV EDX,dword ptr [0x008032b8]
00640798  33 C0                     XOR EAX,EAX
0064079A  89 95 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EDX
006407A0  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
006407A6  89 85 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EAX
006407AC  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
006407B2  C7 85 C0 FE FF FF 10 00 00 00  MOV dword ptr [EBP + 0xfffffec0],0x10
006407BC  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
006407C2  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
006407C5  03 C6                     ADD EAX,ESI
006407C7  8D 8D AC FE FF FF         LEA ECX,[EBP + 0xfffffeac]
006407CD  50                        PUSH EAX
006407CE  51                        PUSH ECX
006407CF  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
006407D5  E8 CB 44 DC FF            CALL 0x00404ca5
006407DA  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
006407E0  52                        PUSH EDX
006407E1  E8 7A A8 06 00            CALL 0x006ab060
006407E6  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
006407E9  8B CB                     MOV ECX,EBX
006407EB  03 C6                     ADD EAX,ESI
006407ED  50                        PUSH EAX
006407EE  E8 2C 4D DC FF            CALL 0x0040551f
006407F3  56                        PUSH ESI
006407F4  8B CB                     MOV ECX,EBX
006407F6  E8 F5 0D DC FF            CALL 0x004015f0
006407FB  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
00640802  51                        PUSH ECX
00640803  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00640809  53                        PUSH EBX
0064080A  E8 82 21 DC FF            CALL 0x00402991
0064080F  81 BB 59 02 00 00 9A 00 00 00  CMP dword ptr [EBX + 0x259],0x9a
00640819  0F 85 7E 27 00 00         JNZ 0x00642f9d
0064081F  0F BF 93 31 02 00 00      MOVSX EDX,word ptr [EBX + 0x231]
00640826  0F BF 83 55 02 00 00      MOVSX EAX,word ptr [EBX + 0x255]
0064082D  0F BF 8B 53 02 00 00      MOVSX ECX,word ptr [EBX + 0x253]
00640834  68 90 01 00 00            PUSH 0x190
00640839  6A 14                     PUSH 0x14
0064083B  52                        PUSH EDX
0064083C  68 9A 00 00 00            PUSH 0x9a
00640841  0F BF 93 51 02 00 00      MOVSX EDX,word ptr [EBX + 0x251]
00640848  50                        PUSH EAX
00640849  51                        PUSH ECX
0064084A  0F BF 83 4F 02 00 00      MOVSX EAX,word ptr [EBX + 0x24f]
00640851  0F BF 8B 4D 02 00 00      MOVSX ECX,word ptr [EBX + 0x24d]
00640858  52                        PUSH EDX
00640859  50                        PUSH EAX
0064085A  0F BF 93 4B 02 00 00      MOVSX EDX,word ptr [EBX + 0x24b]
00640861  51                        PUSH ECX
00640862  52                        PUSH EDX
00640863  E8 CF 48 DC FF            CALL 0x00405137
00640868  89 83 7E 02 00 00         MOV dword ptr [EBX + 0x27e],EAX
0064086E  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
00640874  83 C4 28                  ADD ESP,0x28
00640877  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064087C  33 C0                     XOR EAX,EAX
0064087E  5F                        POP EDI
0064087F  5E                        POP ESI
00640880  5B                        POP EBX
00640881  8B E5                     MOV ESP,EBP
00640883  5D                        POP EBP
00640884  C2 04 00                  RET 0x4
LAB_00640887:
00640887  83 C6 14                  ADD ESI,0x14
0064088A  8D BB 45 02 00 00         LEA EDI,[EBX + 0x245]
00640890  B9 11 00 00 00            MOV ECX,0x11
00640895  F3 A5                     MOVSD.REP ES:EDI,ESI
00640897  66 8B 83 4B 02 00 00      MOV AX,word ptr [EBX + 0x24b]
0064089E  66 85 C0                  TEST AX,AX
006408A1  0F 8C C7 23 00 00         JL 0x00642c6e
006408A7  66 8B B3 4D 02 00 00      MOV SI,word ptr [EBX + 0x24d]
006408AE  66 85 F6                  TEST SI,SI
006408B1  0F 8C B7 23 00 00         JL 0x00642c6e
006408B7  66 83 BB 4F 02 00 00 00   CMP word ptr [EBX + 0x24f],0x0
006408BF  0F 8C A9 23 00 00         JL 0x00642c6e
006408C5  0F BF C8                  MOVSX ECX,AX
006408C8  B8 79 19 8C 02            MOV EAX,0x28c1979
006408CD  F7 E9                     IMUL ECX
006408CF  D1 FA                     SAR EDX,0x1
006408D1  8B C2                     MOV EAX,EDX
006408D3  C1 E8 1F                  SHR EAX,0x1f
006408D6  03 D0                     ADD EDX,EAX
006408D8  66 3B 15 40 B2 7F 00      CMP DX,word ptr [0x007fb240]
006408DF  0F 8D 89 23 00 00         JGE 0x00642c6e
006408E5  0F BF CE                  MOVSX ECX,SI
006408E8  B8 79 19 8C 02            MOV EAX,0x28c1979
006408ED  F7 E9                     IMUL ECX
006408EF  D1 FA                     SAR EDX,0x1
006408F1  8B CA                     MOV ECX,EDX
006408F3  C1 E9 1F                  SHR ECX,0x1f
006408F6  03 D1                     ADD EDX,ECX
006408F8  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
006408FF  0F 8D 69 23 00 00         JGE 0x00642c6e
00640905  BE 01 00 00 00            MOV ESI,0x1
0064090A  33 FF                     XOR EDI,EDI
0064090C  56                        PUSH ESI
0064090D  6A 08                     PUSH 0x8
0064090F  57                        PUSH EDI
00640910  C6 83 7D 02 00 00 00      MOV byte ptr [EBX + 0x27d],0x0
00640917  57                        PUSH EDI
00640918  89 BB 7E 02 00 00         MOV dword ptr [EBX + 0x27e],EDI
0064091E  E8 6D D9 06 00            CALL 0x006ae290
00640923  89 83 41 02 00 00         MOV dword ptr [EBX + 0x241],EAX
00640929  89 B3 70 02 00 00         MOV dword ptr [EBX + 0x270],ESI
0064092F  C7 83 78 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x278],0xffffffff
00640939  C6 83 7C 02 00 00 00      MOV byte ptr [EBX + 0x27c],0x0
00640940  89 B3 3D 02 00 00         MOV dword ptr [EBX + 0x23d],ESI
00640946  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
0064094C  8D B0 6A FF FF FF         LEA ESI,[EAX + 0xffffff6a]
00640952  83 FE 29                  CMP ESI,0x29
00640955  0F 87 AD 00 00 00         JA 0x00640a08
0064095B  33 D2                     XOR EDX,EDX
0064095D  8A 96 10 30 64 00         MOV DL,byte ptr [ESI + 0x643010]
switchD_00640963::switchD:
00640963  FF 24 95 04 30 64 00      JMP dword ptr [EDX*0x4 + 0x643004]
switchD_00640963::caseD_96:
0064096A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00640970  3B CF                     CMP ECX,EDI
00640972  75 04                     JNZ 0x00640978
00640974  6A 01                     PUSH 0x1
00640976  EB 07                     JMP 0x0064097f
LAB_00640978:
00640978  50                        PUSH EAX
00640979  E8 30 1C DC FF            CALL 0x004025ae
0064097E  50                        PUSH EAX
LAB_0064097f:
0064097F  8B CB                     MOV ECX,EBX
00640981  E8 0A 53 DC FF            CALL 0x00405c90
00640986  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00640989  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064098F  50                        PUSH EAX
00640990  E8 22 40 DC FF            CALL 0x004049b7
00640995  25 FF 00 00 00            AND EAX,0xff
0064099A  48                        DEC EAX
0064099B  74 29                     JZ 0x006409c6
0064099D  48                        DEC EAX
0064099E  75 68                     JNZ 0x00640a08
006409A0  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
006409A3  68 96 00 00 00            PUSH 0x96
006409A8  51                        PUSH ECX
006409A9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006409AF  E8 B7 0E DC FF            CALL 0x0040186b
006409B4  85 C0                     TEST EAX,EAX
006409B6  74 50                     JZ 0x00640a08
006409B8  8A 43 61                  MOV AL,byte ptr [EBX + 0x61]
006409BB  8A D0                     MOV DL,AL
006409BD  D0 EA                     SHR DL,0x1
006409BF  02 D0                     ADD DL,AL
006409C1  88 53 61                  MOV byte ptr [EBX + 0x61],DL
006409C4  EB 42                     JMP 0x00640a08
LAB_006409c6:
006409C6  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006409C9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006409CF  68 99 00 00 00            PUSH 0x99
006409D4  50                        PUSH EAX
006409D5  E8 91 0E DC FF            CALL 0x0040186b
006409DA  85 C0                     TEST EAX,EAX
006409DC  74 2A                     JZ 0x00640a08
006409DE  8A 43 61                  MOV AL,byte ptr [EBX + 0x61]
006409E1  8A C8                     MOV CL,AL
006409E3  D0 E9                     SHR CL,0x1
006409E5  02 C8                     ADD CL,AL
006409E7  88 4B 61                  MOV byte ptr [EBX + 0x61],CL
006409EA  EB 1C                     JMP 0x00640a08
switchD_00640963::caseD_9b:
006409EC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006409F2  3B CF                     CMP ECX,EDI
006409F4  75 04                     JNZ 0x006409fa
006409F6  6A 01                     PUSH 0x1
006409F8  EB 07                     JMP 0x00640a01
LAB_006409fa:
006409FA  50                        PUSH EAX
006409FB  E8 AE 1B DC FF            CALL 0x004025ae
00640A00  50                        PUSH EAX
LAB_00640a01:
00640A01  8B CB                     MOV ECX,EBX
00640A03  E8 88 52 DC FF            CALL 0x00405c90
switchD_00640963::caseD_a2:
00640A08  8A 53 61                  MOV DL,byte ptr [EBX + 0x61]
00640A0B  66 8B 83 55 02 00 00      MOV AX,word ptr [EBX + 0x255]
00640A12  66 8B 8B 53 02 00 00      MOV CX,word ptr [EBX + 0x253]
00640A19  52                        PUSH EDX
00640A1A  66 8B 93 51 02 00 00      MOV DX,word ptr [EBX + 0x251]
00640A21  50                        PUSH EAX
00640A22  66 8B 83 4F 02 00 00      MOV AX,word ptr [EBX + 0x24f]
00640A29  51                        PUSH ECX
00640A2A  66 8B 8B 4D 02 00 00      MOV CX,word ptr [EBX + 0x24d]
00640A31  52                        PUSH EDX
00640A32  66 8B 93 4B 02 00 00      MOV DX,word ptr [EBX + 0x24b]
00640A39  50                        PUSH EAX
00640A3A  51                        PUSH ECX
00640A3B  52                        PUSH EDX
00640A3C  8B CB                     MOV ECX,EBX
00640A3E  E8 12 1A DC FF            CALL 0x00402455
00640A43  85 C0                     TEST EAX,EAX
00640A45  74 17                     JZ 0x00640a5e
00640A47  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00640A4C  68 8A 00 00 00            PUSH 0x8a
00640A51  68 C0 25 7D 00            PUSH 0x7d25c0
00640A56  50                        PUSH EAX
00640A57  6A FF                     PUSH -0x1
00640A59  E8 E2 53 06 00            CALL 0x006a5e40
LAB_00640a5e:
00640A5E  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00640A61  42                        INC EDX
00640A62  89 53 68                  MOV dword ptr [EBX + 0x68],EDX
00640A65  66 8B 83 55 02 00 00      MOV AX,word ptr [EBX + 0x255]
00640A6C  66 8B 8B 53 02 00 00      MOV CX,word ptr [EBX + 0x253]
00640A73  8B 13                     MOV EDX,dword ptr [EBX]
00640A75  50                        PUSH EAX
00640A76  66 8B 83 51 02 00 00      MOV AX,word ptr [EBX + 0x251]
00640A7D  51                        PUSH ECX
00640A7E  66 8B 8B 4F 02 00 00      MOV CX,word ptr [EBX + 0x24f]
00640A85  50                        PUSH EAX
00640A86  66 8B 83 4D 02 00 00      MOV AX,word ptr [EBX + 0x24d]
00640A8D  51                        PUSH ECX
00640A8E  66 8B 8B 4B 02 00 00      MOV CX,word ptr [EBX + 0x24b]
00640A95  50                        PUSH EAX
00640A96  51                        PUSH ECX
00640A97  8B CB                     MOV ECX,EBX
00640A99  FF 52 10                  CALL dword ptr [EDX + 0x10]
00640A9C  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
00640AA0  66 89 43 6C               MOV word ptr [EBX + 0x6c],AX
00640AA4  66 8B 53 41               MOV DX,word ptr [EBX + 0x41]
00640AA8  66 89 93 68 02 00 00      MOV word ptr [EBX + 0x268],DX
00640AAF  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
00640AB3  66 89 83 6A 02 00 00      MOV word ptr [EBX + 0x26a],AX
00640ABA  66 89 8B 6C 02 00 00      MOV word ptr [EBX + 0x26c],CX
00640AC1  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00640AC7  05 6A FF FF FF            ADD EAX,0xffffff6a
00640ACC  83 F8 29                  CMP EAX,0x29
00640ACF  77 54                     JA 0x00640b25
00640AD1  33 D2                     XOR EDX,EDX
00640AD3  8A 90 58 30 64 00         MOV DL,byte ptr [EAX + 0x643058]
switchD_00640ad9::switchD:
00640AD9  FF 24 95 3C 30 64 00      JMP dword ptr [EDX*0x4 + 0x64303c]
switchD_00640ad9::caseD_96:
00640AE0  66 C7 83 31 02 00 00 32 00  MOV word ptr [EBX + 0x231],0x32
00640AE9  EB 33                     JMP 0x00640b1e
switchD_00640ad9::caseD_ac:
00640AEB  66 C7 83 31 02 00 00 28 00  MOV word ptr [EBX + 0x231],0x28
00640AF4  EB 28                     JMP 0x00640b1e
switchD_00640ad9::caseD_9d:
00640AF6  66 C7 83 31 02 00 00 1E 00  MOV word ptr [EBX + 0x231],0x1e
00640AFF  EB 1D                     JMP 0x00640b1e
switchD_00640ad9::caseD_99:
00640B01  66 C7 83 31 02 00 00 0F 00  MOV word ptr [EBX + 0x231],0xf
00640B0A  EB 12                     JMP 0x00640b1e
switchD_00640ad9::caseD_9f:
00640B0C  66 89 BB 31 02 00 00      MOV word ptr [EBX + 0x231],DI
00640B13  EB 09                     JMP 0x00640b1e
switchD_00640ad9::caseD_a5:
00640B15  66 C7 83 31 02 00 00 3C 00  MOV word ptr [EBX + 0x231],0x3c
LAB_00640b1e:
00640B1E  66 89 BB 33 02 00 00      MOV word ptr [EBX + 0x233],DI
switchD_00640ad9::caseD_a2:
00640B25  66 8B 43 6C               MOV AX,word ptr [EBX + 0x6c]
00640B29  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
00640B2F  50                        PUSH EAX
00640B30  8B CE                     MOV ECX,ESI
00640B32  83 EC 08                  SUB ESP,0x8
00640B35  8B 01                     MOV EAX,dword ptr [ECX]
00640B37  8B D4                     MOV EDX,ESP
00640B39  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
00640B3D  89 02                     MOV dword ptr [EDX],EAX
00640B3F  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
00640B43  8D 95 BC FD FF FF         LEA EDX,[EBP + 0xfffffdbc]
00640B49  52                        PUSH EDX
00640B4A  8B CB                     MOV ECX,EBX
00640B4C  E8 DB 28 DC FF            CALL 0x0040342c
00640B51  8B 10                     MOV EDX,dword ptr [EAX]
00640B53  8D 8B 37 02 00 00         LEA ECX,[EBX + 0x237]
00640B59  89 93 37 02 00 00         MOV dword ptr [EBX + 0x237],EDX
00640B5F  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00640B63  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00640B67  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00640B6D  3D 9A 00 00 00            CMP EAX,0x9a
00640B72  75 4E                     JNZ 0x00640bc2
00640B74  0F BF 0E                  MOVSX ECX,word ptr [ESI]
00640B77  0F BF 93 55 02 00 00      MOVSX EDX,word ptr [EBX + 0x255]
00640B7E  0F BF 83 53 02 00 00      MOVSX EAX,word ptr [EBX + 0x253]
00640B85  68 90 01 00 00            PUSH 0x190
00640B8A  6A 14                     PUSH 0x14
00640B8C  51                        PUSH ECX
00640B8D  68 9A 00 00 00            PUSH 0x9a
00640B92  0F BF 8B 51 02 00 00      MOVSX ECX,word ptr [EBX + 0x251]
00640B99  52                        PUSH EDX
00640B9A  50                        PUSH EAX
00640B9B  0F BF 93 4F 02 00 00      MOVSX EDX,word ptr [EBX + 0x24f]
00640BA2  0F BF 83 4D 02 00 00      MOVSX EAX,word ptr [EBX + 0x24d]
00640BA9  51                        PUSH ECX
00640BAA  52                        PUSH EDX
00640BAB  0F BF 8B 4B 02 00 00      MOVSX ECX,word ptr [EBX + 0x24b]
00640BB2  50                        PUSH EAX
00640BB3  51                        PUSH ECX
00640BB4  E8 7E 45 DC FF            CALL 0x00405137
00640BB9  83 C4 28                  ADD ESP,0x28
00640BBC  89 83 7E 02 00 00         MOV dword ptr [EBX + 0x27e],EAX
LAB_00640bc2:
00640BC2  81 BB 59 02 00 00 97 00 00 00  CMP dword ptr [EBX + 0x259],0x97
00640BCC  75 33                     JNZ 0x00640c01
00640BCE  66 8B 93 62 02 00 00      MOV DX,word ptr [EBX + 0x262]
00640BD5  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00640BD8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00640BDE  6A 01                     PUSH 0x1
00640BE0  52                        PUSH EDX
00640BE1  50                        PUSH EAX
00640BE2  E8 D3 1C DC FF            CALL 0x004028ba
00640BE7  3B C7                     CMP EAX,EDI
00640BE9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00640BEC  74 13                     JZ 0x00640c01
00640BEE  8B 10                     MOV EDX,dword ptr [EAX]
00640BF0  8B C8                     MOV ECX,EAX
00640BF2  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00640BF5  83 F8 3F                  CMP EAX,0x3f
00640BF8  75 07                     JNZ 0x00640c01
00640BFA  C6 83 88 02 00 00 01      MOV byte ptr [EBX + 0x288],0x1
LAB_00640c01:
00640C01  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00640C07  C6 45 A4 00               MOV byte ptr [EBP + -0x5c],0x0
00640C0B  05 6A FF FF FF            ADD EAX,0xffffff6a
00640C10  C6 45 BC 00               MOV byte ptr [EBP + -0x44],0x0
00640C14  83 F8 29                  CMP EAX,0x29
00640C17  C6 45 D8 00               MOV byte ptr [EBP + -0x28],0x0
00640C1B  C6 45 90 00               MOV byte ptr [EBP + -0x70],0x0
00640C1F  0F 87 02 01 00 00         JA 0x00640d27
00640C25  33 C9                     XOR ECX,ECX
00640C27  8A 88 D4 30 64 00         MOV CL,byte ptr [EAX + 0x6430d4]
switchD_00640c2d::switchD:
00640C2D  FF 24 8D 84 30 64 00      JMP dword ptr [ECX*0x4 + 0x643084]
switchD_00640c2d::caseD_96:
00640C34  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C37  BF B8 25 7D 00            MOV EDI,0x7d25b8
00640C3C  E9 C1 00 00 00            JMP 0x00640d02
switchD_00640c2d::caseD_97:
00640C41  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C44  BF B0 25 7D 00            MOV EDI,0x7d25b0
00640C49  E9 B4 00 00 00            JMP 0x00640d02
switchD_00640c2d::caseD_98:
00640C4E  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C51  BF A8 25 7D 00            MOV EDI,0x7d25a8
00640C56  E9 A7 00 00 00            JMP 0x00640d02
switchD_00640c2d::caseD_9a:
00640C5B  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C5E  BF A0 25 7D 00            MOV EDI,0x7d25a0
00640C63  E9 9A 00 00 00            JMP 0x00640d02
switchD_00640c2d::caseD_9c:
00640C68  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C6B  BF 98 25 7D 00            MOV EDI,0x7d2598
00640C70  E9 8D 00 00 00            JMP 0x00640d02
switchD_00640c2d::caseD_9b:
00640C75  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C78  BF 90 25 7D 00            MOV EDI,0x7d2590
00640C7D  E9 80 00 00 00            JMP 0x00640d02
switchD_00640c2d::caseD_9e:
00640C82  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C85  BF 88 25 7D 00            MOV EDI,0x7d2588
00640C8A  EB 76                     JMP 0x00640d02
switchD_00640c2d::caseD_99:
00640C8C  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C8F  BF 80 25 7D 00            MOV EDI,0x7d2580
00640C94  EB 6C                     JMP 0x00640d02
switchD_00640c2d::caseD_9f:
00640C96  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640C99  BF 78 25 7D 00            MOV EDI,0x7d2578
00640C9E  EB 62                     JMP 0x00640d02
switchD_00640c2d::caseD_a1:
00640CA0  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CA3  BF 6C 25 7D 00            MOV EDI,0x7d256c
00640CA8  EB 58                     JMP 0x00640d02
switchD_00640c2d::caseD_ae:
00640CAA  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CAD  BF 64 25 7D 00            MOV EDI,0x7d2564
00640CB2  EB 4E                     JMP 0x00640d02
switchD_00640c2d::caseD_a5:
00640CB4  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CB7  BF 5C 25 7D 00            MOV EDI,0x7d255c
00640CBC  EB 44                     JMP 0x00640d02
switchD_00640c2d::caseD_ac:
00640CBE  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CC1  BF 50 25 7D 00            MOV EDI,0x7d2550
00640CC6  EB 3A                     JMP 0x00640d02
switchD_00640c2d::caseD_b8:
00640CC8  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CCB  BF 48 25 7D 00            MOV EDI,0x7d2548
00640CD0  EB 30                     JMP 0x00640d02
switchD_00640c2d::caseD_b7:
00640CD2  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CD5  BF 3C 25 7D 00            MOV EDI,0x7d253c
00640CDA  EB 26                     JMP 0x00640d02
switchD_00640c2d::caseD_b9:
00640CDC  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CDF  BF 34 25 7D 00            MOV EDI,0x7d2534
00640CE4  EB 1C                     JMP 0x00640d02
switchD_00640c2d::caseD_ad:
00640CE6  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CE9  BF 2C 25 7D 00            MOV EDI,0x7d252c
00640CEE  EB 12                     JMP 0x00640d02
switchD_00640c2d::caseD_b6:
00640CF0  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CF3  BF 24 25 7D 00            MOV EDI,0x7d2524
00640CF8  EB 08                     JMP 0x00640d02
switchD_00640c2d::caseD_a0:
00640CFA  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00640CFD  BF 1C 25 7D 00            MOV EDI,0x7d251c
LAB_00640d02:
00640D02  83 C9 FF                  OR ECX,0xffffffff
00640D05  33 C0                     XOR EAX,EAX
00640D07  F2 AE                     SCASB.REPNE ES:EDI
00640D09  F7 D1                     NOT ECX
00640D0B  2B F9                     SUB EDI,ECX
00640D0D  8B F7                     MOV ESI,EDI
00640D0F  8B FA                     MOV EDI,EDX
00640D11  8B D1                     MOV EDX,ECX
00640D13  83 C9 FF                  OR ECX,0xffffffff
00640D16  F2 AE                     SCASB.REPNE ES:EDI
00640D18  8B CA                     MOV ECX,EDX
00640D1A  4F                        DEC EDI
00640D1B  C1 E9 02                  SHR ECX,0x2
00640D1E  F3 A5                     MOVSD.REP ES:EDI,ESI
00640D20  8B CA                     MOV ECX,EDX
00640D22  83 E1 03                  AND ECX,0x3
00640D25  F3 A4                     MOVSB.REP ES:EDI,ESI
switchD_00640c2d::caseD_a2:
00640D27  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00640D2D  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00640D30  6A 1D                     PUSH 0x1d
00640D32  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00640D38  50                        PUSH EAX
00640D39  51                        PUSH ECX
00640D3A  6A 00                     PUSH 0x0
00640D3C  8B CE                     MOV ECX,ESI
00640D3E  E8 40 34 DC FF            CALL 0x00404183
00640D43  85 C0                     TEST EAX,EAX
00640D45  74 18                     JZ 0x00640d5f
00640D47  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00640D4D  68 E1 00 00 00            PUSH 0xe1
00640D52  68 C0 25 7D 00            PUSH 0x7d25c0
00640D57  52                        PUSH EDX
00640D58  6A FF                     PUSH -0x1
00640D5A  E8 E1 50 06 00            CALL 0x006a5e40
LAB_00640d5f:
00640D5F  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00640D65  05 61 FF FF FF            ADD EAX,0xffffff61
00640D6A  83 F8 20                  CMP EAX,0x20
00640D6D  77 25                     JA 0x00640d94
00640D6F  33 C9                     XOR ECX,ECX
00640D71  8A 88 0C 31 64 00         MOV CL,byte ptr [EAX + 0x64310c]
switchD_00640d77::switchD:
00640D77  FF 24 8D 00 31 64 00      JMP dword ptr [ECX*0x4 + 0x643100]
switchD_00640d77::caseD_9f:
00640D7E  6A 00                     PUSH 0x0
00640D80  6A 09                     PUSH 0x9
00640D82  6A 00                     PUSH 0x0
00640D84  E9 64 01 00 00            JMP 0x00640eed
switchD_00640d77::caseD_a5:
00640D89  6A 00                     PUSH 0x0
00640D8B  6A 00                     PUSH 0x0
00640D8D  6A 00                     PUSH 0x0
00640D8F  E9 59 01 00 00            JMP 0x00640eed
switchD_00640d77::caseD_a2:
00640D94  0F BF 93 4B 02 00 00      MOVSX EDX,word ptr [EBX + 0x24b]
00640D9B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00640D9E  6A 01                     PUSH 0x1
00640DA0  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00640DA3  0F BF 83 4D 02 00 00      MOVSX EAX,word ptr [EBX + 0x24d]
00640DAA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640DB0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00640DB3  6A 00                     PUSH 0x0
00640DB5  0F BF 8B 4F 02 00 00      MOVSX ECX,word ptr [EBX + 0x24f]
00640DBC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00640DC2  6A 00                     PUSH 0x0
00640DC4  6A 00                     PUSH 0x0
00640DC6  6A 00                     PUSH 0x0
00640DC8  6A 00                     PUSH 0x0
00640DCA  D9 9D 88 FE FF FF         FSTP float ptr [EBP + 0xfffffe88]
00640DD0  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00640DD3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00640DD6  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00640DDC  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
00640DE2  6A 00                     PUSH 0x0
00640DE4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640DEA  8D 85 6C FE FF FF         LEA EAX,[EBP + 0xfffffe6c]
00640DF0  52                        PUSH EDX
00640DF1  50                        PUSH EAX
00640DF2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00640DF8  D9 9D 8C FE FF FF         FSTP float ptr [EBP + 0xfffffe8c]
00640DFE  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00640E01  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640E07  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00640E0D  D9 9D 90 FE FF FF         FSTP float ptr [EBP + 0xfffffe90]
00640E13  E8 B8 17 0A 00            CALL 0x006e25d0
00640E18  0F BF 8B 51 02 00 00      MOVSX ECX,word ptr [EBX + 0x251]
00640E1F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00640E22  6A 01                     PUSH 0x1
00640E24  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00640E27  0F BF 93 53 02 00 00      MOVSX EDX,word ptr [EBX + 0x253]
00640E2E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640E34  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00640E37  6A 00                     PUSH 0x0
00640E39  0F BF 83 55 02 00 00      MOVSX EAX,word ptr [EBX + 0x255]
00640E40  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00640E46  6A 00                     PUSH 0x0
00640E48  6A 00                     PUSH 0x0
00640E4A  6A 00                     PUSH 0x0
00640E4C  6A 00                     PUSH 0x0
00640E4E  D9 9D 7C FE FF FF         FSTP float ptr [EBP + 0xfffffe7c]
00640E54  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00640E57  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00640E5A  8D 8D 7C FE FF FF         LEA ECX,[EBP + 0xfffffe7c]
00640E60  6A 00                     PUSH 0x0
00640E62  8D 95 5C FE FF FF         LEA EDX,[EBP + 0xfffffe5c]
00640E68  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640E6E  51                        PUSH ECX
00640E6F  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00640E75  52                        PUSH EDX
00640E76  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00640E7C  D9 9D 80 FE FF FF         FSTP float ptr [EBP + 0xfffffe80]
00640E82  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00640E85  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640E8B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00640E91  D9 9D 84 FE FF FF         FSTP float ptr [EBP + 0xfffffe84]
00640E97  E8 34 17 0A 00            CALL 0x006e25d0
00640E9C  8B 8D 64 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe64]
00640EA2  8B 95 60 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe60]
00640EA8  8B 03                     MOV EAX,dword ptr [EBX]
00640EAA  C1 F9 10                  SAR ECX,0x10
00640EAD  C1 FA 10                  SAR EDX,0x10
00640EB0  51                        PUSH ECX
00640EB1  52                        PUSH EDX
00640EB2  8B 8D 5C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe5c]
00640EB8  8B 95 74 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe74]
00640EBE  C1 F9 10                  SAR ECX,0x10
00640EC1  C1 FA 10                  SAR EDX,0x10
00640EC4  51                        PUSH ECX
00640EC5  8B 8D 70 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe70]
00640ECB  52                        PUSH EDX
00640ECC  8B 95 6C FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe6c]
00640ED2  C1 F9 10                  SAR ECX,0x10
00640ED5  C1 FA 10                  SAR EDX,0x10
00640ED8  51                        PUSH ECX
00640ED9  52                        PUSH EDX
00640EDA  8B CB                     MOV ECX,EBX
00640EDC  FF 50 14                  CALL dword ptr [EAX + 0x14]
00640EDF  0F BF C0                  MOVSX EAX,AX
00640EE2  6A 00                     PUSH 0x0
00640EE4  8B 04 85 38 21 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d2138]
00640EEB  50                        PUSH EAX
00640EEC  50                        PUSH EAX
LAB_00640eed:
00640EED  6A 00                     PUSH 0x0
00640EEF  8B CE                     MOV ECX,ESI
00640EF1  E8 C4 0F DC FF            CALL 0x00401eba
00640EF6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00640EFC  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00640F02  8B CE                     MOV ECX,ESI
00640F04  52                        PUSH EDX
00640F05  6A 00                     PUSH 0x0
00640F07  E8 34 43 DC FF            CALL 0x00405240
00640F0C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00640F12  6A FF                     PUSH -0x1
00640F14  53                        PUSH EBX
00640F15  E8 77 1A DC FF            CALL 0x00402991
00640F1A  66 89 83 6E 02 00 00      MOV word ptr [EBX + 0x26e],AX
00640F21  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00640F27  3D A3 00 00 00            CMP EAX,0xa3
00640F2C  74 73                     JZ 0x00640fa1
00640F2E  0F BF 73 47               MOVSX ESI,word ptr [EBX + 0x47]
00640F32  0F BF 7B 49               MOVSX EDI,word ptr [EBX + 0x49]
00640F36  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
00640F3D  85 F6                     TEST ESI,ESI
00640F3F  7C 2C                     JL 0x00640f6d
00640F41  85 FF                     TEST EDI,EDI
00640F43  7C 28                     JL 0x00640f6d
00640F45  0F BF C1                  MOVSX EAX,CX
00640F48  3B F0                     CMP ESI,EAX
00640F4A  7D 21                     JGE 0x00640f6d
00640F4C  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00640F53  3B FA                     CMP EDI,EDX
00640F55  7D 16                     JGE 0x00640f6d
00640F57  0F AF C7                  IMUL EAX,EDI
00640F5A  8B 15 6C B2 7F 00         MOV EDX,dword ptr [0x007fb26c]
00640F60  03 C2                     ADD EAX,EDX
00640F62  32 D2                     XOR DL,DL
00640F64  3A 14 30                  CMP DL,byte ptr [EAX + ESI*0x1]
00640F67  1B C0                     SBB EAX,EAX
00640F69  F7 D8                     NEG EAX
00640F6B  EB 02                     JMP 0x00640f6f
LAB_00640f6d:
00640F6D  33 C0                     XOR EAX,EAX
LAB_00640f6f:
00640F6F  85 C0                     TEST EAX,EAX
00640F71  74 2E                     JZ 0x00640fa1
00640F73  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00640F76  8B 04 85 4C B2 7F 00      MOV EAX,dword ptr [EAX*0x4 + 0x7fb24c]
00640F7D  85 C0                     TEST EAX,EAX
00640F7F  74 13                     JZ 0x00640f94
00640F81  0F BF C9                  MOVSX ECX,CX
00640F84  0F AF CF                  IMUL ECX,EDI
00640F87  03 C8                     ADD ECX,EAX
00640F89  32 D2                     XOR DL,DL
00640F8B  3A 14 31                  CMP DL,byte ptr [ECX + ESI*0x1]
00640F8E  1B C0                     SBB EAX,EAX
00640F90  F7 D8                     NEG EAX
00640F92  EB 02                     JMP 0x00640f96
LAB_00640f94:
00640F94  33 C0                     XOR EAX,EAX
LAB_00640f96:
00640F96  85 C0                     TEST EAX,EAX
00640F98  74 07                     JZ 0x00640fa1
00640F9A  C6 83 86 02 00 00 01      MOV byte ptr [EBX + 0x286],0x1
LAB_00640fa1:
00640FA1  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00640FA7  05 6A FF FF FF            ADD EAX,0xffffff6a
00640FAC  83 F8 29                  CMP EAX,0x29
00640FAF  0F 87 0C 01 00 00         JA 0x006410c1
00640FB5  33 C9                     XOR ECX,ECX
00640FB7  8A 88 98 31 64 00         MOV CL,byte ptr [EAX + 0x643198]
switchD_00640fbd::switchD:
00640FBD  FF 24 8D 30 31 64 00      JMP dword ptr [ECX*0x4 + 0x643130]
switchD_00640fbd::caseD_96:
00640FC4  C7 45 F8 4F 04 00 00      MOV dword ptr [EBP + -0x8],0x44f
00640FCB  E9 F1 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_97:
00640FD0  C7 45 F8 51 04 00 00      MOV dword ptr [EBP + -0x8],0x451
00640FD7  E9 E5 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_98:
00640FDC  C7 45 F8 53 04 00 00      MOV dword ptr [EBP + -0x8],0x453
00640FE3  E9 D9 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_9a:
00640FE8  C7 45 F8 57 04 00 00      MOV dword ptr [EBP + -0x8],0x457
00640FEF  E9 CD 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_9c:
00640FF4  C7 45 F8 6B 04 00 00      MOV dword ptr [EBP + -0x8],0x46b
00640FFB  E9 C1 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_9b:
00641000  C7 45 F8 91 04 00 00      MOV dword ptr [EBP + -0x8],0x491
00641007  E9 B5 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_9d:
0064100C  C7 45 F8 6D 04 00 00      MOV dword ptr [EBP + -0x8],0x46d
00641013  E9 A9 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_9e:
00641018  C7 45 F8 6F 04 00 00      MOV dword ptr [EBP + -0x8],0x46f
0064101F  E9 9D 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_99:
00641024  C7 45 F8 55 04 00 00      MOV dword ptr [EBP + -0x8],0x455
0064102B  E9 91 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_9f:
00641030  C7 45 F8 65 04 00 00      MOV dword ptr [EBP + -0x8],0x465
00641037  E9 85 00 00 00            JMP 0x006410c1
switchD_00640fbd::caseD_a0:
0064103C  C7 45 F8 67 04 00 00      MOV dword ptr [EBP + -0x8],0x467
00641043  EB 7C                     JMP 0x006410c1
switchD_00640fbd::caseD_a4:
00641045  C7 45 F8 93 04 00 00      MOV dword ptr [EBP + -0x8],0x493
0064104C  EB 73                     JMP 0x006410c1
switchD_00640fbd::caseD_ae:
0064104E  C7 45 F8 8D 04 00 00      MOV dword ptr [EBP + -0x8],0x48d
00641055  EB 6A                     JMP 0x006410c1
switchD_00640fbd::caseD_a3:
00641057  C7 45 F8 8F 04 00 00      MOV dword ptr [EBP + -0x8],0x48f
0064105E  EB 61                     JMP 0x006410c1
switchD_00640fbd::caseD_a5:
00641060  C7 45 F8 85 04 00 00      MOV dword ptr [EBP + -0x8],0x485
00641067  EB 58                     JMP 0x006410c1
switchD_00640fbd::caseD_a1:
00641069  C7 45 F8 69 04 00 00      MOV dword ptr [EBP + -0x8],0x469
00641070  EB 4F                     JMP 0x006410c1
switchD_00640fbd::caseD_b4:
00641072  C7 45 F8 71 04 00 00      MOV dword ptr [EBP + -0x8],0x471
00641079  EB 46                     JMP 0x006410c1
switchD_00640fbd::caseD_ac:
0064107B  C7 45 F8 73 04 00 00      MOV dword ptr [EBP + -0x8],0x473
00641082  EB 3D                     JMP 0x006410c1
switchD_00640fbd::caseD_b6:
00641084  C7 45 F8 79 04 00 00      MOV dword ptr [EBP + -0x8],0x479
0064108B  EB 34                     JMP 0x006410c1
switchD_00640fbd::caseD_b7:
0064108D  C7 45 F8 7B 04 00 00      MOV dword ptr [EBP + -0x8],0x47b
00641094  EB 2B                     JMP 0x006410c1
switchD_00640fbd::caseD_b9:
00641096  C7 45 F8 7D 04 00 00      MOV dword ptr [EBP + -0x8],0x47d
0064109D  EB 22                     JMP 0x006410c1
switchD_00640fbd::caseD_b8:
0064109F  C7 45 F8 7F 04 00 00      MOV dword ptr [EBP + -0x8],0x47f
006410A6  EB 19                     JMP 0x006410c1
switchD_00640fbd::caseD_ad:
006410A8  C7 45 F8 81 04 00 00      MOV dword ptr [EBP + -0x8],0x481
006410AF  EB 10                     JMP 0x006410c1
switchD_00640fbd::caseD_ba:
006410B1  C7 45 F8 83 04 00 00      MOV dword ptr [EBP + -0x8],0x483
006410B8  EB 07                     JMP 0x006410c1
switchD_00640fbd::caseD_bf:
006410BA  C7 45 F8 87 04 00 00      MOV dword ptr [EBP + -0x8],0x487
switchD_00640fbd::caseD_a2:
006410C1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006410C4  8B 13                     MOV EDX,dword ptr [EBX]
006410C6  50                        PUSH EAX
006410C7  6A 02                     PUSH 0x2
006410C9  8B CB                     MOV ECX,EBX
006410CB  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
006410D1  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
006410D7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006410DC  33 C0                     XOR EAX,EAX
006410DE  5F                        POP EDI
006410DF  5E                        POP ESI
006410E0  5B                        POP EBX
006410E1  8B E5                     MOV ESP,EBP
006410E3  5D                        POP EBP
006410E4  C2 04 00                  RET 0x4
LAB_006410e7:
006410E7  8B 83 3D 02 00 00         MOV EAX,dword ptr [EBX + 0x23d]
006410ED  BE 01 00 00 00            MOV ESI,0x1
006410F2  3B C6                     CMP EAX,ESI
006410F4  0F 85 70 17 00 00         JNZ 0x0064286a
006410FA  8A 83 7D 02 00 00         MOV AL,byte ptr [EBX + 0x27d]
00641100  84 C0                     TEST AL,AL
00641102  0F 86 83 1B 00 00         JBE 0x00642c8b
00641108  66 8B 4B 49               MOV CX,word ptr [EBX + 0x49]
0064110C  66 8B 53 4B               MOV DX,word ptr [EBX + 0x4b]
00641110  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
00641114  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
00641118  66 8B 73 47               MOV SI,word ptr [EBX + 0x47]
0064111C  0F BF 4B 43               MOVSX ECX,word ptr [EBX + 0x43]
00641120  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
00641123  66 89 55 80               MOV word ptr [EBP + -0x80],DX
00641127  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
0064112B  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
0064112E  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
00641134  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
0064113A  50                        PUSH EAX
0064113B  51                        PUSH ECX
0064113C  8B CB                     MOV ECX,EBX
0064113E  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
00641141  E8 01 17 DC FF            CALL 0x00402847
00641146  8B F8                     MOV EDI,EAX
00641148  83 FF FF                  CMP EDI,-0x1
0064114B  75 17                     JNZ 0x00641164
0064114D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00641153  68 5C 01 00 00            PUSH 0x15c
00641158  68 C0 25 7D 00            PUSH 0x7d25c0
0064115D  52                        PUSH EDX
0064115E  50                        PUSH EAX
0064115F  E8 DC 4C 06 00            CALL 0x006a5e40
LAB_00641164:
00641164  66 3B 73 47               CMP SI,word ptr [EBX + 0x47]
00641168  75 18                     JNZ 0x00641182
0064116A  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
0064116E  66 3B 43 49               CMP AX,word ptr [EBX + 0x49]
00641172  75 0E                     JNZ 0x00641182
00641174  66 8B 4D 80               MOV CX,word ptr [EBP + -0x80]
00641178  66 3B 4B 4B               CMP CX,word ptr [EBX + 0x4b]
0064117C  75 04                     JNZ 0x00641182
0064117E  33 F6                     XOR ESI,ESI
00641180  EB 05                     JMP 0x00641187
LAB_00641182:
00641182  BE 01 00 00 00            MOV ESI,0x1
LAB_00641187:
00641187  85 FF                     TEST EDI,EDI
00641189  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
0064118C  0F 85 A1 00 00 00         JNZ 0x00641233
00641192  8A 83 88 02 00 00         MOV AL,byte ptr [EBX + 0x288]
00641198  84 C0                     TEST AL,AL
0064119A  74 29                     JZ 0x006411c5
0064119C  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
006411A0  C6 83 88 02 00 00 02      MOV byte ptr [EBX + 0x288],0x2
006411A7  52                        PUSH EDX
006411A8  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
006411AC  0F BF 4B 41               MOVSX ECX,word ptr [EBX + 0x41]
006411B0  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
006411B6  50                        PUSH EAX
006411B7  51                        PUSH ECX
006411B8  6A 05                     PUSH 0x5
006411BA  52                        PUSH EDX
006411BB  E8 F4 21 DC FF            CALL 0x004033b4
006411C0  83 C4 14                  ADD ESP,0x14
006411C3  EB 6E                     JMP 0x00641233
LAB_006411c5:
006411C5  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
006411CB  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
006411D1  50                        PUSH EAX
006411D2  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
006411D8  51                        PUSH ECX
006411D9  52                        PUSH EDX
006411DA  8B CB                     MOV ECX,EBX
006411DC  E8 34 11 DC FF            CALL 0x00402315
006411E1  8A 43 61                  MOV AL,byte ptr [EBX + 0x61]
006411E4  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
006411EA  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
006411F0  50                        PUSH EAX
006411F1  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
006411F7  51                        PUSH ECX
006411F8  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
006411FC  52                        PUSH EDX
006411FD  66 8B 53 43               MOV DX,word ptr [EBX + 0x43]
00641201  50                        PUSH EAX
00641202  66 8B 43 41               MOV AX,word ptr [EBX + 0x41]
00641206  51                        PUSH ECX
00641207  52                        PUSH EDX
00641208  50                        PUSH EAX
00641209  8B CB                     MOV ECX,EBX
0064120B  E8 45 12 DC FF            CALL 0x00402455
00641210  85 C0                     TEST EAX,EAX
00641212  74 18                     JZ 0x0064122c
00641214  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0064121A  68 70 01 00 00            PUSH 0x170
0064121F  68 C0 25 7D 00            PUSH 0x7d25c0
00641224  51                        PUSH ECX
00641225  6A FF                     PUSH -0x1
00641227  E8 14 4C 06 00            CALL 0x006a5e40
LAB_0064122c:
0064122C  C7 43 7A 00 00 00 00      MOV dword ptr [EBX + 0x7a],0x0
LAB_00641233:
00641233  83 BD 68 FF FF FF 01      CMP dword ptr [EBP + 0xffffff68],0x1
0064123A  75 5D                     JNZ 0x00641299
0064123C  66 8B 43 47               MOV AX,word ptr [EBX + 0x47]
00641240  66 85 C0                  TEST AX,AX
00641243  7C 37                     JL 0x0064127c
00641245  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0064124C  0F BF C0                  MOVSX EAX,AX
0064124F  4A                        DEC EDX
00641250  3B C2                     CMP EAX,EDX
00641252  7F 28                     JG 0x0064127c
00641254  66 8B 43 49               MOV AX,word ptr [EBX + 0x49]
00641258  66 85 C0                  TEST AX,AX
0064125B  7C 1F                     JL 0x0064127c
0064125D  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
00641264  0F BF D0                  MOVSX EDX,AX
00641267  49                        DEC ECX
00641268  3B D1                     CMP EDX,ECX
0064126A  7F 10                     JG 0x0064127c
0064126C  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
00641273  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
00641277  48                        DEC EAX
00641278  3B C8                     CMP ECX,EAX
0064127A  7E 1D                     JLE 0x00641299
LAB_0064127c:
0064127C  8B CB                     MOV ECX,EBX
0064127E  E8 5C 2D DC FF            CALL 0x00403fdf
00641283  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
00641289  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064128E  33 C0                     XOR EAX,EAX
00641290  5F                        POP EDI
00641291  5E                        POP ESI
00641292  5B                        POP EBX
00641293  8B E5                     MOV ESP,EBP
00641295  5D                        POP EBP
00641296  C2 04 00                  RET 0x4
LAB_00641299:
00641299  B9 1C 00 00 00            MOV ECX,0x1c
0064129E  33 C0                     XOR EAX,EAX
006412A0  8D BD C8 FE FF FF         LEA EDI,[EBP + 0xfffffec8]
006412A6  8D 95 EC FE FF FF         LEA EDX,[EBP + 0xfffffeec]
006412AC  F3 AB                     STOSD.REP ES:EDI
006412AE  8D 85 E8 FE FF FF         LEA EAX,[EBP + 0xfffffee8]
006412B4  52                        PUSH EDX
006412B5  8D 8D E4 FE FF FF         LEA ECX,[EBP + 0xfffffee4]
006412BB  50                        PUSH EAX
006412BC  8D 55 EC                  LEA EDX,[EBP + -0x14]
006412BF  51                        PUSH ECX
006412C0  52                        PUSH EDX
006412C1  8B CB                     MOV ECX,EBX
006412C3  E8 DA 3C DC FF            CALL 0x00404fa2
006412C8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006412CB  85 C0                     TEST EAX,EAX
006412CD  8A 83 88 02 00 00         MOV AL,byte ptr [EBX + 0x288]
006412D3  75 17                     JNZ 0x006412ec
006412D5  3C 02                     CMP AL,0x2
006412D7  75 1E                     JNZ 0x006412f7
006412D9  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
006412E0  C7 83 70 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x270],0x0
006412EA  EB 0B                     JMP 0x006412f7
LAB_006412ec:
006412EC  84 C0                     TEST AL,AL
006412EE  74 07                     JZ 0x006412f7
006412F0  C6 83 88 02 00 00 00      MOV byte ptr [EBX + 0x288],0x0
LAB_006412f7:
006412F7  85 F6                     TEST ESI,ESI
006412F9  0F 84 7A 01 00 00         JZ 0x00641479
006412FF  81 BB 59 02 00 00 A3 00 00 00  CMP dword ptr [EBX + 0x259],0xa3
00641309  0F 84 6A 01 00 00         JZ 0x00641479
0064130F  0F BF 7B 47               MOVSX EDI,word ptr [EBX + 0x47]
00641313  0F BF 73 49               MOVSX ESI,word ptr [EBX + 0x49]
00641317  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
0064131E  85 FF                     TEST EDI,EDI
00641320  7C 2C                     JL 0x0064134e
00641322  85 F6                     TEST ESI,ESI
00641324  7C 28                     JL 0x0064134e
00641326  0F BF C1                  MOVSX EAX,CX
00641329  3B F8                     CMP EDI,EAX
0064132B  7D 21                     JGE 0x0064134e
0064132D  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00641334  3B F2                     CMP ESI,EDX
00641336  7D 16                     JGE 0x0064134e
00641338  0F AF C6                  IMUL EAX,ESI
0064133B  8B 15 6C B2 7F 00         MOV EDX,dword ptr [0x007fb26c]
00641341  03 C2                     ADD EAX,EDX
00641343  32 D2                     XOR DL,DL
00641345  3A 14 38                  CMP DL,byte ptr [EAX + EDI*0x1]
00641348  1B C0                     SBB EAX,EAX
0064134A  F7 D8                     NEG EAX
0064134C  EB 02                     JMP 0x00641350
LAB_0064134e:
0064134E  33 C0                     XOR EAX,EAX
LAB_00641350:
00641350  33 D2                     XOR EDX,EDX
00641352  3B C2                     CMP EAX,EDX
00641354  74 45                     JZ 0x0064139b
00641356  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00641359  8B 04 85 4C B2 7F 00      MOV EAX,dword ptr [EAX*0x4 + 0x7fb24c]
00641360  3B C2                     CMP EAX,EDX
00641362  74 13                     JZ 0x00641377
00641364  0F BF C9                  MOVSX ECX,CX
00641367  0F AF CE                  IMUL ECX,ESI
0064136A  03 C8                     ADD ECX,EAX
0064136C  32 C0                     XOR AL,AL
0064136E  3A 04 39                  CMP AL,byte ptr [ECX + EDI*0x1]
00641371  1B C0                     SBB EAX,EAX
00641373  F7 D8                     NEG EAX
00641375  EB 02                     JMP 0x00641379
LAB_00641377:
00641377  33 C0                     XOR EAX,EAX
LAB_00641379:
00641379  3B C2                     CMP EAX,EDX
0064137B  74 0A                     JZ 0x00641387
0064137D  8A 83 86 02 00 00         MOV AL,byte ptr [EBX + 0x286]
00641383  84 C0                     TEST AL,AL
00641385  75 14                     JNZ 0x0064139b
LAB_00641387:
00641387  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0064138E  89 93 70 02 00 00         MOV dword ptr [EBX + 0x270],EDX
00641394  B8 02 00 00 00            MOV EAX,0x2
00641399  EB 03                     JMP 0x0064139e
LAB_0064139b:
0064139B  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
LAB_0064139e:
0064139E  83 F8 01                  CMP EAX,0x1
006413A1  0F 8E D2 00 00 00         JLE 0x00641479
006413A7  81 BB 59 02 00 00 AD 00 00 00  CMP dword ptr [EBX + 0x259],0xad
006413B1  75 1C                     JNZ 0x006413cf
006413B3  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
006413B6  6A 7E                     PUSH 0x7e
006413B8  51                        PUSH ECX
006413B9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006413BF  E8 A7 04 DC FF            CALL 0x0040186b
006413C4  85 C0                     TEST EAX,EAX
006413C6  74 07                     JZ 0x006413cf
006413C8  B8 89 13 00 00            MOV EAX,0x1389
006413CD  EB 15                     JMP 0x006413e4
LAB_006413cf:
006413CF  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
006413D5  2D 96 00 00 00            SUB EAX,0x96
006413DA  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006413DD  8B 04 95 68 64 7E 00      MOV EAX,dword ptr [EDX*0x4 + 0x7e6468]
LAB_006413e4:
006413E4  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
006413E8  0F BF 53 47               MOVSX EDX,word ptr [EBX + 0x47]
006413EC  50                        PUSH EAX
006413ED  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006413F0  6A 01                     PUSH 0x1
006413F2  50                        PUSH EAX
006413F3  51                        PUSH ECX
006413F4  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006413FA  52                        PUSH EDX
006413FB  E8 66 27 DC FF            CALL 0x00403b66
00641400  85 C0                     TEST EAX,EAX
00641402  7C 6E                     JL 0x00641472
00641404  8D 8D EC FE FF FF         LEA ECX,[EBP + 0xfffffeec]
0064140A  8D 95 E8 FE FF FF         LEA EDX,[EBP + 0xfffffee8]
00641410  51                        PUSH ECX
00641411  8D 8D E4 FE FF FF         LEA ECX,[EBP + 0xfffffee4]
00641417  52                        PUSH EDX
00641418  51                        PUSH ECX
00641419  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
0064141D  0F BF 4B 41               MOVSX ECX,word ptr [EBX + 0x41]
00641421  50                        PUSH EAX
00641422  52                        PUSH EDX
00641423  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
00641427  0F BF 93 6C 02 00 00      MOVSX EDX,word ptr [EBX + 0x26c]
0064142E  50                        PUSH EAX
0064142F  51                        PUSH ECX
00641430  0F BF 83 6A 02 00 00      MOVSX EAX,word ptr [EBX + 0x26a]
00641437  0F BF 8B 68 02 00 00      MOVSX ECX,word ptr [EBX + 0x268]
0064143E  52                        PUSH EDX
0064143F  50                        PUSH EAX
00641440  51                        PUSH ECX
00641441  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00641447  E8 FF 37 DC FF            CALL 0x00404c4b
0064144C  8B 95 EC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeec]
00641452  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
00641458  8B 8D E4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee4]
0064145E  52                        PUSH EDX
0064145F  50                        PUSH EAX
00641460  51                        PUSH ECX
00641461  E8 1C 47 DC FF            CALL 0x00405b82
00641466  83 C4 0C                  ADD ESP,0xc
00641469  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
00641470  EB 07                     JMP 0x00641479
LAB_00641472:
00641472  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_00641479:
00641479  83 7D EC 02               CMP dword ptr [EBP + -0x14],0x2
0064147D  75 1D                     JNZ 0x0064149c
0064147F  8B CB                     MOV ECX,EBX
00641481  E8 59 2B DC FF            CALL 0x00403fdf
00641486  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
0064148C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00641491  33 C0                     XOR EAX,EAX
00641493  5F                        POP EDI
00641494  5E                        POP ESI
00641495  5B                        POP EBX
00641496  8B E5                     MOV ESP,EBP
00641498  5D                        POP EBP
00641499  C2 04 00                  RET 0x4
LAB_0064149c:
0064149C  0F BF 93 68 02 00 00      MOVSX EDX,word ptr [EBX + 0x268]
006414A3  0F BF 83 6A 02 00 00      MOVSX EAX,word ptr [EBX + 0x26a]
006414AA  0F BF 8B 6C 02 00 00      MOVSX ECX,word ptr [EBX + 0x26c]
006414B1  89 95 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EDX
006414B7  66 8B 95 E4 FE FF FF      MOV DX,word ptr [EBP + 0xfffffee4]
006414BE  89 85 DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EAX
006414C4  66 8B 85 E8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffee8]
006414CB  89 8D E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],ECX
006414D1  66 8B 8D EC FE FF FF      MOV CX,word ptr [EBP + 0xfffffeec]
006414D8  66 89 93 68 02 00 00      MOV word ptr [EBX + 0x268],DX
006414DF  66 89 83 6A 02 00 00      MOV word ptr [EBX + 0x26a],AX
006414E6  66 89 8B 6C 02 00 00      MOV word ptr [EBX + 0x26c],CX
006414ED  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
006414F3  3D 9F 00 00 00            CMP EAX,0x9f
006414F8  0F 84 09 04 00 00         JZ 0x00641907
006414FE  3D A0 00 00 00            CMP EAX,0xa0
00641503  0F 84 FE 03 00 00         JZ 0x00641907
00641509  3D BF 00 00 00            CMP EAX,0xbf
0064150E  0F 84 F3 03 00 00         JZ 0x00641907
00641514  3D A3 00 00 00            CMP EAX,0xa3
00641519  0F 84 E8 03 00 00         JZ 0x00641907
0064151F  3D 9A 00 00 00            CMP EAX,0x9a
00641524  0F 84 DD 03 00 00         JZ 0x00641907
0064152A  3D 9B 00 00 00            CMP EAX,0x9b
0064152F  0F 84 D2 03 00 00         JZ 0x00641907
00641535  3D 9C 00 00 00            CMP EAX,0x9c
0064153A  0F 84 C7 03 00 00         JZ 0x00641907
00641540  3D 9D 00 00 00            CMP EAX,0x9d
00641545  0F 84 BC 03 00 00         JZ 0x00641907
0064154B  3D 9E 00 00 00            CMP EAX,0x9e
00641550  0F 84 B1 03 00 00         JZ 0x00641907
00641556  3D AE 00 00 00            CMP EAX,0xae
0064155B  0F 84 A6 03 00 00         JZ 0x00641907
00641561  3D A5 00 00 00            CMP EAX,0xa5
00641566  0F 84 9B 03 00 00         JZ 0x00641907
0064156C  8A 83 7D 02 00 00         MOV AL,byte ptr [EBX + 0x27d]
00641572  BE 01 00 00 00            MOV ESI,0x1
00641577  3C 09                     CMP AL,0x9
00641579  73 47                     JNC 0x006415c2
0064157B  66 8B 93 62 02 00 00      MOV DX,word ptr [EBX + 0x262]
00641582  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
00641585  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064158B  56                        PUSH ESI
0064158C  52                        PUSH EDX
0064158D  50                        PUSH EAX
0064158E  E8 27 13 DC FF            CALL 0x004028ba
00641593  85 C0                     TEST EAX,EAX
00641595  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00641598  74 09                     JZ 0x006415a3
0064159A  80 BB 7D 02 00 00 08      CMP byte ptr [EBX + 0x27d],0x8
006415A1  75 0A                     JNZ 0x006415ad
LAB_006415a3:
006415A3  C7 83 64 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x264],0x0
LAB_006415ad:
006415AD  85 C0                     TEST EAX,EAX
006415AF  74 11                     JZ 0x006415c2
006415B1  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
006415B7  E8 10 3D DC FF            CALL 0x004052cc
006415BC  89 85 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EAX
LAB_006415c2:
006415C2  8B 8B 64 02 00 00         MOV ECX,dword ptr [EBX + 0x264]
006415C8  33 C0                     XOR EAX,EAX
006415CA  89 8D 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],ECX
006415D0  8B 8B 59 02 00 00         MOV ECX,dword ptr [EBX + 0x259]
006415D6  8D B9 6A FF FF FF         LEA EDI,[ECX + 0xffffff6a]
006415DC  83 FF 22                  CMP EDI,0x22
006415DF  77 65                     JA 0x00641646
006415E1  33 D2                     XOR EDX,EDX
006415E3  8A 97 D8 31 64 00         MOV DL,byte ptr [EDI + 0x6431d8]
switchD_006415e9::switchD:
006415E9  FF 24 95 C4 31 64 00      JMP dword ptr [EDX*0x4 + 0x6431c4]
switchD_006415e9::caseD_96:
006415F0  89 B5 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],ESI
006415F6  89 B5 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ESI
006415FC  EB 46                     JMP 0x00641644
switchD_006415e9::caseD_a4:
006415FE  C7 85 C8 FE FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffec8],0x2
00641608  89 B5 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ESI
0064160E  8B C6                     MOV EAX,ESI
00641610  89 B5 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],ESI
00641616  EB 2E                     JMP 0x00641646
switchD_006415e9::caseD_ac:
00641618  C7 85 C8 FE FF FF 06 00 00 00  MOV dword ptr [EBP + 0xfffffec8],0x6
00641622  89 B5 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ESI
00641628  EB 1A                     JMP 0x00641644
switchD_006415e9::caseD_a1:
0064162A  C7 85 C8 FE FF FF 07 00 00 00  MOV dword ptr [EBP + 0xfffffec8],0x7
00641634  89 B5 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ESI
0064163A  C7 85 D4 FE FF FF FF FF FF FF  MOV dword ptr [EBP + 0xfffffed4],0xffffffff
LAB_00641644:
00641644  8B C6                     MOV EAX,ESI
switchD_006415e9::caseD_9f:
00641646  8A 93 7D 02 00 00         MOV DL,byte ptr [EBX + 0x27d]
0064164C  84 D2                     TEST DL,DL
0064164E  0F 86 B8 02 00 00         JBE 0x0064190c
00641654  85 C0                     TEST EAX,EAX
00641656  0F 84 B0 02 00 00         JZ 0x0064190c
0064165C  81 F9 A1 00 00 00         CMP ECX,0xa1
00641662  74 17                     JZ 0x0064167b
00641664  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0064166A  8D 85 C8 FE FF FF         LEA EAX,[EBP + 0xfffffec8]
00641670  50                        PUSH EAX
00641671  E8 88 32 DC FF            CALL 0x004048fe
00641676  E9 91 02 00 00            JMP 0x0064190c
LAB_0064167b:
0064167B  0F BF 4B 45               MOVSX ECX,word ptr [EBX + 0x45]
0064167F  0F BF 53 43               MOVSX EDX,word ptr [EBX + 0x43]
00641683  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
00641687  51                        PUSH ECX
00641688  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0064168B  52                        PUSH EDX
0064168C  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
0064168F  50                        PUSH EAX
00641690  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00641693  51                        PUSH ECX
00641694  52                        PUSH EDX
00641695  50                        PUSH EAX
00641696  E8 72 B8 06 00            CALL 0x006acf0d
0064169B  8B F8                     MOV EDI,EAX
0064169D  83 C4 18                  ADD ESP,0x18
006416A0  85 FF                     TEST EDI,EDI
006416A2  0F 84 42 03 00 00         JZ 0x006419ea
006416A8  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
006416AC  2B 45 84                  SUB EAX,dword ptr [EBP + -0x7c]
006416AF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416B2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416B5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416B8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416BB  C1 E0 04                  SHL EAX,0x4
006416BE  99                        CDQ
006416BF  F7 FF                     IDIV EDI
006416C1  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006416C4  8B F0                     MOV ESI,EAX
006416C6  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
006416CA  2B C2                     SUB EAX,EDX
006416CC  89 B5 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ESI
006416D2  0F AF F7                  IMUL ESI,EDI
006416D5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416D8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416DB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416DE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416E1  C1 E0 04                  SHL EAX,0x4
006416E4  99                        CDQ
006416E5  F7 FF                     IDIV EDI
006416E7  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006416EA  8B C8                     MOV ECX,EAX
006416EC  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
006416F0  2B C2                     SUB EAX,EDX
006416F2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006416F5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416F8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416FB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006416FE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00641701  C1 E0 04                  SHL EAX,0x4
00641704  99                        CDQ
00641705  F7 FF                     IDIV EDI
00641707  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0064170D  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00641712  F7 E9                     IMUL ECX
00641714  0F AF CF                  IMUL ECX,EDI
00641717  C1 FA 0C                  SAR EDX,0xc
0064171A  8B C2                     MOV EAX,EDX
0064171C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0064171F  C1 E8 1F                  SHR EAX,0x1f
00641722  03 D0                     ADD EDX,EAX
00641724  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00641729  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
0064172F  F7 EE                     IMUL ESI
00641731  C1 FA 0E                  SAR EDX,0xe
00641734  8B C2                     MOV EAX,EDX
00641736  C1 E8 1F                  SHR EAX,0x1f
00641739  03 D0                     ADD EDX,EAX
0064173B  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
00641741  03 D0                     ADD EDX,EAX
00641743  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00641746  03 D0                     ADD EDX,EAX
00641748  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0064174D  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
00641753  F7 AD 70 FF FF FF         IMUL dword ptr [EBP + 0xffffff70]
00641759  C1 FA 0C                  SAR EDX,0xc
0064175C  8B C2                     MOV EAX,EDX
0064175E  C1 E8 1F                  SHR EAX,0x1f
00641761  03 D0                     ADD EDX,EAX
00641763  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00641768  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
0064176B  F7 E9                     IMUL ECX
0064176D  C1 FA 0E                  SAR EDX,0xe
00641770  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00641773  8B CA                     MOV ECX,EDX
00641775  C1 E9 1F                  SHR ECX,0x1f
00641778  03 D1                     ADD EDX,ECX
0064177A  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
0064177D  03 D1                     ADD EDX,ECX
0064177F  B9 0B 00 00 00            MOV ECX,0xb
00641784  03 D0                     ADD EDX,EAX
00641786  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00641789  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0064178C  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00641792  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00641798  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0064179B  C1 E8 10                  SHR EAX,0x10
0064179E  33 D2                     XOR EDX,EDX
006417A0  F7 F1                     DIV ECX
006417A2  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006417A8  6A 00                     PUSH 0x0
006417AA  0F AF C7                  IMUL EAX,EDI
006417AD  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006417B3  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006417B8  6A 00                     PUSH 0x0
006417BA  6A FF                     PUSH -0x1
006417BC  6A 00                     PUSH 0x0
006417BE  6A 00                     PUSH 0x0
006417C0  6A 00                     PUSH 0x0
006417C2  6A 00                     PUSH 0x0
006417C4  8B BD 7C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff7c]
006417CA  8B CA                     MOV ECX,EDX
006417CC  83 C1 05                  ADD ECX,0x5
006417CF  8B D1                     MOV EDX,ECX
006417D1  0F AF 4D F4               IMUL ECX,dword ptr [EBP + -0xc]
006417D5  0F AF 95 70 FF FF FF      IMUL EDX,dword ptr [EBP + 0xffffff70]
006417DC  F7 EA                     IMUL EDX
006417DE  C1 FA 0C                  SAR EDX,0xc
006417E1  8B C2                     MOV EAX,EDX
006417E3  C1 E8 1F                  SHR EAX,0x1f
006417E6  03 D0                     ADD EDX,EAX
006417E8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006417ED  52                        PUSH EDX
006417EE  F7 E9                     IMUL ECX
006417F0  C1 FA 0C                  SAR EDX,0xc
006417F3  8B CA                     MOV ECX,EDX
006417F5  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006417FA  C1 E9 1F                  SHR ECX,0x1f
006417FD  03 D1                     ADD EDX,ECX
006417FF  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
00641802  52                        PUSH EDX
00641803  F7 EF                     IMUL EDI
00641805  C1 FA 0E                  SAR EDX,0xe
00641808  8B C2                     MOV EAX,EDX
0064180A  C1 E8 1F                  SHR EAX,0x1f
0064180D  03 D0                     ADD EDX,EAX
0064180F  03 D1                     ADD EDX,ECX
00641811  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00641814  52                        PUSH EDX
00641815  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
0064181B  51                        PUSH ECX
0064181C  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00641822  52                        PUSH EDX
00641823  6A 00                     PUSH 0x0
00641825  6A 01                     PUSH 0x1
00641827  6A 07                     PUSH 0x7
00641829  E8 05 FC DB FF            CALL 0x00401433
0064182E  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
00641831  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00641836  F7 EE                     IMUL ESI
00641838  C1 FA 0E                  SAR EDX,0xe
0064183B  8B C2                     MOV EAX,EDX
0064183D  C1 E8 1F                  SHR EAX,0x1f
00641840  03 D0                     ADD EDX,EAX
00641842  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
00641848  8B F2                     MOV ESI,EDX
0064184A  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0064184D  2B F0                     SUB ESI,EAX
0064184F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00641852  03 F2                     ADD ESI,EDX
00641854  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00641857  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0064185C  F7 E9                     IMUL ECX
0064185E  C1 FA 0E                  SAR EDX,0xe
00641861  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00641864  8B CA                     MOV ECX,EDX
00641866  C1 E9 1F                  SHR ECX,0x1f
00641869  03 D1                     ADD EDX,ECX
0064186B  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
0064186E  03 D1                     ADD EDX,ECX
00641870  B9 0B 00 00 00            MOV ECX,0xb
00641875  03 D0                     ADD EDX,EAX
00641877  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0064187A  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0064187D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00641883  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00641889  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0064188C  C1 E8 10                  SHR EAX,0x10
0064188F  33 D2                     XOR EDX,EDX
00641891  F7 F1                     DIV ECX
00641893  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00641898  6A 00                     PUSH 0x0
0064189A  6A 00                     PUSH 0x0
0064189C  6A FF                     PUSH -0x1
0064189E  6A 00                     PUSH 0x0
006418A0  6A 00                     PUSH 0x0
006418A2  6A 00                     PUSH 0x0
006418A4  6A 00                     PUSH 0x0
006418A6  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
006418A9  8B CA                     MOV ECX,EDX
006418AB  83 C1 05                  ADD ECX,0x5
006418AE  8B D1                     MOV EDX,ECX
006418B0  0F AF 4D F4               IMUL ECX,dword ptr [EBP + -0xc]
006418B4  0F AF 95 70 FF FF FF      IMUL EDX,dword ptr [EBP + 0xffffff70]
006418BB  F7 EA                     IMUL EDX
006418BD  C1 FA 0C                  SAR EDX,0xc
006418C0  8B C2                     MOV EAX,EDX
006418C2  C1 E8 1F                  SHR EAX,0x1f
006418C5  03 D0                     ADD EDX,EAX
006418C7  B8 53 74 24 97            MOV EAX,0x97247453
006418CC  52                        PUSH EDX
006418CD  F7 E9                     IMUL ECX
006418CF  C1 FA 0C                  SAR EDX,0xc
006418D2  8B CA                     MOV ECX,EDX
006418D4  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006418D9  C1 E9 1F                  SHR ECX,0x1f
006418DC  03 D1                     ADD EDX,ECX
006418DE  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006418E1  52                        PUSH EDX
006418E2  F7 EF                     IMUL EDI
006418E4  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
006418E7  C1 FA 0E                  SAR EDX,0xe
006418EA  8B C2                     MOV EAX,EDX
006418EC  C1 E8 1F                  SHR EAX,0x1f
006418EF  03 D0                     ADD EDX,EAX
006418F1  03 D7                     ADD EDX,EDI
006418F3  52                        PUSH EDX
006418F4  51                        PUSH ECX
006418F5  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
006418FB  56                        PUSH ESI
006418FC  6A 00                     PUSH 0x0
006418FE  6A 01                     PUSH 0x1
00641900  6A 07                     PUSH 0x7
00641902  E8 2C FB DB FF            CALL 0x00401433
LAB_00641907:
00641907  BE 01 00 00 00            MOV ESI,0x1
LAB_0064190c:
0064190C  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00641912  3D 99 00 00 00            CMP EAX,0x99
00641917  74 07                     JZ 0x00641920
00641919  3D B7 00 00 00            CMP EAX,0xb7
0064191E  75 25                     JNZ 0x00641945
LAB_00641920:
00641920  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00641923  85 C0                     TEST EAX,EAX
00641925  75 1E                     JNZ 0x00641945
00641927  33 D2                     XOR EDX,EDX
00641929  8A 53 61                  MOV DL,byte ptr [EBX + 0x61]
0064192C  0F AF 53 68               IMUL EDX,dword ptr [EBX + 0x68]
00641930  81 FA 92 01 00 00         CMP EDX,0x192
00641936  7C 0D                     JL 0x00641945
00641938  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0064193B  C7 83 70 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x270],0x0
LAB_00641945:
00641945  81 BB 59 02 00 00 9A 00 00 00  CMP dword ptr [EBX + 0x259],0x9a
0064194F  75 1E                     JNZ 0x0064196f
00641951  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
00641955  0F BF 4B 43               MOVSX ECX,word ptr [EBX + 0x43]
00641959  0F BF 53 41               MOVSX EDX,word ptr [EBX + 0x41]
0064195D  50                        PUSH EAX
0064195E  8B 83 7E 02 00 00         MOV EAX,dword ptr [EBX + 0x27e]
00641964  51                        PUSH ECX
00641965  52                        PUSH EDX
00641966  50                        PUSH EAX
00641967  E8 49 23 DC FF            CALL 0x00403cb5
0064196C  83 C4 10                  ADD ESP,0x10
LAB_0064196f:
0064196F  39 75 EC                  CMP dword ptr [EBP + -0x14],ESI
00641972  0F 85 13 13 00 00         JNZ 0x00642c8b
00641978  C7 83 3D 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x23d],0x0
00641982  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00641988  6A 00                     PUSH 0x0
0064198A  C6 83 7C 02 00 00 00      MOV byte ptr [EBX + 0x27c],0x0
00641991  E8 CE 28 DC FF            CALL 0x00404264
00641996  81 BB 59 02 00 00 99 00 00 00  CMP dword ptr [EBX + 0x259],0x99
006419A0  0F 85 B0 00 00 00         JNZ 0x00641a56
006419A6  66 8B 8B 62 02 00 00      MOV CX,word ptr [EBX + 0x262]
006419AD  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
006419B0  6A 01                     PUSH 0x1
006419B2  51                        PUSH ECX
006419B3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006419B9  52                        PUSH EDX
006419BA  E8 FB 0E DC FF            CALL 0x004028ba
006419BF  85 C0                     TEST EAX,EAX
006419C1  74 6E                     JZ 0x00641a31
006419C3  8B 10                     MOV EDX,dword ptr [EAX]
006419C5  8B C8                     MOV ECX,EAX
006419C7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006419CA  83 F8 10                  CMP EAX,0x10
006419CD  75 51                     JNZ 0x00641a20
006419CF  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
006419D2  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006419D8  05 39 30 00 00            ADD EAX,0x3039
006419DD  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
006419E0  C1 E8 10                  SHR EAX,0x10
006419E3  50                        PUSH EAX
006419E4  6A 01                     PUSH 0x1
006419E6  6A 05                     PUSH 0x5
006419E8  EB 61                     JMP 0x00641a4b
LAB_006419ea:
006419EA  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
006419EE  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
006419F2  0F BF 4B 41               MOVSX ECX,word ptr [EBX + 0x41]
006419F6  6A 00                     PUSH 0x0
006419F8  6A 00                     PUSH 0x0
006419FA  6A FF                     PUSH -0x1
006419FC  6A 00                     PUSH 0x0
006419FE  6A 00                     PUSH 0x0
00641A00  6A 00                     PUSH 0x0
00641A02  6A 00                     PUSH 0x0
00641A04  6A 00                     PUSH 0x0
00641A06  6A 00                     PUSH 0x0
00641A08  52                        PUSH EDX
00641A09  50                        PUSH EAX
00641A0A  51                        PUSH ECX
00641A0B  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00641A11  6A 00                     PUSH 0x0
00641A13  56                        PUSH ESI
00641A14  6A 07                     PUSH 0x7
00641A16  E8 18 FA DB FF            CALL 0x00401433
00641A1B  E9 EC FE FF FF            JMP 0x0064190c
LAB_00641a20:
00641A20  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00641A23  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00641A29  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00641A2F  EB 0F                     JMP 0x00641a40
LAB_00641a31:
00641A31  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00641A34  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00641A3A  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_00641a40:
00641A40  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00641A43  C1 E8 10                  SHR EAX,0x10
00641A46  50                        PUSH EAX
00641A47  6A 01                     PUSH 0x1
00641A49  6A 07                     PUSH 0x7
LAB_00641a4b:
00641A4B  6A 00                     PUSH 0x0
00641A4D  53                        PUSH EBX
00641A4E  E8 50 16 DC FF            CALL 0x004030a3
00641A53  83 C4 14                  ADD ESP,0x14
LAB_00641a56:
00641A56  81 BB 59 02 00 00 B7 00 00 00  CMP dword ptr [EBX + 0x259],0xb7
00641A60  75 24                     JNZ 0x00641a86
00641A62  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00641A65  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00641A6B  05 39 30 00 00            ADD EAX,0x3039
00641A70  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00641A73  C1 E8 10                  SHR EAX,0x10
00641A76  50                        PUSH EAX
00641A77  6A 01                     PUSH 0x1
00641A79  6A 05                     PUSH 0x5
00641A7B  6A 00                     PUSH 0x0
00641A7D  53                        PUSH EBX
00641A7E  E8 20 16 DC FF            CALL 0x004030a3
00641A83  83 C4 14                  ADD ESP,0x14
LAB_00641a86:
00641A86  81 BB 59 02 00 00 AC 00 00 00  CMP dword ptr [EBX + 0x259],0xac
00641A90  75 0B                     JNZ 0x00641a9d
00641A92  6A 01                     PUSH 0x1
00641A94  53                        PUSH EBX
00641A95  E8 7C 16 DC FF            CALL 0x00403116
00641A9A  83 C4 08                  ADD ESP,0x8
LAB_00641a9d:
00641A9D  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00641AA3  C6 45 BC 00               MOV byte ptr [EBP + -0x44],0x0
00641AA7  05 6A FF FF FF            ADD EAX,0xffffff6a
00641AAC  C6 45 D8 00               MOV byte ptr [EBP + -0x28],0x0
00641AB0  83 F8 29                  CMP EAX,0x29
00641AB3  C6 45 90 00               MOV byte ptr [EBP + -0x70],0x0
00641AB7  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
00641ABB  0F 87 C9 0A 00 00         JA 0x0064258a
00641AC1  33 C9                     XOR ECX,ECX
00641AC3  8A 88 4C 32 64 00         MOV CL,byte ptr [EAX + 0x64324c]
switchD_00641ac9::switchD:
00641AC9  FF 24 8D FC 31 64 00      JMP dword ptr [ECX*0x4 + 0x6431fc]
switchD_00641ac9::caseD_96:
00641AD0  83 C9 FF                  OR ECX,0xffffffff
00641AD3  BF 14 25 7D 00            MOV EDI,0x7d2514
00641AD8  33 C0                     XOR EAX,EAX
00641ADA  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641ADD  F2 AE                     SCASB.REPNE ES:EDI
00641ADF  F7 D1                     NOT ECX
00641AE1  2B F9                     SUB EDI,ECX
00641AE3  C6 45 FF 14               MOV byte ptr [EBP + -0x1],0x14
00641AE7  8B F7                     MOV ESI,EDI
00641AE9  8B FA                     MOV EDI,EDX
00641AEB  8B D1                     MOV EDX,ECX
00641AED  83 C9 FF                  OR ECX,0xffffffff
00641AF0  F2 AE                     SCASB.REPNE ES:EDI
00641AF2  8B CA                     MOV ECX,EDX
00641AF4  4F                        DEC EDI
00641AF5  C1 E9 02                  SHR ECX,0x2
00641AF8  F3 A5                     MOVSD.REP ES:EDI,ESI
00641AFA  8B CA                     MOV ECX,EDX
00641AFC  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641AFF  83 E1 03                  AND ECX,0x3
00641B02  F3 A4                     MOVSB.REP ES:EDI,ESI
00641B04  BF 08 25 7D 00            MOV EDI,0x7d2508
00641B09  83 C9 FF                  OR ECX,0xffffffff
00641B0C  F2 AE                     SCASB.REPNE ES:EDI
00641B0E  F7 D1                     NOT ECX
00641B10  2B F9                     SUB EDI,ECX
00641B12  8B F7                     MOV ESI,EDI
00641B14  8B FA                     MOV EDI,EDX
00641B16  8B D1                     MOV EDX,ECX
00641B18  83 C9 FF                  OR ECX,0xffffffff
00641B1B  F2 AE                     SCASB.REPNE ES:EDI
00641B1D  8B CA                     MOV ECX,EDX
00641B1F  4F                        DEC EDI
00641B20  C1 E9 02                  SHR ECX,0x2
00641B23  F3 A5                     MOVSD.REP ES:EDI,ESI
00641B25  8B CA                     MOV ECX,EDX
00641B27  8D 55 90                  LEA EDX,[EBP + -0x70]
00641B2A  83 E1 03                  AND ECX,0x3
00641B2D  F3 A4                     MOVSB.REP ES:EDI,ESI
00641B2F  BF 70 05 7D 00            MOV EDI,0x7d0570
00641B34  83 C9 FF                  OR ECX,0xffffffff
00641B37  F2 AE                     SCASB.REPNE ES:EDI
00641B39  F7 D1                     NOT ECX
00641B3B  2B F9                     SUB EDI,ECX
00641B3D  8B F7                     MOV ESI,EDI
00641B3F  8B FA                     MOV EDI,EDX
00641B41  8B D1                     MOV EDX,ECX
00641B43  83 C9 FF                  OR ECX,0xffffffff
00641B46  F2 AE                     SCASB.REPNE ES:EDI
00641B48  8B CA                     MOV ECX,EDX
00641B4A  4F                        DEC EDI
00641B4B  C1 E9 02                  SHR ECX,0x2
00641B4E  F3 A5                     MOVSD.REP ES:EDI,ESI
00641B50  8B CA                     MOV ECX,EDX
00641B52  83 E1 03                  AND ECX,0x3
00641B55  F3 A4                     MOVSB.REP ES:EDI,ESI
00641B57  E9 2E 0A 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_97:
00641B5C  8A 83 88 02 00 00         MOV AL,byte ptr [EBX + 0x288]
00641B62  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641B65  3C 02                     CMP AL,0x2
00641B67  0F 85 89 00 00 00         JNZ 0x00641bf6
00641B6D  83 C9 FF                  OR ECX,0xffffffff
00641B70  BF 00 25 7D 00            MOV EDI,0x7d2500
00641B75  33 C0                     XOR EAX,EAX
00641B77  C6 45 FF 0A               MOV byte ptr [EBP + -0x1],0xa
00641B7B  F2 AE                     SCASB.REPNE ES:EDI
00641B7D  F7 D1                     NOT ECX
00641B7F  2B F9                     SUB EDI,ECX
00641B81  8B F7                     MOV ESI,EDI
00641B83  8B FA                     MOV EDI,EDX
00641B85  8B D1                     MOV EDX,ECX
00641B87  83 C9 FF                  OR ECX,0xffffffff
00641B8A  F2 AE                     SCASB.REPNE ES:EDI
00641B8C  8B CA                     MOV ECX,EDX
00641B8E  4F                        DEC EDI
00641B8F  C1 E9 02                  SHR ECX,0x2
00641B92  F3 A5                     MOVSD.REP ES:EDI,ESI
00641B94  8B CA                     MOV ECX,EDX
00641B96  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641B99  83 E1 03                  AND ECX,0x3
00641B9C  F3 A4                     MOVSB.REP ES:EDI,ESI
00641B9E  BF 88 05 7D 00            MOV EDI,0x7d0588
00641BA3  83 C9 FF                  OR ECX,0xffffffff
00641BA6  F2 AE                     SCASB.REPNE ES:EDI
00641BA8  F7 D1                     NOT ECX
00641BAA  2B F9                     SUB EDI,ECX
00641BAC  8B F7                     MOV ESI,EDI
00641BAE  8B FA                     MOV EDI,EDX
00641BB0  8B D1                     MOV EDX,ECX
00641BB2  83 C9 FF                  OR ECX,0xffffffff
00641BB5  F2 AE                     SCASB.REPNE ES:EDI
00641BB7  8B CA                     MOV ECX,EDX
00641BB9  4F                        DEC EDI
00641BBA  C1 E9 02                  SHR ECX,0x2
00641BBD  F3 A5                     MOVSD.REP ES:EDI,ESI
00641BBF  8B CA                     MOV ECX,EDX
00641BC1  8D 55 90                  LEA EDX,[EBP + -0x70]
00641BC4  83 E1 03                  AND ECX,0x3
00641BC7  F3 A4                     MOVSB.REP ES:EDI,ESI
00641BC9  BF 64 05 7D 00            MOV EDI,0x7d0564
00641BCE  83 C9 FF                  OR ECX,0xffffffff
00641BD1  F2 AE                     SCASB.REPNE ES:EDI
00641BD3  F7 D1                     NOT ECX
00641BD5  2B F9                     SUB EDI,ECX
00641BD7  8B F7                     MOV ESI,EDI
00641BD9  8B FA                     MOV EDI,EDX
00641BDB  8B D1                     MOV EDX,ECX
00641BDD  83 C9 FF                  OR ECX,0xffffffff
00641BE0  F2 AE                     SCASB.REPNE ES:EDI
00641BE2  8B CA                     MOV ECX,EDX
00641BE4  4F                        DEC EDI
00641BE5  C1 E9 02                  SHR ECX,0x2
00641BE8  F3 A5                     MOVSD.REP ES:EDI,ESI
00641BEA  8B CA                     MOV ECX,EDX
00641BEC  83 E1 03                  AND ECX,0x3
00641BEF  F3 A4                     MOVSB.REP ES:EDI,ESI
00641BF1  E9 94 09 00 00            JMP 0x0064258a
LAB_00641bf6:
00641BF6  83 C9 FF                  OR ECX,0xffffffff
00641BF9  BF 94 05 7D 00            MOV EDI,0x7d0594
00641BFE  33 C0                     XOR EAX,EAX
00641C00  C6 45 FF 14               MOV byte ptr [EBP + -0x1],0x14
00641C04  F2 AE                     SCASB.REPNE ES:EDI
00641C06  F7 D1                     NOT ECX
00641C08  2B F9                     SUB EDI,ECX
00641C0A  8B F7                     MOV ESI,EDI
00641C0C  8B FA                     MOV EDI,EDX
00641C0E  8B D1                     MOV EDX,ECX
00641C10  83 C9 FF                  OR ECX,0xffffffff
00641C13  F2 AE                     SCASB.REPNE ES:EDI
00641C15  8B CA                     MOV ECX,EDX
00641C17  4F                        DEC EDI
00641C18  C1 E9 02                  SHR ECX,0x2
00641C1B  F3 A5                     MOVSD.REP ES:EDI,ESI
00641C1D  8B CA                     MOV ECX,EDX
00641C1F  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641C22  83 E1 03                  AND ECX,0x3
00641C25  F3 A4                     MOVSB.REP ES:EDI,ESI
00641C27  BF 88 05 7D 00            MOV EDI,0x7d0588
00641C2C  83 C9 FF                  OR ECX,0xffffffff
00641C2F  F2 AE                     SCASB.REPNE ES:EDI
00641C31  F7 D1                     NOT ECX
00641C33  2B F9                     SUB EDI,ECX
00641C35  8B F7                     MOV ESI,EDI
00641C37  8B FA                     MOV EDI,EDX
00641C39  8B D1                     MOV EDX,ECX
00641C3B  83 C9 FF                  OR ECX,0xffffffff
00641C3E  F2 AE                     SCASB.REPNE ES:EDI
00641C40  8B CA                     MOV ECX,EDX
00641C42  4F                        DEC EDI
00641C43  C1 E9 02                  SHR ECX,0x2
00641C46  F3 A5                     MOVSD.REP ES:EDI,ESI
00641C48  8B CA                     MOV ECX,EDX
00641C4A  8D 55 90                  LEA EDX,[EBP + -0x70]
00641C4D  83 E1 03                  AND ECX,0x3
00641C50  F3 A4                     MOVSB.REP ES:EDI,ESI
00641C52  BF 64 05 7D 00            MOV EDI,0x7d0564
00641C57  83 C9 FF                  OR ECX,0xffffffff
00641C5A  F2 AE                     SCASB.REPNE ES:EDI
00641C5C  F7 D1                     NOT ECX
00641C5E  2B F9                     SUB EDI,ECX
00641C60  8B F7                     MOV ESI,EDI
00641C62  8B FA                     MOV EDI,EDX
00641C64  8B D1                     MOV EDX,ECX
00641C66  83 C9 FF                  OR ECX,0xffffffff
00641C69  F2 AE                     SCASB.REPNE ES:EDI
00641C6B  8B CA                     MOV ECX,EDX
00641C6D  4F                        DEC EDI
00641C6E  C1 E9 02                  SHR ECX,0x2
00641C71  F3 A5                     MOVSD.REP ES:EDI,ESI
00641C73  8B CA                     MOV ECX,EDX
00641C75  83 E1 03                  AND ECX,0x3
00641C78  F3 A4                     MOVSB.REP ES:EDI,ESI
00641C7A  E9 0B 09 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_98:
00641C7F  83 C9 FF                  OR ECX,0xffffffff
00641C82  BF F8 24 7D 00            MOV EDI,0x7d24f8
00641C87  33 C0                     XOR EAX,EAX
00641C89  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641C8C  F2 AE                     SCASB.REPNE ES:EDI
00641C8E  F7 D1                     NOT ECX
00641C90  2B F9                     SUB EDI,ECX
00641C92  C6 45 FF 12               MOV byte ptr [EBP + -0x1],0x12
00641C96  8B F7                     MOV ESI,EDI
00641C98  8B FA                     MOV EDI,EDX
00641C9A  8B D1                     MOV EDX,ECX
00641C9C  83 C9 FF                  OR ECX,0xffffffff
00641C9F  F2 AE                     SCASB.REPNE ES:EDI
00641CA1  8B CA                     MOV ECX,EDX
00641CA3  4F                        DEC EDI
00641CA4  C1 E9 02                  SHR ECX,0x2
00641CA7  F3 A5                     MOVSD.REP ES:EDI,ESI
00641CA9  8B CA                     MOV ECX,EDX
00641CAB  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641CAE  83 E1 03                  AND ECX,0x3
00641CB1  F3 A4                     MOVSB.REP ES:EDI,ESI
00641CB3  BF 7C 05 7D 00            MOV EDI,0x7d057c
00641CB8  83 C9 FF                  OR ECX,0xffffffff
00641CBB  F2 AE                     SCASB.REPNE ES:EDI
00641CBD  F7 D1                     NOT ECX
00641CBF  2B F9                     SUB EDI,ECX
00641CC1  8B F7                     MOV ESI,EDI
00641CC3  8B FA                     MOV EDI,EDX
00641CC5  8B D1                     MOV EDX,ECX
00641CC7  83 C9 FF                  OR ECX,0xffffffff
00641CCA  F2 AE                     SCASB.REPNE ES:EDI
00641CCC  8B CA                     MOV ECX,EDX
00641CCE  4F                        DEC EDI
00641CCF  C1 E9 02                  SHR ECX,0x2
00641CD2  F3 A5                     MOVSD.REP ES:EDI,ESI
00641CD4  8B CA                     MOV ECX,EDX
00641CD6  8D 55 90                  LEA EDX,[EBP + -0x70]
00641CD9  83 E1 03                  AND ECX,0x3
00641CDC  F3 A4                     MOVSB.REP ES:EDI,ESI
00641CDE  BF EC 24 7D 00            MOV EDI,0x7d24ec
00641CE3  83 C9 FF                  OR ECX,0xffffffff
00641CE6  F2 AE                     SCASB.REPNE ES:EDI
00641CE8  F7 D1                     NOT ECX
00641CEA  2B F9                     SUB EDI,ECX
00641CEC  8B F7                     MOV ESI,EDI
00641CEE  8B FA                     MOV EDI,EDX
00641CF0  8B D1                     MOV EDX,ECX
00641CF2  83 C9 FF                  OR ECX,0xffffffff
00641CF5  F2 AE                     SCASB.REPNE ES:EDI
00641CF7  8B CA                     MOV ECX,EDX
00641CF9  4F                        DEC EDI
00641CFA  C1 E9 02                  SHR ECX,0x2
00641CFD  F3 A5                     MOVSD.REP ES:EDI,ESI
00641CFF  8B CA                     MOV ECX,EDX
00641D01  83 E1 03                  AND ECX,0x3
00641D04  F3 A4                     MOVSB.REP ES:EDI,ESI
00641D06  E9 7F 08 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_9a:
00641D0B  83 C9 FF                  OR ECX,0xffffffff
00641D0E  BF 00 25 7D 00            MOV EDI,0x7d2500
00641D13  33 C0                     XOR EAX,EAX
00641D15  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641D18  F2 AE                     SCASB.REPNE ES:EDI
00641D1A  F7 D1                     NOT ECX
00641D1C  2B F9                     SUB EDI,ECX
00641D1E  C6 45 FF 0A               MOV byte ptr [EBP + -0x1],0xa
00641D22  8B F7                     MOV ESI,EDI
00641D24  8B FA                     MOV EDI,EDX
00641D26  8B D1                     MOV EDX,ECX
00641D28  83 C9 FF                  OR ECX,0xffffffff
00641D2B  F2 AE                     SCASB.REPNE ES:EDI
00641D2D  8B CA                     MOV ECX,EDX
00641D2F  4F                        DEC EDI
00641D30  C1 E9 02                  SHR ECX,0x2
00641D33  F3 A5                     MOVSD.REP ES:EDI,ESI
00641D35  8B CA                     MOV ECX,EDX
00641D37  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641D3A  83 E1 03                  AND ECX,0x3
00641D3D  F3 A4                     MOVSB.REP ES:EDI,ESI
00641D3F  BF 7C 05 7D 00            MOV EDI,0x7d057c
00641D44  83 C9 FF                  OR ECX,0xffffffff
00641D47  F2 AE                     SCASB.REPNE ES:EDI
00641D49  F7 D1                     NOT ECX
00641D4B  2B F9                     SUB EDI,ECX
00641D4D  8B F7                     MOV ESI,EDI
00641D4F  8B FA                     MOV EDI,EDX
00641D51  8B D1                     MOV EDX,ECX
00641D53  83 C9 FF                  OR ECX,0xffffffff
00641D56  F2 AE                     SCASB.REPNE ES:EDI
00641D58  8B CA                     MOV ECX,EDX
00641D5A  4F                        DEC EDI
00641D5B  C1 E9 02                  SHR ECX,0x2
00641D5E  F3 A5                     MOVSD.REP ES:EDI,ESI
00641D60  8B CA                     MOV ECX,EDX
00641D62  8D 55 90                  LEA EDX,[EBP + -0x70]
00641D65  83 E1 03                  AND ECX,0x3
00641D68  F3 A4                     MOVSB.REP ES:EDI,ESI
00641D6A  BF 64 05 7D 00            MOV EDI,0x7d0564
00641D6F  83 C9 FF                  OR ECX,0xffffffff
00641D72  F2 AE                     SCASB.REPNE ES:EDI
00641D74  F7 D1                     NOT ECX
00641D76  2B F9                     SUB EDI,ECX
00641D78  8B F7                     MOV ESI,EDI
00641D7A  8B FA                     MOV EDI,EDX
00641D7C  8B D1                     MOV EDX,ECX
00641D7E  83 C9 FF                  OR ECX,0xffffffff
00641D81  F2 AE                     SCASB.REPNE ES:EDI
00641D83  8B CA                     MOV ECX,EDX
00641D85  4F                        DEC EDI
00641D86  C1 E9 02                  SHR ECX,0x2
00641D89  F3 A5                     MOVSD.REP ES:EDI,ESI
00641D8B  8B CA                     MOV ECX,EDX
00641D8D  83 E1 03                  AND ECX,0x3
00641D90  F3 A4                     MOVSB.REP ES:EDI,ESI
00641D92  E9 F3 07 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_9c:
00641D97  BF E0 24 7D 00            MOV EDI,0x7d24e0
00641D9C  83 C9 FF                  OR ECX,0xffffffff
00641D9F  33 C0                     XOR EAX,EAX
00641DA1  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641DA4  F2 AE                     SCASB.REPNE ES:EDI
00641DA6  F7 D1                     NOT ECX
00641DA8  2B F9                     SUB EDI,ECX
00641DAA  8B F7                     MOV ESI,EDI
00641DAC  8B FA                     MOV EDI,EDX
00641DAE  8B D1                     MOV EDX,ECX
00641DB0  83 C9 FF                  OR ECX,0xffffffff
00641DB3  F2 AE                     SCASB.REPNE ES:EDI
00641DB5  8B CA                     MOV ECX,EDX
00641DB7  4F                        DEC EDI
00641DB8  C1 E9 02                  SHR ECX,0x2
00641DBB  F3 A5                     MOVSD.REP ES:EDI,ESI
00641DBD  8B CA                     MOV ECX,EDX
00641DBF  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641DC2  83 E1 03                  AND ECX,0x3
00641DC5  F3 A4                     MOVSB.REP ES:EDI,ESI
00641DC7  BF 08 25 7D 00            MOV EDI,0x7d2508
00641DCC  83 C9 FF                  OR ECX,0xffffffff
00641DCF  F2 AE                     SCASB.REPNE ES:EDI
00641DD1  F7 D1                     NOT ECX
00641DD3  2B F9                     SUB EDI,ECX
00641DD5  8B F7                     MOV ESI,EDI
00641DD7  8B FA                     MOV EDI,EDX
00641DD9  8B D1                     MOV EDX,ECX
00641DDB  83 C9 FF                  OR ECX,0xffffffff
00641DDE  F2 AE                     SCASB.REPNE ES:EDI
00641DE0  8B CA                     MOV ECX,EDX
00641DE2  4F                        DEC EDI
00641DE3  C1 E9 02                  SHR ECX,0x2
00641DE6  F3 A5                     MOVSD.REP ES:EDI,ESI
00641DE8  8B CA                     MOV ECX,EDX
00641DEA  83 E1 03                  AND ECX,0x3
00641DED  F3 A4                     MOVSB.REP ES:EDI,ESI
00641DEF  E9 96 07 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_9b:
00641DF4  BF D4 24 7D 00            MOV EDI,0x7d24d4
00641DF9  83 C9 FF                  OR ECX,0xffffffff
00641DFC  33 C0                     XOR EAX,EAX
00641DFE  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641E01  F2 AE                     SCASB.REPNE ES:EDI
00641E03  F7 D1                     NOT ECX
00641E05  2B F9                     SUB EDI,ECX
00641E07  8B F7                     MOV ESI,EDI
00641E09  8B FA                     MOV EDI,EDX
00641E0B  8B D1                     MOV EDX,ECX
00641E0D  83 C9 FF                  OR ECX,0xffffffff
00641E10  F2 AE                     SCASB.REPNE ES:EDI
00641E12  8B CA                     MOV ECX,EDX
00641E14  4F                        DEC EDI
00641E15  C1 E9 02                  SHR ECX,0x2
00641E18  F3 A5                     MOVSD.REP ES:EDI,ESI
00641E1A  8B CA                     MOV ECX,EDX
00641E1C  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641E1F  83 E1 03                  AND ECX,0x3
00641E22  F3 A4                     MOVSB.REP ES:EDI,ESI
00641E24  BF 08 25 7D 00            MOV EDI,0x7d2508
00641E29  83 C9 FF                  OR ECX,0xffffffff
00641E2C  F2 AE                     SCASB.REPNE ES:EDI
00641E2E  F7 D1                     NOT ECX
00641E30  2B F9                     SUB EDI,ECX
00641E32  8B F7                     MOV ESI,EDI
00641E34  8B FA                     MOV EDI,EDX
00641E36  8B D1                     MOV EDX,ECX
00641E38  83 C9 FF                  OR ECX,0xffffffff
00641E3B  F2 AE                     SCASB.REPNE ES:EDI
00641E3D  8B CA                     MOV ECX,EDX
00641E3F  4F                        DEC EDI
00641E40  C1 E9 02                  SHR ECX,0x2
00641E43  F3 A5                     MOVSD.REP ES:EDI,ESI
00641E45  8B CA                     MOV ECX,EDX
00641E47  83 E1 03                  AND ECX,0x3
00641E4A  F3 A4                     MOVSB.REP ES:EDI,ESI
00641E4C  E9 39 07 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_9e:
00641E51  BF C8 24 7D 00            MOV EDI,0x7d24c8
00641E56  83 C9 FF                  OR ECX,0xffffffff
00641E59  33 C0                     XOR EAX,EAX
00641E5B  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641E5E  F2 AE                     SCASB.REPNE ES:EDI
00641E60  F7 D1                     NOT ECX
00641E62  2B F9                     SUB EDI,ECX
00641E64  8B F7                     MOV ESI,EDI
00641E66  8B FA                     MOV EDI,EDX
00641E68  8B D1                     MOV EDX,ECX
00641E6A  83 C9 FF                  OR ECX,0xffffffff
00641E6D  F2 AE                     SCASB.REPNE ES:EDI
00641E6F  8B CA                     MOV ECX,EDX
00641E71  4F                        DEC EDI
00641E72  C1 E9 02                  SHR ECX,0x2
00641E75  F3 A5                     MOVSD.REP ES:EDI,ESI
00641E77  8B CA                     MOV ECX,EDX
00641E79  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641E7C  83 E1 03                  AND ECX,0x3
00641E7F  F3 A4                     MOVSB.REP ES:EDI,ESI
00641E81  BF 08 25 7D 00            MOV EDI,0x7d2508
00641E86  83 C9 FF                  OR ECX,0xffffffff
00641E89  F2 AE                     SCASB.REPNE ES:EDI
00641E8B  F7 D1                     NOT ECX
00641E8D  2B F9                     SUB EDI,ECX
00641E8F  8B F7                     MOV ESI,EDI
00641E91  8B FA                     MOV EDI,EDX
00641E93  8B D1                     MOV EDX,ECX
00641E95  83 C9 FF                  OR ECX,0xffffffff
00641E98  F2 AE                     SCASB.REPNE ES:EDI
00641E9A  8B CA                     MOV ECX,EDX
00641E9C  4F                        DEC EDI
00641E9D  C1 E9 02                  SHR ECX,0x2
00641EA0  F3 A5                     MOVSD.REP ES:EDI,ESI
00641EA2  8B CA                     MOV ECX,EDX
00641EA4  83 E1 03                  AND ECX,0x3
00641EA7  F3 A4                     MOVSB.REP ES:EDI,ESI
00641EA9  E9 DC 06 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_99:
00641EAE  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641EB1  BF BC 24 7D 00            MOV EDI,0x7d24bc
00641EB6  E9 EC 05 00 00            JMP 0x006424a7
switchD_00641ac9::caseD_9f:
00641EBB  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641EBE  BF B4 24 7D 00            MOV EDI,0x7d24b4
00641EC3  E9 DF 05 00 00            JMP 0x006424a7
switchD_00641ac9::caseD_a0:
00641EC8  83 C9 FF                  OR ECX,0xffffffff
00641ECB  BF AC 24 7D 00            MOV EDI,0x7d24ac
00641ED0  33 C0                     XOR EAX,EAX
00641ED2  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641ED5  F2 AE                     SCASB.REPNE ES:EDI
00641ED7  F7 D1                     NOT ECX
00641ED9  2B F9                     SUB EDI,ECX
00641EDB  C6 45 FF 0A               MOV byte ptr [EBP + -0x1],0xa
00641EDF  8B F7                     MOV ESI,EDI
00641EE1  8B FA                     MOV EDI,EDX
00641EE3  8B D1                     MOV EDX,ECX
00641EE5  83 C9 FF                  OR ECX,0xffffffff
00641EE8  F2 AE                     SCASB.REPNE ES:EDI
00641EEA  8B CA                     MOV ECX,EDX
00641EEC  4F                        DEC EDI
00641EED  C1 E9 02                  SHR ECX,0x2
00641EF0  F3 A5                     MOVSD.REP ES:EDI,ESI
00641EF2  8B CA                     MOV ECX,EDX
00641EF4  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641EF7  83 E1 03                  AND ECX,0x3
00641EFA  F3 A4                     MOVSB.REP ES:EDI,ESI
00641EFC  BF 88 05 7D 00            MOV EDI,0x7d0588
00641F01  83 C9 FF                  OR ECX,0xffffffff
00641F04  F2 AE                     SCASB.REPNE ES:EDI
00641F06  F7 D1                     NOT ECX
00641F08  2B F9                     SUB EDI,ECX
00641F0A  8B F7                     MOV ESI,EDI
00641F0C  8B FA                     MOV EDI,EDX
00641F0E  8B D1                     MOV EDX,ECX
00641F10  83 C9 FF                  OR ECX,0xffffffff
00641F13  F2 AE                     SCASB.REPNE ES:EDI
00641F15  8B CA                     MOV ECX,EDX
00641F17  4F                        DEC EDI
00641F18  C1 E9 02                  SHR ECX,0x2
00641F1B  F3 A5                     MOVSD.REP ES:EDI,ESI
00641F1D  8B CA                     MOV ECX,EDX
00641F1F  8D 55 90                  LEA EDX,[EBP + -0x70]
00641F22  83 E1 03                  AND ECX,0x3
00641F25  F3 A4                     MOVSB.REP ES:EDI,ESI
00641F27  BF 70 05 7D 00            MOV EDI,0x7d0570
00641F2C  83 C9 FF                  OR ECX,0xffffffff
00641F2F  F2 AE                     SCASB.REPNE ES:EDI
00641F31  F7 D1                     NOT ECX
00641F33  2B F9                     SUB EDI,ECX
00641F35  8B F7                     MOV ESI,EDI
00641F37  8B FA                     MOV EDI,EDX
00641F39  8B D1                     MOV EDX,ECX
00641F3B  83 C9 FF                  OR ECX,0xffffffff
00641F3E  F2 AE                     SCASB.REPNE ES:EDI
00641F40  8B CA                     MOV ECX,EDX
00641F42  4F                        DEC EDI
00641F43  C1 E9 02                  SHR ECX,0x2
00641F46  F3 A5                     MOVSD.REP ES:EDI,ESI
00641F48  8B CA                     MOV ECX,EDX
00641F4A  83 E1 03                  AND ECX,0x3
00641F4D  F3 A4                     MOVSB.REP ES:EDI,ESI
00641F4F  E9 36 06 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_a4:
00641F54  83 C9 FF                  OR ECX,0xffffffff
00641F57  BF A4 24 7D 00            MOV EDI,0x7d24a4
00641F5C  33 C0                     XOR EAX,EAX
00641F5E  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641F61  F2 AE                     SCASB.REPNE ES:EDI
00641F63  F7 D1                     NOT ECX
00641F65  2B F9                     SUB EDI,ECX
00641F67  C6 45 FF 22               MOV byte ptr [EBP + -0x1],0x22
00641F6B  8B F7                     MOV ESI,EDI
00641F6D  8B FA                     MOV EDI,EDX
00641F6F  8B D1                     MOV EDX,ECX
00641F71  83 C9 FF                  OR ECX,0xffffffff
00641F74  F2 AE                     SCASB.REPNE ES:EDI
00641F76  8B CA                     MOV ECX,EDX
00641F78  4F                        DEC EDI
00641F79  C1 E9 02                  SHR ECX,0x2
00641F7C  F3 A5                     MOVSD.REP ES:EDI,ESI
00641F7E  8B CA                     MOV ECX,EDX
00641F80  8D 55 D8                  LEA EDX,[EBP + -0x28]
00641F83  83 E1 03                  AND ECX,0x3
00641F86  F3 A4                     MOVSB.REP ES:EDI,ESI
00641F88  BF 7C 05 7D 00            MOV EDI,0x7d057c
00641F8D  83 C9 FF                  OR ECX,0xffffffff
00641F90  F2 AE                     SCASB.REPNE ES:EDI
00641F92  F7 D1                     NOT ECX
00641F94  2B F9                     SUB EDI,ECX
00641F96  8B F7                     MOV ESI,EDI
00641F98  8B FA                     MOV EDI,EDX
00641F9A  8B D1                     MOV EDX,ECX
00641F9C  83 C9 FF                  OR ECX,0xffffffff
00641F9F  F2 AE                     SCASB.REPNE ES:EDI
00641FA1  8B CA                     MOV ECX,EDX
00641FA3  4F                        DEC EDI
00641FA4  C1 E9 02                  SHR ECX,0x2
00641FA7  F3 A5                     MOVSD.REP ES:EDI,ESI
00641FA9  8B CA                     MOV ECX,EDX
00641FAB  8D 55 90                  LEA EDX,[EBP + -0x70]
00641FAE  83 E1 03                  AND ECX,0x3
00641FB1  F3 A4                     MOVSB.REP ES:EDI,ESI
00641FB3  BF EC 24 7D 00            MOV EDI,0x7d24ec
00641FB8  83 C9 FF                  OR ECX,0xffffffff
00641FBB  F2 AE                     SCASB.REPNE ES:EDI
00641FBD  F7 D1                     NOT ECX
00641FBF  2B F9                     SUB EDI,ECX
00641FC1  8B F7                     MOV ESI,EDI
00641FC3  8B FA                     MOV EDI,EDX
00641FC5  8B D1                     MOV EDX,ECX
00641FC7  83 C9 FF                  OR ECX,0xffffffff
00641FCA  F2 AE                     SCASB.REPNE ES:EDI
00641FCC  8B CA                     MOV ECX,EDX
00641FCE  4F                        DEC EDI
00641FCF  C1 E9 02                  SHR ECX,0x2
00641FD2  F3 A5                     MOVSD.REP ES:EDI,ESI
00641FD4  8B CA                     MOV ECX,EDX
00641FD6  83 E1 03                  AND ECX,0x3
00641FD9  F3 A4                     MOVSB.REP ES:EDI,ESI
00641FDB  E9 AA 05 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_ae:
00641FE0  83 C9 FF                  OR ECX,0xffffffff
00641FE3  BF 98 24 7D 00            MOV EDI,0x7d2498
00641FE8  33 C0                     XOR EAX,EAX
00641FEA  8D 55 BC                  LEA EDX,[EBP + -0x44]
00641FED  F2 AE                     SCASB.REPNE ES:EDI
00641FEF  F7 D1                     NOT ECX
00641FF1  2B F9                     SUB EDI,ECX
00641FF3  C6 45 FF 09               MOV byte ptr [EBP + -0x1],0x9
00641FF7  8B F7                     MOV ESI,EDI
00641FF9  8B FA                     MOV EDI,EDX
00641FFB  8B D1                     MOV EDX,ECX
00641FFD  83 C9 FF                  OR ECX,0xffffffff
00642000  F2 AE                     SCASB.REPNE ES:EDI
00642002  8B CA                     MOV ECX,EDX
00642004  4F                        DEC EDI
00642005  C1 E9 02                  SHR ECX,0x2
00642008  F3 A5                     MOVSD.REP ES:EDI,ESI
0064200A  8B CA                     MOV ECX,EDX
0064200C  8D 55 D8                  LEA EDX,[EBP + -0x28]
0064200F  83 E1 03                  AND ECX,0x3
00642012  F3 A4                     MOVSB.REP ES:EDI,ESI
00642014  BF 08 25 7D 00            MOV EDI,0x7d2508
00642019  83 C9 FF                  OR ECX,0xffffffff
0064201C  F2 AE                     SCASB.REPNE ES:EDI
0064201E  F7 D1                     NOT ECX
00642020  2B F9                     SUB EDI,ECX
00642022  8B F7                     MOV ESI,EDI
00642024  8B FA                     MOV EDI,EDX
00642026  8B D1                     MOV EDX,ECX
00642028  83 C9 FF                  OR ECX,0xffffffff
0064202B  F2 AE                     SCASB.REPNE ES:EDI
0064202D  8B CA                     MOV ECX,EDX
0064202F  4F                        DEC EDI
00642030  C1 E9 02                  SHR ECX,0x2
00642033  F3 A5                     MOVSD.REP ES:EDI,ESI
00642035  8B CA                     MOV ECX,EDX
00642037  8D 55 90                  LEA EDX,[EBP + -0x70]
0064203A  83 E1 03                  AND ECX,0x3
0064203D  F3 A4                     MOVSB.REP ES:EDI,ESI
0064203F  BF 70 05 7D 00            MOV EDI,0x7d0570
00642044  83 C9 FF                  OR ECX,0xffffffff
00642047  F2 AE                     SCASB.REPNE ES:EDI
00642049  F7 D1                     NOT ECX
0064204B  2B F9                     SUB EDI,ECX
0064204D  8B F7                     MOV ESI,EDI
0064204F  8B FA                     MOV EDI,EDX
00642051  8B D1                     MOV EDX,ECX
00642053  83 C9 FF                  OR ECX,0xffffffff
00642056  F2 AE                     SCASB.REPNE ES:EDI
00642058  8B CA                     MOV ECX,EDX
0064205A  4F                        DEC EDI
0064205B  C1 E9 02                  SHR ECX,0x2
0064205E  F3 A5                     MOVSD.REP ES:EDI,ESI
00642060  8B CA                     MOV ECX,EDX
00642062  83 E1 03                  AND ECX,0x3
00642065  F3 A4                     MOVSB.REP ES:EDI,ESI
00642067  E9 1E 05 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_a5:
0064206C  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0064206F  33 D2                     XOR EDX,EDX
00642071  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00642077  05 39 30 00 00            ADD EAX,0x3039
0064207C  B9 03 00 00 00            MOV ECX,0x3
00642081  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00642084  C1 E8 10                  SHR EAX,0x10
00642087  F7 F1                     DIV ECX
00642089  83 EA 00                  SUB EDX,0x0
0064208C  0F 84 AF 01 00 00         JZ 0x00642241
00642092  4A                        DEC EDX
00642093  0F 84 1C 01 00 00         JZ 0x006421b5
00642099  4A                        DEC EDX
0064209A  8D 55 BC                  LEA EDX,[EBP + -0x44]
0064209D  0F 84 89 00 00 00         JZ 0x0064212c
006420A3  83 C9 FF                  OR ECX,0xffffffff
006420A6  BF 90 24 7D 00            MOV EDI,0x7d2490
006420AB  33 C0                     XOR EAX,EAX
006420AD  C6 45 FF 16               MOV byte ptr [EBP + -0x1],0x16
006420B1  F2 AE                     SCASB.REPNE ES:EDI
006420B3  F7 D1                     NOT ECX
006420B5  2B F9                     SUB EDI,ECX
006420B7  8B F7                     MOV ESI,EDI
006420B9  8B FA                     MOV EDI,EDX
006420BB  8B D1                     MOV EDX,ECX
006420BD  83 C9 FF                  OR ECX,0xffffffff
006420C0  F2 AE                     SCASB.REPNE ES:EDI
006420C2  8B CA                     MOV ECX,EDX
006420C4  4F                        DEC EDI
006420C5  C1 E9 02                  SHR ECX,0x2
006420C8  F3 A5                     MOVSD.REP ES:EDI,ESI
006420CA  8B CA                     MOV ECX,EDX
006420CC  8D 55 D8                  LEA EDX,[EBP + -0x28]
006420CF  83 E1 03                  AND ECX,0x3
006420D2  F3 A4                     MOVSB.REP ES:EDI,ESI
006420D4  BF 7C 05 7D 00            MOV EDI,0x7d057c
006420D9  83 C9 FF                  OR ECX,0xffffffff
006420DC  F2 AE                     SCASB.REPNE ES:EDI
006420DE  F7 D1                     NOT ECX
006420E0  2B F9                     SUB EDI,ECX
006420E2  8B F7                     MOV ESI,EDI
006420E4  8B FA                     MOV EDI,EDX
006420E6  8B D1                     MOV EDX,ECX
006420E8  83 C9 FF                  OR ECX,0xffffffff
006420EB  F2 AE                     SCASB.REPNE ES:EDI
006420ED  8B CA                     MOV ECX,EDX
006420EF  4F                        DEC EDI
006420F0  C1 E9 02                  SHR ECX,0x2
006420F3  F3 A5                     MOVSD.REP ES:EDI,ESI
006420F5  8B CA                     MOV ECX,EDX
006420F7  8D 55 90                  LEA EDX,[EBP + -0x70]
006420FA  83 E1 03                  AND ECX,0x3
006420FD  F3 A4                     MOVSB.REP ES:EDI,ESI
006420FF  BF 84 24 7D 00            MOV EDI,0x7d2484
00642104  83 C9 FF                  OR ECX,0xffffffff
00642107  F2 AE                     SCASB.REPNE ES:EDI
00642109  F7 D1                     NOT ECX
0064210B  2B F9                     SUB EDI,ECX
0064210D  8B F7                     MOV ESI,EDI
0064210F  8B FA                     MOV EDI,EDX
00642111  8B D1                     MOV EDX,ECX
00642113  83 C9 FF                  OR ECX,0xffffffff
00642116  F2 AE                     SCASB.REPNE ES:EDI
00642118  8B CA                     MOV ECX,EDX
0064211A  4F                        DEC EDI
0064211B  C1 E9 02                  SHR ECX,0x2
0064211E  F3 A5                     MOVSD.REP ES:EDI,ESI
00642120  8B CA                     MOV ECX,EDX
00642122  83 E1 03                  AND ECX,0x3
00642125  F3 A4                     MOVSB.REP ES:EDI,ESI
00642127  E9 5E 04 00 00            JMP 0x0064258a
LAB_0064212c:
0064212C  83 C9 FF                  OR ECX,0xffffffff
0064212F  BF 7C 24 7D 00            MOV EDI,0x7d247c
00642134  33 C0                     XOR EAX,EAX
00642136  C6 45 FF 16               MOV byte ptr [EBP + -0x1],0x16
0064213A  F2 AE                     SCASB.REPNE ES:EDI
0064213C  F7 D1                     NOT ECX
0064213E  2B F9                     SUB EDI,ECX
00642140  8B F7                     MOV ESI,EDI
00642142  8B FA                     MOV EDI,EDX
00642144  8B D1                     MOV EDX,ECX
00642146  83 C9 FF                  OR ECX,0xffffffff
00642149  F2 AE                     SCASB.REPNE ES:EDI
0064214B  8B CA                     MOV ECX,EDX
0064214D  4F                        DEC EDI
0064214E  C1 E9 02                  SHR ECX,0x2
00642151  F3 A5                     MOVSD.REP ES:EDI,ESI
00642153  8B CA                     MOV ECX,EDX
00642155  8D 55 D8                  LEA EDX,[EBP + -0x28]
00642158  83 E1 03                  AND ECX,0x3
0064215B  F3 A4                     MOVSB.REP ES:EDI,ESI
0064215D  BF 7C 05 7D 00            MOV EDI,0x7d057c
00642162  83 C9 FF                  OR ECX,0xffffffff
00642165  F2 AE                     SCASB.REPNE ES:EDI
00642167  F7 D1                     NOT ECX
00642169  2B F9                     SUB EDI,ECX
0064216B  8B F7                     MOV ESI,EDI
0064216D  8B FA                     MOV EDI,EDX
0064216F  8B D1                     MOV EDX,ECX
00642171  83 C9 FF                  OR ECX,0xffffffff
00642174  F2 AE                     SCASB.REPNE ES:EDI
00642176  8B CA                     MOV ECX,EDX
00642178  4F                        DEC EDI
00642179  C1 E9 02                  SHR ECX,0x2
0064217C  F3 A5                     MOVSD.REP ES:EDI,ESI
0064217E  8B CA                     MOV ECX,EDX
00642180  8D 55 90                  LEA EDX,[EBP + -0x70]
00642183  83 E1 03                  AND ECX,0x3
00642186  F3 A4                     MOVSB.REP ES:EDI,ESI
00642188  BF EC 24 7D 00            MOV EDI,0x7d24ec
0064218D  83 C9 FF                  OR ECX,0xffffffff
00642190  F2 AE                     SCASB.REPNE ES:EDI
00642192  F7 D1                     NOT ECX
00642194  2B F9                     SUB EDI,ECX
00642196  8B F7                     MOV ESI,EDI
00642198  8B FA                     MOV EDI,EDX
0064219A  8B D1                     MOV EDX,ECX
0064219C  83 C9 FF                  OR ECX,0xffffffff
0064219F  F2 AE                     SCASB.REPNE ES:EDI
006421A1  8B CA                     MOV ECX,EDX
006421A3  4F                        DEC EDI
006421A4  C1 E9 02                  SHR ECX,0x2
006421A7  F3 A5                     MOVSD.REP ES:EDI,ESI
006421A9  8B CA                     MOV ECX,EDX
006421AB  83 E1 03                  AND ECX,0x3
006421AE  F3 A4                     MOVSB.REP ES:EDI,ESI
006421B0  E9 D5 03 00 00            JMP 0x0064258a
LAB_006421b5:
006421B5  83 C9 FF                  OR ECX,0xffffffff
006421B8  BF 74 24 7D 00            MOV EDI,0x7d2474
006421BD  33 C0                     XOR EAX,EAX
006421BF  8D 55 BC                  LEA EDX,[EBP + -0x44]
006421C2  F2 AE                     SCASB.REPNE ES:EDI
006421C4  F7 D1                     NOT ECX
006421C6  2B F9                     SUB EDI,ECX
006421C8  C6 45 FF 16               MOV byte ptr [EBP + -0x1],0x16
006421CC  8B F7                     MOV ESI,EDI
006421CE  8B FA                     MOV EDI,EDX
006421D0  8B D1                     MOV EDX,ECX
006421D2  83 C9 FF                  OR ECX,0xffffffff
006421D5  F2 AE                     SCASB.REPNE ES:EDI
006421D7  8B CA                     MOV ECX,EDX
006421D9  4F                        DEC EDI
006421DA  C1 E9 02                  SHR ECX,0x2
006421DD  F3 A5                     MOVSD.REP ES:EDI,ESI
006421DF  8B CA                     MOV ECX,EDX
006421E1  8D 55 D8                  LEA EDX,[EBP + -0x28]
006421E4  83 E1 03                  AND ECX,0x3
006421E7  F3 A4                     MOVSB.REP ES:EDI,ESI
006421E9  BF 7C 05 7D 00            MOV EDI,0x7d057c
006421EE  83 C9 FF                  OR ECX,0xffffffff
006421F1  F2 AE                     SCASB.REPNE ES:EDI
006421F3  F7 D1                     NOT ECX
006421F5  2B F9                     SUB EDI,ECX
006421F7  8B F7                     MOV ESI,EDI
006421F9  8B FA                     MOV EDI,EDX
006421FB  8B D1                     MOV EDX,ECX
006421FD  83 C9 FF                  OR ECX,0xffffffff
00642200  F2 AE                     SCASB.REPNE ES:EDI
00642202  8B CA                     MOV ECX,EDX
00642204  4F                        DEC EDI
00642205  C1 E9 02                  SHR ECX,0x2
00642208  F3 A5                     MOVSD.REP ES:EDI,ESI
0064220A  8B CA                     MOV ECX,EDX
0064220C  8D 55 90                  LEA EDX,[EBP + -0x70]
0064220F  83 E1 03                  AND ECX,0x3
00642212  F3 A4                     MOVSB.REP ES:EDI,ESI
00642214  BF 84 24 7D 00            MOV EDI,0x7d2484
00642219  83 C9 FF                  OR ECX,0xffffffff
0064221C  F2 AE                     SCASB.REPNE ES:EDI
0064221E  F7 D1                     NOT ECX
00642220  2B F9                     SUB EDI,ECX
00642222  8B F7                     MOV ESI,EDI
00642224  8B FA                     MOV EDI,EDX
00642226  8B D1                     MOV EDX,ECX
00642228  83 C9 FF                  OR ECX,0xffffffff
0064222B  F2 AE                     SCASB.REPNE ES:EDI
0064222D  8B CA                     MOV ECX,EDX
0064222F  4F                        DEC EDI
00642230  C1 E9 02                  SHR ECX,0x2
00642233  F3 A5                     MOVSD.REP ES:EDI,ESI
00642235  8B CA                     MOV ECX,EDX
00642237  83 E1 03                  AND ECX,0x3
0064223A  F3 A4                     MOVSB.REP ES:EDI,ESI
0064223C  E9 49 03 00 00            JMP 0x0064258a
LAB_00642241:
00642241  83 C9 FF                  OR ECX,0xffffffff
00642244  BF 90 24 7D 00            MOV EDI,0x7d2490
00642249  33 C0                     XOR EAX,EAX
0064224B  8D 55 BC                  LEA EDX,[EBP + -0x44]
0064224E  F2 AE                     SCASB.REPNE ES:EDI
00642250  F7 D1                     NOT ECX
00642252  2B F9                     SUB EDI,ECX
00642254  C6 45 FF 16               MOV byte ptr [EBP + -0x1],0x16
00642258  8B F7                     MOV ESI,EDI
0064225A  8B FA                     MOV EDI,EDX
0064225C  8B D1                     MOV EDX,ECX
0064225E  83 C9 FF                  OR ECX,0xffffffff
00642261  F2 AE                     SCASB.REPNE ES:EDI
00642263  8B CA                     MOV ECX,EDX
00642265  4F                        DEC EDI
00642266  C1 E9 02                  SHR ECX,0x2
00642269  F3 A5                     MOVSD.REP ES:EDI,ESI
0064226B  8B CA                     MOV ECX,EDX
0064226D  8D 55 D8                  LEA EDX,[EBP + -0x28]
00642270  83 E1 03                  AND ECX,0x3
00642273  F3 A4                     MOVSB.REP ES:EDI,ESI
00642275  BF 7C 05 7D 00            MOV EDI,0x7d057c
0064227A  83 C9 FF                  OR ECX,0xffffffff
0064227D  F2 AE                     SCASB.REPNE ES:EDI
0064227F  F7 D1                     NOT ECX
00642281  2B F9                     SUB EDI,ECX
00642283  8B F7                     MOV ESI,EDI
00642285  8B FA                     MOV EDI,EDX
00642287  8B D1                     MOV EDX,ECX
00642289  83 C9 FF                  OR ECX,0xffffffff
0064228C  F2 AE                     SCASB.REPNE ES:EDI
0064228E  8B CA                     MOV ECX,EDX
00642290  4F                        DEC EDI
00642291  C1 E9 02                  SHR ECX,0x2
00642294  F3 A5                     MOVSD.REP ES:EDI,ESI
00642296  8B CA                     MOV ECX,EDX
00642298  8D 55 90                  LEA EDX,[EBP + -0x70]
0064229B  83 E1 03                  AND ECX,0x3
0064229E  F3 A4                     MOVSB.REP ES:EDI,ESI
006422A0  BF 84 24 7D 00            MOV EDI,0x7d2484
006422A5  83 C9 FF                  OR ECX,0xffffffff
006422A8  F2 AE                     SCASB.REPNE ES:EDI
006422AA  F7 D1                     NOT ECX
006422AC  2B F9                     SUB EDI,ECX
006422AE  8B F7                     MOV ESI,EDI
006422B0  8B FA                     MOV EDI,EDX
006422B2  8B D1                     MOV EDX,ECX
006422B4  83 C9 FF                  OR ECX,0xffffffff
006422B7  F2 AE                     SCASB.REPNE ES:EDI
006422B9  8B CA                     MOV ECX,EDX
006422BB  4F                        DEC EDI
006422BC  C1 E9 02                  SHR ECX,0x2
006422BF  F3 A5                     MOVSD.REP ES:EDI,ESI
006422C1  8B CA                     MOV ECX,EDX
006422C3  83 E1 03                  AND ECX,0x3
006422C6  F3 A4                     MOVSB.REP ES:EDI,ESI
006422C8  E9 BD 02 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_ac:
006422CD  83 C9 FF                  OR ECX,0xffffffff
006422D0  BF 68 24 7D 00            MOV EDI,0x7d2468
006422D5  33 C0                     XOR EAX,EAX
006422D7  8D 55 BC                  LEA EDX,[EBP + -0x44]
006422DA  F2 AE                     SCASB.REPNE ES:EDI
006422DC  F7 D1                     NOT ECX
006422DE  2B F9                     SUB EDI,ECX
006422E0  C6 45 FF 0A               MOV byte ptr [EBP + -0x1],0xa
006422E4  8B F7                     MOV ESI,EDI
006422E6  8B FA                     MOV EDI,EDX
006422E8  8B D1                     MOV EDX,ECX
006422EA  83 C9 FF                  OR ECX,0xffffffff
006422ED  F2 AE                     SCASB.REPNE ES:EDI
006422EF  8B CA                     MOV ECX,EDX
006422F1  4F                        DEC EDI
006422F2  C1 E9 02                  SHR ECX,0x2
006422F5  F3 A5                     MOVSD.REP ES:EDI,ESI
006422F7  8B CA                     MOV ECX,EDX
006422F9  8D 55 D8                  LEA EDX,[EBP + -0x28]
006422FC  83 E1 03                  AND ECX,0x3
006422FF  F3 A4                     MOVSB.REP ES:EDI,ESI
00642301  BF 08 25 7D 00            MOV EDI,0x7d2508
00642306  83 C9 FF                  OR ECX,0xffffffff
00642309  F2 AE                     SCASB.REPNE ES:EDI
0064230B  F7 D1                     NOT ECX
0064230D  2B F9                     SUB EDI,ECX
0064230F  8B F7                     MOV ESI,EDI
00642311  8B FA                     MOV EDI,EDX
00642313  8B D1                     MOV EDX,ECX
00642315  83 C9 FF                  OR ECX,0xffffffff
00642318  F2 AE                     SCASB.REPNE ES:EDI
0064231A  8B CA                     MOV ECX,EDX
0064231C  4F                        DEC EDI
0064231D  C1 E9 02                  SHR ECX,0x2
00642320  F3 A5                     MOVSD.REP ES:EDI,ESI
00642322  8B CA                     MOV ECX,EDX
00642324  8D 55 90                  LEA EDX,[EBP + -0x70]
00642327  83 E1 03                  AND ECX,0x3
0064232A  F3 A4                     MOVSB.REP ES:EDI,ESI
0064232C  BF 64 05 7D 00            MOV EDI,0x7d0564
00642331  83 C9 FF                  OR ECX,0xffffffff
00642334  F2 AE                     SCASB.REPNE ES:EDI
00642336  F7 D1                     NOT ECX
00642338  2B F9                     SUB EDI,ECX
0064233A  8B F7                     MOV ESI,EDI
0064233C  8B FA                     MOV EDI,EDX
0064233E  8B D1                     MOV EDX,ECX
00642340  83 C9 FF                  OR ECX,0xffffffff
00642343  F2 AE                     SCASB.REPNE ES:EDI
00642345  8B CA                     MOV ECX,EDX
00642347  4F                        DEC EDI
00642348  C1 E9 02                  SHR ECX,0x2
0064234B  F3 A5                     MOVSD.REP ES:EDI,ESI
0064234D  8B CA                     MOV ECX,EDX
0064234F  83 E1 03                  AND ECX,0x3
00642352  F3 A4                     MOVSB.REP ES:EDI,ESI
00642354  E9 31 02 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_b8:
00642359  83 C9 FF                  OR ECX,0xffffffff
0064235C  BF 5C 24 7D 00            MOV EDI,0x7d245c
00642361  33 C0                     XOR EAX,EAX
00642363  8D 55 BC                  LEA EDX,[EBP + -0x44]
00642366  F2 AE                     SCASB.REPNE ES:EDI
00642368  F7 D1                     NOT ECX
0064236A  2B F9                     SUB EDI,ECX
0064236C  C6 45 FF 12               MOV byte ptr [EBP + -0x1],0x12
00642370  8B F7                     MOV ESI,EDI
00642372  8B FA                     MOV EDI,EDX
00642374  8B D1                     MOV EDX,ECX
00642376  83 C9 FF                  OR ECX,0xffffffff
00642379  F2 AE                     SCASB.REPNE ES:EDI
0064237B  8B CA                     MOV ECX,EDX
0064237D  4F                        DEC EDI
0064237E  C1 E9 02                  SHR ECX,0x2
00642381  F3 A5                     MOVSD.REP ES:EDI,ESI
00642383  8B CA                     MOV ECX,EDX
00642385  8D 55 D8                  LEA EDX,[EBP + -0x28]
00642388  83 E1 03                  AND ECX,0x3
0064238B  F3 A4                     MOVSB.REP ES:EDI,ESI
0064238D  BF 08 25 7D 00            MOV EDI,0x7d2508
00642392  83 C9 FF                  OR ECX,0xffffffff
00642395  F2 AE                     SCASB.REPNE ES:EDI
00642397  F7 D1                     NOT ECX
00642399  2B F9                     SUB EDI,ECX
0064239B  8B F7                     MOV ESI,EDI
0064239D  8B FA                     MOV EDI,EDX
0064239F  8B D1                     MOV EDX,ECX
006423A1  83 C9 FF                  OR ECX,0xffffffff
006423A4  F2 AE                     SCASB.REPNE ES:EDI
006423A6  8B CA                     MOV ECX,EDX
006423A8  4F                        DEC EDI
006423A9  C1 E9 02                  SHR ECX,0x2
006423AC  F3 A5                     MOVSD.REP ES:EDI,ESI
006423AE  8B CA                     MOV ECX,EDX
006423B0  8D 55 90                  LEA EDX,[EBP + -0x70]
006423B3  83 E1 03                  AND ECX,0x3
006423B6  F3 A4                     MOVSB.REP ES:EDI,ESI
006423B8  BF 70 05 7D 00            MOV EDI,0x7d0570
006423BD  83 C9 FF                  OR ECX,0xffffffff
006423C0  F2 AE                     SCASB.REPNE ES:EDI
006423C2  F7 D1                     NOT ECX
006423C4  2B F9                     SUB EDI,ECX
006423C6  8B F7                     MOV ESI,EDI
006423C8  8B FA                     MOV EDI,EDX
006423CA  8B D1                     MOV EDX,ECX
006423CC  83 C9 FF                  OR ECX,0xffffffff
006423CF  F2 AE                     SCASB.REPNE ES:EDI
006423D1  8B CA                     MOV ECX,EDX
006423D3  4F                        DEC EDI
006423D4  C1 E9 02                  SHR ECX,0x2
006423D7  F3 A5                     MOVSD.REP ES:EDI,ESI
006423D9  8B CA                     MOV ECX,EDX
006423DB  83 E1 03                  AND ECX,0x3
006423DE  F3 A4                     MOVSB.REP ES:EDI,ESI
006423E0  E9 A5 01 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_b7:
006423E5  BF 50 24 7D 00            MOV EDI,0x7d2450
006423EA  83 C9 FF                  OR ECX,0xffffffff
006423ED  33 C0                     XOR EAX,EAX
006423EF  8D 55 BC                  LEA EDX,[EBP + -0x44]
006423F2  F2 AE                     SCASB.REPNE ES:EDI
006423F4  F7 D1                     NOT ECX
006423F6  2B F9                     SUB EDI,ECX
006423F8  8B F7                     MOV ESI,EDI
006423FA  8B FA                     MOV EDI,EDX
006423FC  8B D1                     MOV EDX,ECX
006423FE  83 C9 FF                  OR ECX,0xffffffff
00642401  F2 AE                     SCASB.REPNE ES:EDI
00642403  8B CA                     MOV ECX,EDX
00642405  4F                        DEC EDI
00642406  C1 E9 02                  SHR ECX,0x2
00642409  F3 A5                     MOVSD.REP ES:EDI,ESI
0064240B  8B CA                     MOV ECX,EDX
0064240D  8D 55 D8                  LEA EDX,[EBP + -0x28]
00642410  83 E1 03                  AND ECX,0x3
00642413  F3 A4                     MOVSB.REP ES:EDI,ESI
00642415  BF 08 25 7D 00            MOV EDI,0x7d2508
0064241A  83 C9 FF                  OR ECX,0xffffffff
0064241D  F2 AE                     SCASB.REPNE ES:EDI
0064241F  F7 D1                     NOT ECX
00642421  2B F9                     SUB EDI,ECX
00642423  8B F7                     MOV ESI,EDI
00642425  8B FA                     MOV EDI,EDX
00642427  8B D1                     MOV EDX,ECX
00642429  83 C9 FF                  OR ECX,0xffffffff
0064242C  F2 AE                     SCASB.REPNE ES:EDI
0064242E  8B CA                     MOV ECX,EDX
00642430  4F                        DEC EDI
00642431  C1 E9 02                  SHR ECX,0x2
00642434  F3 A5                     MOVSD.REP ES:EDI,ESI
00642436  8B CA                     MOV ECX,EDX
00642438  83 E1 03                  AND ECX,0x3
0064243B  F3 A4                     MOVSB.REP ES:EDI,ESI
0064243D  E9 48 01 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_ad:
00642442  BF 44 24 7D 00            MOV EDI,0x7d2444
00642447  83 C9 FF                  OR ECX,0xffffffff
0064244A  33 C0                     XOR EAX,EAX
0064244C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0064244F  F2 AE                     SCASB.REPNE ES:EDI
00642451  F7 D1                     NOT ECX
00642453  2B F9                     SUB EDI,ECX
00642455  8B F7                     MOV ESI,EDI
00642457  8B FA                     MOV EDI,EDX
00642459  8B D1                     MOV EDX,ECX
0064245B  83 C9 FF                  OR ECX,0xffffffff
0064245E  F2 AE                     SCASB.REPNE ES:EDI
00642460  8B CA                     MOV ECX,EDX
00642462  4F                        DEC EDI
00642463  C1 E9 02                  SHR ECX,0x2
00642466  F3 A5                     MOVSD.REP ES:EDI,ESI
00642468  8B CA                     MOV ECX,EDX
0064246A  8D 55 D8                  LEA EDX,[EBP + -0x28]
0064246D  83 E1 03                  AND ECX,0x3
00642470  F3 A4                     MOVSB.REP ES:EDI,ESI
00642472  BF 08 25 7D 00            MOV EDI,0x7d2508
00642477  83 C9 FF                  OR ECX,0xffffffff
0064247A  F2 AE                     SCASB.REPNE ES:EDI
0064247C  F7 D1                     NOT ECX
0064247E  2B F9                     SUB EDI,ECX
00642480  8B F7                     MOV ESI,EDI
00642482  8B FA                     MOV EDI,EDX
00642484  8B D1                     MOV EDX,ECX
00642486  83 C9 FF                  OR ECX,0xffffffff
00642489  F2 AE                     SCASB.REPNE ES:EDI
0064248B  8B CA                     MOV ECX,EDX
0064248D  4F                        DEC EDI
0064248E  C1 E9 02                  SHR ECX,0x2
00642491  F3 A5                     MOVSD.REP ES:EDI,ESI
00642493  8B CA                     MOV ECX,EDX
00642495  83 E1 03                  AND ECX,0x3
00642498  F3 A4                     MOVSB.REP ES:EDI,ESI
0064249A  E9 EB 00 00 00            JMP 0x0064258a
switchD_00641ac9::caseD_b6:
0064249F  8D 55 BC                  LEA EDX,[EBP + -0x44]
006424A2  BF 38 24 7D 00            MOV EDI,0x7d2438
LAB_006424a7:
006424A7  83 C9 FF                  OR ECX,0xffffffff
006424AA  33 C0                     XOR EAX,EAX
006424AC  F2 AE                     SCASB.REPNE ES:EDI
006424AE  F7 D1                     NOT ECX
006424B0  2B F9                     SUB EDI,ECX
006424B2  8B F7                     MOV ESI,EDI
006424B4  8B FA                     MOV EDI,EDX
006424B6  8B D1                     MOV EDX,ECX
006424B8  83 C9 FF                  OR ECX,0xffffffff
006424BB  F2 AE                     SCASB.REPNE ES:EDI
006424BD  8B CA                     MOV ECX,EDX
006424BF  4F                        DEC EDI
006424C0  C1 E9 02                  SHR ECX,0x2
006424C3  F3 A5                     MOVSD.REP ES:EDI,ESI
006424C5  8B CA                     MOV ECX,EDX
006424C7  8D 55 D8                  LEA EDX,[EBP + -0x28]
006424CA  83 E1 03                  AND ECX,0x3
006424CD  F3 A4                     MOVSB.REP ES:EDI,ESI
006424CF  BF 08 25 7D 00            MOV EDI,0x7d2508
006424D4  83 C9 FF                  OR ECX,0xffffffff
006424D7  F2 AE                     SCASB.REPNE ES:EDI
006424D9  F7 D1                     NOT ECX
006424DB  2B F9                     SUB EDI,ECX
006424DD  8B F7                     MOV ESI,EDI
006424DF  8B FA                     MOV EDI,EDX
006424E1  8B D1                     MOV EDX,ECX
006424E3  83 C9 FF                  OR ECX,0xffffffff
006424E6  F2 AE                     SCASB.REPNE ES:EDI
006424E8  8B CA                     MOV ECX,EDX
006424EA  4F                        DEC EDI
006424EB  C1 E9 02                  SHR ECX,0x2
006424EE  F3 A5                     MOVSD.REP ES:EDI,ESI
006424F0  8B CA                     MOV ECX,EDX
006424F2  8D 55 90                  LEA EDX,[EBP + -0x70]
006424F5  83 E1 03                  AND ECX,0x3
006424F8  F3 A4                     MOVSB.REP ES:EDI,ESI
006424FA  BF 70 05 7D 00            MOV EDI,0x7d0570
006424FF  EB 60                     JMP 0x00642561
switchD_00641ac9::caseD_bf:
00642501  BF 30 24 7D 00            MOV EDI,0x7d2430
00642506  83 C9 FF                  OR ECX,0xffffffff
00642509  33 C0                     XOR EAX,EAX
0064250B  8D 55 BC                  LEA EDX,[EBP + -0x44]
0064250E  F2 AE                     SCASB.REPNE ES:EDI
00642510  F7 D1                     NOT ECX
00642512  2B F9                     SUB EDI,ECX
00642514  8B F7                     MOV ESI,EDI
00642516  8B FA                     MOV EDI,EDX
00642518  8B D1                     MOV EDX,ECX
0064251A  83 C9 FF                  OR ECX,0xffffffff
0064251D  F2 AE                     SCASB.REPNE ES:EDI
0064251F  8B CA                     MOV ECX,EDX
00642521  4F                        DEC EDI
00642522  C1 E9 02                  SHR ECX,0x2
00642525  F3 A5                     MOVSD.REP ES:EDI,ESI
00642527  8B CA                     MOV ECX,EDX
00642529  8D 55 D8                  LEA EDX,[EBP + -0x28]
0064252C  83 E1 03                  AND ECX,0x3
0064252F  F3 A4                     MOVSB.REP ES:EDI,ESI
00642531  BF 88 05 7D 00            MOV EDI,0x7d0588
00642536  83 C9 FF                  OR ECX,0xffffffff
00642539  F2 AE                     SCASB.REPNE ES:EDI
0064253B  F7 D1                     NOT ECX
0064253D  2B F9                     SUB EDI,ECX
0064253F  8B F7                     MOV ESI,EDI
00642541  8B FA                     MOV EDI,EDX
00642543  8B D1                     MOV EDX,ECX
00642545  83 C9 FF                  OR ECX,0xffffffff
00642548  F2 AE                     SCASB.REPNE ES:EDI
0064254A  8B CA                     MOV ECX,EDX
0064254C  4F                        DEC EDI
0064254D  C1 E9 02                  SHR ECX,0x2
00642550  F3 A5                     MOVSD.REP ES:EDI,ESI
00642552  8B CA                     MOV ECX,EDX
00642554  8D 55 90                  LEA EDX,[EBP + -0x70]
00642557  83 E1 03                  AND ECX,0x3
0064255A  F3 A4                     MOVSB.REP ES:EDI,ESI
0064255C  BF 64 05 7D 00            MOV EDI,0x7d0564
LAB_00642561:
00642561  83 C9 FF                  OR ECX,0xffffffff
00642564  33 C0                     XOR EAX,EAX
00642566  F2 AE                     SCASB.REPNE ES:EDI
00642568  F7 D1                     NOT ECX
0064256A  2B F9                     SUB EDI,ECX
0064256C  C6 45 FF 0F               MOV byte ptr [EBP + -0x1],0xf
00642570  8B F7                     MOV ESI,EDI
00642572  8B FA                     MOV EDI,EDX
00642574  8B D1                     MOV EDX,ECX
00642576  83 C9 FF                  OR ECX,0xffffffff
00642579  F2 AE                     SCASB.REPNE ES:EDI
0064257B  8B CA                     MOV ECX,EDX
0064257D  4F                        DEC EDI
0064257E  C1 E9 02                  SHR ECX,0x2
00642581  F3 A5                     MOVSD.REP ES:EDI,ESI
00642583  8B CA                     MOV ECX,EDX
00642585  83 E1 03                  AND ECX,0x3
00642588  F3 A4                     MOVSB.REP ES:EDI,ESI
switchD_00641ac9::caseD_a2:
0064258A  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00642590  8D 45 BC                  LEA EAX,[EBP + -0x44]
00642593  6A 1D                     PUSH 0x1d
00642595  50                        PUSH EAX
00642596  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
0064259C  51                        PUSH ECX
0064259D  6A 00                     PUSH 0x0
0064259F  8B CF                     MOV ECX,EDI
006425A1  E8 DD 1B DC FF            CALL 0x00404183
006425A6  85 C0                     TEST EAX,EAX
006425A8  74 18                     JZ 0x006425c2
006425AA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006425B0  68 63 02 00 00            PUSH 0x263
006425B5  68 C0 25 7D 00            PUSH 0x7d25c0
006425BA  52                        PUSH EDX
006425BB  6A FF                     PUSH -0x1
006425BD  E8 7E 38 06 00            CALL 0x006a5e40
LAB_006425c2:
006425C2  6A 00                     PUSH 0x0
006425C4  8B CF                     MOV ECX,EDI
006425C6  E8 DB 34 DC FF            CALL 0x00405aa6
006425CB  8A 45 90                  MOV AL,byte ptr [EBP + -0x70]
006425CE  84 C0                     TEST AL,AL
006425D0  74 42                     JZ 0x00642614
006425D2  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
006425D8  8D 45 90                  LEA EAX,[EBP + -0x70]
006425DB  6A 1D                     PUSH 0x1d
006425DD  50                        PUSH EAX
006425DE  51                        PUSH ECX
006425DF  6A 02                     PUSH 0x2
006425E1  8B CF                     MOV ECX,EDI
006425E3  E8 9B 1B DC FF            CALL 0x00404183
006425E8  85 C0                     TEST EAX,EAX
006425EA  75 28                     JNZ 0x00642614
006425EC  6A 02                     PUSH 0x2
006425EE  8B CF                     MOV ECX,EDI
006425F0  E8 B1 34 DC FF            CALL 0x00405aa6
006425F5  6A 02                     PUSH 0x2
006425F7  8B CF                     MOV ECX,EDI
006425F9  E8 AE FC DB FF            CALL 0x004022ac
006425FE  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00642601  88 83 82 02 00 00         MOV byte ptr [EBX + 0x282],AL
00642607  88 93 83 02 00 00         MOV byte ptr [EBX + 0x283],DL
0064260D  C6 83 84 02 00 00 00      MOV byte ptr [EBX + 0x284],0x0
LAB_00642614:
00642614  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
00642617  84 C0                     TEST AL,AL
00642619  74 3B                     JZ 0x00642656
0064261B  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00642621  8D 45 D8                  LEA EAX,[EBP + -0x28]
00642624  6A 1D                     PUSH 0x1d
00642626  50                        PUSH EAX
00642627  51                        PUSH ECX
00642628  6A 01                     PUSH 0x1
0064262A  8B CF                     MOV ECX,EDI
0064262C  E8 52 1B DC FF            CALL 0x00404183
00642631  85 C0                     TEST EAX,EAX
00642633  74 18                     JZ 0x0064264d
00642635  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064263B  68 70 02 00 00            PUSH 0x270
00642640  68 C0 25 7D 00            PUSH 0x7d25c0
00642645  52                        PUSH EDX
00642646  6A FF                     PUSH -0x1
00642648  E8 F3 37 06 00            CALL 0x006a5e40
LAB_0064264d:
0064264D  6A 01                     PUSH 0x1
0064264F  8B CF                     MOV ECX,EDI
00642651  E8 50 34 DC FF            CALL 0x00405aa6
LAB_00642656:
00642656  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0064265B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00642661  51                        PUSH ECX
00642662  6A 00                     PUSH 0x0
00642664  8B CF                     MOV ECX,EDI
00642666  E8 D5 2B DC FF            CALL 0x00405240
0064266B  85 C0                     TEST EAX,EAX
0064266D  74 18                     JZ 0x00642687
0064266F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00642675  68 74 02 00 00            PUSH 0x274
0064267A  68 C0 25 7D 00            PUSH 0x7d25c0
0064267F  52                        PUSH EDX
00642680  6A FF                     PUSH -0x1
00642682  E8 B9 37 06 00            CALL 0x006a5e40
LAB_00642687:
00642687  6A 01                     PUSH 0x1
00642689  8B CF                     MOV ECX,EDI
0064268B  E8 1C FC DB FF            CALL 0x004022ac
00642690  85 C0                     TEST EAX,EAX
00642692  7E 49                     JLE 0x006426dd
00642694  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00642699  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0064269F  51                        PUSH ECX
006426A0  6A 01                     PUSH 0x1
006426A2  8B CF                     MOV ECX,EDI
006426A4  E8 97 2B DC FF            CALL 0x00405240
006426A9  85 C0                     TEST EAX,EAX
006426AB  74 18                     JZ 0x006426c5
006426AD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006426B3  68 77 02 00 00            PUSH 0x277
006426B8  68 C0 25 7D 00            PUSH 0x7d25c0
006426BD  52                        PUSH EDX
006426BE  6A FF                     PUSH -0x1
006426C0  E8 7B 37 06 00            CALL 0x006a5e40
LAB_006426c5:
006426C5  A1 B8 32 80 00            MOV EAX,[0x008032b8]
006426CA  6A 10                     PUSH 0x10
006426CC  50                        PUSH EAX
006426CD  8B CF                     MOV ECX,EDI
006426CF  E8 1A 1E DC FF            CALL 0x004044ee
006426D4  6A 01                     PUSH 0x1
006426D6  8B CF                     MOV ECX,EDI
006426D8  E8 56 0B DC FF            CALL 0x00403233
LAB_006426dd:
006426DD  6A 45                     PUSH 0x45
006426DF  6A 5A                     PUSH 0x5a
006426E1  6A 01                     PUSH 0x1
006426E3  8B CF                     MOV ECX,EDI
006426E5  E8 E2 2B DC FF            CALL 0x004052cc
006426EA  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
006426F0  50                        PUSH EAX
006426F1  E8 EA 7D 0A 00            CALL 0x006ea4e0
006426F6  8B 13                     MOV EDX,dword ptr [EBX]
006426F8  8B CB                     MOV ECX,EBX
006426FA  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00642700  85 C0                     TEST EAX,EAX
00642702  74 17                     JZ 0x0064271b
00642704  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00642709  68 7D 02 00 00            PUSH 0x27d
0064270E  68 C0 25 7D 00            PUSH 0x7d25c0
00642713  50                        PUSH EAX
00642714  6A FF                     PUSH -0x1
00642716  E8 25 37 06 00            CALL 0x006a5e40
LAB_0064271b:
0064271B  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00642721  05 6A FF FF FF            ADD EAX,0xffffff6a
00642726  83 F8 29                  CMP EAX,0x29
00642729  0F 87 92 E9 FF FF         JA 0x006410c1
0064272F  33 C9                     XOR ECX,ECX
00642731  8A 88 E0 32 64 00         MOV CL,byte ptr [EAX + 0x6432e0]
switchD_00642737::switchD:
00642737  FF 24 8D 78 32 64 00      JMP dword ptr [ECX*0x4 + 0x643278]
switchD_00642737::caseD_96:
0064273E  C7 45 F8 50 04 00 00      MOV dword ptr [EBP + -0x8],0x450
00642745  E9 77 E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_97:
0064274A  C7 45 F8 52 04 00 00      MOV dword ptr [EBP + -0x8],0x452
00642751  E9 6B E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_98:
00642756  C7 45 F8 54 04 00 00      MOV dword ptr [EBP + -0x8],0x454
0064275D  E9 5F E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_9a:
00642762  C7 45 F8 58 04 00 00      MOV dword ptr [EBP + -0x8],0x458
00642769  E9 53 E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_9c:
0064276E  C7 45 F8 6C 04 00 00      MOV dword ptr [EBP + -0x8],0x46c
00642775  E9 47 E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_9b:
0064277A  C7 45 F8 92 04 00 00      MOV dword ptr [EBP + -0x8],0x492
00642781  E9 3B E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_9d:
00642786  C7 45 F8 6E 04 00 00      MOV dword ptr [EBP + -0x8],0x46e
0064278D  E9 2F E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_9e:
00642792  C7 45 F8 70 04 00 00      MOV dword ptr [EBP + -0x8],0x470
00642799  E9 23 E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_99:
0064279E  C7 45 F8 56 04 00 00      MOV dword ptr [EBP + -0x8],0x456
006427A5  E9 17 E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_9f:
006427AA  C7 45 F8 66 04 00 00      MOV dword ptr [EBP + -0x8],0x466
006427B1  E9 0B E9 FF FF            JMP 0x006410c1
switchD_00642737::caseD_a0:
006427B6  C7 45 F8 68 04 00 00      MOV dword ptr [EBP + -0x8],0x468
006427BD  E9 FF E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_a4:
006427C2  C7 45 F8 94 04 00 00      MOV dword ptr [EBP + -0x8],0x494
006427C9  E9 F3 E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_a1:
006427CE  C7 45 F8 6A 04 00 00      MOV dword ptr [EBP + -0x8],0x46a
006427D5  E9 E7 E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_ae:
006427DA  C7 45 F8 8E 04 00 00      MOV dword ptr [EBP + -0x8],0x48e
006427E1  E9 DB E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_a3:
006427E6  C7 45 F8 90 04 00 00      MOV dword ptr [EBP + -0x8],0x490
006427ED  E9 CF E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_a5:
006427F2  C7 45 F8 86 04 00 00      MOV dword ptr [EBP + -0x8],0x486
006427F9  E9 C3 E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_b4:
006427FE  C7 45 F8 72 04 00 00      MOV dword ptr [EBP + -0x8],0x472
00642805  E9 B7 E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_ac:
0064280A  C7 45 F8 74 04 00 00      MOV dword ptr [EBP + -0x8],0x474
00642811  E9 AB E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_b6:
00642816  C7 45 F8 7A 04 00 00      MOV dword ptr [EBP + -0x8],0x47a
0064281D  E9 9F E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_b7:
00642822  C7 45 F8 7C 04 00 00      MOV dword ptr [EBP + -0x8],0x47c
00642829  E9 93 E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_b9:
0064282E  C7 45 F8 7E 04 00 00      MOV dword ptr [EBP + -0x8],0x47e
00642835  E9 87 E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_b8:
0064283A  C7 45 F8 80 04 00 00      MOV dword ptr [EBP + -0x8],0x480
00642841  E9 7B E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_ad:
00642846  C7 45 F8 82 04 00 00      MOV dword ptr [EBP + -0x8],0x482
0064284D  E9 6F E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_ba:
00642852  C7 45 F8 84 04 00 00      MOV dword ptr [EBP + -0x8],0x484
00642859  E9 63 E8 FF FF            JMP 0x006410c1
switchD_00642737::caseD_bf:
0064285E  C7 45 F8 88 04 00 00      MOV dword ptr [EBP + -0x8],0x488
00642865  E9 57 E8 FF FF            JMP 0x006410c1
LAB_0064286a:
0064286A  8A 83 7C 02 00 00         MOV AL,byte ptr [EBX + 0x27c]
00642870  8A 8B 82 02 00 00         MOV CL,byte ptr [EBX + 0x282]
00642876  FE C0                     INC AL
00642878  84 C9                     TEST CL,CL
0064287A  88 83 7C 02 00 00         MOV byte ptr [EBX + 0x27c],AL
00642880  76 6E                     JBE 0x006428f0
00642882  8A 93 83 02 00 00         MOV DL,byte ptr [EBX + 0x283]
00642888  3A D0                     CMP DL,AL
0064288A  77 64                     JA 0x006428f0
0064288C  75 1C                     JNZ 0x006428aa
0064288E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00642894  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0064289A  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
006428A0  52                        PUSH EDX
006428A1  6A 02                     PUSH 0x2
006428A3  E8 98 29 DC FF            CALL 0x00405240
006428A8  EB 46                     JMP 0x006428f0
LAB_006428aa:
006428AA  8A 83 84 02 00 00         MOV AL,byte ptr [EBX + 0x284]
006428B0  FE C0                     INC AL
006428B2  3A C1                     CMP AL,CL
006428B4  88 83 84 02 00 00         MOV byte ptr [EBX + 0x284],AL
006428BA  75 16                     JNZ 0x006428d2
006428BC  6A 02                     PUSH 0x2
006428BE  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
006428C4  E8 9B 19 DC FF            CALL 0x00404264
006428C9  C6 83 82 02 00 00 00      MOV byte ptr [EBX + 0x282],0x0
006428D0  EB 1E                     JMP 0x006428f0
LAB_006428d2:
006428D2  25 FF 00 00 00            AND EAX,0xff
006428D7  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
006428DD  50                        PUSH EAX
006428DE  6A 02                     PUSH 0x2
006428E0  8B CF                     MOV ECX,EDI
006428E2  E8 7D E7 DB FF            CALL 0x00401064
006428E7  6A 02                     PUSH 0x2
006428E9  8B CF                     MOV ECX,EDI
006428EB  E8 CC 07 DC FF            CALL 0x004030bc
LAB_006428f0:
006428F0  80 BB 7C 02 00 00 05      CMP byte ptr [EBX + 0x27c],0x5
006428F7  0F 85 2C 03 00 00         JNZ 0x00642c29
006428FD  80 BB 88 02 00 00 02      CMP byte ptr [EBX + 0x288],0x2
00642904  75 6B                     JNZ 0x00642971
00642906  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
0064290C  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0064290F  50                        PUSH EAX
00642910  51                        PUSH ECX
00642911  E8 14 F4 DB FF            CALL 0x00401d2a
00642916  88 83 5D 02 00 00         MOV byte ptr [EBX + 0x25d],AL
0064291C  8B 8B 59 02 00 00         MOV ECX,dword ptr [EBX + 0x259]
00642922  25 FF 00 00 00            AND EAX,0xff
00642927  56                        PUSH ESI
00642928  8D 94 89 12 FD FF FF      LEA EDX,[ECX + ECX*0x4 + 0xfffffd12]
0064292F  03 D0                     ADD EDX,EAX
00642931  8B 04 95 68 64 7E 00      MOV EAX,dword ptr [EDX*0x4 + 0x7e6468]
00642938  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
0064293E  99                        CDQ
0064293F  2B C2                     SUB EAX,EDX
00642941  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00642944  D1 F8                     SAR EAX,0x1
00642946  50                        PUSH EAX
00642947  33 C0                     XOR EAX,EAX
00642949  66 8B 83 62 02 00 00      MOV AX,word ptr [EBX + 0x262]
00642950  51                        PUSH ECX
00642951  8B 8B 5E 02 00 00         MOV ECX,dword ptr [EBX + 0x25e]
00642957  50                        PUSH EAX
00642958  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
0064295C  51                        PUSH ECX
0064295D  52                        PUSH EDX
0064295E  0F BF 4B 43               MOVSX ECX,word ptr [EBX + 0x43]
00642962  0F BF 53 41               MOVSX EDX,word ptr [EBX + 0x41]
00642966  50                        PUSH EAX
00642967  51                        PUSH ECX
00642968  52                        PUSH EDX
00642969  E8 6F EB DB FF            CALL 0x004014dd
0064296E  83 C4 2C                  ADD ESP,0x2c
LAB_00642971:
00642971  39 B3 70 02 00 00         CMP dword ptr [EBX + 0x270],ESI
00642977  0F 85 AC 02 00 00         JNZ 0x00642c29
0064297D  8B 8B 74 02 00 00         MOV ECX,dword ptr [EBX + 0x274]
00642983  8D 45 D4                  LEA EAX,[EBP + -0x2c]
00642986  50                        PUSH EAX
00642987  51                        PUSH ECX
00642988  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0064298E  E8 3D 39 0A 00            CALL 0x006e62d0
00642993  83 F8 FC                  CMP EAX,-0x4
00642996  75 1D                     JNZ 0x006429b5
00642998  8B CB                     MOV ECX,EBX
0064299A  E8 40 16 DC FF            CALL 0x00403fdf
0064299F  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
006429A5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006429AA  33 C0                     XOR EAX,EAX
006429AC  5F                        POP EDI
006429AD  5E                        POP ESI
006429AE  5B                        POP EBX
006429AF  8B E5                     MOV ESP,EBP
006429B1  5D                        POP EBP
006429B2  C2 04 00                  RET 0x4
LAB_006429b5:
006429B5  8B 93 59 02 00 00         MOV EDX,dword ptr [EBX + 0x259]
006429BB  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
006429BE  52                        PUSH EDX
006429BF  50                        PUSH EAX
006429C0  E8 65 F3 DB FF            CALL 0x00401d2a
006429C5  88 83 5D 02 00 00         MOV byte ptr [EBX + 0x25d],AL
006429CB  8B 8B 59 02 00 00         MOV ECX,dword ptr [EBX + 0x259]
006429D1  83 C4 08                  ADD ESP,0x8
006429D4  81 F9 9A 00 00 00         CMP ECX,0x9a
006429DA  75 30                     JNZ 0x00642a0c
006429DC  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006429DF  6A 00                     PUSH 0x0
006429E1  81 C1 D5 01 00 00         ADD ECX,0x1d5
006429E7  E8 E0 28 DC FF            CALL 0x004052cc
006429EC  50                        PUSH EAX
006429ED  E8 32 F9 DB FF            CALL 0x00402324
006429F2  83 C4 08                  ADD ESP,0x8
006429F5  33 D2                     XOR EDX,EDX
006429F7  8A 93 5D 02 00 00         MOV DL,byte ptr [EBX + 0x25d]
006429FD  8B 04 95 F8 21 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d21f8]
00642A04  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
00642A0A  EB 42                     JMP 0x00642a4e
LAB_00642a0c:
00642A0C  81 F9 AD 00 00 00         CMP ECX,0xad
00642A12  75 14                     JNZ 0x00642a28
00642A14  25 FF 00 00 00            AND EAX,0xff
00642A19  8B 0C 85 0C 22 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d220c]
00642A20  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
00642A26  EB 26                     JMP 0x00642a4e
LAB_00642a28:
00642A28  81 F9 A1 00 00 00         CMP ECX,0xa1
00642A2E  75 14                     JNZ 0x00642a44
00642A30  25 FF 00 00 00            AND EAX,0xff
00642A35  8B 14 85 20 22 7D 00      MOV EDX,dword ptr [EAX*0x4 + 0x7d2220]
00642A3C  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
00642A42  EB 0A                     JMP 0x00642a4e
LAB_00642a44:
00642A44  C7 85 50 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff50],0x0
LAB_00642a4e:
00642A4E  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00642A51  66 8B 8B 62 02 00 00      MOV CX,word ptr [EBX + 0x262]
00642A58  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
00642A5E  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00642A64  66 89 8D 4C FF FF FF      MOV word ptr [EBP + 0xffffff4c],CX
00642A6B  66 8B 93 5E 02 00 00      MOV DX,word ptr [EBX + 0x25e]
00642A72  33 C9                     XOR ECX,ECX
00642A74  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
00642A7A  8A 8B 5D 02 00 00         MOV CL,byte ptr [EBX + 0x25d]
00642A80  8D 84 80 12 FD FF FF      LEA EAX,[EAX + EAX*0x4 + 0xfffffd12]
00642A87  03 C1                     ADD EAX,ECX
00642A89  8A 8B 85 02 00 00         MOV CL,byte ptr [EBX + 0x285]
00642A8F  80 F9 01                  CMP CL,0x1
00642A92  66 89 95 4E FF FF FF      MOV word ptr [EBP + 0xffffff4e],DX
00642A99  8B 04 85 68 64 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e6468]
00642AA0  C7 85 54 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff54],0x0
00642AAA  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
00642AB0  75 0F                     JNZ 0x00642ac1
00642AB2  99                        CDQ
00642AB3  83 E2 03                  AND EDX,0x3
00642AB6  03 C2                     ADD EAX,EDX
00642AB8  C1 F8 02                  SAR EAX,0x2
00642ABB  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_00642ac1:
00642AC1  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00642AC4  8B 11                     MOV EDX,dword ptr [ECX]
00642AC6  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00642AC9  83 F8 68                  CMP EAX,0x68
00642ACC  0F 85 19 01 00 00         JNZ 0x00642beb
00642AD2  66 8B 93 45 02 00 00      MOV DX,word ptr [EBX + 0x245]
00642AD9  B9 16 00 00 00            MOV ECX,0x16
00642ADE  33 C0                     XOR EAX,EAX
00642AE0  8D BD E4 FD FF FF         LEA EDI,[EBP + 0xfffffde4]
00642AE6  F3 AB                     STOSD.REP ES:EDI
00642AE8  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00642AEB  C7 85 E4 FD FF FF 5E 01 00 00  MOV dword ptr [EBP + 0xfffffde4],0x15e
00642AF5  89 B5 F0 FD FF FF         MOV dword ptr [EBP + 0xfffffdf0],ESI
00642AFB  89 B5 EC FD FF FF         MOV dword ptr [EBP + 0xfffffdec],ESI
00642B01  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00642B04  66 89 95 F8 FD FF FF      MOV word ptr [EBP + 0xfffffdf8],DX
00642B0B  66 8B 93 49 02 00 00      MOV DX,word ptr [EBX + 0x249]
00642B12  89 8D E8 FD FF FF         MOV dword ptr [EBP + 0xfffffde8],ECX
00642B18  66 8B 8B 47 02 00 00      MOV CX,word ptr [EBX + 0x247]
00642B1F  66 89 95 FC FD FF FF      MOV word ptr [EBP + 0xfffffdfc],DX
00642B26  66 89 8D FA FD FF FF      MOV word ptr [EBP + 0xfffffdfa],CX
00642B2D  66 8B 48 32               MOV CX,word ptr [EAX + 0x32]
00642B31  66 89 8D 15 FE FF FF      MOV word ptr [EBP + 0xfffffe15],CX
00642B38  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
00642B3B  8A 8B 5D 02 00 00         MOV CL,byte ptr [EBX + 0x25d]
00642B41  89 95 11 FE FF FF         MOV dword ptr [EBP + 0xfffffe11],EDX
00642B47  88 8D 10 FE FF FF         MOV byte ptr [EBP + 0xfffffe10],CL
00642B4D  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00642B50  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00642B56  6A 7B                     PUSH 0x7b
00642B58  52                        PUSH EDX
00642B59  E8 0D ED DB FF            CALL 0x0040186b
00642B5E  85 C0                     TEST EAX,EAX
00642B60  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
00642B66  99                        CDQ
00642B67  74 06                     JZ 0x00642b6f
00642B69  2B C2                     SUB EAX,EDX
00642B6B  D1 F8                     SAR EAX,0x1
00642B6D  EB 08                     JMP 0x00642b77
LAB_00642b6f:
00642B6F  83 E2 03                  AND EDX,0x3
00642B72  03 C2                     ADD EAX,EDX
00642B74  C1 F8 02                  SAR EAX,0x2
LAB_00642b77:
00642B77  66 8B 53 45               MOV DX,word ptr [EBX + 0x45]
00642B7B  66 8B 4B 43               MOV CX,word ptr [EBX + 0x43]
00642B7F  66 89 95 02 FE FF FF      MOV word ptr [EBP + 0xfffffe02],DX
00642B86  66 8B 53 38               MOV DX,word ptr [EBX + 0x38]
00642B8A  89 85 17 FE FF FF         MOV dword ptr [EBP + 0xfffffe17],EAX
00642B90  66 8B 43 41               MOV AX,word ptr [EBX + 0x41]
00642B94  66 89 8D 00 FE FF FF      MOV word ptr [EBP + 0xfffffe00],CX
00642B9B  66 8B 4B 36               MOV CX,word ptr [EBX + 0x36]
00642B9F  66 89 95 08 FE FF FF      MOV word ptr [EBP + 0xfffffe08],DX
00642BA6  66 89 85 FE FD FF FF      MOV word ptr [EBP + 0xfffffdfe],AX
00642BAD  66 8B 43 34               MOV AX,word ptr [EBX + 0x34]
00642BB1  66 89 8D 06 FE FF FF      MOV word ptr [EBP + 0xfffffe06],CX
00642BB8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00642BBE  8D 95 E4 FD FF FF         LEA EDX,[EBP + 0xfffffde4]
00642BC4  6A 00                     PUSH 0x0
00642BC6  52                        PUSH EDX
00642BC7  66 89 85 04 FE FF FF      MOV word ptr [EBP + 0xfffffe04],AX
00642BCE  89 B5 0C FE FF FF         MOV dword ptr [EBP + 0xfffffe0c],ESI
00642BD4  66 C7 85 0A FE FF FF 00 00  MOV word ptr [EBP + 0xfffffe0a],0x0
00642BDD  8B 01                     MOV EAX,dword ptr [ECX]
00642BDF  6A 00                     PUSH 0x0
00642BE1  6A 00                     PUSH 0x0
00642BE3  68 47 01 00 00            PUSH 0x147
00642BE8  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_00642beb:
00642BEB  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00642BEE  8D 95 40 FF FF FF         LEA EDX,[EBP + 0xffffff40]
00642BF4  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00642BF7  89 95 D8 FD FF FF         MOV dword ptr [EBP + 0xfffffdd8],EDX
00642BFD  89 8D CC FD FF FF         MOV dword ptr [EBP + 0xfffffdcc],ECX
00642C03  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00642C09  C7 85 D0 FD FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffdd0],0x2
00642C13  C7 85 D4 FD FF FF 10 01 00 00  MOV dword ptr [EBP + 0xfffffdd4],0x110
00642C1D  8B 01                     MOV EAX,dword ptr [ECX]
00642C1F  8D 95 C4 FD FF FF         LEA EDX,[EBP + 0xfffffdc4]
00642C25  52                        PUSH EDX
00642C26  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_00642c29:
00642C29  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00642C2F  6A 00                     PUSH 0x0
00642C31  8B CE                     MOV ECX,ESI
00642C33  E8 74 F6 DB FF            CALL 0x004022ac
00642C38  33 C9                     XOR ECX,ECX
00642C3A  48                        DEC EAX
00642C3B  8A 8B 7C 02 00 00         MOV CL,byte ptr [EBX + 0x27c]
00642C41  3B C8                     CMP ECX,EAX
00642C43  7E 09                     JLE 0x00642c4e
00642C45  6A 00                     PUSH 0x0
00642C47  8B CE                     MOV ECX,ESI
00642C49  E8 16 16 DC FF            CALL 0x00404264
LAB_00642c4e:
00642C4E  6A 00                     PUSH 0x0
00642C50  8B CE                     MOV ECX,ESI
00642C52  E8 55 F6 DB FF            CALL 0x004022ac
00642C57  33 D2                     XOR EDX,EDX
00642C59  48                        DEC EAX
00642C5A  8A 93 7C 02 00 00         MOV DL,byte ptr [EBX + 0x27c]
00642C60  3B D0                     CMP EDX,EAX
00642C62  7E 27                     JLE 0x00642c8b
00642C64  8A 83 82 02 00 00         MOV AL,byte ptr [EBX + 0x282]
00642C6A  84 C0                     TEST AL,AL
00642C6C  75 1D                     JNZ 0x00642c8b
LAB_00642c6e:
00642C6E  8B CB                     MOV ECX,EBX
00642C70  E8 6A 13 DC FF            CALL 0x00403fdf
00642C75  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
00642C7B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00642C80  33 C0                     XOR EAX,EAX
00642C82  5F                        POP EDI
00642C83  5E                        POP ESI
00642C84  5B                        POP EBX
00642C85  8B E5                     MOV ESP,EBP
00642C87  5D                        POP EBP
00642C88  C2 04 00                  RET 0x4
STTorpC::GetMessage::cf_common_exit_00642C8B:
00642C8B  8B 03                     MOV EAX,dword ptr [EBX]
00642C8D  8B CB                     MOV ECX,EBX
00642C8F  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00642C95  85 C0                     TEST EAX,EAX
00642C97  0F 84 00 03 00 00         JZ 0x00642f9d
00642C9D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00642CA3  68 0F 03 00 00            PUSH 0x30f
00642CA8  68 C0 25 7D 00            PUSH 0x7d25c0
00642CAD  51                        PUSH ECX
00642CAE  6A FF                     PUSH -0x1
00642CB0  E8 8B 31 06 00            CALL 0x006a5e40
00642CB5  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
00642CBB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00642CC0  33 C0                     XOR EAX,EAX
00642CC2  5F                        POP EDI
00642CC3  5E                        POP ESI
00642CC4  5B                        POP EBX
00642CC5  8B E5                     MOV ESP,EBP
00642CC7  5D                        POP EBP
00642CC8  C2 04 00                  RET 0x4
LAB_00642ccb:
00642CCB  66 8B 93 6E 02 00 00      MOV DX,word ptr [EBX + 0x26e]
00642CD2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00642CD8  53                        PUSH EBX
00642CD9  52                        PUSH EDX
00642CDA  E8 E5 1E DC FF            CALL 0x00404bc4
00642CDF  8B 83 41 02 00 00         MOV EAX,dword ptr [EBX + 0x241]
00642CE5  50                        PUSH EAX
00642CE6  E8 25 B4 06 00            CALL 0x006ae110
00642CEB  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00642CF1  E8 DF F4 DB FF            CALL 0x004021d5
00642CF6  81 C3 7E 02 00 00         ADD EBX,0x27e
00642CFC  53                        PUSH EBX
00642CFD  E8 58 2E DC FF            CALL 0x00405b5a
00642D02  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
00642D08  83 C4 04                  ADD ESP,0x4
00642D0B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00642D10  33 C0                     XOR EAX,EAX
00642D12  5F                        POP EDI
00642D13  5E                        POP ESI
00642D14  5B                        POP EBX
00642D15  8B E5                     MOV ESP,EBP
00642D17  5D                        POP EBP
00642D18  C2 04 00                  RET 0x4
LAB_00642d1b:
00642D1B  2D 08 01 00 00            SUB EAX,0x108
00642D20  74 50                     JZ 0x00642d72
00642D22  83 E8 07                  SUB EAX,0x7
00642D25  0F 85 72 02 00 00         JNZ 0x00642f9d
00642D2B  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
00642D31  51                        PUSH ECX
00642D32  8B CB                     MOV ECX,EBX
00642D34  E8 9C 26 DC FF            CALL 0x004053d5
00642D39  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
00642D3F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00642D45  52                        PUSH EDX
00642D46  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00642D49  50                        PUSH EAX
00642D4A  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00642D4D  50                        PUSH EAX
00642D4E  E8 A6 F8 DB FF            CALL 0x004025f9
00642D53  8D 4D B8                  LEA ECX,[EBP + -0x48]
00642D56  51                        PUSH ECX
00642D57  E8 04 83 06 00            CALL 0x006ab060
00642D5C  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
00642D62  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00642D67  33 C0                     XOR EAX,EAX
00642D69  5F                        POP EDI
00642D6A  5E                        POP ESI
00642D6B  5B                        POP EBX
00642D6C  8B E5                     MOV ESP,EBP
00642D6E  5D                        POP EBP
00642D6F  C2 04 00                  RET 0x4
LAB_00642d72:
00642D72  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00642D78  3D 9F 00 00 00            CMP EAX,0x9f
00642D7D  0F 84 1A 02 00 00         JZ 0x00642f9d
00642D83  3D A0 00 00 00            CMP EAX,0xa0
00642D88  0F 84 0F 02 00 00         JZ 0x00642f9d
00642D8E  3D BF 00 00 00            CMP EAX,0xbf
00642D93  0F 84 04 02 00 00         JZ 0x00642f9d
00642D99  3D A3 00 00 00            CMP EAX,0xa3
00642D9E  0F 84 F9 01 00 00         JZ 0x00642f9d
00642DA4  3D A4 00 00 00            CMP EAX,0xa4
00642DA9  0F 84 EE 01 00 00         JZ 0x00642f9d
00642DAF  3D AE 00 00 00            CMP EAX,0xae
00642DB4  0F 84 E3 01 00 00         JZ 0x00642f9d
00642DBA  3D A5 00 00 00            CMP EAX,0xa5
00642DBF  0F 84 D8 01 00 00         JZ 0x00642f9d
00642DC5  3D A1 00 00 00            CMP EAX,0xa1
00642DCA  0F 84 CD 01 00 00         JZ 0x00642f9d
00642DD0  3D B4 00 00 00            CMP EAX,0xb4
00642DD5  0F 84 C2 01 00 00         JZ 0x00642f9d
00642DDB  3D B6 00 00 00            CMP EAX,0xb6
00642DE0  0F 84 B7 01 00 00         JZ 0x00642f9d
00642DE6  3D B7 00 00 00            CMP EAX,0xb7
00642DEB  0F 84 AC 01 00 00         JZ 0x00642f9d
00642DF1  3D B9 00 00 00            CMP EAX,0xb9
00642DF6  0F 84 A1 01 00 00         JZ 0x00642f9d
00642DFC  3D AD 00 00 00            CMP EAX,0xad
00642E01  0F 84 96 01 00 00         JZ 0x00642f9d
00642E07  3D BA 00 00 00            CMP EAX,0xba
00642E0C  0F 84 8B 01 00 00         JZ 0x00642f9d
00642E12  83 BB 3D 02 00 00 01      CMP dword ptr [EBX + 0x23d],0x1
00642E19  0F 85 7E 01 00 00         JNZ 0x00642f9d
00642E1F  0F BF 93 4B 02 00 00      MOVSX EDX,word ptr [EBX + 0x24b]
00642E26  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00642E29  6A 01                     PUSH 0x1
00642E2B  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00642E2E  0F BF 83 4D 02 00 00      MOVSX EAX,word ptr [EBX + 0x24d]
00642E35  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00642E3B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00642E3E  6A 00                     PUSH 0x0
00642E40  0F BF 8B 4F 02 00 00      MOVSX ECX,word ptr [EBX + 0x24f]
00642E47  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00642E4D  6A 00                     PUSH 0x0
00642E4F  6A 00                     PUSH 0x0
00642E51  6A 00                     PUSH 0x0
00642E53  6A 00                     PUSH 0x0
00642E55  D9 9D A0 FE FF FF         FSTP float ptr [EBP + 0xfffffea0]
00642E5B  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00642E5E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00642E61  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00642E67  8D 95 A0 FE FF FF         LEA EDX,[EBP + 0xfffffea0]
00642E6D  6A 00                     PUSH 0x0
00642E6F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00642E75  8D 85 4C FE FF FF         LEA EAX,[EBP + 0xfffffe4c]
00642E7B  52                        PUSH EDX
00642E7C  50                        PUSH EAX
00642E7D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00642E83  D9 9D A4 FE FF FF         FSTP float ptr [EBP + 0xfffffea4]
00642E89  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00642E8C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00642E92  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00642E98  D9 9D A8 FE FF FF         FSTP float ptr [EBP + 0xfffffea8]
00642E9E  E8 2D F7 09 00            CALL 0x006e25d0
00642EA3  0F BF 8B 51 02 00 00      MOVSX ECX,word ptr [EBX + 0x251]
00642EAA  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00642EAD  6A 01                     PUSH 0x1
00642EAF  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00642EB2  0F BF 93 53 02 00 00      MOVSX EDX,word ptr [EBX + 0x253]
00642EB9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00642EBF  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00642EC2  6A 00                     PUSH 0x0
00642EC4  0F BF 83 55 02 00 00      MOVSX EAX,word ptr [EBX + 0x255]
00642ECB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00642ED1  6A 00                     PUSH 0x0
00642ED3  6A 00                     PUSH 0x0
00642ED5  6A 00                     PUSH 0x0
00642ED7  6A 00                     PUSH 0x0
00642ED9  D9 9D 94 FE FF FF         FSTP float ptr [EBP + 0xfffffe94]
00642EDF  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00642EE2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00642EE5  8D 8D 94 FE FF FF         LEA ECX,[EBP + 0xfffffe94]
00642EEB  6A 00                     PUSH 0x0
00642EED  8D 95 3C FE FF FF         LEA EDX,[EBP + 0xfffffe3c]
00642EF3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00642EF9  51                        PUSH ECX
00642EFA  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00642F00  52                        PUSH EDX
00642F01  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00642F07  D9 9D 98 FE FF FF         FSTP float ptr [EBP + 0xfffffe98]
00642F0D  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00642F10  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00642F16  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00642F1C  D9 9D 9C FE FF FF         FSTP float ptr [EBP + 0xfffffe9c]
00642F22  E8 A9 F6 09 00            CALL 0x006e25d0
00642F27  8B 8D 44 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe44]
00642F2D  8B 95 40 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe40]
00642F33  8B 03                     MOV EAX,dword ptr [EBX]
00642F35  C1 F9 10                  SAR ECX,0x10
00642F38  C1 FA 10                  SAR EDX,0x10
00642F3B  51                        PUSH ECX
00642F3C  52                        PUSH EDX
00642F3D  8B 8D 3C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe3c]
00642F43  8B 95 54 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe54]
00642F49  C1 F9 10                  SAR ECX,0x10
00642F4C  C1 FA 10                  SAR EDX,0x10
00642F4F  51                        PUSH ECX
00642F50  8B 8D 50 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe50]
00642F56  52                        PUSH EDX
00642F57  8B 95 4C FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe4c]
00642F5D  C1 F9 10                  SAR ECX,0x10
00642F60  C1 FA 10                  SAR EDX,0x10
00642F63  51                        PUSH ECX
00642F64  52                        PUSH EDX
00642F65  8B CB                     MOV ECX,EBX
00642F67  FF 50 14                  CALL dword ptr [EAX + 0x14]
00642F6A  0F BF C0                  MOVSX EAX,AX
00642F6D  6A 00                     PUSH 0x0
00642F6F  81 C3 D5 01 00 00         ADD EBX,0x1d5
00642F75  8B 04 85 38 21 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d2138]
00642F7C  8B CB                     MOV ECX,EBX
00642F7E  50                        PUSH EAX
00642F7F  50                        PUSH EAX
00642F80  6A 00                     PUSH 0x0
00642F82  E8 33 EF DB FF            CALL 0x00401eba
00642F87  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00642F8D  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00642F93  8B CB                     MOV ECX,EBX
00642F95  52                        PUSH EDX
00642F96  6A 00                     PUSH 0x0
00642F98  E8 A3 22 DC FF            CALL 0x00405240
LAB_00642f9d:
00642F9D  8B 85 78 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd78]
00642FA3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00642FA8  33 C0                     XOR EAX,EAX
00642FAA  5F                        POP EDI
00642FAB  5E                        POP ESI
00642FAC  5B                        POP EBX
00642FAD  8B E5                     MOV ESP,EBP
00642FAF  5D                        POP EBP
00642FB0  C2 04 00                  RET 0x4
LAB_00642fb3:
00642FB3  8B 8D 78 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd78]
00642FB9  68 18 24 7D 00            PUSH 0x7d2418
00642FBE  68 CC 4C 7A 00            PUSH 0x7a4ccc
00642FC3  56                        PUSH ESI
00642FC4  6A 00                     PUSH 0x0
00642FC6  68 50 03 00 00            PUSH 0x350
00642FCB  68 C0 25 7D 00            PUSH 0x7d25c0
00642FD0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00642FD6  E8 F5 A4 06 00            CALL 0x006ad4d0
00642FDB  83 C4 18                  ADD ESP,0x18
00642FDE  85 C0                     TEST EAX,EAX
00642FE0  74 01                     JZ 0x00642fe3
00642FE2  CC                        INT3
LAB_00642fe3:
00642FE3  68 51 03 00 00            PUSH 0x351
00642FE8  68 C0 25 7D 00            PUSH 0x7d25c0
00642FED  6A 00                     PUSH 0x0
00642FEF  56                        PUSH ESI
00642FF0  E8 4B 2E 06 00            CALL 0x006a5e40
00642FF5  5F                        POP EDI
00642FF6  5E                        POP ESI
00642FF7  B8 FF FF 00 00            MOV EAX,0xffff
00642FFC  5B                        POP EBX
00642FFD  8B E5                     MOV ESP,EBP
00642FFF  5D                        POP EBP
00643000  C2 04 00                  RET 0x4
