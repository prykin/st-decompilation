FUN_006c2ac0:
006C2AC0  55                        PUSH EBP
006C2AC1  8B EC                     MOV EBP,ESP
006C2AC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C2AC6  85 C0                     TEST EAX,EAX
006C2AC8  74 09                     JZ 0x006c2ad3
006C2ACA  8D 45 08                  LEA EAX,[EBP + 0x8]
006C2ACD  50                        PUSH EAX
006C2ACE  E8 8D 85 FE FF            CALL 0x006ab060
LAB_006c2ad3:
006C2AD3  5D                        POP EBP
006C2AD4  C2 04 00                  RET 0x4
