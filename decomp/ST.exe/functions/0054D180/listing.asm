FUN_0054d180:
0054D180  55                        PUSH EBP
0054D181  8B EC                     MOV EBP,ESP
0054D183  83 EC 48                  SUB ESP,0x48
0054D186  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054D18B  53                        PUSH EBX
0054D18C  56                        PUSH ESI
0054D18D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054D190  33 DB                     XOR EBX,EBX
0054D192  57                        PUSH EDI
0054D193  8D 55 BC                  LEA EDX,[EBP + -0x44]
0054D196  8D 4D B8                  LEA ECX,[EBP + -0x48]
0054D199  53                        PUSH EBX
0054D19A  52                        PUSH EDX
0054D19B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0054D19E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054D1A4  E8 47 06 1E 00            CALL 0x0072d7f0
0054D1A9  8B F0                     MOV ESI,EAX
0054D1AB  83 C4 08                  ADD ESP,0x8
0054D1AE  3B F3                     CMP ESI,EBX
0054D1B0  0F 85 9C 00 00 00         JNZ 0x0054d252
0054D1B6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0054D1B9  B9 08 00 00 00            MOV ECX,0x8
0054D1BE  33 C0                     XOR EAX,EAX
0054D1C0  8D 96 C0 00 00 00         LEA EDX,[ESI + 0xc0]
0054D1C6  8B FA                     MOV EDI,EDX
0054D1C8  52                        PUSH EDX
0054D1C9  F3 AB                     STOSD.REP ES:EDI
0054D1CB  8B 06                     MOV EAX,dword ptr [ESI]
0054D1CD  8B CE                     MOV ECX,ESI
0054D1CF  C7 86 CC 00 00 00 0F 00 00 00  MOV dword ptr [ESI + 0xcc],0xf
0054D1D9  C7 86 D0 00 00 00 06 71 00 00  MOV dword ptr [ESI + 0xd0],0x7106
0054D1E3  FF 50 18                  CALL dword ptr [EAX + 0x18]
0054D1E6  8B 4E 39                  MOV ECX,dword ptr [ESI + 0x39]
0054D1E9  8D 46 39                  LEA EAX,[ESI + 0x39]
0054D1EC  3B CB                     CMP ECX,EBX
0054D1EE  74 06                     JZ 0x0054d1f6
0054D1F0  50                        PUSH EAX
0054D1F1  E8 9A C6 16 00            CALL 0x006b9890
LAB_0054d1f6:
0054D1F6  8B 4E 4F                  MOV ECX,dword ptr [ESI + 0x4f]
0054D1F9  8D 46 4F                  LEA EAX,[ESI + 0x4f]
0054D1FC  3B CB                     CMP ECX,EBX
0054D1FE  74 06                     JZ 0x0054d206
0054D200  50                        PUSH EAX
0054D201  E8 5A DE 15 00            CALL 0x006ab060
LAB_0054d206:
0054D206  8B 4E 3D                  MOV ECX,dword ptr [ESI + 0x3d]
0054D209  8D 46 3D                  LEA EAX,[ESI + 0x3d]
0054D20C  3B CB                     CMP ECX,EBX
0054D20E  74 06                     JZ 0x0054d216
0054D210  50                        PUSH EAX
0054D211  E8 4A DE 15 00            CALL 0x006ab060
LAB_0054d216:
0054D216  8B 4E 65                  MOV ECX,dword ptr [ESI + 0x65]
0054D219  8D 46 65                  LEA EAX,[ESI + 0x65]
0054D21C  3B CB                     CMP ECX,EBX
0054D21E  89 5E 41                  MOV dword ptr [ESI + 0x41],EBX
0054D221  89 5E 45                  MOV dword ptr [ESI + 0x45],EBX
0054D224  89 5E 53                  MOV dword ptr [ESI + 0x53],EBX
0054D227  74 06                     JZ 0x0054d22f
0054D229  50                        PUSH EAX
0054D22A  E8 61 C6 16 00            CALL 0x006b9890
LAB_0054d22f:
0054D22F  8B CE                     MOV ECX,ESI
0054D231  89 5E 69                  MOV dword ptr [ESI + 0x69],EBX
0054D234  89 5E 6D                  MOV dword ptr [ESI + 0x6d],EBX
0054D237  89 5E 71                  MOV dword ptr [ESI + 0x71],EBX
0054D23A  89 5E 75                  MOV dword ptr [ESI + 0x75],EBX
0054D23D  E8 8E 80 19 00            CALL 0x006e52d0
0054D242  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0054D245  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054D24B  5F                        POP EDI
0054D24C  5E                        POP ESI
0054D24D  5B                        POP EBX
0054D24E  8B E5                     MOV ESP,EBP
0054D250  5D                        POP EBP
0054D251  C3                        RET
LAB_0054d252:
0054D252  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0054D255  68 D8 84 7C 00            PUSH 0x7c84d8
0054D25A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054D25F  56                        PUSH ESI
0054D260  53                        PUSH EBX
0054D261  68 B1 01 00 00            PUSH 0x1b1
0054D266  68 30 84 7C 00            PUSH 0x7c8430
0054D26B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054D271  E8 5A 02 16 00            CALL 0x006ad4d0
0054D276  83 C4 18                  ADD ESP,0x18
0054D279  85 C0                     TEST EAX,EAX
0054D27B  74 01                     JZ 0x0054d27e
0054D27D  CC                        INT3
LAB_0054d27e:
0054D27E  68 B3 01 00 00            PUSH 0x1b3
0054D283  68 30 84 7C 00            PUSH 0x7c8430
0054D288  53                        PUSH EBX
0054D289  56                        PUSH ESI
0054D28A  E8 B1 8B 15 00            CALL 0x006a5e40
0054D28F  5F                        POP EDI
0054D290  5E                        POP ESI
0054D291  5B                        POP EBX
0054D292  8B E5                     MOV ESP,EBP
0054D294  5D                        POP EBP
0054D295  C3                        RET
