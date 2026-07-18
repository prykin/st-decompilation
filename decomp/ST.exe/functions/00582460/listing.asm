FUN_00582460:
00582460  55                        PUSH EBP
00582461  8B EC                     MOV EBP,ESP
00582463  83 EC 40                  SUB ESP,0x40
00582466  56                        PUSH ESI
00582467  57                        PUSH EDI
00582468  B9 0F 00 00 00            MOV ECX,0xf
0058246D  33 C0                     XOR EAX,EAX
0058246F  8D 7D C0                  LEA EDI,[EBP + -0x40]
00582472  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00582475  F3 AB                     STOSD.REP ES:EDI
00582477  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0058247A  8D 75 C0                  LEA ESI,[EBP + -0x40]
0058247D  66 AB                     STOSW ES:EDI
0058247F  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00582482  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00582485  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00582488  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0058248B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0058248E  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00582491  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00582494  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00582497  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0058249A  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0058249D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005824A0  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
005824A3  33 C0                     XOR EAX,EAX
005824A5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005824A8  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005824AB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005824AE  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
005824B1  50                        PUSH EAX
005824B2  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005824B5  66 8B 55 34               MOV DX,word ptr [EBP + 0x34]
005824B9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005824BC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005824C2  56                        PUSH ESI
005824C3  8D 75 28                  LEA ESI,[EBP + 0x28]
005824C6  C7 45 C0 FA 00 00 00      MOV dword ptr [EBP + -0x40],0xfa
005824CD  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
005824D0  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
005824D7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005824DA  66 89 55 FC               MOV word ptr [EBP + -0x4],DX
005824DE  8B 11                     MOV EDX,dword ptr [ECX]
005824E0  56                        PUSH ESI
005824E1  50                        PUSH EAX
005824E2  68 37 01 00 00            PUSH 0x137
005824E7  FF 52 08                  CALL dword ptr [EDX + 0x8]
005824EA  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
005824ED  5F                        POP EDI
005824EE  5E                        POP ESI
005824EF  8B E5                     MOV ESP,EBP
005824F1  5D                        POP EBP
005824F2  C3                        RET
