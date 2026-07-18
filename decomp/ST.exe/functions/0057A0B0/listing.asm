FUN_0057a0b0:
0057A0B0  55                        PUSH EBP
0057A0B1  8B EC                     MOV EBP,ESP
0057A0B3  83 EC 28                  SUB ESP,0x28
0057A0B6  57                        PUSH EDI
0057A0B7  B9 0A 00 00 00            MOV ECX,0xa
0057A0BC  33 C0                     XOR EAX,EAX
0057A0BE  8D 7D D8                  LEA EDI,[EBP + -0x28]
0057A0C1  F3 AB                     STOSD.REP ES:EDI
0057A0C3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0057A0C6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0057A0C9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0057A0CC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0057A0CF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057A0D2  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0057A0D5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0057A0D8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0057A0DB  8D 45 D8                  LEA EAX,[EBP + -0x28]
0057A0DE  6A 00                     PUSH 0x0
0057A0E0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0057A0E3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057A0E9  50                        PUSH EAX
0057A0EA  8D 45 18                  LEA EAX,[EBP + 0x18]
0057A0ED  C7 45 D8 0E 01 00 00      MOV dword ptr [EBP + -0x28],0x10e
0057A0F4  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0057A0FB  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0057A102  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0057A105  8B 11                     MOV EDX,dword ptr [ECX]
0057A107  50                        PUSH EAX
0057A108  6A 00                     PUSH 0x0
0057A10A  68 3F 01 00 00            PUSH 0x13f
0057A10F  FF 52 08                  CALL dword ptr [EDX + 0x8]
0057A112  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0057A115  5F                        POP EDI
0057A116  8B E5                     MOV ESP,EBP
0057A118  5D                        POP EBP
0057A119  C3                        RET
