FUN_004eefb0:
004EEFB0  55                        PUSH EBP
004EEFB1  8B EC                     MOV EBP,ESP
004EEFB3  56                        PUSH ESI
004EEFB4  8B F1                     MOV ESI,ECX
004EEFB6  57                        PUSH EDI
004EEFB7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004EEFBA  3B 7E 5C                  CMP EDI,dword ptr [ESI + 0x5c]
004EEFBD  74 35                     JZ 0x004eeff4
004EEFBF  57                        PUSH EDI
004EEFC0  E8 75 3B F1 FF            CALL 0x00402b3a
004EEFC5  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
004EEFCB  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
004EEFD2  85 FF                     TEST EDI,EDI
004EEFD4  74 02                     JZ 0x004eefd8
004EEFD6  F7 D8                     NEG EAX
LAB_004eefd8:
004EEFD8  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
004EEFDC  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
004EEFE2  85 C0                     TEST EAX,EAX
004EEFE4  74 0E                     JZ 0x004eeff4
004EEFE6  8D 4E 18                  LEA ECX,[ESI + 0x18]
004EEFE9  51                        PUSH ECX
004EEFEA  50                        PUSH EAX
004EEFEB  6A 02                     PUSH 0x2
004EEFED  8B CE                     MOV ECX,ESI
004EEFEF  E8 8C 70 1F 00            CALL 0x006e6080
LAB_004eeff4:
004EEFF4  5F                        POP EDI
004EEFF5  5E                        POP ESI
004EEFF6  5D                        POP EBP
004EEFF7  C2 04 00                  RET 0x4
