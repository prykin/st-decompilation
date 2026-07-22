STT3DSprC::sub_004ACFE0:
004ACFE0  55                        PUSH EBP
004ACFE1  8B EC                     MOV EBP,ESP
004ACFE3  56                        PUSH ESI
004ACFE4  57                        PUSH EDI
004ACFE5  0F BE 7D 08               MOVSX EDI,byte ptr [EBP + 0x8]
004ACFE9  8B F1                     MOV ESI,ECX
004ACFEB  6A 01                     PUSH 0x1
004ACFED  57                        PUSH EDI
004ACFEE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004ACFF1  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ACFF4  50                        PUSH EAX
004ACFF5  E8 06 D8 23 00            CALL 0x006ea800
004ACFFA  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACFFD  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
004AD000  5F                        POP EDI
004AD001  5E                        POP ESI
004AD002  80 4C 8A 0E 80            OR byte ptr [EDX + ECX*0x4 + 0xe],0x80
004AD007  8D 44 8A 0E               LEA EAX,[EDX + ECX*0x4 + 0xe]
004AD00B  5D                        POP EBP
004AD00C  C2 04 00                  RET 0x4
