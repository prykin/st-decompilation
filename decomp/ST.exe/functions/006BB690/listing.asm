FUN_006bb690:
006BB690  55                        PUSH EBP
006BB691  8B EC                     MOV EBP,ESP
006BB693  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BB696  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BB699  F6 C5 01                  TEST CH,0x1
006BB69C  74 06                     JZ 0x006bb6a4
006BB69E  33 C0                     XOR EAX,EAX
006BB6A0  5D                        POP EBP
006BB6A1  C2 04 00                  RET 0x4
LAB_006bb6a4:
006BB6A4  8B 40 30                  MOV EAX,dword ptr [EAX + 0x30]
006BB6A7  50                        PUSH EAX
006BB6A8  8B 08                     MOV ECX,dword ptr [EAX]
006BB6AA  FF 51 28                  CALL dword ptr [ECX + 0x28]
006BB6AD  5D                        POP EBP
006BB6AE  C2 04 00                  RET 0x4
