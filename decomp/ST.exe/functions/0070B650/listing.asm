FUN_0070b650:
0070B650  55                        PUSH EBP
0070B651  8B EC                     MOV EBP,ESP
0070B653  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070B656  85 C0                     TEST EAX,EAX
0070B658  7C 10                     JL 0x0070b66a
0070B65A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070B65D  0F BF 11                  MOVSX EDX,word ptr [ECX]
0070B660  3B C2                     CMP EAX,EDX
0070B662  7D 06                     JGE 0x0070b66a
0070B664  8B 44 81 11               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x11]
0070B668  5D                        POP EBP
0070B669  C3                        RET
LAB_0070b66a:
0070B66A  33 C0                     XOR EAX,EAX
0070B66C  5D                        POP EBP
0070B66D  C3                        RET
