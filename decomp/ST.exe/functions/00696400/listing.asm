CGenerate::sub_00696400:
00696400  55                        PUSH EBP
00696401  8B EC                     MOV EBP,ESP
00696403  83 EC 10                  SUB ESP,0x10
00696406  56                        PUSH ESI
00696407  8B B1 33 58 00 00         MOV ESI,dword ptr [ECX + 0x5833]
0069640D  85 F6                     TEST ESI,ESI
0069640F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00696416  0F 84 9A 00 00 00         JZ 0x006964b6
0069641C  53                        PUSH EBX
0069641D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00696420  8B C3                     MOV EAX,EBX
00696422  57                        PUSH EDI
00696423  99                        CDQ
00696424  F7 FE                     IDIV ESI
00696426  8B F8                     MOV EDI,EAX
00696428  8B C3                     MOV EAX,EBX
0069642A  99                        CDQ
0069642B  F7 FE                     IDIV ESI
0069642D  8B DA                     MOV EBX,EDX
0069642F  8D 57 FF                  LEA EDX,[EDI + -0x1]
00696432  83 C7 02                  ADD EDI,0x2
00696435  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00696438  3B D7                     CMP EDX,EDI
0069643A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0069643D  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00696440  7D 68                     JGE 0x006964aa
00696442  EB 03                     JMP 0x00696447
LAB_00696444:
00696444  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_00696447:
00696447  85 D2                     TEST EDX,EDX
00696449  7C 57                     JL 0x006964a2
0069644B  3B 91 37 58 00 00         CMP EDX,dword ptr [ECX + 0x5837]
00696451  7D 4F                     JGE 0x006964a2
00696453  8B F2                     MOV ESI,EDX
00696455  8D 43 FF                  LEA EAX,[EBX + -0x1]
00696458  0F AF B1 33 58 00 00      IMUL ESI,dword ptr [ECX + 0x5833]
0069645F  83 C3 02                  ADD EBX,0x2
00696462  3B C3                     CMP EAX,EBX
00696464  7D 3C                     JGE 0x006964a2
00696466  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00696469  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0069646C  03 F0                     ADD ESI,EAX
0069646E  8D 3C 97                  LEA EDI,[EDI + EDX*0x4]
LAB_00696471:
00696471  85 C0                     TEST EAX,EAX
00696473  7C 21                     JL 0x00696496
00696475  3B 81 33 58 00 00         CMP EAX,dword ptr [ECX + 0x5833]
0069647B  7D 19                     JGE 0x00696496
0069647D  3B 75 08                  CMP ESI,dword ptr [EBP + 0x8]
00696480  74 14                     JZ 0x00696496
00696482  3B B1 2F 58 00 00         CMP ESI,dword ptr [ECX + 0x582f]
00696488  7D 0C                     JGE 0x00696496
0069648A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0069648D  89 37                     MOV dword ptr [EDI],ESI
0069648F  42                        INC EDX
00696490  83 C7 04                  ADD EDI,0x4
00696493  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00696496:
00696496  40                        INC EAX
00696497  46                        INC ESI
00696498  3B C3                     CMP EAX,EBX
0069649A  7C D5                     JL 0x00696471
0069649C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0069649F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006964a2:
006964A2  42                        INC EDX
006964A3  3B D7                     CMP EDX,EDI
006964A5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006964A8  7C 9A                     JL 0x00696444
LAB_006964aa:
006964AA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006964AD  5F                        POP EDI
006964AE  5B                        POP EBX
006964AF  5E                        POP ESI
006964B0  8B E5                     MOV ESP,EBP
006964B2  5D                        POP EBP
006964B3  C2 08 00                  RET 0x8
LAB_006964b6:
006964B6  33 C0                     XOR EAX,EAX
006964B8  5E                        POP ESI
006964B9  8B E5                     MOV ESP,EBP
006964BB  5D                        POP EBP
006964BC  C2 08 00                  RET 0x8
