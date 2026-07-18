FUN_006e41d0:
006E41D0  55                        PUSH EBP
006E41D1  8B EC                     MOV EBP,ESP
006E41D3  83 EC 4C                  SUB ESP,0x4c
006E41D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E41DB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E41DE  56                        PUSH ESI
006E41DF  8D 55 B8                  LEA EDX,[EBP + -0x48]
006E41E2  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006E41E5  6A 00                     PUSH 0x0
006E41E7  52                        PUSH EDX
006E41E8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006E41EF  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006E41F2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E41F8  E8 F3 95 04 00            CALL 0x0072d7f0
006E41FD  8B F0                     MOV ESI,EAX
006E41FF  83 C4 08                  ADD ESP,0x8
006E4202  85 F6                     TEST ESI,ESI
006E4204  75 3A                     JNZ 0x006e4240
006E4206  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006E4209  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006E420C  85 C0                     TEST EAX,EAX
006E420E  75 10                     JNZ 0x006e4220
006E4210  6A 0A                     PUSH 0xa
006E4212  6A 10                     PUSH 0x10
006E4214  6A 0A                     PUSH 0xa
006E4216  6A 00                     PUSH 0x0
006E4218  E8 73 A0 FC FF            CALL 0x006ae290
006E421D  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
LAB_006e4220:
006E4220  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E4223  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006E4226  50                        PUSH EAX
006E4227  51                        PUSH ECX
006E4228  E8 93 9F FC FF            CALL 0x006ae1c0
006E422D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006E4230  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E4233  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E4239  5E                        POP ESI
006E423A  8B E5                     MOV ESP,EBP
006E423C  5D                        POP EBP
006E423D  C2 04 00                  RET 0x4
LAB_006e4240:
006E4240  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006E4243  68 24 E9 7E 00            PUSH 0x7ee924
006E4248  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E424D  56                        PUSH ESI
006E424E  6A 00                     PUSH 0x0
006E4250  68 42 01 00 00            PUSH 0x142
006E4255  68 8C E7 7E 00            PUSH 0x7ee78c
006E425A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E425F  E8 6C 92 FC FF            CALL 0x006ad4d0
006E4264  83 C4 18                  ADD ESP,0x18
006E4267  85 C0                     TEST EAX,EAX
006E4269  74 01                     JZ 0x006e426c
006E426B  CC                        INT3
LAB_006e426c:
006E426C  68 43 01 00 00            PUSH 0x143
006E4271  68 8C E7 7E 00            PUSH 0x7ee78c
006E4276  6A 00                     PUSH 0x0
006E4278  56                        PUSH ESI
006E4279  E8 C2 1B FC FF            CALL 0x006a5e40
006E427E  8B C6                     MOV EAX,ESI
006E4280  5E                        POP ESI
006E4281  8B E5                     MOV ESP,EBP
006E4283  5D                        POP EBP
006E4284  C2 04 00                  RET 0x4
