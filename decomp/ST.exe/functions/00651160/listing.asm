FUN_00651160:
00651160  55                        PUSH EBP
00651161  8B EC                     MOV EBP,ESP
00651163  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651166  33 C0                     XOR EAX,EAX
00651168  B2 08                     MOV DL,0x8
LAB_0065116a:
0065116A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651171  75 12                     JNZ 0x00651185
00651173  40                        INC EAX
00651174  83 F8 03                  CMP EAX,0x3
00651177  7C F1                     JL 0x0065116a
00651179  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0065117C  33 C0                     XOR EAX,EAX
0065117E  85 D2                     TEST EDX,EDX
00651180  0F 9D C0                  SETGE AL
00651183  5D                        POP EBP
00651184  C3                        RET
LAB_00651185:
00651185  33 C0                     XOR EAX,EAX
00651187  5D                        POP EBP
00651188  C3                        RET
