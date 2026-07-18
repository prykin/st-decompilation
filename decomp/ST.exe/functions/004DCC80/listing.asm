FUN_004dcc80:
004DCC80  55                        PUSH EBP
004DCC81  8B EC                     MOV EBP,ESP
004DCC83  51                        PUSH ECX
004DCC84  56                        PUSH ESI
004DCC85  8B F1                     MOV ESI,ECX
004DCC87  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004DCC8E  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004DCC94  85 C0                     TEST EAX,EAX
004DCC96  74 26                     JZ 0x004dccbe
004DCC98  8D 4D FC                  LEA ECX,[EBP + -0x4]
004DCC9B  51                        PUSH ECX
004DCC9C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DCCA2  50                        PUSH EAX
004DCCA3  E8 28 96 20 00            CALL 0x006e62d0
004DCCA8  85 C0                     TEST EAX,EAX
004DCCAA  75 08                     JNZ 0x004dccb4
004DCCAC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DCCAF  E8 54 5E F2 FF            CALL 0x00402b08
LAB_004dccb4:
004DCCB4  C7 86 EC 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4ec],0x0
LAB_004dccbe:
004DCCBE  33 C0                     XOR EAX,EAX
004DCCC0  5E                        POP ESI
004DCCC1  8B E5                     MOV ESP,EBP
004DCCC3  5D                        POP EBP
004DCCC4  C3                        RET
