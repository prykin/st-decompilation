FUN_0062b990:
0062B990  55                        PUSH EBP
0062B991  8B EC                     MOV EBP,ESP
0062B993  83 EC 40                  SUB ESP,0x40
0062B996  56                        PUSH ESI
0062B997  57                        PUSH EDI
0062B998  B9 10 00 00 00            MOV ECX,0x10
0062B99D  33 C0                     XOR EAX,EAX
0062B99F  8D 7D C0                  LEA EDI,[EBP + -0x40]
0062B9A2  33 D2                     XOR EDX,EDX
0062B9A4  F3 AB                     STOSD.REP ES:EDI
0062B9A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062B9A9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062B9AC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0062B9AF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062B9B2  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0062B9B5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062B9B8  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0062B9BB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062B9BE  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0062B9C1  8D 75 C0                  LEA ESI,[EBP + -0x40]
0062B9C4  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0062B9C7  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
0062B9CA  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0062B9CD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0062B9D0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0062B9D3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062B9D6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062B9D9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062B9DF  52                        PUSH EDX
0062B9E0  56                        PUSH ESI
0062B9E1  C7 45 C0 D2 00 00 00      MOV dword ptr [EBP + -0x40],0xd2
0062B9E8  C7 45 C4 FF 00 00 00      MOV dword ptr [EBP + -0x3c],0xff
0062B9EF  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0062B9F2  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0062B9F5  C7 45 D8 02 00 00 00      MOV dword ptr [EBP + -0x28],0x2
0062B9FC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0062B9FF  8B 01                     MOV EAX,dword ptr [ECX]
0062BA01  52                        PUSH EDX
0062BA02  52                        PUSH EDX
0062BA03  68 24 01 00 00            PUSH 0x124
0062BA08  FF 50 08                  CALL dword ptr [EAX + 0x8]
0062BA0B  5F                        POP EDI
0062BA0C  5E                        POP ESI
0062BA0D  8B E5                     MOV ESP,EBP
0062BA0F  5D                        POP EBP
0062BA10  C3                        RET
