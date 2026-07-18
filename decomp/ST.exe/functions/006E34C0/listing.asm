FUN_006e34c0:
006E34C0  55                        PUSH EBP
006E34C1  8B EC                     MOV EBP,ESP
006E34C3  8B C1                     MOV EAX,ECX
006E34C5  56                        PUSH ESI
006E34C6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E34C9  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E34CC  C7 00 6C E1 79 00         MOV dword ptr [EAX],0x79e16c
006E34D2  89 0D 6C 6D 85 00         MOV dword ptr [0x00856d6c],ECX
006E34D8  33 C9                     XOR ECX,ECX
006E34DA  BA 01 00 00 00            MOV EDX,0x1
006E34DF  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
006E34E2  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
006E34E5  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
006E34E8  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
006E34EB  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006E34EE  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006E34F1  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006E34F4  89 48 30                  MOV dword ptr [EAX + 0x30],ECX
006E34F7  89 48 28                  MOV dword ptr [EAX + 0x28],ECX
006E34FA  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
006E34FD  C7 40 34 14 00 00 00      MOV dword ptr [EAX + 0x34],0x14
006E3504  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
006E3507  5E                        POP ESI
006E3508  5D                        POP EBP
006E3509  C2 08 00                  RET 0x8
