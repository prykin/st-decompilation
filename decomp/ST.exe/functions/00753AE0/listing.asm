FUN_00753ae0:
00753AE0  55                        PUSH EBP
00753AE1  8B EC                     MOV EBP,ESP
00753AE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753AE6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00753AE9  6A 00                     PUSH 0x0
00753AEB  6A 01                     PUSH 0x1
00753AED  50                        PUSH EAX
00753AEE  51                        PUSH ECX
00753AEF  E8 2C FE FF FF            CALL 0x00753920
00753AF4  5D                        POP EBP
00753AF5  C2 08 00                  RET 0x8
