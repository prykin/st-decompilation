FUN_006f0ea0:
006F0EA0  55                        PUSH EBP
006F0EA1  8B EC                     MOV EBP,ESP
006F0EA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F0EA6  0F BF 40 16               MOVSX EAX,word ptr [EAX + 0x16]
006F0EAA  83 C0 18                  ADD EAX,0x18
006F0EAD  5D                        POP EBP
006F0EAE  C2 04 00                  RET 0x4
