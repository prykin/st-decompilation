FUN_004aceb0:
004ACEB0  55                        PUSH EBP
004ACEB1  8B EC                     MOV EBP,ESP
004ACEB3  56                        PUSH ESI
004ACEB4  57                        PUSH EDI
004ACEB5  0F BE 7D 08               MOVSX EDI,byte ptr [EBP + 0x8]
004ACEB9  8B F1                     MOV ESI,ECX
004ACEBB  6A 00                     PUSH 0x0
004ACEBD  57                        PUSH EDI
004ACEBE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004ACEC1  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ACEC4  50                        PUSH EAX
004ACEC5  E8 C6 C5 23 00            CALL 0x006e9490
004ACECA  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACECD  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
004ACED0  5F                        POP EDI
004ACED1  5E                        POP ESI
004ACED2  80 4C 8A 0E 20            OR byte ptr [EDX + ECX*0x4 + 0xe],0x20
004ACED7  8D 44 8A 0E               LEA EAX,[EDX + ECX*0x4 + 0xe]
004ACEDB  5D                        POP EBP
004ACEDC  C2 04 00                  RET 0x4
