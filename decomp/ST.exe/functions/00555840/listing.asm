FUN_00555840:
00555840  55                        PUSH EBP
00555841  8B EC                     MOV EBP,ESP
00555843  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00555846  50                        PUSH EAX
00555847  68 4C 91 7C 00            PUSH 0x7c914c
0055584C  68 5C 2A 80 00            PUSH 0x802a5c
00555851  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00555857  83 C4 0C                  ADD ESP,0xc
0055585A  B8 5C 2A 80 00            MOV EAX,0x802a5c
0055585F  5D                        POP EBP
00555860  C3                        RET
