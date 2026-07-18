FUN_00566bd0:
00566BD0  55                        PUSH EBP
00566BD1  8B EC                     MOV EBP,ESP
00566BD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00566BD6  56                        PUSH ESI
00566BD7  85 C0                     TEST EAX,EAX
00566BD9  8B F1                     MOV ESI,ECX
00566BDB  74 20                     JZ 0x00566bfd
00566BDD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00566BE3  85 C9                     TEST ECX,ECX
00566BE5  74 16                     JZ 0x00566bfd
00566BE7  8B 80 ED 01 00 00         MOV EAX,dword ptr [EAX + 0x1ed]
00566BED  50                        PUSH EAX
00566BEE  E8 1D 47 18 00            CALL 0x006eb310
00566BF3  85 C0                     TEST EAX,EAX
00566BF5  74 06                     JZ 0x00566bfd
00566BF7  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00566BFA  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
LAB_00566bfd:
00566BFD  5E                        POP ESI
00566BFE  5D                        POP EBP
00566BFF  C2 04 00                  RET 0x4
