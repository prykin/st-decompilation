FUN_006aac70:
006AAC70  55                        PUSH EBP
006AAC71  8B EC                     MOV EBP,ESP
006AAC73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AAC76  85 C0                     TEST EAX,EAX
006AAC78  75 05                     JNZ 0x006aac7f
006AAC7A  B8 01 00 00 00            MOV EAX,0x1
LAB_006aac7f:
006AAC7F  50                        PUSH EAX
006AAC80  E8 9C 7E D5 FF            CALL 0x00402b21
006AAC85  83 C4 04                  ADD ESP,0x4
006AAC88  85 C0                     TEST EAX,EAX
006AAC8A  75 16                     JNZ 0x006aaca2
006AAC8C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006AAC91  6A 16                     PUSH 0x16
006AAC93  68 64 D7 7E 00            PUSH 0x7ed764
006AAC98  50                        PUSH EAX
006AAC99  6A FE                     PUSH -0x2
006AAC9B  E8 A0 B1 FF FF            CALL 0x006a5e40
006AACA0  33 C0                     XOR EAX,EAX
LAB_006aaca2:
006AACA2  5D                        POP EBP
006AACA3  C2 04 00                  RET 0x4
