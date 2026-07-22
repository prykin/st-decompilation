MReportTy::sub_005C0190:
005C0190  55                        PUSH EBP
005C0191  8B EC                     MOV EBP,ESP
005C0193  51                        PUSH ECX
005C0194  56                        PUSH ESI
005C0195  8B F1                     MOV ESI,ECX
005C0197  57                        PUSH EDI
005C0198  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
005C019F  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005C01A6  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005C01AD  8D BE 8F 00 00 00         LEA EDI,[ESI + 0x8f]
LAB_005c01b3:
005C01B3  8B 07                     MOV EAX,dword ptr [EDI]
005C01B5  85 C0                     TEST EAX,EAX
005C01B7  74 16                     JZ 0x005c01cf
005C01B9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C01BC  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C01BF  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
005C01C6  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C01C9  8B 01                     MOV EAX,dword ptr [ECX]
005C01CB  52                        PUSH EDX
005C01CC  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005c01cf:
005C01CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C01D2  83 C7 04                  ADD EDI,0x4
005C01D5  48                        DEC EAX
005C01D6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005C01D9  75 D8                     JNZ 0x005c01b3
005C01DB  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
005C01E1  85 C0                     TEST EAX,EAX
005C01E3  74 16                     JZ 0x005c01fb
005C01E5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C01E8  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C01EB  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
005C01F2  83 C6 1D                  ADD ESI,0x1d
005C01F5  8B 01                     MOV EAX,dword ptr [ECX]
005C01F7  56                        PUSH ESI
005C01F8  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005c01fb:
005C01FB  5F                        POP EDI
005C01FC  5E                        POP ESI
005C01FD  8B E5                     MOV ESP,EBP
005C01FF  5D                        POP EBP
005C0200  C3                        RET
