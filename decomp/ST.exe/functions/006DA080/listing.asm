FUN_006da080:
006DA080  55                        PUSH EBP
006DA081  8B EC                     MOV EBP,ESP
006DA083  6A FF                     PUSH -0x1
006DA085  68 38 DF 79 00            PUSH 0x79df38
006DA08A  68 64 D9 72 00            PUSH 0x72d964
006DA08F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006DA095  50                        PUSH EAX
006DA096  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006DA09D  83 EC 18                  SUB ESP,0x18
006DA0A0  53                        PUSH EBX
006DA0A1  56                        PUSH ESI
006DA0A2  57                        PUSH EDI
006DA0A3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DA0A6  33 DB                     XOR EBX,EBX
006DA0A8  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006DA0AB  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006DA0AE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006da0b1:
006DA0B1  6A 10                     PUSH 0x10
006DA0B3  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006DA0B6  50                        PUSH EAX
006DA0B7  8D 4D D8                  LEA ECX,[EBP + -0x28]
006DA0BA  51                        PUSH ECX
006DA0BB  8B 97 CC 01 00 00         MOV EDX,dword ptr [EDI + 0x1cc]
006DA0C1  52                        PUSH EDX
006DA0C2  E8 79 1D FE FF            CALL 0x006bbe40
006DA0C7  8B F0                     MOV ESI,EAX
006DA0C9  85 F6                     TEST ESI,ESI
006DA0CB  74 26                     JZ 0x006da0f3
006DA0CD  81 FE C2 01 76 88         CMP ESI,0x887601c2
006DA0D3  75 1A                     JNZ 0x006da0ef
006DA0D5  8B 87 CC 01 00 00         MOV EAX,dword ptr [EDI + 0x1cc]
006DA0DB  8B 08                     MOV ECX,dword ptr [EAX]
006DA0DD  50                        PUSH EAX
006DA0DE  FF 51 6C                  CALL dword ptr [ECX + 0x6c]
006DA0E1  8B 17                     MOV EDX,dword ptr [EDI]
006DA0E3  52                        PUSH EDX
006DA0E4  E8 57 4B FF FF            CALL 0x006cec40
006DA0E9  43                        INC EBX
006DA0EA  83 FB 02                  CMP EBX,0x2
006DA0ED  7C C2                     JL 0x006da0b1
LAB_006da0ef:
006DA0EF  85 F6                     TEST ESI,ESI
006DA0F1  75 72                     JNZ 0x006da165
LAB_006da0f3:
006DA0F3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006DA0F6  8B C8                     MOV ECX,EAX
006DA0F8  0F AF 4D 18               IMUL ECX,dword ptr [EBP + 0x18]
006DA0FC  03 4D 14                  ADD ECX,dword ptr [EBP + 0x14]
006DA0FF  01 4D D8                  ADD dword ptr [EBP + -0x28],ECX
006DA102  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006DA109  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006DA10C  52                        PUSH EDX
006DA10D  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006DA110  51                        PUSH ECX
006DA111  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006DA114  52                        PUSH EDX
006DA115  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006DA118  51                        PUSH ECX
006DA119  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006DA11C  52                        PUSH EDX
006DA11D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006DA120  51                        PUSH ECX
006DA121  50                        PUSH EAX
006DA122  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006DA125  52                        PUSH EDX
006DA126  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006DA129  50                        PUSH EAX
006DA12A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006DA12D  51                        PUSH ECX
006DA12E  E8 6D 00 00 00            CALL 0x006da1a0
006DA133  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DA13A  EB 18                     JMP 0x006da154
LAB_006da154:
006DA154  8B BF CC 01 00 00         MOV EDI,dword ptr [EDI + 0x1cc]
006DA15A  8B 17                     MOV EDX,dword ptr [EDI]
006DA15C  6A 00                     PUSH 0x0
006DA15E  57                        PUSH EDI
006DA15F  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_006da165:
006DA165  81 FE A0 00 76 88         CMP ESI,0x887600a0
006DA16B  74 1D                     JZ 0x006da18a
006DA16D  81 FE AE 01 76 88         CMP ESI,0x887601ae
006DA173  74 15                     JZ 0x006da18a
006DA175  8B C6                     MOV EAX,ESI
006DA177  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006DA17A  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006DA181  5F                        POP EDI
006DA182  5E                        POP ESI
006DA183  5B                        POP EBX
006DA184  8B E5                     MOV ESP,EBP
006DA186  5D                        POP EBP
006DA187  C2 2C 00                  RET 0x2c
LAB_006da18a:
006DA18A  33 C0                     XOR EAX,EAX
006DA18C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006DA18F  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006DA196  5F                        POP EDI
006DA197  5E                        POP ESI
006DA198  5B                        POP EBX
006DA199  8B E5                     MOV ESP,EBP
006DA19B  5D                        POP EBP
006DA19C  C2 2C 00                  RET 0x2c
