FUN_006443c0:
006443C0  55                        PUSH EBP
006443C1  8B EC                     MOV EBP,ESP
006443C3  66 8B 41 3A               MOV AX,word ptr [ECX + 0x3a]
006443C7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006443CA  66 D1 E0                  SHL AX,0x1
006443CD  66 2B 41 34               SUB AX,word ptr [ECX + 0x34]
006443D1  66 89 02                  MOV word ptr [EDX],AX
006443D4  66 8B 41 3C               MOV AX,word ptr [ECX + 0x3c]
006443D8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006443DB  66 D1 E0                  SHL AX,0x1
006443DE  66 2B 41 36               SUB AX,word ptr [ECX + 0x36]
006443E2  66 89 02                  MOV word ptr [EDX],AX
006443E5  66 8B 41 3E               MOV AX,word ptr [ECX + 0x3e]
006443E9  66 D1 E0                  SHL AX,0x1
006443EC  66 2B 41 38               SUB AX,word ptr [ECX + 0x38]
006443F0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006443F3  66 89 01                  MOV word ptr [ECX],AX
006443F6  5D                        POP EBP
006443F7  C2 0C 00                  RET 0xc
