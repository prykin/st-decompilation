FUN_0074a2ab:
0074A2AB  55                        PUSH EBP
0074A2AC  8B EC                     MOV EBP,ESP
0074A2AE  83 EC 10                  SUB ESP,0x10
0074A2B1  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0074A2B5  56                        PUSH ESI
0074A2B6  8B F1                     MOV ESI,ECX
0074A2B8  74 16                     JZ 0x0074a2d0
0074A2BA  8B 06                     MOV EAX,dword ptr [ESI]
0074A2BC  8D 4D F0                  LEA ECX,[EBP + -0x10]
0074A2BF  51                        PUSH ECX
0074A2C0  8D 4D F8                  LEA ECX,[EBP + -0x8]
0074A2C3  51                        PUSH ECX
0074A2C4  8B CE                     MOV ECX,ESI
0074A2C6  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074A2C9  FF 50 58                  CALL dword ptr [EAX + 0x58]
0074A2CC  85 C0                     TEST EAX,EAX
0074A2CE  7D 04                     JGE 0x0074a2d4
LAB_0074a2d0:
0074A2D0  33 C0                     XOR EAX,EAX
0074A2D2  EB 35                     JMP 0x0074a309
LAB_0074a2d4:
0074A2D4  75 0E                     JNZ 0x0074a2e4
0074A2D6  FF 76 54                  PUSH dword ptr [ESI + 0x54]
0074A2D9  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
0074A2DF  6A 01                     PUSH 0x1
0074A2E1  58                        POP EAX
0074A2E2  EB 25                     JMP 0x0074a309
LAB_0074a2e4:
0074A2E4  8D 56 68                  LEA EDX,[ESI + 0x68]
0074A2E7  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0074A2EA  52                        PUSH EDX
0074A2EB  FF 76 54                  PUSH dword ptr [ESI + 0x54]
0074A2EE  8B 08                     MOV ECX,dword ptr [EAX]
0074A2F0  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074A2F3  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074A2F6  FF 76 24                  PUSH dword ptr [ESI + 0x24]
0074A2F9  FF 76 20                  PUSH dword ptr [ESI + 0x20]
0074A2FC  50                        PUSH EAX
0074A2FD  FF 51 10                  CALL dword ptr [ECX + 0x10]
0074A300  33 C9                     XOR ECX,ECX
0074A302  85 C0                     TEST EAX,EAX
0074A304  0F 9D C1                  SETGE CL
0074A307  8B C1                     MOV EAX,ECX
LAB_0074a309:
0074A309  5E                        POP ESI
0074A30A  C9                        LEAVE
0074A30B  C2 04 00                  RET 0x4
