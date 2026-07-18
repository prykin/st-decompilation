FUN_0070b3e0:
0070B3E0  55                        PUSH EBP
0070B3E1  8B EC                     MOV EBP,ESP
0070B3E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B3E6  66 FF 40 29               INC word ptr [EAX + 0x29]
0070B3EA  66 8B 48 29               MOV CX,word ptr [EAX + 0x29]
0070B3EE  66 3B 48 23               CMP CX,word ptr [EAX + 0x23]
0070B3F2  7D 09                     JGE 0x0070b3fd
0070B3F4  0F BF C9                  MOVSX ECX,CX
0070B3F7  8B 44 88 30               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x30]
0070B3FB  5D                        POP EBP
0070B3FC  C3                        RET
LAB_0070b3fd:
0070B3FD  33 C0                     XOR EAX,EAX
0070B3FF  5D                        POP EBP
0070B400  C3                        RET
