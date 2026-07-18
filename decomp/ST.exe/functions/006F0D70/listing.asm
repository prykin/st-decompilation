FUN_006f0d70:
006F0D70  55                        PUSH EBP
006F0D71  8B EC                     MOV EBP,ESP
006F0D73  83 EC 50                  SUB ESP,0x50
006F0D76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F0D7B  56                        PUSH ESI
006F0D7C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006F0D7F  8D 4D B0                  LEA ECX,[EBP + -0x50]
006F0D82  6A 00                     PUSH 0x0
006F0D84  52                        PUSH EDX
006F0D85  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006F0D88  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0D8E  E8 5D CA 03 00            CALL 0x0072d7f0
006F0D93  8B F0                     MOV ESI,EAX
006F0D95  83 C4 08                  ADD ESP,0x8
006F0D98  85 F6                     TEST ESI,ESI
006F0D9A  75 34                     JNZ 0x006f0dd0
006F0D9C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F0D9F  8D 45 F4                  LEA EAX,[EBP + -0xc]
006F0DA2  6A 01                     PUSH 0x1
006F0DA4  50                        PUSH EAX
006F0DA5  51                        PUSH ECX
006F0DA6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F0DA9  6A 1B                     PUSH 0x1b
006F0DAB  E8 60 15 00 00            CALL 0x006f2310
006F0DB0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F0DB3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006F0DB6  85 C0                     TEST EAX,EAX
006F0DB8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F0DBE  74 07                     JZ 0x006f0dc7
006F0DC0  66 8B 4D F5               MOV CX,word ptr [EBP + -0xb]
006F0DC4  66 89 08                  MOV word ptr [EAX],CX
LAB_006f0dc7:
006F0DC7  0F BF 45 F7               MOVSX EAX,word ptr [EBP + -0x9]
006F0DCB  5E                        POP ESI
006F0DCC  8B E5                     MOV ESP,EBP
006F0DCE  5D                        POP EBP
006F0DCF  C3                        RET
LAB_006f0dd0:
006F0DD0  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006F0DD3  68 94 F0 7E 00            PUSH 0x7ef094
006F0DD8  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F0DDD  56                        PUSH ESI
006F0DDE  6A 00                     PUSH 0x0
006F0DE0  68 D4 02 00 00            PUSH 0x2d4
006F0DE5  68 88 EF 7E 00            PUSH 0x7eef88
006F0DEA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F0DF0  E8 DB C6 FB FF            CALL 0x006ad4d0
006F0DF5  83 C4 18                  ADD ESP,0x18
006F0DF8  85 C0                     TEST EAX,EAX
006F0DFA  74 01                     JZ 0x006f0dfd
006F0DFC  CC                        INT3
LAB_006f0dfd:
006F0DFD  68 D6 02 00 00            PUSH 0x2d6
006F0E02  68 88 EF 7E 00            PUSH 0x7eef88
006F0E07  6A 00                     PUSH 0x0
006F0E09  56                        PUSH ESI
006F0E0A  E8 31 50 FB FF            CALL 0x006a5e40
006F0E0F  85 F6                     TEST ESI,ESI
006F0E11  7D 07                     JGE 0x006f0e1a
006F0E13  8B C6                     MOV EAX,ESI
006F0E15  5E                        POP ESI
006F0E16  8B E5                     MOV ESP,EBP
006F0E18  5D                        POP EBP
006F0E19  C3                        RET
LAB_006f0e1a:
006F0E1A  83 C8 FF                  OR EAX,0xffffffff
006F0E1D  5E                        POP ESI
006F0E1E  8B E5                     MOV ESP,EBP
006F0E20  5D                        POP EBP
006F0E21  C3                        RET
