FUN_006301b0:
006301B0  55                        PUSH EBP
006301B1  8B EC                     MOV EBP,ESP
006301B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006301B6  50                        PUSH EAX
006301B7  E8 1F 3D DD FF            CALL 0x00403edb
006301BC  5D                        POP EBP
006301BD  C2 04 00                  RET 0x4
