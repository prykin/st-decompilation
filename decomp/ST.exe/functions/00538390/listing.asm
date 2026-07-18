PanelTy::DonePanel:
00538390  55                        PUSH EBP
00538391  8B EC                     MOV EBP,ESP
00538393  83 EC 48                  SUB ESP,0x48
00538396  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053839B  56                        PUSH ESI
0053839C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053839F  57                        PUSH EDI
005383A0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005383A3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005383A6  6A 00                     PUSH 0x0
005383A8  52                        PUSH EDX
005383A9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005383AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005383B2  E8 39 54 1F 00            CALL 0x0072d7f0
005383B7  8B F0                     MOV ESI,EAX
005383B9  83 C4 08                  ADD ESP,0x8
005383BC  85 F6                     TEST ESI,ESI
005383BE  75 62                     JNZ 0x00538422
005383C0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005383C3  B9 08 00 00 00            MOV ECX,0x8
005383C8  8D 56 18                  LEA EDX,[ESI + 0x18]
005383CB  8B FA                     MOV EDI,EDX
005383CD  52                        PUSH EDX
005383CE  F3 AB                     STOSD.REP ES:EDI
005383D0  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005383D3  6A 01                     PUSH 0x1
005383D5  6A 03                     PUSH 0x3
005383D7  8B CE                     MOV ECX,ESI
005383D9  C7 46 28 14 00 00 00      MOV dword ptr [ESI + 0x28],0x14
005383E0  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
005383E3  E8 18 DC 1A 00            CALL 0x006e6000
005383E8  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
005383EB  85 C0                     TEST EAX,EAX
005383ED  7C 0D                     JL 0x005383fc
005383EF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005383F5  50                        PUSH EAX
005383F6  51                        PUSH ECX
005383F7  E8 B4 B7 17 00            CALL 0x006b3bb0
LAB_005383fc:
005383FC  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
005383FF  8D 46 68                  LEA EAX,[ESI + 0x68]
00538402  85 C9                     TEST ECX,ECX
00538404  C7 46 60 FF FF FF FF      MOV dword ptr [ESI + 0x60],0xffffffff
0053840B  74 06                     JZ 0x00538413
0053840D  50                        PUSH EAX
0053840E  E8 4D 2C 17 00            CALL 0x006ab060
LAB_00538413:
00538413  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00538416  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053841C  5F                        POP EDI
0053841D  5E                        POP ESI
0053841E  8B E5                     MOV ESP,EBP
00538420  5D                        POP EBP
00538421  C3                        RET
LAB_00538422:
00538422  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00538425  68 CC 73 7C 00            PUSH 0x7c73cc
0053842A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053842F  56                        PUSH ESI
00538430  6A 00                     PUSH 0x0
00538432  6A 3C                     PUSH 0x3c
00538434  68 90 73 7C 00            PUSH 0x7c7390
00538439  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053843E  E8 8D 50 17 00            CALL 0x006ad4d0
00538443  83 C4 18                  ADD ESP,0x18
00538446  85 C0                     TEST EAX,EAX
00538448  74 01                     JZ 0x0053844b
0053844A  CC                        INT3
LAB_0053844b:
0053844B  6A 3C                     PUSH 0x3c
0053844D  68 90 73 7C 00            PUSH 0x7c7390
00538452  6A 00                     PUSH 0x0
00538454  56                        PUSH ESI
00538455  E8 E6 D9 16 00            CALL 0x006a5e40
0053845A  5F                        POP EDI
0053845B  5E                        POP ESI
0053845C  8B E5                     MOV ESP,EBP
0053845E  5D                        POP EBP
0053845F  C3                        RET
