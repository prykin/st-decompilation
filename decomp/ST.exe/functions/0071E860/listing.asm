FUN_0071e860:
0071E860  55                        PUSH EBP
0071E861  8B EC                     MOV EBP,ESP
0071E863  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0071E867  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
0071E86B  66 89 81 48 01 00 00      MOV word ptr [ECX + 0x148],AX
0071E872  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
0071E876  66 89 81 4C 01 00 00      MOV word ptr [ECX + 0x14c],AX
0071E87D  66 89 91 4A 01 00 00      MOV word ptr [ECX + 0x14a],DX
0071E884  66 8B 55 14               MOV DX,word ptr [EBP + 0x14]
0071E888  8D 81 34 01 00 00         LEA EAX,[ECX + 0x134]
0071E88E  50                        PUSH EAX
0071E88F  66 89 91 4E 01 00 00      MOV word ptr [ECX + 0x14e],DX
0071E896  E8 45 77 FC FF            CALL 0x006e5fe0
0071E89B  F7 D8                     NEG EAX
0071E89D  1B C0                     SBB EAX,EAX
0071E89F  5D                        POP EBP
0071E8A0  C2 10 00                  RET 0x10
