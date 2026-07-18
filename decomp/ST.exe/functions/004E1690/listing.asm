FUN_004e1690:
004E1690  55                        PUSH EBP
004E1691  8B EC                     MOV EBP,ESP
004E1693  8B 91 D8 04 00 00         MOV EDX,dword ptr [ECX + 0x4d8]
004E1699  56                        PUSH ESI
004E169A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004E169D  33 C0                     XOR EAX,EAX
004E169F  3B D6                     CMP EDX,ESI
004E16A1  5E                        POP ESI
004E16A2  75 0F                     JNZ 0x004e16b3
004E16A4  B8 01 00 00 00            MOV EAX,0x1
004E16A9  C7 81 D8 04 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x4d8],0xffffffff
LAB_004e16b3:
004E16B3  5D                        POP EBP
004E16B4  C2 04 00                  RET 0x4
