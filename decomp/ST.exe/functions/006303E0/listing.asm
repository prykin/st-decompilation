FUN_006303e0:
006303E0  55                        PUSH EBP
006303E1  8B EC                     MOV EBP,ESP
006303E3  56                        PUSH ESI
006303E4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006303E7  33 C0                     XOR EAX,EAX
006303E9  8B 94 B1 E5 01 00 00      MOV EDX,dword ptr [ECX + ESI*0x4 + 0x1e5]
006303F0  85 D2                     TEST EDX,EDX
006303F2  74 1C                     JZ 0x00630410
006303F4  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
006303F7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006303FA  89 02                     MOV dword ptr [EDX],EAX
006303FC  8B 84 B1 E5 01 00 00      MOV EAX,dword ptr [ECX + ESI*0x4 + 0x1e5]
00630403  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00630406  83 C0 14                  ADD EAX,0x14
00630409  89 01                     MOV dword ptr [ECX],EAX
0063040B  B8 01 00 00 00            MOV EAX,0x1
LAB_00630410:
00630410  5E                        POP ESI
00630411  5D                        POP EBP
00630412  C2 0C 00                  RET 0xc
