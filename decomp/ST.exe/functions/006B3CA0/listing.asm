FUN_006b3ca0:
006B3CA0  55                        PUSH EBP
006B3CA1  8B EC                     MOV EBP,ESP
006B3CA3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3CA6  85 C0                     TEST EAX,EAX
006B3CA8  74 06                     JZ 0x006b3cb0
006B3CAA  8B 08                     MOV ECX,dword ptr [EAX]
006B3CAC  50                        PUSH EAX
006B3CAD  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_006b3cb0:
006B3CB0  5D                        POP EBP
006B3CB1  C2 08 00                  RET 0x8
