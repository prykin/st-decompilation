FUN_0067eee0:
0067EEE0  55                        PUSH EBP
0067EEE1  8B EC                     MOV EBP,ESP
0067EEE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067EEE6  50                        PUSH EAX
0067EEE7  E8 CC 6D D8 FF            CALL 0x00405cb8
0067EEEC  83 C4 04                  ADD ESP,0x4
0067EEEF  85 C0                     TEST EAX,EAX
0067EEF1  7C 0D                     JL 0x0067ef00
0067EEF3  50                        PUSH EAX
0067EEF4  E8 41 46 D8 FF            CALL 0x0040353a
0067EEF9  83 C4 04                  ADD ESP,0x4
0067EEFC  5D                        POP EBP
0067EEFD  C2 04 00                  RET 0x4
LAB_0067ef00:
0067EF00  6A 00                     PUSH 0x0
0067EF02  E8 33 46 D8 FF            CALL 0x0040353a
0067EF07  83 C4 04                  ADD ESP,0x4
0067EF0A  5D                        POP EBP
0067EF0B  C2 04 00                  RET 0x4
