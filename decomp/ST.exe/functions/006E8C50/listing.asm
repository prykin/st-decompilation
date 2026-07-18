FUN_006e8c50:
006E8C50  55                        PUSH EBP
006E8C51  8B EC                     MOV EBP,ESP
006E8C53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E8C56  50                        PUSH EAX
006E8C57  68 58 EC 7E 00            PUSH 0x7eec58
006E8C5C  6A 00                     PUSH 0x0
006E8C5E  6A 00                     PUSH 0x0
006E8C60  6A 00                     PUSH 0x0
006E8C62  6A 00                     PUSH 0x0
006E8C64  E8 37 83 04 00            CALL 0x00730fa0
006E8C69  83 C4 18                  ADD ESP,0x18
006E8C6C  83 F8 01                  CMP EAX,0x1
006E8C6F  75 01                     JNZ 0x006e8c72
006E8C71  CC                        INT3
LAB_006e8c72:
006E8C72  5D                        POP EBP
006E8C73  C2 04 00                  RET 0x4
