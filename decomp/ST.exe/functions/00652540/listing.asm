FUN_00652540:
00652540  55                        PUSH EBP
00652541  8B EC                     MOV EBP,ESP
00652543  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00652546  33 C9                     XOR ECX,ECX
00652548  BA 08 00 00 00            MOV EDX,0x8
LAB_0065254d:
0065254D  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00652554  75 2C                     JNZ 0x00652582
00652556  41                        INC ECX
00652557  83 F9 06                  CMP ECX,0x6
0065255A  7C F1                     JL 0x0065254d
0065255C  66 8B 08                  MOV CX,word ptr [EAX]
0065255F  66 83 F9 07               CMP CX,0x7
00652563  7D 15                     JGE 0x0065257a
00652565  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
LAB_0065256c:
0065256C  66 3B CA                  CMP CX,DX
0065256F  7D 15                     JGE 0x00652586
00652571  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
00652578  EB 18                     JMP 0x00652592
LAB_0065257a:
0065257A  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00652580  74 EA                     JZ 0x0065256c
LAB_00652582:
00652582  33 C0                     XOR EAX,EAX
00652584  5D                        POP EBP
00652585  C3                        RET
LAB_00652586:
00652586  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
0065258C  74 04                     JZ 0x00652592
0065258E  33 C0                     XOR EAX,EAX
00652590  5D                        POP EBP
00652591  C3                        RET
LAB_00652592:
00652592  66 83 F9 09               CMP CX,0x9
00652596  7D 15                     JGE 0x006525ad
00652598  C7 40 28 00 00 00 00      MOV dword ptr [EAX + 0x28],0x0
LAB_0065259f:
0065259F  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006525A2  33 C9                     XOR ECX,ECX
006525A4  85 D2                     TEST EDX,EDX
006525A6  0F 9D C1                  SETGE CL
006525A9  8B C1                     MOV EAX,ECX
006525AB  5D                        POP EBP
006525AC  C3                        RET
LAB_006525ad:
006525AD  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
006525B3  74 EA                     JZ 0x0065259f
006525B5  33 C0                     XOR EAX,EAX
006525B7  5D                        POP EBP
006525B8  C3                        RET
