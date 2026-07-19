mfTMapErase:
006EFB70  55                        PUSH EBP
006EFB71  8B EC                     MOV EBP,ESP
006EFB73  83 EC 44                  SUB ESP,0x44
006EFB76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EFB7B  56                        PUSH ESI
006EFB7C  57                        PUSH EDI
006EFB7D  8D 55 C0                  LEA EDX,[EBP + -0x40]
006EFB80  8D 4D BC                  LEA ECX,[EBP + -0x44]
006EFB83  6A 00                     PUSH 0x0
006EFB85  52                        PUSH EDX
006EFB86  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EFB89  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EFB8F  E8 5C DC 03 00            CALL 0x0072d7f0
006EFB94  8B F0                     MOV ESI,EAX
006EFB96  83 C4 08                  ADD ESP,0x8
006EFB99  85 F6                     TEST ESI,ESI
006EFB9B  75 67                     JNZ 0x006efc04
006EFB9D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006EFBA0  8B 07                     MOV EAX,dword ptr [EDI]
006EFBA2  85 C0                     TEST EAX,EAX
006EFBA4  74 4F                     JZ 0x006efbf5
006EFBA6  8B 88 55 04 00 00         MOV ECX,dword ptr [EAX + 0x455]
006EFBAC  85 C9                     TEST ECX,ECX
006EFBAE  7E 23                     JLE 0x006efbd3
LAB_006efbb0:
006EFBB0  8B 8C B0 59 04 00 00      MOV ECX,dword ptr [EAX + ESI*0x4 + 0x459]
006EFBB7  8D 84 B0 59 04 00 00      LEA EAX,[EAX + ESI*0x4 + 0x459]
006EFBBE  85 C9                     TEST ECX,ECX
006EFBC0  74 06                     JZ 0x006efbc8
006EFBC2  50                        PUSH EAX
006EFBC3  E8 98 B4 FB FF            CALL 0x006ab060
LAB_006efbc8:
006EFBC8  8B 07                     MOV EAX,dword ptr [EDI]
006EFBCA  46                        INC ESI
006EFBCB  3B B0 55 04 00 00         CMP ESI,dword ptr [EAX + 0x455]
006EFBD1  7C DD                     JL 0x006efbb0
LAB_006efbd3:
006EFBD3  33 F6                     XOR ESI,ESI
LAB_006efbd5:
006EFBD5  8B 07                     MOV EAX,dword ptr [EDI]
006EFBD7  8D 8C 06 0D 04 00 00      LEA ECX,[ESI + EAX*0x1 + 0x40d]
006EFBDE  51                        PUSH ECX
006EFBDF  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
006EFBE2  E8 F9 24 00 00            CALL 0x006f20e0
006EFBE7  83 C6 04                  ADD ESI,0x4
006EFBEA  83 FE 40                  CMP ESI,0x40
006EFBED  7C E6                     JL 0x006efbd5
006EFBEF  57                        PUSH EDI
006EFBF0  E8 6B B4 FB FF            CALL 0x006ab060
LAB_006efbf5:
006EFBF5  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006EFBF8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006EFBFE  5F                        POP EDI
006EFBFF  5E                        POP ESI
006EFC00  8B E5                     MOV ESP,EBP
006EFC02  5D                        POP EBP
006EFC03  C3                        RET
LAB_006efc04:
006EFC04  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006EFC07  68 FC EF 7E 00            PUSH 0x7eeffc
006EFC0C  68 CC 4C 7A 00            PUSH 0x7a4ccc
006EFC11  56                        PUSH ESI
006EFC12  6A 00                     PUSH 0x0
006EFC14  68 07 01 00 00            PUSH 0x107
006EFC19  68 88 EF 7E 00            PUSH 0x7eef88
006EFC1E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006EFC23  E8 A8 D8 FB FF            CALL 0x006ad4d0
006EFC28  83 C4 18                  ADD ESP,0x18
006EFC2B  85 C0                     TEST EAX,EAX
006EFC2D  74 01                     JZ 0x006efc30
006EFC2F  CC                        INT3
LAB_006efc30:
006EFC30  68 09 01 00 00            PUSH 0x109
006EFC35  68 88 EF 7E 00            PUSH 0x7eef88
006EFC3A  6A 00                     PUSH 0x0
006EFC3C  56                        PUSH ESI
006EFC3D  E8 FE 61 FB FF            CALL 0x006a5e40
006EFC42  5F                        POP EDI
006EFC43  5E                        POP ESI
006EFC44  8B E5                     MOV ESP,EBP
006EFC46  5D                        POP EBP
006EFC47  C3                        RET
