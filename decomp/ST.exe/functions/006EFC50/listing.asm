FUN_006efc50:
006EFC50  55                        PUSH EBP
006EFC51  8B EC                     MOV EBP,ESP
006EFC53  83 EC 48                  SUB ESP,0x48
006EFC56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EFC5B  53                        PUSH EBX
006EFC5C  56                        PUSH ESI
006EFC5D  57                        PUSH EDI
006EFC5E  8D 55 BC                  LEA EDX,[EBP + -0x44]
006EFC61  8D 4D B8                  LEA ECX,[EBP + -0x48]
006EFC64  6A 00                     PUSH 0x0
006EFC66  52                        PUSH EDX
006EFC67  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006EFC6E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006EFC71  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EFC77  E8 74 DB 03 00            CALL 0x0072d7f0
006EFC7C  8B F0                     MOV ESI,EAX
006EFC7E  83 C4 08                  ADD ESP,0x8
006EFC81  85 F6                     TEST ESI,ESI
006EFC83  0F 85 CC 00 00 00         JNZ 0x006efd55
006EFC89  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006EFC8C  85 C0                     TEST EAX,EAX
006EFC8E  74 07                     JZ 0x006efc97
006EFC90  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EFC93  85 C0                     TEST EAX,EAX
006EFC95  75 17                     JNZ 0x006efcae
LAB_006efc97:
006EFC97  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006EFC9C  68 1B 01 00 00            PUSH 0x11b
006EFCA1  68 88 EF 7E 00            PUSH 0x7eef88
006EFCA6  50                        PUSH EAX
006EFCA7  6A CC                     PUSH -0x34
006EFCA9  E8 92 61 FB FF            CALL 0x006a5e40
LAB_006efcae:
006EFCAE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006EFCB1  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006EFCB4  8B C7                     MOV EAX,EDI
006EFCB6  99                        CDQ
006EFCB7  2B C2                     SUB EAX,EDX
006EFCB9  8B F0                     MOV ESI,EAX
006EFCBB  8B C3                     MOV EAX,EBX
006EFCBD  99                        CDQ
006EFCBE  2B C2                     SUB EAX,EDX
006EFCC0  D1 FE                     SAR ESI,0x1
006EFCC2  D1 F8                     SAR EAX,0x1
006EFCC4  0F AF F0                  IMUL ESI,EAX
006EFCC7  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
006EFCCA  8D 14 CD 5D 04 00 00      LEA EDX,[ECX*0x8 + 0x45d]
006EFCD1  52                        PUSH EDX
006EFCD2  E8 39 AF FB FF            CALL 0x006aac10
006EFCD7  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006EFCDA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006EFCDD  66 89 38                  MOV word ptr [EAX],DI
006EFCE0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EFCE3  66 89 58 02               MOV word ptr [EAX + 0x2],BX
006EFCE7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006EFCEA  88 51 04                  MOV byte ptr [ECX + 0x4],DL
006EFCED  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EFCF0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006EFCF3  89 48 05                  MOV dword ptr [EAX + 0x5],ECX
006EFCF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EFCF9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EFCFC  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
006EFCFF  89 42 09                  MOV dword ptr [EDX + 0x9],EAX
006EFD02  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EFD05  D1 E1                     SHL ECX,0x1
006EFD07  89 8A 55 04 00 00         MOV dword ptr [EDX + 0x455],ECX
006EFD0D  33 F6                     XOR ESI,ESI
LAB_006efd0f:
006EFD0F  6A 01                     PUSH 0x1
006EFD11  6A 00                     PUSH 0x0
006EFD13  56                        PUSH ESI
006EFD14  6A 03                     PUSH 0x3
006EFD16  68 E4 EF 7E 00            PUSH 0x7eefe4
006EFD1B  E8 E0 2E 00 00            CALL 0x006f2c00
006EFD20  83 C4 0C                  ADD ESP,0xc
006EFD23  50                        PUSH EAX
006EFD24  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EFD27  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
006EFD2A  51                        PUSH ECX
006EFD2B  E8 00 AD 01 00            CALL 0x0070aa30
006EFD30  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EFD33  83 C4 10                  ADD ESP,0x10
006EFD36  89 84 B2 0D 04 00 00      MOV dword ptr [EDX + ESI*0x4 + 0x40d],EAX
006EFD3D  46                        INC ESI
006EFD3E  83 FE 10                  CMP ESI,0x10
006EFD41  7C CC                     JL 0x006efd0f
006EFD43  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006EFD46  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006EFD4B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EFD4E  5F                        POP EDI
006EFD4F  5E                        POP ESI
006EFD50  5B                        POP EBX
006EFD51  8B E5                     MOV ESP,EBP
006EFD53  5D                        POP EBP
006EFD54  C3                        RET
LAB_006efd55:
006EFD55  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006EFD58  68 08 F0 7E 00            PUSH 0x7ef008
006EFD5D  68 CC 4C 7A 00            PUSH 0x7a4ccc
006EFD62  56                        PUSH ESI
006EFD63  6A 00                     PUSH 0x0
006EFD65  68 29 01 00 00            PUSH 0x129
006EFD6A  68 88 EF 7E 00            PUSH 0x7eef88
006EFD6F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EFD75  E8 56 D7 FB FF            CALL 0x006ad4d0
006EFD7A  83 C4 18                  ADD ESP,0x18
006EFD7D  85 C0                     TEST EAX,EAX
006EFD7F  74 01                     JZ 0x006efd82
006EFD81  CC                        INT3
LAB_006efd82:
006EFD82  8D 55 FC                  LEA EDX,[EBP + -0x4]
006EFD85  52                        PUSH EDX
006EFD86  E8 E5 FD FF FF            CALL 0x006efb70
006EFD8B  83 C4 04                  ADD ESP,0x4
006EFD8E  68 2D 01 00 00            PUSH 0x12d
006EFD93  68 88 EF 7E 00            PUSH 0x7eef88
006EFD98  6A 00                     PUSH 0x0
006EFD9A  56                        PUSH ESI
006EFD9B  E8 A0 60 FB FF            CALL 0x006a5e40
006EFDA0  5F                        POP EDI
006EFDA1  5E                        POP ESI
006EFDA2  33 C0                     XOR EAX,EAX
006EFDA4  5B                        POP EBX
006EFDA5  8B E5                     MOV ESP,EBP
006EFDA7  5D                        POP EBP
006EFDA8  C3                        RET
