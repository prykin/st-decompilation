FUN_0068e220:
0068E220  55                        PUSH EBP
0068E221  8B EC                     MOV EBP,ESP
0068E223  8B 91 A5 00 00 00         MOV EDX,dword ptr [ECX + 0xa5]
0068E229  53                        PUSH EBX
0068E22A  56                        PUSH ESI
0068E22B  33 C0                     XOR EAX,EAX
0068E22D  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0068E230  57                        PUSH EDI
0068E231  85 F6                     TEST ESI,ESI
0068E233  7E 29                     JLE 0x0068e25e
0068E235  66 8B 7D 08               MOV DI,word ptr [EBP + 0x8]
0068E239  3B C6                     CMP EAX,ESI
LAB_0068e23b:
0068E23B  73 0D                     JNC 0x0068e24a
0068E23D  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0068E240  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
0068E243  0F AF C8                  IMUL ECX,EAX
0068E246  03 CB                     ADD ECX,EBX
0068E248  EB 02                     JMP 0x0068e24c
LAB_0068e24a:
0068E24A  33 C9                     XOR ECX,ECX
LAB_0068e24c:
0068E24C  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0068E24F  85 C9                     TEST ECX,ECX
0068E251  74 06                     JZ 0x0068e259
0068E253  66 39 79 7D               CMP word ptr [ECX + 0x7d],DI
0068E257  74 08                     JZ 0x0068e261
LAB_0068e259:
0068E259  40                        INC EAX
0068E25A  3B C6                     CMP EAX,ESI
0068E25C  7C DD                     JL 0x0068e23b
LAB_0068e25e:
0068E25E  83 C8 FF                  OR EAX,0xffffffff
LAB_0068e261:
0068E261  5F                        POP EDI
0068E262  5E                        POP ESI
0068E263  5B                        POP EBX
0068E264  5D                        POP EBP
0068E265  C2 04 00                  RET 0x4
