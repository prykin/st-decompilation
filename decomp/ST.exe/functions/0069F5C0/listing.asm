FUN_0069f5c0:
0069F5C0  55                        PUSH EBP
0069F5C1  8B EC                     MOV EBP,ESP
0069F5C3  56                        PUSH ESI
0069F5C4  57                        PUSH EDI
0069F5C5  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0069F5C8  8B F1                     MOV ESI,ECX
0069F5CA  85 FF                     TEST EDI,EDI
0069F5CC  75 13                     JNZ 0x0069f5e1
0069F5CE  E8 ED F0 08 00            CALL 0x0072e6c0
0069F5D3  25 0F 00 00 80            AND EAX,0x8000000f
0069F5D8  79 16                     JNS 0x0069f5f0
0069F5DA  48                        DEC EAX
0069F5DB  83 C8 F0                  OR EAX,0xfffffff0
0069F5DE  40                        INC EAX
0069F5DF  EB 0F                     JMP 0x0069f5f0
LAB_0069f5e1:
0069F5E1  E8 DA F0 08 00            CALL 0x0072e6c0
0069F5E6  99                        CDQ
0069F5E7  B9 0B 00 00 00            MOV ECX,0xb
0069F5EC  F7 F9                     IDIV ECX
0069F5EE  8B C2                     MOV EAX,EDX
LAB_0069f5f0:
0069F5F0  8B 0C C5 94 7F 7D 00      MOV ECX,dword ptr [EAX*0x8 + 0x7d7f94]
0069F5F7  6A 00                     PUSH 0x0
0069F5F9  8D 55 10                  LEA EDX,[EBP + 0x10]
0069F5FC  57                        PUSH EDI
0069F5FD  52                        PUSH EDX
0069F5FE  8B 14 C5 90 7F 7D 00      MOV EDX,dword ptr [EAX*0x8 + 0x7d7f90]
0069F605  51                        PUSH ECX
0069F606  52                        PUSH EDX
0069F607  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
0069F60E  E8 43 64 D6 FF            CALL 0x00405a56
0069F613  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069F616  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069F619  83 C4 14                  ADD ESP,0x14
0069F61C  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
0069F61F  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
0069F622  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069F625  51                        PUSH ECX
0069F626  50                        PUSH EAX
0069F627  8B CE                     MOV ECX,ESI
0069F629  E8 F4 51 D6 FF            CALL 0x00404822
0069F62E  5F                        POP EDI
0069F62F  5E                        POP ESI
0069F630  5D                        POP EBP
0069F631  C2 0C 00                  RET 0xc
