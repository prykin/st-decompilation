FUN_00726bd0:
00726BD0  55                        PUSH EBP
00726BD1  8B EC                     MOV EBP,ESP
00726BD3  56                        PUSH ESI
00726BD4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00726BD7  8B 06                     MOV EAX,dword ptr [ESI]
00726BD9  85 C0                     TEST EAX,EAX
00726BDB  74 16                     JZ 0x00726bf3
00726BDD  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
00726BE0  85 C9                     TEST ECX,ECX
00726BE2  74 09                     JZ 0x00726bed
00726BE4  83 C0 0A                  ADD EAX,0xa
00726BE7  50                        PUSH EAX
00726BE8  E8 F3 B4 FC FF            CALL 0x006f20e0
LAB_00726bed:
00726BED  56                        PUSH ESI
00726BEE  E8 6D 44 F8 FF            CALL 0x006ab060
LAB_00726bf3:
00726BF3  5E                        POP ESI
00726BF4  5D                        POP EBP
00726BF5  C3                        RET
