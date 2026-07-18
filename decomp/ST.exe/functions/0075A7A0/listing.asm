FUN_0075a7a0:
0075A7A0  55                        PUSH EBP
0075A7A1  8B EC                     MOV EBP,ESP
0075A7A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075A7A6  56                        PUSH ESI
0075A7A7  BA 01 00 00 00            MOV EDX,0x1
0075A7AC  8B B1 36 01 00 00         MOV ESI,dword ptr [ECX + 0x136]
0075A7B2  8B 81 9A 01 00 00         MOV EAX,dword ptr [ECX + 0x19a]
0075A7B8  3B F2                     CMP ESI,EDX
0075A7BA  7F 2D                     JG 0x0075a7e9
0075A7BC  8B 91 2E 01 00 00         MOV EDX,dword ptr [ECX + 0x12e]
0075A7C2  8B B1 8C 00 00 00         MOV ESI,dword ptr [ECX + 0x8c]
0075A7C8  8B 89 3A 01 00 00         MOV ECX,dword ptr [ECX + 0x13a]
0075A7CE  4A                        DEC EDX
0075A7CF  3B F2                     CMP ESI,EDX
0075A7D1  73 13                     JNC 0x0075a7e6
0075A7D3  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0075A7D6  33 C9                     XOR ECX,ECX
0075A7D8  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
0075A7DB  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
0075A7DE  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
0075A7E1  5E                        POP ESI
0075A7E2  5D                        POP EBP
0075A7E3  C2 04 00                  RET 0x4
LAB_0075a7e6:
0075A7E6  8B 51 48                  MOV EDX,dword ptr [ECX + 0x48]
LAB_0075a7e9:
0075A7E9  33 C9                     XOR ECX,ECX
0075A7EB  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
0075A7EE  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
0075A7F1  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
0075A7F4  5E                        POP ESI
0075A7F5  5D                        POP EBP
0075A7F6  C2 04 00                  RET 0x4
