FUN_006ba7b0:
006BA7B0  55                        PUSH EBP
006BA7B1  8B EC                     MOV EBP,ESP
006BA7B3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006BA7B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BA7B9  85 C9                     TEST ECX,ECX
006BA7BB  74 0B                     JZ 0x006ba7c8
006BA7BD  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006BA7C0  89 11                     MOV dword ptr [ECX],EDX
006BA7C2  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006BA7C5  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
LAB_006ba7c8:
006BA7C8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006BA7CB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BA7CE  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006BA7D1  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
006BA7D4  5D                        POP EBP
006BA7D5  C2 10 00                  RET 0x10
