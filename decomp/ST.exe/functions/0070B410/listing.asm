FUN_0070b410:
0070B410  55                        PUSH EBP
0070B411  8B EC                     MOV EBP,ESP
0070B413  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B416  66 FF 48 29               DEC word ptr [EAX + 0x29]
0070B41A  66 8B 48 29               MOV CX,word ptr [EAX + 0x29]
0070B41E  66 85 C9                  TEST CX,CX
0070B421  7C 09                     JL 0x0070b42c
0070B423  0F BF C9                  MOVSX ECX,CX
0070B426  8B 44 88 30               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x30]
0070B42A  5D                        POP EBP
0070B42B  C3                        RET
LAB_0070b42c:
0070B42C  33 C0                     XOR EAX,EAX
0070B42E  5D                        POP EBP
0070B42F  C3                        RET
