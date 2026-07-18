FUN_006834f0:
006834F0  55                        PUSH EBP
006834F1  8B EC                     MOV EBP,ESP
006834F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006834F6  83 F8 34                  CMP EAX,0x34
006834F9  74 09                     JZ 0x00683504
006834FB  83 F8 43                  CMP EAX,0x43
006834FE  74 04                     JZ 0x00683504
00683500  33 C0                     XOR EAX,EAX
00683502  5D                        POP EBP
00683503  C3                        RET
LAB_00683504:
00683504  B8 01 00 00 00            MOV EAX,0x1
00683509  5D                        POP EBP
0068350A  C3                        RET
