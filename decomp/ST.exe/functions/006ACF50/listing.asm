FUN_006acf50:
006ACF50  55                        PUSH EBP
006ACF51  8B EC                     MOV EBP,ESP
006ACF53  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006ACF56  85 C0                     TEST EAX,EAX
006ACF58  75 05                     JNZ 0x006acf5f
006ACF5A  B8 01 00 00 00            MOV EAX,0x1
LAB_006acf5f:
006ACF5F  50                        PUSH EAX
006ACF60  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006ACF63  50                        PUSH EAX
006ACF64  E8 65 86 D5 FF            CALL 0x004055ce
006ACF69  83 C4 08                  ADD ESP,0x8
006ACF6C  85 C0                     TEST EAX,EAX
006ACF6E  75 17                     JNZ 0x006acf87
006ACF70  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006ACF76  6A 16                     PUSH 0x16
006ACF78  68 80 D7 7E 00            PUSH 0x7ed780
006ACF7D  51                        PUSH ECX
006ACF7E  6A FE                     PUSH -0x2
006ACF80  E8 BB 8E FF FF            CALL 0x006a5e40
006ACF85  33 C0                     XOR EAX,EAX
LAB_006acf87:
006ACF87  5D                        POP EBP
006ACF88  C2 08 00                  RET 0x8
