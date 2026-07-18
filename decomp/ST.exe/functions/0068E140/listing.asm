FUN_0068e140:
0068E140  55                        PUSH EBP
0068E141  8B EC                     MOV EBP,ESP
0068E143  8B 91 A5 00 00 00         MOV EDX,dword ptr [ECX + 0xa5]
0068E149  53                        PUSH EBX
0068E14A  56                        PUSH ESI
0068E14B  33 C0                     XOR EAX,EAX
0068E14D  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0068E150  57                        PUSH EDI
0068E151  85 F6                     TEST ESI,ESI
0068E153  7E 1F                     JLE 0x0068e174
0068E155  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068E158  3B C6                     CMP EAX,ESI
LAB_0068e15a:
0068E15A  73 0D                     JNC 0x0068e169
0068E15C  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0068E15F  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
0068E162  0F AF C8                  IMUL ECX,EAX
0068E165  03 CB                     ADD ECX,EBX
0068E167  EB 02                     JMP 0x0068e16b
LAB_0068e169:
0068E169  33 C9                     XOR ECX,ECX
LAB_0068e16b:
0068E16B  39 39                     CMP dword ptr [ECX],EDI
0068E16D  74 08                     JZ 0x0068e177
0068E16F  40                        INC EAX
0068E170  3B C6                     CMP EAX,ESI
0068E172  7C E6                     JL 0x0068e15a
LAB_0068e174:
0068E174  83 C8 FF                  OR EAX,0xffffffff
LAB_0068e177:
0068E177  5F                        POP EDI
0068E178  5E                        POP ESI
0068E179  5B                        POP EBX
0068E17A  5D                        POP EBP
0068E17B  C2 04 00                  RET 0x4
