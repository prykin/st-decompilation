FUN_00440750:
00440750  55                        PUSH EBP
00440751  8B EC                     MOV EBP,ESP
00440753  83 EC 20                  SUB ESP,0x20
00440756  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00440759  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0044075F  F7 D8                     NEG EAX
00440761  1B C0                     SBB EAX,EAX
00440763  C7 45 EC 0F 00 00 00      MOV dword ptr [EBP + -0x14],0xf
0044076A  05 20 01 00 00            ADD EAX,0x120
0044076F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00440772  8B 11                     MOV EDX,dword ptr [ECX]
00440774  8D 45 E0                  LEA EAX,[EBP + -0x20]
00440777  50                        PUSH EAX
00440778  FF 52 18                  CALL dword ptr [EDX + 0x18]
0044077B  8B E5                     MOV ESP,EBP
0044077D  5D                        POP EBP
0044077E  C2 04 00                  RET 0x4
