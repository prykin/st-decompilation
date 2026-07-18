FUN_0071f2f0:
0071F2F0  55                        PUSH EBP
0071F2F1  8B EC                     MOV EBP,ESP
0071F2F3  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0071F2F7  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
0071F2FB  66 89 81 74 01 00 00      MOV word ptr [ECX + 0x174],AX
0071F302  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
0071F306  66 89 81 78 01 00 00      MOV word ptr [ECX + 0x178],AX
0071F30D  66 89 91 76 01 00 00      MOV word ptr [ECX + 0x176],DX
0071F314  66 8B 55 14               MOV DX,word ptr [EBP + 0x14]
0071F318  8D 81 60 01 00 00         LEA EAX,[ECX + 0x160]
0071F31E  50                        PUSH EAX
0071F31F  66 89 91 7A 01 00 00      MOV word ptr [ECX + 0x17a],DX
0071F326  E8 B5 6C FC FF            CALL 0x006e5fe0
0071F32B  F7 D8                     NEG EAX
0071F32D  1B C0                     SBB EAX,EAX
0071F32F  5D                        POP EBP
0071F330  C2 10 00                  RET 0x10
