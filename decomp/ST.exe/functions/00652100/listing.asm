FUN_00652100:
00652100  55                        PUSH EBP
00652101  8B EC                     MOV EBP,ESP
00652103  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00652106  33 C9                     XOR ECX,ECX
00652108  B2 08                     MOV DL,0x8
LAB_0065210a:
0065210A  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00652111  75 2D                     JNZ 0x00652140
00652113  41                        INC ECX
00652114  83 F9 04                  CMP ECX,0x4
00652117  7C F1                     JL 0x0065210a
00652119  66 8B 08                  MOV CX,word ptr [EAX]
0065211C  66 83 F9 05               CMP CX,0x5
00652120  7D 16                     JGE 0x00652138
00652122  C7 40 18 FF FF FF FF      MOV dword ptr [EAX + 0x18],0xffffffff
LAB_00652129:
00652129  66 83 F9 06               CMP CX,0x6
0065212D  7D 15                     JGE 0x00652144
0065212F  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
00652136  EB 18                     JMP 0x00652150
LAB_00652138:
00652138  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
0065213E  74 E9                     JZ 0x00652129
LAB_00652140:
00652140  33 C0                     XOR EAX,EAX
00652142  5D                        POP EBP
00652143  C3                        RET
LAB_00652144:
00652144  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
0065214A  74 04                     JZ 0x00652150
0065214C  33 C0                     XOR EAX,EAX
0065214E  5D                        POP EBP
0065214F  C3                        RET
LAB_00652150:
00652150  66 83 F9 07               CMP CX,0x7
00652154  7D 12                     JGE 0x00652168
00652156  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
LAB_0065215d:
0065215D  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00652160  85 C9                     TEST ECX,ECX
00652162  7D 10                     JGE 0x00652174
00652164  33 C0                     XOR EAX,EAX
00652166  5D                        POP EBP
00652167  C3                        RET
LAB_00652168:
00652168  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
0065216E  74 ED                     JZ 0x0065215d
00652170  33 C0                     XOR EAX,EAX
00652172  5D                        POP EBP
00652173  C3                        RET
LAB_00652174:
00652174  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00652177  33 C9                     XOR ECX,ECX
00652179  85 D2                     TEST EDX,EDX
0065217B  0F 9D C1                  SETGE CL
0065217E  8B C1                     MOV EAX,ECX
00652180  5D                        POP EBP
00652181  C3                        RET
