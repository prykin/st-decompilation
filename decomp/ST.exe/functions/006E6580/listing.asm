FUN_006e6580:
006E6580  55                        PUSH EBP
006E6581  8B EC                     MOV EBP,ESP
006E6583  56                        PUSH ESI
006E6584  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E6587  56                        PUSH ESI
006E6588  8A 46 0D                  MOV AL,byte ptr [ESI + 0xd]
006E658B  84 C0                     TEST AL,AL
006E658D  74 17                     JZ 0x006e65a6
006E658F  81 C1 46 04 00 00         ADD ECX,0x446
006E6595  51                        PUSH ECX
006E6596  E8 25 33 FD FF            CALL 0x006b98c0
006E659B  56                        PUSH ESI
006E659C  E8 EF F8 FB FF            CALL 0x006a5e90
006E65A1  5E                        POP ESI
006E65A2  5D                        POP EBP
006E65A3  C2 04 00                  RET 0x4
LAB_006e65a6:
006E65A6  81 C1 4A 04 00 00         ADD ECX,0x44a
006E65AC  51                        PUSH ECX
006E65AD  E8 0E 33 FD FF            CALL 0x006b98c0
006E65B2  56                        PUSH ESI
006E65B3  E8 D8 F8 FB FF            CALL 0x006a5e90
006E65B8  5E                        POP ESI
006E65B9  5D                        POP EBP
006E65BA  C2 04 00                  RET 0x4
