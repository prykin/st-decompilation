FUN_004603b0:
004603B0  55                        PUSH EBP
004603B1  8B EC                     MOV EBP,ESP
004603B3  83 EC 08                  SUB ESP,0x8
004603B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004603B9  53                        PUSH EBX
004603BA  33 DB                     XOR EBX,EBX
004603BC  56                        PUSH ESI
004603BD  3B C3                     CMP EAX,EBX
004603BF  57                        PUSH EDI
004603C0  8B F1                     MOV ESI,ECX
004603C2  74 05                     JZ 0x004603c9
004603C4  83 F8 01                  CMP EAX,0x1
004603C7  75 29                     JNZ 0x004603f2
LAB_004603c9:
004603C9  B9 17 00 00 00            MOV ECX,0x17
004603CE  33 C0                     XOR EAX,EAX
004603D0  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
004603D6  F3 AB                     STOSD.REP ES:EDI
004603D8  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
004603DE  C7 86 2E 08 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x82e],0xffffffff
004603E8  C7 86 36 08 00 00 03 00 00 00  MOV dword ptr [ESI + 0x836],0x3
LAB_004603f2:
004603F2  83 BE 2E 08 00 00 FF      CMP dword ptr [ESI + 0x82e],-0x1
004603F9  75 15                     JNZ 0x00460410
004603FB  8B 86 36 08 00 00         MOV EAX,dword ptr [ESI + 0x836]
00460401  48                        DEC EAX
00460402  89 86 36 08 00 00         MOV dword ptr [ESI + 0x836],EAX
00460408  75 06                     JNZ 0x00460410
0046040A  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
LAB_00460410:
00460410  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
00460416  0F 85 DC 00 00 00         JNZ 0x004604f8
0046041C  8B 86 36 08 00 00         MOV EAX,dword ptr [ESI + 0x836]
00460422  25 01 00 00 80            AND EAX,0x80000001
00460427  79 05                     JNS 0x0046042e
00460429  48                        DEC EAX
0046042A  83 C8 FE                  OR EAX,0xfffffffe
0046042D  40                        INC EAX
LAB_0046042e:
0046042E  0F 85 B5 00 00 00         JNZ 0x004604e9
00460434  A1 34 A1 7F 00            MOV EAX,[0x007fa134]
00460439  3B C3                     CMP EAX,EBX
0046043B  0F 84 A8 00 00 00         JZ 0x004604e9
00460441  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
00460447  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0046044A  3B CB                     CMP ECX,EBX
0046044C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0046044F  0F 84 94 00 00 00         JZ 0x004604e9
00460455  33 FF                     XOR EDI,EDI
00460457  8B D8                     MOV EBX,EAX
00460459  85 C9                     TEST ECX,ECX
0046045B  0F 86 88 00 00 00         JBE 0x004604e9
LAB_00460461:
00460461  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
00460467  8D 55 08                  LEA EDX,[EBP + 0x8]
0046046A  52                        PUSH EDX
0046046B  8B D7                     MOV EDX,EDI
0046046D  E8 FE C7 24 00            CALL 0x006acc70
00460472  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00460475  85 C9                     TEST ECX,ECX
00460477  74 64                     JZ 0x004604dd
00460479  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046047C  8D 45 FC                  LEA EAX,[EBP + -0x4]
0046047F  50                        PUSH EAX
00460480  52                        PUSH EDX
00460481  4B                        DEC EBX
00460482  E8 05 43 FA FF            CALL 0x0040478c
00460487  83 F8 02                  CMP EAX,0x2
0046048A  74 4D                     JZ 0x004604d9
0046048C  85 C0                     TEST EAX,EAX
0046048E  75 34                     JNZ 0x004604c4
00460490  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00460493  8B CE                     MOV ECX,ESI
00460495  50                        PUSH EAX
00460496  E8 FE 35 FA FF            CALL 0x00403a99
0046049B  83 F8 01                  CMP EAX,0x1
0046049E  75 12                     JNZ 0x004604b2
004604A0  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004604A3  8D 4D FC                  LEA ECX,[EBP + -0x4]
004604A6  51                        PUSH ECX
004604A7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004604AA  52                        PUSH EDX
004604AB  E8 DE 31 FA FF            CALL 0x0040368e
004604B0  EB 17                     JMP 0x004604c9
LAB_004604b2:
004604B2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004604B5  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004604B8  50                        PUSH EAX
004604B9  51                        PUSH ECX
004604BA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004604BD  E8 6C 23 FA FF            CALL 0x0040282e
004604C2  EB 15                     JMP 0x004604d9
LAB_004604c4:
004604C4  83 F8 01                  CMP EAX,0x1
004604C7  75 10                     JNZ 0x004604d9
LAB_004604c9:
004604C9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004604CC  8B CE                     MOV ECX,ESI
004604CE  52                        PUSH EDX
004604CF  E8 7D 0F FA FF            CALL 0x00401451
004604D4  83 F8 01                  CMP EAX,0x1
004604D7  74 62                     JZ 0x0046053b
LAB_004604d9:
004604D9  85 DB                     TEST EBX,EBX
004604DB  74 0C                     JZ 0x004604e9
LAB_004604dd:
004604DD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004604E0  47                        INC EDI
004604E1  3B F8                     CMP EDI,EAX
004604E3  0F 82 78 FF FF FF         JC 0x00460461
LAB_004604e9:
004604E9  8B 86 36 08 00 00         MOV EAX,dword ptr [ESI + 0x836]
004604EF  40                        INC EAX
004604F0  33 DB                     XOR EBX,EBX
004604F2  89 86 36 08 00 00         MOV dword ptr [ESI + 0x836],EAX
LAB_004604f8:
004604F8  83 BE 2E 08 00 00 01      CMP dword ptr [ESI + 0x82e],0x1
004604FF  0F 85 B7 01 00 00         JNZ 0x004606bc
00460505  8B BE 36 08 00 00         MOV EDI,dword ptr [ESI + 0x836]
0046050B  6A 02                     PUSH 0x2
0046050D  47                        INC EDI
0046050E  8B CE                     MOV ECX,ESI
00460510  89 BE 36 08 00 00         MOV dword ptr [ESI + 0x836],EDI
00460516  E8 19 36 FA FF            CALL 0x00403b34
0046051B  83 F8 FF                  CMP EAX,-0x1
0046051E  0F 84 AC 00 00 00         JZ 0x004605d0
00460524  3B C3                     CMP EAX,EBX
00460526  0F 85 85 01 00 00         JNZ 0x004606b1
0046052C  C7 86 2E 08 00 00 02 00 00 00  MOV dword ptr [ESI + 0x82e],0x2
00460536  E9 81 01 00 00            JMP 0x004606bc
LAB_0046053b:
0046053B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0046053E  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00460541  50                        PUSH EAX
00460542  51                        PUSH ECX
00460543  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00460546  E8 E3 22 FA FF            CALL 0x0040282e
0046054B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046054E  89 86 6B 04 00 00         MOV dword ptr [ESI + 0x46b],EAX
00460554  66 8B 90 6E 02 00 00      MOV DX,word ptr [EAX + 0x26e]
0046055B  66 89 96 6F 04 00 00      MOV word ptr [ESI + 0x46f],DX
00460562  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00460565  89 86 71 04 00 00         MOV dword ptr [ESI + 0x471],EAX
0046056B  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
0046056F  66 85 C0                  TEST AX,AX
00460572  75 68                     JNZ 0x004605dc
00460574  8B 16                     MOV EDX,dword ptr [ESI]
00460576  66 C7 86 69 04 00 00 01 00  MOV word ptr [ESI + 0x469],0x1
0046057F  6A 01                     PUSH 0x1
LAB_00460581:
00460581  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00460585  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00460589  50                        PUSH EAX
0046058A  51                        PUSH ECX
0046058B  8B CE                     MOV ECX,ESI
0046058D  FF 52 18                  CALL dword ptr [EDX + 0x18]
00460590  83 F8 01                  CMP EAX,0x1
00460593  0F 85 50 FF FF FF         JNZ 0x004604e9
00460599  0F BF 96 69 04 00 00      MOVSX EDX,word ptr [ESI + 0x469]
004605A0  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
004605A4  89 86 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EAX
004605AA  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
004605AE  03 D0                     ADD EDX,EAX
004605B0  52                        PUSH EDX
004605B1  51                        PUSH ECX
004605B2  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
004605B6  52                        PUSH EDX
LAB_004605b7:
004605B7  8B CE                     MOV ECX,ESI
004605B9  E8 AD 49 FA FF            CALL 0x00404f6b
004605BE  6A 00                     PUSH 0x0
004605C0  8B CE                     MOV ECX,ESI
004605C2  E8 6D 35 FA FF            CALL 0x00403b34
004605C7  83 F8 FF                  CMP EAX,-0x1
004605CA  0F 85 19 FF FF FF         JNZ 0x004604e9
LAB_004605d0:
004605D0  5F                        POP EDI
004605D1  5E                        POP ESI
004605D2  83 C8 FF                  OR EAX,0xffffffff
004605D5  5B                        POP EBX
004605D6  8B E5                     MOV ESP,EBP
004605D8  5D                        POP EBP
004605D9  C2 04 00                  RET 0x4
LAB_004605dc:
004605DC  66 3D 04 00               CMP AX,0x4
004605E0  75 45                     JNZ 0x00460627
004605E2  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
004605E6  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
004605EA  8B 06                     MOV EAX,dword ptr [ESI]
004605EC  6A 03                     PUSH 0x3
004605EE  51                        PUSH ECX
004605EF  52                        PUSH EDX
004605F0  8B CE                     MOV ECX,ESI
004605F2  66 C7 86 69 04 00 00 FF FF  MOV word ptr [ESI + 0x469],0xffff
004605FB  FF 50 18                  CALL dword ptr [EAX + 0x18]
004605FE  83 F8 01                  CMP EAX,0x1
00460601  0F 85 E2 FE FF FF         JNZ 0x004604e9
00460607  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
0046060B  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0046060F  89 86 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EAX
00460615  0F BF 86 69 04 00 00      MOVSX EAX,word ptr [ESI + 0x469]
0046061C  03 C1                     ADD EAX,ECX
0046061E  50                        PUSH EAX
0046061F  52                        PUSH EDX
00460620  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00460624  50                        PUSH EAX
00460625  EB 90                     JMP 0x004605b7
LAB_00460627:
00460627  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0046062A  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00460630  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00460636  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00460639  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
0046063D  C1 E8 10                  SHR EAX,0x10
00460640  83 E0 01                  AND EAX,0x1
00460643  8B 16                     MOV EDX,dword ptr [ESI]
00460645  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
0046064C  66 F7 D8                  NEG AX
0046064F  1B C0                     SBB EAX,EAX
00460651  83 E0 02                  AND EAX,0x2
00460654  48                        DEC EAX
00460655  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
0046065C  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
00460660  50                        PUSH EAX
00460661  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00460665  51                        PUSH ECX
00460666  50                        PUSH EAX
00460667  8B CE                     MOV ECX,ESI
00460669  FF 52 18                  CALL dword ptr [EDX + 0x18]
0046066C  83 F8 01                  CMP EAX,0x1
0046066F  75 23                     JNZ 0x00460694
00460671  0F BF 8E 69 04 00 00      MOVSX ECX,word ptr [ESI + 0x469]
00460678  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0046067C  03 CA                     ADD ECX,EDX
0046067E  89 86 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EAX
00460684  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00460688  51                        PUSH ECX
00460689  50                        PUSH EAX
0046068A  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0046068E  51                        PUSH ECX
0046068F  E9 23 FF FF FF            JMP 0x004605b7
LAB_00460694:
00460694  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
0046069B  8B 16                     MOV EDX,dword ptr [ESI]
0046069D  66 F7 D8                  NEG AX
004606A0  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
004606A7  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
004606AB  50                        PUSH EAX
004606AC  E9 D0 FE FF FF            JMP 0x00460581
LAB_004606b1:
004606B1  83 F8 03                  CMP EAX,0x3
004606B4  75 06                     JNZ 0x004606bc
004606B6  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
LAB_004606bc:
004606BC  83 BE 2E 08 00 00 02      CMP dword ptr [ESI + 0x82e],0x2
004606C3  0F 85 8A 00 00 00         JNZ 0x00460753
004606C9  8B CE                     MOV ECX,ESI
004606CB  E8 87 57 FA FF            CALL 0x00405e57
004606D0  83 F8 01                  CMP EAX,0x1
004606D3  75 7E                     JNZ 0x00460753
004606D5  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
004606DC  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
004606E0  66 F7 D8                  NEG AX
004606E3  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
004606EA  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
004606EE  8B 16                     MOV EDX,dword ptr [ESI]
004606F0  50                        PUSH EAX
004606F1  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
004606F5  50                        PUSH EAX
004606F6  51                        PUSH ECX
004606F7  8B CE                     MOV ECX,ESI
004606F9  FF 52 18                  CALL dword ptr [EDX + 0x18]
004606FC  83 F8 01                  CMP EAX,0x1
004606FF  75 41                     JNZ 0x00460742
00460701  0F BF 96 69 04 00 00      MOVSX EDX,word ptr [ESI + 0x469]
00460708  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0046070C  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00460710  03 D0                     ADD EDX,EAX
00460712  C7 86 2E 08 00 00 03 00 00 00  MOV dword ptr [ESI + 0x82e],0x3
0046071C  52                        PUSH EDX
0046071D  51                        PUSH ECX
0046071E  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00460722  52                        PUSH EDX
00460723  8B CE                     MOV ECX,ESI
00460725  E8 41 48 FA FF            CALL 0x00404f6b
0046072A  53                        PUSH EBX
0046072B  8B CE                     MOV ECX,ESI
0046072D  E8 02 34 FA FF            CALL 0x00403b34
00460732  83 F8 FF                  CMP EAX,-0x1
00460735  75 1C                     JNZ 0x00460753
00460737  5F                        POP EDI
00460738  5E                        POP ESI
00460739  0B C0                     OR EAX,EAX
0046073B  5B                        POP EBX
0046073C  8B E5                     MOV ESP,EBP
0046073E  5D                        POP EBP
0046073F  C2 04 00                  RET 0x4
LAB_00460742:
00460742  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
00460749  66 F7 D8                  NEG AX
0046074C  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
LAB_00460753:
00460753  83 BE 2E 08 00 00 03      CMP dword ptr [ESI + 0x82e],0x3
0046075A  75 2E                     JNZ 0x0046078a
0046075C  8B BE 36 08 00 00         MOV EDI,dword ptr [ESI + 0x836]
00460762  6A 02                     PUSH 0x2
00460764  47                        INC EDI
00460765  8B CE                     MOV ECX,ESI
00460767  89 BE 36 08 00 00         MOV dword ptr [ESI + 0x836],EDI
0046076D  E8 C2 33 FA FF            CALL 0x00403b34
00460772  83 F8 FF                  CMP EAX,-0x1
00460775  0F 84 55 FE FF FF         JZ 0x004605d0
0046077B  3B C3                     CMP EAX,EBX
0046077D  74 05                     JZ 0x00460784
0046077F  83 F8 03                  CMP EAX,0x3
00460782  75 06                     JNZ 0x0046078a
LAB_00460784:
00460784  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
LAB_0046078a:
0046078A  8B 16                     MOV EDX,dword ptr [ESI]
0046078C  8B CE                     MOV ECX,ESI
0046078E  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00460794  F7 D8                     NEG EAX
00460796  1B C0                     SBB EAX,EAX
00460798  5F                        POP EDI
00460799  24 FD                     AND AL,0xfd
0046079B  5E                        POP ESI
0046079C  83 C0 02                  ADD EAX,0x2
0046079F  5B                        POP EBX
004607A0  8B E5                     MOV ESP,EBP
004607A2  5D                        POP EBP
004607A3  C2 04 00                  RET 0x4
