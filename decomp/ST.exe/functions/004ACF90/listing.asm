STT3DSprC::sub_004ACF90:
004ACF90  55                        PUSH EBP
004ACF91  8B EC                     MOV EBP,ESP
004ACF93  56                        PUSH ESI
004ACF94  57                        PUSH EDI
004ACF95  0F BE 7D 08               MOVSX EDI,byte ptr [EBP + 0x8]
004ACF99  8B F1                     MOV ESI,ECX
004ACF9B  6A 00                     PUSH 0x0
004ACF9D  57                        PUSH EDI
004ACF9E  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004ACFA1  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ACFA4  50                        PUSH EAX
004ACFA5  E8 26 D7 23 00            CALL 0x006ea6d0
004ACFAA  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACFAD  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
004ACFB0  5F                        POP EDI
004ACFB1  5E                        POP ESI
004ACFB2  66 81 64 8A 0E BF FF      AND word ptr [EDX + ECX*0x4 + 0xe],0xffbf
004ACFB9  8D 44 8A 0E               LEA EAX,[EDX + ECX*0x4 + 0xe]
004ACFBD  5D                        POP EBP
004ACFBE  C2 04 00                  RET 0x4
