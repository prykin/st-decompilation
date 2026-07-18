FUN_0071e060:
0071E060  55                        PUSH EBP
0071E061  8B EC                     MOV EBP,ESP
0071E063  83 EC 20                  SUB ESP,0x20
0071E066  56                        PUSH ESI
0071E067  8B F1                     MOV ESI,ECX
0071E069  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0071E06C  85 C0                     TEST EAX,EAX
0071E06E  7C 29                     JL 0x0071e099
0071E070  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0071E073  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0071E076  8D 45 E0                  LEA EAX,[EBP + -0x20]
0071E079  50                        PUSH EAX
0071E07A  8B CE                     MOV ECX,ESI
0071E07C  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0071E07F  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
0071E086  C7 45 F0 20 00 00 00      MOV dword ptr [EBP + -0x10],0x20
0071E08D  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0071E094  E8 C7 7F FC FF            CALL 0x006e6060
LAB_0071e099:
0071E099  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071E09C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071E09F  85 C9                     TEST ECX,ECX
0071E0A1  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0071E0A4  74 29                     JZ 0x0071e0cf
0071E0A6  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0071E0A9  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0071E0AC  8D 45 E0                  LEA EAX,[EBP + -0x20]
0071E0AF  50                        PUSH EAX
0071E0B0  8B CE                     MOV ECX,ESI
0071E0B2  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0071E0B5  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
0071E0BC  C7 45 F0 20 00 00 00      MOV dword ptr [EBP + -0x10],0x20
0071E0C3  C7 45 F4 03 00 00 00      MOV dword ptr [EBP + -0xc],0x3
0071E0CA  E8 91 7F FC FF            CALL 0x006e6060
LAB_0071e0cf:
0071E0CF  33 C0                     XOR EAX,EAX
0071E0D1  5E                        POP ESI
0071E0D2  8B E5                     MOV ESP,EBP
0071E0D4  5D                        POP EBP
0071E0D5  C2 08 00                  RET 0x8
