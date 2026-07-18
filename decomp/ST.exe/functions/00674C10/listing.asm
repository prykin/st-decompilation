FUN_00674c10:
00674C10  55                        PUSH EBP
00674C11  8B EC                     MOV EBP,ESP
00674C13  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00674C16  A1 6C 19 81 00            MOV EAX,[0x0081196c]
00674C1B  89 0D 6C 19 81 00         MOV dword ptr [0x0081196c],ECX
00674C21  5D                        POP EBP
00674C22  C3                        RET
