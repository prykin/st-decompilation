FUN_006dbd20:
006DBD20  55                        PUSH EBP
006DBD21  8B EC                     MOV EBP,ESP
006DBD23  83 EC 3C                  SUB ESP,0x3c
006DBD26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DBD29  53                        PUSH EBX
006DBD2A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006DBD2D  56                        PUSH ESI
006DBD2E  8B F1                     MOV ESI,ECX
006DBD30  57                        PUSH EDI
006DBD31  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DBD34  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006DBD37  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006DBD3A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006DBD3D  89 5E 20                  MOV dword ptr [ESI + 0x20],EBX
006DBD40  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
006DBD43  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
006DBD46  0F AF F8                  IMUL EDI,EAX
006DBD49  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
006DBD4C  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006DBD4F  8D 57 18                  LEA EDX,[EDI + 0x18]
006DBD52  52                        PUSH EDX
006DBD53  50                        PUSH EAX
006DBD54  E8 F7 11 FD FF            CALL 0x006acf50
006DBD59  8D 48 FF                  LEA ECX,[EAX + -0x1]
006DBD5C  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006DBD5F  33 CB                     XOR ECX,EBX
006DBD61  83 C0 07                  ADD EAX,0x7
006DBD64  83 E1 07                  AND ECX,0x7
006DBD67  33 DB                     XOR EBX,EBX
006DBD69  33 C8                     XOR ECX,EAX
006DBD6B  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006DBD6E  8B 86 24 01 00 00         MOV EAX,dword ptr [ESI + 0x124]
006DBD74  83 F8 01                  CMP EAX,0x1
006DBD77  75 12                     JNZ 0x006dbd8b
006DBD79  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006DBD7C  83 C7 10                  ADD EDI,0x10
006DBD7F  57                        PUSH EDI
006DBD80  52                        PUSH EDX
006DBD81  E8 CA 11 FD FF            CALL 0x006acf50
006DBD86  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006DBD89  EB 3D                     JMP 0x006dbdc8
LAB_006dbd8b:
006DBD8B  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006DBD8E  8D 44 3F 10               LEA EAX,[EDI + EDI*0x1 + 0x10]
006DBD92  50                        PUSH EAX
006DBD93  51                        PUSH ECX
006DBD94  E8 B7 11 FD FF            CALL 0x006acf50
006DBD99  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006DBD9C  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
006DBDA2  3B C3                     CMP EAX,EBX
006DBDA4  74 22                     JZ 0x006dbdc8
006DBDA6  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
006DBDAC  3B C3                     CMP EAX,EBX
006DBDAE  7E 18                     JLE 0x006dbdc8
006DBDB0  3B 46 2C                  CMP EAX,dword ptr [ESI + 0x2c]
006DBDB3  7D 13                     JGE 0x006dbdc8
006DBDB5  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006DBDB8  0F AF D0                  IMUL EDX,EAX
006DBDBB  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006DBDBE  52                        PUSH EDX
006DBDBF  50                        PUSH EAX
006DBDC0  E8 8B 11 FD FF            CALL 0x006acf50
006DBDC5  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
LAB_006dbdc8:
006DBDC8  DD 45 24                  FLD double ptr [EBP + 0x24]
006DBDCB  DC 65 1C                  FSUB double ptr [EBP + 0x1c]
006DBDCE  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006DBDD1  B8 64 00 00 00            MOV EAX,0x64
006DBDD6  83 C1 08                  ADD ECX,0x8
006DBDD9  89 86 F0 02 00 00         MOV dword ptr [ESI + 0x2f0],EAX
006DBDDF  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
006DBDE2  89 86 F4 02 00 00         MOV dword ptr [ESI + 0x2f4],EAX
006DBDE8  DD 55 F0                  FST double ptr [EBP + -0x10]
006DBDEB  DA 75 14                  FIDIV dword ptr [EBP + 0x14]
006DBDEE  DD 96 F8 00 00 00         FST double ptr [ESI + 0xf8]
006DBDF4  DD 45 34                  FLD double ptr [EBP + 0x34]
006DBDF7  DC 65 2C                  FSUB double ptr [EBP + 0x2c]
006DBDFA  DD 55 F8                  FST double ptr [EBP + -0x8]
006DBDFD  DA 75 18                  FIDIV dword ptr [EBP + 0x18]
006DBE00  DD 96 00 01 00 00         FST double ptr [ESI + 0x100]
006DBE06  D9 C1                     FLD ST1
006DBE08  DD 9E E8 00 00 00         FSTP double ptr [ESI + 0xe8]
006DBE0E  DD 9E F0 00 00 00         FSTP double ptr [ESI + 0xf0]
006DBE14  DD 86 1C 01 00 00         FLD double ptr [ESI + 0x11c]
006DBE1A  DC A6 14 01 00 00         FSUB double ptr [ESI + 0x114]
006DBE20  DC 3D 78 DF 79 00         FDIVR double ptr [0x0079df78]
006DBE26  DD 96 0C 01 00 00         FST double ptr [ESI + 0x10c]
006DBE2C  D8 C9                     FMUL ST1
006DBE2E  DC 0D 80 05 79 00         FMUL double ptr [0x00790580]
006DBE34  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006DBE3A  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006DBE40  E8 43 24 05 00            CALL 0x0072e288
006DBE45  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006DBE48  89 86 E4 02 00 00         MOV dword ptr [ESI + 0x2e4],EAX
006DBE4E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DBE51  52                        PUSH EDX
006DBE52  50                        PUSH EAX
006DBE53  53                        PUSH EBX
006DBE54  53                        PUSH EBX
006DBE55  8B CE                     MOV ECX,ESI
006DBE57  DD D8                     FSTP ST0
006DBE59  E8 02 18 00 00            CALL 0x006dd660
006DBE5E  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006DBE61  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006DBE64  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006DBE67  51                        PUSH ECX
006DBE68  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006DBE6B  52                        PUSH EDX
006DBE6C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006DBE6F  50                        PUSH EAX
006DBE70  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006DBE73  51                        PUSH ECX
006DBE74  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006DBE77  52                        PUSH EDX
006DBE78  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006DBE7B  50                        PUSH EAX
006DBE7C  51                        PUSH ECX
006DBE7D  52                        PUSH EDX
006DBE7E  8B CE                     MOV ECX,ESI
006DBE80  E8 5B 18 00 00            CALL 0x006dd6e0
006DBE85  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006DBE8B  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
006DBE91  50                        PUSH EAX
006DBE92  51                        PUSH ECX
006DBE93  8B 8E 24 01 00 00         MOV ECX,dword ptr [ESI + 0x124]
006DBE99  8B 96 9C 00 00 00         MOV EDX,dword ptr [ESI + 0x9c]
006DBE9F  8B 86 98 00 00 00         MOV EAX,dword ptr [ESI + 0x98]
006DBEA5  49                        DEC ECX
006DBEA6  F7 D9                     NEG ECX
006DBEA8  1B C9                     SBB ECX,ECX
006DBEAA  52                        PUSH EDX
006DBEAB  83 E1 FC                  AND ECX,0xfffffffc
006DBEAE  50                        PUSH EAX
006DBEAF  83 C1 04                  ADD ECX,0x4
006DBEB2  51                        PUSH ECX
006DBEB3  8B CE                     MOV ECX,ESI
006DBEB5  E8 56 17 00 00            CALL 0x006dd610
006DBEBA  8B 86 24 01 00 00         MOV EAX,dword ptr [ESI + 0x124]
006DBEC0  3B C3                     CMP EAX,EBX
006DBEC2  74 05                     JZ 0x006dbec9
006DBEC4  83 F8 0A                  CMP EAX,0xa
006DBEC7  75 55                     JNZ 0x006dbf1e
LAB_006dbec9:
006DBEC9  6A 01                     PUSH 0x1
006DBECB  53                        PUSH EBX
006DBECC  53                        PUSH EBX
006DBECD  53                        PUSH EBX
006DBECE  53                        PUSH EBX
006DBECF  53                        PUSH EBX
006DBED0  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006DBED3  53                        PUSH EBX
006DBED4  8D 45 C4                  LEA EAX,[EBP + -0x3c]
006DBED7  52                        PUSH EDX
006DBED8  50                        PUSH EAX
006DBED9  8B CE                     MOV ECX,ESI
006DBEDB  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
006DBEE2  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
006DBEE9  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006DBEF0  E8 DB 66 00 00            CALL 0x006e25d0
006DBEF5  6A 01                     PUSH 0x1
006DBEF7  68 00 00 F0 3F            PUSH 0x3ff00000
006DBEFC  53                        PUSH EBX
006DBEFD  53                        PUSH EBX
006DBEFE  53                        PUSH EBX
006DBEFF  53                        PUSH EBX
006DBF00  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006DBF03  53                        PUSH EBX
006DBF04  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006DBF07  51                        PUSH ECX
006DBF08  52                        PUSH EDX
006DBF09  8B CE                     MOV ECX,ESI
006DBF0B  E8 C0 66 00 00            CALL 0x006e25d0
006DBF10  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DBF13  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006DBF16  2B C1                     SUB EAX,ECX
006DBF18  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
LAB_006dbf1e:
006DBF1E  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DBF24  C7 86 D8 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2d8],0x1
006DBF2E  3B C3                     CMP EAX,EBX
006DBF30  89 9E DC 02 00 00         MOV dword ptr [ESI + 0x2dc],EBX
006DBF36  89 9E 40 01 00 00         MOV dword ptr [ESI + 0x140],EBX
006DBF3C  89 9E 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EBX
006DBF42  0F 84 FA 00 00 00         JZ 0x006dc042
006DBF48  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DBF4E  89 88 80 02 00 00         MOV dword ptr [EAX + 0x280],ECX
006DBF54  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DBF5A  DC 0D 68 DF 79 00         FMUL double ptr [0x0079df68]
006DBF60  DD 45 F8                  FLD double ptr [EBP + -0x8]
006DBF63  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DBF69  DE C1                     FADDP
006DBF6B  DB 86 80 03 00 00         FILD dword ptr [ESI + 0x380]
006DBF71  DC BE C8 00 00 00         FDIVR double ptr [ESI + 0xc8]
006DBF77  DD 96 68 03 00 00         FST double ptr [ESI + 0x368]
006DBF7D  DD 45 F0                  FLD double ptr [EBP + -0x10]
006DBF80  D8 E2                     FSUB ST0,ST2
006DBF82  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DBF88  D9 CA                     FXCH ST2
006DBF8A  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DBF90  DE C2                     FADDP ST2,ST0
006DBF92  D9 C9                     FXCH
006DBF94  D8 F1                     FDIV ST0,ST1
006DBF96  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
006DBF9C  E8 E7 22 05 00            CALL 0x0072e288
006DBFA1  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006DBFA4  89 86 70 03 00 00         MOV dword ptr [ESI + 0x370],EAX
006DBFAA  DB 45 18                  FILD dword ptr [EBP + 0x18]
006DBFAD  D8 C9                     FMUL ST1
006DBFAF  D9 C9                     FXCH
006DBFB1  DD D8                     FSTP ST0
006DBFB3  DD 96 60 03 00 00         FST double ptr [ESI + 0x360]
006DBFB9  D9 C0                     FLD ST0
006DBFBB  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006DBFC1  DD 5D 34                  FSTP double ptr [EBP + 0x34]
006DBFC4  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006DBFC7  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006DBFCA  DC 0D 58 DF 79 00         FMUL double ptr [0x0079df58]
006DBFD0  51                        PUSH ECX
006DBFD1  52                        PUSH EDX
006DBFD2  DD 5D 2C                  FSTP double ptr [EBP + 0x2c]
006DBFD5  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006DBFD8  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006DBFDB  57                        PUSH EDI
006DBFDC  53                        PUSH EBX
006DBFDD  51                        PUSH ECX
006DBFDE  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DBFE4  52                        PUSH EDX
006DBFE5  57                        PUSH EDI
006DBFE6  53                        PUSH EBX
006DBFE7  50                        PUSH EAX
006DBFE8  50                        PUSH EAX
006DBFE9  6A 00                     PUSH 0x0
006DBFEB  6A 00                     PUSH 0x0
006DBFED  6A 00                     PUSH 0x0
006DBFEF  E8 2C FD FF FF            CALL 0x006dbd20
006DBFF4  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DBFFA  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006DBFFD  89 96 8C 03 00 00         MOV dword ptr [ESI + 0x38c],EDX
006DC003  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006DC006  89 8E 90 03 00 00         MOV dword ptr [ESI + 0x390],ECX
006DC00C  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006DC00F  B9 D0 8A FF FF            MOV ECX,0xffff8ad0
006DC014  89 96 7C 03 00 00         MOV dword ptr [ESI + 0x37c],EDX
006DC01A  89 8E 74 03 00 00         MOV dword ptr [ESI + 0x374],ECX
006DC020  89 8E 78 03 00 00         MOV dword ptr [ESI + 0x378],ECX
006DC026  8B 8E 70 03 00 00         MOV ECX,dword ptr [ESI + 0x370]
006DC02C  89 88 70 03 00 00         MOV dword ptr [EAX + 0x370],ECX
006DC032  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006DC038  C7 82 34 01 00 00 01 00 00 00  MOV dword ptr [EDX + 0x134],0x1
LAB_006dc042:
006DC042  5F                        POP EDI
006DC043  5E                        POP ESI
006DC044  5B                        POP EBX
006DC045  8B E5                     MOV ESP,EBP
006DC047  5D                        POP EBP
006DC048  C2 34 00                  RET 0x34
