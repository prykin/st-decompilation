FUN_004ad460:
004AD460  55                        PUSH EBP
004AD461  8B EC                     MOV EBP,ESP
004AD463  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AD466  56                        PUSH ESI
004AD467  8B F1                     MOV ESI,ECX
004AD469  50                        PUSH EAX
004AD46A  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004AD46D  51                        PUSH ECX
004AD46E  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AD471  E8 2A D6 23 00            CALL 0x006eaaa0
004AD476  83 F8 01                  CMP EAX,0x1
004AD479  75 04                     JNZ 0x004ad47f
004AD47B  C6 46 12 00               MOV byte ptr [ESI + 0x12],0x0
LAB_004ad47f:
004AD47F  5E                        POP ESI
004AD480  5D                        POP EBP
004AD481  C2 04 00                  RET 0x4
