FUN_0068e8c0:
0068E8C0  55                        PUSH EBP
0068E8C1  8B EC                     MOV EBP,ESP
0068E8C3  8B 91 BD 00 00 00         MOV EDX,dword ptr [ECX + 0xbd]
0068E8C9  53                        PUSH EBX
0068E8CA  56                        PUSH ESI
0068E8CB  33 C0                     XOR EAX,EAX
0068E8CD  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0068E8D0  57                        PUSH EDI
0068E8D1  85 F6                     TEST ESI,ESI
0068E8D3  7E 1F                     JLE 0x0068e8f4
0068E8D5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068E8D8  3B C6                     CMP EAX,ESI
LAB_0068e8da:
0068E8DA  73 0D                     JNC 0x0068e8e9
0068E8DC  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0068E8DF  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
0068E8E2  0F AF C8                  IMUL ECX,EAX
0068E8E5  03 CB                     ADD ECX,EBX
0068E8E7  EB 02                     JMP 0x0068e8eb
LAB_0068e8e9:
0068E8E9  33 C9                     XOR ECX,ECX
LAB_0068e8eb:
0068E8EB  39 39                     CMP dword ptr [ECX],EDI
0068E8ED  74 08                     JZ 0x0068e8f7
0068E8EF  40                        INC EAX
0068E8F0  3B C6                     CMP EAX,ESI
0068E8F2  7C E6                     JL 0x0068e8da
LAB_0068e8f4:
0068E8F4  83 C8 FF                  OR EAX,0xffffffff
LAB_0068e8f7:
0068E8F7  5F                        POP EDI
0068E8F8  5E                        POP ESI
0068E8F9  5B                        POP EBX
0068E8FA  5D                        POP EBP
0068E8FB  C2 04 00                  RET 0x4
