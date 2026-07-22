STT3DSprC::sub_004ACF50:
004ACF50  55                        PUSH EBP
004ACF51  8B EC                     MOV EBP,ESP
004ACF53  56                        PUSH ESI
004ACF54  57                        PUSH EDI
004ACF55  0F BE 7D 08               MOVSX EDI,byte ptr [EBP + 0x8]
004ACF59  8B F1                     MOV ESI,ECX
004ACF5B  6A 01                     PUSH 0x1
004ACF5D  57                        PUSH EDI
004ACF5E  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004ACF61  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ACF64  50                        PUSH EAX
004ACF65  E8 66 D7 23 00            CALL 0x006ea6d0
004ACF6A  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACF6D  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
004ACF70  5F                        POP EDI
004ACF71  5E                        POP ESI
004ACF72  80 4C 8A 0E 40            OR byte ptr [EDX + ECX*0x4 + 0xe],0x40
004ACF77  8D 44 8A 0E               LEA EAX,[EDX + ECX*0x4 + 0xe]
004ACF7B  5D                        POP EBP
004ACF7C  C2 04 00                  RET 0x4
