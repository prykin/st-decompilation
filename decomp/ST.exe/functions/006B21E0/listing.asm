FUN_006b21e0:
006B21E0  55                        PUSH EBP
006B21E1  8B EC                     MOV EBP,ESP
006B21E3  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006B21E6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B21E9  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B21EC  6A 01                     PUSH 0x1
006B21EE  50                        PUSH EAX
006B21EF  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B21F2  51                        PUSH ECX
006B21F3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B21F6  52                        PUSH EDX
006B21F7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B21FA  50                        PUSH EAX
006B21FB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B21FE  51                        PUSH ECX
006B21FF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B2202  52                        PUSH EDX
006B2203  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B2206  50                        PUSH EAX
006B2207  51                        PUSH ECX
006B2208  52                        PUSH EDX
006B2209  E8 42 FB FF FF            CALL 0x006b1d50
006B220E  5D                        POP EBP
006B220F  C2 24 00                  RET 0x24
