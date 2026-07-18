FUN_0063c4a0:
0063C4A0  55                        PUSH EBP
0063C4A1  8B EC                     MOV EBP,ESP
0063C4A3  8B 91 6E 02 00 00         MOV EDX,dword ptr [ECX + 0x26e]
0063C4A9  56                        PUSH ESI
0063C4AA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0063C4AD  89 91 7A 02 00 00         MOV dword ptr [ECX + 0x27a],EDX
0063C4B3  8B 91 8E 02 00 00         MOV EDX,dword ptr [ECX + 0x28e]
0063C4B9  33 C0                     XOR EAX,EAX
0063C4BB  2B F2                     SUB ESI,EDX
0063C4BD  0F AF B1 92 02 00 00      IMUL ESI,dword ptr [ECX + 0x292]
0063C4C4  0F BF 91 51 02 00 00      MOVSX EDX,word ptr [ECX + 0x251]
0063C4CB  2B D6                     SUB EDX,ESI
0063C4CD  5E                        POP ESI
0063C4CE  81 FA E8 03 00 00         CMP EDX,0x3e8
0063C4D4  89 91 6E 02 00 00         MOV dword ptr [ECX + 0x26e],EDX
0063C4DA  7F 05                     JG 0x0063c4e1
0063C4DC  B8 01 00 00 00            MOV EAX,0x1
LAB_0063c4e1:
0063C4E1  5D                        POP EBP
0063C4E2  C2 04 00                  RET 0x4
