FUN_0067a240:
0067A240  55                        PUSH EBP
0067A241  8B EC                     MOV EBP,ESP
0067A243  53                        PUSH EBX
0067A244  56                        PUSH ESI
0067A245  57                        PUSH EDI
0067A246  8B F9                     MOV EDI,ECX
0067A248  8B 8F 95 06 00 00         MOV ECX,dword ptr [EDI + 0x695]
0067A24E  85 C9                     TEST ECX,ECX
0067A250  74 54                     JZ 0x0067a2a6
0067A252  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067A255  33 F6                     XOR ESI,ESI
0067A257  85 C0                     TEST EAX,EAX
0067A259  7E 4B                     JLE 0x0067a2a6
0067A25B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0067a25e:
0067A25E  85 C9                     TEST ECX,ECX
0067A260  74 36                     JZ 0x0067a298
0067A262  85 F6                     TEST ESI,ESI
0067A264  7C 32                     JL 0x0067a298
0067A266  3B F0                     CMP ESI,EAX
0067A268  7D 2E                     JGE 0x0067a298
0067A26A  73 0D                     JNC 0x0067a279
0067A26C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067A26F  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067A272  0F AF C6                  IMUL EAX,ESI
0067A275  03 C2                     ADD EAX,EDX
0067A277  EB 02                     JMP 0x0067a27b
LAB_0067a279:
0067A279  33 C0                     XOR EAX,EAX
LAB_0067a27b:
0067A27B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0067A27E  85 C9                     TEST ECX,ECX
0067A280  74 16                     JZ 0x0067a298
0067A282  8B 00                     MOV EAX,dword ptr [EAX]
0067A284  85 C0                     TEST EAX,EAX
0067A286  74 10                     JZ 0x0067a298
0067A288  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067A28B  53                        PUSH EBX
0067A28C  51                        PUSH ECX
0067A28D  8B C8                     MOV ECX,EAX
0067A28F  E8 F3 9F D8 FF            CALL 0x00404287
0067A294  85 C0                     TEST EAX,EAX
0067A296  75 0E                     JNZ 0x0067a2a6
LAB_0067a298:
0067A298  8B 8F 95 06 00 00         MOV ECX,dword ptr [EDI + 0x695]
0067A29E  46                        INC ESI
0067A29F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067A2A2  3B F0                     CMP ESI,EAX
0067A2A4  7C B8                     JL 0x0067a25e
LAB_0067a2a6:
0067A2A6  5F                        POP EDI
0067A2A7  5E                        POP ESI
0067A2A8  5B                        POP EBX
0067A2A9  5D                        POP EBP
0067A2AA  C2 08 00                  RET 0x8
