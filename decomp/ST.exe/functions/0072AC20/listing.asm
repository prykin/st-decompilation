FUN_0072ac20:
0072AC20  55                        PUSH EBP
0072AC21  8B EC                     MOV EBP,ESP
0072AC23  83 EC 08                  SUB ESP,0x8
0072AC26  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0072AC29  53                        PUSH EBX
0072AC2A  56                        PUSH ESI
0072AC2B  83 F8 02                  CMP EAX,0x2
0072AC2E  57                        PUSH EDI
0072AC2F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072AC32  7C 54                     JL 0x0072ac88
0072AC34  48                        DEC EAX
0072AC35  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
0072AC3C  85 C0                     TEST EAX,EAX
0072AC3E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072AC41  7E 45                     JLE 0x0072ac88
0072AC43  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0072AC46  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
0072AC49  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
LAB_0072ac4c:
0072AC4C  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0072AC4F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0072AC52  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0072AC55  57                        PUSH EDI
0072AC56  53                        PUSH EBX
0072AC57  50                        PUSH EAX
0072AC58  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072AC5B  51                        PUSH ECX
0072AC5C  52                        PUSH EDX
0072AC5D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072AC60  8D 4E 10                  LEA ECX,[ESI + 0x10]
0072AC63  50                        PUSH EAX
0072AC64  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072AC67  51                        PUSH ECX
0072AC68  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072AC6B  56                        PUSH ESI
0072AC6C  52                        PUSH EDX
0072AC6D  50                        PUSH EAX
0072AC6E  E8 6D EB FF FF            CALL 0x007297e0
0072AC73  85 C0                     TEST EAX,EAX
0072AC75  75 13                     JNZ 0x0072ac8a
0072AC77  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0072AC7A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072AC7D  40                        INC EAX
0072AC7E  83 C6 10                  ADD ESI,0x10
0072AC81  3B C1                     CMP EAX,ECX
0072AC83  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0072AC86  7C C4                     JL 0x0072ac4c
LAB_0072ac88:
0072AC88  33 C0                     XOR EAX,EAX
LAB_0072ac8a:
0072AC8A  5F                        POP EDI
0072AC8B  5E                        POP ESI
0072AC8C  5B                        POP EBX
0072AC8D  8B E5                     MOV ESP,EBP
0072AC8F  5D                        POP EBP
0072AC90  C2 28 00                  RET 0x28
