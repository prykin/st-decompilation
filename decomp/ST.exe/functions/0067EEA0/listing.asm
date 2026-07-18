FUN_0067eea0:
0067EEA0  55                        PUSH EBP
0067EEA1  8B EC                     MOV EBP,ESP
0067EEA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067EEA6  50                        PUSH EAX
0067EEA7  E8 0C 6E D8 FF            CALL 0x00405cb8
0067EEAC  83 C4 04                  ADD ESP,0x4
0067EEAF  85 C0                     TEST EAX,EAX
0067EEB1  7C 0D                     JL 0x0067eec0
0067EEB3  50                        PUSH EAX
0067EEB4  E8 81 46 D8 FF            CALL 0x0040353a
0067EEB9  83 C4 04                  ADD ESP,0x4
0067EEBC  5D                        POP EBP
0067EEBD  C2 04 00                  RET 0x4
LAB_0067eec0:
0067EEC0  33 C0                     XOR EAX,EAX
0067EEC2  5D                        POP EBP
0067EEC3  C2 04 00                  RET 0x4
