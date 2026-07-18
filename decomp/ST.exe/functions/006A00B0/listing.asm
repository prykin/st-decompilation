FUN_006a00b0:
006A00B0  55                        PUSH EBP
006A00B1  8B EC                     MOV EBP,ESP
006A00B3  51                        PUSH ECX
006A00B4  53                        PUSH EBX
006A00B5  56                        PUSH ESI
006A00B6  8B F1                     MOV ESI,ECX
006A00B8  57                        PUSH EDI
006A00B9  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006A00BC  8D 46 08                  LEA EAX,[ESI + 0x8]
006A00BF  85 C9                     TEST ECX,ECX
006A00C1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A00C4  74 09                     JZ 0x006a00cf
006A00C6  50                        PUSH EAX
006A00C7  E8 14 07 05 00            CALL 0x006f07e0
006A00CC  83 C4 04                  ADD ESP,0x4
LAB_006a00cf:
006A00CF  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006A00D2  8D 5E 0C                  LEA EBX,[ESI + 0xc]
006A00D5  85 C0                     TEST EAX,EAX
006A00D7  74 09                     JZ 0x006a00e2
006A00D9  53                        PUSH EBX
006A00DA  E8 91 FA 04 00            CALL 0x006efb70
006A00DF  83 C4 04                  ADD ESP,0x4
LAB_006a00e2:
006A00E2  8B 86 FF 56 00 00         MOV EAX,dword ptr [ESI + 0x56ff]
006A00E8  8D BE FF 56 00 00         LEA EDI,[ESI + 0x56ff]
006A00EE  85 C0                     TEST EAX,EAX
006A00F0  74 06                     JZ 0x006a00f8
006A00F2  57                        PUSH EDI
006A00F3  E8 68 AF 00 00            CALL 0x006ab060
LAB_006a00f8:
006A00F8  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006A00FB  85 C0                     TEST EAX,EAX
006A00FD  74 09                     JZ 0x006a0108
006A00FF  50                        PUSH EAX
006A0100  E8 6B 10 05 00            CALL 0x006f1170
006A0105  83 C4 04                  ADD ESP,0x4
LAB_006a0108:
006A0108  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A010B  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
006A0111  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
006A0118  5F                        POP EDI
006A0119  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006A011F  5E                        POP ESI
006A0120  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006A0126  5B                        POP EBX
006A0127  8B E5                     MOV ESP,EBP
006A0129  5D                        POP EBP
006A012A  C3                        RET
