FUN_0067d880:
0067D880  55                        PUSH EBP
0067D881  8B EC                     MOV EBP,ESP
0067D883  83 EC 4C                  SUB ESP,0x4c
0067D886  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067D88B  56                        PUSH ESI
0067D88C  57                        PUSH EDI
0067D88D  8D 55 B8                  LEA EDX,[EBP + -0x48]
0067D890  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0067D893  6A 00                     PUSH 0x0
0067D895  52                        PUSH EDX
0067D896  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0067D89D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067D8A4  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0067D8A7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067D8AD  E8 3E FF 0A 00            CALL 0x0072d7f0
0067D8B2  8B F0                     MOV ESI,EAX
0067D8B4  83 C4 08                  ADD ESP,0x8
0067D8B7  85 F6                     TEST ESI,ESI
0067D8B9  75 61                     JNZ 0x0067d91c
0067D8BB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067D8BE  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0067D8C1  85 F6                     TEST ESI,ESI
0067D8C3  74 04                     JZ 0x0067d8c9
0067D8C5  85 FF                     TEST EDI,EDI
0067D8C7  75 17                     JNZ 0x0067d8e0
LAB_0067d8c9:
0067D8C9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067D8CE  68 EE 00 00 00            PUSH 0xee
0067D8D3  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067D8D8  50                        PUSH EAX
0067D8D9  6A CC                     PUSH -0x34
0067D8DB  E8 60 85 02 00            CALL 0x006a5e40
LAB_0067d8e0:
0067D8E0  6A 00                     PUSH 0x0
0067D8E2  6A 01                     PUSH 0x1
0067D8E4  57                        PUSH EDI
0067D8E5  56                        PUSH ESI
0067D8E6  E8 A5 54 07 00            CALL 0x006f2d90
0067D8EB  83 C4 10                  ADD ESP,0x10
0067D8EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067D8F1  85 C0                     TEST EAX,EAX
0067D8F3  74 15                     JZ 0x0067d90a
0067D8F5  50                        PUSH EAX
0067D8F6  E8 8B 3D D8 FF            CALL 0x00401686
0067D8FB  8D 4D FC                  LEA ECX,[EBP + -0x4]
0067D8FE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0067D901  51                        PUSH ECX
0067D902  E8 FE 54 D8 FF            CALL 0x00402e05
0067D907  83 C4 08                  ADD ESP,0x8
LAB_0067d90a:
0067D90A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0067D90D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067D910  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067D916  5F                        POP EDI
0067D917  5E                        POP ESI
0067D918  8B E5                     MOV ESP,EBP
0067D91A  5D                        POP EBP
0067D91B  C3                        RET
LAB_0067d91c:
0067D91C  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0067D91F  68 D8 2F 7D 00            PUSH 0x7d2fd8
0067D924  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067D929  56                        PUSH ESI
0067D92A  6A 00                     PUSH 0x0
0067D92C  68 F5 00 00 00            PUSH 0xf5
0067D931  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067D936  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067D93B  E8 90 FB 02 00            CALL 0x006ad4d0
0067D940  83 C4 18                  ADD ESP,0x18
0067D943  85 C0                     TEST EAX,EAX
0067D945  74 01                     JZ 0x0067d948
0067D947  CC                        INT3
LAB_0067d948:
0067D948  8D 4D FC                  LEA ECX,[EBP + -0x4]
0067D94B  51                        PUSH ECX
0067D94C  E8 B4 54 D8 FF            CALL 0x00402e05
0067D951  8D 55 F8                  LEA EDX,[EBP + -0x8]
0067D954  52                        PUSH EDX
0067D955  E8 AB 54 D8 FF            CALL 0x00402e05
0067D95A  83 C4 08                  ADD ESP,0x8
0067D95D  68 F7 00 00 00            PUSH 0xf7
0067D962  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067D967  6A 00                     PUSH 0x0
0067D969  56                        PUSH ESI
0067D96A  E8 D1 84 02 00            CALL 0x006a5e40
0067D96F  5F                        POP EDI
0067D970  33 C0                     XOR EAX,EAX
0067D972  5E                        POP ESI
0067D973  8B E5                     MOV ESP,EBP
0067D975  5D                        POP EBP
0067D976  C3                        RET
