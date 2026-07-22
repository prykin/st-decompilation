STT3DSprC::sub_004ACF20:
004ACF20  55                        PUSH EBP
004ACF21  8B EC                     MOV EBP,ESP
004ACF23  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004ACF26  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004ACF29  50                        PUSH EAX
004ACF2A  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004ACF2D  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004ACF30  52                        PUSH EDX
004ACF31  50                        PUSH EAX
004ACF32  E8 59 D8 23 00            CALL 0x006ea790
004ACF37  5D                        POP EBP
004ACF38  C2 08 00                  RET 0x8
