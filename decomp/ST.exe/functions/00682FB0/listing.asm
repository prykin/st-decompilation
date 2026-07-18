FUN_00682fb0:
00682FB0  55                        PUSH EBP
00682FB1  8B EC                     MOV EBP,ESP
00682FB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00682FB6  83 F8 30                  CMP EAX,0x30
00682FB9  74 0E                     JZ 0x00682fc9
00682FBB  83 F8 16                  CMP EAX,0x16
00682FBE  74 09                     JZ 0x00682fc9
00682FC0  83 F8 2C                  CMP EAX,0x2c
00682FC3  74 04                     JZ 0x00682fc9
00682FC5  33 C0                     XOR EAX,EAX
00682FC7  5D                        POP EBP
00682FC8  C3                        RET
LAB_00682fc9:
00682FC9  B8 01 00 00 00            MOV EAX,0x1
00682FCE  5D                        POP EBP
00682FCF  C3                        RET
