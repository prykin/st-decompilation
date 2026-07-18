FUN_006d4f70:
006D4F70  55                        PUSH EBP
006D4F71  8B EC                     MOV EBP,ESP
006D4F73  51                        PUSH ECX
006D4F74  68 A8 00 00 00            PUSH 0xa8
006D4F79  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D4F80  E8 AB 95 05 00            CALL 0x0072e530
006D4F85  83 C4 04                  ADD ESP,0x4
006D4F88  85 C0                     TEST EAX,EAX
006D4F8A  74 15                     JZ 0x006d4fa1
006D4F8C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D4F8F  8D 55 FC                  LEA EDX,[EBP + -0x4]
006D4F92  51                        PUSH ECX
006D4F93  52                        PUSH EDX
006D4F94  6A 00                     PUSH 0x0
006D4F96  6A 00                     PUSH 0x0
006D4F98  8B C8                     MOV ECX,EAX
006D4F9A  E8 11 21 00 00            CALL 0x006d70b0
006D4F9F  EB 02                     JMP 0x006d4fa3
LAB_006d4fa1:
006D4FA1  33 C0                     XOR EAX,EAX
LAB_006d4fa3:
006D4FA3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D4FA6  89 01                     MOV dword ptr [ECX],EAX
006D4FA8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D4FAB  85 C9                     TEST ECX,ECX
006D4FAD  75 14                     JNZ 0x006d4fc3
006D4FAF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D4FB2  8B 10                     MOV EDX,dword ptr [EAX]
006D4FB4  51                        PUSH ECX
006D4FB5  68 68 13 7A 00            PUSH 0x7a1368
006D4FBA  50                        PUSH EAX
006D4FBB  FF 12                     CALL dword ptr [EDX]
006D4FBD  8B E5                     MOV ESP,EBP
006D4FBF  5D                        POP EBP
006D4FC0  C2 0C 00                  RET 0xc
LAB_006d4fc3:
006D4FC3  8B C1                     MOV EAX,ECX
006D4FC5  8B E5                     MOV ESP,EBP
006D4FC7  5D                        POP EBP
006D4FC8  C2 0C 00                  RET 0xc
