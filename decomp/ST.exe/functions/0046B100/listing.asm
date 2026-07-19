STBoatC::Build:
0046B100  55                        PUSH EBP
0046B101  8B EC                     MOV EBP,ESP
0046B103  81 EC D4 00 00 00         SUB ESP,0xd4
0046B109  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046B10C  53                        PUSH EBX
0046B10D  33 DB                     XOR EBX,EBX
0046B10F  56                        PUSH ESI
0046B110  3B C3                     CMP EAX,EBX
0046B112  57                        PUSH EDI
0046B113  8B F1                     MOV ESI,ECX
0046B115  74 09                     JZ 0x0046b120
0046B117  83 F8 01                  CMP EAX,0x1
0046B11A  0F 85 46 01 00 00         JNZ 0x0046b266
LAB_0046b120:
0046B120  B9 17 00 00 00            MOV ECX,0x17
0046B125  33 C0                     XOR EAX,EAX
0046B127  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
0046B12D  F3 AB                     STOSD.REP ES:EDI
0046B12F  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
0046B135  66 8B 86 73 03 00 00      MOV AX,word ptr [ESI + 0x373]
0046B13C  66 8B 8E 77 03 00 00      MOV CX,word ptr [ESI + 0x377]
0046B143  66 8B 96 75 03 00 00      MOV DX,word ptr [ESI + 0x375]
0046B14A  66 3B C3                  CMP AX,BX
0046B14D  7C 54                     JL 0x0046b1a3
0046B14F  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0046B156  7D 4B                     JGE 0x0046b1a3
0046B158  66 3B D3                  CMP DX,BX
0046B15B  7C 46                     JL 0x0046b1a3
0046B15D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046B164  7D 3D                     JGE 0x0046b1a3
0046B166  66 3B CB                  CMP CX,BX
0046B169  7C 38                     JL 0x0046b1a3
0046B16B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046B172  7D 2F                     JGE 0x0046b1a3
0046B174  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0046B17B  0F BF D2                  MOVSX EDX,DX
0046B17E  0F AF FA                  IMUL EDI,EDX
0046B181  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0046B188  0F BF C9                  MOVSX ECX,CX
0046B18B  0F AF D1                  IMUL EDX,ECX
0046B18E  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
0046B194  03 FA                     ADD EDI,EDX
0046B196  0F BF D0                  MOVSX EDX,AX
0046B199  03 FA                     ADD EDI,EDX
0046B19B  0F BF 0C 79               MOVSX ECX,word ptr [ECX + EDI*0x2]
0046B19F  3B CB                     CMP ECX,EBX
0046B1A1  74 0B                     JZ 0x0046b1ae
LAB_0046b1a3:
0046B1A3  33 C0                     XOR EAX,EAX
0046B1A5  5F                        POP EDI
0046B1A6  5E                        POP ESI
0046B1A7  5B                        POP EBX
0046B1A8  8B E5                     MOV ESP,EBP
0046B1AA  5D                        POP EBP
0046B1AB  C2 04 00                  RET 0x4
LAB_0046b1ae:
0046B1AE  66 8B 8E 90 03 00 00      MOV CX,word ptr [ESI + 0x390]
0046B1B5  66 89 86 DD 04 00 00      MOV word ptr [ESI + 0x4dd],AX
0046B1BC  66 8B 96 75 03 00 00      MOV DX,word ptr [ESI + 0x375]
0046B1C3  66 89 8E FA 04 00 00      MOV word ptr [ESI + 0x4fa],CX
0046B1CA  66 89 96 DF 04 00 00      MOV word ptr [ESI + 0x4df],DX
0046B1D1  66 8B 86 77 03 00 00      MOV AX,word ptr [ESI + 0x377]
0046B1D8  66 89 86 E1 04 00 00      MOV word ptr [ESI + 0x4e1],AX
0046B1DF  8B 86 79 03 00 00         MOV EAX,dword ptr [ESI + 0x379]
0046B1E5  89 86 E3 04 00 00         MOV dword ptr [ESI + 0x4e3],EAX
0046B1EB  8D 8E 81 03 00 00         LEA ECX,[ESI + 0x381]
0046B1F1  8B 14 85 68 1D 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x791d68]
0046B1F8  8B 86 7D 03 00 00         MOV EAX,dword ptr [ESI + 0x37d]
0046B1FE  89 96 02 05 00 00         MOV dword ptr [ESI + 0x502],EDX
0046B204  6A 0E                     PUSH 0xe
0046B206  8D 96 EB 04 00 00         LEA EDX,[ESI + 0x4eb]
0046B20C  51                        PUSH ECX
0046B20D  52                        PUSH EDX
0046B20E  89 86 E7 04 00 00         MOV dword ptr [ESI + 0x4e7],EAX
0046B214  E8 27 31 2C 00            CALL 0x0072e340
0046B219  83 C4 0C                  ADD ESP,0xc
0046B21C  8B CE                     MOV ECX,ESI
0046B21E  C6 86 F9 04 00 00 00      MOV byte ptr [ESI + 0x4f9],0x0
0046B225  E8 89 8C F9 FF            CALL 0x00403eb3
0046B22A  0F BF 86 00 05 00 00      MOVSX EAX,word ptr [ESI + 0x500]
0046B231  0F BF 8E FE 04 00 00      MOVSX ECX,word ptr [ESI + 0x4fe]
0046B238  0F BF 96 FC 04 00 00      MOVSX EDX,word ptr [ESI + 0x4fc]
0046B23F  50                        PUSH EAX
0046B240  51                        PUSH ECX
0046B241  52                        PUSH EDX
0046B242  8B CE                     MOV ECX,ESI
0046B244  89 9E 08 05 00 00         MOV dword ptr [ESI + 0x508],EBX
0046B24A  89 9E 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EBX
0046B250  E8 16 9D F9 FF            CALL 0x00404f6b
0046B255  53                        PUSH EBX
0046B256  8B CE                     MOV ECX,ESI
0046B258  E8 D7 88 F9 FF            CALL 0x00403b34
0046B25D  83 F8 FF                  CMP EAX,-0x1
0046B260  0F 84 05 12 00 00         JZ 0x0046c46b
LAB_0046b266:
0046B266  8B 86 08 05 00 00         MOV EAX,dword ptr [ESI + 0x508]
0046B26C  3B C3                     CMP EAX,EBX
0046B26E  0F 85 6B 03 00 00         JNZ 0x0046b5df
0046B274  6A 02                     PUSH 0x2
0046B276  8B CE                     MOV ECX,ESI
0046B278  E8 B7 88 F9 FF            CALL 0x00403b34
0046B27D  40                        INC EAX
0046B27E  83 F8 04                  CMP EAX,0x4
0046B281  0F 87 3E 11 00 00         JA 0x0046c3c5
switchD_0046b287::switchD:
0046B287  FF 24 85 78 C4 46 00      JMP dword ptr [EAX*0x4 + 0x46c478]
switchD_0046b287::caseD_ffffffff:
0046B28E  68 1C A7 7A 00            PUSH 0x7aa71c
0046B293  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046B298  53                        PUSH EBX
0046B299  53                        PUSH EBX
0046B29A  68 95 23 00 00            PUSH 0x2395
0046B29F  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046B2A4  E8 27 22 24 00            CALL 0x006ad4d0
0046B2A9  83 C4 18                  ADD ESP,0x18
0046B2AC  85 C0                     TEST EAX,EAX
0046B2AE  74 01                     JZ 0x0046b2b1
0046B2B0  CC                        INT3
LAB_0046b2b1:
0046B2B1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0046B2B6  68 95 23 00 00            PUSH 0x2395
0046B2BB  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046B2C0  50                        PUSH EAX
0046B2C1  68 FF FF 00 00            PUSH 0xffff
0046B2C6  E8 75 AB 23 00            CALL 0x006a5e40
0046B2CB  B8 FF FF 00 00            MOV EAX,0xffff
0046B2D0  5F                        POP EDI
0046B2D1  5E                        POP ESI
0046B2D2  5B                        POP EBX
0046B2D3  8B E5                     MOV ESP,EBP
0046B2D5  5D                        POP EBP
0046B2D6  C2 04 00                  RET 0x4
switchD_0046b287::caseD_0:
0046B2D9  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
0046B2DD  66 3B 8E FC 04 00 00      CMP CX,word ptr [ESI + 0x4fc]
0046B2E4  75 4E                     JNZ 0x0046b334
0046B2E6  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
0046B2EA  66 3B 96 FE 04 00 00      CMP DX,word ptr [ESI + 0x4fe]
0046B2F1  75 41                     JNZ 0x0046b334
0046B2F3  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
0046B2F7  66 3B 86 00 05 00 00      CMP AX,word ptr [ESI + 0x500]
0046B2FE  75 34                     JNZ 0x0046b334
0046B300  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0046B303  8B 96 E3 04 00 00         MOV EDX,dword ptr [ESI + 0x4e3]
0046B309  0F BF 86 E1 04 00 00      MOVSX EAX,word ptr [ESI + 0x4e1]
0046B310  53                        PUSH EBX
0046B311  53                        PUSH EBX
0046B312  53                        PUSH EBX
0046B313  53                        PUSH EBX
0046B314  53                        PUSH EBX
0046B315  51                        PUSH ECX
0046B316  0F BF 8E DF 04 00 00      MOVSX ECX,word ptr [ESI + 0x4df]
0046B31D  52                        PUSH EDX
0046B31E  50                        PUSH EAX
0046B31F  0F BF 96 DD 04 00 00      MOVSX EDX,word ptr [ESI + 0x4dd]
0046B326  51                        PUSH ECX
0046B327  52                        PUSH EDX
0046B328  E8 FC 74 F9 FF            CALL 0x00402829
0046B32D  83 C4 28                  ADD ESP,0x28
0046B330  85 C0                     TEST EAX,EAX
0046B332  75 0B                     JNZ 0x0046b33f
LAB_0046b334:
0046B334  33 C0                     XOR EAX,EAX
0046B336  5F                        POP EDI
0046B337  5E                        POP ESI
0046B338  5B                        POP EBX
0046B339  8B E5                     MOV ESP,EBP
0046B33B  5D                        POP EBP
0046B33C  C2 04 00                  RET 0x4
LAB_0046b33f:
0046B33F  83 BE F7 06 00 00 19      CMP dword ptr [ESI + 0x6f7],0x19
0046B346  75 18                     JNZ 0x0046b360
0046B348  8B 86 02 05 00 00         MOV EAX,dword ptr [ESI + 0x502]
0046B34E  F7 D8                     NEG EAX
0046B350  1B C0                     SBB EAX,EAX
0046B352  83 C0 03                  ADD EAX,0x3
0046B355  89 86 08 05 00 00         MOV dword ptr [ESI + 0x508],EAX
0046B35B  E9 65 10 00 00            JMP 0x0046c3c5
LAB_0046b360:
0046B360  8B 8E 02 05 00 00         MOV ECX,dword ptr [ESI + 0x502]
0046B366  F7 D9                     NEG ECX
0046B368  1B C9                     SBB ECX,ECX
0046B36A  83 E1 FD                  AND ECX,0xfffffffd
0046B36D  83 C1 05                  ADD ECX,0x5
0046B370  89 8E 08 05 00 00         MOV dword ptr [ESI + 0x508],ECX
0046B376  E9 4A 10 00 00            JMP 0x0046c3c5
switchD_0046b287::caseD_3:
0046B37B  8B CE                     MOV ECX,ESI
0046B37D  E8 31 8B F9 FF            CALL 0x00403eb3
0046B382  0F BF 96 00 05 00 00      MOVSX EDX,word ptr [ESI + 0x500]
0046B389  0F BF 86 FE 04 00 00      MOVSX EAX,word ptr [ESI + 0x4fe]
0046B390  0F BF 8E FC 04 00 00      MOVSX ECX,word ptr [ESI + 0x4fc]
0046B397  52                        PUSH EDX
0046B398  50                        PUSH EAX
0046B399  51                        PUSH ECX
0046B39A  8B CE                     MOV ECX,ESI
0046B39C  E8 CA 9B F9 FF            CALL 0x00404f6b
0046B3A1  53                        PUSH EBX
0046B3A2  E9 17 10 00 00            JMP 0x0046c3be
switchD_0046b287::caseD_2:
0046B3A7  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0046B3AD  B9 0A 00 00 00            MOV ECX,0xa
0046B3B2  8B 9A E4 00 00 00         MOV EBX,dword ptr [EDX + 0xe4]
0046B3B8  33 D2                     XOR EDX,EDX
0046B3BA  8B C3                     MOV EAX,EBX
0046B3BC  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0046B3BF  F7 F1                     DIV ECX
0046B3C1  85 D2                     TEST EDX,EDX
0046B3C3  0F 85 FC 0F 00 00         JNZ 0x0046c3c5
0046B3C9  66 8B 86 DD 04 00 00      MOV AX,word ptr [ESI + 0x4dd]
0046B3D0  66 8B 96 DF 04 00 00      MOV DX,word ptr [ESI + 0x4df]
0046B3D7  66 8B 8E E1 04 00 00      MOV CX,word ptr [ESI + 0x4e1]
0046B3DE  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0046B3E5  66 85 C0                  TEST AX,AX
0046B3E8  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0046B3EB  7C 61                     JL 0x0046b44e
0046B3ED  66 3B C7                  CMP AX,DI
0046B3F0  7D 5C                     JGE 0x0046b44e
0046B3F2  66 85 D2                  TEST DX,DX
0046B3F5  7C 57                     JL 0x0046b44e
0046B3F7  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046B3FE  7D 4E                     JGE 0x0046b44e
0046B400  66 85 C9                  TEST CX,CX
0046B403  7C 49                     JL 0x0046b44e
0046B405  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046B40C  7D 40                     JGE 0x0046b44e
0046B40E  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0046B415  0F BF D2                  MOVSX EDX,DX
0046B418  0F AF FA                  IMUL EDI,EDX
0046B41B  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0046B422  0F BF D9                  MOVSX EBX,CX
0046B425  0F AF D3                  IMUL EDX,EBX
0046B428  03 FA                     ADD EDI,EDX
0046B42A  0F BF D0                  MOVSX EDX,AX
0046B42D  03 FA                     ADD EDI,EDX
0046B42F  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0046B435  0F BF 14 7A               MOVSX EDX,word ptr [EDX + EDI*0x2]
0046B439  85 D2                     TEST EDX,EDX
0046B43B  0F 84 84 0F 00 00         JZ 0x0046c3c5
0046B441  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0046B444  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0046B447  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
LAB_0046b44e:
0046B44E  66 85 C0                  TEST AX,AX
0046B451  7C 4B                     JL 0x0046b49e
0046B453  66 3B C7                  CMP AX,DI
0046B456  7D 46                     JGE 0x0046b49e
0046B458  66 85 D2                  TEST DX,DX
0046B45B  7C 41                     JL 0x0046b49e
0046B45D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0046B464  7D 38                     JGE 0x0046b49e
0046B466  66 85 C9                  TEST CX,CX
0046B469  7C 33                     JL 0x0046b49e
0046B46B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0046B472  7D 2A                     JGE 0x0046b49e
0046B474  0F BF D2                  MOVSX EDX,DX
0046B477  0F BF FF                  MOVSX EDI,DI
0046B47A  0F AF D7                  IMUL EDX,EDI
0046B47D  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0046B484  0F BF C9                  MOVSX ECX,CX
0046B487  0F AF F9                  IMUL EDI,ECX
0046B48A  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0046B490  03 D7                     ADD EDX,EDI
0046B492  0F BF C0                  MOVSX EAX,AX
0046B495  03 D0                     ADD EDX,EAX
0046B497  8B 04 D1                  MOV EAX,dword ptr [ECX + EDX*0x8]
0046B49A  85 C0                     TEST EAX,EAX
0046B49C  75 35                     JNZ 0x0046b4d3
LAB_0046b49e:
0046B49E  68 04 A7 7A 00            PUSH 0x7aa704
0046B4A3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046B4A8  6A 00                     PUSH 0x0
0046B4AA  6A 00                     PUSH 0x0
0046B4AC  68 C0 23 00 00            PUSH 0x23c0
0046B4B1  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046B4B6  E8 15 20 24 00            CALL 0x006ad4d0
0046B4BB  83 C4 18                  ADD ESP,0x18
0046B4BE  85 C0                     TEST EAX,EAX
0046B4C0  0F 84 A5 0F 00 00         JZ 0x0046c46b
0046B4C6  CC                        INT3
LAB_0046b4d3:
0046B4D3  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
0046B4D6  83 F9 08                  CMP ECX,0x8
0046B4D9  0F 83 F1 00 00 00         JNC 0x0046b5d0
0046B4DF  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0046B4E5  85 D2                     TEST EDX,EDX
0046B4E7  74 11                     JZ 0x0046b4fa
0046B4E9  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0046B4EC  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
0046B4F4  0F 83 D6 00 00 00         JNC 0x0046b5d0
LAB_0046b4fa:
0046B4FA  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0046B500  8A 40 24                  MOV AL,byte ptr [EAX + 0x24]
0046B503  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0046B506  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0046B509  84 D2                     TEST DL,DL
0046B50B  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
0046B50E  74 2D                     JZ 0x0046b53d
0046B510  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0046B513  25 FF 00 00 00            AND EAX,0xff
0046B518  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0046B51B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0046B51E  25 FF 00 00 00            AND EAX,0xff
0046B523  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0046B52A  33 C9                     XOR ECX,ECX
0046B52C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0046B52F  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0046B536  0F 95 C1                  SETNZ CL
0046B539  8B C1                     MOV EAX,ECX
0046B53B  EB 7A                     JMP 0x0046b5b7
LAB_0046b53d:
0046B53D  3A C1                     CMP AL,CL
0046B53F  74 6B                     JZ 0x0046b5ac
0046B541  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0046B544  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0046B547  25 FF 00 00 00            AND EAX,0xff
0046B54C  81 E1 FF 00 00 00         AND ECX,0xff
0046B552  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0046B559  84 D2                     TEST DL,DL
0046B55B  75 10                     JNZ 0x0046b56d
0046B55D  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0046B564  75 07                     JNZ 0x0046b56d
0046B566  B8 FE FF FF FF            MOV EAX,0xfffffffe
0046B56B  EB 41                     JMP 0x0046b5ae
LAB_0046b56d:
0046B56D  80 FA 01                  CMP DL,0x1
0046B570  75 0F                     JNZ 0x0046b581
0046B572  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0046B57A  75 05                     JNZ 0x0046b581
0046B57C  83 C8 FF                  OR EAX,0xffffffff
0046B57F  EB 2D                     JMP 0x0046b5ae
LAB_0046b581:
0046B581  84 D2                     TEST DL,DL
0046B583  75 11                     JNZ 0x0046b596
0046B585  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0046B58D  75 07                     JNZ 0x0046b596
0046B58F  B8 01 00 00 00            MOV EAX,0x1
0046B594  EB 18                     JMP 0x0046b5ae
LAB_0046b596:
0046B596  80 FA 01                  CMP DL,0x1
0046B599  75 11                     JNZ 0x0046b5ac
0046B59B  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0046B5A3  75 07                     JNZ 0x0046b5ac
0046B5A5  B8 02 00 00 00            MOV EAX,0x2
0046B5AA  EB 02                     JMP 0x0046b5ae
LAB_0046b5ac:
0046B5AC  33 C0                     XOR EAX,EAX
LAB_0046b5ae:
0046B5AE  33 D2                     XOR EDX,EDX
0046B5B0  85 C0                     TEST EAX,EAX
0046B5B2  0F 9C C2                  SETL DL
0046B5B5  8B C2                     MOV EAX,EDX
LAB_0046b5b7:
0046B5B7  85 C0                     TEST EAX,EAX
0046B5B9  74 15                     JZ 0x0046b5d0
0046B5BB  8D 45 08                  LEA EAX,[EBP + 0x8]
0046B5BE  8B CE                     MOV ECX,ESI
0046B5C0  50                        PUSH EAX
0046B5C1  6A 03                     PUSH 0x3
0046B5C3  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0046B5C6  E8 5B 6B F9 FF            CALL 0x00402126
0046B5CB  E9 F5 0D 00 00            JMP 0x0046c3c5
LAB_0046b5d0:
0046B5D0  C7 86 08 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x508],0x1
0046B5DA  E9 E6 0D 00 00            JMP 0x0046c3c5
LAB_0046b5df:
0046B5DF  BF 01 00 00 00            MOV EDI,0x1
0046B5E4  3B C7                     CMP EAX,EDI
0046B5E6  75 5E                     JNZ 0x0046b646
0046B5E8  8B 06                     MOV EAX,dword ptr [ESI]
0046B5EA  8B CE                     MOV ECX,ESI
0046B5EC  FF 50 20                  CALL dword ptr [EAX + 0x20]
0046B5EF  83 F8 FF                  CMP EAX,-0x1
0046B5F2  0F 84 73 0E 00 00         JZ 0x0046c46b
0046B5F8  3B C7                     CMP EAX,EDI
0046B5FA  0F 85 C5 0D 00 00         JNZ 0x0046c3c5
0046B600  8B CE                     MOV ECX,ESI
0046B602  C7 86 08 05 00 00 07 00 00 00  MOV dword ptr [ESI + 0x508],0x7
0046B60C  E8 9F 95 F9 FF            CALL 0x00404bb0
0046B611  0F BF 8E 00 05 00 00      MOVSX ECX,word ptr [ESI + 0x500]
0046B618  0F BF 96 FE 04 00 00      MOVSX EDX,word ptr [ESI + 0x4fe]
0046B61F  0F BF 86 FC 04 00 00      MOVSX EAX,word ptr [ESI + 0x4fc]
0046B626  51                        PUSH ECX
0046B627  52                        PUSH EDX
0046B628  50                        PUSH EAX
0046B629  8B CE                     MOV ECX,ESI
0046B62B  E8 3B 99 F9 FF            CALL 0x00404f6b
0046B630  53                        PUSH EBX
0046B631  8B CE                     MOV ECX,ESI
0046B633  E8 FC 84 F9 FF            CALL 0x00403b34
0046B638  83 F8 FF                  CMP EAX,-0x1
0046B63B  0F 84 2A 0E 00 00         JZ 0x0046c46b
0046B641  E9 7F 0D 00 00            JMP 0x0046c3c5
LAB_0046b646:
0046B646  83 F8 02                  CMP EAX,0x2
0046B649  0F 85 95 03 00 00         JNZ 0x0046b9e4
0046B64F  39 9E 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EBX
0046B655  75 59                     JNZ 0x0046b6b0
0046B657  66 8B 86 00 05 00 00      MOV AX,word ptr [ESI + 0x500]
0046B65E  8B 16                     MOV EDX,dword ptr [ESI]
0046B660  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046B665  83 C0 64                  ADD EAX,0x64
0046B668  50                        PUSH EAX
0046B669  66 8B 86 DF 04 00 00      MOV AX,word ptr [ESI + 0x4df]
0046B670  66 40                     INC AX
0046B672  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0046B675  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0046B678  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0046B67B  50                        PUSH EAX
0046B67C  66 8B 86 DD 04 00 00      MOV AX,word ptr [ESI + 0x4dd]
0046B683  66 40                     INC AX
0046B685  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0046B688  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0046B68B  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0046B68E  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046B692  50                        PUSH EAX
0046B693  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046B697  51                        PUSH ECX
0046B698  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046B69C  50                        PUSH EAX
0046B69D  51                        PUSH ECX
0046B69E  8B CE                     MOV ECX,ESI
0046B6A0  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046B6A3  66 89 86 06 05 00 00      MOV word ptr [ESI + 0x506],AX
0046B6AA  89 BE 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EDI
LAB_0046b6b0:
0046B6B0  39 BE 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EDI
0046B6B6  75 73                     JNZ 0x0046b72b
0046B6B8  66 8B 96 06 05 00 00      MOV DX,word ptr [ESI + 0x506]
0046B6BF  8B CE                     MOV ECX,ESI
0046B6C1  52                        PUSH EDX
0046B6C2  E8 EB 79 F9 FF            CALL 0x004030b2
0046B6C7  50                        PUSH EAX
0046B6C8  8B CE                     MOV ECX,ESI
0046B6CA  E8 2D 6C F9 FF            CALL 0x004022fc
0046B6CF  83 F8 FF                  CMP EAX,-0x1
0046B6D2  74 2A                     JZ 0x0046b6fe
0046B6D4  3B C3                     CMP EAX,EBX
0046B6D6  75 53                     JNZ 0x0046b72b
0046B6D8  C7 86 0C 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x50c],0x2
LAB_0046b6e2:
0046B6E2  8B 06                     MOV EAX,dword ptr [ESI]
0046B6E4  8B CE                     MOV ECX,ESI
0046B6E6  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046B6EC  F7 D8                     NEG EAX
0046B6EE  1B C0                     SBB EAX,EAX
0046B6F0  24 FD                     AND AL,0xfd
0046B6F2  83 C0 02                  ADD EAX,0x2
0046B6F5  5F                        POP EDI
0046B6F6  5E                        POP ESI
0046B6F7  5B                        POP EBX
0046B6F8  8B E5                     MOV ESP,EBP
0046B6FA  5D                        POP EBP
0046B6FB  C2 04 00                  RET 0x4
LAB_0046b6fe:
0046B6FE  68 E0 A6 7A 00            PUSH 0x7aa6e0
0046B703  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046B708  53                        PUSH EBX
0046B709  53                        PUSH EBX
0046B70A  68 F3 23 00 00            PUSH 0x23f3
0046B70F  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046B714  E8 B7 1D 24 00            CALL 0x006ad4d0
0046B719  83 C4 18                  ADD ESP,0x18
0046B71C  85 C0                     TEST EAX,EAX
0046B71E  74 01                     JZ 0x0046b721
0046B720  CC                        INT3
LAB_0046b721:
0046B721  68 F4 23 00 00            PUSH 0x23f4
0046B726  E9 F7 0C 00 00            JMP 0x0046c422
LAB_0046b72b:
0046B72B  8B 86 0C 05 00 00         MOV EAX,dword ptr [ESI + 0x50c]
0046B731  BF 03 00 00 00            MOV EDI,0x3
0046B736  83 F8 02                  CMP EAX,0x2
0046B739  75 56                     JNZ 0x0046b791
0046B73B  66 8B 86 00 05 00 00      MOV AX,word ptr [ESI + 0x500]
0046B742  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046B745  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046B74A  83 C0 64                  ADD EAX,0x64
0046B74D  52                        PUSH EDX
0046B74E  50                        PUSH EAX
0046B74F  66 8B 86 DF 04 00 00      MOV AX,word ptr [ESI + 0x4df]
0046B756  66 40                     INC AX
0046B758  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0046B75B  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0046B75E  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0046B761  66 8B 86 DD 04 00 00      MOV AX,word ptr [ESI + 0x4dd]
0046B768  66 40                     INC AX
0046B76A  52                        PUSH EDX
0046B76B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0046B76E  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0046B771  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0046B774  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046B778  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046B77C  52                        PUSH EDX
0046B77D  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046B781  50                        PUSH EAX
0046B782  51                        PUSH ECX
0046B783  52                        PUSH EDX
0046B784  8B CE                     MOV ECX,ESI
0046B786  E8 CA 6C F9 FF            CALL 0x00402455
0046B78B  89 BE 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EDI
LAB_0046b791:
0046B791  39 BE 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EDI
0046B797  0F 85 28 0C 00 00         JNZ 0x0046c3c5
0046B79D  8D 45 F0                  LEA EAX,[EBP + -0x10]
0046B7A0  8D 4D EC                  LEA ECX,[EBP + -0x14]
0046B7A3  50                        PUSH EAX
0046B7A4  51                        PUSH ECX
0046B7A5  8B CE                     MOV ECX,ESI
0046B7A7  E8 9B 70 F9 FF            CALL 0x00402847
0046B7AC  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046B7B2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0046B7B5  84 C9                     TEST CL,CL
0046B7B7  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0046B7BA  0F 86 A8 01 00 00         JBE 0x0046b968
0046B7C0  8D 96 B3 02 00 00         LEA EDX,[ESI + 0x2b3]
0046B7C6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0046B7C9  EB 02                     JMP 0x0046b7cd
LAB_0046b7cb:
0046B7CB  33 DB                     XOR EBX,EBX
LAB_0046b7cd:
0046B7CD  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0046B7D1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0046B7D4  50                        PUSH EAX
0046B7D5  8B 01                     MOV EAX,dword ptr [ECX]
0046B7D7  83 EC 08                  SUB ESP,0x8
0046B7DA  8B D4                     MOV EDX,ESP
0046B7DC  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0046B7E0  89 02                     MOV dword ptr [EDX],EAX
0046B7E2  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0046B7E6  8D 55 B8                  LEA EDX,[EBP + -0x48]
0046B7E9  52                        PUSH EDX
0046B7EA  8B CE                     MOV ECX,ESI
0046B7EC  E8 3B 7C F9 FF            CALL 0x0040342c
0046B7F1  8B 08                     MOV ECX,dword ptr [EAX]
0046B7F3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0046B7F6  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0046B7FA  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0046B7FF  83 F8 01                  CMP EAX,0x1
0046B802  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0046B805  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
0046B809  0F 85 96 00 00 00         JNZ 0x0046b8a5
0046B80F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046B815  6A 00                     PUSH 0x0
0046B817  6A 00                     PUSH 0x0
0046B819  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0046B81F  6A FF                     PUSH -0x1
0046B821  8B CF                     MOV ECX,EDI
0046B823  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046B826  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046B82C  6A 00                     PUSH 0x0
0046B82E  6A 00                     PUSH 0x0
0046B830  8D 99 39 30 00 00         LEA EBX,[ECX + 0x3039]
0046B836  6A 00                     PUSH 0x0
0046B838  8B D3                     MOV EDX,EBX
0046B83A  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0046B83D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046B843  6A 00                     PUSH 0x0
0046B845  6A 00                     PUSH 0x0
0046B847  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0046B84D  6A 00                     PUSH 0x0
0046B84F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046B852  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0046B855  D9 46 70                  FLD float ptr [ESI + 0x70]
0046B858  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0046B85E  E8 25 2A 2C 00            CALL 0x0072e288
0046B863  0F BF C8                  MOVSX ECX,AX
0046B866  8B C7                     MOV EAX,EDI
0046B868  33 D2                     XOR EDX,EDX
0046B86A  C1 E8 10                  SHR EAX,0x10
0046B86D  BF 07 00 00 00            MOV EDI,0x7
0046B872  F7 F7                     DIV EDI
0046B874  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0046B878  03 CA                     ADD ECX,EDX
0046B87A  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046B87E  03 CA                     ADD ECX,EDX
0046B880  33 D2                     XOR EDX,EDX
0046B882  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
0046B886  8B C3                     MOV EAX,EBX
0046B888  51                        PUSH ECX
0046B889  8B CF                     MOV ECX,EDI
0046B88B  C1 E8 10                  SHR EAX,0x10
0046B88E  F7 F1                     DIV ECX
0046B890  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046B894  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
0046B898  03 D0                     ADD EDX,EAX
0046B89A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0046B89D  2B D1                     SUB EDX,ECX
0046B89F  83 EA 03                  SUB EDX,0x3
0046B8A2  52                        PUSH EDX
0046B8A3  EB 72                     JMP 0x0046b917
LAB_0046b8a5:
0046B8A5  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046B8AB  05 39 30 00 00            ADD EAX,0x3039
0046B8B0  53                        PUSH EBX
0046B8B1  8B C8                     MOV ECX,EAX
0046B8B3  53                        PUSH EBX
0046B8B4  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046B8BA  81 C1 39 30 00 00         ADD ECX,0x3039
0046B8C0  6A FF                     PUSH -0x1
0046B8C2  8B D1                     MOV EDX,ECX
0046B8C4  53                        PUSH EBX
0046B8C5  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046B8CB  53                        PUSH EBX
0046B8CC  53                        PUSH EBX
0046B8CD  53                        PUSH EBX
0046B8CE  53                        PUSH EBX
0046B8CF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046B8D2  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
0046B8D8  53                        PUSH EBX
0046B8D9  33 D2                     XOR EDX,EDX
0046B8DB  C1 E8 10                  SHR EAX,0x10
0046B8DE  BB 07 00 00 00            MOV EBX,0x7
0046B8E3  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0046B8E6  F7 F3                     DIV EBX
0046B8E8  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046B8EB  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0046B8EF  03 D0                     ADD EDX,EAX
0046B8F1  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0046B8F5  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
0046B8F9  8B C1                     MOV EAX,ECX
0046B8FB  52                        PUSH EDX
0046B8FC  33 D2                     XOR EDX,EDX
0046B8FE  C1 E8 10                  SHR EAX,0x10
0046B901  8B CB                     MOV ECX,EBX
0046B903  F7 F1                     DIV ECX
0046B905  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046B909  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
0046B90D  03 D0                     ADD EDX,EAX
0046B90F  8B C7                     MOV EAX,EDI
0046B911  2B D1                     SUB EDX,ECX
0046B913  83 EA 03                  SUB EDX,0x3
0046B916  52                        PUSH EDX
LAB_0046b917:
0046B917  C1 E8 10                  SHR EAX,0x10
0046B91A  33 D2                     XOR EDX,EDX
0046B91C  B9 07 00 00 00            MOV ECX,0x7
0046B921  F7 F1                     DIV ECX
0046B923  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0046B927  0F BF 4D F8               MOVSX ECX,word ptr [EBP + -0x8]
0046B92B  03 D0                     ADD EDX,EAX
0046B92D  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
0046B931  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0046B937  52                        PUSH EDX
0046B938  6A 07                     PUSH 0x7
0046B93A  6A 02                     PUSH 0x2
0046B93C  6A 01                     PUSH 0x1
0046B93E  E8 F0 5A F9 FF            CALL 0x00401433
0046B943  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0046B946  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0046B949  33 C9                     XOR ECX,ECX
0046B94B  40                        INC EAX
0046B94C  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046B952  83 C7 06                  ADD EDI,0x6
0046B955  3B C1                     CMP EAX,ECX
0046B957  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0046B95A  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0046B95D  0F 8C 68 FE FF FF         JL 0x0046b7cb
0046B963  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0046B966  33 DB                     XOR EBX,EBX
LAB_0046b968:
0046B968  83 F8 FF                  CMP EAX,-0x1
0046B96B  74 2C                     JZ 0x0046b999
0046B96D  3B C3                     CMP EAX,EBX
0046B96F  0F 85 50 0A 00 00         JNZ 0x0046c3c5
0046B975  8B 96 F7 06 00 00         MOV EDX,dword ptr [ESI + 0x6f7]
0046B97B  89 9E 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EBX
0046B981  83 EA 19                  SUB EDX,0x19
0046B984  F7 DA                     NEG EDX
0046B986  1B D2                     SBB EDX,EDX
0046B988  83 E2 02                  AND EDX,0x2
0046B98B  83 C2 03                  ADD EDX,0x3
0046B98E  89 96 08 05 00 00         MOV dword ptr [ESI + 0x508],EDX
0046B994  E9 2C 0A 00 00            JMP 0x0046c3c5
LAB_0046b999:
0046B999  68 BC A6 7A 00            PUSH 0x7aa6bc
0046B99E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046B9A3  53                        PUSH EBX
0046B9A4  53                        PUSH EBX
0046B9A5  68 19 24 00 00            PUSH 0x2419
0046B9AA  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046B9AF  E8 1C 1B 24 00            CALL 0x006ad4d0
0046B9B4  83 C4 18                  ADD ESP,0x18
0046B9B7  85 C0                     TEST EAX,EAX
0046B9B9  74 01                     JZ 0x0046b9bc
0046B9BB  CC                        INT3
LAB_0046b9bc:
0046B9BC  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0046B9C1  68 1A 24 00 00            PUSH 0x241a
0046B9C6  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046B9CB  50                        PUSH EAX
0046B9CC  68 FF FF 00 00            PUSH 0xffff
0046B9D1  E8 6A A4 23 00            CALL 0x006a5e40
0046B9D6  B8 FF FF 00 00            MOV EAX,0xffff
0046B9DB  5F                        POP EDI
0046B9DC  5E                        POP ESI
0046B9DD  5B                        POP EBX
0046B9DE  8B E5                     MOV ESP,EBP
0046B9E0  5D                        POP EBP
0046B9E1  C2 04 00                  RET 0x4
LAB_0046b9e4:
0046B9E4  BB 03 00 00 00            MOV EBX,0x3
0046B9E9  3B C3                     CMP EAX,EBX
0046B9EB  0F 85 C2 00 00 00         JNZ 0x0046bab3
0046B9F1  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
0046B9F5  8B C1                     MOV EAX,ECX
0046B9F7  BF 5A 00 00 00            MOV EDI,0x5a
0046B9FC  99                        CDQ
0046B9FD  F7 FF                     IDIV EDI
0046B9FF  83 FA 2D                  CMP EDX,0x2d
0046BA02  7F 15                     JG 0x0046ba19
0046BA04  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0046BA09  F7 E9                     IMUL ECX
0046BA0B  03 D1                     ADD EDX,ECX
0046BA0D  C1 FA 06                  SAR EDX,0x6
0046BA10  8B C2                     MOV EAX,EDX
0046BA12  C1 E8 1F                  SHR EAX,0x1f
0046BA15  03 D0                     ADD EDX,EAX
0046BA17  EB 16                     JMP 0x0046ba2f
LAB_0046ba19:
0046BA19  83 C1 2D                  ADD ECX,0x2d
0046BA1C  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0046BA21  F7 E9                     IMUL ECX
0046BA23  03 D1                     ADD EDX,ECX
0046BA25  C1 FA 06                  SAR EDX,0x6
0046BA28  8B CA                     MOV ECX,EDX
0046BA2A  C1 E9 1F                  SHR ECX,0x1f
0046BA2D  03 D1                     ADD EDX,ECX
LAB_0046ba2f:
0046BA2F  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
0046BA32  B9 68 01 00 00            MOV ECX,0x168
0046BA37  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0046BA3A  D1 E0                     SHL EAX,0x1
0046BA3C  99                        CDQ
0046BA3D  F7 F9                     IDIV ECX
0046BA3F  8B CE                     MOV ECX,ESI
0046BA41  52                        PUSH EDX
0046BA42  E8 B5 68 F9 FF            CALL 0x004022fc
0046BA47  83 F8 FF                  CMP EAX,-0x1
0046BA4A  74 38                     JZ 0x0046ba84
0046BA4C  85 C0                     TEST EAX,EAX
0046BA4E  0F 85 71 09 00 00         JNZ 0x0046c3c5
0046BA54  8B 06                     MOV EAX,dword ptr [ESI]
0046BA56  8B CE                     MOV ECX,ESI
0046BA58  C7 86 08 05 00 00 04 00 00 00  MOV dword ptr [ESI + 0x508],0x4
0046BA62  C7 86 0C 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x50c],0x2
0046BA6C  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046BA72  F7 D8                     NEG EAX
0046BA74  1B C0                     SBB EAX,EAX
0046BA76  24 FD                     AND AL,0xfd
0046BA78  83 C0 02                  ADD EAX,0x2
0046BA7B  5F                        POP EDI
0046BA7C  5E                        POP ESI
0046BA7D  5B                        POP EBX
0046BA7E  8B E5                     MOV ESP,EBP
0046BA80  5D                        POP EBP
0046BA81  C2 04 00                  RET 0x4
LAB_0046ba84:
0046BA84  68 98 A6 7A 00            PUSH 0x7aa698
0046BA89  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046BA8E  6A 00                     PUSH 0x0
0046BA90  6A 00                     PUSH 0x0
0046BA92  68 34 24 00 00            PUSH 0x2434
0046BA97  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046BA9C  E8 2F 1A 24 00            CALL 0x006ad4d0
0046BAA1  83 C4 18                  ADD ESP,0x18
0046BAA4  85 C0                     TEST EAX,EAX
0046BAA6  74 01                     JZ 0x0046baa9
0046BAA8  CC                        INT3
LAB_0046baa9:
0046BAA9  68 35 24 00 00            PUSH 0x2435
0046BAAE  E9 6F 09 00 00            JMP 0x0046c422
LAB_0046bab3:
0046BAB3  83 F8 04                  CMP EAX,0x4
0046BAB6  0F 85 7F 02 00 00         JNZ 0x0046bd3b
0046BABC  83 BE 0C 05 00 00 02      CMP dword ptr [ESI + 0x50c],0x2
0046BAC3  75 29                     JNZ 0x0046baee
0046BAC5  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046BAC9  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046BACC  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046BAD0  66 8B 7E 41               MOV DI,word ptr [ESI + 0x41]
0046BAD4  52                        PUSH EDX
0046BAD5  8D 90 38 FF FF FF         LEA EDX,[EAX + 0xffffff38]
0046BADB  52                        PUSH EDX
0046BADC  51                        PUSH ECX
0046BADD  57                        PUSH EDI
0046BADE  50                        PUSH EAX
0046BADF  51                        PUSH ECX
0046BAE0  57                        PUSH EDI
0046BAE1  8B CE                     MOV ECX,ESI
0046BAE3  E8 6D 69 F9 FF            CALL 0x00402455
0046BAE8  89 9E 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EBX
LAB_0046baee:
0046BAEE  39 9E 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EBX
0046BAF4  0F 85 E8 FB FF FF         JNZ 0x0046b6e2
0046BAFA  8D 45 EC                  LEA EAX,[EBP + -0x14]
0046BAFD  8D 4D F0                  LEA ECX,[EBP + -0x10]
0046BB00  50                        PUSH EAX
0046BB01  51                        PUSH ECX
0046BB02  8B CE                     MOV ECX,ESI
0046BB04  E8 3E 6D F9 FF            CALL 0x00402847
0046BB09  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046BB0F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0046BB12  84 C9                     TEST CL,CL
0046BB14  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0046BB1B  0F 86 AA 01 00 00         JBE 0x0046bccb
0046BB21  8D 96 B3 02 00 00         LEA EDX,[ESI + 0x2b3]
0046BB27  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_0046bb2a:
0046BB2A  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0046BB2E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0046BB31  50                        PUSH EAX
0046BB32  8B 01                     MOV EAX,dword ptr [ECX]
0046BB34  83 EC 08                  SUB ESP,0x8
0046BB37  8B D4                     MOV EDX,ESP
0046BB39  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0046BB3D  89 02                     MOV dword ptr [EDX],EAX
0046BB3F  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0046BB43  8D 55 B8                  LEA EDX,[EBP + -0x48]
0046BB46  52                        PUSH EDX
0046BB47  8B CE                     MOV ECX,ESI
0046BB49  E8 DE 78 F9 FF            CALL 0x0040342c
0046BB4E  8B 08                     MOV ECX,dword ptr [EAX]
0046BB50  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0046BB53  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0046BB57  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0046BB5C  83 F8 01                  CMP EAX,0x1
0046BB5F  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0046BB62  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
0046BB66  0F 85 96 00 00 00         JNZ 0x0046bc02
0046BB6C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046BB72  6A 00                     PUSH 0x0
0046BB74  6A 00                     PUSH 0x0
0046BB76  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0046BB7C  6A FF                     PUSH -0x1
0046BB7E  8B CF                     MOV ECX,EDI
0046BB80  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046BB83  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046BB89  6A 00                     PUSH 0x0
0046BB8B  6A 00                     PUSH 0x0
0046BB8D  8D 99 39 30 00 00         LEA EBX,[ECX + 0x3039]
0046BB93  6A 00                     PUSH 0x0
0046BB95  8B D3                     MOV EDX,EBX
0046BB97  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0046BB9A  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046BBA0  6A 00                     PUSH 0x0
0046BBA2  6A 00                     PUSH 0x0
0046BBA4  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0046BBAA  6A 00                     PUSH 0x0
0046BBAC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046BBAF  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0046BBB2  D9 46 70                  FLD float ptr [ESI + 0x70]
0046BBB5  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0046BBBB  E8 C8 26 2C 00            CALL 0x0072e288
0046BBC0  0F BF C8                  MOVSX ECX,AX
0046BBC3  8B C7                     MOV EAX,EDI
0046BBC5  33 D2                     XOR EDX,EDX
0046BBC7  C1 E8 10                  SHR EAX,0x10
0046BBCA  BF 07 00 00 00            MOV EDI,0x7
0046BBCF  F7 F7                     DIV EDI
0046BBD1  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0046BBD5  03 CA                     ADD ECX,EDX
0046BBD7  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046BBDB  03 CA                     ADD ECX,EDX
0046BBDD  33 D2                     XOR EDX,EDX
0046BBDF  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
0046BBE3  8B C3                     MOV EAX,EBX
0046BBE5  51                        PUSH ECX
0046BBE6  8B CF                     MOV ECX,EDI
0046BBE8  C1 E8 10                  SHR EAX,0x10
0046BBEB  F7 F1                     DIV ECX
0046BBED  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046BBF1  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
0046BBF5  03 D0                     ADD EDX,EAX
0046BBF7  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0046BBFA  2B D1                     SUB EDX,ECX
0046BBFC  83 EA 03                  SUB EDX,0x3
0046BBFF  52                        PUSH EDX
0046BC00  EB 7A                     JMP 0x0046bc7c
LAB_0046bc02:
0046BC02  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046BC08  05 39 30 00 00            ADD EAX,0x3039
0046BC0D  BB 07 00 00 00            MOV EBX,0x7
0046BC12  8B C8                     MOV ECX,EAX
0046BC14  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046BC17  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046BC1D  81 C1 39 30 00 00         ADD ECX,0x3039
0046BC23  6A 00                     PUSH 0x0
0046BC25  8B D1                     MOV EDX,ECX
0046BC27  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0046BC2A  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046BC30  C1 E8 10                  SHR EAX,0x10
0046BC33  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
0046BC39  33 D2                     XOR EDX,EDX
0046BC3B  F7 F3                     DIV EBX
0046BC3D  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046BC40  6A 00                     PUSH 0x0
0046BC42  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0046BC46  6A FF                     PUSH -0x1
0046BC48  6A 00                     PUSH 0x0
0046BC4A  6A 00                     PUSH 0x0
0046BC4C  6A 00                     PUSH 0x0
0046BC4E  6A 00                     PUSH 0x0
0046BC50  6A 00                     PUSH 0x0
0046BC52  6A 00                     PUSH 0x0
0046BC54  03 D0                     ADD EDX,EAX
0046BC56  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0046BC5A  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
0046BC5E  8B C1                     MOV EAX,ECX
0046BC60  52                        PUSH EDX
0046BC61  33 D2                     XOR EDX,EDX
0046BC63  C1 E8 10                  SHR EAX,0x10
0046BC66  8B CB                     MOV ECX,EBX
0046BC68  F7 F1                     DIV ECX
0046BC6A  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046BC6E  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
0046BC72  03 D0                     ADD EDX,EAX
0046BC74  8B C7                     MOV EAX,EDI
0046BC76  2B D1                     SUB EDX,ECX
0046BC78  83 EA 03                  SUB EDX,0x3
0046BC7B  52                        PUSH EDX
LAB_0046bc7c:
0046BC7C  C1 E8 10                  SHR EAX,0x10
0046BC7F  33 D2                     XOR EDX,EDX
0046BC81  B9 07 00 00 00            MOV ECX,0x7
0046BC86  F7 F1                     DIV ECX
0046BC88  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0046BC8C  0F BF 4D F8               MOVSX ECX,word ptr [EBP + -0x8]
0046BC90  03 D0                     ADD EDX,EAX
0046BC92  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
0046BC96  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0046BC9C  52                        PUSH EDX
0046BC9D  6A 07                     PUSH 0x7
0046BC9F  6A 02                     PUSH 0x2
0046BCA1  6A 01                     PUSH 0x1
0046BCA3  E8 8B 57 F9 FF            CALL 0x00401433
0046BCA8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0046BCAB  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0046BCAE  33 C9                     XOR ECX,ECX
0046BCB0  40                        INC EAX
0046BCB1  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046BCB7  83 C7 06                  ADD EDI,0x6
0046BCBA  3B C1                     CMP EAX,ECX
0046BCBC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0046BCBF  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0046BCC2  0F 8C 62 FE FF FF         JL 0x0046bb2a
0046BCC8  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_0046bccb:
0046BCCB  83 F8 FF                  CMP EAX,-0x1
0046BCCE  74 1D                     JZ 0x0046bced
0046BCD0  85 C0                     TEST EAX,EAX
0046BCD2  0F 85 0A FA FF FF         JNZ 0x0046b6e2
0046BCD8  C7 86 08 05 00 00 05 00 00 00  MOV dword ptr [ESI + 0x508],0x5
0046BCE2  89 86 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EAX
0046BCE8  E9 F5 F9 FF FF            JMP 0x0046b6e2
LAB_0046bced:
0046BCED  68 74 A6 7A 00            PUSH 0x7aa674
0046BCF2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046BCF7  6A 00                     PUSH 0x0
0046BCF9  6A 00                     PUSH 0x0
0046BCFB  68 5F 24 00 00            PUSH 0x245f
0046BD00  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046BD05  E8 C6 17 24 00            CALL 0x006ad4d0
0046BD0A  83 C4 18                  ADD ESP,0x18
0046BD0D  85 C0                     TEST EAX,EAX
0046BD0F  74 01                     JZ 0x0046bd12
0046BD11  CC                        INT3
LAB_0046bd12:
0046BD12  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0046BD18  68 60 24 00 00            PUSH 0x2460
0046BD1D  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046BD22  52                        PUSH EDX
0046BD23  68 FF FF 00 00            PUSH 0xffff
0046BD28  E8 13 A1 23 00            CALL 0x006a5e40
0046BD2D  B8 FF FF 00 00            MOV EAX,0xffff
0046BD32  5F                        POP EDI
0046BD33  5E                        POP ESI
0046BD34  5B                        POP EBX
0046BD35  8B E5                     MOV ESP,EBP
0046BD37  5D                        POP EBP
0046BD38  C2 04 00                  RET 0x4
LAB_0046bd3b:
0046BD3B  83 F8 05                  CMP EAX,0x5
0046BD3E  0F 85 6D 02 00 00         JNZ 0x0046bfb1
0046BD44  B9 1B 00 00 00            MOV ECX,0x1b
0046BD49  33 C0                     XOR EAX,EAX
0046BD4B  8D BD 2C FF FF FF         LEA EDI,[EBP + 0xffffff2c]
0046BD51  6A 0E                     PUSH 0xe
0046BD53  F3 AB                     STOSD.REP ES:EDI
0046BD55  8B 8E 02 05 00 00         MOV ECX,dword ptr [ESI + 0x502]
0046BD5B  66 AB                     STOSW ES:EDI
0046BD5D  0F BF 96 DD 04 00 00      MOVSX EDX,word ptr [ESI + 0x4dd]
0046BD64  AA                        STOSB ES:EDI
0046BD65  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046BD68  89 8D 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ECX
0046BD6E  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
0046BD74  8B 8E E3 04 00 00         MOV ECX,dword ptr [ESI + 0x4e3]
0046BD7A  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
0046BD80  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
0046BD86  0F BF 86 DF 04 00 00      MOVSX EAX,word ptr [ESI + 0x4df]
0046BD8D  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
0046BD93  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0046BD99  0F BF 8E E1 04 00 00      MOVSX ECX,word ptr [ESI + 0x4e1]
0046BDA0  8B 86 E7 04 00 00         MOV EAX,dword ptr [ESI + 0x4e7]
0046BDA6  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0046BDAC  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
0046BDB0  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
0046BDB6  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
0046BDBC  33 D2                     XOR EDX,EDX
0046BDBE  B8 64 00 00 00            MOV EAX,0x64
0046BDC3  66 8B 96 FA 04 00 00      MOV DX,word ptr [ESI + 0x4fa]
0046BDCA  89 85 7F FF FF FF         MOV dword ptr [EBP + 0xffffff7f],EAX
0046BDD0  89 45 83                  MOV dword ptr [EBP + -0x7d],EAX
0046BDD3  89 4D 97                  MOV dword ptr [EBP + -0x69],ECX
0046BDD6  8D 86 EB 04 00 00         LEA EAX,[ESI + 0x4eb]
0046BDDC  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
0046BDE2  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0046BDE5  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
0046BDEB  BF 01 00 00 00            MOV EDI,0x1
0046BDF0  50                        PUSH EAX
0046BDF1  51                        PUSH ECX
0046BDF2  89 BD 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDI
0046BDF8  89 BD 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EDI
0046BDFE  C7 85 2C FF FF FF E9 03 00 00  MOV dword ptr [EBP + 0xffffff2c],0x3e9
0046BE08  89 BD 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDI
0046BE0E  89 BD 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EDI
0046BE14  C7 85 40 FF FF FF E8 03 00 00  MOV dword ptr [EBP + 0xffffff40],0x3e8
0046BE1E  89 95 7B FF FF FF         MOV dword ptr [EBP + 0xffffff7b],EDX
0046BE24  E8 17 25 2C 00            CALL 0x0072e340
0046BE29  8B 86 02 05 00 00         MOV EAX,dword ptr [ESI + 0x502]
0046BE2F  83 C4 0C                  ADD ESP,0xc
0046BE32  33 DB                     XOR EBX,EBX
0046BE34  C6 85 7A FF FF FF 00      MOV byte ptr [EBP + 0xffffff7a],0x0
0046BE3B  53                        PUSH EBX
0046BE3C  53                        PUSH EBX
0046BE3D  53                        PUSH EBX
0046BE3E  3B C3                     CMP EAX,EBX
0046BE40  53                        PUSH EBX
0046BE41  53                        PUSH EBX
0046BE42  0F 85 8A 00 00 00         JNZ 0x0046bed2
0046BE48  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0046BE4B  8B 86 E3 04 00 00         MOV EAX,dword ptr [ESI + 0x4e3]
0046BE51  0F BF 8E E1 04 00 00      MOVSX ECX,word ptr [ESI + 0x4e1]
0046BE58  52                        PUSH EDX
0046BE59  50                        PUSH EAX
0046BE5A  0F BF 96 DF 04 00 00      MOVSX EDX,word ptr [ESI + 0x4df]
0046BE61  0F BF 86 DD 04 00 00      MOVSX EAX,word ptr [ESI + 0x4dd]
0046BE68  51                        PUSH ECX
0046BE69  52                        PUSH EDX
0046BE6A  50                        PUSH EAX
0046BE6B  E8 B9 69 F9 FF            CALL 0x00402829
0046BE70  83 C4 28                  ADD ESP,0x28
0046BE73  85 C0                     TEST EAX,EAX
0046BE75  0F 84 D9 00 00 00         JZ 0x0046bf54
0046BE7B  8D 8D 2C FF FF FF         LEA ECX,[EBP + 0xffffff2c]
0046BE81  53                        PUSH EBX
0046BE82  51                        PUSH ECX
0046BE83  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0046BE86  53                        PUSH EBX
0046BE87  53                        PUSH EBX
0046BE88  68 E9 03 00 00            PUSH 0x3e9
0046BE8D  E8 30 5D F9 FF            CALL 0x00401bc2
0046BE92  83 BE F7 06 00 00 19      CMP dword ptr [ESI + 0x6f7],0x19
0046BE99  0F 85 B5 00 00 00         JNZ 0x0046bf54
0046BE9F  8B 06                     MOV EAX,dword ptr [ESI]
0046BEA1  8D 4D C0                  LEA ECX,[EBP + -0x40]
0046BEA4  8D 55 9C                  LEA EDX,[EBP + -0x64]
0046BEA7  51                        PUSH ECX
0046BEA8  8B CE                     MOV ECX,ESI
0046BEAA  C7 45 9C 10 27 00 00      MOV dword ptr [EBP + -0x64],0x2710
0046BEB1  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
0046BEB4  C7 45 A4 FE 00 00 00      MOV dword ptr [EBP + -0x5c],0xfe
0046BEBB  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
0046BEBE  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
0046BEC1  C7 45 D0 28 01 00 00      MOV dword ptr [EBP + -0x30],0x128
0046BEC8  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0046BECB  FF 10                     CALL dword ptr [EAX]
0046BECD  E9 F3 04 00 00            JMP 0x0046c3c5
LAB_0046bed2:
0046BED2  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0046BED5  8B 8E E3 04 00 00         MOV ECX,dword ptr [ESI + 0x4e3]
0046BEDB  0F BF 96 E1 04 00 00      MOVSX EDX,word ptr [ESI + 0x4e1]
0046BEE2  50                        PUSH EAX
0046BEE3  51                        PUSH ECX
0046BEE4  0F BF 86 DF 04 00 00      MOVSX EAX,word ptr [ESI + 0x4df]
0046BEEB  0F BF 8E DD 04 00 00      MOVSX ECX,word ptr [ESI + 0x4dd]
0046BEF2  52                        PUSH EDX
0046BEF3  50                        PUSH EAX
0046BEF4  51                        PUSH ECX
0046BEF5  E8 2F 69 F9 FF            CALL 0x00402829
0046BEFA  83 C4 28                  ADD ESP,0x28
0046BEFD  85 C0                     TEST EAX,EAX
0046BEFF  74 53                     JZ 0x0046bf54
0046BF01  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0046BF04  8D 95 2C FF FF FF         LEA EDX,[EBP + 0xffffff2c]
0046BF0A  53                        PUSH EBX
0046BF0B  52                        PUSH EDX
0046BF0C  53                        PUSH EBX
0046BF0D  53                        PUSH EBX
0046BF0E  68 E9 03 00 00            PUSH 0x3e9
0046BF13  E8 AA 5C F9 FF            CALL 0x00401bc2
0046BF18  83 BE F7 06 00 00 19      CMP dword ptr [ESI + 0x6f7],0x19
0046BF1F  75 33                     JNZ 0x0046bf54
0046BF21  8B 16                     MOV EDX,dword ptr [ESI]
0046BF23  8D 45 9C                  LEA EAX,[EBP + -0x64]
0046BF26  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0046BF29  8D 45 C0                  LEA EAX,[EBP + -0x40]
0046BF2C  50                        PUSH EAX
0046BF2D  8B CE                     MOV ECX,ESI
0046BF2F  C7 45 9C 10 27 00 00      MOV dword ptr [EBP + -0x64],0x2710
0046BF36  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
0046BF39  C7 45 A4 FE 00 00 00      MOV dword ptr [EBP + -0x5c],0xfe
0046BF40  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
0046BF43  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
0046BF46  C7 45 D0 28 01 00 00      MOV dword ptr [EBP + -0x30],0x128
0046BF4D  FF 12                     CALL dword ptr [EDX]
0046BF4F  E9 71 04 00 00            JMP 0x0046c3c5
LAB_0046bf54:
0046BF54  39 BE 02 05 00 00         CMP dword ptr [ESI + 0x502],EDI
0046BF5A  75 0F                     JNZ 0x0046bf6b
0046BF5C  C7 86 08 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x508],0x6
0046BF66  E9 E3 00 00 00            JMP 0x0046c04e
LAB_0046bf6b:
0046BF6B  8B CE                     MOV ECX,ESI
0046BF6D  C7 86 08 05 00 00 07 00 00 00  MOV dword ptr [ESI + 0x508],0x7
0046BF77  E8 34 8C F9 FF            CALL 0x00404bb0
0046BF7C  0F BF 86 00 05 00 00      MOVSX EAX,word ptr [ESI + 0x500]
0046BF83  0F BF 8E FE 04 00 00      MOVSX ECX,word ptr [ESI + 0x4fe]
0046BF8A  0F BF 96 FC 04 00 00      MOVSX EDX,word ptr [ESI + 0x4fc]
0046BF91  50                        PUSH EAX
0046BF92  51                        PUSH ECX
0046BF93  52                        PUSH EDX
0046BF94  8B CE                     MOV ECX,ESI
0046BF96  E8 D0 8F F9 FF            CALL 0x00404f6b
0046BF9B  53                        PUSH EBX
0046BF9C  8B CE                     MOV ECX,ESI
0046BF9E  E8 91 7B F9 FF            CALL 0x00403b34
0046BFA3  83 F8 FF                  CMP EAX,-0x1
0046BFA6  0F 84 BF 04 00 00         JZ 0x0046c46b
0046BFAC  E9 9D 00 00 00            JMP 0x0046c04e
LAB_0046bfb1:
0046BFB1  83 F8 06                  CMP EAX,0x6
0046BFB4  0F 85 BD 03 00 00         JNZ 0x0046c377
0046BFBA  8B 86 0C 05 00 00         MOV EAX,dword ptr [ESI + 0x50c]
0046BFC0  85 C0                     TEST EAX,EAX
0046BFC2  75 57                     JNZ 0x0046c01b
0046BFC4  66 8B 86 00 05 00 00      MOV AX,word ptr [ESI + 0x500]
0046BFCB  66 8B 8E FE 04 00 00      MOV CX,word ptr [ESI + 0x4fe]
0046BFD2  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046BFD7  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046BFDC  83 C0 64                  ADD EAX,0x64
0046BFDF  8B 16                     MOV EDX,dword ptr [ESI]
0046BFE1  50                        PUSH EAX
0046BFE2  66 8B 86 FC 04 00 00      MOV AX,word ptr [ESI + 0x4fc]
0046BFE9  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046BFEE  83 C1 64                  ADD ECX,0x64
0046BFF1  83 C0 64                  ADD EAX,0x64
0046BFF4  51                        PUSH ECX
0046BFF5  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046BFF9  50                        PUSH EAX
0046BFFA  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046BFFE  51                        PUSH ECX
0046BFFF  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046C003  50                        PUSH EAX
0046C004  51                        PUSH ECX
0046C005  8B CE                     MOV ECX,ESI
0046C007  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046C00A  66 89 86 06 05 00 00      MOV word ptr [ESI + 0x506],AX
0046C011  C7 86 0C 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x50c],0x1
LAB_0046c01b:
0046C01B  83 BE 0C 05 00 00 01      CMP dword ptr [ESI + 0x50c],0x1
0046C022  75 75                     JNZ 0x0046c099
0046C024  66 8B 96 06 05 00 00      MOV DX,word ptr [ESI + 0x506]
0046C02B  8B CE                     MOV ECX,ESI
0046C02D  52                        PUSH EDX
0046C02E  E8 7F 70 F9 FF            CALL 0x004030b2
0046C033  50                        PUSH EAX
0046C034  8B CE                     MOV ECX,ESI
0046C036  E8 C1 62 F9 FF            CALL 0x004022fc
0046C03B  83 F8 FF                  CMP EAX,-0x1
0046C03E  74 2A                     JZ 0x0046c06a
0046C040  85 C0                     TEST EAX,EAX
0046C042  75 55                     JNZ 0x0046c099
0046C044  C7 86 0C 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x50c],0x2
STBoatC::Build::cf_common_exit_0046C04E:
0046C04E  8B 06                     MOV EAX,dword ptr [ESI]
0046C050  8B CE                     MOV ECX,ESI
0046C052  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046C058  F7 D8                     NEG EAX
0046C05A  1B C0                     SBB EAX,EAX
0046C05C  24 FD                     AND AL,0xfd
0046C05E  83 C0 02                  ADD EAX,0x2
0046C061  5F                        POP EDI
0046C062  5E                        POP ESI
0046C063  5B                        POP EBX
0046C064  8B E5                     MOV ESP,EBP
0046C066  5D                        POP EBP
0046C067  C2 04 00                  RET 0x4
LAB_0046c06a:
0046C06A  68 50 A6 7A 00            PUSH 0x7aa650
0046C06F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046C074  6A 00                     PUSH 0x0
0046C076  6A 00                     PUSH 0x0
0046C078  68 C1 24 00 00            PUSH 0x24c1
0046C07D  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046C082  E8 49 14 24 00            CALL 0x006ad4d0
0046C087  83 C4 18                  ADD ESP,0x18
0046C08A  85 C0                     TEST EAX,EAX
0046C08C  74 01                     JZ 0x0046c08f
0046C08E  CC                        INT3
LAB_0046c08f:
0046C08F  68 C2 24 00 00            PUSH 0x24c2
0046C094  E9 89 03 00 00            JMP 0x0046c422
LAB_0046c099:
0046C099  83 BE 0C 05 00 00 02      CMP dword ptr [ESI + 0x50c],0x2
0046C0A0  75 50                     JNZ 0x0046c0f2
0046C0A2  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046C0A5  66 8B 86 00 05 00 00      MOV AX,word ptr [ESI + 0x500]
0046C0AC  66 8B 8E FE 04 00 00      MOV CX,word ptr [ESI + 0x4fe]
0046C0B3  52                        PUSH EDX
0046C0B4  66 8B 96 FC 04 00 00      MOV DX,word ptr [ESI + 0x4fc]
0046C0BB  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046C0C0  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046C0C5  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046C0CA  83 C0 64                  ADD EAX,0x64
0046C0CD  83 C1 64                  ADD ECX,0x64
0046C0D0  50                        PUSH EAX
0046C0D1  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046C0D5  83 C2 64                  ADD EDX,0x64
0046C0D8  51                        PUSH ECX
0046C0D9  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046C0DD  52                        PUSH EDX
0046C0DE  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046C0E2  50                        PUSH EAX
0046C0E3  51                        PUSH ECX
0046C0E4  52                        PUSH EDX
0046C0E5  8B CE                     MOV ECX,ESI
0046C0E7  E8 69 63 F9 FF            CALL 0x00402455
0046C0EC  89 9E 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EBX
LAB_0046c0f2:
0046C0F2  39 9E 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EBX
0046C0F8  0F 85 50 FF FF FF         JNZ 0x0046c04e
0046C0FE  8D 45 EC                  LEA EAX,[EBP + -0x14]
0046C101  8D 4D F0                  LEA ECX,[EBP + -0x10]
0046C104  50                        PUSH EAX
0046C105  51                        PUSH ECX
0046C106  8B CE                     MOV ECX,ESI
0046C108  E8 3A 67 F9 FF            CALL 0x00402847
0046C10D  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046C113  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0046C116  84 C9                     TEST CL,CL
0046C118  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0046C11F  0F 86 AA 01 00 00         JBE 0x0046c2cf
0046C125  8D 96 B3 02 00 00         LEA EDX,[ESI + 0x2b3]
0046C12B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_0046c12e:
0046C12E  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0046C132  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0046C135  50                        PUSH EAX
0046C136  8B 01                     MOV EAX,dword ptr [ECX]
0046C138  83 EC 08                  SUB ESP,0x8
0046C13B  8B D4                     MOV EDX,ESP
0046C13D  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0046C141  89 02                     MOV dword ptr [EDX],EAX
0046C143  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0046C147  8D 55 B8                  LEA EDX,[EBP + -0x48]
0046C14A  52                        PUSH EDX
0046C14B  8B CE                     MOV ECX,ESI
0046C14D  E8 DA 72 F9 FF            CALL 0x0040342c
0046C152  8B 08                     MOV ECX,dword ptr [EAX]
0046C154  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0046C157  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0046C15B  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0046C160  83 F8 01                  CMP EAX,0x1
0046C163  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0046C166  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
0046C16A  0F 85 96 00 00 00         JNZ 0x0046c206
0046C170  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046C176  6A 00                     PUSH 0x0
0046C178  6A 00                     PUSH 0x0
0046C17A  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0046C180  6A FF                     PUSH -0x1
0046C182  8B CF                     MOV ECX,EDI
0046C184  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046C187  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046C18D  6A 00                     PUSH 0x0
0046C18F  6A 00                     PUSH 0x0
0046C191  8D 99 39 30 00 00         LEA EBX,[ECX + 0x3039]
0046C197  6A 00                     PUSH 0x0
0046C199  8B D3                     MOV EDX,EBX
0046C19B  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0046C19E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046C1A4  6A 00                     PUSH 0x0
0046C1A6  6A 00                     PUSH 0x0
0046C1A8  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0046C1AE  6A 00                     PUSH 0x0
0046C1B0  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046C1B3  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0046C1B6  D9 46 70                  FLD float ptr [ESI + 0x70]
0046C1B9  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0046C1BF  E8 C4 20 2C 00            CALL 0x0072e288
0046C1C4  0F BF C8                  MOVSX ECX,AX
0046C1C7  8B C7                     MOV EAX,EDI
0046C1C9  33 D2                     XOR EDX,EDX
0046C1CB  C1 E8 10                  SHR EAX,0x10
0046C1CE  BF 07 00 00 00            MOV EDI,0x7
0046C1D3  F7 F7                     DIV EDI
0046C1D5  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0046C1D9  03 CA                     ADD ECX,EDX
0046C1DB  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0046C1DF  03 CA                     ADD ECX,EDX
0046C1E1  33 D2                     XOR EDX,EDX
0046C1E3  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
0046C1E7  8B C3                     MOV EAX,EBX
0046C1E9  51                        PUSH ECX
0046C1EA  8B CF                     MOV ECX,EDI
0046C1EC  C1 E8 10                  SHR EAX,0x10
0046C1EF  F7 F1                     DIV ECX
0046C1F1  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046C1F5  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
0046C1F9  03 D0                     ADD EDX,EAX
0046C1FB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0046C1FE  2B D1                     SUB EDX,ECX
0046C200  83 EA 03                  SUB EDX,0x3
0046C203  52                        PUSH EDX
0046C204  EB 7A                     JMP 0x0046c280
LAB_0046c206:
0046C206  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0046C20C  05 39 30 00 00            ADD EAX,0x3039
0046C211  BB 07 00 00 00            MOV EBX,0x7
0046C216  8B C8                     MOV ECX,EAX
0046C218  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046C21B  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0046C221  81 C1 39 30 00 00         ADD ECX,0x3039
0046C227  6A 00                     PUSH 0x0
0046C229  8B D1                     MOV EDX,ECX
0046C22B  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0046C22E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0046C234  C1 E8 10                  SHR EAX,0x10
0046C237  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
0046C23D  33 D2                     XOR EDX,EDX
0046C23F  F7 F3                     DIV EBX
0046C241  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
0046C244  6A 00                     PUSH 0x0
0046C246  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0046C24A  6A FF                     PUSH -0x1
0046C24C  6A 00                     PUSH 0x0
0046C24E  6A 00                     PUSH 0x0
0046C250  6A 00                     PUSH 0x0
0046C252  6A 00                     PUSH 0x0
0046C254  6A 00                     PUSH 0x0
0046C256  6A 00                     PUSH 0x0
0046C258  03 D0                     ADD EDX,EAX
0046C25A  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0046C25E  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
0046C262  8B C1                     MOV EAX,ECX
0046C264  52                        PUSH EDX
0046C265  33 D2                     XOR EDX,EDX
0046C267  C1 E8 10                  SHR EAX,0x10
0046C26A  8B CB                     MOV ECX,EBX
0046C26C  F7 F1                     DIV ECX
0046C26E  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0046C272  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
0046C276  03 D0                     ADD EDX,EAX
0046C278  8B C7                     MOV EAX,EDI
0046C27A  2B D1                     SUB EDX,ECX
0046C27C  83 EA 03                  SUB EDX,0x3
0046C27F  52                        PUSH EDX
LAB_0046c280:
0046C280  C1 E8 10                  SHR EAX,0x10
0046C283  33 D2                     XOR EDX,EDX
0046C285  B9 07 00 00 00            MOV ECX,0x7
0046C28A  F7 F1                     DIV ECX
0046C28C  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0046C290  0F BF 4D F8               MOVSX ECX,word ptr [EBP + -0x8]
0046C294  03 D0                     ADD EDX,EAX
0046C296  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
0046C29A  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0046C2A0  52                        PUSH EDX
0046C2A1  6A 07                     PUSH 0x7
0046C2A3  6A 02                     PUSH 0x2
0046C2A5  6A 01                     PUSH 0x1
0046C2A7  E8 87 51 F9 FF            CALL 0x00401433
0046C2AC  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0046C2AF  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0046C2B2  33 C9                     XOR ECX,ECX
0046C2B4  40                        INC EAX
0046C2B5  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0046C2BB  83 C7 06                  ADD EDI,0x6
0046C2BE  3B C1                     CMP EAX,ECX
0046C2C0  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0046C2C3  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0046C2C6  0F 8C 62 FE FF FF         JL 0x0046c12e
0046C2CC  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_0046c2cf:
0046C2CF  83 F8 FF                  CMP EAX,-0x1
0046C2D2  74 55                     JZ 0x0046c329
0046C2D4  85 C0                     TEST EAX,EAX
0046C2D6  0F 85 72 FD FF FF         JNZ 0x0046c04e
0046C2DC  8B CE                     MOV ECX,ESI
0046C2DE  C7 86 08 05 00 00 07 00 00 00  MOV dword ptr [ESI + 0x508],0x7
0046C2E8  E8 C3 88 F9 FF            CALL 0x00404bb0
0046C2ED  0F BF 96 00 05 00 00      MOVSX EDX,word ptr [ESI + 0x500]
0046C2F4  0F BF 86 FE 04 00 00      MOVSX EAX,word ptr [ESI + 0x4fe]
0046C2FB  0F BF 8E FC 04 00 00      MOVSX ECX,word ptr [ESI + 0x4fc]
0046C302  52                        PUSH EDX
0046C303  50                        PUSH EAX
0046C304  51                        PUSH ECX
0046C305  8B CE                     MOV ECX,ESI
0046C307  E8 5F 8C F9 FF            CALL 0x00404f6b
0046C30C  6A 00                     PUSH 0x0
0046C30E  8B CE                     MOV ECX,ESI
0046C310  E8 1F 78 F9 FF            CALL 0x00403b34
0046C315  83 F8 FF                  CMP EAX,-0x1
0046C318  0F 85 30 FD FF FF         JNZ 0x0046c04e
0046C31E  0B C0                     OR EAX,EAX
0046C320  5F                        POP EDI
0046C321  5E                        POP ESI
0046C322  5B                        POP EBX
0046C323  8B E5                     MOV ESP,EBP
0046C325  5D                        POP EBP
0046C326  C2 04 00                  RET 0x4
LAB_0046c329:
0046C329  68 2C A6 7A 00            PUSH 0x7aa62c
0046C32E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046C333  6A 00                     PUSH 0x0
0046C335  6A 00                     PUSH 0x0
0046C337  68 E7 24 00 00            PUSH 0x24e7
0046C33C  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046C341  E8 8A 11 24 00            CALL 0x006ad4d0
0046C346  83 C4 18                  ADD ESP,0x18
0046C349  85 C0                     TEST EAX,EAX
0046C34B  74 01                     JZ 0x0046c34e
0046C34D  CC                        INT3
LAB_0046c34e:
0046C34E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0046C354  68 E8 24 00 00            PUSH 0x24e8
0046C359  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046C35E  52                        PUSH EDX
0046C35F  68 FF FF 00 00            PUSH 0xffff
0046C364  E8 D7 9A 23 00            CALL 0x006a5e40
0046C369  B8 FF FF 00 00            MOV EAX,0xffff
0046C36E  5F                        POP EDI
0046C36F  5E                        POP ESI
0046C370  5B                        POP EBX
0046C371  8B E5                     MOV ESP,EBP
0046C373  5D                        POP EBP
0046C374  C2 04 00                  RET 0x4
LAB_0046c377:
0046C377  83 F8 07                  CMP EAX,0x7
0046C37A  0F 85 C6 00 00 00         JNZ 0x0046c446
0046C380  6A 02                     PUSH 0x2
0046C382  8B CE                     MOV ECX,ESI
0046C384  E8 AB 77 F9 FF            CALL 0x00403b34
0046C389  83 F8 FF                  CMP EAX,-0x1
0046C38C  74 6A                     JZ 0x0046c3f8
0046C38E  85 C0                     TEST EAX,EAX
0046C390  74 4F                     JZ 0x0046c3e1
0046C392  3B C3                     CMP EAX,EBX
0046C394  75 2F                     JNZ 0x0046c3c5
0046C396  8B CE                     MOV ECX,ESI
0046C398  E8 13 88 F9 FF            CALL 0x00404bb0
0046C39D  0F BF 8E 00 05 00 00      MOVSX ECX,word ptr [ESI + 0x500]
0046C3A4  0F BF 96 FE 04 00 00      MOVSX EDX,word ptr [ESI + 0x4fe]
0046C3AB  0F BF 86 FC 04 00 00      MOVSX EAX,word ptr [ESI + 0x4fc]
0046C3B2  51                        PUSH ECX
0046C3B3  52                        PUSH EDX
0046C3B4  50                        PUSH EAX
0046C3B5  8B CE                     MOV ECX,ESI
0046C3B7  E8 AF 8B F9 FF            CALL 0x00404f6b
0046C3BC  6A 00                     PUSH 0x0
LAB_0046c3be:
0046C3BE  8B CE                     MOV ECX,ESI
0046C3C0  E8 6F 77 F9 FF            CALL 0x00403b34
STBoatC::Build::cf_common_exit_0046C3C5:
0046C3C5  8B 16                     MOV EDX,dword ptr [ESI]
0046C3C7  8B CE                     MOV ECX,ESI
0046C3C9  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046C3CF  F7 D8                     NEG EAX
0046C3D1  1B C0                     SBB EAX,EAX
0046C3D3  24 FD                     AND AL,0xfd
0046C3D5  83 C0 02                  ADD EAX,0x2
0046C3D8  5F                        POP EDI
0046C3D9  5E                        POP ESI
0046C3DA  5B                        POP EBX
0046C3DB  8B E5                     MOV ESP,EBP
0046C3DD  5D                        POP EBP
0046C3DE  C2 04 00                  RET 0x4
LAB_0046c3e1:
0046C3E1  8B 06                     MOV EAX,dword ptr [ESI]
0046C3E3  8B CE                     MOV ECX,ESI
0046C3E5  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046C3EB  F7 D8                     NEG EAX
0046C3ED  1B C0                     SBB EAX,EAX
0046C3EF  5F                        POP EDI
0046C3F0  5E                        POP ESI
0046C3F1  5B                        POP EBX
0046C3F2  8B E5                     MOV ESP,EBP
0046C3F4  5D                        POP EBP
0046C3F5  C2 04 00                  RET 0x4
LAB_0046c3f8:
0046C3F8  68 00 A6 7A 00            PUSH 0x7aa600
0046C3FD  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046C402  6A 00                     PUSH 0x0
0046C404  6A 00                     PUSH 0x0
0046C406  68 FE 24 00 00            PUSH 0x24fe
0046C40B  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046C410  E8 BB 10 24 00            CALL 0x006ad4d0
0046C415  83 C4 18                  ADD ESP,0x18
0046C418  85 C0                     TEST EAX,EAX
0046C41A  74 01                     JZ 0x0046c41d
0046C41C  CC                        INT3
LAB_0046c41d:
0046C41D  68 FE 24 00 00            PUSH 0x24fe
STBoatC::Build::cf_error_exit_0046C422:
0046C422  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0046C428  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046C42D  51                        PUSH ECX
0046C42E  68 FF FF 00 00            PUSH 0xffff
0046C433  E8 08 9A 23 00            CALL 0x006a5e40
0046C438  B8 FF FF 00 00            MOV EAX,0xffff
0046C43D  5F                        POP EDI
0046C43E  5E                        POP ESI
0046C43F  5B                        POP EBX
0046C440  8B E5                     MOV ESP,EBP
0046C442  5D                        POP EBP
0046C443  C2 04 00                  RET 0x4
LAB_0046c446:
0046C446  68 D8 A5 7A 00            PUSH 0x7aa5d8
0046C44B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046C450  6A 00                     PUSH 0x0
0046C452  6A 00                     PUSH 0x0
0046C454  68 10 25 00 00            PUSH 0x2510
0046C459  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046C45E  E8 6D 10 24 00            CALL 0x006ad4d0
0046C463  83 C4 18                  ADD ESP,0x18
0046C466  85 C0                     TEST EAX,EAX
0046C468  74 01                     JZ 0x0046c46b
0046C46A  CC                        INT3
LAB_0046c46b:
0046C46B  5F                        POP EDI
0046C46C  5E                        POP ESI
0046C46D  83 C8 FF                  OR EAX,0xffffffff
0046C470  5B                        POP EBX
0046C471  8B E5                     MOV ESP,EBP
0046C473  5D                        POP EBP
0046C474  C2 04 00                  RET 0x4
