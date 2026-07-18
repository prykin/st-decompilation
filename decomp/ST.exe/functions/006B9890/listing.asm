FUN_006b9890:
006B9890  55                        PUSH EBP
006B9891  8B EC                     MOV EBP,ESP
006B9893  56                        PUSH ESI
006B9894  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B9897  8B 06                     MOV EAX,dword ptr [ESI]
006B9899  85 C0                     TEST EAX,EAX
006B989B  74 19                     JZ 0x006b98b6
LAB_006b989d:
006B989D  50                        PUSH EAX
006B989E  56                        PUSH ESI
006B989F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B98A2  E8 19 00 00 00            CALL 0x006b98c0
006B98A7  8D 45 08                  LEA EAX,[EBP + 0x8]
006B98AA  50                        PUSH EAX
006B98AB  E8 B0 17 FF FF            CALL 0x006ab060
006B98B0  8B 06                     MOV EAX,dword ptr [ESI]
006B98B2  85 C0                     TEST EAX,EAX
006B98B4  75 E7                     JNZ 0x006b989d
LAB_006b98b6:
006B98B6  5E                        POP ESI
006B98B7  5D                        POP EBP
006B98B8  C2 04 00                  RET 0x4
