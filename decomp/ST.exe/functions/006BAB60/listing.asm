FUN_006bab60:
006BAB60  55                        PUSH EBP
006BAB61  8B EC                     MOV EBP,ESP
006BAB63  83 EC 64                  SUB ESP,0x64
006BAB66  56                        PUSH ESI
006BAB67  57                        PUSH EDI
006BAB68  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006BAB6B  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006BAB6E  25 00 11 00 00            AND EAX,0x1100
006BAB73  3D 00 01 00 00            CMP EAX,0x100
006BAB78  0F 84 CF 00 00 00         JZ 0x006bac4d
006BAB7E  8B 47 40                  MOV EAX,dword ptr [EDI + 0x40]
006BAB81  85 C0                     TEST EAX,EAX
006BAB83  0F 84 C4 00 00 00         JZ 0x006bac4d
006BAB89  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006BAB8C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006BAB8F  A9 00 00 00 04            TEST EAX,0x4000000
006BAB94  C7 45 9C 64 00 00 00      MOV dword ptr [EBP + -0x64],0x64
006BAB9B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006BAB9E  74 0D                     JZ 0x006babad
006BABA0  8D 97 F0 04 00 00         LEA EDX,[EDI + 0x4f0]
006BABA6  52                        PUSH EDX
006BABA7  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006babad:
006BABAD  53                        PUSH EBX
006BABAE  33 DB                     XOR EBX,EBX
LAB_006babb0:
006BABB0  8B 47 40                  MOV EAX,dword ptr [EDI + 0x40]
006BABB3  8D 55 9C                  LEA EDX,[EBP + -0x64]
006BABB6  52                        PUSH EDX
006BABB7  68 00 04 00 01            PUSH 0x1000400
006BABBC  8B 08                     MOV ECX,dword ptr [EAX]
006BABBE  6A 00                     PUSH 0x0
006BABC0  6A 00                     PUSH 0x0
006BABC2  6A 00                     PUSH 0x0
006BABC4  50                        PUSH EAX
006BABC5  FF 51 14                  CALL dword ptr [ECX + 0x14]
006BABC8  8B F0                     MOV ESI,EAX
006BABCA  85 F6                     TEST ESI,ESI
006BABCC  74 32                     JZ 0x006bac00
006BABCE  81 FE C2 01 76 88         CMP ESI,0x887601c2
006BABD4  75 08                     JNZ 0x006babde
006BABD6  57                        PUSH EDI
006BABD7  E8 64 40 01 00            CALL 0x006cec40
006BABDC  EB 1C                     JMP 0x006babfa
LAB_006babde:
006BABDE  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BABE4  74 08                     JZ 0x006babee
006BABE6  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BABEC  75 12                     JNZ 0x006bac00
LAB_006babee:
006BABEE  85 DB                     TEST EBX,EBX
006BABF0  75 0E                     JNZ 0x006bac00
006BABF2  6A 02                     PUSH 0x2
006BABF4  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006babfa:
006BABFA  43                        INC EBX
006BABFB  83 FB 02                  CMP EBX,0x2
006BABFE  72 B0                     JC 0x006babb0
LAB_006bac00:
006BAC00  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BAC06  5B                        POP EBX
006BAC07  74 08                     JZ 0x006bac11
006BAC09  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BAC0F  75 02                     JNZ 0x006bac13
LAB_006bac11:
006BAC11  33 F6                     XOR ESI,ESI
LAB_006bac13:
006BAC13  F7 47 08 00 00 00 04      TEST dword ptr [EDI + 0x8],0x4000000
006BAC1A  74 0D                     JZ 0x006bac29
006BAC1C  81 C7 F0 04 00 00         ADD EDI,0x4f0
006BAC22  57                        PUSH EDI
006BAC23  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006bac29:
006BAC29  85 F6                     TEST ESI,ESI
006BAC2B  74 20                     JZ 0x006bac4d
006BAC2D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006BAC32  68 0D 03 00 00            PUSH 0x30d
006BAC37  68 48 DC 7E 00            PUSH 0x7edc48
006BAC3C  50                        PUSH EAX
006BAC3D  56                        PUSH ESI
006BAC3E  E8 FD B1 FE FF            CALL 0x006a5e40
006BAC43  8B C6                     MOV EAX,ESI
006BAC45  5F                        POP EDI
006BAC46  5E                        POP ESI
006BAC47  8B E5                     MOV ESP,EBP
006BAC49  5D                        POP EBP
006BAC4A  C2 08 00                  RET 0x8
LAB_006bac4d:
006BAC4D  5F                        POP EDI
006BAC4E  33 C0                     XOR EAX,EAX
006BAC50  5E                        POP ESI
006BAC51  8B E5                     MOV ESP,EBP
006BAC53  5D                        POP EBP
006BAC54  C2 08 00                  RET 0x8
