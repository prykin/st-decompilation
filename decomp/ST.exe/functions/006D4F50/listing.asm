FUN_006d4f50:
006D4F50  55                        PUSH EBP
006D4F51  8B EC                     MOV EBP,ESP
006D4F53  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D4F56  85 C9                     TEST ECX,ECX
006D4F58  74 07                     JZ 0x006d4f61
006D4F5A  8B 01                     MOV EAX,dword ptr [ECX]
006D4F5C  6A 01                     PUSH 0x1
006D4F5E  FF 50 0C                  CALL dword ptr [EAX + 0xc]
LAB_006d4f61:
006D4F61  5D                        POP EBP
006D4F62  C2 04 00                  RET 0x4
