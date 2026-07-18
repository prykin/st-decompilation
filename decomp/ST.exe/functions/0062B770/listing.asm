FUN_0062b770:
0062B770  55                        PUSH EBP
0062B771  8B EC                     MOV EBP,ESP
0062B773  83 EC 40                  SUB ESP,0x40
0062B776  56                        PUSH ESI
0062B777  57                        PUSH EDI
0062B778  B9 10 00 00 00            MOV ECX,0x10
0062B77D  33 C0                     XOR EAX,EAX
0062B77F  8D 7D C0                  LEA EDI,[EBP + -0x40]
0062B782  33 D2                     XOR EDX,EDX
0062B784  F3 AB                     STOSD.REP ES:EDI
0062B786  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062B789  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062B78C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0062B78F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062B792  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0062B795  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062B798  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0062B79B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062B79E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0062B7A1  8D 75 C0                  LEA ESI,[EBP + -0x40]
0062B7A4  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0062B7A7  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
0062B7AA  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0062B7AD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0062B7B0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0062B7B3  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0062B7B6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0062B7B9  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062B7BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0062B7BF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062B7C5  52                        PUSH EDX
0062B7C6  56                        PUSH ESI
0062B7C7  C7 45 C0 D2 00 00 00      MOV dword ptr [EBP + -0x40],0xd2
0062B7CE  C7 45 C4 FF 00 00 00      MOV dword ptr [EBP + -0x3c],0xff
0062B7D5  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0062B7D8  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0062B7DB  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0062B7DE  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0062B7E1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062B7E4  8B 01                     MOV EAX,dword ptr [ECX]
0062B7E6  52                        PUSH EDX
0062B7E7  52                        PUSH EDX
0062B7E8  68 24 01 00 00            PUSH 0x124
0062B7ED  FF 50 08                  CALL dword ptr [EAX + 0x8]
0062B7F0  5F                        POP EDI
0062B7F1  5E                        POP ESI
0062B7F2  8B E5                     MOV ESP,EBP
0062B7F4  5D                        POP EBP
0062B7F5  C3                        RET
