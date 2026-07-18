FUN_0070b690:
0070B690  55                        PUSH EBP
0070B691  8B EC                     MOV EBP,ESP
0070B693  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B696  66 FF 40 06               INC word ptr [EAX + 0x6]
0070B69A  66 8B 48 06               MOV CX,word ptr [EAX + 0x6]
0070B69E  66 3B 08                  CMP CX,word ptr [EAX]
0070B6A1  7D 09                     JGE 0x0070b6ac
0070B6A3  0F BF C9                  MOVSX ECX,CX
0070B6A6  8B 44 88 11               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x11]
0070B6AA  5D                        POP EBP
0070B6AB  C3                        RET
LAB_0070b6ac:
0070B6AC  33 C0                     XOR EAX,EAX
0070B6AE  5D                        POP EBP
0070B6AF  C3                        RET
