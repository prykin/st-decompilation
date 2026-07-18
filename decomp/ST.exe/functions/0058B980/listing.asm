FUN_0058b980:
0058B980  55                        PUSH EBP
0058B981  8B EC                     MOV EBP,ESP
0058B983  83 EC 28                  SUB ESP,0x28
0058B986  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0058B989  57                        PUSH EDI
0058B98A  B9 0A 00 00 00            MOV ECX,0xa
0058B98F  33 C0                     XOR EAX,EAX
0058B991  8D 7D D8                  LEA EDI,[EBP + -0x28]
0058B994  6A 00                     PUSH 0x0
0058B996  F3 AB                     STOSD.REP ES:EDI
0058B998  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0058B99B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0058B99E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0058B9A1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0058B9A4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0058B9A7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0058B9AA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0058B9AD  8D 55 D8                  LEA EDX,[EBP + -0x28]
0058B9B0  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0058B9B3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0058B9B6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0058B9B9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058B9BF  52                        PUSH EDX
0058B9C0  8D 55 1C                  LEA EDX,[EBP + 0x1c]
0058B9C3  C7 45 D8 18 01 00 00      MOV dword ptr [EBP + -0x28],0x118
0058B9CA  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0058B9D1  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0058B9D8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058B9DB  8B 01                     MOV EAX,dword ptr [ECX]
0058B9DD  52                        PUSH EDX
0058B9DE  6A 00                     PUSH 0x0
0058B9E0  68 40 01 00 00            PUSH 0x140
0058B9E5  FF 50 08                  CALL dword ptr [EAX + 0x8]
0058B9E8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0058B9EB  5F                        POP EDI
0058B9EC  8B E5                     MOV ESP,EBP
0058B9EE  5D                        POP EBP
0058B9EF  C3                        RET
