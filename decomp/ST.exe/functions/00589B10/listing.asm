FUN_00589b10:
00589B10  55                        PUSH EBP
00589B11  8B EC                     MOV EBP,ESP
00589B13  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00589B16  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
00589B1A  66 89 02                  MOV word ptr [EDX],AX
00589B1D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00589B20  66 8B 41 43               MOV AX,word ptr [ECX + 0x43]
00589B24  66 89 02                  MOV word ptr [EDX],AX
00589B27  66 8B 41 45               MOV AX,word ptr [ECX + 0x45]
00589B2B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00589B2E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00589B31  66 89 01                  MOV word ptr [ECX],AX
00589B34  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00589B3A  33 C0                     XOR EAX,EAX
00589B3C  5D                        POP EBP
00589B3D  C2 14 00                  RET 0x14
