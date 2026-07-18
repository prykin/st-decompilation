FUN_00679fe0:
00679FE0  55                        PUSH EBP
00679FE1  8B EC                     MOV EBP,ESP
00679FE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00679FE6  56                        PUSH ESI
00679FE7  8B F1                     MOV ESI,ECX
00679FE9  50                        PUSH EAX
00679FEA  E8 75 84 D8 FF            CALL 0x00402464
00679FEF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00679FF2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00679FF5  51                        PUSH ECX
00679FF6  52                        PUSH EDX
00679FF7  50                        PUSH EAX
00679FF8  8B CE                     MOV ECX,ESI
00679FFA  E8 4E BE D8 FF            CALL 0x00405e4d
00679FFF  5E                        POP ESI
0067A000  5D                        POP EBP
0067A001  C2 0C 00                  RET 0xc
