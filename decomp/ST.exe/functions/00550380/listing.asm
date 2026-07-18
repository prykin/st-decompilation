FUN_00550380:
00550380  55                        PUSH EBP
00550381  8B EC                     MOV EBP,ESP
00550383  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
00550389  C7 05 0A C5 80 00 00 00 00 00  MOV dword ptr [0x0080c50a],0x0
00550393  85 C9                     TEST ECX,ECX
00550395  C7 05 12 C5 80 00 01 00 00 00  MOV dword ptr [0x0080c512],0x1
0055039F  74 0B                     JZ 0x005503ac
005503A1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005503A4  50                        PUSH EAX
005503A5  6A 0A                     PUSH 0xa
005503A7  E8 4B 5B EB FF            CALL 0x00405ef7
LAB_005503ac:
005503AC  5D                        POP EBP
005503AD  C2 08 00                  RET 0x8
