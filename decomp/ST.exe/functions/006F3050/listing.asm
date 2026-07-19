mfAObjParam:
006F3050  55                        PUSH EBP
006F3051  8B EC                     MOV EBP,ESP
006F3053  83 EC 50                  SUB ESP,0x50
006F3056  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F305B  56                        PUSH ESI
006F305C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006F305F  8D 4D B0                  LEA ECX,[EBP + -0x50]
006F3062  6A 00                     PUSH 0x0
006F3064  52                        PUSH EDX
006F3065  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006F3068  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F306E  E8 7D A7 03 00            CALL 0x0072d7f0
006F3073  8B F0                     MOV ESI,EAX
006F3075  83 C4 08                  ADD ESP,0x8
006F3078  85 F6                     TEST ESI,ESI
006F307A  75 40                     JNZ 0x006f30bc
006F307C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F307F  8D 45 F4                  LEA EAX,[EBP + -0xc]
006F3082  6A 01                     PUSH 0x1
006F3084  50                        PUSH EAX
006F3085  51                        PUSH ECX
006F3086  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F3089  6A 0C                     PUSH 0xc
006F308B  E8 80 F2 FF FF            CALL 0x006f2310
006F3090  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F3093  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006F3096  85 C0                     TEST EAX,EAX
006F3098  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F309E  74 07                     JZ 0x006f30a7
006F30A0  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
006F30A4  66 89 08                  MOV word ptr [EAX],CX
LAB_006f30a7:
006F30A7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F30AA  85 C0                     TEST EAX,EAX
006F30AC  74 07                     JZ 0x006f30b5
006F30AE  66 8B 55 F6               MOV DX,word ptr [EBP + -0xa]
006F30B2  66 89 10                  MOV word ptr [EAX],DX
LAB_006f30b5:
006F30B5  33 C0                     XOR EAX,EAX
006F30B7  5E                        POP ESI
006F30B8  8B E5                     MOV ESP,EBP
006F30BA  5D                        POP EBP
006F30BB  C3                        RET
LAB_006f30bc:
006F30BC  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006F30BF  68 78 FD 7E 00            PUSH 0x7efd78
006F30C4  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F30C9  56                        PUSH ESI
006F30CA  6A 00                     PUSH 0x0
006F30CC  6A 74                     PUSH 0x74
006F30CE  68 3C FD 7E 00            PUSH 0x7efd3c
006F30D3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F30D8  E8 F3 A3 FB FF            CALL 0x006ad4d0
006F30DD  83 C4 18                  ADD ESP,0x18
006F30E0  85 C0                     TEST EAX,EAX
006F30E2  74 01                     JZ 0x006f30e5
006F30E4  CC                        INT3
LAB_006f30e5:
006F30E5  6A 76                     PUSH 0x76
006F30E7  68 3C FD 7E 00            PUSH 0x7efd3c
006F30EC  6A 00                     PUSH 0x0
006F30EE  56                        PUSH ESI
006F30EF  E8 4C 2D FB FF            CALL 0x006a5e40
006F30F4  85 F6                     TEST ESI,ESI
006F30F6  7D 07                     JGE 0x006f30ff
006F30F8  8B C6                     MOV EAX,ESI
006F30FA  5E                        POP ESI
006F30FB  8B E5                     MOV ESP,EBP
006F30FD  5D                        POP EBP
006F30FE  C3                        RET
LAB_006f30ff:
006F30FF  83 C8 FF                  OR EAX,0xffffffff
006F3102  5E                        POP ESI
006F3103  8B E5                     MOV ESP,EBP
006F3105  5D                        POP EBP
006F3106  C3                        RET
