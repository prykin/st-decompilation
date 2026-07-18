FUN_0070a300:
0070A300  55                        PUSH EBP
0070A301  8B EC                     MOV EBP,ESP
0070A303  83 EC 30                  SUB ESP,0x30
0070A306  56                        PUSH ESI
0070A307  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070A30A  8B 06                     MOV EAX,dword ptr [ESI]
0070A30C  85 C0                     TEST EAX,EAX
0070A30E  74 5B                     JZ 0x0070a36b
0070A310  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0070A313  85 C0                     TEST EAX,EAX
0070A315  74 4E                     JZ 0x0070a365
0070A317  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
0070A31E  8B 06                     MOV EAX,dword ptr [ESI]
0070A320  8D 55 D0                  LEA EDX,[EBP + -0x30]
0070A323  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0070A326  E8 65 6E FA FF            CALL 0x006b1190
0070A32B  85 C0                     TEST EAX,EAX
0070A32D  7C 2B                     JL 0x0070a35a
LAB_0070a32f:
0070A32F  8B 45 F9                  MOV EAX,dword ptr [EBP + -0x7]
0070A332  85 C0                     TEST EAX,EAX
0070A334  74 13                     JZ 0x0070a349
0070A336  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0070A339  8B 06                     MOV EAX,dword ptr [ESI]
0070A33B  8D 4D F9                  LEA ECX,[EBP + -0x7]
0070A33E  51                        PUSH ECX
0070A33F  52                        PUSH EDX
0070A340  50                        PUSH EAX
0070A341  E8 CA F6 FF FF            CALL 0x00709a10
0070A346  83 C4 0C                  ADD ESP,0xc
LAB_0070a349:
0070A349  8B 0E                     MOV ECX,dword ptr [ESI]
0070A34B  8D 55 D0                  LEA EDX,[EBP + -0x30]
0070A34E  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0070A351  E8 3A 6E FA FF            CALL 0x006b1190
0070A356  85 C0                     TEST EAX,EAX
0070A358  7D D5                     JGE 0x0070a32f
LAB_0070a35a:
0070A35A  8B 16                     MOV EDX,dword ptr [ESI]
0070A35C  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0070A35F  50                        PUSH EAX
0070A360  E8 AB 3D FA FF            CALL 0x006ae110
LAB_0070a365:
0070A365  56                        PUSH ESI
0070A366  E8 F5 0C FA FF            CALL 0x006ab060
LAB_0070a36b:
0070A36B  5E                        POP ESI
0070A36C  8B E5                     MOV ESP,EBP
0070A36E  5D                        POP EBP
0070A36F  C3                        RET
