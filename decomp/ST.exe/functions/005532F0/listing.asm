FUN_005532f0:
005532F0  55                        PUSH EBP
005532F1  8B EC                     MOV EBP,ESP
005532F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005532F6  83 F8 08                  CMP EAX,0x8
005532F9  77 46                     JA 0x00553341
switchD_005532fb::switchD:
005532FB  FF 24 85 4C 33 55 00      JMP dword ptr [EAX*0x4 + 0x55334c]
switchD_005532fb::caseD_0:
00553302  B8 E4 89 7C 00            MOV EAX,0x7c89e4
00553307  5D                        POP EBP
00553308  C3                        RET
switchD_005532fb::caseD_1:
00553309  B8 E8 89 7C 00            MOV EAX,0x7c89e8
0055330E  5D                        POP EBP
0055330F  C3                        RET
switchD_005532fb::caseD_2:
00553310  B8 F4 89 7C 00            MOV EAX,0x7c89f4
00553315  5D                        POP EBP
00553316  C3                        RET
switchD_005532fb::caseD_3:
00553317  B8 10 8A 7C 00            MOV EAX,0x7c8a10
0055331C  5D                        POP EBP
0055331D  C3                        RET
switchD_005532fb::caseD_4:
0055331E  B8 44 8A 7C 00            MOV EAX,0x7c8a44
00553323  5D                        POP EBP
00553324  C3                        RET
switchD_005532fb::caseD_5:
00553325  B8 98 8A 7C 00            MOV EAX,0x7c8a98
0055332A  5D                        POP EBP
0055332B  C3                        RET
switchD_005532fb::caseD_6:
0055332C  B8 14 8B 7C 00            MOV EAX,0x7c8b14
00553331  5D                        POP EBP
00553332  C3                        RET
switchD_005532fb::caseD_7:
00553333  B8 C0 8B 7C 00            MOV EAX,0x7c8bc0
00553338  5D                        POP EBP
00553339  C3                        RET
switchD_005532fb::caseD_8:
0055333A  B8 A4 8C 7C 00            MOV EAX,0x7c8ca4
0055333F  5D                        POP EBP
00553340  C3                        RET
switchD_005532fb::default:
00553341  50                        PUSH EAX
00553342  E8 C6 06 EB FF            CALL 0x00403a0d
00553347  83 C4 04                  ADD ESP,0x4
0055334A  5D                        POP EBP
0055334B  C3                        RET
