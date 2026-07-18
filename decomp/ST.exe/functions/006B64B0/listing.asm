FUN_006b64b0:
006B64B0  55                        PUSH EBP
006B64B1  8B EC                     MOV EBP,ESP
006B64B3  83 EC 28                  SUB ESP,0x28
006B64B6  56                        PUSH ESI
006B64B7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B64BA  57                        PUSH EDI
006B64BB  B9 0A 00 00 00            MOV ECX,0xa
006B64C0  33 C0                     XOR EAX,EAX
006B64C2  8D 7D D8                  LEA EDI,[EBP + -0x28]
006B64C5  F3 AB                     STOSD.REP ES:EDI
006B64C7  8B 06                     MOV EAX,dword ptr [ESI]
006B64C9  8D 55 D8                  LEA EDX,[EBP + -0x28]
006B64CC  C7 45 D8 28 00 00 00      MOV dword ptr [EBP + -0x28],0x28
006B64D3  6A 00                     PUSH 0x0
006B64D5  8B 08                     MOV ECX,dword ptr [EAX]
006B64D7  52                        PUSH EDX
006B64D8  50                        PUSH EAX
006B64D9  FF 51 38                  CALL dword ptr [ECX + 0x38]
006B64DC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B64DF  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
006B64E2  83 C6 44                  ADD ESI,0x44
006B64E5  56                        PUSH ESI
006B64E6  E8 25 C0 01 00            CALL 0x006d2510
006B64EB  5F                        POP EDI
006B64EC  5E                        POP ESI
006B64ED  8B E5                     MOV ESP,EBP
006B64EF  5D                        POP EBP
006B64F0  C2 04 00                  RET 0x4
