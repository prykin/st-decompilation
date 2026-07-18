FUN_00646db0:
00646DB0  55                        PUSH EBP
00646DB1  8B EC                     MOV EBP,ESP
00646DB3  8B C1                     MOV EAX,ECX
00646DB5  56                        PUSH ESI
00646DB6  85 C0                     TEST EAX,EAX
00646DB8  57                        PUSH EDI
00646DB9  74 05                     JZ 0x00646dc0
00646DBB  8D 78 1C                  LEA EDI,[EAX + 0x1c]
00646DBE  EB 02                     JMP 0x00646dc2
LAB_00646dc0:
00646DC0  33 FF                     XOR EDI,EDI
LAB_00646dc2:
00646DC2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00646DC5  B9 25 00 00 00            MOV ECX,0x25
00646DCA  F3 A5                     MOVSD.REP ES:EDI,ESI
00646DCC  A4                        MOVSB ES:EDI,ESI
00646DCD  83 C9 FF                  OR ECX,0xffffffff
00646DD0  C7 40 61 00 00 00 00      MOV dword ptr [EAX + 0x61],0x0
00646DD7  89 48 5D                  MOV dword ptr [EAX + 0x5d],ECX
00646DDA  89 48 7A                  MOV dword ptr [EAX + 0x7a],ECX
00646DDD  89 88 86 00 00 00         MOV dword ptr [EAX + 0x86],ECX
00646DE3  5F                        POP EDI
00646DE4  B8 95 00 00 00            MOV EAX,0x95
00646DE9  5E                        POP ESI
00646DEA  5D                        POP EBP
00646DEB  C2 04 00                  RET 0x4
