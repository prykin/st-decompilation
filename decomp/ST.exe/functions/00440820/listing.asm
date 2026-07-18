FUN_00440820:
00440820  55                        PUSH EBP
00440821  8B EC                     MOV EBP,ESP
00440823  53                        PUSH EBX
00440824  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00440827  56                        PUSH ESI
00440828  57                        PUSH EDI
00440829  8B F9                     MOV EDI,ECX
0044082B  33 F6                     XOR ESI,ESI
LAB_0044082d:
0044082D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00440830  8B CF                     MOV ECX,EDI
00440832  50                        PUSH EAX
00440833  53                        PUSH EBX
00440834  56                        PUSH ESI
00440835  E8 09 1A FC FF            CALL 0x00402243
0044083A  46                        INC ESI
0044083B  83 FE 08                  CMP ESI,0x8
0044083E  7C ED                     JL 0x0044082d
00440840  5F                        POP EDI
00440841  5E                        POP ESI
00440842  5B                        POP EBX
00440843  5D                        POP EBP
00440844  C2 08 00                  RET 0x8
