FUN_0060bcb0:
0060BCB0  55                        PUSH EBP
0060BCB1  8B EC                     MOV EBP,ESP
0060BCB3  83 EC 20                  SUB ESP,0x20
0060BCB6  8B D1                     MOV EDX,ECX
0060BCB8  57                        PUSH EDI
0060BCB9  B9 08 00 00 00            MOV ECX,0x8
0060BCBE  33 C0                     XOR EAX,EAX
0060BCC0  8D 7D E0                  LEA EDI,[EBP + -0x20]
0060BCC3  F3 AB                     STOSD.REP ES:EDI
0060BCC5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060BCC8  5F                        POP EDI
0060BCC9  85 C0                     TEST EAX,EAX
0060BCCB  7D 02                     JGE 0x0060bccf
0060BCCD  33 C0                     XOR EAX,EAX
LAB_0060bccf:
0060BCCF  8B 8A 21 02 00 00         MOV ECX,dword ptr [EDX + 0x221]
0060BCD5  85 C9                     TEST ECX,ECX
0060BCD7  74 22                     JZ 0x0060bcfb
0060BCD9  8B 92 01 02 00 00         MOV EDX,dword ptr [EDX + 0x201]
0060BCDF  C7 45 EC 04 00 00 00      MOV dword ptr [EBP + -0x14],0x4
0060BCE6  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0060BCE9  C7 45 F0 23 01 00 00      MOV dword ptr [EBP + -0x10],0x123
0060BCF0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060BCF3  8B 01                     MOV EAX,dword ptr [ECX]
0060BCF5  8D 55 E0                  LEA EDX,[EBP + -0x20]
0060BCF8  52                        PUSH EDX
0060BCF9  FF 10                     CALL dword ptr [EAX]
LAB_0060bcfb:
0060BCFB  8B E5                     MOV ESP,EBP
0060BCFD  5D                        POP EBP
0060BCFE  C2 04 00                  RET 0x4
