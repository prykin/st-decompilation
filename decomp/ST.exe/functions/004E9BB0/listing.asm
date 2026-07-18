FUN_004e9bb0:
004E9BB0  55                        PUSH EBP
004E9BB1  8B EC                     MOV EBP,ESP
004E9BB3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E9BB6  8B 81 F8 04 00 00         MOV EAX,dword ptr [ECX + 0x4f8]
004E9BBC  56                        PUSH ESI
004E9BBD  8B 72 18                  MOV ESI,dword ptr [EDX + 0x18]
004E9BC0  3B C6                     CMP EAX,ESI
004E9BC2  5E                        POP ESI
004E9BC3  75 1E                     JNZ 0x004e9be3
004E9BC5  8B 91 FC 04 00 00         MOV EDX,dword ptr [ECX + 0x4fc]
004E9BCB  33 C0                     XOR EAX,EAX
004E9BCD  3B D0                     CMP EDX,EAX
004E9BCF  74 12                     JZ 0x004e9be3
004E9BD1  89 81 F8 04 00 00         MOV dword ptr [ECX + 0x4f8],EAX
004E9BD7  89 81 FC 04 00 00         MOV dword ptr [ECX + 0x4fc],EAX
004E9BDD  89 81 1B 06 00 00         MOV dword ptr [ECX + 0x61b],EAX
LAB_004e9be3:
004E9BE3  33 C0                     XOR EAX,EAX
004E9BE5  5D                        POP EBP
004E9BE6  C2 04 00                  RET 0x4
