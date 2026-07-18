FUN_007508f0:
007508F0  55                        PUSH EBP
007508F1  8B EC                     MOV EBP,ESP
007508F3  56                        PUSH ESI
007508F4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007508F7  85 F6                     TEST ESI,ESI
007508F9  74 17                     JZ 0x00750912
007508FB  8B 06                     MOV EAX,dword ptr [ESI]
007508FD  50                        PUSH EAX
007508FE  E8 9D 29 00 00            CALL 0x007532a0
00750903  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00750906  51                        PUSH ECX
00750907  E8 54 29 00 00            CALL 0x00753260
0075090C  56                        PUSH ESI
0075090D  E8 7E 55 F5 FF            CALL 0x006a5e90
LAB_00750912:
00750912  33 C0                     XOR EAX,EAX
00750914  5E                        POP ESI
00750915  5D                        POP EBP
00750916  C2 04 00                  RET 0x4
