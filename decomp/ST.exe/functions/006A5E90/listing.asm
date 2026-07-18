FUN_006a5e90:
006A5E90  55                        PUSH EBP
006A5E91  8B EC                     MOV EBP,ESP
006A5E93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A5E96  85 C0                     TEST EAX,EAX
006A5E98  74 09                     JZ 0x006a5ea3
006A5E9A  50                        PUSH EAX
006A5E9B  E8 EA FE D5 FF            CALL 0x00405d8a
006A5EA0  83 C4 04                  ADD ESP,0x4
LAB_006a5ea3:
006A5EA3  5D                        POP EBP
006A5EA4  C2 04 00                  RET 0x4
