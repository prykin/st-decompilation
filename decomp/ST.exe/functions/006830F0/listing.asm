FUN_006830f0:
006830F0  55                        PUSH EBP
006830F1  8B EC                     MOV EBP,ESP
006830F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006830F6  83 F8 01                  CMP EAX,0x1
006830F9  74 09                     JZ 0x00683104
006830FB  83 F8 3D                  CMP EAX,0x3d
006830FE  74 04                     JZ 0x00683104
00683100  33 C0                     XOR EAX,EAX
00683102  5D                        POP EBP
00683103  C3                        RET
LAB_00683104:
00683104  B8 01 00 00 00            MOV EAX,0x1
00683109  5D                        POP EBP
0068310A  C3                        RET
