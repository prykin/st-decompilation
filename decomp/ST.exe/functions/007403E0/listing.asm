FUN_007403e0:
007403E0  55                        PUSH EBP
007403E1  8B EC                     MOV EBP,ESP
007403E3  68 A0 24 7F 00            PUSH 0x7f24a0
007403E8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007403EB  50                        PUSH EAX
007403EC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007403EF  51                        PUSH ECX
007403F0  E8 9B FD FF FF            CALL 0x00740190
007403F5  83 C4 0C                  ADD ESP,0xc
007403F8  5D                        POP EBP
007403F9  C3                        RET
