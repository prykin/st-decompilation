FUN_0074b8c6:
0074B8C6  55                        PUSH EBP
0074B8C7  8B EC                     MOV EBP,ESP
0074B8C9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074B8CC  57                        PUSH EDI
0074B8CD  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0074B8D0  3B C7                     CMP EAX,EDI
0074B8D2  75 05                     JNZ 0x0074b8d9
0074B8D4  6A 01                     PUSH 0x1
0074B8D6  58                        POP EAX
0074B8D7  EB 38                     JMP 0x0074b911
LAB_0074b8d9:
0074B8D9  8B 08                     MOV ECX,dword ptr [EAX]
0074B8DB  56                        PUSH ESI
0074B8DC  8D 55 08                  LEA EDX,[EBP + 0x8]
0074B8DF  BE B8 22 7A 00            MOV ESI,0x7a22b8
0074B8E4  52                        PUSH EDX
0074B8E5  56                        PUSH ESI
0074B8E6  50                        PUSH EAX
0074B8E7  FF 11                     CALL dword ptr [ECX]
0074B8E9  8B 07                     MOV EAX,dword ptr [EDI]
0074B8EB  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0074B8EE  51                        PUSH ECX
0074B8EF  56                        PUSH ESI
0074B8F0  57                        PUSH EDI
0074B8F1  FF 10                     CALL dword ptr [EAX]
0074B8F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074B8F6  50                        PUSH EAX
0074B8F7  8B 08                     MOV ECX,dword ptr [EAX]
0074B8F9  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074B8FC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074B8FF  50                        PUSH EAX
0074B900  8B 08                     MOV ECX,dword ptr [EAX]
0074B902  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074B905  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074B908  33 C0                     XOR EAX,EAX
0074B90A  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
0074B90D  5E                        POP ESI
0074B90E  0F 94 C0                  SETZ AL
LAB_0074b911:
0074B911  5F                        POP EDI
0074B912  5D                        POP EBP
0074B913  C2 08 00                  RET 0x8
