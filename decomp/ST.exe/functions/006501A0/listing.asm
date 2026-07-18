FUN_006501a0:
006501A0  55                        PUSH EBP
006501A1  8B EC                     MOV EBP,ESP
006501A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006501A6  33 C9                     XOR ECX,ECX
LAB_006501a8:
006501A8  80 BC 08 D0 00 00 00 08   CMP byte ptr [EAX + ECX*0x1 + 0xd0],0x8
006501B0  75 64                     JNZ 0x00650216
006501B2  41                        INC ECX
006501B3  83 F9 05                  CMP ECX,0x5
006501B6  7C F0                     JL 0x006501a8
006501B8  66 8B 08                  MOV CX,word ptr [EAX]
006501BB  B2 0A                     MOV DL,0xa
006501BD  66 83 F9 06               CMP CX,0x6
006501C1  7D 09                     JGE 0x006501cc
006501C3  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
006501CA  EB 08                     JMP 0x006501d4
LAB_006501cc:
006501CC  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
006501D2  75 42                     JNZ 0x00650216
LAB_006501d4:
006501D4  66 83 F9 07               CMP CX,0x7
006501D8  7D 09                     JGE 0x006501e3
006501DA  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
006501E1  EB 08                     JMP 0x006501eb
LAB_006501e3:
006501E3  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
006501E9  75 2B                     JNZ 0x00650216
LAB_006501eb:
006501EB  66 83 F9 08               CMP CX,0x8
006501EF  7D 09                     JGE 0x006501fa
006501F1  C7 40 24 01 00 00 00      MOV dword ptr [EAX + 0x24],0x1
006501F8  EB 09                     JMP 0x00650203
LAB_006501fa:
006501FA  80 B8 D7 00 00 00 08      CMP byte ptr [EAX + 0xd7],0x8
00650201  75 13                     JNZ 0x00650216
LAB_00650203:
00650203  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00650206  85 C0                     TEST EAX,EAX
00650208  7C 0C                     JL 0x00650216
0065020A  83 F8 08                  CMP EAX,0x8
0065020D  7D 07                     JGE 0x00650216
0065020F  B8 01 00 00 00            MOV EAX,0x1
00650214  5D                        POP EBP
00650215  C3                        RET
LAB_00650216:
00650216  33 C0                     XOR EAX,EAX
00650218  5D                        POP EBP
00650219  C3                        RET
