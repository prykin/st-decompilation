FUN_0070b3a0:
0070B3A0  55                        PUSH EBP
0070B3A1  8B EC                     MOV EBP,ESP
0070B3A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070B3A6  85 C0                     TEST EAX,EAX
0070B3A8  7C 11                     JL 0x0070b3bb
0070B3AA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070B3AD  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
0070B3B1  3B C2                     CMP EAX,EDX
0070B3B3  7D 06                     JGE 0x0070b3bb
0070B3B5  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
0070B3B9  5D                        POP EBP
0070B3BA  C3                        RET
LAB_0070b3bb:
0070B3BB  33 C0                     XOR EAX,EAX
0070B3BD  5D                        POP EBP
0070B3BE  C3                        RET
