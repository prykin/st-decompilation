FUN_0060bd30:
0060BD30  55                        PUSH EBP
0060BD31  8B EC                     MOV EBP,ESP
0060BD33  83 EC 3C                  SUB ESP,0x3c
0060BD36  8B D1                     MOV EDX,ECX
0060BD38  57                        PUSH EDI
0060BD39  B9 08 00 00 00            MOV ECX,0x8
0060BD3E  33 C0                     XOR EAX,EAX
0060BD40  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0060BD43  F3 AB                     STOSD.REP ES:EDI
0060BD45  B9 07 00 00 00            MOV ECX,0x7
0060BD4A  8D 7D E4                  LEA EDI,[EBP + -0x1c]
0060BD4D  F3 AB                     STOSD.REP ES:EDI
0060BD4F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0060BD52  C7 45 D0 04 00 00 00      MOV dword ptr [EBP + -0x30],0x4
0060BD59  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0060BD60  C7 45 D4 10 01 00 00      MOV dword ptr [EBP + -0x2c],0x110
0060BD67  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0060BD6A  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0060BD6D  8B 82 D9 01 00 00         MOV EAX,dword ptr [EDX + 0x1d9]
0060BD73  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0060BD76  66 8B 82 05 02 00 00      MOV AX,word ptr [EDX + 0x205]
0060BD7D  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
0060BD81  66 8B 82 01 02 00 00      MOV AX,word ptr [EDX + 0x201]
0060BD88  8B 92 F5 01 00 00         MOV EDX,dword ptr [EDX + 0x1f5]
0060BD8E  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
0060BD92  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060BD95  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0060BD98  8B 11                     MOV EDX,dword ptr [ECX]
0060BD9A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0060BD9D  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0060BDA0  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0060BDA3  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0060BDA6  50                        PUSH EAX
0060BDA7  FF 12                     CALL dword ptr [EDX]
0060BDA9  5F                        POP EDI
0060BDAA  8B E5                     MOV ESP,EBP
0060BDAC  5D                        POP EBP
0060BDAD  C2 08 00                  RET 0x8
