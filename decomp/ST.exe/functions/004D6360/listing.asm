FUN_004d6360:
004D6360  55                        PUSH EBP
004D6361  8B EC                     MOV EBP,ESP
004D6363  83 EC 18                  SUB ESP,0x18
004D6366  53                        PUSH EBX
004D6367  56                        PUSH ESI
004D6368  57                        PUSH EDI
004D6369  8B F9                     MOV EDI,ECX
004D636B  8B 77 2C                  MOV ESI,dword ptr [EDI + 0x2c]
004D636E  8B 8F 65 02 00 00         MOV ECX,dword ptr [EDI + 0x265]
004D6374  8B 87 61 02 00 00         MOV EAX,dword ptr [EDI + 0x261]
004D637A  8B 17                     MOV EDX,dword ptr [EDI]
004D637C  8B 9F 5D 02 00 00         MOV EBX,dword ptr [EDI + 0x25d]
004D6382  4E                        DEC ESI
004D6383  F7 DE                     NEG ESI
004D6385  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004D6388  8B CF                     MOV ECX,EDI
004D638A  1B F6                     SBB ESI,ESI
004D638C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004D638F  83 C6 02                  ADD ESI,0x2
004D6392  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004D6398  85 C0                     TEST EAX,EAX
004D639A  0F 84 65 01 00 00         JZ 0x004d6505
004D63A0  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
004D63A4  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
004D63A7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D63AA  8D 04 C3                  LEA EAX,[EBX + EAX*0x8]
004D63AD  3B D0                     CMP EDX,EAX
004D63AF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004D63B2  0F 8C 4D 01 00 00         JL 0x004d6505
004D63B8  8D 04 1E                  LEA EAX,[ESI + EBX*0x1]
004D63BB  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D63BE  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004D63C1  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004D63C4  3B D0                     CMP EDX,EAX
004D63C6  0F 8D 39 01 00 00         JGE 0x004d6505
004D63CC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004D63CF  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
004D63D3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D63D6  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004D63D9  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004D63DC  3B D1                     CMP EDX,ECX
004D63DE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004D63E1  0F 8C 1E 01 00 00         JL 0x004d6505
004D63E7  03 C6                     ADD EAX,ESI
004D63E9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D63EC  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004D63EF  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004D63F2  3B D0                     CMP EDX,EAX
004D63F4  0F 8D 0B 01 00 00         JGE 0x004d6505
004D63FA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D63FD  0F BF 5D 10               MOVSX EBX,word ptr [EBP + 0x10]
004D6401  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D6404  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D6407  C1 E0 03                  SHL EAX,0x3
004D640A  3B D8                     CMP EBX,EAX
004D640C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004D640F  0F 8C F0 00 00 00         JL 0x004d6505
004D6415  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D6418  8D 44 80 05               LEA EAX,[EAX + EAX*0x4 + 0x5]
004D641C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D641F  C1 E1 03                  SHL ECX,0x3
004D6422  3B D9                     CMP EBX,ECX
004D6424  0F 8D DB 00 00 00         JGE 0x004d6505
004D642A  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004D642D  8B 8F 60 03 00 00         MOV ECX,dword ptr [EDI + 0x360]
004D6433  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004D643A  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
004D6441  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004D6444  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004D6447  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004D644A  99                        CDQ
004D644B  2B C2                     SUB EAX,EDX
004D644D  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
004D6451  D1 F8                     SAR EAX,0x1
004D6453  2B F2                     SUB ESI,EDX
004D6455  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004D6458  03 F0                     ADD ESI,EAX
004D645A  8B F8                     MOV EDI,EAX
004D645C  03 F2                     ADD ESI,EDX
004D645E  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
004D6462  2B FA                     SUB EDI,EDX
004D6464  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004D6467  03 FA                     ADD EDI,EDX
004D6469  8B 11                     MOV EDX,dword ptr [ECX]
004D646B  03 FA                     ADD EDI,EDX
004D646D  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
004D6470  2B D3                     SUB EDX,EBX
004D6472  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004D6475  03 D3                     ADD EDX,EBX
004D6477  8B DF                     MOV EBX,EDI
004D6479  0F AF DF                  IMUL EBX,EDI
004D647C  0F AF D2                  IMUL EDX,EDX
004D647F  8B FE                     MOV EDI,ESI
004D6481  03 D3                     ADD EDX,EBX
004D6483  0F AF FE                  IMUL EDI,ESI
004D6486  03 D7                     ADD EDX,EDI
004D6488  8D 79 0C                  LEA EDI,[ECX + 0xc]
LAB_004d648b:
004D648B  8B 37                     MOV ESI,dword ptr [EDI]
004D648D  85 F6                     TEST ESI,ESI
004D648F  75 0E                     JNZ 0x004d649f
004D6491  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
004D6494  85 C9                     TEST ECX,ECX
004D6496  75 07                     JNZ 0x004d649f
004D6498  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
004D649B  85 C9                     TEST ECX,ECX
004D649D  74 5A                     JZ 0x004d64f9
LAB_004d649f:
004D649F  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
004D64A3  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
004D64A6  2B D9                     SUB EBX,ECX
004D64A8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004D64AB  03 D8                     ADD EBX,EAX
004D64AD  03 CB                     ADD ECX,EBX
004D64AF  0F BF 5D 08               MOVSX EBX,word ptr [EBP + 0x8]
004D64B3  0F AF C9                  IMUL ECX,ECX
004D64B6  2B F3                     SUB ESI,EBX
004D64B8  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
004D64BB  03 F0                     ADD ESI,EAX
004D64BD  03 F3                     ADD ESI,EBX
004D64BF  8B 5F 08                  MOV EBX,dword ptr [EDI + 0x8]
004D64C2  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004D64C5  0F BF 75 10               MOVSX ESI,word ptr [EBP + 0x10]
004D64C9  2B DE                     SUB EBX,ESI
004D64CB  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004D64CE  03 F3                     ADD ESI,EBX
004D64D0  8B DE                     MOV EBX,ESI
004D64D2  0F AF DE                  IMUL EBX,ESI
004D64D5  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004D64D8  03 CB                     ADD ECX,EBX
004D64DA  8B DE                     MOV EBX,ESI
004D64DC  0F AF DE                  IMUL EBX,ESI
004D64DF  03 CB                     ADD ECX,EBX
004D64E1  3B CA                     CMP ECX,EDX
004D64E3  7D 08                     JGE 0x004d64ed
004D64E5  8B D1                     MOV EDX,ECX
004D64E7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D64EA  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_004d64ed:
004D64ED  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004D64F0  46                        INC ESI
004D64F1  83 C7 0C                  ADD EDI,0xc
004D64F4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004D64F7  EB 92                     JMP 0x004d648b
LAB_004d64f9:
004D64F9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004D64FC  5F                        POP EDI
004D64FD  5E                        POP ESI
004D64FE  5B                        POP EBX
004D64FF  8B E5                     MOV ESP,EBP
004D6501  5D                        POP EBP
004D6502  C2 18 00                  RET 0x18
LAB_004d6505:
004D6505  5F                        POP EDI
004D6506  5E                        POP ESI
004D6507  83 C8 FF                  OR EAX,0xffffffff
004D650A  5B                        POP EBX
004D650B  8B E5                     MOV ESP,EBP
004D650D  5D                        POP EBP
004D650E  C2 18 00                  RET 0x18
