FUN_006e3db0:
006E3DB0  55                        PUSH EBP
006E3DB1  8B EC                     MOV EBP,ESP
006E3DB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E3DB6  50                        PUSH EAX
006E3DB7  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E3DBA  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006E3DBD  52                        PUSH EDX
006E3DBE  50                        PUSH EAX
006E3DBF  E8 0C 00 00 00            CALL 0x006e3dd0
006E3DC4  5D                        POP EBP
006E3DC5  C2 04 00                  RET 0x4
