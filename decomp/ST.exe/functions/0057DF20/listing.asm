FUN_0057df20:
0057DF20  55                        PUSH EBP
0057DF21  8B EC                     MOV EBP,ESP
0057DF23  83 EC 28                  SUB ESP,0x28
0057DF26  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0057DF29  57                        PUSH EDI
0057DF2A  B9 0A 00 00 00            MOV ECX,0xa
0057DF2F  33 C0                     XOR EAX,EAX
0057DF31  8D 7D D8                  LEA EDI,[EBP + -0x28]
0057DF34  6A 00                     PUSH 0x0
0057DF36  F3 AB                     STOSD.REP ES:EDI
0057DF38  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0057DF3B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0057DF3E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0057DF41  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0057DF44  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0057DF47  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0057DF4A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0057DF4D  8D 55 D8                  LEA EDX,[EBP + -0x28]
0057DF50  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0057DF53  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057DF56  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0057DF59  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057DF5F  52                        PUSH EDX
0057DF60  8D 55 1C                  LEA EDX,[EBP + 0x1c]
0057DF63  C7 45 D8 32 00 00 00      MOV dword ptr [EBP + -0x28],0x32
0057DF6A  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0057DF71  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0057DF78  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0057DF7B  8B 01                     MOV EAX,dword ptr [ECX]
0057DF7D  52                        PUSH EDX
0057DF7E  6A 00                     PUSH 0x0
0057DF80  68 07 01 00 00            PUSH 0x107
0057DF85  FF 50 08                  CALL dword ptr [EAX + 0x8]
0057DF88  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0057DF8B  5F                        POP EDI
0057DF8C  8B E5                     MOV ESP,EBP
0057DF8E  5D                        POP EBP
0057DF8F  C3                        RET
