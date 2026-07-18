FUN_0074b99c:
0074B99C  8B 54 24 04               MOV EDX,dword ptr [ESP + 0x4]
0074B9A0  53                        PUSH EBX
0074B9A1  56                        PUSH ESI
0074B9A2  57                        PUSH EDI
0074B9A3  8B C1                     MOV EAX,ECX
0074B9A5  6A 10                     PUSH 0x10
0074B9A7  59                        POP ECX
0074B9A8  8B FA                     MOV EDI,EDX
0074B9AA  8B F0                     MOV ESI,EAX
0074B9AC  33 DB                     XOR EBX,EBX
0074B9AE  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074B9B0  75 3B                     JNZ 0x0074b9ed
0074B9B2  6A 10                     PUSH 0x10
0074B9B4  8D 7A 10                  LEA EDI,[EDX + 0x10]
0074B9B7  59                        POP ECX
0074B9B8  8D 70 10                  LEA ESI,[EAX + 0x10]
0074B9BB  33 DB                     XOR EBX,EBX
0074B9BD  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074B9BF  75 2C                     JNZ 0x0074b9ed
0074B9C1  6A 10                     PUSH 0x10
0074B9C3  8D 7A 2C                  LEA EDI,[EDX + 0x2c]
0074B9C6  59                        POP ECX
0074B9C7  8D 70 2C                  LEA ESI,[EAX + 0x2c]
0074B9CA  33 DB                     XOR EBX,EBX
0074B9CC  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074B9CE  75 1D                     JNZ 0x0074b9ed
0074B9D0  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
0074B9D3  3B 4A 40                  CMP ECX,dword ptr [EDX + 0x40]
0074B9D6  75 15                     JNZ 0x0074b9ed
0074B9D8  85 C9                     TEST ECX,ECX
0074B9DA  74 0C                     JZ 0x0074b9e8
0074B9DC  8B 70 44                  MOV ESI,dword ptr [EAX + 0x44]
0074B9DF  8B 7A 44                  MOV EDI,dword ptr [EDX + 0x44]
0074B9E2  33 C0                     XOR EAX,EAX
0074B9E4  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074B9E6  75 05                     JNZ 0x0074b9ed
LAB_0074b9e8:
0074B9E8  6A 01                     PUSH 0x1
0074B9EA  58                        POP EAX
0074B9EB  EB 02                     JMP 0x0074b9ef
LAB_0074b9ed:
0074B9ED  33 C0                     XOR EAX,EAX
LAB_0074b9ef:
0074B9EF  5F                        POP EDI
0074B9F0  5E                        POP ESI
0074B9F1  5B                        POP EBX
0074B9F2  C2 04 00                  RET 0x4
