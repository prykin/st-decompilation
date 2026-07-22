STColl3C::sub_005F6F20:
005F6F20  55                        PUSH EBP
005F6F21  8B EC                     MOV EBP,ESP
005F6F23  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F6F26  56                        PUSH ESI
005F6F27  8B B1 69 02 00 00         MOV ESI,dword ptr [ECX + 0x269]
005F6F2D  33 C0                     XOR EAX,EAX
005F6F2F  2B F2                     SUB ESI,EDX
005F6F31  8B D6                     MOV EDX,ESI
005F6F33  89 B1 69 02 00 00         MOV dword ptr [ECX + 0x269],ESI
005F6F39  3B D0                     CMP EDX,EAX
005F6F3B  5E                        POP ESI
005F6F3C  7F 0B                     JG 0x005f6f49
005F6F3E  89 81 69 02 00 00         MOV dword ptr [ECX + 0x269],EAX
005F6F44  B8 01 00 00 00            MOV EAX,0x1
LAB_005f6f49:
005F6F49  5D                        POP EBP
005F6F4A  C2 04 00                  RET 0x4
