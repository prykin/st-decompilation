FUN_0057bee0:
0057BEE0  55                        PUSH EBP
0057BEE1  8B EC                     MOV EBP,ESP
0057BEE3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0057BEE6  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
0057BEEA  66 89 02                  MOV word ptr [EDX],AX
0057BEED  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0057BEF0  66 8B 41 43               MOV AX,word ptr [ECX + 0x43]
0057BEF4  66 89 02                  MOV word ptr [EDX],AX
0057BEF7  66 8B 41 45               MOV AX,word ptr [ECX + 0x45]
0057BEFB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0057BEFE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0057BF01  66 89 01                  MOV word ptr [ECX],AX
0057BF04  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
0057BF0A  33 C0                     XOR EAX,EAX
0057BF0C  5D                        POP EBP
0057BF0D  C2 14 00                  RET 0x14
