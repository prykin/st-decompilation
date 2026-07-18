FUN_004d6eb0:
004D6EB0  55                        PUSH EBP
004D6EB1  8B EC                     MOV EBP,ESP
004D6EB3  56                        PUSH ESI
004D6EB4  8B F1                     MOV ESI,ECX
004D6EB6  57                        PUSH EDI
004D6EB7  8B 06                     MOV EAX,dword ptr [ESI]
004D6EB9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D6EBC  83 F8 32                  CMP EAX,0x32
004D6EBF  7C 1C                     JL 0x004d6edd
004D6EC1  8B 16                     MOV EDX,dword ptr [ESI]
004D6EC3  8B CE                     MOV ECX,ESI
004D6EC5  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D6EC8  83 F8 74                  CMP EAX,0x74
004D6ECB  7D 10                     JGE 0x004d6edd
004D6ECD  8B 06                     MOV EAX,dword ptr [ESI]
004D6ECF  8B CE                     MOV ECX,ESI
004D6ED1  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D6ED4  8B 3C 85 F8 22 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e22f8]
004D6EDB  EB 26                     JMP 0x004d6f03
LAB_004d6edd:
004D6EDD  8B 16                     MOV EDX,dword ptr [ESI]
004D6EDF  8B CE                     MOV ECX,ESI
004D6EE1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D6EE4  83 F8 01                  CMP EAX,0x1
004D6EE7  7C 50                     JL 0x004d6f39
004D6EE9  8B 06                     MOV EAX,dword ptr [ESI]
004D6EEB  8B CE                     MOV ECX,ESI
004D6EED  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004D6EF0  83 F8 29                  CMP EAX,0x29
004D6EF3  7D 44                     JGE 0x004d6f39
004D6EF5  8B 16                     MOV EDX,dword ptr [ESI]
004D6EF7  8B CE                     MOV ECX,ESI
004D6EF9  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D6EFC  8B 3C 85 1C 06 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7e061c]
LAB_004d6f03:
004D6F03  85 FF                     TEST EDI,EDI
004D6F05  74 32                     JZ 0x004d6f39
004D6F07  8B 06                     MOV EAX,dword ptr [ESI]
004D6F09  8B CE                     MOV ECX,ESI
004D6F0B  FF 90 C4 00 00 00         CALL dword ptr [EAX + 0xc4]
004D6F11  8B C8                     MOV ECX,EAX
004D6F13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D6F16  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D6F19  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D6F1C  C1 E0 02                  SHL EAX,0x2
004D6F1F  99                        CDQ
004D6F20  F7 FF                     IDIV EDI
004D6F22  03 C8                     ADD ECX,EAX
004D6F24  83 F9 64                  CMP ECX,0x64
004D6F27  7E 05                     JLE 0x004d6f2e
004D6F29  B9 64 00 00 00            MOV ECX,0x64
LAB_004d6f2e:
004D6F2E  8B 16                     MOV EDX,dword ptr [ESI]
004D6F30  51                        PUSH ECX
004D6F31  8B CE                     MOV ECX,ESI
004D6F33  FF 92 C8 00 00 00         CALL dword ptr [EDX + 0xc8]
LAB_004d6f39:
004D6F39  5F                        POP EDI
004D6F3A  5E                        POP ESI
004D6F3B  5D                        POP EBP
004D6F3C  C2 04 00                  RET 0x4
