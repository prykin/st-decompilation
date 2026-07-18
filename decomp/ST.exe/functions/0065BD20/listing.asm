FUN_0065bd20:
0065BD20  55                        PUSH EBP
0065BD21  8B EC                     MOV EBP,ESP
0065BD23  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0065BD26  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
0065BD2A  88 81 76 06 00 00         MOV byte ptr [ECX + 0x676],AL
0065BD30  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
0065BD34  66 89 91 77 06 00 00      MOV word ptr [ECX + 0x677],DX
0065BD3B  66 8B 55 14               MOV DX,word ptr [EBP + 0x14]
0065BD3F  66 89 81 79 06 00 00      MOV word ptr [ECX + 0x679],AX
0065BD46  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0065BD49  66 89 91 7B 06 00 00      MOV word ptr [ECX + 0x67b],DX
0065BD50  89 81 7D 06 00 00         MOV dword ptr [ECX + 0x67d],EAX
0065BD56  5D                        POP EBP
0065BD57  C2 14 00                  RET 0x14
