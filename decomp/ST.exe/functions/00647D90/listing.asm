FUN_00647d90:
00647D90  55                        PUSH EBP
00647D91  8B EC                     MOV EBP,ESP
00647D93  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00647D96  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00647D99  50                        PUSH EAX
00647D9A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647D9D  52                        PUSH EDX
00647D9E  50                        PUSH EAX
00647D9F  83 C1 E4                  ADD ECX,-0x1c
00647DA2  E8 59 E2 09 00            CALL 0x006e6000
00647DA7  5D                        POP EBP
00647DA8  C2 0C 00                  RET 0xc
