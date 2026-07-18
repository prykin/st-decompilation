FUN_006a4910:
006A4910  55                        PUSH EBP
006A4911  8B EC                     MOV EBP,ESP
006A4913  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A4916  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A4919  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A491C  6A 00                     PUSH 0x0
006A491E  50                        PUSH EAX
006A491F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A4922  51                        PUSH ECX
006A4923  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A4926  52                        PUSH EDX
006A4927  50                        PUSH EAX
006A4928  51                        PUSH ECX
006A4929  E8 B2 F8 FF FF            CALL 0x006a41e0
006A492E  83 C4 18                  ADD ESP,0x18
006A4931  5D                        POP EBP
006A4932  C3                        RET
