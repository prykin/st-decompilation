FUN_0062ffd0:
0062FFD0  55                        PUSH EBP
0062FFD1  8B EC                     MOV EBP,ESP
0062FFD3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062FFD6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062FFD9  03 C1                     ADD EAX,ECX
0062FFDB  83 F8 04                  CMP EAX,0x4
0062FFDE  7C 03                     JL 0x0062ffe3
0062FFE0  83 E8 04                  SUB EAX,0x4
LAB_0062ffe3:
0062FFE3  5D                        POP EBP
0062FFE4  C2 08 00                  RET 0x8
