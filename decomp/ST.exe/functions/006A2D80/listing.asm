FUN_006a2d80:
006A2D80  55                        PUSH EBP
006A2D81  8B EC                     MOV EBP,ESP
006A2D83  83 EC 08                  SUB ESP,0x8
006A2D86  53                        PUSH EBX
006A2D87  57                        PUSH EDI
006A2D88  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A2D8B  33 DB                     XOR EBX,EBX
006A2D8D  83 3F 00                  CMP dword ptr [EDI],0x0
006A2D90  0F 8E 80 00 00 00         JLE 0x006a2e16
006A2D96  56                        PUSH ESI
LAB_006a2d97:
006A2D97  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006A2D9A  33 F6                     XOR ESI,ESI
006A2D9C  85 C0                     TEST EAX,EAX
006A2D9E  7E 6E                     JLE 0x006a2e0e
006A2DA0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A2DA3  25 00 40 00 00            AND EAX,0x4000
006A2DA8  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006a2dab:
006A2DAB  33 C0                     XOR EAX,EAX
006A2DAD  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A2DB0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A2DB3  51                        PUSH ECX
006A2DB4  50                        PUSH EAX
006A2DB5  56                        PUSH ESI
006A2DB6  53                        PUSH EBX
006A2DB7  57                        PUSH EDI
006A2DB8  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
006A2DBC  E8 8B 13 D6 FF            CALL 0x0040414c
006A2DC1  83 C4 14                  ADD ESP,0x14
006A2DC4  66 83 7D FC 00            CMP word ptr [EBP + -0x4],0x0
006A2DC9  75 06                     JNZ 0x006a2dd1
006A2DCB  66 C7 45 FC 00 11         MOV word ptr [EBP + -0x4],0x1100
LAB_006a2dd1:
006A2DD1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A2DD4  85 C9                     TEST ECX,ECX
006A2DD6  74 0A                     JZ 0x006a2de2
006A2DD8  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
006A2DDC  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
006A2DE0  EB 08                     JMP 0x006a2dea
LAB_006a2de2:
006A2DE2  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
006A2DE6  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
LAB_006a2dea:
006A2DEA  6A 00                     PUSH 0x0
006A2DEC  8D 55 F8                  LEA EDX,[EBP + -0x8]
006A2DEF  0F BF C0                  MOVSX EAX,AX
006A2DF2  6A 00                     PUSH 0x0
006A2DF4  52                        PUSH EDX
006A2DF5  68 FF 00 00 00            PUSH 0xff
006A2DFA  50                        PUSH EAX
006A2DFB  56                        PUSH ESI
006A2DFC  53                        PUSH EBX
006A2DFD  57                        PUSH EDI
006A2DFE  E8 F2 1E D6 FF            CALL 0x00404cf5
006A2E03  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006A2E06  83 C4 20                  ADD ESP,0x20
006A2E09  46                        INC ESI
006A2E0A  3B F0                     CMP ESI,EAX
006A2E0C  7C 9D                     JL 0x006a2dab
LAB_006a2e0e:
006A2E0E  8B 07                     MOV EAX,dword ptr [EDI]
006A2E10  43                        INC EBX
006A2E11  3B D8                     CMP EBX,EAX
006A2E13  7C 82                     JL 0x006a2d97
006A2E15  5E                        POP ESI
LAB_006a2e16:
006A2E16  5F                        POP EDI
006A2E17  5B                        POP EBX
006A2E18  8B E5                     MOV ESP,EBP
006A2E1A  5D                        POP EBP
006A2E1B  C3                        RET
