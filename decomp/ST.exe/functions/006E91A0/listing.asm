FUN_006e91a0:
006E91A0  55                        PUSH EBP
006E91A1  8B EC                     MOV EBP,ESP
006E91A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E91A6  50                        PUSH EAX
006E91A7  68 D8 EC 7E 00            PUSH 0x7eecd8
006E91AC  6A 00                     PUSH 0x0
006E91AE  6A 00                     PUSH 0x0
006E91B0  6A 00                     PUSH 0x0
006E91B2  6A 00                     PUSH 0x0
006E91B4  E8 E7 7D 04 00            CALL 0x00730fa0
006E91B9  83 C4 18                  ADD ESP,0x18
006E91BC  83 F8 01                  CMP EAX,0x1
006E91BF  75 01                     JNZ 0x006e91c2
006E91C1  CC                        INT3
LAB_006e91c2:
006E91C2  5D                        POP EBP
006E91C3  C2 04 00                  RET 0x4
