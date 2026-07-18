FUN_0062e6b0:
0062E6B0  55                        PUSH EBP
0062E6B1  8B EC                     MOV EBP,ESP
0062E6B3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062E6B6  53                        PUSH EBX
0062E6B7  56                        PUSH ESI
0062E6B8  57                        PUSH EDI
0062E6B9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062E6BC  50                        PUSH EAX
0062E6BD  8B F1                     MOV ESI,ECX
0062E6BF  57                        PUSH EDI
0062E6C0  33 DB                     XOR EBX,EBX
0062E6C2  E8 E7 61 DD FF            CALL 0x004048ae
0062E6C7  85 C0                     TEST EAX,EAX
0062E6C9  7C 3E                     JL 0x0062e709
0062E6CB  8B 54 BE 50               MOV EDX,dword ptr [ESI + EDI*0x4 + 0x50]
0062E6CF  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
0062E6D2  73 0B                     JNC 0x0062e6df
0062E6D4  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0062E6D7  0F AF C8                  IMUL ECX,EAX
0062E6DA  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
0062E6DD  EB 02                     JMP 0x0062e6e1
LAB_0062e6df:
0062E6DF  33 C9                     XOR ECX,ECX
LAB_0062e6e1:
0062E6E1  0F BF 41 0A               MOVSX EAX,word ptr [ECX + 0xa]
0062E6E5  8B 11                     MOV EDX,dword ptr [ECX]
0062E6E7  6A 01                     PUSH 0x1
0062E6E9  52                        PUSH EDX
0062E6EA  50                        PUSH EAX
0062E6EB  0F BF 51 08               MOVSX EDX,word ptr [ECX + 0x8]
0062E6EF  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
0062E6F3  52                        PUSH EDX
0062E6F4  50                        PUSH EAX
0062E6F5  57                        PUSH EDI
0062E6F6  8B CE                     MOV ECX,ESI
0062E6F8  E8 5F 54 DD FF            CALL 0x00403b5c
0062E6FD  5F                        POP EDI
0062E6FE  5E                        POP ESI
0062E6FF  B8 01 00 00 00            MOV EAX,0x1
0062E704  5B                        POP EBX
0062E705  5D                        POP EBP
0062E706  C2 08 00                  RET 0x8
LAB_0062e709:
0062E709  5F                        POP EDI
0062E70A  8B C3                     MOV EAX,EBX
0062E70C  5E                        POP ESI
0062E70D  5B                        POP EBX
0062E70E  5D                        POP EBP
0062E70F  C2 08 00                  RET 0x8
