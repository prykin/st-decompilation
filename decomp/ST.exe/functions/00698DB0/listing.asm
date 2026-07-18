FUN_00698db0:
00698DB0  55                        PUSH EBP
00698DB1  8B EC                     MOV EBP,ESP
00698DB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00698DB6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00698DB9  8B 40 06                  MOV EAX,dword ptr [EAX + 0x6]
00698DBC  8B 49 06                  MOV ECX,dword ptr [ECX + 0x6]
00698DBF  3B C8                     CMP ECX,EAX
00698DC1  76 05                     JBE 0x00698dc8
00698DC3  83 C8 FF                  OR EAX,0xffffffff
00698DC6  5D                        POP EBP
00698DC7  C3                        RET
LAB_00698dc8:
00698DC8  1B C0                     SBB EAX,EAX
00698DCA  F7 D8                     NEG EAX
00698DCC  5D                        POP EBP
00698DCD  C3                        RET
