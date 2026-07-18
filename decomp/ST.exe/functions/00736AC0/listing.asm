FUN_00736ac0:
00736AC0  55                        PUSH EBP
00736AC1  8B EC                     MOV EBP,ESP
00736AC3  83 3D EC A5 85 00 00      CMP dword ptr [0x0085a5ec],0x0
00736ACA  75 14                     JNZ 0x00736ae0
00736ACC  6A FD                     PUSH -0x3
00736ACE  E8 5D F8 FF FF            CALL 0x00736330
00736AD3  83 C4 04                  ADD ESP,0x4
00736AD6  C7 05 EC A5 85 00 01 00 00 00  MOV dword ptr [0x0085a5ec],0x1
LAB_00736ae0:
00736AE0  5D                        POP EBP
00736AE1  C3                        RET
