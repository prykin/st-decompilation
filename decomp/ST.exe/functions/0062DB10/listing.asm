FUN_0062db10:
0062DB10  55                        PUSH EBP
0062DB11  8B EC                     MOV EBP,ESP
0062DB13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062DB16  85 C0                     TEST EAX,EAX
0062DB18  74 1D                     JZ 0x0062db37
0062DB1A  8D 4D 08                  LEA ECX,[EBP + 0x8]
0062DB1D  51                        PUSH ECX
0062DB1E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062DB24  50                        PUSH EAX
0062DB25  E8 A6 87 0B 00            CALL 0x006e62d0
0062DB2A  83 F8 FC                  CMP EAX,-0x4
0062DB2D  74 08                     JZ 0x0062db37
0062DB2F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062DB32  E8 0A 53 DD FF            CALL 0x00402e41
LAB_0062db37:
0062DB37  5D                        POP EBP
0062DB38  C2 04 00                  RET 0x4
