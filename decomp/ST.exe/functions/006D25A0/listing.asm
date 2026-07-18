FUN_006d25a0:
006D25A0  55                        PUSH EBP
006D25A1  8B EC                     MOV EBP,ESP
006D25A3  56                        PUSH ESI
006D25A4  57                        PUSH EDI
006D25A5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D25A8  8B 37                     MOV ESI,dword ptr [EDI]
006D25AA  85 F6                     TEST ESI,ESI
006D25AC  74 12                     JZ 0x006d25c0
LAB_006d25ae:
006D25AE  8D 45 08                  LEA EAX,[EBP + 0x8]
006D25B1  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006D25B4  8B 36                     MOV ESI,dword ptr [ESI]
006D25B6  50                        PUSH EAX
006D25B7  E8 A4 8A FD FF            CALL 0x006ab060
006D25BC  85 F6                     TEST ESI,ESI
006D25BE  75 EE                     JNZ 0x006d25ae
LAB_006d25c0:
006D25C0  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
006D25C6  C7 47 04 00 00 00 00      MOV dword ptr [EDI + 0x4],0x0
006D25CD  5F                        POP EDI
006D25CE  5E                        POP ESI
006D25CF  5D                        POP EBP
006D25D0  C2 04 00                  RET 0x4
