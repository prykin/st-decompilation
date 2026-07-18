FUN_0070b6b0:
0070B6B0  55                        PUSH EBP
0070B6B1  8B EC                     MOV EBP,ESP
0070B6B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B6B6  66 FF 48 06               DEC word ptr [EAX + 0x6]
0070B6BA  66 8B 48 06               MOV CX,word ptr [EAX + 0x6]
0070B6BE  66 85 C9                  TEST CX,CX
0070B6C1  7C 09                     JL 0x0070b6cc
0070B6C3  0F BF C9                  MOVSX ECX,CX
0070B6C6  8B 44 88 11               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x11]
0070B6CA  5D                        POP EBP
0070B6CB  C3                        RET
LAB_0070b6cc:
0070B6CC  33 C0                     XOR EAX,EAX
0070B6CE  5D                        POP EBP
0070B6CF  C3                        RET
