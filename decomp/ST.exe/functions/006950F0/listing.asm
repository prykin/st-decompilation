FUN_006950f0:
006950F0  55                        PUSH EBP
006950F1  8B EC                     MOV EBP,ESP
006950F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006950F6  56                        PUSH ESI
006950F7  50                        PUSH EAX
006950F8  E8 34 C0 D6 FF            CALL 0x00401131
006950FD  83 C4 04                  ADD ESP,0x4
00695100  8B F0                     MOV ESI,EAX
00695102  E8 B9 95 09 00            CALL 0x0072e6c0
00695107  8B CE                     MOV ECX,ESI
00695109  33 D2                     XOR EDX,EDX
0069510B  C1 E1 05                  SHL ECX,0x5
0069510E  03 CE                     ADD ECX,ESI
00695110  8D 0C 4E                  LEA ECX,[ESI + ECX*0x2]
00695113  8B 35 80 3D 85 00         MOV ESI,dword ptr [0x00853d80]
00695119  F7 B4 CE 0C 02 00 00      DIV dword ptr [ESI + ECX*0x8 + 0x20c]
00695120  5E                        POP ESI
00695121  8B C2                     MOV EAX,EDX
00695123  5D                        POP EBP
00695124  C2 04 00                  RET 0x4
