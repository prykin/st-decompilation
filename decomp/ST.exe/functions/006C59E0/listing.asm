FUN_006c59e0:
006C59E0  55                        PUSH EBP
006C59E1  8B EC                     MOV EBP,ESP
006C59E3  51                        PUSH ECX
006C59E4  53                        PUSH EBX
006C59E5  56                        PUSH ESI
006C59E6  57                        PUSH EDI
006C59E7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C59EA  B9 20 00 00 00            MOV ECX,0x20
LAB_006c59ef:
006C59EF  D1 CA                     ROR EDX,0x1
006C59F1  D1 D0                     RCL EAX,0x1
006C59F3  49                        DEC ECX
006C59F4  75 F9                     JNZ 0x006c59ef
006C59F6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C59F9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C59FC  5F                        POP EDI
006C59FD  5E                        POP ESI
006C59FE  5B                        POP EBX
006C59FF  8B E5                     MOV ESP,EBP
006C5A01  5D                        POP EBP
006C5A02  C3                        RET
