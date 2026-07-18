FUN_0067fce0:
0067FCE0  55                        PUSH EBP
0067FCE1  8B EC                     MOV EBP,ESP
0067FCE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067FCE6  50                        PUSH EAX
0067FCE7  E8 B9 59 D8 FF            CALL 0x004056a5
0067FCEC  83 C4 04                  ADD ESP,0x4
0067FCEF  85 C0                     TEST EAX,EAX
0067FCF1  7C 0B                     JL 0x0067fcfe
0067FCF3  50                        PUSH EAX
0067FCF4  E8 7A 45 D8 FF            CALL 0x00404273
0067FCF9  83 C4 04                  ADD ESP,0x4
0067FCFC  5D                        POP EBP
0067FCFD  C3                        RET
LAB_0067fcfe:
0067FCFE  33 C0                     XOR EAX,EAX
0067FD00  5D                        POP EBP
0067FD01  C3                        RET
