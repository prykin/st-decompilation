FUN_00652670:
00652670  55                        PUSH EBP
00652671  8B EC                     MOV EBP,ESP
00652673  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00652676  33 C0                     XOR EAX,EAX
00652678  BA 08 00 00 00            MOV EDX,0x8
LAB_0065267d:
0065267D  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00652684  75 36                     JNZ 0x006526bc
00652686  40                        INC EAX
00652687  83 F8 06                  CMP EAX,0x6
0065268A  7C F1                     JL 0x0065267d
0065268C  66 8B 01                  MOV AX,word ptr [ECX]
0065268F  66 3D 07 00               CMP AX,0x7
00652693  7D 1F                     JGE 0x006526b4
00652695  C7 41 20 00 00 00 00      MOV dword ptr [ECX + 0x20],0x0
LAB_0065269c:
0065269C  66 3B C2                  CMP AX,DX
0065269F  7D 1F                     JGE 0x006526c0
006526A1  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006526A4  33 C0                     XOR EAX,EAX
006526A6  85 D2                     TEST EDX,EDX
006526A8  C7 41 24 00 00 00 00      MOV dword ptr [ECX + 0x24],0x0
006526AF  0F 9D C0                  SETGE AL
006526B2  5D                        POP EBP
006526B3  C3                        RET
LAB_006526b4:
006526B4  38 91 D6 00 00 00         CMP byte ptr [ECX + 0xd6],DL
006526BA  74 E0                     JZ 0x0065269c
LAB_006526bc:
006526BC  33 C0                     XOR EAX,EAX
006526BE  5D                        POP EBP
006526BF  C3                        RET
LAB_006526c0:
006526C0  38 91 D7 00 00 00         CMP byte ptr [ECX + 0xd7],DL
006526C6  74 04                     JZ 0x006526cc
006526C8  33 C0                     XOR EAX,EAX
006526CA  5D                        POP EBP
006526CB  C3                        RET
LAB_006526cc:
006526CC  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006526CF  33 C0                     XOR EAX,EAX
006526D1  85 D2                     TEST EDX,EDX
006526D3  0F 9D C0                  SETGE AL
006526D6  5D                        POP EBP
006526D7  C3                        RET
