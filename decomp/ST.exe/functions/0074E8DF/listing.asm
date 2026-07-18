FUN_0074e8df:
0074E8DF  55                        PUSH EBP
0074E8E0  8B EC                     MOV EBP,ESP
0074E8E2  51                        PUSH ECX
0074E8E3  56                        PUSH ESI
0074E8E4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074E8E7  8D 55 08                  LEA EDX,[EBP + 0x8]
0074E8EA  57                        PUSH EDI
0074E8EB  83 26 00                  AND dword ptr [ESI],0x0
0074E8EE  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0074E8F1  52                        PUSH EDX
0074E8F2  50                        PUSH EAX
0074E8F3  8B 08                     MOV ECX,dword ptr [EAX]
0074E8F5  FF 51 18                  CALL dword ptr [ECX + 0x18]
0074E8F8  85 C0                     TEST EAX,EAX
0074E8FA  7C 20                     JL 0x0074e91c
0074E8FC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E8FF  8D 55 FC                  LEA EDX,[EBP + -0x4]
0074E902  52                        PUSH EDX
0074E903  68 00 12 7A 00            PUSH 0x7a1200
0074E908  8B 08                     MOV ECX,dword ptr [EAX]
0074E90A  50                        PUSH EAX
0074E90B  FF 11                     CALL dword ptr [ECX]
0074E90D  8B F8                     MOV EDI,EAX
0074E90F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E912  50                        PUSH EAX
0074E913  8B 08                     MOV ECX,dword ptr [EAX]
0074E915  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E918  85 FF                     TEST EDI,EDI
0074E91A  7D 07                     JGE 0x0074e923
LAB_0074e91c:
0074E91C  B8 01 40 00 80            MOV EAX,0x80004001
0074E921  EB 07                     JMP 0x0074e92a
LAB_0074e923:
0074E923  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074E926  89 06                     MOV dword ptr [ESI],EAX
0074E928  33 C0                     XOR EAX,EAX
LAB_0074e92a:
0074E92A  5F                        POP EDI
0074E92B  5E                        POP ESI
0074E92C  C9                        LEAVE
0074E92D  C2 04 00                  RET 0x4
