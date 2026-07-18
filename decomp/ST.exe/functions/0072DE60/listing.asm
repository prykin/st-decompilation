__itoa:
0072DE60  55                        PUSH EBP
0072DE61  8B EC                     MOV EBP,ESP
0072DE63  83 7D 10 0A               CMP dword ptr [EBP + 0x10],0xa
0072DE67  75 1E                     JNZ 0x0072de87
0072DE69  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072DE6D  7D 18                     JGE 0x0072de87
0072DE6F  6A 01                     PUSH 0x1
0072DE71  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072DE74  50                        PUSH EAX
0072DE75  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072DE78  51                        PUSH ECX
0072DE79  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072DE7C  52                        PUSH EDX
0072DE7D  E8 2E 00 00 00            CALL 0x0072deb0
0072DE82  83 C4 10                  ADD ESP,0x10
0072DE85  EB 16                     JMP 0x0072de9d
LAB_0072de87:
0072DE87  6A 00                     PUSH 0x0
0072DE89  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072DE8C  50                        PUSH EAX
0072DE8D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072DE90  51                        PUSH ECX
0072DE91  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072DE94  52                        PUSH EDX
0072DE95  E8 16 00 00 00            CALL 0x0072deb0
0072DE9A  83 C4 10                  ADD ESP,0x10
LAB_0072de9d:
0072DE9D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072DEA0  5D                        POP EBP
0072DEA1  C3                        RET
