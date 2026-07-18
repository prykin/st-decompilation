__shift:
007351F0  55                        PUSH EBP
007351F1  8B EC                     MOV EBP,ESP
007351F3  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
007351F7  74 23                     JZ 0x0073521c
007351F9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007351FC  50                        PUSH EAX
007351FD  E8 0E 1A 00 00            CALL 0x00736c10
00735202  83 C4 04                  ADD ESP,0x4
00735205  83 C0 01                  ADD EAX,0x1
00735208  50                        PUSH EAX
00735209  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073520C  51                        PUSH ECX
0073520D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735210  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
00735213  52                        PUSH EDX
00735214  E8 57 88 FF FF            CALL 0x0072da70
00735219  83 C4 0C                  ADD ESP,0xc
LAB_0073521c:
0073521C  5D                        POP EBP
0073521D  C3                        RET
