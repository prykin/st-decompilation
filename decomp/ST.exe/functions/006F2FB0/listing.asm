FUN_006f2fb0:
006F2FB0  55                        PUSH EBP
006F2FB1  8B EC                     MOV EBP,ESP
006F2FB3  83 EC 44                  SUB ESP,0x44
006F2FB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F2FBB  56                        PUSH ESI
006F2FBC  8D 55 C0                  LEA EDX,[EBP + -0x40]
006F2FBF  8D 4D BC                  LEA ECX,[EBP + -0x44]
006F2FC2  6A 00                     PUSH 0x0
006F2FC4  52                        PUSH EDX
006F2FC5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006F2FC8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2FCE  E8 1D A8 03 00            CALL 0x0072d7f0
006F2FD3  8B F0                     MOV ESI,EAX
006F2FD5  83 C4 08                  ADD ESP,0x8
006F2FD8  85 F6                     TEST ESI,ESI
006F2FDA  75 21                     JNZ 0x006f2ffd
006F2FDC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F2FDF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F2FE2  50                        PUSH EAX
006F2FE3  56                        PUSH ESI
006F2FE4  51                        PUSH ECX
006F2FE5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F2FE8  6A 0C                     PUSH 0xc
006F2FEA  E8 11 F6 FF FF            CALL 0x006f2600
006F2FEF  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006F2FF2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F2FF8  5E                        POP ESI
006F2FF9  8B E5                     MOV ESP,EBP
006F2FFB  5D                        POP EBP
006F2FFC  C3                        RET
LAB_006f2ffd:
006F2FFD  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006F3000  68 6C FD 7E 00            PUSH 0x7efd6c
006F3005  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F300A  56                        PUSH ESI
006F300B  6A 00                     PUSH 0x0
006F300D  6A 5C                     PUSH 0x5c
006F300F  68 3C FD 7E 00            PUSH 0x7efd3c
006F3014  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F3019  E8 B2 A4 FB FF            CALL 0x006ad4d0
006F301E  83 C4 18                  ADD ESP,0x18
006F3021  85 C0                     TEST EAX,EAX
006F3023  74 01                     JZ 0x006f3026
006F3025  CC                        INT3
LAB_006f3026:
006F3026  6A 5E                     PUSH 0x5e
006F3028  68 3C FD 7E 00            PUSH 0x7efd3c
006F302D  6A 00                     PUSH 0x0
006F302F  56                        PUSH ESI
006F3030  E8 0B 2E FB FF            CALL 0x006a5e40
006F3035  85 F6                     TEST ESI,ESI
006F3037  7D 07                     JGE 0x006f3040
006F3039  8B C6                     MOV EAX,ESI
006F303B  5E                        POP ESI
006F303C  8B E5                     MOV ESP,EBP
006F303E  5D                        POP EBP
006F303F  C3                        RET
LAB_006f3040:
006F3040  83 C8 FF                  OR EAX,0xffffffff
006F3043  5E                        POP ESI
006F3044  8B E5                     MOV ESP,EBP
006F3046  5D                        POP EBP
006F3047  C3                        RET
