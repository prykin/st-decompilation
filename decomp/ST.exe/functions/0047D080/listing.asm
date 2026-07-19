STBoatC::Annih:
0047D080  55                        PUSH EBP
0047D081  8B EC                     MOV EBP,ESP
0047D083  83 EC 60                  SUB ESP,0x60
0047D086  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047D089  53                        PUSH EBX
0047D08A  33 DB                     XOR EBX,EBX
0047D08C  56                        PUSH ESI
0047D08D  3B C3                     CMP EAX,EBX
0047D08F  57                        PUSH EDI
0047D090  8B F1                     MOV ESI,ECX
0047D092  74 09                     JZ 0x0047d09d
0047D094  83 F8 01                  CMP EAX,0x1
0047D097  0F 85 FA 00 00 00         JNZ 0x0047d197
LAB_0047d09d:
0047D09D  B9 17 00 00 00            MOV ECX,0x17
0047D0A2  33 C0                     XOR EAX,EAX
0047D0A4  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
0047D0AA  F3 AB                     STOSD.REP ES:EDI
0047D0AC  66 8B 86 23 04 00 00      MOV AX,word ptr [ESI + 0x423]
0047D0B3  66 8B 8E 25 04 00 00      MOV CX,word ptr [ESI + 0x425]
0047D0BA  66 8B 96 27 04 00 00      MOV DX,word ptr [ESI + 0x427]
0047D0C1  66 3B C3                  CMP AX,BX
0047D0C4  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
0047D0CA  66 89 86 8B 06 00 00      MOV word ptr [ESI + 0x68b],AX
0047D0D1  66 89 8E 8D 06 00 00      MOV word ptr [ESI + 0x68d],CX
0047D0D8  66 89 96 8F 06 00 00      MOV word ptr [ESI + 0x68f],DX
0047D0DF  0F 8C 4C 07 00 00         JL 0x0047d831
0047D0E5  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047D0EC  66 3B C7                  CMP AX,DI
0047D0EF  0F 8D 3C 07 00 00         JGE 0x0047d831
0047D0F5  66 3B CB                  CMP CX,BX
0047D0F8  0F 8C 33 07 00 00         JL 0x0047d831
0047D0FE  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0047D105  0F 8D 26 07 00 00         JGE 0x0047d831
0047D10B  66 3B D3                  CMP DX,BX
0047D10E  0F 8C 1D 07 00 00         JL 0x0047d831
0047D114  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0047D11B  0F 8D 10 07 00 00         JGE 0x0047d831
0047D121  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047D128  0F BF D2                  MOVSX EDX,DX
0047D12B  0F BF C9                  MOVSX ECX,CX
0047D12E  0F AF D3                  IMUL EDX,EBX
0047D131  0F BF FF                  MOVSX EDI,DI
0047D134  0F AF CF                  IMUL ECX,EDI
0047D137  0F BF C0                  MOVSX EAX,AX
0047D13A  03 D1                     ADD EDX,ECX
0047D13C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047D142  03 D0                     ADD EDX,EAX
0047D144  33 DB                     XOR EBX,EBX
0047D146  8B 3C D1                  MOV EDI,dword ptr [ECX + EDX*0x8]
0047D149  3B FB                     CMP EDI,EBX
0047D14B  0F 84 E0 06 00 00         JZ 0x0047d831
0047D151  8B 17                     MOV EDX,dword ptr [EDI]
0047D153  8B CF                     MOV ECX,EDI
0047D155  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0047D158  83 F8 63                  CMP EAX,0x63
0047D15B  0F 85 D0 06 00 00         JNZ 0x0047d831
0047D161  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
0047D165  66 8B 4E 5D               MOV CX,word ptr [ESI + 0x5d]
0047D169  66 8B 56 5F               MOV DX,word ptr [ESI + 0x5f]
0047D16D  66 89 86 91 06 00 00      MOV word ptr [ESI + 0x691],AX
0047D174  66 89 8E 93 06 00 00      MOV word ptr [ESI + 0x693],CX
0047D17B  66 89 96 95 06 00 00      MOV word ptr [ESI + 0x695],DX
0047D182  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0047D185  89 9E A1 06 00 00         MOV dword ptr [ESI + 0x6a1],EBX
0047D18B  89 86 97 06 00 00         MOV dword ptr [ESI + 0x697],EAX
0047D191  89 9E A5 06 00 00         MOV dword ptr [ESI + 0x6a5],EBX
LAB_0047d197:
0047D197  8B 86 A1 06 00 00         MOV EAX,dword ptr [ESI + 0x6a1]
0047D19D  3B C3                     CMP EAX,EBX
0047D19F  0F 85 12 04 00 00         JNZ 0x0047d5b7
0047D1A5  39 9E A5 06 00 00         CMP dword ptr [ESI + 0x6a5],EBX
0047D1AB  75 5F                     JNZ 0x0047d20c
0047D1AD  66 8B 86 8F 06 00 00      MOV AX,word ptr [ESI + 0x68f]
0047D1B4  8B 16                     MOV EDX,dword ptr [ESI]
0047D1B6  66 69 C0 C8 00            IMUL AX,AX,0xc8
0047D1BB  05 FA 00 00 00            ADD EAX,0xfa
0047D1C0  50                        PUSH EAX
0047D1C1  66 8B 86 8D 06 00 00      MOV AX,word ptr [ESI + 0x68d]
0047D1C8  66 40                     INC AX
0047D1CA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047D1CD  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047D1D0  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0047D1D3  50                        PUSH EAX
0047D1D4  66 8B 86 8B 06 00 00      MOV AX,word ptr [ESI + 0x68b]
0047D1DB  66 40                     INC AX
0047D1DD  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047D1E0  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047D1E3  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0047D1E6  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0047D1EA  50                        PUSH EAX
0047D1EB  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047D1EF  51                        PUSH ECX
0047D1F0  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047D1F4  50                        PUSH EAX
0047D1F5  51                        PUSH ECX
0047D1F6  8B CE                     MOV ECX,ESI
0047D1F8  FF 52 10                  CALL dword ptr [EDX + 0x10]
0047D1FB  66 89 86 9B 06 00 00      MOV word ptr [ESI + 0x69b],AX
0047D202  C7 86 A5 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x6a5],0x1
LAB_0047d20c:
0047D20C  8B 86 A5 06 00 00         MOV EAX,dword ptr [ESI + 0x6a5]
0047D212  83 F8 01                  CMP EAX,0x1
0047D215  75 75                     JNZ 0x0047d28c
0047D217  66 8B 96 9B 06 00 00      MOV DX,word ptr [ESI + 0x69b]
0047D21E  8B CE                     MOV ECX,ESI
0047D220  52                        PUSH EDX
0047D221  E8 8C 5E F8 FF            CALL 0x004030b2
0047D226  50                        PUSH EAX
0047D227  8B CE                     MOV ECX,ESI
0047D229  E8 CE 50 F8 FF            CALL 0x004022fc
0047D22E  83 F8 FF                  CMP EAX,-0x1
0047D231  74 2A                     JZ 0x0047d25d
0047D233  3B C3                     CMP EAX,EBX
0047D235  75 0A                     JNZ 0x0047d241
0047D237  C7 86 A5 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6a5],0x2
LAB_0047d241:
0047D241  8B 06                     MOV EAX,dword ptr [ESI]
0047D243  8B CE                     MOV ECX,ESI
0047D245  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047D24B  F7 D8                     NEG EAX
0047D24D  1B C0                     SBB EAX,EAX
0047D24F  24 FD                     AND AL,0xfd
0047D251  83 C0 02                  ADD EAX,0x2
0047D254  5F                        POP EDI
0047D255  5E                        POP ESI
0047D256  5B                        POP EBX
0047D257  8B E5                     MOV ESP,EBP
0047D259  5D                        POP EBP
0047D25A  C2 04 00                  RET 0x4
LAB_0047d25d:
0047D25D  68 7C B6 7A 00            PUSH 0x7ab67c
0047D262  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047D267  53                        PUSH EBX
0047D268  53                        PUSH EBX
0047D269  68 96 38 00 00            PUSH 0x3896
0047D26E  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047D273  E8 58 02 23 00            CALL 0x006ad4d0
0047D278  83 C4 18                  ADD ESP,0x18
0047D27B  85 C0                     TEST EAX,EAX
0047D27D  74 01                     JZ 0x0047d280
0047D27F  CC                        INT3
LAB_0047d280:
0047D280  83 C8 FF                  OR EAX,0xffffffff
0047D283  5F                        POP EDI
0047D284  5E                        POP ESI
0047D285  5B                        POP EBX
0047D286  8B E5                     MOV ESP,EBP
0047D288  5D                        POP EBP
0047D289  C2 04 00                  RET 0x4
LAB_0047d28c:
0047D28C  83 F8 02                  CMP EAX,0x2
0047D28F  75 5D                     JNZ 0x0047d2ee
0047D291  66 8B 96 8F 06 00 00      MOV DX,word ptr [ESI + 0x68f]
0047D298  66 8B 86 8D 06 00 00      MOV AX,word ptr [ESI + 0x68d]
0047D29F  66 69 D2 C8 00            IMUL DX,DX,0xc8
0047D2A4  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
0047D2A7  81 C2 FA 00 00 00         ADD EDX,0xfa
0047D2AD  66 40                     INC AX
0047D2AF  51                        PUSH ECX
0047D2B0  52                        PUSH EDX
0047D2B1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047D2B4  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047D2B7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0047D2BA  66 8B 86 8B 06 00 00      MOV AX,word ptr [ESI + 0x68b]
0047D2C1  66 40                     INC AX
0047D2C3  52                        PUSH EDX
0047D2C4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0047D2C7  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0047D2CA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0047D2CD  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0047D2D1  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0047D2D5  52                        PUSH EDX
0047D2D6  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0047D2DA  50                        PUSH EAX
0047D2DB  51                        PUSH ECX
0047D2DC  52                        PUSH EDX
0047D2DD  8B CE                     MOV ECX,ESI
0047D2DF  E8 71 51 F8 FF            CALL 0x00402455
0047D2E4  C7 86 A5 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x6a5],0x3
LAB_0047d2ee:
0047D2EE  83 BE A5 06 00 00 03      CMP dword ptr [ESI + 0x6a5],0x3
0047D2F5  0F 85 46 FF FF FF         JNZ 0x0047d241
0047D2FB  8D 45 F4                  LEA EAX,[EBP + -0xc]
0047D2FE  8D 4D F0                  LEA ECX,[EBP + -0x10]
0047D301  50                        PUSH EAX
0047D302  51                        PUSH ECX
0047D303  8B CE                     MOV ECX,ESI
0047D305  E8 3D 55 F8 FF            CALL 0x00402847
0047D30A  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047D30D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0047D310  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047D316  B9 07 00 00 00            MOV ECX,0x7
0047D31B  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047D321  33 D2                     XOR EDX,EDX
0047D323  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047D326  C1 E8 10                  SHR EAX,0x10
0047D329  F7 F1                     DIV ECX
0047D32B  8B FA                     MOV EDI,EDX
0047D32D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047D330  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047D336  83 EF 03                  SUB EDI,0x3
0047D339  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047D33F  33 D2                     XOR EDX,EDX
0047D341  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047D344  C1 E8 10                  SHR EAX,0x10
0047D347  F7 F1                     DIV ECX
0047D349  8B DA                     MOV EBX,EDX
0047D34B  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047D34E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047D354  83 EB 03                  SUB EBX,0x3
0047D357  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047D35D  33 D2                     XOR EDX,EDX
0047D35F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047D362  C1 E8 10                  SHR EAX,0x10
0047D365  F7 F1                     DIV ECX
0047D367  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
0047D36D  83 EA 03                  SUB EDX,0x3
0047D370  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0047D373  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
0047D379  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
0047D37D  99                        CDQ
0047D37E  2B C2                     SUB EAX,EDX
0047D380  D1 F8                     SAR EAX,0x1
0047D382  3B C8                     CMP ECX,EAX
0047D384  0F 8F 09 01 00 00         JG 0x0047d493
0047D38A  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
0047D390  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0047D397  84 C0                     TEST AL,AL
0047D399  0F 86 F4 00 00 00         JBE 0x0047d493
0047D39F  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
0047D3A5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0047d3a8:
0047D3A8  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0047D3AC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0047D3AF  51                        PUSH ECX
0047D3B0  8B 0A                     MOV ECX,dword ptr [EDX]
0047D3B2  83 EC 08                  SUB ESP,0x8
0047D3B5  8B C4                     MOV EAX,ESP
0047D3B7  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
0047D3BB  89 08                     MOV dword ptr [EAX],ECX
0047D3BD  8B CE                     MOV ECX,ESI
0047D3BF  66 89 50 04               MOV word ptr [EAX + 0x4],DX
0047D3C3  8D 45 DC                  LEA EAX,[EBP + -0x24]
0047D3C6  50                        PUSH EAX
0047D3C7  E8 60 60 F8 FF            CALL 0x0040342c
0047D3CC  8B 08                     MOV ECX,dword ptr [EAX]
0047D3CE  6A 00                     PUSH 0x0
0047D3D0  6A 00                     PUSH 0x0
0047D3D2  6A FF                     PUSH -0x1
0047D3D4  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0047D3D8  6A 00                     PUSH 0x0
0047D3DA  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0047D3DD  8B 0D 2C 73 80 00         MOV ECX,dword ptr [0x0080732c]
0047D3E3  6A 00                     PUSH 0x0
0047D3E5  6A 00                     PUSH 0x0
0047D3E7  6A 00                     PUSH 0x0
0047D3E9  83 F9 01                  CMP ECX,0x1
0047D3EC  6A 00                     PUSH 0x0
0047D3EE  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
0047D3F2  6A 00                     PUSH 0x0
0047D3F4  75 41                     JNZ 0x0047d437
0047D3F6  D9 46 70                  FLD float ptr [ESI + 0x70]
0047D3F9  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0047D3FF  E8 84 0E 2B 00            CALL 0x0072e288
0047D404  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047D407  0F BF D0                  MOVSX EDX,AX
0047D40A  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0047D40E  03 C1                     ADD EAX,ECX
0047D410  0F BF 4D E8               MOVSX ECX,word ptr [EBP + -0x18]
0047D414  03 C2                     ADD EAX,EDX
0047D416  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0047D41A  03 C8                     ADD ECX,EAX
0047D41C  0F BF 45 E6               MOVSX EAX,word ptr [EBP + -0x1a]
0047D420  2B D0                     SUB EDX,EAX
0047D422  51                        PUSH ECX
0047D423  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047D427  03 D3                     ADD EDX,EBX
0047D429  8B C7                     MOV EAX,EDI
0047D42B  52                        PUSH EDX
0047D42C  03 C1                     ADD EAX,ECX
0047D42E  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
0047D432  03 D0                     ADD EDX,EAX
0047D434  52                        PUSH EDX
0047D435  EB 2B                     JMP 0x0047d462
LAB_0047d437:
0047D437  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0047D43B  0F BF D0                  MOVSX EDX,AX
0047D43E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0047D441  03 C1                     ADD EAX,ECX
0047D443  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0047D447  03 D0                     ADD EDX,EAX
0047D449  52                        PUSH EDX
0047D44A  0F BF 55 E6               MOVSX EDX,word ptr [EBP + -0x1a]
0047D44E  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047D452  2B CA                     SUB ECX,EDX
0047D454  8B D7                     MOV EDX,EDI
0047D456  03 CB                     ADD ECX,EBX
0047D458  03 D0                     ADD EDX,EAX
0047D45A  51                        PUSH ECX
0047D45B  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
0047D45F  03 CA                     ADD ECX,EDX
0047D461  51                        PUSH ECX
LAB_0047d462:
0047D462  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047D468  6A 07                     PUSH 0x7
0047D46A  6A 02                     PUSH 0x2
0047D46C  6A 01                     PUSH 0x1
0047D46E  E8 C0 3F F8 FF            CALL 0x00401433
0047D473  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047D476  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0047D479  83 C1 06                  ADD ECX,0x6
0047D47C  40                        INC EAX
0047D47D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047D480  33 C9                     XOR ECX,ECX
0047D482  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0047D488  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0047D48B  3B C1                     CMP EAX,ECX
0047D48D  0F 8C 15 FF FF FF         JL 0x0047d3a8
LAB_0047d493:
0047D493  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0047D496  83 F8 FF                  CMP EAX,-0x1
0047D499  0F 84 E7 00 00 00         JZ 0x0047d586
0047D49F  85 C0                     TEST EAX,EAX
0047D4A1  0F 85 9A FD FF FF         JNZ 0x0047d241
0047D4A7  66 8B 86 8B 06 00 00      MOV AX,word ptr [ESI + 0x68b]
0047D4AE  66 8B 8E 8F 06 00 00      MOV CX,word ptr [ESI + 0x68f]
0047D4B5  66 8B 96 8D 06 00 00      MOV DX,word ptr [ESI + 0x68d]
0047D4BC  66 85 C0                  TEST AX,AX
0047D4BF  0F 8C 9A 00 00 00         JL 0x0047d55f
0047D4C5  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047D4CC  66 3B C7                  CMP AX,DI
0047D4CF  0F 8D 8A 00 00 00         JGE 0x0047d55f
0047D4D5  66 85 D2                  TEST DX,DX
0047D4D8  0F 8C 81 00 00 00         JL 0x0047d55f
0047D4DE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047D4E5  7D 78                     JGE 0x0047d55f
0047D4E7  66 85 C9                  TEST CX,CX
0047D4EA  7C 73                     JL 0x0047d55f
0047D4EC  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047D4F3  7D 6A                     JGE 0x0047d55f
0047D4F5  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047D4FC  0F BF C9                  MOVSX ECX,CX
0047D4FF  0F BF D2                  MOVSX EDX,DX
0047D502  0F AF CB                  IMUL ECX,EBX
0047D505  0F BF FF                  MOVSX EDI,DI
0047D508  0F AF D7                  IMUL EDX,EDI
0047D50B  0F BF C0                  MOVSX EAX,AX
0047D50E  03 CA                     ADD ECX,EDX
0047D510  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047D516  03 C8                     ADD ECX,EAX
0047D518  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0047D51B  85 FF                     TEST EDI,EDI
0047D51D  74 40                     JZ 0x0047d55f
0047D51F  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0047D522  8B 8E 97 06 00 00         MOV ECX,dword ptr [ESI + 0x697]
0047D528  3B C1                     CMP EAX,ECX
0047D52A  75 33                     JNZ 0x0047d55f
0047D52C  8B 17                     MOV EDX,dword ptr [EDI]
0047D52E  8B CF                     MOV ECX,EDI
0047D530  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047D536  83 F8 01                  CMP EAX,0x1
0047D539  75 24                     JNZ 0x0047d55f
0047D53B  33 C0                     XOR EAX,EAX
0047D53D  8B CF                     MOV ECX,EDI
0047D53F  89 86 A5 06 00 00         MOV dword ptr [ESI + 0x6a5],EAX
0047D545  C7 86 A1 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x6a1],0x1
0047D54F  89 86 9D 06 00 00         MOV dword ptr [ESI + 0x69d],EAX
0047D555  E8 29 7B F8 FF            CALL 0x00405083
0047D55A  E9 E2 FC FF FF            JMP 0x0047d241
LAB_0047d55f:
0047D55F  8B CE                     MOV ECX,ESI
0047D561  E8 3A 6D F8 FF            CALL 0x004042a0
0047D566  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0047D56B  8D 55 08                  LEA EDX,[EBP + 0x8]
0047D56E  52                        PUSH EDX
0047D56F  6A 03                     PUSH 0x3
0047D571  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0047D577  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047D57A  8B CE                     MOV ECX,ESI
0047D57C  E8 A5 4B F8 FF            CALL 0x00402126
0047D581  E9 BB FC FF FF            JMP 0x0047d241
LAB_0047d586:
0047D586  68 58 B6 7A 00            PUSH 0x7ab658
0047D58B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047D590  6A 00                     PUSH 0x0
0047D592  6A 00                     PUSH 0x0
0047D594  68 BD 38 00 00            PUSH 0x38bd
0047D599  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047D59E  E8 2D FF 22 00            CALL 0x006ad4d0
0047D5A3  83 C4 18                  ADD ESP,0x18
0047D5A6  85 C0                     TEST EAX,EAX
0047D5A8  74 01                     JZ 0x0047d5ab
0047D5AA  CC                        INT3
LAB_0047d5ab:
0047D5AB  83 C8 FF                  OR EAX,0xffffffff
0047D5AE  5F                        POP EDI
0047D5AF  5E                        POP ESI
0047D5B0  5B                        POP EBX
0047D5B1  8B E5                     MOV ESP,EBP
0047D5B3  5D                        POP EBP
0047D5B4  C2 04 00                  RET 0x4
LAB_0047d5b7:
0047D5B7  83 F8 01                  CMP EAX,0x1
0047D5BA  0F 85 21 01 00 00         JNZ 0x0047d6e1
0047D5C0  8B 86 9D 06 00 00         MOV EAX,dword ptr [ESI + 0x69d]
0047D5C6  B9 05 00 00 00            MOV ECX,0x5
0047D5CB  99                        CDQ
0047D5CC  F7 F9                     IDIV ECX
0047D5CE  85 D2                     TEST EDX,EDX
0047D5D0  0F 85 10 02 00 00         JNZ 0x0047d7e6
0047D5D6  66 8B 86 8B 06 00 00      MOV AX,word ptr [ESI + 0x68b]
0047D5DD  66 8B 8E 8F 06 00 00      MOV CX,word ptr [ESI + 0x68f]
0047D5E4  66 8B 96 8D 06 00 00      MOV DX,word ptr [ESI + 0x68d]
0047D5EB  66 3B C3                  CMP AX,BX
0047D5EE  0F 8C CC 00 00 00         JL 0x0047d6c0
0047D5F4  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047D5FB  66 3B C7                  CMP AX,DI
0047D5FE  0F 8D BC 00 00 00         JGE 0x0047d6c0
0047D604  66 3B D3                  CMP DX,BX
0047D607  0F 8C B3 00 00 00         JL 0x0047d6c0
0047D60D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047D614  0F 8D A6 00 00 00         JGE 0x0047d6c0
0047D61A  66 3B CB                  CMP CX,BX
0047D61D  0F 8C 9D 00 00 00         JL 0x0047d6c0
0047D623  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047D62A  0F 8D 90 00 00 00         JGE 0x0047d6c0
0047D630  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047D637  0F BF C9                  MOVSX ECX,CX
0047D63A  0F BF D2                  MOVSX EDX,DX
0047D63D  0F AF CB                  IMUL ECX,EBX
0047D640  0F BF FF                  MOVSX EDI,DI
0047D643  0F AF D7                  IMUL EDX,EDI
0047D646  0F BF C0                  MOVSX EAX,AX
0047D649  03 CA                     ADD ECX,EDX
0047D64B  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047D651  03 C8                     ADD ECX,EAX
0047D653  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0047D656  85 FF                     TEST EDI,EDI
0047D658  74 66                     JZ 0x0047d6c0
0047D65A  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0047D65D  8B 8E 97 06 00 00         MOV ECX,dword ptr [ESI + 0x697]
0047D663  3B C1                     CMP EAX,ECX
0047D665  75 59                     JNZ 0x0047d6c0
0047D667  8B 17                     MOV EDX,dword ptr [EDI]
0047D669  8B CF                     MOV ECX,EDI
0047D66B  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047D671  83 F8 01                  CMP EAX,0x1
0047D674  75 4A                     JNZ 0x0047d6c0
0047D676  8B 8F D0 04 00 00         MOV ECX,dword ptr [EDI + 0x4d0]
0047D67C  B8 02 00 00 00            MOV EAX,0x2
0047D681  3B C8                     CMP ECX,EAX
0047D683  0F 85 5D 01 00 00         JNZ 0x0047d7e6
0047D689  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0047D68D  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0047D691  89 86 A1 06 00 00         MOV dword ptr [ESI + 0x6a1],EAX
0047D697  6A 00                     PUSH 0x0
0047D699  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0047D69D  50                        PUSH EAX
0047D69E  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
0047D6A4  51                        PUSH ECX
0047D6A5  52                        PUSH EDX
0047D6A6  6A 00                     PUSH 0x0
0047D6A8  50                        PUSH EAX
0047D6A9  C7 86 9D 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x69d],0x0
0047D6B3  E8 ED 7A F8 FF            CALL 0x004051a5
0047D6B8  83 C4 18                  ADD ESP,0x18
0047D6BB  E9 26 01 00 00            JMP 0x0047d7e6
LAB_0047d6c0:
0047D6C0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047D6C6  8D 45 08                  LEA EAX,[EBP + 0x8]
0047D6C9  50                        PUSH EAX
0047D6CA  6A 03                     PUSH 0x3
0047D6CC  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0047D6D2  8B CE                     MOV ECX,ESI
0047D6D4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0047D6D7  E8 4A 4A F8 FF            CALL 0x00402126
0047D6DC  E9 05 01 00 00            JMP 0x0047d7e6
LAB_0047d6e1:
0047D6E1  83 F8 02                  CMP EAX,0x2
0047D6E4  0F 85 18 01 00 00         JNZ 0x0047d802
0047D6EA  8B 8E 9D 06 00 00         MOV ECX,dword ptr [ESI + 0x69d]
0047D6F0  41                        INC ECX
0047D6F1  8B C1                     MOV EAX,ECX
0047D6F3  89 8E 9D 06 00 00         MOV dword ptr [ESI + 0x69d],ECX
0047D6F9  83 F8 16                  CMP EAX,0x16
0047D6FC  0F 85 E4 00 00 00         JNZ 0x0047d7e6
0047D702  66 8B 86 8B 06 00 00      MOV AX,word ptr [ESI + 0x68b]
0047D709  66 8B 8E 8F 06 00 00      MOV CX,word ptr [ESI + 0x68f]
0047D710  66 8B 96 8D 06 00 00      MOV DX,word ptr [ESI + 0x68d]
0047D717  66 3B C3                  CMP AX,BX
0047D71A  0F 8C 93 00 00 00         JL 0x0047d7b3
0047D720  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047D727  66 3B C7                  CMP AX,DI
0047D72A  0F 8D 83 00 00 00         JGE 0x0047d7b3
0047D730  66 3B D3                  CMP DX,BX
0047D733  7C 7E                     JL 0x0047d7b3
0047D735  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047D73C  7D 75                     JGE 0x0047d7b3
0047D73E  66 3B CB                  CMP CX,BX
0047D741  7C 70                     JL 0x0047d7b3
0047D743  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047D74A  7D 67                     JGE 0x0047d7b3
0047D74C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047D753  0F BF C9                  MOVSX ECX,CX
0047D756  0F BF D2                  MOVSX EDX,DX
0047D759  0F AF CB                  IMUL ECX,EBX
0047D75C  0F BF FF                  MOVSX EDI,DI
0047D75F  0F AF D7                  IMUL EDX,EDI
0047D762  0F BF C0                  MOVSX EAX,AX
0047D765  03 CA                     ADD ECX,EDX
0047D767  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047D76D  03 C8                     ADD ECX,EAX
0047D76F  33 DB                     XOR EBX,EBX
0047D771  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0047D774  3B FB                     CMP EDI,EBX
0047D776  74 3B                     JZ 0x0047d7b3
0047D778  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0047D77B  8B 8E 97 06 00 00         MOV ECX,dword ptr [ESI + 0x697]
0047D781  3B C1                     CMP EAX,ECX
0047D783  75 2E                     JNZ 0x0047d7b3
0047D785  8B 17                     MOV EDX,dword ptr [EDI]
0047D787  8B CF                     MOV ECX,EDI
0047D789  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047D78F  83 F8 01                  CMP EAX,0x1
0047D792  75 1F                     JNZ 0x0047d7b3
0047D794  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047D79A  53                        PUSH EBX
0047D79B  53                        PUSH EBX
0047D79C  50                        PUSH EAX
0047D79D  8B CF                     MOV ECX,EDI
0047D79F  E8 2A 65 F8 FF            CALL 0x00403cce
0047D7A4  8B CF                     MOV ECX,EDI
0047D7A6  E8 F7 63 F8 FF            CALL 0x00403ba2
0047D7AB  56                        PUSH ESI
0047D7AC  8B CF                     MOV ECX,EDI
0047D7AE  E8 90 4F F8 FF            CALL 0x00402743
LAB_0047d7b3:
0047D7B3  8B 16                     MOV EDX,dword ptr [ESI]
0047D7B5  B8 01 00 00 00            MOV EAX,0x1
0047D7BA  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0047D7BD  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0047D7C0  8D 4D C0                  LEA ECX,[EBP + -0x40]
0047D7C3  8D 45 A0                  LEA EAX,[EBP + -0x60]
0047D7C6  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0047D7C9  50                        PUSH EAX
0047D7CA  8B CE                     MOV ECX,ESI
0047D7CC  C7 45 C0 10 27 00 00      MOV dword ptr [EBP + -0x40],0x2710
0047D7D3  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
0047D7D6  C7 45 C8 FE 00 00 00      MOV dword ptr [EBP + -0x38],0xfe
0047D7DD  C7 45 B0 28 01 00 00      MOV dword ptr [EBP + -0x50],0x128
0047D7E4  FF 12                     CALL dword ptr [EDX]
LAB_0047d7e6:
0047D7E6  8B 16                     MOV EDX,dword ptr [ESI]
0047D7E8  8B CE                     MOV ECX,ESI
0047D7EA  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047D7F0  F7 D8                     NEG EAX
0047D7F2  1B C0                     SBB EAX,EAX
0047D7F4  24 FD                     AND AL,0xfd
0047D7F6  83 C0 02                  ADD EAX,0x2
0047D7F9  5F                        POP EDI
0047D7FA  5E                        POP ESI
0047D7FB  5B                        POP EBX
0047D7FC  8B E5                     MOV ESP,EBP
0047D7FE  5D                        POP EBP
0047D7FF  C2 04 00                  RET 0x4
LAB_0047d802:
0047D802  68 30 B6 7A 00            PUSH 0x7ab630
0047D807  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047D80C  53                        PUSH EBX
0047D80D  53                        PUSH EBX
0047D80E  68 02 39 00 00            PUSH 0x3902
0047D813  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047D818  E8 B3 FC 22 00            CALL 0x006ad4d0
0047D81D  83 C4 18                  ADD ESP,0x18
0047D820  85 C0                     TEST EAX,EAX
0047D822  74 01                     JZ 0x0047d825
0047D824  CC                        INT3
LAB_0047d825:
0047D825  83 C8 FF                  OR EAX,0xffffffff
0047D828  5F                        POP EDI
0047D829  5E                        POP ESI
0047D82A  5B                        POP EBX
0047D82B  8B E5                     MOV ESP,EBP
0047D82D  5D                        POP EBP
0047D82E  C2 04 00                  RET 0x4
LAB_0047d831:
0047D831  8B CE                     MOV ECX,ESI
0047D833  E8 68 6A F8 FF            CALL 0x004042a0
0047D838  5F                        POP EDI
0047D839  5E                        POP ESI
0047D83A  33 C0                     XOR EAX,EAX
0047D83C  5B                        POP EBX
0047D83D  8B E5                     MOV ESP,EBP
0047D83F  5D                        POP EBP
0047D840  C2 04 00                  RET 0x4
