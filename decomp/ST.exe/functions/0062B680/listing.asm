FUN_0062b680:
0062B680  55                        PUSH EBP
0062B681  8B EC                     MOV EBP,ESP
0062B683  83 EC 40                  SUB ESP,0x40
0062B686  56                        PUSH ESI
0062B687  57                        PUSH EDI
0062B688  B9 10 00 00 00            MOV ECX,0x10
0062B68D  33 C0                     XOR EAX,EAX
0062B68F  8D 7D C0                  LEA EDI,[EBP + -0x40]
0062B692  33 D2                     XOR EDX,EDX
0062B694  F3 AB                     STOSD.REP ES:EDI
0062B696  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062B699  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062B69C  25 FF FF 00 00            AND EAX,0xffff
0062B6A1  81 E1 FF FF 00 00         AND ECX,0xffff
0062B6A7  C1 E0 10                  SHL EAX,0x10
0062B6AA  0B C1                     OR EAX,ECX
0062B6AC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0062B6AF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0062B6B2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062B6B5  25 FF FF 00 00            AND EAX,0xffff
0062B6BA  81 E1 FF FF 00 00         AND ECX,0xffff
0062B6C0  C1 E0 10                  SHL EAX,0x10
0062B6C3  0B C1                     OR EAX,ECX
0062B6C5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0062B6C8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0062B6CB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062B6CE  25 FF FF 00 00            AND EAX,0xffff
0062B6D3  81 E1 FF FF 00 00         AND ECX,0xffff
0062B6D9  C1 E0 10                  SHL EAX,0x10
0062B6DC  0B C1                     OR EAX,ECX
0062B6DE  8D 75 C0                  LEA ESI,[EBP + -0x40]
0062B6E1  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0062B6E4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062B6E7  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0062B6EA  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0062B6ED  52                        PUSH EDX
0062B6EE  56                        PUSH ESI
0062B6EF  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0062B6F2  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
0062B6F5  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0062B6F8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062B6FE  C7 45 C0 D2 00 00 00      MOV dword ptr [EBP + -0x40],0xd2
0062B705  C7 45 C4 FF 00 00 00      MOV dword ptr [EBP + -0x3c],0xff
0062B70C  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0062B70F  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0062B712  C7 45 D8 03 00 00 00      MOV dword ptr [EBP + -0x28],0x3
0062B719  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0062B71C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062B71F  8B 01                     MOV EAX,dword ptr [ECX]
0062B721  52                        PUSH EDX
0062B722  52                        PUSH EDX
0062B723  68 24 01 00 00            PUSH 0x124
0062B728  FF 50 08                  CALL dword ptr [EAX + 0x8]
0062B72B  5F                        POP EDI
0062B72C  5E                        POP ESI
0062B72D  8B E5                     MOV ESP,EBP
0062B72F  5D                        POP EBP
0062B730  C3                        RET
