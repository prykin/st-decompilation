FUN_00682370:
00682370  55                        PUSH EBP
00682371  8B EC                     MOV EBP,ESP
00682373  A1 14 8A 84 00            MOV EAX,[0x00848a14]
00682378  85 C0                     TEST EAX,EAX
0068237A  74 0D                     JZ 0x00682389
0068237C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068237F  51                        PUSH ECX
00682380  50                        PUSH EAX
00682381  E8 C3 FD D7 FF            CALL 0x00402149
00682386  83 C4 08                  ADD ESP,0x8
LAB_00682389:
00682389  5D                        POP EBP
0068238A  C3                        RET
