FUN_006203f0:
006203F0  55                        PUSH EBP
006203F1  8B EC                     MOV EBP,ESP
006203F3  83 EC 0C                  SUB ESP,0xc
006203F6  8B 81 D1 00 00 00         MOV EAX,dword ptr [ECX + 0xd1]
006203FC  53                        PUSH EBX
006203FD  83 CB FF                  OR EBX,0xffffffff
00620400  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620403  85 C0                     TEST EAX,EAX
00620405  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620408  0F 84 BB 00 00 00         JZ 0x006204c9
0062040E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00620411  48                        DEC EAX
00620412  0F 88 B1 00 00 00         JS 0x006204c9
00620418  8B D0                     MOV EDX,EAX
0062041A  56                        PUSH ESI
0062041B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062041E  57                        PUSH EDI
0062041F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00620422  EB 03                     JMP 0x00620427
LAB_00620424:
00620424  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00620427:
00620427  8B 89 D1 00 00 00         MOV ECX,dword ptr [ECX + 0xd1]
0062042D  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00620430  73 7F                     JNC 0x006204b1
00620432  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00620435  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00620438  0F AF C2                  IMUL EAX,EDX
0062043B  03 C7                     ADD EAX,EDI
0062043D  85 C0                     TEST EAX,EAX
0062043F  74 70                     JZ 0x006204b1
00620441  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00620444  8D 7A FD                  LEA EDI,[EDX + -0x3]
00620447  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
0062044A  7C 4D                     JL 0x00620499
0062044C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0062044F  83 C2 03                  ADD EDX,0x3
00620452  3B FA                     CMP EDI,EDX
00620454  7F 43                     JG 0x00620499
00620456  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00620459  8D 5A FD                  LEA EBX,[EDX + -0x3]
0062045C  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
0062045F  7C 35                     JL 0x00620496
00620461  8D 5A 03                  LEA EBX,[EDX + 0x3]
00620464  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00620467  3B D3                     CMP EDX,EBX
00620469  7F 2B                     JG 0x00620496
0062046B  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
0062046E  8B 38                     MOV EDI,dword ptr [EAX]
00620470  8B CE                     MOV ECX,ESI
00620472  BB 01 00 00 00            MOV EBX,0x1
00620477  2B CF                     SUB ECX,EDI
00620479  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0062047C  81 F9 94 11 00 00         CMP ECX,0x1194
00620482  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00620485  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
00620488  76 27                     JBE 0x006204b1
0062048A  BB 02 00 00 00            MOV EBX,0x2
0062048F  89 30                     MOV dword ptr [EAX],ESI
00620491  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620494  EB 1B                     JMP 0x006204b1
LAB_00620496:
00620496  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00620499:
00620499  8B 38                     MOV EDI,dword ptr [EAX]
0062049B  8B D6                     MOV EDX,ESI
0062049D  2B D7                     SUB EDX,EDI
0062049F  81 FA 94 11 00 00         CMP EDX,0x1194
006204A5  76 0A                     JBE 0x006204b1
006204A7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006204AA  50                        PUSH EAX
006204AB  51                        PUSH ECX
006204AC  E8 BF 07 09 00            CALL 0x006b0c70
LAB_006204b1:
006204B1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006204B4  4A                        DEC EDX
006204B5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006204B8  0F 89 66 FF FF FF         JNS 0x00620424
006204BE  5F                        POP EDI
006204BF  8B C3                     MOV EAX,EBX
006204C1  5E                        POP ESI
006204C2  5B                        POP EBX
006204C3  8B E5                     MOV ESP,EBP
006204C5  5D                        POP EBP
006204C6  C2 10 00                  RET 0x10
LAB_006204c9:
006204C9  8B C3                     MOV EAX,EBX
006204CB  5B                        POP EBX
006204CC  8B E5                     MOV ESP,EBP
006204CE  5D                        POP EBP
006204CF  C2 10 00                  RET 0x10
