FUN_006e4620:
006E4620  55                        PUSH EBP
006E4621  8B EC                     MOV EBP,ESP
006E4623  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E4626  56                        PUSH ESI
006E4627  8B F1                     MOV ESI,ECX
006E4629  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006E462C  51                        PUSH ECX
006E462D  8B CE                     MOV ECX,ESI
006E462F  E8 6C FF FF FF            CALL 0x006e45a0
006E4634  50                        PUSH EAX
006E4635  8B CE                     MOV ECX,ESI
006E4637  E8 84 FF FF FF            CALL 0x006e45c0
006E463C  33 C0                     XOR EAX,EAX
006E463E  5E                        POP ESI
006E463F  5D                        POP EBP
006E4640  C2 04 00                  RET 0x4
