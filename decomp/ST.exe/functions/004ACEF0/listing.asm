FUN_004acef0:
004ACEF0  55                        PUSH EBP
004ACEF1  8B EC                     MOV EBP,ESP
004ACEF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004ACEF6  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004ACEF9  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004ACEFC  50                        PUSH EAX
004ACEFD  52                        PUSH EDX
004ACEFE  E8 7D D7 23 00            CALL 0x006ea680
004ACF03  5D                        POP EBP
004ACF04  C2 04 00                  RET 0x4
