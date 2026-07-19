SystemClassTy::PostNextMessage:
006E58B0  55                        PUSH EBP
006E58B1  8B EC                     MOV EBP,ESP
006E58B3  83 EC 48                  SUB ESP,0x48
006E58B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E58BB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E58BE  56                        PUSH ESI
006E58BF  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E58C2  8D 4D B8                  LEA ECX,[EBP + -0x48]
006E58C5  6A 00                     PUSH 0x0
006E58C7  52                        PUSH EDX
006E58C8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E58CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E58D1  E8 1A 7F 04 00            CALL 0x0072d7f0
006E58D6  8B F0                     MOV ESI,EAX
006E58D8  83 C4 08                  ADD ESP,0x8
006E58DB  85 F6                     TEST ESI,ESI
006E58DD  75 21                     JNZ 0x006e5900
006E58DF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E58E2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E58E5  50                        PUSH EAX
006E58E6  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E58E9  52                        PUSH EDX
006E58EA  E8 D1 88 FC FF            CALL 0x006ae1c0
006E58EF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E58F2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E58F7  33 C0                     XOR EAX,EAX
006E58F9  5E                        POP ESI
006E58FA  8B E5                     MOV ESP,EBP
006E58FC  5D                        POP EBP
006E58FD  C2 04 00                  RET 0x4
LAB_006e5900:
006E5900  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006E5903  68 44 EB 7E 00            PUSH 0x7eeb44
006E5908  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E590D  56                        PUSH ESI
006E590E  6A 00                     PUSH 0x0
006E5910  68 15 04 00 00            PUSH 0x415
006E5915  68 8C E7 7E 00            PUSH 0x7ee78c
006E591A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5920  E8 AB 7B FC FF            CALL 0x006ad4d0
006E5925  83 C4 18                  ADD ESP,0x18
006E5928  85 C0                     TEST EAX,EAX
006E592A  74 01                     JZ 0x006e592d
006E592C  CC                        INT3
LAB_006e592d:
006E592D  68 16 04 00 00            PUSH 0x416
006E5932  68 8C E7 7E 00            PUSH 0x7ee78c
006E5937  6A 00                     PUSH 0x0
006E5939  56                        PUSH ESI
006E593A  E8 01 05 FC FF            CALL 0x006a5e40
006E593F  8B C6                     MOV EAX,ESI
006E5941  5E                        POP ESI
006E5942  8B E5                     MOV ESP,EBP
006E5944  5D                        POP EBP
006E5945  C2 04 00                  RET 0x4
