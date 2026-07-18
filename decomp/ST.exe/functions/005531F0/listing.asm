FUN_005531f0:
005531F0  55                        PUSH EBP
005531F1  8B EC                     MOV EBP,ESP
005531F3  83 EC 44                  SUB ESP,0x44
005531F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005531FB  8D 55 C0                  LEA EDX,[EBP + -0x40]
005531FE  8D 4D BC                  LEA ECX,[EBP + -0x44]
00553201  6A 00                     PUSH 0x0
00553203  52                        PUSH EDX
00553204  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00553207  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055320D  E8 DE A5 1D 00            CALL 0x0072d7f0
00553212  83 C4 08                  ADD ESP,0x8
00553215  85 C0                     TEST EAX,EAX
00553217  75 27                     JNZ 0x00553240
00553219  A1 4C 2A 80 00            MOV EAX,[0x00802a4c]
0055321E  85 C0                     TEST EAX,EAX
00553220  75 12                     JNZ 0x00553234
00553222  6A 0A                     PUSH 0xa
00553224  6A 06                     PUSH 0x6
00553226  6A 0A                     PUSH 0xa
00553228  6A 00                     PUSH 0x0
0055322A  E8 61 B0 15 00            CALL 0x006ae290
0055322F  A3 4C 2A 80 00            MOV [0x00802a4c],EAX
LAB_00553234:
00553234  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00553237  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055323C  8B E5                     MOV ESP,EBP
0055323E  5D                        POP EBP
0055323F  C3                        RET
LAB_00553240:
00553240  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00553243  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00553249  8B E5                     MOV ESP,EBP
0055324B  5D                        POP EBP
0055324C  C3                        RET
