FUN_006460c0:
006460C0  55                        PUSH EBP
006460C1  8B EC                     MOV EBP,ESP
006460C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006460C6  33 C0                     XOR EAX,EAX
006460C8  81 C1 6A FF FF FF         ADD ECX,0xffffff6a
006460CE  85 C9                     TEST ECX,ECX
006460D0  7C 24                     JL 0x006460f6
006460D2  83 F9 2D                  CMP ECX,0x2d
006460D5  7D 1F                     JGE 0x006460f6
006460D7  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
006460DA  BA 05 00 00 00            MOV EDX,0x5
006460DF  8D 0C 8D 68 64 7E 00      LEA ECX,[ECX*0x4 + 0x7e6468]
LAB_006460e6:
006460E6  83 39 00                  CMP dword ptr [ECX],0x0
006460E9  74 0B                     JZ 0x006460f6
006460EB  40                        INC EAX
006460EC  83 C1 04                  ADD ECX,0x4
006460EF  83 F8 05                  CMP EAX,0x5
006460F2  7C F2                     JL 0x006460e6
006460F4  8B C2                     MOV EAX,EDX
LAB_006460f6:
006460F6  5D                        POP EBP
006460F7  C3                        RET
