FUN_0058e530:
0058E530  55                        PUSH EBP
0058E531  8B EC                     MOV EBP,ESP
0058E533  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0058E536  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
0058E53A  66 89 02                  MOV word ptr [EDX],AX
0058E53D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0058E540  66 8B 41 43               MOV AX,word ptr [ECX + 0x43]
0058E544  66 89 02                  MOV word ptr [EDX],AX
0058E547  66 8B 41 45               MOV AX,word ptr [ECX + 0x45]
0058E54B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0058E54E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0058E551  66 89 01                  MOV word ptr [ECX],AX
0058E554  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
0058E55A  33 C0                     XOR EAX,EAX
0058E55C  5D                        POP EBP
0058E55D  C2 14 00                  RET 0x14
