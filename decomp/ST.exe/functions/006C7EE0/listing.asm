FUN_006c7ee0:
006C7EE0  55                        PUSH EBP
006C7EE1  8B EC                     MOV EBP,ESP
006C7EE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7EE6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C7EE9  6A 0D                     PUSH 0xd
006C7EEB  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006C7EEE  51                        PUSH ECX
006C7EEF  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C7EF2  52                        PUSH EDX
006C7EF3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C7EF6  51                        PUSH ECX
006C7EF7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7EFA  52                        PUSH EDX
006C7EFB  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006C7EFE  8B 00                     MOV EAX,dword ptr [EAX]
006C7F00  51                        PUSH ECX
006C7F01  52                        PUSH EDX
006C7F02  50                        PUSH EAX
006C7F03  E8 08 DC FE FF            CALL 0x006b5b10
006C7F08  33 C0                     XOR EAX,EAX
006C7F0A  5D                        POP EBP
006C7F0B  C2 14 00                  RET 0x14
