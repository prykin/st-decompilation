FUN_0061d0c0:
0061D0C0  55                        PUSH EBP
0061D0C1  8B EC                     MOV EBP,ESP
0061D0C3  83 EC 44                  SUB ESP,0x44
0061D0C6  57                        PUSH EDI
0061D0C7  B9 10 00 00 00            MOV ECX,0x10
0061D0CC  33 C0                     XOR EAX,EAX
0061D0CE  8D 7D BC                  LEA EDI,[EBP + -0x44]
0061D0D1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061D0D4  6A 00                     PUSH 0x0
0061D0D6  F3 AB                     STOSD.REP ES:EDI
0061D0D8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061D0DB  66 AB                     STOSW ES:EDI
0061D0DD  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0061D0E0  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0061D0E3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0061D0E6  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0061D0E9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0061D0EC  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0061D0EF  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0061D0F2  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0061D0F5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0061D0F8  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0061D0FB  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
0061D0FE  89 55 FA                  MOV dword ptr [EBP + -0x6],EDX
0061D101  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
0061D104  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0061D107  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0061D10A  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0061D10D  66 8B 4D 28               MOV CX,word ptr [EBP + 0x28]
0061D111  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0061D114  8D 55 BC                  LEA EDX,[EBP + -0x44]
0061D117  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0061D11A  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0061D11D  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
0061D121  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061D127  52                        PUSH EDX
0061D128  8D 55 28                  LEA EDX,[EBP + 0x28]
0061D12B  C7 45 BC F0 00 00 00      MOV dword ptr [EBP + -0x44],0xf0
0061D132  C7 45 C4 00 00 00 00      MOV dword ptr [EBP + -0x3c],0x0
0061D139  C7 45 C8 01 00 00 00      MOV dword ptr [EBP + -0x38],0x1
0061D140  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061D143  8B 01                     MOV EAX,dword ptr [ECX]
0061D145  52                        PUSH EDX
0061D146  6A 00                     PUSH 0x0
0061D148  68 36 01 00 00            PUSH 0x136
0061D14D  FF 50 08                  CALL dword ptr [EAX + 0x8]
0061D150  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0061D153  5F                        POP EDI
0061D154  8B E5                     MOV ESP,EBP
0061D156  5D                        POP EBP
0061D157  C3                        RET
