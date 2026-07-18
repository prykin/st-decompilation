FUN_006c38d0:
006C38D0  55                        PUSH EBP
006C38D1  8B EC                     MOV EBP,ESP
006C38D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C38D6  85 C0                     TEST EAX,EAX
006C38D8  74 0E                     JZ 0x006c38e8
006C38DA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_006c38dd:
006C38DD  39 48 78                  CMP dword ptr [EAX + 0x78],ECX
006C38E0  74 06                     JZ 0x006c38e8
006C38E2  8B 00                     MOV EAX,dword ptr [EAX]
006C38E4  85 C0                     TEST EAX,EAX
006C38E6  75 F5                     JNZ 0x006c38dd
LAB_006c38e8:
006C38E8  5D                        POP EBP
006C38E9  C2 08 00                  RET 0x8
