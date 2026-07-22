STT3DSprC::sub_004AD020:
004AD020  55                        PUSH EBP
004AD021  8B EC                     MOV EBP,ESP
004AD023  56                        PUSH ESI
004AD024  57                        PUSH EDI
004AD025  0F BE 7D 08               MOVSX EDI,byte ptr [EBP + 0x8]
004AD029  8B F1                     MOV ESI,ECX
004AD02B  6A 00                     PUSH 0x0
004AD02D  57                        PUSH EDI
004AD02E  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004AD031  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AD034  50                        PUSH EAX
004AD035  E8 C6 D7 23 00            CALL 0x006ea800
004AD03A  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004AD03D  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
004AD040  5F                        POP EDI
004AD041  5E                        POP ESI
004AD042  66 81 64 8A 0E 7F FF      AND word ptr [EDX + ECX*0x4 + 0xe],0xff7f
004AD049  8D 44 8A 0E               LEA EAX,[EDX + ECX*0x4 + 0xe]
004AD04D  5D                        POP EBP
004AD04E  C2 04 00                  RET 0x4
