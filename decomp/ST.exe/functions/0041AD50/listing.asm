FUN_0041ad50:
0041AD50  55                        PUSH EBP
0041AD51  8B EC                     MOV EBP,ESP
0041AD53  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041AD56  33 C0                     XOR EAX,EAX
0041AD58  89 01                     MOV dword ptr [ECX],EAX
0041AD5A  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0041AD5D  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0041AD60  5D                        POP EBP
0041AD61  C2 04 00                  RET 0x4
