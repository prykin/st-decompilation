FUN_006e4b80:
006E4B80  55                        PUSH EBP
006E4B81  8B EC                     MOV EBP,ESP
006E4B83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E4B86  56                        PUSH ESI
006E4B87  8B F1                     MOV ESI,ECX
006E4B89  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006E4B8C  51                        PUSH ECX
006E4B8D  8B CE                     MOV ECX,ESI
006E4B8F  E8 0C FA FF FF            CALL 0x006e45a0
006E4B94  85 C0                     TEST EAX,EAX
006E4B96  74 08                     JZ 0x006e4ba0
006E4B98  50                        PUSH EAX
006E4B99  8B CE                     MOV ECX,ESI
006E4B9B  E8 10 00 00 00            CALL 0x006e4bb0
LAB_006e4ba0:
006E4BA0  5E                        POP ESI
006E4BA1  5D                        POP EBP
006E4BA2  C2 04 00                  RET 0x4
