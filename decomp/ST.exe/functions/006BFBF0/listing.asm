FUN_006bfbf0:
006BFBF0  55                        PUSH EBP
006BFBF1  8B EC                     MOV EBP,ESP
006BFBF3  83 EC 30                  SUB ESP,0x30
006BFBF6  53                        PUSH EBX
006BFBF7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006BFBFA  56                        PUSH ESI
006BFBFB  57                        PUSH EDI
006BFBFC  B9 09 00 00 00            MOV ECX,0x9
006BFC01  33 C0                     XOR EAX,EAX
006BFC03  8D 7D D0                  LEA EDI,[EBP + -0x30]
006BFC06  8D 73 4C                  LEA ESI,[EBX + 0x4c]
006BFC09  F3 AB                     STOSD.REP ES:EDI
006BFC0B  8D 83 8A 00 00 00         LEA EAX,[EBX + 0x8a]
006BFC11  B9 0C 00 00 00            MOV ECX,0xc
006BFC16  8B F8                     MOV EDI,EAX
006BFC18  C7 43 18 FF FF FF 7F      MOV dword ptr [EBX + 0x18],0x7fffffff
006BFC1F  F3 A5                     MOVSD.REP ES:EDI,ESI
006BFC21  66 A5                     MOVSW ES:EDI,ESI
006BFC23  66 83 38 02               CMP word ptr [EAX],0x2
006BFC27  C7 45 D0 24 00 00 00      MOV dword ptr [EBP + -0x30],0x24
006BFC2E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006BFC31  75 52                     JNZ 0x006bfc85
006BFC33  66 C7 00 01 00            MOV word ptr [EAX],0x1
006BFC38  33 C0                     XOR EAX,EAX
006BFC3A  66 8B 83 8C 00 00 00      MOV AX,word ptr [EBX + 0x8c]
006BFC41  8B 8B 8E 00 00 00         MOV ECX,dword ptr [EBX + 0x8e]
006BFC47  C1 E0 04                  SHL EAX,0x4
006BFC4A  99                        CDQ
006BFC4B  83 E2 07                  AND EDX,0x7
006BFC4E  66 C7 83 98 00 00 00 10 00  MOV word ptr [EBX + 0x98],0x10
006BFC57  03 C2                     ADD EAX,EDX
006BFC59  8B 53 66                  MOV EDX,dword ptr [EBX + 0x66]
006BFC5C  C1 F8 03                  SAR EAX,0x3
006BFC5F  66 89 83 96 00 00 00      MOV word ptr [EBX + 0x96],AX
006BFC66  25 FF FF 00 00            AND EAX,0xffff
006BFC6B  0F AF C8                  IMUL ECX,EAX
006BFC6E  89 8B 92 00 00 00         MOV dword ptr [EBX + 0x92],ECX
006BFC74  66 C7 83 9A 00 00 00 00 00  MOV word ptr [EBX + 0x9a],0x0
006BFC7D  89 93 C0 00 00 00         MOV dword ptr [EBX + 0xc0],EDX
006BFC83  EB 16                     JMP 0x006bfc9b
LAB_006bfc85:
006BFC85  8B 43 5E                  MOV EAX,dword ptr [EBX + 0x5e]
006BFC88  33 C9                     XOR ECX,ECX
006BFC8A  66 8B 8B 96 00 00 00      MOV CX,word ptr [EBX + 0x96]
006BFC91  33 D2                     XOR EDX,EDX
006BFC93  F7 F1                     DIV ECX
006BFC95  89 83 C0 00 00 00         MOV dword ptr [EBX + 0xc0],EAX
LAB_006bfc9b:
006BFC9B  33 C0                     XOR EAX,EAX
006BFC9D  8B 8B 92 00 00 00         MOV ECX,dword ptr [EBX + 0x92]
006BFCA3  66 8B 83 96 00 00 00      MOV AX,word ptr [EBX + 0x96]
006BFCAA  0F AF 83 C0 00 00 00      IMUL EAX,dword ptr [EBX + 0xc0]
006BFCB1  D1 E1                     SHL ECX,0x1
006BFCB3  3B C8                     CMP ECX,EAX
006BFCB5  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006BFCB8  76 0C                     JBE 0x006bfcc6
006BFCBA  8B C8                     MOV ECX,EAX
006BFCBC  BA E2 00 00 00            MOV EDX,0xe2
006BFCC1  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006BFCC4  EB 05                     JMP 0x006bfccb
LAB_006bfcc6:
006BFCC6  BA E0 00 01 00            MOV EDX,0x100e0
LAB_006bfccb:
006BFCCB  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006BFCCE  89 4B 14                  MOV dword ptr [EBX + 0x14],ECX
006BFCD1  F6 C4 10                  TEST AH,0x10
006BFCD4  74 40                     JZ 0x006bfd16
006BFCD6  8B 0D 10 DE 7E 00         MOV ECX,dword ptr [0x007ede10]
006BFCDC  85 C9                     TEST ECX,ECX
006BFCDE  7E 36                     JLE 0x006bfd16
006BFCE0  A1 38 EA 79 00            MOV EAX,[0x0079ea38]
006BFCE5  81 CA 10 00 02 00         OR EDX,0x20010
006BFCEB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006BFCEE  A1 3C EA 79 00            MOV EAX,[0x0079ea3c]
006BFCF3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006BFCF6  A1 40 EA 79 00            MOV EAX,[0x0079ea40]
006BFCFB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006BFCFE  A1 44 EA 79 00            MOV EAX,[0x0079ea44]
006BFD03  83 F9 01                  CMP ECX,0x1
006BFD06  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006BFD09  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006BFD0C  75 14                     JNZ 0x006bfd22
006BFD0E  83 CA 08                  OR EDX,0x8
006BFD11  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006BFD14  EB 0C                     JMP 0x006bfd22
LAB_006bfd16:
006BFD16  83 CA 08                  OR EDX,0x8
006BFD19  80 E4 EF                  AND AH,0xef
006BFD1C  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006BFD1F  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
LAB_006bfd22:
006BFD22  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006BFD27  8D 7B 0C                  LEA EDI,[EBX + 0xc]
006BFD2A  6A 00                     PUSH 0x0
006BFD2C  8D 55 D0                  LEA EDX,[EBP + -0x30]
006BFD2F  8B 08                     MOV ECX,dword ptr [EAX]
006BFD31  57                        PUSH EDI
006BFD32  52                        PUSH EDX
006BFD33  50                        PUSH EAX
006BFD34  FF 51 0C                  CALL dword ptr [ECX + 0xc]
006BFD37  85 C0                     TEST EAX,EAX
006BFD39  0F 8C 27 01 00 00         JL 0x006bfe66
006BFD3F  F6 45 D4 02               TEST byte ptr [EBP + -0x2c],0x2
006BFD43  74 09                     JZ 0x006bfd4e
006BFD45  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006BFD48  80 CC 40                  OR AH,0x40
006BFD4B  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
LAB_006bfd4e:
006BFD4E  8D 55 F8                  LEA EDX,[EBP + -0x8]
006BFD51  6A 00                     PUSH 0x0
006BFD53  52                        PUSH EDX
006BFD54  8D 55 F4                  LEA EDX,[EBP + -0xc]
006BFD57  8B 07                     MOV EAX,dword ptr [EDI]
006BFD59  52                        PUSH EDX
006BFD5A  8D 55 08                  LEA EDX,[EBP + 0x8]
006BFD5D  8B 08                     MOV ECX,dword ptr [EAX]
006BFD5F  52                        PUSH EDX
006BFD60  8D 55 FC                  LEA EDX,[EBP + -0x4]
006BFD63  52                        PUSH EDX
006BFD64  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006BFD67  52                        PUSH EDX
006BFD68  6A 00                     PUSH 0x0
006BFD6A  50                        PUSH EAX
006BFD6B  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
006BFD6E  85 C0                     TEST EAX,EAX
006BFD70  0F 85 F0 00 00 00         JNZ 0x006bfe66
006BFD76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BFD79  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006BFD7C  50                        PUSH EAX
006BFD7D  53                        PUSH EBX
006BFD7E  51                        PUSH ECX
006BFD7F  E8 EC 00 00 00            CALL 0x006bfe70
006BFD84  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006BFD87  8B 07                     MOV EAX,dword ptr [EDI]
006BFD89  51                        PUSH ECX
006BFD8A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006BFD8D  8B 10                     MOV EDX,dword ptr [EAX]
006BFD8F  51                        PUSH ECX
006BFD90  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BFD93  51                        PUSH ECX
006BFD94  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006BFD97  51                        PUSH ECX
006BFD98  50                        PUSH EAX
006BFD99  FF 52 4C                  CALL dword ptr [EDX + 0x4c]
006BFD9C  85 C0                     TEST EAX,EAX
006BFD9E  0F 85 C2 00 00 00         JNZ 0x006bfe66
006BFDA4  8B 07                     MOV EAX,dword ptr [EDI]
006BFDA6  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
006BFDA9  51                        PUSH ECX
006BFDAA  50                        PUSH EAX
006BFDAB  8B 10                     MOV EDX,dword ptr [EAX]
006BFDAD  FF 52 3C                  CALL dword ptr [EDX + 0x3c]
006BFDB0  85 C0                     TEST EAX,EAX
006BFDB2  0F 85 AE 00 00 00         JNZ 0x006bfe66
006BFDB8  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006BFDBB  F6 C4 10                  TEST AH,0x10
006BFDBE  8B 07                     MOV EAX,dword ptr [EDI]
006BFDC0  74 65                     JZ 0x006bfe27
006BFDC2  8B 10                     MOV EDX,dword ptr [EAX]
006BFDC4  8D 73 10                  LEA ESI,[EBX + 0x10]
006BFDC7  56                        PUSH ESI
006BFDC8  68 A8 EA 79 00            PUSH 0x79eaa8
006BFDCD  50                        PUSH EAX
006BFDCE  FF 12                     CALL dword ptr [EDX]
006BFDD0  85 C0                     TEST EAX,EAX
006BFDD2  0F 85 8E 00 00 00         JNZ 0x006bfe66
006BFDD8  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
006BFDDB  8B 06                     MOV EAX,dword ptr [ESI]
006BFDDD  6A 01                     PUSH 0x1
006BFDDF  52                        PUSH EDX
006BFDE0  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
006BFDE3  8B 08                     MOV ECX,dword ptr [EAX]
006BFDE5  52                        PUSH EDX
006BFDE6  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
006BFDE9  52                        PUSH EDX
006BFDEA  50                        PUSH EAX
006BFDEB  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
006BFDEE  85 C0                     TEST EAX,EAX
006BFDF0  75 74                     JNZ 0x006bfe66
006BFDF2  8B 06                     MOV EAX,dword ptr [ESI]
006BFDF4  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
006BFDF7  6A 01                     PUSH 0x1
006BFDF9  52                        PUSH EDX
006BFDFA  8B 08                     MOV ECX,dword ptr [EAX]
006BFDFC  50                        PUSH EAX
006BFDFD  FF 51 44                  CALL dword ptr [ECX + 0x44]
006BFE00  85 C0                     TEST EAX,EAX
006BFE02  75 62                     JNZ 0x006bfe66
006BFE04  8B 36                     MOV ESI,dword ptr [ESI]
006BFE06  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
006BFE09  6A 01                     PUSH 0x1
006BFE0B  51                        PUSH ECX
006BFE0C  8B 06                     MOV EAX,dword ptr [ESI]
006BFE0E  56                        PUSH ESI
006BFE0F  FF 50 40                  CALL dword ptr [EAX + 0x40]
006BFE12  85 C0                     TEST EAX,EAX
006BFE14  75 50                     JNZ 0x006bfe66
006BFE16  A1 BC 68 85 00            MOV EAX,[0x008568bc]
006BFE1B  50                        PUSH EAX
006BFE1C  8B 10                     MOV EDX,dword ptr [EAX]
006BFE1E  FF 52 44                  CALL dword ptr [EDX + 0x44]
006BFE21  85 C0                     TEST EAX,EAX
006BFE23  75 41                     JNZ 0x006bfe66
006BFE25  EB 0E                     JMP 0x006bfe35
LAB_006bfe27:
006BFE27  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
006BFE2A  8B 08                     MOV ECX,dword ptr [EAX]
006BFE2C  52                        PUSH EDX
006BFE2D  50                        PUSH EAX
006BFE2E  FF 51 40                  CALL dword ptr [ECX + 0x40]
006BFE31  85 C0                     TEST EAX,EAX
006BFE33  75 31                     JNZ 0x006bfe66
LAB_006bfe35:
006BFE35  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006BFE3B  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006BFE3E  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
006BFE41  8B C1                     MOV EAX,ECX
006BFE43  F7 D0                     NOT EAX
006BFE45  C1 E8 0E                  SHR EAX,0xe
006BFE48  83 E0 01                  AND EAX,0x1
006BFE4B  F6 C1 01                  TEST CL,0x1
006BFE4E  74 02                     JZ 0x006bfe52
006BFE50  0C 01                     OR AL,0x1
LAB_006bfe52:
006BFE52  8B 3F                     MOV EDI,dword ptr [EDI]
006BFE54  50                        PUSH EAX
006BFE55  6A 00                     PUSH 0x0
006BFE57  6A 00                     PUSH 0x0
006BFE59  8B 0F                     MOV ECX,dword ptr [EDI]
006BFE5B  57                        PUSH EDI
006BFE5C  FF 51 30                  CALL dword ptr [ECX + 0x30]
006BFE5F  85 C0                     TEST EAX,EAX
006BFE61  75 03                     JNZ 0x006bfe66
006BFE63  83 0B 01                  OR dword ptr [EBX],0x1
LAB_006bfe66:
006BFE66  5F                        POP EDI
006BFE67  5E                        POP ESI
006BFE68  5B                        POP EBX
006BFE69  8B E5                     MOV ESP,EBP
006BFE6B  5D                        POP EBP
006BFE6C  C2 04 00                  RET 0x4
