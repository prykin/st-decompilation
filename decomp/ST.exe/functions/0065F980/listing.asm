AiFltClassTy::sub_0065F980:
0065F980  55                        PUSH EBP
0065F981  8B EC                     MOV EBP,ESP
0065F983  83 EC 20                  SUB ESP,0x20
0065F986  8B 15 BC 17 81 00         MOV EDX,dword ptr [0x008117bc]
0065F98C  56                        PUSH ESI
0065F98D  85 D2                     TEST EDX,EDX
0065F98F  8B F1                     MOV ESI,ECX
0065F991  74 4C                     JZ 0x0065f9df
0065F993  57                        PUSH EDI
0065F994  B9 08 00 00 00            MOV ECX,0x8
0065F999  33 C0                     XOR EAX,EAX
0065F99B  8D 7D E0                  LEA EDI,[EBP + -0x20]
0065F99E  F3 AB                     STOSD.REP ES:EDI
0065F9A0  66 8B 46 24               MOV AX,word ptr [ESI + 0x24]
0065F9A4  66 8B 4E 7D               MOV CX,word ptr [ESI + 0x7d]
0065F9A8  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
0065F9AC  66 8B 86 B3 00 00 00      MOV AX,word ptr [ESI + 0xb3]
0065F9B3  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
0065F9B7  8D 4D E0                  LEA ECX,[EBP + -0x20]
0065F9BA  C7 45 F0 E5 5D 00 00      MOV dword ptr [EBP + -0x10],0x5de5
0065F9C1  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0065F9C4  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0065F9C8  8B 02                     MOV EAX,dword ptr [EDX]
0065F9CA  51                        PUSH ECX
0065F9CB  8B CA                     MOV ECX,EDX
0065F9CD  FF 10                     CALL dword ptr [EAX]
0065F9CF  C7 86 B3 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb3],0x0
0065F9D9  5F                        POP EDI
0065F9DA  5E                        POP ESI
0065F9DB  8B E5                     MOV ESP,EBP
0065F9DD  5D                        POP EBP
0065F9DE  C3                        RET
LAB_0065f9df:
0065F9DF  C7 86 B3 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb3],0x0
0065F9E9  5E                        POP ESI
0065F9EA  8B E5                     MOV ESP,EBP
0065F9EC  5D                        POP EBP
0065F9ED  C3                        RET
