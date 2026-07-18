FUN_004be320:
004BE320  55                        PUSH EBP
004BE321  8B EC                     MOV EBP,ESP
004BE323  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004BE326  85 C0                     TEST EAX,EAX
004BE328  74 08                     JZ 0x004be332
004BE32A  8B 91 DC 04 00 00         MOV EDX,dword ptr [ECX + 0x4dc]
004BE330  89 10                     MOV dword ptr [EAX],EDX
LAB_004be332:
004BE332  8B 81 E0 04 00 00         MOV EAX,dword ptr [ECX + 0x4e0]
004BE338  5D                        POP EBP
004BE339  C2 04 00                  RET 0x4
