FUN_006a5d60:
006A5D60  55                        PUSH EBP
006A5D61  8B EC                     MOV EBP,ESP
006A5D63  53                        PUSH EBX
006A5D64  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A5D67  85 DB                     TEST EBX,EBX
006A5D69  74 7D                     JZ 0x006a5de8
006A5D6B  56                        PUSH ESI
006A5D6C  57                        PUSH EDI
006A5D6D  BF 88 C1 7E 00            MOV EDI,0x7ec188
006A5D72  8D 73 18                  LEA ESI,[EBX + 0x18]
LAB_006a5d75:
006A5D75  8B 07                     MOV EAX,dword ptr [EDI]
006A5D77  8B 4E EC                  MOV ECX,dword ptr [ESI + -0x14]
006A5D7A  8B 16                     MOV EDX,dword ptr [ESI]
006A5D7C  50                        PUSH EAX
006A5D7D  51                        PUSH ECX
006A5D7E  52                        PUSH EDX
006A5D7F  68 FC CA 7E 00            PUSH 0x7ecafc
006A5D84  6A 00                     PUSH 0x0
006A5D86  6A 00                     PUSH 0x0
006A5D88  6A 00                     PUSH 0x0
006A5D8A  6A 00                     PUSH 0x0
006A5D8C  E8 0F B2 08 00            CALL 0x00730fa0
006A5D91  83 C4 20                  ADD ESP,0x20
006A5D94  83 F8 01                  CMP EAX,0x1
006A5D97  75 01                     JNZ 0x006a5d9a
006A5D99  CC                        INT3
LAB_006a5d9a:
006A5D9A  83 C7 04                  ADD EDI,0x4
006A5D9D  83 C6 04                  ADD ESI,0x4
006A5DA0  81 FF 9C C1 7E 00         CMP EDI,0x7ec19c
006A5DA6  7C CD                     JL 0x006a5d75
006A5DA8  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
006A5DAB  50                        PUSH EAX
006A5DAC  68 D4 CA 7E 00            PUSH 0x7ecad4
006A5DB1  6A 00                     PUSH 0x0
006A5DB3  6A 00                     PUSH 0x0
006A5DB5  6A 00                     PUSH 0x0
006A5DB7  6A 00                     PUSH 0x0
006A5DB9  E8 E2 B1 08 00            CALL 0x00730fa0
006A5DBE  83 C4 18                  ADD ESP,0x18
006A5DC1  83 F8 01                  CMP EAX,0x1
006A5DC4  5F                        POP EDI
006A5DC5  5E                        POP ESI
006A5DC6  75 01                     JNZ 0x006a5dc9
006A5DC8  CC                        INT3
LAB_006a5dc9:
006A5DC9  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
006A5DCC  51                        PUSH ECX
006A5DCD  68 AC CA 7E 00            PUSH 0x7ecaac
006A5DD2  6A 00                     PUSH 0x0
006A5DD4  6A 00                     PUSH 0x0
006A5DD6  6A 00                     PUSH 0x0
006A5DD8  6A 00                     PUSH 0x0
006A5DDA  E8 C1 B1 08 00            CALL 0x00730fa0
006A5DDF  83 C4 18                  ADD ESP,0x18
006A5DE2  83 F8 01                  CMP EAX,0x1
006A5DE5  75 01                     JNZ 0x006a5de8
006A5DE7  CC                        INT3
LAB_006a5de8:
006A5DE8  5B                        POP EBX
006A5DE9  5D                        POP EBP
006A5DEA  C3                        RET
