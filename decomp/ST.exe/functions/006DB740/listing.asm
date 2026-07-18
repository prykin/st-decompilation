FUN_006db740:
006DB740  55                        PUSH EBP
006DB741  8B EC                     MOV EBP,ESP
006DB743  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DB746  83 C0 5A                  ADD EAX,0x5a
006DB749  50                        PUSH EAX
006DB74A  E8 A1 FF FF FF            CALL 0x006db6f0
006DB74F  F7 D8                     NEG EAX
006DB751  5D                        POP EBP
006DB752  C2 04 00                  RET 0x4
