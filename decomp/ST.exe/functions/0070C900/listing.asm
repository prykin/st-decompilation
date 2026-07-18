FUN_0070c900:
0070C900  55                        PUSH EBP
0070C901  8B EC                     MOV EBP,ESP
0070C903  83 EC 48                  SUB ESP,0x48
0070C906  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070C90B  56                        PUSH ESI
0070C90C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0070C90F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0070C912  6A 00                     PUSH 0x0
0070C914  52                        PUSH EDX
0070C915  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0070C918  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C91E  E8 CD 0E 02 00            CALL 0x0072d7f0
0070C923  83 C4 08                  ADD ESP,0x8
0070C926  85 C0                     TEST EAX,EAX
0070C928  75 5A                     JNZ 0x0070c984
0070C92A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070C92D  85 C0                     TEST EAX,EAX
0070C92F  7D 20                     JGE 0x0070c951
0070C931  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070C934  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070C937  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070C93A  51                        PUSH ECX
0070C93B  83 C9 FF                  OR ECX,0xffffffff
0070C93E  2B C8                     SUB ECX,EAX
0070C940  52                        PUSH EDX
0070C941  51                        PUSH ECX
0070C942  56                        PUSH ESI
0070C943  E8 58 86 FA FF            CALL 0x006b4fa0
0070C948  50                        PUSH EAX
0070C949  56                        PUSH ESI
0070C94A  E8 A1 63 04 00            CALL 0x00752cf0
0070C94F  EB 19                     JMP 0x0070c96a
LAB_0070c951:
0070C951  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070C954  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070C957  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070C95A  52                        PUSH EDX
0070C95B  51                        PUSH ECX
0070C95C  50                        PUSH EAX
0070C95D  56                        PUSH ESI
0070C95E  E8 3D 86 FA FF            CALL 0x006b4fa0
0070C963  50                        PUSH EAX
0070C964  56                        PUSH ESI
0070C965  E8 36 5E 04 00            CALL 0x007527a0
LAB_0070c96a:
0070C96A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070C96D  85 C9                     TEST ECX,ECX
0070C96F  74 05                     JZ 0x0070c976
0070C971  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070C974  89 11                     MOV dword ptr [ECX],EDX
LAB_0070c976:
0070C976  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0070C979  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C97F  5E                        POP ESI
0070C980  8B E5                     MOV ESP,EBP
0070C982  5D                        POP EBP
0070C983  C3                        RET
LAB_0070c984:
0070C984  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0070C987  33 C0                     XOR EAX,EAX
0070C989  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070C98F  5E                        POP ESI
0070C990  8B E5                     MOV ESP,EBP
0070C992  5D                        POP EBP
0070C993  C3                        RET
