FUN_004ad4a0:
004AD4A0  55                        PUSH EBP
004AD4A1  8B EC                     MOV EBP,ESP
004AD4A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AD4A6  56                        PUSH ESI
004AD4A7  6A 00                     PUSH 0x0
004AD4A9  6A 00                     PUSH 0x0
004AD4AB  6A 01                     PUSH 0x1
004AD4AD  8B F1                     MOV ESI,ECX
004AD4AF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AD4B2  6A 00                     PUSH 0x0
004AD4B4  6A FF                     PUSH -0x1
004AD4B6  50                        PUSH EAX
004AD4B7  6A 16                     PUSH 0x16
004AD4B9  51                        PUSH ECX
004AD4BA  E8 31 C6 25 00            CALL 0x00709af0
004AD4BF  83 C4 20                  ADD ESP,0x20
004AD4C2  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
004AD4C5  F7 D8                     NEG EAX
004AD4C7  1B C0                     SBB EAX,EAX
004AD4C9  5E                        POP ESI
004AD4CA  F7 D8                     NEG EAX
004AD4CC  48                        DEC EAX
004AD4CD  5D                        POP EBP
004AD4CE  C2 08 00                  RET 0x8
