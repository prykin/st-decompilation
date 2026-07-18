FUN_0058bab0:
0058BAB0  55                        PUSH EBP
0058BAB1  8B EC                     MOV EBP,ESP
0058BAB3  83 EC 28                  SUB ESP,0x28
0058BAB6  57                        PUSH EDI
0058BAB7  B9 09 00 00 00            MOV ECX,0x9
0058BABC  33 C0                     XOR EAX,EAX
0058BABE  8D 7D D8                  LEA EDI,[EBP + -0x28]
0058BAC1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0058BAC4  6A 00                     PUSH 0x0
0058BAC6  F3 AB                     STOSD.REP ES:EDI
0058BAC8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0058BACB  66 AB                     STOSW ES:EDI
0058BACD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0058BAD0  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0058BAD3  66 8B 55 1C               MOV DX,word ptr [EBP + 0x1c]
0058BAD7  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0058BADA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0058BADD  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
0058BAE1  8D 55 D8                  LEA EDX,[EBP + -0x28]
0058BAE4  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0058BAE7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0058BAEA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0058BAED  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058BAF3  52                        PUSH EDX
0058BAF4  8D 55 14                  LEA EDX,[EBP + 0x14]
0058BAF7  C7 45 D8 90 01 00 00      MOV dword ptr [EBP + -0x28],0x190
0058BAFE  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0058BB05  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0058BB0C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058BB0F  8B 01                     MOV EAX,dword ptr [ECX]
0058BB11  52                        PUSH EDX
0058BB12  6A 00                     PUSH 0x0
0058BB14  68 4D 01 00 00            PUSH 0x14d
0058BB19  FF 50 08                  CALL dword ptr [EAX + 0x8]
0058BB1C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0058BB1F  5F                        POP EDI
0058BB20  8B E5                     MOV ESP,EBP
0058BB22  5D                        POP EBP
0058BB23  C3                        RET
