FUN_006e4fa0:
006E4FA0  55                        PUSH EBP
006E4FA1  8B EC                     MOV EBP,ESP
006E4FA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E4FA6  50                        PUSH EAX
006E4FA7  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
006E4FAD  5D                        POP EBP
006E4FAE  C2 04 00                  RET 0x4
