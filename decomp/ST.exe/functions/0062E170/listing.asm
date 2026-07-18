FUN_0062e170:
0062E170  55                        PUSH EBP
0062E171  8B EC                     MOV EBP,ESP
0062E173  83 EC 2C                  SUB ESP,0x2c
0062E176  57                        PUSH EDI
0062E177  B9 0B 00 00 00            MOV ECX,0xb
0062E17C  33 C0                     XOR EAX,EAX
0062E17E  8D 7D D4                  LEA EDI,[EBP + -0x2c]
0062E181  F3 AB                     STOSD.REP ES:EDI
0062E183  B8 01 00 00 00            MOV EAX,0x1
0062E188  6A 00                     PUSH 0x0
0062E18A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0062E18D  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0062E190  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062E193  C7 45 D4 40 01 00 00      MOV dword ptr [EBP + -0x2c],0x140
0062E19A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0062E19D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062E1A0  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0062E1A3  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0062E1A6  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
0062E1AA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062E1AD  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0062E1B0  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0062E1B3  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0062E1B6  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
0062E1BA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062E1BD  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0062E1C0  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0062E1C3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062E1C6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062E1C9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062E1CC  8D 0C C5 64 00 00 00      LEA ECX,[EAX*0x8 + 0x64]
0062E1D3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062E1D6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0062E1D9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0062E1DC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062E1DF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0062E1E2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062E1E8  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0062E1EB  50                        PUSH EAX
0062E1EC  6A 00                     PUSH 0x0
0062E1EE  8B 11                     MOV EDX,dword ptr [ECX]
0062E1F0  6A 00                     PUSH 0x0
0062E1F2  68 44 01 00 00            PUSH 0x144
0062E1F7  FF 52 08                  CALL dword ptr [EDX + 0x8]
0062E1FA  5F                        POP EDI
0062E1FB  8B E5                     MOV ESP,EBP
0062E1FD  5D                        POP EBP
0062E1FE  C2 1C 00                  RET 0x1c
