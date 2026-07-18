FUN_0071a230:
0071A230  55                        PUSH EBP
0071A231  8B EC                     MOV EBP,ESP
0071A233  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071A236  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071A239  50                        PUSH EAX
0071A23A  6A 02                     PUSH 0x2
0071A23C  E8 7F 75 FD FF            CALL 0x006f17c0
0071A241  5D                        POP EBP
0071A242  C3                        RET
