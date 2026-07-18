FUN_0060c2d0:
0060C2D0  55                        PUSH EBP
0060C2D1  8B EC                     MOV EBP,ESP
0060C2D3  51                        PUSH ECX
0060C2D4  56                        PUSH ESI
0060C2D5  8B F1                     MOV ESI,ECX
0060C2D7  8D 45 FC                  LEA EAX,[EBP + -0x4]
0060C2DA  8B 8E 01 02 00 00         MOV ECX,dword ptr [ESI + 0x201]
0060C2E0  50                        PUSH EAX
0060C2E1  51                        PUSH ECX
0060C2E2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060C2E8  E8 E3 9F 0D 00            CALL 0x006e62d0
0060C2ED  83 F8 FC                  CMP EAX,-0x4
0060C2F0  74 12                     JZ 0x0060c304
0060C2F2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060C2F5  85 C0                     TEST EAX,EAX
0060C2F7  74 0B                     JZ 0x0060c304
0060C2F9  89 86 21 02 00 00         MOV dword ptr [ESI + 0x221],EAX
0060C2FF  5E                        POP ESI
0060C300  8B E5                     MOV ESP,EBP
0060C302  5D                        POP EBP
0060C303  C3                        RET
LAB_0060c304:
0060C304  8B CE                     MOV ECX,ESI
0060C306  E8 B6 59 DF FF            CALL 0x00401cc1
0060C30B  5E                        POP ESI
0060C30C  8B E5                     MOV ESP,EBP
0060C30E  5D                        POP EBP
0060C30F  C3                        RET
