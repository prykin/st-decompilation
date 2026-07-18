FUN_006a4f20:
006A4F20  55                        PUSH EBP
006A4F21  8B EC                     MOV EBP,ESP
006A4F23  F6 05 78 C1 7E 00 04      TEST byte ptr [0x007ec178],0x4
006A4F2A  74 29                     JZ 0x006a4f55
006A4F2C  E8 E2 FD D5 FF            CALL 0x00404d13
006A4F31  85 C0                     TEST EAX,EAX
006A4F33  75 20                     JNZ 0x006a4f55
006A4F35  68 BC C2 7E 00            PUSH 0x7ec2bc
006A4F3A  50                        PUSH EAX
006A4F3B  68 0E 05 00 00            PUSH 0x50e
006A4F40  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4F45  6A 02                     PUSH 0x2
006A4F47  E8 54 C0 08 00            CALL 0x00730fa0
006A4F4C  83 C4 14                  ADD ESP,0x14
006A4F4F  83 F8 01                  CMP EAX,0x1
006A4F52  75 01                     JNZ 0x006a4f55
006A4F54  CC                        INT3
LAB_006a4f55:
006A4F55  56                        PUSH ESI
006A4F56  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A4F59  56                        PUSH ESI
006A4F5A  E8 0F 02 D6 FF            CALL 0x0040516e
006A4F5F  83 C4 04                  ADD ESP,0x4
006A4F62  85 C0                     TEST EAX,EAX
006A4F64  75 20                     JNZ 0x006a4f86
006A4F66  68 88 C6 7E 00            PUSH 0x7ec688
006A4F6B  50                        PUSH EAX
006A4F6C  68 17 05 00 00            PUSH 0x517
006A4F71  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4F76  6A 02                     PUSH 0x2
006A4F78  E8 23 C0 08 00            CALL 0x00730fa0
006A4F7D  83 C4 14                  ADD ESP,0x14
006A4F80  83 F8 01                  CMP EAX,0x1
006A4F83  75 01                     JNZ 0x006a4f86
006A4F85  CC                        INT3
LAB_006a4f86:
006A4F86  8B 4E F4                  MOV ECX,dword ptr [ESI + -0xc]
006A4F89  8B C1                     MOV EAX,ECX
006A4F8B  25 FF FF 00 00            AND EAX,0xffff
006A4F90  83 F8 04                  CMP EAX,0x4
006A4F93  74 30                     JZ 0x006a4fc5
006A4F95  83 F9 01                  CMP ECX,0x1
006A4F98  74 2B                     JZ 0x006a4fc5
006A4F9A  83 F8 02                  CMP EAX,0x2
006A4F9D  74 26                     JZ 0x006a4fc5
006A4F9F  83 F9 03                  CMP ECX,0x3
006A4FA2  74 21                     JZ 0x006a4fc5
006A4FA4  68 58 C6 7E 00            PUSH 0x7ec658
006A4FA9  6A 00                     PUSH 0x0
006A4FAB  68 1D 05 00 00            PUSH 0x51d
006A4FB0  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4FB5  6A 02                     PUSH 0x2
006A4FB7  E8 E4 BF 08 00            CALL 0x00730fa0
006A4FBC  83 C4 14                  ADD ESP,0x14
006A4FBF  83 F8 01                  CMP EAX,0x1
006A4FC2  75 01                     JNZ 0x006a4fc5
006A4FC4  CC                        INT3
LAB_006a4fc5:
006A4FC5  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
006A4FC8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A4FCB  83 F8 02                  CMP EAX,0x2
006A4FCE  75 0A                     JNZ 0x006a4fda
006A4FD0  83 F9 01                  CMP ECX,0x1
006A4FD3  75 05                     JNZ 0x006a4fda
006A4FD5  B9 02 00 00 00            MOV ECX,0x2
LAB_006a4fda:
006A4FDA  83 F8 03                  CMP EAX,0x3
006A4FDD  74 25                     JZ 0x006a5004
006A4FDF  3B C1                     CMP EAX,ECX
006A4FE1  74 21                     JZ 0x006a5004
006A4FE3  68 34 C6 7E 00            PUSH 0x7ec634
006A4FE8  6A 00                     PUSH 0x0
006A4FEA  68 24 05 00 00            PUSH 0x524
006A4FEF  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4FF4  6A 02                     PUSH 0x2
006A4FF6  E8 A5 BF 08 00            CALL 0x00730fa0
006A4FFB  83 C4 14                  ADD ESP,0x14
006A4FFE  83 F8 01                  CMP EAX,0x1
006A5001  75 01                     JNZ 0x006a5004
006A5003  CC                        INT3
LAB_006a5004:
006A5004  8B 46 F0                  MOV EAX,dword ptr [ESI + -0x10]
006A5007  5E                        POP ESI
006A5008  5D                        POP EBP
006A5009  C3                        RET
