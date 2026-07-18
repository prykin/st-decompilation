TradePanelTy::DoneTradePanel:
005512F0  55                        PUSH EBP
005512F1  8B EC                     MOV EBP,ESP
005512F3  83 EC 48                  SUB ESP,0x48
005512F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005512FB  56                        PUSH ESI
005512FC  57                        PUSH EDI
005512FD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00551300  33 FF                     XOR EDI,EDI
00551302  8D 55 BC                  LEA EDX,[EBP + -0x44]
00551305  8D 4D B8                  LEA ECX,[EBP + -0x48]
00551308  57                        PUSH EDI
00551309  52                        PUSH EDX
0055130A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0055130D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00551313  E8 D8 C4 1D 00            CALL 0x0072d7f0
00551318  8B F0                     MOV ESI,EAX
0055131A  83 C4 08                  ADD ESP,0x8
0055131D  3B F7                     CMP ESI,EDI
0055131F  0F 85 A6 00 00 00         JNZ 0x005513cb
00551325  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00551328  8B 86 C0 01 00 00         MOV EAX,dword ptr [ESI + 0x1c0]
0055132E  3B C7                     CMP EAX,EDI
00551330  74 09                     JZ 0x0055133b
00551332  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00551335  50                        PUSH EAX
00551336  E8 75 43 19 00            CALL 0x006e56b0
LAB_0055133b:
0055133B  8B 86 C4 01 00 00         MOV EAX,dword ptr [ESI + 0x1c4]
00551341  89 BE C0 01 00 00         MOV dword ptr [ESI + 0x1c0],EDI
00551347  3B C7                     CMP EAX,EDI
00551349  74 09                     JZ 0x00551354
0055134B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0055134E  50                        PUSH EAX
0055134F  E8 5C 43 19 00            CALL 0x006e56b0
LAB_00551354:
00551354  8B 86 C8 01 00 00         MOV EAX,dword ptr [ESI + 0x1c8]
0055135A  89 BE C4 01 00 00         MOV dword ptr [ESI + 0x1c4],EDI
00551360  3B C7                     CMP EAX,EDI
00551362  74 09                     JZ 0x0055136d
00551364  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00551367  50                        PUSH EAX
00551368  E8 43 43 19 00            CALL 0x006e56b0
LAB_0055136d:
0055136D  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
00551373  89 BE C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EDI
00551379  3B C7                     CMP EAX,EDI
0055137B  74 09                     JZ 0x00551386
0055137D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00551380  50                        PUSH EAX
00551381  E8 2A 43 19 00            CALL 0x006e56b0
LAB_00551386:
00551386  8B 86 DD 01 00 00         MOV EAX,dword ptr [ESI + 0x1dd]
0055138C  89 BE CC 01 00 00         MOV dword ptr [ESI + 0x1cc],EDI
00551392  3B C7                     CMP EAX,EDI
00551394  74 0F                     JZ 0x005513a5
00551396  50                        PUSH EAX
00551397  E8 C4 F1 1B 00            CALL 0x00710560
0055139C  83 C4 04                  ADD ESP,0x4
0055139F  89 BE DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EDI
LAB_005513a5:
005513A5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005513A8  89 BE D9 01 00 00         MOV dword ptr [ESI + 0x1d9],EDI
005513AE  89 BE D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EDI
005513B4  89 BE D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EDI
005513BA  89 3D 44 2A 80 00         MOV dword ptr [0x00802a44],EDI
005513C0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005513C5  5F                        POP EDI
005513C6  5E                        POP ESI
005513C7  8B E5                     MOV ESP,EBP
005513C9  5D                        POP EBP
005513CA  C3                        RET
LAB_005513cb:
005513CB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005513CE  68 94 86 7C 00            PUSH 0x7c8694
005513D3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005513D8  56                        PUSH ESI
005513D9  57                        PUSH EDI
005513DA  6A 67                     PUSH 0x67
005513DC  68 24 86 7C 00            PUSH 0x7c8624
005513E1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005513E7  E8 E4 C0 15 00            CALL 0x006ad4d0
005513EC  83 C4 18                  ADD ESP,0x18
005513EF  85 C0                     TEST EAX,EAX
005513F1  74 01                     JZ 0x005513f4
005513F3  CC                        INT3
LAB_005513f4:
005513F4  6A 67                     PUSH 0x67
005513F6  68 24 86 7C 00            PUSH 0x7c8624
005513FB  57                        PUSH EDI
005513FC  56                        PUSH ESI
005513FD  E8 3E 4A 15 00            CALL 0x006a5e40
00551402  5F                        POP EDI
00551403  5E                        POP ESI
00551404  8B E5                     MOV ESP,EBP
00551406  5D                        POP EBP
00551407  C3                        RET
