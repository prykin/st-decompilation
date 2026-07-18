FUN_006f21a0:
006F21A0  55                        PUSH EBP
006F21A1  8B EC                     MOV EBP,ESP
006F21A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F21A6  8B 09                     MOV ECX,dword ptr [ECX]
006F21A8  50                        PUSH EAX
006F21A9  51                        PUSH ECX
006F21AA  E8 61 F9 05 00            CALL 0x00751b10
006F21AF  5D                        POP EBP
006F21B0  C2 04 00                  RET 0x4
