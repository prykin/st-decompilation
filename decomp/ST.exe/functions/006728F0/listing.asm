FUN_006728f0:
006728F0  55                        PUSH EBP
006728F1  8B EC                     MOV EBP,ESP
006728F3  A1 10 19 81 00            MOV EAX,[0x00811910]
006728F8  56                        PUSH ESI
006728F9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006728FC  57                        PUSH EDI
006728FD  B9 0A 00 00 00            MOV ECX,0xa
00672902  BF 18 19 81 00            MOV EDI,0x811918
00672907  89 35 10 19 81 00         MOV dword ptr [0x00811910],ESI
0067290D  F3 A5                     MOVSD.REP ES:EDI,ESI
0067290F  5F                        POP EDI
00672910  5E                        POP ESI
00672911  5D                        POP EBP
00672912  C2 04 00                  RET 0x4
