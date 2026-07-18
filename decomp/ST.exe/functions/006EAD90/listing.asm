FUN_006ead90:
006EAD90  55                        PUSH EBP
006EAD91  8B EC                     MOV EBP,ESP
006EAD93  83 EC 24                  SUB ESP,0x24
006EAD96  53                        PUSH EBX
006EAD97  56                        PUSH ESI
006EAD98  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006EAD9B  33 D2                     XOR EDX,EDX
006EAD9D  8B D9                     MOV EBX,ECX
006EAD9F  3B F2                     CMP ESI,EDX
006EADA1  57                        PUSH EDI
006EADA2  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006EADA5  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006EADA8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006EADAB  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006EADAE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006EADB1  0F 84 F5 01 00 00         JZ 0x006eafac
006EADB7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006EADBA  3B CA                     CMP ECX,EDX
006EADBC  0F 84 EA 01 00 00         JZ 0x006eafac
006EADC2  3B F2                     CMP ESI,EDX
006EADC4  7D 19                     JGE 0x006eaddf
006EADC6  F7 DE                     NEG ESI
006EADC8  8B C6                     MOV EAX,ESI
006EADCA  BE 01 00 00 00            MOV ESI,0x1
006EADCF  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006EADD2  2B F0                     SUB ESI,EAX
006EADD4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006EADD7  03 C6                     ADD EAX,ESI
006EADD9  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006EADDC  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006eaddf:
006EADDF  3B CA                     CMP ECX,EDX
006EADE1  7D 11                     JGE 0x006eadf4
006EADE3  F7 D9                     NEG ECX
006EADE5  8B C1                     MOV EAX,ECX
006EADE7  B9 01 00 00 00            MOV ECX,0x1
006EADEC  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006EADEF  2B C8                     SUB ECX,EAX
006EADF1  01 4D 0C                  ADD dword ptr [EBP + 0xc],ECX
LAB_006eadf4:
006EADF4  8B 83 10 03 00 00         MOV EAX,dword ptr [EBX + 0x310]
006EADFA  8B BB 1C 03 00 00         MOV EDI,dword ptr [EBX + 0x31c]
006EAE00  3B C2                     CMP EAX,EDX
006EAE02  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006EAE05  0F 8E A1 01 00 00         JLE 0x006eafac
006EAE0B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006EAE0E  C7 45 EC C8 00 00 00      MOV dword ptr [EBP + -0x14],0xc8
006EAE15  EB 02                     JMP 0x006eae19
LAB_006eae17:
006EAE17  33 D2                     XOR EDX,EDX
LAB_006eae19:
006EAE19  8B 07                     MOV EAX,dword ptr [EDI]
006EAE1B  25 00 80 01 00            AND EAX,0x18000
006EAE20  3D 00 80 01 00            CMP EAX,0x18000
006EAE25  0F 85 4D 01 00 00         JNZ 0x006eaf78
006EAE2B  39 57 08                  CMP dword ptr [EDI + 0x8],EDX
006EAE2E  0F 85 44 01 00 00         JNZ 0x006eaf78
006EAE34  39 57 18                  CMP dword ptr [EDI + 0x18],EDX
006EAE37  0F 84 3B 01 00 00         JZ 0x006eaf78
006EAE3D  8B 47 5C                  MOV EAX,dword ptr [EDI + 0x5c]
006EAE40  99                        CDQ
006EAE41  2B C2                     SUB EAX,EDX
006EAE43  8B C8                     MOV ECX,EAX
006EAE45  8B 47 54                  MOV EAX,dword ptr [EDI + 0x54]
006EAE48  D1 F9                     SAR ECX,0x1
006EAE4A  03 C8                     ADD ECX,EAX
006EAE4C  8B 47 60                  MOV EAX,dword ptr [EDI + 0x60]
006EAE4F  99                        CDQ
006EAE50  2B C2                     SUB EAX,EDX
006EAE52  8B 57 58                  MOV EDX,dword ptr [EDI + 0x58]
006EAE55  D1 F8                     SAR EAX,0x1
006EAE57  03 C2                     ADD EAX,EDX
006EAE59  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EAE5C  3B CA                     CMP ECX,EDX
006EAE5E  0F 8C 14 01 00 00         JL 0x006eaf78
006EAE64  03 D6                     ADD EDX,ESI
006EAE66  3B CA                     CMP ECX,EDX
006EAE68  0F 8D 0A 01 00 00         JGE 0x006eaf78
006EAE6E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EAE71  3B C1                     CMP EAX,ECX
006EAE73  0F 8C FF 00 00 00         JL 0x006eaf78
006EAE79  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006EAE7C  03 CA                     ADD ECX,EDX
006EAE7E  3B C1                     CMP EAX,ECX
006EAE80  0F 8D F2 00 00 00         JGE 0x006eaf78
006EAE86  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EAE89  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EAE8C  3B C1                     CMP EAX,ECX
006EAE8E  7C 2C                     JL 0x006eaebc
006EAE90  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006EAE93  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EAE96  51                        PUSH ECX
006EAE97  52                        PUSH EDX
006EAE98  E8 B3 4C FD FF            CALL 0x006bfb50
006EAE9D  85 C0                     TEST EAX,EAX
006EAE9F  0F 84 F0 00 00 00         JZ 0x006eaf95
006EAEA5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006EAEA8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006EAEAB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006EAEAE  83 C1 0A                  ADD ECX,0xa
006EAEB1  05 C8 00 00 00            ADD EAX,0xc8
006EAEB6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006EAEB9  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_006eaebc:
006EAEBC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EAEBF  8B 5F 14                  MOV EBX,dword ptr [EDI + 0x14]
006EAEC2  33 F6                     XOR ESI,ESI
006EAEC4  85 C0                     TEST EAX,EAX
006EAEC6  76 67                     JBE 0x006eaf2f
006EAEC8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006EAECB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EAECE  8B 88 1C 03 00 00         MOV ECX,dword ptr [EAX + 0x31c]
006EAED4  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
LAB_006eaed7:
006EAED7  8B 0A                     MOV ECX,dword ptr [EDX]
006EAED9  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EAEDC  C1 E0 03                  SHL EAX,0x3
006EAEDF  2B C1                     SUB EAX,ECX
006EAEE1  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006EAEE4  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EAEE7  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
006EAEEA  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
006EAEED  3B D8                     CMP EBX,EAX
006EAEEF  7C 17                     JL 0x006eaf08
006EAEF1  75 08                     JNZ 0x006eaefb
006EAEF3  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006EAEF6  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
006EAEF9  7C 0D                     JL 0x006eaf08
LAB_006eaefb:
006EAEFB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006EAEFE  46                        INC ESI
006EAEFF  83 C2 14                  ADD EDX,0x14
006EAF02  3B F0                     CMP ESI,EAX
006EAF04  7C D1                     JL 0x006eaed7
006EAF06  EB 27                     JMP 0x006eaf2f
LAB_006eaf08:
006EAF08  3B 75 F8                  CMP ESI,dword ptr [EBP + -0x8]
006EAF0B  7D 22                     JGE 0x006eaf2f
006EAF0D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006EAF10  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006EAF13  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
006EAF16  C1 E1 02                  SHL ECX,0x2
006EAF19  2B D1                     SUB EDX,ECX
006EAF1B  03 C8                     ADD ECX,EAX
006EAF1D  52                        PUSH EDX
006EAF1E  51                        PUSH ECX
006EAF1F  8D 4C B6 05               LEA ECX,[ESI + ESI*0x4 + 0x5]
006EAF23  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
006EAF26  52                        PUSH EDX
006EAF27  E8 44 2B 04 00            CALL 0x0072da70
006EAF2C  83 C4 0C                  ADD ESP,0xc
LAB_006eaf2f:
006EAF2F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EAF32  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006EAF35  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
006EAF38  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
006EAF3B  C1 E0 02                  SHL EAX,0x2
006EAF3E  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006EAF41  89 0C 10                  MOV dword ptr [EAX + EDX*0x1],ECX
006EAF44  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EAF47  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
006EAF4A  89 4C 10 04               MOV dword ptr [EAX + EDX*0x1 + 0x4],ECX
006EAF4E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EAF51  33 C9                     XOR ECX,ECX
006EAF53  89 4C 10 08               MOV dword ptr [EAX + EDX*0x1 + 0x8],ECX
006EAF57  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EAF5A  89 4C 10 0C               MOV dword ptr [EAX + EDX*0x1 + 0xc],ECX
006EAF5E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EAF61  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
006EAF64  89 4C 10 10               MOV dword ptr [EAX + EDX*0x1 + 0x10],ECX
006EAF68  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006EAF6B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006EAF6E  41                        INC ECX
006EAF6F  83 C0 14                  ADD EAX,0x14
006EAF72  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006EAF75  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006eaf78:
006EAF78  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006EAF7B  8B 8B 10 03 00 00         MOV ECX,dword ptr [EBX + 0x310]
006EAF81  40                        INC EAX
006EAF82  81 C7 14 01 00 00         ADD EDI,0x114
006EAF88  3B C1                     CMP EAX,ECX
006EAF8A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006EAF8D  0F 8C 84 FE FF FF         JL 0x006eae17
006EAF93  EB 17                     JMP 0x006eafac
LAB_006eaf95:
006EAF95  8D 45 FC                  LEA EAX,[EBP + -0x4]
006EAF98  50                        PUSH EAX
006EAF99  E8 C2 00 FC FF            CALL 0x006ab060
006EAF9E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006EAFA5  C7 45 E0 FE FF FF FF      MOV dword ptr [EBP + -0x20],0xfffffffe
LAB_006eafac:
006EAFAC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006EAFAF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006EAFB2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006EAFB5  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006EAFB8  89 11                     MOV dword ptr [ECX],EDX
006EAFBA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006EAFBD  85 F6                     TEST ESI,ESI
006EAFBF  89 08                     MOV dword ptr [EAX],ECX
006EAFC1  74 22                     JZ 0x006eafe5
006EAFC3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006EAFC9  68 EF 06 00 00            PUSH 0x6ef
006EAFCE  68 4C EF 7E 00            PUSH 0x7eef4c
006EAFD3  52                        PUSH EDX
006EAFD4  56                        PUSH ESI
006EAFD5  E8 66 AE FB FF            CALL 0x006a5e40
006EAFDA  8B C6                     MOV EAX,ESI
006EAFDC  5F                        POP EDI
006EAFDD  5E                        POP ESI
006EAFDE  5B                        POP EBX
006EAFDF  8B E5                     MOV ESP,EBP
006EAFE1  5D                        POP EBP
006EAFE2  C2 18 00                  RET 0x18
LAB_006eafe5:
006EAFE5  5F                        POP EDI
006EAFE6  5E                        POP ESI
006EAFE7  33 C0                     XOR EAX,EAX
006EAFE9  5B                        POP EBX
006EAFEA  8B E5                     MOV ESP,EBP
006EAFEC  5D                        POP EBP
006EAFED  C2 18 00                  RET 0x18
