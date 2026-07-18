FUN_0074d39e:
0074D39E  55                        PUSH EBP
0074D39F  8B EC                     MOV EBP,ESP
0074D3A1  51                        PUSH ECX
0074D3A2  56                        PUSH ESI
0074D3A3  8B F1                     MOV ESI,ECX
0074D3A5  6A 00                     PUSH 0x0
0074D3A7  FF 76 04                  PUSH dword ptr [ESI + 0x4]
0074D3AA  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
0074D3B0  F7 D8                     NEG EAX
0074D3B2  1B C0                     SBB EAX,EAX
0074D3B4  40                        INC EAX
0074D3B5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074D3B8  75 04                     JNZ 0x0074d3be
0074D3BA  33 C0                     XOR EAX,EAX
0074D3BC  EB 0F                     JMP 0x0074d3cd
LAB_0074d3be:
0074D3BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074D3C1  85 C0                     TEST EAX,EAX
0074D3C3  74 05                     JZ 0x0074d3ca
0074D3C5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0074D3C8  89 08                     MOV dword ptr [EAX],ECX
LAB_0074d3ca:
0074D3CA  6A 01                     PUSH 0x1
0074D3CC  58                        POP EAX
LAB_0074d3cd:
0074D3CD  5E                        POP ESI
0074D3CE  C9                        LEAVE
0074D3CF  C2 04 00                  RET 0x4
