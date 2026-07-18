FUN_0041ae10:
0041AE10  55                        PUSH EBP
0041AE11  8B EC                     MOV EBP,ESP
0041AE13  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041AE16  33 C0                     XOR EAX,EAX
0041AE18  89 01                     MOV dword ptr [ECX],EAX
0041AE1A  66 89 41 04               MOV word ptr [ECX + 0x4],AX
0041AE1E  5D                        POP EBP
0041AE1F  C2 04 00                  RET 0x4
