FUN_00734570:
00734570  55                        PUSH EBP
00734571  8B EC                     MOV EBP,ESP
00734573  6A 01                     PUSH 0x1
00734575  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00734578  50                        PUSH EAX
00734579  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073457C  51                        PUSH ECX
0073457D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00734580  52                        PUSH EDX
00734581  E8 BA FC FF FF            CALL 0x00734240
00734586  83 C4 10                  ADD ESP,0x10
00734589  5D                        POP EBP
0073458A  C3                        RET
