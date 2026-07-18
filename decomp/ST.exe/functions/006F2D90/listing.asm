FUN_006f2d90:
006F2D90  55                        PUSH EBP
006F2D91  8B EC                     MOV EBP,ESP
006F2D93  83 EC 48                  SUB ESP,0x48
006F2D96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F2D9B  56                        PUSH ESI
006F2D9C  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F2D9F  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F2DA2  6A 00                     PUSH 0x0
006F2DA4  52                        PUSH EDX
006F2DA5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F2DAC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F2DAF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2DB5  E8 36 AA 03 00            CALL 0x0072d7f0
006F2DBA  8B F0                     MOV ESI,EAX
006F2DBC  83 C4 08                  ADD ESP,0x8
006F2DBF  85 F6                     TEST ESI,ESI
006F2DC1  75 32                     JNZ 0x006f2df5
006F2DC3  F6 45 10 01               TEST byte ptr [EBP + 0x10],0x1
006F2DC7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F2DCA  50                        PUSH EAX
006F2DCB  74 0A                     JZ 0x006f2dd7
006F2DCD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F2DD0  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F2DD3  51                        PUSH ECX
006F2DD4  52                        PUSH EDX
006F2DD5  EB 06                     JMP 0x006f2ddd
LAB_006f2dd7:
006F2DD7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F2DDA  6A 00                     PUSH 0x0
006F2DDC  51                        PUSH ECX
LAB_006f2ddd:
006F2DDD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F2DE0  6A 0C                     PUSH 0xc
006F2DE2  E8 F9 EE FF FF            CALL 0x006f1ce0
006F2DE7  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F2DEA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F2DF0  5E                        POP ESI
006F2DF1  8B E5                     MOV ESP,EBP
006F2DF3  5D                        POP EBP
006F2DF4  C3                        RET
LAB_006f2df5:
006F2DF5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F2DF8  68 54 FD 7E 00            PUSH 0x7efd54
006F2DFD  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F2E02  56                        PUSH ESI
006F2E03  6A 00                     PUSH 0x0
006F2E05  6A 1B                     PUSH 0x1b
006F2E07  68 3C FD 7E 00            PUSH 0x7efd3c
006F2E0C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F2E11  E8 BA A6 FB FF            CALL 0x006ad4d0
006F2E16  83 C4 18                  ADD ESP,0x18
006F2E19  85 C0                     TEST EAX,EAX
006F2E1B  74 01                     JZ 0x006f2e1e
006F2E1D  CC                        INT3
LAB_006f2e1e:
006F2E1E  6A 1D                     PUSH 0x1d
006F2E20  68 3C FD 7E 00            PUSH 0x7efd3c
006F2E25  6A 00                     PUSH 0x0
006F2E27  56                        PUSH ESI
006F2E28  E8 13 30 FB FF            CALL 0x006a5e40
006F2E2D  33 C0                     XOR EAX,EAX
006F2E2F  5E                        POP ESI
006F2E30  8B E5                     MOV ESP,EBP
006F2E32  5D                        POP EBP
006F2E33  C3                        RET
