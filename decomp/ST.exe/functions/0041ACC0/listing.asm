FUN_0041acc0:
0041ACC0  55                        PUSH EBP
0041ACC1  8B EC                     MOV EBP,ESP
0041ACC3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0041ACC6  33 C0                     XOR EAX,EAX
0041ACC8  89 01                     MOV dword ptr [ECX],EAX
0041ACCA  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0041ACCD  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0041ACD0  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0041ACD3  5D                        POP EBP
0041ACD4  C2 04 00                  RET 0x4
