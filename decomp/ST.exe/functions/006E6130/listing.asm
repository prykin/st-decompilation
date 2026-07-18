FUN_006e6130:
006E6130  55                        PUSH EBP
006E6131  8B EC                     MOV EBP,ESP
006E6133  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E6136  8B 01                     MOV EAX,dword ptr [ECX]
006E6138  52                        PUSH EDX
006E6139  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E613C  6A 00                     PUSH 0x0
006E613E  6A 00                     PUSH 0x0
006E6140  52                        PUSH EDX
006E6141  FF 50 0C                  CALL dword ptr [EAX + 0xc]
006E6144  5D                        POP EBP
006E6145  C2 08 00                  RET 0x8
