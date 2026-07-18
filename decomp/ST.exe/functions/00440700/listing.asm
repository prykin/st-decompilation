FUN_00440700:
00440700  55                        PUSH EBP
00440701  8B EC                     MOV EBP,ESP
00440703  83 EC 20                  SUB ESP,0x20
00440706  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00440709  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0044070F  33 C0                     XOR EAX,EAX
00440711  C7 45 EC 0F 00 00 00      MOV dword ptr [EBP + -0x14],0xf
00440718  85 D2                     TEST EDX,EDX
0044071A  0F 95 C0                  SETNZ AL
0044071D  05 12 01 00 00            ADD EAX,0x112
00440722  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00440725  8B 11                     MOV EDX,dword ptr [ECX]
00440727  8D 45 E0                  LEA EAX,[EBP + -0x20]
0044072A  50                        PUSH EAX
0044072B  FF 52 18                  CALL dword ptr [EDX + 0x18]
0044072E  8B E5                     MOV ESP,EBP
00440730  5D                        POP EBP
00440731  C2 04 00                  RET 0x4
