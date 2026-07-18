FUN_006c7030:
006C7030  55                        PUSH EBP
006C7031  8B EC                     MOV EBP,ESP
006C7033  56                        PUSH ESI
006C7034  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C7037  8B 46 52                  MOV EAX,dword ptr [ESI + 0x52]
006C703A  50                        PUSH EAX
006C703B  56                        PUSH ESI
006C703C  FF 56 4E                  CALL dword ptr [ESI + 0x4e]
006C703F  8D 4E 2A                  LEA ECX,[ESI + 0x2a]
006C7042  C6 46 17 00               MOV byte ptr [ESI + 0x17],0x0
006C7046  51                        PUSH ECX
006C7047  E8 14 40 FE FF            CALL 0x006ab060
006C704C  C7 46 56 04 00 00 00      MOV dword ptr [ESI + 0x56],0x4
006C7053  C6 46 5E 00               MOV byte ptr [ESI + 0x5e],0x0
006C7057  66 C7 46 5F 00 00         MOV word ptr [ESI + 0x5f],0x0
006C705D  83 C6 72                  ADD ESI,0x72
006C7060  56                        PUSH ESI
006C7061  E8 FA 3F FE FF            CALL 0x006ab060
006C7066  5E                        POP ESI
006C7067  5D                        POP EBP
006C7068  C2 04 00                  RET 0x4
