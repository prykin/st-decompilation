FUN_00677220:
00677220  55                        PUSH EBP
00677221  8B EC                     MOV EBP,ESP
00677223  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00677226  85 C0                     TEST EAX,EAX
00677228  74 0A                     JZ 0x00677234
0067722A  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0067722D  51                        PUSH ECX
0067722E  50                        PUSH EAX
0067722F  E8 8C 6F 03 00            CALL 0x006ae1c0
LAB_00677234:
00677234  33 C0                     XOR EAX,EAX
00677236  5D                        POP EBP
00677237  C3                        RET
