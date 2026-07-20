GameSystemC::GameSystemC:
00576DD0  55                        PUSH EBP
00576DD1  8B EC                     MOV EBP,ESP
00576DD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00576DD6  56                        PUSH ESI
00576DD7  6A 01                     PUSH 0x1
00576DD9  8B F1                     MOV ESI,ECX
00576DDB  50                        PUSH EAX
00576DDC  E8 DF E3 16 00            CALL 0x006e51c0
00576DE1  C7 06 E0 B1 79 00         MOV dword ptr [ESI],0x79b1e0
00576DE7  C6 86 30 04 00 00 01      MOV byte ptr [ESI + 0x430],0x1
00576DEE  C7 86 31 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x431],0x0
00576DF8  8B C6                     MOV EAX,ESI
00576DFA  5E                        POP ESI
00576DFB  5D                        POP EBP
00576DFC  C2 04 00                  RET 0x4
