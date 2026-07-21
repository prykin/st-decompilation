sub_006E5FB0:
006E5FB0  8B C1                     MOV EAX,ECX
006E5FB2  33 C9                     XOR ECX,ECX
006E5FB4  C7 00 AC E1 79 00         MOV dword ptr [EAX],0x79e1ac
006E5FBA  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006E5FBD  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006E5FC0  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006E5FC3  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006E5FC6  C7 40 14 01 00 00 00      MOV dword ptr [EAX + 0x14],0x1
006E5FCD  C3                        RET
