AppClassTy::PostNextMessage:
006E3B50  55                        PUSH EBP
006E3B51  8B EC                     MOV EBP,ESP
006E3B53  83 EC 48                  SUB ESP,0x48
006E3B56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E3B5B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E3B5E  56                        PUSH ESI
006E3B5F  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E3B62  8D 4D B8                  LEA ECX,[EBP + -0x48]
006E3B65  6A 00                     PUSH 0x0
006E3B67  52                        PUSH EDX
006E3B68  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E3B6B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E3B71  E8 7A 9C 04 00            CALL 0x0072d7f0
006E3B76  8B F0                     MOV ESI,EAX
006E3B78  83 C4 08                  ADD ESP,0x8
006E3B7B  85 F6                     TEST ESI,ESI
006E3B7D  75 26                     JNZ 0x006e3ba5
006E3B7F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E3B82  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
006E3B85  85 C0                     TEST EAX,EAX
006E3B87  74 0A                     JZ 0x006e3b93
006E3B89  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E3B8C  51                        PUSH ECX
006E3B8D  50                        PUSH EAX
006E3B8E  E8 2D A6 FC FF            CALL 0x006ae1c0
LAB_006e3b93:
006E3B93  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006E3B96  33 C0                     XOR EAX,EAX
006E3B98  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E3B9E  5E                        POP ESI
006E3B9F  8B E5                     MOV ESP,EBP
006E3BA1  5D                        POP EBP
006E3BA2  C2 04 00                  RET 0x4
LAB_006e3ba5:
006E3BA5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E3BA8  68 80 E8 7E 00            PUSH 0x7ee880
006E3BAD  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E3BB2  56                        PUSH ESI
006E3BB3  6A 00                     PUSH 0x0
006E3BB5  68 BA 00 00 00            PUSH 0xba
006E3BBA  68 8C E7 7E 00            PUSH 0x7ee78c
006E3BBF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E3BC4  E8 07 99 FC FF            CALL 0x006ad4d0
006E3BC9  83 C4 18                  ADD ESP,0x18
006E3BCC  85 C0                     TEST EAX,EAX
006E3BCE  74 01                     JZ 0x006e3bd1
006E3BD0  CC                        INT3
LAB_006e3bd1:
006E3BD1  68 BB 00 00 00            PUSH 0xbb
006E3BD6  68 8C E7 7E 00            PUSH 0x7ee78c
006E3BDB  6A 00                     PUSH 0x0
006E3BDD  56                        PUSH ESI
006E3BDE  E8 5D 22 FC FF            CALL 0x006a5e40
006E3BE3  8B C6                     MOV EAX,ESI
006E3BE5  5E                        POP ESI
006E3BE6  8B E5                     MOV ESP,EBP
006E3BE8  5D                        POP EBP
006E3BE9  C2 04 00                  RET 0x4
