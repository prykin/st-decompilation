FUN_006c4a70:
006C4A70  55                        PUSH EBP
006C4A71  8B EC                     MOV EBP,ESP
006C4A73  56                        PUSH ESI
006C4A74  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4A77  85 F6                     TEST ESI,ESI
006C4A79  74 11                     JZ 0x006c4a8c
006C4A7B  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006C4A7E  6A 00                     PUSH 0x0
006C4A80  50                        PUSH EAX
006C4A81  E8 1A FC 00 00            CALL 0x006d46a0
006C4A86  56                        PUSH ESI
006C4A87  E8 04 14 FE FF            CALL 0x006a5e90
LAB_006c4a8c:
006C4A8C  5E                        POP ESI
006C4A8D  5D                        POP EBP
006C4A8E  C2 04 00                  RET 0x4
