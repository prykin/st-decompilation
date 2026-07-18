FUN_0057b990:
0057B990  55                        PUSH EBP
0057B991  8B EC                     MOV EBP,ESP
0057B993  83 EC 3C                  SUB ESP,0x3c
0057B996  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0057B999  85 D2                     TEST EDX,EDX
0057B99B  74 62                     JZ 0x0057b9ff
0057B99D  57                        PUSH EDI
0057B99E  B9 08 00 00 00            MOV ECX,0x8
0057B9A3  33 C0                     XOR EAX,EAX
0057B9A5  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0057B9A8  F3 AB                     STOSD.REP ES:EDI
0057B9AA  B9 07 00 00 00            MOV ECX,0x7
0057B9AF  8D 7D E4                  LEA EDI,[EBP + -0x1c]
0057B9B2  F3 AB                     STOSD.REP ES:EDI
0057B9B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057B9B7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0057B9BA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0057B9BD  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
0057B9C1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0057B9C4  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
0057B9C8  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
0057B9CC  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0057B9CF  66 89 4D F2               MOV word ptr [EBP + -0xe],CX
0057B9D3  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0057B9D6  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0057B9D9  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0057B9DC  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0057B9DF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057B9E5  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0057B9E8  C7 45 D0 02 00 00 00      MOV dword ptr [EBP + -0x30],0x2
0057B9EF  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0057B9F2  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0057B9F5  8B 11                     MOV EDX,dword ptr [ECX]
0057B9F7  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0057B9FA  50                        PUSH EAX
0057B9FB  FF 52 18                  CALL dword ptr [EDX + 0x18]
0057B9FE  5F                        POP EDI
LAB_0057b9ff:
0057B9FF  8B E5                     MOV ESP,EBP
0057BA01  5D                        POP EBP
0057BA02  C3                        RET
