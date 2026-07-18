FUN_006db5f0:
006DB5F0  55                        PUSH EBP
006DB5F1  8B EC                     MOV EBP,ESP
006DB5F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DB5F6  F7 6D 0C                  IMUL dword ptr [EBP + 0xc]
006DB5F9  05 00 80 00 00            ADD EAX,0x8000
006DB5FE  83 D2 00                  ADC EDX,0x0
006DB601  0F AC D0 10               SHRD EAX,EDX,0x10
006DB605  5D                        POP EBP
006DB606  C2 08 00                  RET 0x8
