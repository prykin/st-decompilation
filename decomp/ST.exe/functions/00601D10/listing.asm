FUN_00601d10:
00601D10  55                        PUSH EBP
00601D11  8B EC                     MOV EBP,ESP
00601D13  83 EC 3C                  SUB ESP,0x3c
00601D16  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00601D19  85 D2                     TEST EDX,EDX
00601D1B  74 62                     JZ 0x00601d7f
00601D1D  57                        PUSH EDI
00601D1E  B9 07 00 00 00            MOV ECX,0x7
00601D23  33 C0                     XOR EAX,EAX
00601D25  8D 7D E4                  LEA EDI,[EBP + -0x1c]
00601D28  F3 AB                     STOSD.REP ES:EDI
00601D2A  B9 08 00 00 00            MOV ECX,0x8
00601D2F  8D 7D C4                  LEA EDI,[EBP + -0x3c]
00601D32  F3 AB                     STOSD.REP ES:EDI
00601D34  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00601D37  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00601D3A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00601D3D  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
00601D41  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00601D44  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
00601D48  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
00601D4C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00601D4F  66 89 4D F2               MOV word ptr [EBP + -0xe],CX
00601D53  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00601D56  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00601D59  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00601D5C  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00601D5F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00601D65  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00601D68  C7 45 D0 02 00 00 00      MOV dword ptr [EBP + -0x30],0x2
00601D6F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00601D72  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00601D75  8B 11                     MOV EDX,dword ptr [ECX]
00601D77  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00601D7A  50                        PUSH EAX
00601D7B  FF 52 18                  CALL dword ptr [EDX + 0x18]
00601D7E  5F                        POP EDI
LAB_00601d7f:
00601D7F  8B E5                     MOV ESP,EBP
00601D81  5D                        POP EBP
00601D82  C2 1C 00                  RET 0x1c
