FUN_0071f2b0:
0071F2B0  55                        PUSH EBP
0071F2B1  8B EC                     MOV EBP,ESP
0071F2B3  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0071F2B7  56                        PUSH ESI
0071F2B8  8B F1                     MOV ESI,ECX
0071F2BA  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0071F2BE  8D 96 40 01 00 00         LEA EDX,[ESI + 0x140]
0071F2C4  66 89 8E 56 01 00 00      MOV word ptr [ESI + 0x156],CX
0071F2CB  52                        PUSH EDX
0071F2CC  8B CE                     MOV ECX,ESI
0071F2CE  66 89 86 54 01 00 00      MOV word ptr [ESI + 0x154],AX
0071F2D5  E8 06 6D FC FF            CALL 0x006e5fe0
0071F2DA  85 C0                     TEST EAX,EAX
0071F2DC  75 0B                     JNZ 0x0071f2e9
0071F2DE  8B 86 58 01 00 00         MOV EAX,dword ptr [ESI + 0x158]
0071F2E4  5E                        POP ESI
0071F2E5  5D                        POP EBP
0071F2E6  C2 08 00                  RET 0x8
LAB_0071f2e9:
0071F2E9  33 C0                     XOR EAX,EAX
0071F2EB  5E                        POP ESI
0071F2EC  5D                        POP EBP
0071F2ED  C2 08 00                  RET 0x8
