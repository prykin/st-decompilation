FUN_006e45a0:
006E45A0  55                        PUSH EBP
006E45A1  8B EC                     MOV EBP,ESP
006E45A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E45A6  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006E45A9  50                        PUSH EAX
006E45AA  52                        PUSH EDX
006E45AB  E8 90 FF FF FF            CALL 0x006e4540
006E45B0  5D                        POP EBP
006E45B1  C2 04 00                  RET 0x4
