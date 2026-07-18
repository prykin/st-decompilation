FUN_006e8aa0:
006E8AA0  55                        PUSH EBP
006E8AA1  8B EC                     MOV EBP,ESP
006E8AA3  56                        PUSH ESI
006E8AA4  57                        PUSH EDI
006E8AA5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E8AA8  6A 00                     PUSH 0x0
006E8AAA  6A 00                     PUSH 0x0
006E8AAC  6A 00                     PUSH 0x0
006E8AAE  6A 00                     PUSH 0x0
006E8AB0  6A 00                     PUSH 0x0
006E8AB2  6A 00                     PUSH 0x0
006E8AB4  6A 00                     PUSH 0x0
006E8AB6  8B F1                     MOV ESI,ECX
006E8AB8  57                        PUSH EDI
006E8AB9  E8 A2 FB FF FF            CALL 0x006e8660
006E8ABE  85 C0                     TEST EAX,EAX
006E8AC0  75 32                     JNZ 0x006e8af4
006E8AC2  8B 0F                     MOV ECX,dword ptr [EDI]
006E8AC4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E8AC7  52                        PUSH EDX
006E8AC8  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006E8ACB  C1 E0 03                  SHL EAX,0x3
006E8ACE  2B C1                     SUB EAX,ECX
006E8AD0  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
006E8AD6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E8AD9  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E8ADC  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E8ADF  81 C9 04 10 00 00         OR ECX,0x1004
006E8AE5  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006E8AE8  8B 07                     MOV EAX,dword ptr [EDI]
006E8AEA  50                        PUSH EAX
006E8AEB  8B CE                     MOV ECX,ESI
006E8AED  E8 0E 00 00 00            CALL 0x006e8b00
006E8AF2  33 C0                     XOR EAX,EAX
LAB_006e8af4:
006E8AF4  5F                        POP EDI
006E8AF5  5E                        POP ESI
006E8AF6  5D                        POP EBP
006E8AF7  C2 08 00                  RET 0x8
