FUN_006193a0:
006193A0  55                        PUSH EBP
006193A1  8B EC                     MOV EBP,ESP
006193A3  8B C1                     MOV EAX,ECX
006193A5  56                        PUSH ESI
006193A6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006193A9  57                        PUSH EDI
006193AA  B9 41 00 00 00            MOV ECX,0x41
006193AF  8D 78 4D                  LEA EDI,[EAX + 0x4d]
006193B2  F3 A5                     MOVSD.REP ES:EDI,ESI
006193B4  C7 80 97 00 00 00 FF FF FF FF  MOV dword ptr [EAX + 0x97],0xffffffff
006193BE  5F                        POP EDI
006193BF  B8 04 01 00 00            MOV EAX,0x104
006193C4  5E                        POP ESI
006193C5  5D                        POP EBP
006193C6  C2 04 00                  RET 0x4
