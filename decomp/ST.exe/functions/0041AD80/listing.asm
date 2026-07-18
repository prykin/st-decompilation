FUN_0041ad80:
0041AD80  55                        PUSH EBP
0041AD81  8B EC                     MOV EBP,ESP
0041AD83  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041AD86  33 C0                     XOR EAX,EAX
0041AD88  89 01                     MOV dword ptr [ECX],EAX
0041AD8A  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0041AD8D  66 89 41 08               MOV word ptr [ECX + 0x8],AX
0041AD91  88 41 0A                  MOV byte ptr [ECX + 0xa],AL
0041AD94  5D                        POP EBP
0041AD95  C2 04 00                  RET 0x4
