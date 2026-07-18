FUN_0067fd20:
0067FD20  55                        PUSH EBP
0067FD21  8B EC                     MOV EBP,ESP
0067FD23  83 EC 48                  SUB ESP,0x48
0067FD26  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067FD2B  56                        PUSH ESI
0067FD2C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067FD2F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067FD32  6A 00                     PUSH 0x0
0067FD34  52                        PUSH EDX
0067FD35  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067FD38  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067FD3E  E8 AD DA 0A 00            CALL 0x0072d7f0
0067FD43  83 C4 08                  ADD ESP,0x8
0067FD46  85 C0                     TEST EAX,EAX
0067FD48  75 53                     JNZ 0x0067fd9d
0067FD4A  8B 15 38 8A 84 00         MOV EDX,dword ptr [0x00848a38]
0067FD50  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067FD53  8D 4D FC                  LEA ECX,[EBP + -0x4]
0067FD56  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067FD59  51                        PUSH ECX
0067FD5A  52                        PUSH EDX
0067FD5B  E8 60 E4 02 00            CALL 0x006ae1c0
0067FD60  8B 0D 3C 8A 84 00         MOV ECX,dword ptr [0x00848a3c]
0067FD66  8B F0                     MOV ESI,EAX
0067FD68  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067FD6B  50                        PUSH EAX
0067FD6C  51                        PUSH ECX
0067FD6D  E8 2E 5D 03 00            CALL 0x006b5aa0
0067FD72  3B F0                     CMP ESI,EAX
0067FD74  74 18                     JZ 0x0067fd8e
0067FD76  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0067FD7C  68 03 02 00 00            PUSH 0x203
0067FD81  68 D8 55 7D 00            PUSH 0x7d55d8
0067FD86  52                        PUSH EDX
0067FD87  6A FE                     PUSH -0x2
0067FD89  E8 B2 60 02 00            CALL 0x006a5e40
LAB_0067fd8e:
0067FD8E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0067FD91  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067FD96  8B C6                     MOV EAX,ESI
0067FD98  5E                        POP ESI
0067FD99  8B E5                     MOV ESP,EBP
0067FD9B  5D                        POP EBP
0067FD9C  C3                        RET
LAB_0067fd9d:
0067FD9D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067FDA0  85 C0                     TEST EAX,EAX
0067FDA2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067FDA8  7C 03                     JL 0x0067fdad
0067FDAA  83 C8 FF                  OR EAX,0xffffffff
LAB_0067fdad:
0067FDAD  5E                        POP ESI
0067FDAE  8B E5                     MOV ESP,EBP
0067FDB0  5D                        POP EBP
0067FDB1  C3                        RET
