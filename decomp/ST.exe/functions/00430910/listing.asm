FUN_00430910:
00430910  55                        PUSH EBP
00430911  8B EC                     MOV EBP,ESP
00430913  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00430916  2D DC 00 00 00            SUB EAX,0xdc
0043091B  74 21                     JZ 0x0043093e
0043091D  48                        DEC EAX
0043091E  74 15                     JZ 0x00430935
00430920  48                        DEC EAX
00430921  74 09                     JZ 0x0043092c
00430923  B8 01 00 00 00            MOV EAX,0x1
00430928  5D                        POP EBP
00430929  C2 04 00                  RET 0x4
LAB_0043092c:
0043092C  B8 14 00 00 00            MOV EAX,0x14
00430931  5D                        POP EBP
00430932  C2 04 00                  RET 0x4
LAB_00430935:
00430935  B8 03 00 00 00            MOV EAX,0x3
0043093A  5D                        POP EBP
0043093B  C2 04 00                  RET 0x4
LAB_0043093e:
0043093E  B8 05 00 00 00            MOV EAX,0x5
00430943  5D                        POP EBP
00430944  C2 04 00                  RET 0x4
