STFishC::sub_004162B0:
004162B0  55                        PUSH EBP
004162B1  8B EC                     MOV EBP,ESP
004162B3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004162B6  66 8B 41 47               MOV AX,word ptr [ECX + 0x47]
004162BA  66 89 02                  MOV word ptr [EDX],AX
004162BD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004162C0  66 8B 41 49               MOV AX,word ptr [ECX + 0x49]
004162C4  66 89 02                  MOV word ptr [EDX],AX
004162C7  66 8B 41 4B               MOV AX,word ptr [ECX + 0x4b]
004162CB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004162CE  66 89 01                  MOV word ptr [ECX],AX
004162D1  5D                        POP EBP
004162D2  C2 0C 00                  RET 0xc
