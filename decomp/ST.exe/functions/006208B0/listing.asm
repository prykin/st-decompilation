FUN_006208b0:
006208B0  55                        PUSH EBP
006208B1  8B EC                     MOV EBP,ESP
006208B3  83 EC 14                  SUB ESP,0x14
006208B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006208B9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006208BC  56                        PUSH ESI
006208BD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006208C0  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006208C3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006208C6  8B F1                     MOV ESI,ECX
006208C8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006208CB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006208CE  57                        PUSH EDI
006208CF  8B 86 DD 00 00 00         MOV EAX,dword ptr [ESI + 0xdd]
006208D5  83 CF FF                  OR EDI,0xffffffff
006208D8  85 C0                     TEST EAX,EAX
006208DA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006208DD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006208E0  75 13                     JNZ 0x006208f5
006208E2  6A 0A                     PUSH 0xa
006208E4  6A 14                     PUSH 0x14
006208E6  6A 0A                     PUSH 0xa
006208E8  6A 00                     PUSH 0x0
006208EA  E8 A1 D9 08 00            CALL 0x006ae290
006208EF  89 86 DD 00 00 00         MOV dword ptr [ESI + 0xdd],EAX
LAB_006208f5:
006208F5  8B B6 DD 00 00 00         MOV ESI,dword ptr [ESI + 0xdd]
006208FB  85 F6                     TEST ESI,ESI
006208FD  74 12                     JZ 0x00620911
006208FF  8D 45 EC                  LEA EAX,[EBP + -0x14]
00620902  50                        PUSH EAX
00620903  56                        PUSH ESI
00620904  E8 B7 D8 08 00            CALL 0x006ae1c0
00620909  5F                        POP EDI
0062090A  5E                        POP ESI
0062090B  8B E5                     MOV ESP,EBP
0062090D  5D                        POP EBP
0062090E  C2 10 00                  RET 0x10
LAB_00620911:
00620911  8B C7                     MOV EAX,EDI
00620913  5F                        POP EDI
00620914  5E                        POP ESI
00620915  8B E5                     MOV ESP,EBP
00620917  5D                        POP EBP
00620918  C2 10 00                  RET 0x10
