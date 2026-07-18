FUN_006616b0:
006616B0  55                        PUSH EBP
006616B1  8B EC                     MOV EBP,ESP
006616B3  83 EC 10                  SUB ESP,0x10
006616B6  53                        PUSH EBX
006616B7  56                        PUSH ESI
006616B8  57                        PUSH EDI
006616B9  8B F9                     MOV EDI,ECX
006616BB  33 D2                     XOR EDX,EDX
006616BD  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006616C0  8B 87 0B 02 00 00         MOV EAX,dword ptr [EDI + 0x20b]
006616C6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006616C9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006616CC  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006616CF  85 C9                     TEST ECX,ECX
006616D1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006616D4  7E 76                     JLE 0x0066174c
LAB_006616d6:
006616D6  3B D1                     CMP EDX,ECX
006616D8  73 0D                     JNC 0x006616e7
006616DA  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
006616DD  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
006616E0  0F AF DA                  IMUL EBX,EDX
006616E3  03 DE                     ADD EBX,ESI
006616E5  EB 02                     JMP 0x006616e9
LAB_006616e7:
006616E7  33 DB                     XOR EBX,EBX
LAB_006616e9:
006616E9  8B 73 28                  MOV ESI,dword ptr [EBX + 0x28]
006616EC  85 F6                     TEST ESI,ESI
006616EE  75 4C                     JNZ 0x0066173c
006616F0  8B 73 24                  MOV ESI,dword ptr [EBX + 0x24]
006616F3  85 F6                     TEST ESI,ESI
006616F5  75 45                     JNZ 0x0066173c
006616F7  66 8B 4F 7B               MOV CX,word ptr [EDI + 0x7b]
006616FB  33 F6                     XOR ESI,ESI
006616FD  66 8B C1                  MOV AX,CX
00661700  66 48                     DEC AX
00661702  66 F7 D8                  NEG AX
00661705  1B C0                     SBB EAX,EAX
00661707  83 E0 02                  AND EAX,0x2
0066170A  40                        INC EAX
0066170B  85 C0                     TEST EAX,EAX
0066170D  7E 27                     JLE 0x00661736
0066170F  8B FB                     MOV EDI,EBX
LAB_00661711:
00661711  8B 17                     MOV EDX,dword ptr [EDI]
00661713  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
00661716  75 10                     JNZ 0x00661728
00661718  83 FA 01                  CMP EDX,0x1
0066171B  72 05                     JC 0x00661722
0066171D  83 FA 29                  CMP EDX,0x29
00661720  72 24                     JC 0x00661746
LAB_00661722:
00661722  66 83 F9 01               CMP CX,0x1
00661726  74 1E                     JZ 0x00661746
LAB_00661728:
00661728  46                        INC ESI
00661729  83 C7 04                  ADD EDI,0x4
0066172C  3B F0                     CMP ESI,EAX
0066172E  7C E1                     JL 0x00661711
00661730  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00661733  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_00661736:
00661736  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00661739  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0066173c:
0066173C  42                        INC EDX
0066173D  3B D1                     CMP EDX,ECX
0066173F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00661742  7D 08                     JGE 0x0066174c
00661744  EB 90                     JMP 0x006616d6
LAB_00661746:
00661746  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00661749  89 43 24                  MOV dword ptr [EBX + 0x24],EAX
LAB_0066174c:
0066174C  5F                        POP EDI
0066174D  5E                        POP ESI
0066174E  5B                        POP EBX
0066174F  8B E5                     MOV ESP,EBP
00661751  5D                        POP EBP
00661752  C2 08 00                  RET 0x8
