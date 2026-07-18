FUN_006e5690:
006E5690  55                        PUSH EBP
006E5691  8B EC                     MOV EBP,ESP
006E5693  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E5696  8B 01                     MOV EAX,dword ptr [ECX]
006E5698  52                        PUSH EDX
006E5699  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E569C  6A 00                     PUSH 0x0
006E569E  6A 00                     PUSH 0x0
006E56A0  6A 00                     PUSH 0x0
006E56A2  52                        PUSH EDX
006E56A3  FF 50 08                  CALL dword ptr [EAX + 0x8]
006E56A6  5D                        POP EBP
006E56A7  C2 08 00                  RET 0x8
