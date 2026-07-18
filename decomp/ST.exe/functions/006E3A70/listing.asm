FUN_006e3a70:
006E3A70  55                        PUSH EBP
006E3A71  8B EC                     MOV EBP,ESP
006E3A73  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E3A76  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E3A79  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006E3A7C  50                        PUSH EAX
006E3A7D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E3A80  52                        PUSH EDX
006E3A81  50                        PUSH EAX
006E3A82  51                        PUSH ECX
006E3A83  E8 C8 F9 FF FF            CALL 0x006e3450
006E3A88  83 C4 10                  ADD ESP,0x10
006E3A8B  5D                        POP EBP
006E3A8C  C2 0C 00                  RET 0xc
