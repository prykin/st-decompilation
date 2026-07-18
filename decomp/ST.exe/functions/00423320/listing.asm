FUN_00423320:
00423320  55                        PUSH EBP
00423321  8B EC                     MOV EBP,ESP
00423323  83 EC 20                  SUB ESP,0x20
00423326  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
00423329  85 C9                     TEST ECX,ECX
0042332B  74 0E                     JZ 0x0042333b
0042332D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00423330  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00423333  8B 11                     MOV EDX,dword ptr [ECX]
00423335  8D 45 E0                  LEA EAX,[EBP + -0x20]
00423338  50                        PUSH EAX
00423339  FF 12                     CALL dword ptr [EDX]
LAB_0042333b:
0042333B  8B E5                     MOV ESP,EBP
0042333D  5D                        POP EBP
0042333E  C2 04 00                  RET 0x4
