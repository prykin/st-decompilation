FUN_00719880:
00719880  55                        PUSH EBP
00719881  8B EC                     MOV EBP,ESP
00719883  83 EC 0C                  SUB ESP,0xc
00719886  33 C0                     XOR EAX,EAX
00719888  56                        PUSH ESI
00719889  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0071988C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071988F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00719892  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00719895  85 C0                     TEST EAX,EAX
00719897  74 16                     JZ 0x007198af
00719899  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071989C  8D 4D F4                  LEA ECX,[EBP + -0xc]
0071989F  51                        PUSH ECX
007198A0  68 02 28 00 00            PUSH 0x2802
007198A5  8B 16                     MOV EDX,dword ptr [ESI]
007198A7  68 0D 08 00 00            PUSH 0x80d
007198AC  52                        PUSH EDX
007198AD  EB 14                     JMP 0x007198c3
LAB_007198af:
007198AF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007198B2  8D 45 F4                  LEA EAX,[EBP + -0xc]
007198B5  50                        PUSH EAX
007198B6  68 02 48 00 00            PUSH 0x4802
007198BB  8B 0E                     MOV ECX,dword ptr [ESI]
007198BD  68 0D 08 00 00            PUSH 0x80d
007198C2  51                        PUSH ECX
LAB_007198c3:
007198C3  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
007198C9  85 C0                     TEST EAX,EAX
007198CB  74 14                     JZ 0x007198e1
007198CD  56                        PUSH ESI
007198CE  50                        PUSH EAX
007198CF  E8 BC 03 00 00            CALL 0x00719c90
007198D4  83 C4 08                  ADD ESP,0x8
007198D7  B8 01 00 00 00            MOV EAX,0x1
007198DC  5E                        POP ESI
007198DD  8B E5                     MOV ESP,EBP
007198DF  5D                        POP EBP
007198E0  C3                        RET
LAB_007198e1:
007198E1  33 C0                     XOR EAX,EAX
007198E3  5E                        POP ESI
007198E4  8B E5                     MOV ESP,EBP
007198E6  5D                        POP EBP
007198E7  C3                        RET
