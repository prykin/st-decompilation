FUN_006d4ef0:
006D4EF0  55                        PUSH EBP
006D4EF1  8B EC                     MOV EBP,ESP
006D4EF3  51                        PUSH ECX
006D4EF4  68 18 03 00 00            PUSH 0x318
006D4EF9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D4F00  E8 2B 96 05 00            CALL 0x0072e530
006D4F05  83 C4 04                  ADD ESP,0x4
006D4F08  85 C0                     TEST EAX,EAX
006D4F0A  74 15                     JZ 0x006d4f21
006D4F0C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D4F0F  8D 55 FC                  LEA EDX,[EBP + -0x4]
006D4F12  51                        PUSH ECX
006D4F13  52                        PUSH EDX
006D4F14  6A 00                     PUSH 0x0
006D4F16  6A 00                     PUSH 0x0
006D4F18  8B C8                     MOV ECX,EAX
006D4F1A  E8 D1 00 00 00            CALL 0x006d4ff0
006D4F1F  EB 02                     JMP 0x006d4f23
LAB_006d4f21:
006D4F21  33 C0                     XOR EAX,EAX
LAB_006d4f23:
006D4F23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D4F26  89 01                     MOV dword ptr [ECX],EAX
006D4F28  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D4F2B  85 C9                     TEST ECX,ECX
006D4F2D  75 14                     JNZ 0x006d4f43
006D4F2F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D4F32  8B 10                     MOV EDX,dword ptr [EAX]
006D4F34  51                        PUSH ECX
006D4F35  68 68 13 7A 00            PUSH 0x7a1368
006D4F3A  50                        PUSH EAX
006D4F3B  FF 12                     CALL dword ptr [EDX]
006D4F3D  8B E5                     MOV ESP,EBP
006D4F3F  5D                        POP EBP
006D4F40  C2 0C 00                  RET 0xc
LAB_006d4f43:
006D4F43  8B C1                     MOV EAX,ECX
006D4F45  8B E5                     MOV ESP,EBP
006D4F47  5D                        POP EBP
006D4F48  C2 0C 00                  RET 0xc
