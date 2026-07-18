FUN_0070cdc0:
0070CDC0  55                        PUSH EBP
0070CDC1  8B EC                     MOV EBP,ESP
0070CDC3  56                        PUSH ESI
0070CDC4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070CDC7  80 3E 00                  CMP byte ptr [ESI],0x0
0070CDCA  74 22                     JZ 0x0070cdee
0070CDCC  53                        PUSH EBX
0070CDCD  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0070CDD0  8D 45 08                  LEA EAX,[EBP + 0x8]
0070CDD3  6A 10                     PUSH 0x10
0070CDD5  50                        PUSH EAX
0070CDD6  56                        PUSH ESI
0070CDD7  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
0070CDDB  E8 90 77 02 00            CALL 0x00734570
0070CDE0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070CDE3  83 C4 0C                  ADD ESP,0xc
0070CDE6  88 5E 01                  MOV byte ptr [ESI + 0x1],BL
0070CDE9  3B CE                     CMP ECX,ESI
0070CDEB  5B                        POP EBX
0070CDEC  75 03                     JNZ 0x0070cdf1
LAB_0070cdee:
0070CDEE  83 C8 FF                  OR EAX,0xffffffff
LAB_0070cdf1:
0070CDF1  5E                        POP ESI
0070CDF2  5D                        POP EBP
0070CDF3  C3                        RET
