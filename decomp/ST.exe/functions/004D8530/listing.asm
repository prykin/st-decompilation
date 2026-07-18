FUN_004d8530:
004D8530  55                        PUSH EBP
004D8531  8B EC                     MOV EBP,ESP
004D8533  51                        PUSH ECX
004D8534  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004D8539  56                        PUSH ESI
004D853A  85 C0                     TEST EAX,EAX
004D853C  74 4A                     JZ 0x004d8588
004D853E  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004D8545  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004D854B  8D 55 FC                  LEA EDX,[EBP + -0x4]
004D854E  E8 3D 8C 1D 00            CALL 0x006b1190
004D8553  85 C0                     TEST EAX,EAX
004D8555  7C 31                     JL 0x004d8588
004D8557  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_004d855a:
004D855A  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004D855D  74 19                     JZ 0x004d8578
004D855F  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004D8565  8D 55 FC                  LEA EDX,[EBP + -0x4]
004D8568  E8 23 8C 1D 00            CALL 0x006b1190
004D856D  85 C0                     TEST EAX,EAX
004D856F  7D E9                     JGE 0x004d855a
004D8571  5E                        POP ESI
004D8572  8B E5                     MOV ESP,EBP
004D8574  5D                        POP EBP
004D8575  C2 04 00                  RET 0x4
LAB_004d8578:
004D8578  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004D857D  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004D8580  49                        DEC ECX
004D8581  51                        PUSH ECX
004D8582  50                        PUSH EAX
004D8583  E8 E8 86 1D 00            CALL 0x006b0c70
LAB_004d8588:
004D8588  5E                        POP ESI
004D8589  8B E5                     MOV ESP,EBP
004D858B  5D                        POP EBP
004D858C  C2 04 00                  RET 0x4
