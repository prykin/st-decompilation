FUN_006d4fd0:
006D4FD0  55                        PUSH EBP
006D4FD1  8B EC                     MOV EBP,ESP
006D4FD3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D4FD6  85 C9                     TEST ECX,ECX
006D4FD8  74 07                     JZ 0x006d4fe1
006D4FDA  8B 01                     MOV EAX,dword ptr [ECX]
006D4FDC  6A 01                     PUSH 0x1
006D4FDE  FF 50 0C                  CALL dword ptr [EAX + 0xc]
LAB_006d4fe1:
006D4FE1  5D                        POP EBP
006D4FE2  C2 04 00                  RET 0x4
