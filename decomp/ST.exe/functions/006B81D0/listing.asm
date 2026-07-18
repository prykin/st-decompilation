FUN_006b81d0:
006B81D0  55                        PUSH EBP
006B81D1  8B EC                     MOV EBP,ESP
006B81D3  56                        PUSH ESI
006B81D4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B81D7  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006B81DA  85 C0                     TEST EAX,EAX
006B81DC  74 0E                     JZ 0x006b81ec
006B81DE  50                        PUSH EAX
006B81DF  FF 15 D8 BE 85 00         CALL dword ptr [0x0085bed8]
006B81E5  C7 46 30 00 00 00 00      MOV dword ptr [ESI + 0x30],0x0
LAB_006b81ec:
006B81EC  56                        PUSH ESI
006B81ED  E8 9E DC FE FF            CALL 0x006a5e90
006B81F2  5E                        POP ESI
006B81F3  5D                        POP EBP
006B81F4  C2 04 00                  RET 0x4
