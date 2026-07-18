FUN_00580450:
00580450  55                        PUSH EBP
00580451  8B EC                     MOV EBP,ESP
00580453  83 EC 28                  SUB ESP,0x28
00580456  57                        PUSH EDI
00580457  B9 0A 00 00 00            MOV ECX,0xa
0058045C  33 C0                     XOR EAX,EAX
0058045E  8D 7D D8                  LEA EDI,[EBP + -0x28]
00580461  F3 AB                     STOSD.REP ES:EDI
00580463  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00580466  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00580469  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0058046C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058046F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00580472  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00580475  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00580478  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0058047B  8D 45 D8                  LEA EAX,[EBP + -0x28]
0058047E  6A 00                     PUSH 0x0
00580480  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00580483  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00580489  50                        PUSH EAX
0058048A  8D 45 08                  LEA EAX,[EBP + 0x8]
0058048D  C7 45 D8 5A 00 00 00      MOV dword ptr [EBP + -0x28],0x5a
00580494  C7 45 DC FF 00 00 00      MOV dword ptr [EBP + -0x24],0xff
0058049B  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
005804A2  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
005804A9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005804AC  8B 11                     MOV EDX,dword ptr [ECX]
005804AE  50                        PUSH EAX
005804AF  6A 00                     PUSH 0x0
005804B1  68 0B 01 00 00            PUSH 0x10b
005804B6  FF 52 08                  CALL dword ptr [EDX + 0x8]
005804B9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005804BC  5F                        POP EDI
005804BD  8B E5                     MOV ESP,EBP
005804BF  5D                        POP EBP
005804C0  C3                        RET
