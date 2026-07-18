FUN_0074e88e:
0074E88E  55                        PUSH EBP
0074E88F  8B EC                     MOV EBP,ESP
0074E891  51                        PUSH ECX
0074E892  56                        PUSH ESI
0074E893  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074E896  8D 55 08                  LEA EDX,[EBP + 0x8]
0074E899  57                        PUSH EDI
0074E89A  83 26 00                  AND dword ptr [ESI],0x0
0074E89D  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0074E8A0  52                        PUSH EDX
0074E8A1  50                        PUSH EAX
0074E8A2  8B 08                     MOV ECX,dword ptr [EAX]
0074E8A4  FF 51 18                  CALL dword ptr [ECX + 0x18]
0074E8A7  85 C0                     TEST EAX,EAX
0074E8A9  7C 20                     JL 0x0074e8cb
0074E8AB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E8AE  8D 55 FC                  LEA EDX,[EBP + -0x4]
0074E8B1  52                        PUSH EDX
0074E8B2  68 10 12 7A 00            PUSH 0x7a1210
0074E8B7  8B 08                     MOV ECX,dword ptr [EAX]
0074E8B9  50                        PUSH EAX
0074E8BA  FF 11                     CALL dword ptr [ECX]
0074E8BC  8B F8                     MOV EDI,EAX
0074E8BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E8C1  50                        PUSH EAX
0074E8C2  8B 08                     MOV ECX,dword ptr [EAX]
0074E8C4  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E8C7  85 FF                     TEST EDI,EDI
0074E8C9  7D 07                     JGE 0x0074e8d2
LAB_0074e8cb:
0074E8CB  B8 01 40 00 80            MOV EAX,0x80004001
0074E8D0  EB 07                     JMP 0x0074e8d9
LAB_0074e8d2:
0074E8D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074E8D5  89 06                     MOV dword ptr [ESI],EAX
0074E8D7  33 C0                     XOR EAX,EAX
LAB_0074e8d9:
0074E8D9  5F                        POP EDI
0074E8DA  5E                        POP ESI
0074E8DB  C9                        LEAVE
0074E8DC  C2 04 00                  RET 0x4
