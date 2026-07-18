FUN_00624570:
00624570  55                        PUSH EBP
00624571  8B EC                     MOV EBP,ESP
00624573  53                        PUSH EBX
00624574  56                        PUSH ESI
00624575  8B F1                     MOV ESI,ECX
00624577  33 DB                     XOR EBX,EBX
00624579  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062457C  33 C0                     XOR EAX,EAX
0062457E  83 F9 03                  CMP ECX,0x3
00624581  57                        PUSH EDI
00624582  0F 87 B9 02 00 00         JA 0x00624841
switchD_00624588::switchD:
00624588  FF 24 8D 48 48 62 00      JMP dword ptr [ECX*0x4 + 0x624848]
switchD_00624588::caseD_0:
0062458F  C6 46 61 00               MOV byte ptr [ESI + 0x61],0x0
00624593  C6 46 62 00               MOV byte ptr [ESI + 0x62],0x0
00624597  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0062459C  5F                        POP EDI
0062459D  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
006245A3  B8 01 00 00 00            MOV EAX,0x1
006245A8  89 8E 0F 03 00 00         MOV dword ptr [ESI + 0x30f],ECX
006245AE  5E                        POP ESI
006245AF  5B                        POP EBX
006245B0  5D                        POP EBP
006245B1  C2 10 00                  RET 0x10
switchD_00624588::caseD_1:
006245B4  33 C9                     XOR ECX,ECX
006245B6  8A 8E AD 02 00 00         MOV CL,byte ptr [ESI + 0x2ad]
006245BC  C1 E1 02                  SHL ECX,0x2
006245BF  39 99 98 03 7D 00         CMP dword ptr [ECX + 0x7d0398],EBX
006245C5  0F 84 99 00 00 00         JZ 0x00624664
006245CB  8B 86 02 03 00 00         MOV EAX,dword ptr [ESI + 0x302]
006245D1  3B C3                     CMP EAX,EBX
006245D3  74 18                     JZ 0x006245ed
006245D5  33 D2                     XOR EDX,EDX
006245D7  3B C3                     CMP EAX,EBX
006245D9  0F 9E C2                  SETLE DL
006245DC  4A                        DEC EDX
006245DD  83 E2 02                  AND EDX,0x2
006245E0  4A                        DEC EDX
006245E1  8B C2                     MOV EAX,EDX
006245E3  F7 D8                     NEG EAX
006245E5  89 86 02 03 00 00         MOV dword ptr [ESI + 0x302],EAX
006245EB  EB 0A                     JMP 0x006245f7
LAB_006245ed:
006245ED  C7 86 02 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x302],0x1
LAB_006245f7:
006245F7  8B 89 88 03 7D 00         MOV ECX,dword ptr [ECX + 0x7d0388]
006245FD  B8 56 55 55 55            MOV EAX,0x55555556
00624602  F7 E9                     IMUL ECX
00624604  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00624607  8B C2                     MOV EAX,EDX
00624609  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0062460F  C1 E8 1F                  SHR EAX,0x1f
00624612  03 D0                     ADD EDX,EAX
00624614  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0062461A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0062461D  5F                        POP EDI
0062461E  8D 4A 01                  LEA ECX,[EDX + 0x1]
00624621  33 D2                     XOR EDX,EDX
00624623  C1 E8 10                  SHR EAX,0x10
00624626  F7 F1                     DIV ECX
00624628  33 C0                     XOR EAX,EAX
0062462A  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
00624630  8A 0C 85 88 03 7D 00      MOV CL,byte ptr [EAX*0x4 + 0x7d0388]
00624637  2A CA                     SUB CL,DL
00624639  88 4E 62                  MOV byte ptr [ESI + 0x62],CL
0062463C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00624642  66 8B 8E CA 02 00 00      MOV CX,word ptr [ESI + 0x2ca]
00624649  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0062464F  66 89 4E 34               MOV word ptr [ESI + 0x34],CX
00624653  89 86 0F 03 00 00         MOV dword ptr [ESI + 0x30f],EAX
00624659  5E                        POP ESI
0062465A  B8 01 00 00 00            MOV EAX,0x1
0062465F  5B                        POP EBX
00624660  5D                        POP EBP
00624661  C2 10 00                  RET 0x10
LAB_00624664:
00624664  C6 46 62 00               MOV byte ptr [ESI + 0x62],0x0
00624668  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0062466E  5F                        POP EDI
0062466F  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00624675  89 86 0F 03 00 00         MOV dword ptr [ESI + 0x30f],EAX
0062467B  5E                        POP ESI
0062467C  B8 01 00 00 00            MOV EAX,0x1
00624681  5B                        POP EBX
00624682  5D                        POP EBP
00624683  C2 10 00                  RET 0x10
switchD_00624588::caseD_2:
00624686  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00624689  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0062468C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062468F  8B 96 CA 02 00 00         MOV EDX,dword ptr [ESI + 0x2ca]
00624695  8B 86 C6 02 00 00         MOV EAX,dword ptr [ESI + 0x2c6]
0062469B  57                        PUSH EDI
0062469C  53                        PUSH EBX
0062469D  51                        PUSH ECX
0062469E  8B 8E C2 02 00 00         MOV ECX,dword ptr [ESI + 0x2c2]
006246A4  52                        PUSH EDX
006246A5  50                        PUSH EAX
006246A6  51                        PUSH ECX
006246A7  E8 61 88 08 00            CALL 0x006acf0d
006246AC  8B C8                     MOV ECX,EAX
006246AE  83 C4 18                  ADD ESP,0x18
006246B1  85 C9                     TEST ECX,ECX
006246B3  C7 86 06 03 00 00 03 00 00 00  MOV dword ptr [ESI + 0x306],0x3
006246BD  0F 8E 9B 00 00 00         JLE 0x0062475e
006246C3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006246C6  8B 96 C2 02 00 00         MOV EDX,dword ptr [ESI + 0x2c2]
006246CC  2B C2                     SUB EAX,EDX
006246CE  89 8E F6 02 00 00         MOV dword ptr [ESI + 0x2f6],ECX
006246D4  69 C0 10 27 00 00         IMUL EAX,EAX,0x2710
006246DA  99                        CDQ
006246DB  F7 F9                     IDIV ECX
006246DD  8B 96 C6 02 00 00         MOV EDX,dword ptr [ESI + 0x2c6]
006246E3  66 89 5E 3C               MOV word ptr [ESI + 0x3c],BX
006246E7  66 89 7E 3E               MOV word ptr [ESI + 0x3e],DI
006246EB  89 86 FA 02 00 00         MOV dword ptr [ESI + 0x2fa],EAX
006246F1  8B C3                     MOV EAX,EBX
006246F3  2B C2                     SUB EAX,EDX
006246F5  69 C0 10 27 00 00         IMUL EAX,EAX,0x2710
006246FB  99                        CDQ
006246FC  F7 F9                     IDIV ECX
006246FE  8B 96 CA 02 00 00         MOV EDX,dword ptr [ESI + 0x2ca]
00624704  89 86 FE 02 00 00         MOV dword ptr [ESI + 0x2fe],EAX
0062470A  8B C7                     MOV EAX,EDI
0062470C  2B C2                     SUB EAX,EDX
0062470E  69 C0 10 27 00 00         IMUL EAX,EAX,0x2710
00624714  99                        CDQ
00624715  F7 F9                     IDIV ECX
00624717  66 8B 96 C2 02 00 00      MOV DX,word ptr [ESI + 0x2c2]
0062471E  66 8B 8E CA 02 00 00      MOV CX,word ptr [ESI + 0x2ca]
00624725  66 89 56 34               MOV word ptr [ESI + 0x34],DX
00624729  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
0062472D  66 89 4E 38               MOV word ptr [ESI + 0x38],CX
00624731  66 89 56 3A               MOV word ptr [ESI + 0x3a],DX
00624735  89 86 02 03 00 00         MOV dword ptr [ESI + 0x302],EAX
0062473B  66 8B 86 C6 02 00 00      MOV AX,word ptr [ESI + 0x2c6]
00624742  66 89 46 36               MOV word ptr [ESI + 0x36],AX
00624746  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0062474B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00624751  B8 01 00 00 00            MOV EAX,0x1
00624756  89 8E 0F 03 00 00         MOV dword ptr [ESI + 0x30f],ECX
0062475C  EB 05                     JMP 0x00624763
LAB_0062475e:
0062475E  B8 02 00 00 00            MOV EAX,0x2
LAB_00624763:
00624763  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00624769  5F                        POP EDI
0062476A  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
00624770  89 8E 0F 03 00 00         MOV dword ptr [ESI + 0x30f],ECX
00624776  5E                        POP ESI
00624777  5B                        POP EBX
00624778  5D                        POP EBP
00624779  C2 10 00                  RET 0x10
switchD_00624588::caseD_3:
0062477C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062477F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00624784  3B CB                     CMP ECX,EBX
00624786  7C 11                     JL 0x00624799
00624788  F7 E9                     IMUL ECX
0062478A  C1 FA 06                  SAR EDX,0x6
0062478D  8B C2                     MOV EAX,EDX
0062478F  C1 E8 1F                  SHR EAX,0x1f
00624792  03 D0                     ADD EDX,EAX
00624794  0F BF C2                  MOVSX EAX,DX
00624797  EB 10                     JMP 0x006247a9
LAB_00624799:
00624799  F7 E9                     IMUL ECX
0062479B  C1 FA 06                  SAR EDX,0x6
0062479E  8B C2                     MOV EAX,EDX
006247A0  C1 E8 1F                  SHR EAX,0x1f
006247A3  03 D0                     ADD EDX,EAX
006247A5  0F BF C2                  MOVSX EAX,DX
006247A8  48                        DEC EAX
LAB_006247a9:
006247A9  0F BF 7E 4B               MOVSX EDI,word ptr [ESI + 0x4b]
006247AD  3B C7                     CMP EAX,EDI
006247AF  74 79                     JZ 0x0062482a
006247B1  33 D2                     XOR EDX,EDX
006247B3  3B C7                     CMP EAX,EDI
006247B5  8B 86 CA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ca]
006247BB  66 89 4E 3E               MOV word ptr [ESI + 0x3e],CX
006247BF  0F 9D C2                  SETGE DL
006247C2  4A                        DEC EDX
006247C3  2B C1                     SUB EAX,ECX
006247C5  83 E2 FE                  AND EDX,0xfffffffe
006247C8  66 8B 8E C6 02 00 00      MOV CX,word ptr [ESI + 0x2c6]
006247CF  42                        INC EDX
006247D0  66 89 4E 36               MOV word ptr [ESI + 0x36],CX
006247D4  8B FA                     MOV EDI,EDX
006247D6  89 9E FA 02 00 00         MOV dword ptr [ESI + 0x2fa],EBX
006247DC  99                        CDQ
006247DD  33 C2                     XOR EAX,EDX
006247DF  89 9E FE 02 00 00         MOV dword ptr [ESI + 0x2fe],EBX
006247E5  2B C2                     SUB EAX,EDX
006247E7  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006247EB  89 86 F6 02 00 00         MOV dword ptr [ESI + 0x2f6],EAX
006247F1  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
006247F5  66 89 46 3A               MOV word ptr [ESI + 0x3a],AX
006247F9  66 8B 86 C2 02 00 00      MOV AX,word ptr [ESI + 0x2c2]
00624800  66 89 56 3C               MOV word ptr [ESI + 0x3c],DX
00624804  66 8B 96 CA 02 00 00      MOV DX,word ptr [ESI + 0x2ca]
0062480B  66 89 46 34               MOV word ptr [ESI + 0x34],AX
0062480F  66 89 56 38               MOV word ptr [ESI + 0x38],DX
00624813  89 BE 02 03 00 00         MOV dword ptr [ESI + 0x302],EDI
00624819  C7 86 06 03 00 00 03 00 00 00  MOV dword ptr [ESI + 0x306],0x3
00624823  B8 01 00 00 00            MOV EAX,0x1
00624828  EB 05                     JMP 0x0062482f
LAB_0062482a:
0062482A  B8 02 00 00 00            MOV EAX,0x2
LAB_0062482f:
0062482F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00624835  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0062483B  89 96 0F 03 00 00         MOV dword ptr [ESI + 0x30f],EDX
switchD_00624588::default:
00624841  5F                        POP EDI
00624842  5E                        POP ESI
00624843  5B                        POP EBX
00624844  5D                        POP EBP
00624845  C2 10 00                  RET 0x10
