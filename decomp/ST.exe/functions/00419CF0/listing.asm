FUN_00419cf0:
00419CF0  55                        PUSH EBP
00419CF1  8B EC                     MOV EBP,ESP
00419CF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00419CF6  66 8B 51 30               MOV DX,word ptr [ECX + 0x30]
00419CFA  6A 00                     PUSH 0x0
00419CFC  6A 01                     PUSH 0x1
00419CFE  51                        PUSH ECX
00419CFF  50                        PUSH EAX
00419D00  8A 41 24                  MOV AL,byte ptr [ECX + 0x24]
00419D03  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00419D09  52                        PUSH EDX
00419D0A  50                        PUSH EAX
00419D0B  E8 B2 B5 FE FF            CALL 0x004052c2
00419D10  5D                        POP EBP
00419D11  C2 04 00                  RET 0x4
