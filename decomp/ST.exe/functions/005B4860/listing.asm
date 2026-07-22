MainMenuTy::sub_005B4860:
005B4860  55                        PUSH EBP
005B4861  8B EC                     MOV EBP,ESP
005B4863  51                        PUSH ECX
005B4864  56                        PUSH ESI
005B4865  8B F1                     MOV ESI,ECX
005B4867  57                        PUSH EDI
005B4868  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
005B486F  C7 86 DF 1E 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1edf],0x0
005B4879  8D 7E 66                  LEA EDI,[ESI + 0x66]
LAB_005b487c:
005B487C  8B 07                     MOV EAX,dword ptr [EDI]
005B487E  85 C0                     TEST EAX,EAX
005B4880  74 24                     JZ 0x005b48a6
005B4882  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005B4885  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005B4888  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005B488F  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005B4896  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
005B489D  8B 01                     MOV EAX,dword ptr [ECX]
005B489F  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005B48A2  52                        PUSH EDX
005B48A3  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005b48a6:
005B48A6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B48A9  83 C7 04                  ADD EDI,0x4
005B48AC  48                        DEC EAX
005B48AD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B48B0  75 CA                     JNZ 0x005b487c
005B48B2  5F                        POP EDI
005B48B3  5E                        POP ESI
005B48B4  8B E5                     MOV ESP,EBP
005B48B6  5D                        POP EBP
005B48B7  C3                        RET
