FUN_0067a180:
0067A180  55                        PUSH EBP
0067A181  8B EC                     MOV EBP,ESP
0067A183  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067A186  56                        PUSH ESI
0067A187  8B F1                     MOV ESI,ECX
0067A189  50                        PUSH EAX
0067A18A  E8 D5 82 D8 FF            CALL 0x00402464
0067A18F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067A192  51                        PUSH ECX
0067A193  50                        PUSH EAX
0067A194  8B CE                     MOV ECX,ESI
0067A196  E8 3F A8 D8 FF            CALL 0x004049da
0067A19B  5E                        POP ESI
0067A19C  5D                        POP EBP
0067A19D  C2 08 00                  RET 0x8
