FUN_004e4180:
004E4180  55                        PUSH EBP
004E4181  8B EC                     MOV EBP,ESP
004E4183  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E4186  50                        PUSH EAX
004E4187  E8 A4 11 F2 FF            CALL 0x00405330
004E418C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E418F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E4192  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E4195  C1 E0 04                  SHL EAX,0x4
004E4198  05 E8 03 00 00            ADD EAX,0x3e8
004E419D  5D                        POP EBP
004E419E  C2 04 00                  RET 0x4
