FUN_006bea40:
006BEA40  55                        PUSH EBP
006BEA41  8B EC                     MOV EBP,ESP
006BEA43  6A FF                     PUSH -0x1
006BEA45  68 68 D9 79 00            PUSH 0x79d968
006BEA4A  68 64 D9 72 00            PUSH 0x72d964
006BEA4F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006BEA55  50                        PUSH EAX
006BEA56  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006BEA5D  81 EC 94 00 00 00         SUB ESP,0x94
006BEA63  53                        PUSH EBX
006BEA64  56                        PUSH ESI
006BEA65  57                        PUSH EDI
006BEA66  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BEA69  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BEA6C  8B 3E                     MOV EDI,dword ptr [ESI]
006BEA6E  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
006BEA71  33 DB                     XOR EBX,EBX
006BEA73  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006BEA76  39 1D E8 4F 85 00         CMP dword ptr [0x00854fe8],EBX
006BEA7C  74 48                     JZ 0x006beac6
006BEA7E  8D 45 A4                  LEA EAX,[EBP + -0x5c]
006BEA81  50                        PUSH EAX
006BEA82  8B 4F 44                  MOV ECX,dword ptr [EDI + 0x44]
006BEA85  51                        PUSH ECX
006BEA86  57                        PUSH EDI
006BEA87  E8 A4 5B 00 00            CALL 0x006c4630
006BEA8C  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
006BEA8F  52                        PUSH EDX
006BEA90  A1 3C 4F 85 00            MOV EAX,[0x00854f3c]
006BEA95  50                        PUSH EAX
006BEA96  8B 0D 38 4F 85 00         MOV ECX,dword ptr [0x00854f38]
006BEA9C  51                        PUSH ECX
006BEA9D  8B 15 34 4F 85 00         MOV EDX,dword ptr [0x00854f34]
006BEAA3  52                        PUSH EDX
006BEAA4  A1 30 4F 85 00            MOV EAX,[0x00854f30]
006BEAA9  50                        PUSH EAX
006BEAAA  57                        PUSH EDI
006BEAAB  E8 D0 5D 00 00            CALL 0x006c4880
006BEAB0  A3 74 4F 85 00            MOV [0x00854f74],EAX
006BEAB5  8D 4D A4                  LEA ECX,[EBP + -0x5c]
006BEAB8  51                        PUSH ECX
006BEAB9  57                        PUSH EDI
006BEABA  E8 21 5A 00 00            CALL 0x006c44e0
006BEABF  33 C0                     XOR EAX,EAX
006BEAC1  E9 6E 0B 00 00            JMP 0x006bf634
LAB_006beac6:
006BEAC6  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006BEAC9  A9 00 00 00 02            TEST EAX,0x2000000
006BEACE  0F 84 B4 00 00 00         JZ 0x006beb88
006BEAD4  A9 00 00 00 01            TEST EAX,0x1000000
006BEAD9  74 4B                     JZ 0x006beb26
LAB_006beadb:
006BEADB  8B 47 48                  MOV EAX,dword ptr [EDI + 0x48]
006BEADE  8B 10                     MOV EDX,dword ptr [EAX]
006BEAE0  6A 00                     PUSH 0x0
006BEAE2  68 00 00 00 01            PUSH 0x1000000
006BEAE7  6A 00                     PUSH 0x0
006BEAE9  8B 4F 44                  MOV ECX,dword ptr [EDI + 0x44]
006BEAEC  51                        PUSH ECX
006BEAED  6A 00                     PUSH 0x0
006BEAEF  50                        PUSH EAX
006BEAF0  FF 52 14                  CALL dword ptr [EDX + 0x14]
006BEAF3  85 C0                     TEST EAX,EAX
006BEAF5  74 2F                     JZ 0x006beb26
006BEAF7  3D C2 01 76 88            CMP EAX,0x887601c2
006BEAFC  75 08                     JNZ 0x006beb06
006BEAFE  57                        PUSH EDI
006BEAFF  E8 3C 01 01 00            CALL 0x006cec40
006BEB04  EB 1A                     JMP 0x006beb20
LAB_006beb06:
006BEB06  3D A0 00 76 88            CMP EAX,0x887600a0
006BEB0B  74 07                     JZ 0x006beb14
006BEB0D  3D AE 01 76 88            CMP EAX,0x887601ae
006BEB12  75 12                     JNZ 0x006beb26
LAB_006beb14:
006BEB14  85 DB                     TEST EBX,EBX
006BEB16  75 0E                     JNZ 0x006beb26
006BEB18  6A 02                     PUSH 0x2
006BEB1A  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006beb20:
006BEB20  43                        INC EBX
006BEB21  83 FB 02                  CMP EBX,0x2
006BEB24  7C B5                     JL 0x006beadb
LAB_006beb26:
006BEB26  33 F6                     XOR ESI,ESI
LAB_006beb28:
006BEB28  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006BEB2B  8B 10                     MOV EDX,dword ptr [EAX]
006BEB2D  6A 01                     PUSH 0x1
006BEB2F  6A 00                     PUSH 0x0
006BEB31  50                        PUSH EAX
006BEB32  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006BEB35  8B D8                     MOV EBX,EAX
006BEB37  85 DB                     TEST EBX,EBX
006BEB39  74 32                     JZ 0x006beb6d
006BEB3B  81 FB C2 01 76 88         CMP EBX,0x887601c2
006BEB41  75 08                     JNZ 0x006beb4b
006BEB43  57                        PUSH EDI
006BEB44  E8 F7 00 01 00            CALL 0x006cec40
006BEB49  EB 1C                     JMP 0x006beb67
LAB_006beb4b:
006BEB4B  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BEB51  74 08                     JZ 0x006beb5b
006BEB53  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BEB59  75 12                     JNZ 0x006beb6d
LAB_006beb5b:
006BEB5B  85 F6                     TEST ESI,ESI
006BEB5D  75 0E                     JNZ 0x006beb6d
006BEB5F  6A 02                     PUSH 0x2
006BEB61  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006beb67:
006BEB67  46                        INC ESI
006BEB68  83 FE 02                  CMP ESI,0x2
006BEB6B  7C BB                     JL 0x006beb28
LAB_006beb6d:
006BEB6D  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BEB73  74 0C                     JZ 0x006beb81
006BEB75  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BEB7B  0F 85 98 0A 00 00         JNZ 0x006bf619
LAB_006beb81:
006BEB81  33 DB                     XOR EBX,EBX
006BEB83  E9 91 0A 00 00            JMP 0x006bf619
LAB_006beb88:
006BEB88  8B 8E C0 01 00 00         MOV ECX,dword ptr [ESI + 0x1c0]
006BEB8E  8B 11                     MOV EDX,dword ptr [ECX]
006BEB90  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006BEB93  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006BEB96  3B 47 20                  CMP EAX,dword ptr [EDI + 0x20]
006BEB99  0F 84 29 08 00 00         JZ 0x006bf3c8
006BEB9F  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006BEBA2  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006BEBA5  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006BEBA8  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006BEBAB  8D 45 C8                  LEA EAX,[EBP + -0x38]
006BEBAE  50                        PUSH EAX
006BEBAF  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006BEBB2  51                        PUSH ECX
006BEBB3  FF 15 54 BE 85 00         CALL dword ptr [0x0085be54]
006BEBB9  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006BEBBC  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006BEBBF  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006BEBC2  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006BEBC5  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006BEBC8  03 D0                     ADD EDX,EAX
006BEBCA  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006BEBCD  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006BEBD0  03 C1                     ADD EAX,ECX
006BEBD2  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006BEBD5  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
LAB_006bebdc:
006BEBDC  8D 4D C8                  LEA ECX,[EBP + -0x38]
006BEBDF  51                        PUSH ECX
006BEBE0  8D 55 94                  LEA EDX,[EBP + -0x6c]
006BEBE3  52                        PUSH EDX
006BEBE4  8D 45 90                  LEA EAX,[EBP + -0x70]
006BEBE7  50                        PUSH EAX
006BEBE8  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
006BEBEB  51                        PUSH ECX
006BEBEC  E8 DF D2 FF FF            CALL 0x006bbed0
006BEBF1  8B D8                     MOV EBX,EAX
006BEBF3  85 DB                     TEST EBX,EBX
006BEBF5  74 3B                     JZ 0x006bec32
006BEBF7  81 FB C2 01 76 88         CMP EBX,0x887601c2
006BEBFD  75 08                     JNZ 0x006bec07
006BEBFF  57                        PUSH EDI
006BEC00  E8 3B 00 01 00            CALL 0x006cec40
006BEC05  EB 1F                     JMP 0x006bec26
LAB_006bec07:
006BEC07  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BEC0D  74 08                     JZ 0x006bec17
006BEC0F  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BEC15  75 1B                     JNZ 0x006bec32
LAB_006bec17:
006BEC17  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006BEC1A  85 C0                     TEST EAX,EAX
006BEC1C  75 14                     JNZ 0x006bec32
006BEC1E  6A 02                     PUSH 0x2
006BEC20  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bec26:
006BEC26  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006BEC29  40                        INC EAX
006BEC2A  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006BEC2D  83 F8 02                  CMP EAX,0x2
006BEC30  7C AA                     JL 0x006bebdc
LAB_006bec32:
006BEC32  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BEC38  0F 84 72 07 00 00         JZ 0x006bf3b0
006BEC3E  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BEC44  0F 84 66 07 00 00         JZ 0x006bf3b0
006BEC4A  85 DB                     TEST EBX,EBX
006BEC4C  0F 85 C7 09 00 00         JNZ 0x006bf619
006BEC52  33 F6                     XOR ESI,ESI
006BEC54  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
006BEC57  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006BEC5A  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
006BEC5D  8B 10                     MOV EDX,dword ptr [EAX]
006BEC5F  8D 4D A0                  LEA ECX,[EBP + -0x60]
006BEC62  51                        PUSH ECX
006BEC63  56                        PUSH ESI
006BEC64  8D 4D C8                  LEA ECX,[EBP + -0x38]
006BEC67  51                        PUSH ECX
006BEC68  50                        PUSH EAX
006BEC69  FF 52 0C                  CALL dword ptr [EDX + 0xc]
006BEC6C  3B C6                     CMP EAX,ESI
006BEC6E  75 7F                     JNZ 0x006becef
006BEC70  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006BEC73  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006BEC76  83 C0 03                  ADD EAX,0x3
006BEC79  24 FC                     AND AL,0xfc
006BEC7B  E8 C0 ED 06 00            CALL 0x0072da40
006BEC80  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BEC83  8B F4                     MOV ESI,ESP
006BEC85  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
006BEC88  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BEC8F  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
006BEC92  8B 10                     MOV EDX,dword ptr [EAX]
006BEC94  8D 4D A0                  LEA ECX,[EBP + -0x60]
006BEC97  51                        PUSH ECX
006BEC98  56                        PUSH ESI
006BEC99  8D 4D C8                  LEA ECX,[EBP + -0x38]
006BEC9C  51                        PUSH ECX
006BEC9D  50                        PUSH EAX
006BEC9E  FF 52 0C                  CALL dword ptr [EDX + 0xc]
006BECA1  8B D8                     MOV EBX,EAX
006BECA3  85 DB                     TEST EBX,EBX
006BECA5  75 48                     JNZ 0x006becef
006BECA7  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BECAA  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006BECAD  85 C0                     TEST EAX,EAX
006BECAF  0F 8E 74 01 00 00         JLE 0x006bee29
006BECB5  83 C6 20                  ADD ESI,0x20
006BECB8  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
006BECBB  83 F8 01                  CMP EAX,0x1
006BECBE  75 2F                     JNZ 0x006becef
006BECC0  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006BECC3  8B C6                     MOV EAX,ESI
006BECC5  3B 10                     CMP EDX,dword ptr [EAX]
006BECC7  75 26                     JNZ 0x006becef
006BECC9  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006BECCC  8B D6                     MOV EDX,ESI
006BECCE  3B 4A 08                  CMP ECX,dword ptr [EDX + 0x8]
006BECD1  75 1C                     JNZ 0x006becef
006BECD3  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006BECD6  8B CE                     MOV ECX,ESI
006BECD8  3B 41 04                  CMP EAX,dword ptr [ECX + 0x4]
006BECDB  75 12                     JNZ 0x006becef
006BECDD  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006BECE0  8B C6                     MOV EAX,ESI
006BECE2  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
006BECE5  75 08                     JNZ 0x006becef
006BECE7  33 C0                     XOR EAX,EAX
006BECE9  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006BECEC  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
LAB_006becef:
006BECEF  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006BECF2  85 C9                     TEST ECX,ECX
006BECF4  7E 1D                     JLE 0x006bed13
006BECF6  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006BECF9  8D 42 04                  LEA EAX,[EDX + 0x4]
006BECFC  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
006BECFF  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
LAB_006bed02:
006BED02  29 50 FC                  SUB dword ptr [EAX + -0x4],EDX
006BED05  29 50 04                  SUB dword ptr [EAX + 0x4],EDX
006BED08  29 18                     SUB dword ptr [EAX],EBX
006BED0A  29 58 08                  SUB dword ptr [EAX + 0x8],EBX
006BED0D  83 C0 10                  ADD EAX,0x10
006BED10  49                        DEC ECX
006BED11  75 EF                     JNZ 0x006bed02
LAB_006bed13:
006BED13  33 F6                     XOR ESI,ESI
LAB_006bed15:
006BED15  6A 00                     PUSH 0x0
006BED17  8D 85 70 FF FF FF         LEA EAX,[EBP + 0xffffff70]
006BED1D  50                        PUSH EAX
006BED1E  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
006BED24  51                        PUSH ECX
006BED25  8B 57 44                  MOV EDX,dword ptr [EDI + 0x44]
006BED28  52                        PUSH EDX
006BED29  E8 12 D1 FF FF            CALL 0x006bbe40
006BED2E  8B D8                     MOV EBX,EAX
006BED30  85 DB                     TEST EBX,EBX
006BED32  74 1C                     JZ 0x006bed50
006BED34  81 FB C2 01 76 88         CMP EBX,0x887601c2
006BED3A  75 0C                     JNZ 0x006bed48
006BED3C  57                        PUSH EDI
006BED3D  E8 FE FE 00 00            CALL 0x006cec40
006BED42  46                        INC ESI
006BED43  83 FE 02                  CMP ESI,0x2
006BED46  7C CD                     JL 0x006bed15
LAB_006bed48:
006BED48  85 DB                     TEST EBX,EBX
006BED4A  0F 85 4D 06 00 00         JNZ 0x006bf39d
LAB_006bed50:
006BED50  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006BED57  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006BED5A  33 C9                     XOR ECX,ECX
006BED5C  3B D1                     CMP EDX,ECX
006BED5E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BED61  0F 84 B4 03 00 00         JZ 0x006bf11b
006BED67  3B C1                     CMP EAX,ECX
006BED69  0F 84 F0 01 00 00         JZ 0x006bef5f
006BED6F  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
006BED75  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
006BED7B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BED7E  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
006BED81  89 B5 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ESI
006BED87  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
006BED8A  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
006BED90  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
006BED93  33 F6                     XOR ESI,ESI
006BED95  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
LAB_006bed98:
006BED98  3B 75 9C                  CMP ESI,dword ptr [EBP + -0x64]
006BED9B  0F 8D C2 03 00 00         JGE 0x006bf163
006BEDA1  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006BEDA4  51                        PUSH ECX
006BEDA5  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
006BEDAB  52                        PUSH EDX
006BEDAC  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
006BEDB2  50                        PUSH EAX
006BEDB3  E8 F8 10 01 00            CALL 0x006cfeb0
006BEDB8  83 C4 0C                  ADD ESP,0xc
006BEDBB  85 C0                     TEST EAX,EAX
006BEDBD  0F 84 8F 01 00 00         JZ 0x006bef52
006BEDC3  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006BEDC6  83 C0 F8                  ADD EAX,-0x8
006BEDC9  83 F8 18                  CMP EAX,0x18
006BEDCC  0F 87 80 01 00 00         JA 0x006bef52
006BEDD2  33 C9                     XOR ECX,ECX
006BEDD4  8A 88 64 F6 6B 00         MOV CL,byte ptr [EAX + 0x6bf664]
switchD_006bedda::switchD:
006BEDDA  FF 24 8D 50 F6 6B 00      JMP dword ptr [ECX*0x4 + 0x6bf650]
switchD_006bedda::caseD_8:
006BEDE1  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
006BEDE4  52                        PUSH EDX
006BEDE5  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
006BEDE8  50                        PUSH EAX
006BEDE9  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BEDEF  51                        PUSH ECX
006BEDF0  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006BEDF6  8B D0                     MOV EDX,EAX
006BEDF8  0F AF D1                  IMUL EDX,ECX
006BEDFB  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BEE01  03 D1                     ADD EDX,ECX
006BEE03  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
006BEE09  52                        PUSH EDX
006BEE0A  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BEE0D  52                        PUSH EDX
006BEE0E  0F AF C2                  IMUL EAX,EDX
006BEE11  03 C1                     ADD EAX,ECX
006BEE13  03 45 90                  ADD EAX,dword ptr [EBP + -0x70]
006BEE16  50                        PUSH EAX
006BEE17  E8 44 FC 00 00            CALL 0x006cea60
006BEE1C  46                        INC ESI
006BEE1D  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006BEE20  83 45 88 10               ADD dword ptr [EBP + -0x78],0x10
006BEE24  E9 6F FF FF FF            JMP 0x006bed98
LAB_006bee29:
006BEE29  8B 7F 34                  MOV EDI,dword ptr [EDI + 0x34]
006BEE2C  8B 0F                     MOV ECX,dword ptr [EDI]
006BEE2E  6A 00                     PUSH 0x0
006BEE30  57                        PUSH EDI
006BEE31  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006BEE37  E9 DD 07 00 00            JMP 0x006bf619
switchD_006bedda::caseD_10:
006BEE67  8B 87 C0 04 00 00         MOV EAX,dword ptr [EDI + 0x4c0]
006BEE6D  50                        PUSH EAX
006BEE6E  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006BEE71  51                        PUSH ECX
006BEE72  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006BEE75  52                        PUSH EDX
006BEE76  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BEE7C  51                        PUSH ECX
006BEE7D  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006BEE83  8B D0                     MOV EDX,EAX
006BEE85  0F AF D1                  IMUL EDX,ECX
006BEE88  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BEE8E  03 D1                     ADD EDX,ECX
006BEE90  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
006BEE96  52                        PUSH EDX
006BEE97  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BEE9A  52                        PUSH EDX
006BEE9B  0F AF C2                  IMUL EAX,EDX
006BEE9E  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006BEEA1  03 D0                     ADD EDX,EAX
006BEEA3  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
006BEEA6  50                        PUSH EAX
006BEEA7  E8 04 17 01 00            CALL 0x006d05b0
006BEEAC  46                        INC ESI
006BEEAD  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006BEEB0  83 45 88 10               ADD dword ptr [EBP + -0x78],0x10
006BEEB4  E9 DF FE FF FF            JMP 0x006bed98
switchD_006bedda::caseD_18:
006BEEB9  8B 8F C0 04 00 00         MOV ECX,dword ptr [EDI + 0x4c0]
006BEEBF  51                        PUSH ECX
006BEEC0  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
006BEEC3  52                        PUSH EDX
006BEEC4  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
006BEEC7  50                        PUSH EAX
006BEEC8  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BEECE  51                        PUSH ECX
006BEECF  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006BEED5  8B D0                     MOV EDX,EAX
006BEED7  0F AF D1                  IMUL EDX,ECX
006BEEDA  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BEEE0  03 D1                     ADD EDX,ECX
006BEEE2  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
006BEEE8  52                        PUSH EDX
006BEEE9  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BEEEC  52                        PUSH EDX
006BEEED  0F AF C2                  IMUL EAX,EDX
006BEEF0  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006BEEF3  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006BEEF6  03 D0                     ADD EDX,EAX
006BEEF8  03 CA                     ADD ECX,EDX
006BEEFA  51                        PUSH ECX
006BEEFB  E8 50 4B 01 00            CALL 0x006d3a50
006BEF00  46                        INC ESI
006BEF01  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006BEF04  83 45 88 10               ADD dword ptr [EBP + -0x78],0x10
006BEF08  E9 8B FE FF FF            JMP 0x006bed98
switchD_006bedda::caseD_20:
006BEF0D  8B 87 C0 04 00 00         MOV EAX,dword ptr [EDI + 0x4c0]
006BEF13  50                        PUSH EAX
006BEF14  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006BEF17  51                        PUSH ECX
006BEF18  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006BEF1B  52                        PUSH EDX
006BEF1C  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BEF22  51                        PUSH ECX
006BEF23  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006BEF29  8B D0                     MOV EDX,EAX
006BEF2B  0F AF D1                  IMUL EDX,ECX
006BEF2E  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BEF34  03 D1                     ADD EDX,ECX
006BEF36  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
006BEF3C  52                        PUSH EDX
006BEF3D  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BEF40  52                        PUSH EDX
006BEF41  0F AF C2                  IMUL EAX,EDX
006BEF44  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006BEF47  03 D0                     ADD EDX,EAX
006BEF49  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
006BEF4C  50                        PUSH EAX
006BEF4D  E8 9E 4A 01 00            CALL 0x006d39f0
switchD_006bedda::caseD_9:
006BEF52  46                        INC ESI
006BEF53  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006BEF56  83 45 88 10               ADD dword ptr [EBP + -0x78],0x10
006BEF5A  E9 39 FE FF FF            JMP 0x006bed98
LAB_006bef5f:
006BEF5F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BEF62  8B 80 C0 01 00 00         MOV EAX,dword ptr [EAX + 0x1c0]
006BEF68  83 C0 08                  ADD EAX,0x8
006BEF6B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006BEF6E  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
LAB_006bef71:
006BEF71  3B 4D E4                  CMP ECX,dword ptr [EBP + -0x1c]
006BEF74  0F 8D E9 01 00 00         JGE 0x006bf163
006BEF7A  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
006BEF7D  33 F6                     XOR ESI,ESI
006BEF7F  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
LAB_006bef82:
006BEF82  3B 75 9C                  CMP ESI,dword ptr [EBP + -0x64]
006BEF85  0F 8D 7D 01 00 00         JGE 0x006bf108
006BEF8B  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
006BEF8E  51                        PUSH ECX
006BEF8F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006BEF92  52                        PUSH EDX
006BEF93  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
006BEF99  50                        PUSH EAX
006BEF9A  E8 11 0F 01 00            CALL 0x006cfeb0
006BEF9F  83 C4 0C                  ADD ESP,0xc
006BEFA2  85 C0                     TEST EAX,EAX
006BEFA4  0F 84 51 01 00 00         JZ 0x006bf0fb
006BEFAA  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006BEFAD  83 C0 F8                  ADD EAX,-0x8
006BEFB0  83 F8 18                  CMP EAX,0x18
006BEFB3  0F 87 42 01 00 00         JA 0x006bf0fb
006BEFB9  33 C9                     XOR ECX,ECX
006BEFBB  8A 88 94 F6 6B 00         MOV CL,byte ptr [EAX + 0x6bf694]
switchD_006befc1::switchD:
006BEFC1  FF 24 8D 80 F6 6B 00      JMP dword ptr [ECX*0x4 + 0x6bf680]
switchD_006befc1::caseD_8:
006BEFC8  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
006BEFCB  52                        PUSH EDX
006BEFCC  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
006BEFCF  50                        PUSH EAX
006BEFD0  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BEFD6  51                        PUSH ECX
006BEFD7  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006BEFDD  8B D0                     MOV EDX,EAX
006BEFDF  0F AF D1                  IMUL EDX,ECX
006BEFE2  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BEFE8  03 D1                     ADD EDX,ECX
006BEFEA  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
006BEFF0  52                        PUSH EDX
006BEFF1  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BEFF4  52                        PUSH EDX
006BEFF5  0F AF C2                  IMUL EAX,EDX
006BEFF8  03 C1                     ADD EAX,ECX
006BEFFA  03 45 90                  ADD EAX,dword ptr [EBP + -0x70]
006BEFFD  50                        PUSH EAX
006BEFFE  E8 5D FA 00 00            CALL 0x006cea60
006BF003  46                        INC ESI
006BF004  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006BF007  83 45 88 10               ADD dword ptr [EBP + -0x78],0x10
006BF00B  E9 72 FF FF FF            JMP 0x006bef82
switchD_006befc1::caseD_10:
006BF010  8B 87 C0 04 00 00         MOV EAX,dword ptr [EDI + 0x4c0]
006BF016  50                        PUSH EAX
006BF017  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006BF01A  51                        PUSH ECX
006BF01B  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006BF01E  52                        PUSH EDX
006BF01F  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BF025  51                        PUSH ECX
006BF026  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006BF02C  8B D0                     MOV EDX,EAX
006BF02E  0F AF D1                  IMUL EDX,ECX
006BF031  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BF037  03 D1                     ADD EDX,ECX
006BF039  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
006BF03F  52                        PUSH EDX
006BF040  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BF043  52                        PUSH EDX
006BF044  0F AF C2                  IMUL EAX,EDX
006BF047  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006BF04A  03 D0                     ADD EDX,EAX
006BF04C  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
006BF04F  50                        PUSH EAX
006BF050  E8 5B 15 01 00            CALL 0x006d05b0
006BF055  46                        INC ESI
006BF056  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006BF059  83 45 88 10               ADD dword ptr [EBP + -0x78],0x10
006BF05D  E9 20 FF FF FF            JMP 0x006bef82
switchD_006befc1::caseD_18:
006BF062  8B 8F C0 04 00 00         MOV ECX,dword ptr [EDI + 0x4c0]
006BF068  51                        PUSH ECX
006BF069  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
006BF06C  52                        PUSH EDX
006BF06D  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
006BF070  50                        PUSH EAX
006BF071  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BF077  51                        PUSH ECX
006BF078  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006BF07E  8B D0                     MOV EDX,EAX
006BF080  0F AF D1                  IMUL EDX,ECX
006BF083  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BF089  03 D1                     ADD EDX,ECX
006BF08B  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
006BF091  52                        PUSH EDX
006BF092  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BF095  52                        PUSH EDX
006BF096  0F AF C2                  IMUL EAX,EDX
006BF099  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006BF09C  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006BF09F  03 D0                     ADD EDX,EAX
006BF0A1  03 CA                     ADD ECX,EDX
006BF0A3  51                        PUSH ECX
006BF0A4  E8 A7 49 01 00            CALL 0x006d3a50
006BF0A9  46                        INC ESI
006BF0AA  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006BF0AD  83 45 88 10               ADD dword ptr [EBP + -0x78],0x10
006BF0B1  E9 CC FE FF FF            JMP 0x006bef82
switchD_006befc1::caseD_20:
006BF0B6  8B 87 C0 04 00 00         MOV EAX,dword ptr [EDI + 0x4c0]
006BF0BC  50                        PUSH EAX
006BF0BD  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006BF0C0  51                        PUSH ECX
006BF0C1  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006BF0C4  52                        PUSH EDX
006BF0C5  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BF0CB  51                        PUSH ECX
006BF0CC  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006BF0D2  8B D0                     MOV EDX,EAX
006BF0D4  0F AF D1                  IMUL EDX,ECX
006BF0D7  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006BF0DD  03 D1                     ADD EDX,ECX
006BF0DF  03 95 74 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff74]
006BF0E5  52                        PUSH EDX
006BF0E6  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BF0E9  52                        PUSH EDX
006BF0EA  0F AF C2                  IMUL EAX,EDX
006BF0ED  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006BF0F0  03 D0                     ADD EDX,EAX
006BF0F2  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
006BF0F5  50                        PUSH EAX
006BF0F6  E8 F5 48 01 00            CALL 0x006d39f0
switchD_006befc1::caseD_9:
006BF0FB  46                        INC ESI
006BF0FC  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
006BF0FF  83 45 88 10               ADD dword ptr [EBP + -0x78],0x10
006BF103  E9 7A FE FF FF            JMP 0x006bef82
LAB_006bf108:
006BF108  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006BF10B  41                        INC ECX
006BF10C  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006BF10F  83 45 D8 10               ADD dword ptr [EBP + -0x28],0x10
006BF113  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006BF116  E9 56 FE FF FF            JMP 0x006bef71
LAB_006bf11b:
006BF11B  3B C1                     CMP EAX,ECX
006BF11D  0F 84 F7 00 00 00         JZ 0x006bf21a
006BF123  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006BF126  83 C0 F8                  ADD EAX,-0x8
006BF129  83 F8 18                  CMP EAX,0x18
006BF12C  77 35                     JA 0x006bf163
006BF12E  33 C9                     XOR ECX,ECX
006BF130  8A 88 C4 F6 6B 00         MOV CL,byte ptr [EAX + 0x6bf6c4]
switchD_006bf136::switchD:
006BF136  FF 24 8D B0 F6 6B 00      JMP dword ptr [ECX*0x4 + 0x6bf6b0]
switchD_006bf136::caseD_8:
006BF13D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BF140  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006BF143  52                        PUSH EDX
006BF144  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006BF147  50                        PUSH EAX
006BF148  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BF14E  51                        PUSH ECX
006BF14F  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006BF155  52                        PUSH EDX
006BF156  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006BF159  50                        PUSH EAX
006BF15A  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006BF15D  51                        PUSH ECX
006BF15E  E8 FD F8 00 00            CALL 0x006cea60
switchD_006bf136::caseD_9:
006BF163  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BF16A  E9 20 02 00 00            JMP 0x006bf38f
switchD_006bf136::caseD_10:
006BF16F  8B 97 C0 04 00 00         MOV EDX,dword ptr [EDI + 0x4c0]
006BF175  52                        PUSH EDX
006BF176  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BF179  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BF17C  51                        PUSH ECX
006BF17D  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BF180  52                        PUSH EDX
006BF181  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BF187  50                        PUSH EAX
006BF188  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
006BF18E  51                        PUSH ECX
006BF18F  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BF192  52                        PUSH EDX
006BF193  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006BF196  50                        PUSH EAX
006BF197  E8 14 14 01 00            CALL 0x006d05b0
006BF19C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BF1A3  E9 E7 01 00 00            JMP 0x006bf38f
switchD_006bf136::caseD_18:
006BF1A8  8B 8F C0 04 00 00         MOV ECX,dword ptr [EDI + 0x4c0]
006BF1AE  51                        PUSH ECX
006BF1AF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BF1B2  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006BF1B5  52                        PUSH EDX
006BF1B6  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006BF1B9  50                        PUSH EAX
006BF1BA  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006BF1C0  51                        PUSH ECX
006BF1C1  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006BF1C7  52                        PUSH EDX
006BF1C8  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006BF1CB  50                        PUSH EAX
006BF1CC  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006BF1CF  51                        PUSH ECX
006BF1D0  E8 7B 48 01 00            CALL 0x006d3a50
006BF1D5  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BF1DC  E9 AE 01 00 00            JMP 0x006bf38f
switchD_006bf136::caseD_20:
006BF1E1  8B 97 C0 04 00 00         MOV EDX,dword ptr [EDI + 0x4c0]
006BF1E7  52                        PUSH EDX
006BF1E8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BF1EB  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BF1EE  51                        PUSH ECX
006BF1EF  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BF1F2  52                        PUSH EDX
006BF1F3  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BF1F9  50                        PUSH EAX
006BF1FA  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
006BF200  51                        PUSH ECX
006BF201  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006BF204  52                        PUSH EDX
006BF205  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006BF208  50                        PUSH EAX
006BF209  E8 E2 47 01 00            CALL 0x006d39f0
006BF20E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BF215  E9 75 01 00 00            JMP 0x006bf38f
LAB_006bf21a:
006BF21A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BF21D  8B B1 C0 01 00 00         MOV ESI,dword ptr [ECX + 0x1c0]
006BF223  83 C6 08                  ADD ESI,0x8
006BF226  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006BF229  C7 45 B8 00 00 00 00      MOV dword ptr [EBP + -0x48],0x0
LAB_006bf230:
006BF230  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006BF233  3B 55 E4                  CMP EDX,dword ptr [EBP + -0x1c]
006BF236  0F 8D 27 FF FF FF         JGE 0x006bf163
006BF23C  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006BF23F  83 C0 F8                  ADD EAX,-0x8
006BF242  83 F8 18                  CMP EAX,0x18
006BF245  0F 87 1E 01 00 00         JA 0x006bf369
006BF24B  33 C9                     XOR ECX,ECX
006BF24D  8A 88 F4 F6 6B 00         MOV CL,byte ptr [EAX + 0x6bf6f4]
switchD_006bf253::switchD:
006BF253  FF 24 8D E0 F6 6B 00      JMP dword ptr [ECX*0x4 + 0x6bf6e0]
switchD_006bf253::caseD_8:
006BF25A  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006BF25D  8B 16                     MOV EDX,dword ptr [ESI]
006BF25F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BF262  50                        PUSH EAX
006BF263  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BF266  50                        PUSH EAX
006BF267  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BF26D  50                        PUSH EAX
006BF26E  0F AF C1                  IMUL EAX,ECX
006BF271  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006BF277  03 C2                     ADD EAX,EDX
006BF279  50                        PUSH EAX
006BF27A  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006BF27D  50                        PUSH EAX
006BF27E  0F AF C1                  IMUL EAX,ECX
006BF281  03 45 90                  ADD EAX,dword ptr [EBP + -0x70]
006BF284  03 C2                     ADD EAX,EDX
006BF286  50                        PUSH EAX
006BF287  E8 D4 F7 00 00            CALL 0x006cea60
006BF28C  FF 45 B8                  INC dword ptr [EBP + -0x48]
006BF28F  83 C6 10                  ADD ESI,0x10
006BF292  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006BF295  EB 99                     JMP 0x006bf230
switchD_006bf253::caseD_10:
006BF297  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006BF29A  8B 16                     MOV EDX,dword ptr [ESI]
006BF29C  8B 87 C0 04 00 00         MOV EAX,dword ptr [EDI + 0x4c0]
006BF2A2  50                        PUSH EAX
006BF2A3  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BF2A6  50                        PUSH EAX
006BF2A7  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BF2AA  50                        PUSH EAX
006BF2AB  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BF2B1  50                        PUSH EAX
006BF2B2  0F AF C1                  IMUL EAX,ECX
006BF2B5  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006BF2BB  03 C2                     ADD EAX,EDX
006BF2BD  50                        PUSH EAX
006BF2BE  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006BF2C1  50                        PUSH EAX
006BF2C2  0F AF C1                  IMUL EAX,ECX
006BF2C5  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006BF2C8  03 C8                     ADD ECX,EAX
006BF2CA  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006BF2CD  52                        PUSH EDX
006BF2CE  E8 DD 12 01 00            CALL 0x006d05b0
006BF2D3  FF 45 B8                  INC dword ptr [EBP + -0x48]
006BF2D6  83 C6 10                  ADD ESI,0x10
006BF2D9  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006BF2DC  E9 4F FF FF FF            JMP 0x006bf230
switchD_006bf253::caseD_18:
006BF2E1  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006BF2E4  8B 0E                     MOV ECX,dword ptr [ESI]
006BF2E6  8B 87 C0 04 00 00         MOV EAX,dword ptr [EDI + 0x4c0]
006BF2EC  50                        PUSH EAX
006BF2ED  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BF2F0  50                        PUSH EAX
006BF2F1  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BF2F4  50                        PUSH EAX
006BF2F5  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BF2FB  50                        PUSH EAX
006BF2FC  0F AF C2                  IMUL EAX,EDX
006BF2FF  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006BF305  03 C1                     ADD EAX,ECX
006BF307  50                        PUSH EAX
006BF308  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006BF30B  50                        PUSH EAX
006BF30C  0F AF C2                  IMUL EAX,EDX
006BF30F  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006BF312  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006BF315  03 D0                     ADD EDX,EAX
006BF317  03 CA                     ADD ECX,EDX
006BF319  51                        PUSH ECX
006BF31A  E8 31 47 01 00            CALL 0x006d3a50
006BF31F  FF 45 B8                  INC dword ptr [EBP + -0x48]
006BF322  83 C6 10                  ADD ESI,0x10
006BF325  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006BF328  E9 03 FF FF FF            JMP 0x006bf230
switchD_006bf253::caseD_20:
006BF32D  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006BF330  8B 16                     MOV EDX,dword ptr [ESI]
006BF332  8B 87 C0 04 00 00         MOV EAX,dword ptr [EDI + 0x4c0]
006BF338  50                        PUSH EAX
006BF339  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BF33C  50                        PUSH EAX
006BF33D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BF340  50                        PUSH EAX
006BF341  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
006BF347  50                        PUSH EAX
006BF348  0F AF C1                  IMUL EAX,ECX
006BF34B  03 85 74 FF FF FF         ADD EAX,dword ptr [EBP + 0xffffff74]
006BF351  03 C2                     ADD EAX,EDX
006BF353  50                        PUSH EAX
006BF354  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006BF357  50                        PUSH EAX
006BF358  0F AF C1                  IMUL EAX,ECX
006BF35B  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006BF35E  03 C8                     ADD ECX,EAX
006BF360  8D 14 91                  LEA EDX,[ECX + EDX*0x4]
006BF363  52                        PUSH EDX
006BF364  E8 87 46 01 00            CALL 0x006d39f0
switchD_006bf253::caseD_9:
006BF369  FF 45 B8                  INC dword ptr [EBP + -0x48]
006BF36C  83 C6 10                  ADD ESI,0x10
006BF36F  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006BF372  E9 B9 FE FF FF            JMP 0x006bf230
LAB_006bf38f:
006BF38F  8B 47 44                  MOV EAX,dword ptr [EDI + 0x44]
006BF392  8B 08                     MOV ECX,dword ptr [EAX]
006BF394  6A 00                     PUSH 0x0
006BF396  50                        PUSH EAX
006BF397  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
LAB_006bf39d:
006BF39D  8B 7F 34                  MOV EDI,dword ptr [EDI + 0x34]
006BF3A0  8B 17                     MOV EDX,dword ptr [EDI]
006BF3A2  6A 00                     PUSH 0x0
006BF3A4  57                        PUSH EDI
006BF3A5  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
006BF3AB  E9 69 02 00 00            JMP 0x006bf619
LAB_006bf3b0:
006BF3B0  33 DB                     XOR EBX,EBX
006BF3B2  B8 01 00 00 00            MOV EAX,0x1
006BF3B7  89 86 B4 01 00 00         MOV dword ptr [ESI + 0x1b4],EAX
006BF3BD  89 86 B8 01 00 00         MOV dword ptr [ESI + 0x1b8],EAX
006BF3C3  E9 51 02 00 00            JMP 0x006bf619
LAB_006bf3c8:
006BF3C8  83 FA 01                  CMP EDX,0x1
006BF3CB  7E 30                     JLE 0x006bf3fd
006BF3CD  F6 47 0C 02               TEST byte ptr [EDI + 0xc],0x2
006BF3D1  74 21                     JZ 0x006bf3f4
006BF3D3  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006BF3D6  0F AF 46 0C               IMUL EAX,dword ptr [ESI + 0xc]
006BF3DA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006BF3DD  8D 72 02                  LEA ESI,[EDX + 0x2]
006BF3E0  99                        CDQ
006BF3E1  F7 FE                     IDIV ESI
006BF3E3  39 41 04                  CMP dword ptr [ECX + 0x4],EAX
006BF3E6  7C 0C                     JL 0x006bf3f4
006BF3E8  B8 01 00 00 00            MOV EAX,0x1
006BF3ED  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006BF3F0  0B F0                     OR ESI,EAX
006BF3F2  EB 0C                     JMP 0x006bf400
LAB_006bf3f4:
006BF3F4  33 C0                     XOR EAX,EAX
006BF3F6  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006BF3F9  0B F0                     OR ESI,EAX
006BF3FB  EB 03                     JMP 0x006bf400
LAB_006bf3fd:
006BF3FD  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_006bf400:
006BF400  F7 47 08 00 00 00 01      TEST dword ptr [EDI + 0x8],0x1000000
006BF407  74 15                     JZ 0x006bf41e
006BF409  8D 45 C8                  LEA EAX,[EBP + -0x38]
006BF40C  50                        PUSH EAX
006BF40D  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006BF410  51                        PUSH ECX
006BF411  FF 15 58 BE 85 00         CALL dword ptr [0x0085be58]
006BF417  BE 01 00 00 00            MOV ESI,0x1
006BF41C  EB 1B                     JMP 0x006bf439
LAB_006bf41e:
006BF41E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BF421  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006BF424  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006BF427  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006BF42A  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006BF42D  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BF430  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006BF433  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
006BF436  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006bf439:
006BF439  8D 4D C8                  LEA ECX,[EBP + -0x38]
006BF43C  51                        PUSH ECX
006BF43D  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006BF440  52                        PUSH EDX
006BF441  FF 15 54 BE 85 00         CALL dword ptr [0x0085be54]
006BF447  85 F6                     TEST ESI,ESI
006BF449  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006BF44C  0F 84 A6 00 00 00         JZ 0x006bf4f8
006BF452  01 45 D0                  ADD dword ptr [EBP + -0x30],EAX
006BF455  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006BF458  01 4D D4                  ADD dword ptr [EBP + -0x2c],ECX
006BF45B  33 F6                     XOR ESI,ESI
006BF45D  39 B7 0C 05 00 00         CMP dword ptr [EDI + 0x50c],ESI
006BF463  74 12                     JZ 0x006bf477
006BF465  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
006BF468  8B 10                     MOV EDX,dword ptr [EAX]
006BF46A  56                        PUSH ESI
006BF46B  6A 01                     PUSH 0x1
006BF46D  50                        PUSH EAX
006BF46E  FF 52 58                  CALL dword ptr [EDX + 0x58]
006BF471  89 B7 0C 05 00 00         MOV dword ptr [EDI + 0x50c],ESI
LAB_006bf477:
006BF477  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006BF47A  8B 08                     MOV ECX,dword ptr [EAX]
006BF47C  6A 00                     PUSH 0x0
006BF47E  68 00 00 00 01            PUSH 0x1000000
006BF483  6A 00                     PUSH 0x0
006BF485  8B 57 44                  MOV EDX,dword ptr [EDI + 0x44]
006BF488  52                        PUSH EDX
006BF489  8D 55 C8                  LEA EDX,[EBP + -0x38]
006BF48C  52                        PUSH EDX
006BF48D  50                        PUSH EAX
006BF48E  FF 51 14                  CALL dword ptr [ECX + 0x14]
006BF491  8B D8                     MOV EBX,EAX
006BF493  85 DB                     TEST EBX,EBX
006BF495  74 32                     JZ 0x006bf4c9
006BF497  81 FB C2 01 76 88         CMP EBX,0x887601c2
006BF49D  75 08                     JNZ 0x006bf4a7
006BF49F  57                        PUSH EDI
006BF4A0  E8 9B F7 00 00            CALL 0x006cec40
006BF4A5  EB 1C                     JMP 0x006bf4c3
LAB_006bf4a7:
006BF4A7  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BF4AD  74 08                     JZ 0x006bf4b7
006BF4AF  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BF4B5  75 12                     JNZ 0x006bf4c9
LAB_006bf4b7:
006BF4B7  85 F6                     TEST ESI,ESI
006BF4B9  75 0E                     JNZ 0x006bf4c9
006BF4BB  6A 02                     PUSH 0x2
006BF4BD  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bf4c3:
006BF4C3  46                        INC ESI
006BF4C4  83 FE 02                  CMP ESI,0x2
006BF4C7  7C AE                     JL 0x006bf477
LAB_006bf4c9:
006BF4C9  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BF4CF  74 0C                     JZ 0x006bf4dd
006BF4D1  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BF4D7  0F 85 3C 01 00 00         JNZ 0x006bf619
LAB_006bf4dd:
006BF4DD  33 DB                     XOR EBX,EBX
006BF4DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BF4E2  B9 01 00 00 00            MOV ECX,0x1
006BF4E7  89 88 B4 01 00 00         MOV dword ptr [EAX + 0x1b4],ECX
006BF4ED  89 88 B8 01 00 00         MOV dword ptr [EAX + 0x1b8],ECX
006BF4F3  E9 21 01 00 00            JMP 0x006bf619
LAB_006bf4f8:
006BF4F8  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006BF4FB  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006BF4FE  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006BF501  8B 87 0C 05 00 00         MOV EAX,dword ptr [EDI + 0x50c]
006BF507  85 C0                     TEST EAX,EAX
006BF509  74 17                     JZ 0x006bf522
006BF50B  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
006BF50E  8B 10                     MOV EDX,dword ptr [EAX]
006BF510  6A 00                     PUSH 0x0
006BF512  6A 01                     PUSH 0x1
006BF514  50                        PUSH EAX
006BF515  FF 52 58                  CALL dword ptr [EDX + 0x58]
006BF518  C7 87 0C 05 00 00 00 00 00 00  MOV dword ptr [EDI + 0x50c],0x0
LAB_006bf522:
006BF522  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BF525  8B B0 C0 01 00 00         MOV ESI,dword ptr [EAX + 0x1c0]
006BF52B  83 C6 08                  ADD ESI,0x8
006BF52E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006BF531  85 C0                     TEST EAX,EAX
006BF533  0F 8E E0 00 00 00         JLE 0x006bf619
006BF539  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
LAB_006bf53f:
006BF53F  8B 0E                     MOV ECX,dword ptr [ESI]
006BF541  01 4E 08                  ADD dword ptr [ESI + 0x8],ECX
006BF544  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006BF547  01 56 0C                  ADD dword ptr [ESI + 0xc],EDX
006BF54A  8B DE                     MOV EBX,ESI
006BF54C  8B 03                     MOV EAX,dword ptr [EBX]
006BF54E  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006BF551  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006BF554  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006BF557  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006BF55A  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006BF55D  8B 5B 0C                  MOV EBX,dword ptr [EBX + 0xc]
006BF560  03 45 C4                  ADD EAX,dword ptr [EBP + -0x3c]
006BF563  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006BF566  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006BF569  03 C8                     ADD ECX,EAX
006BF56B  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006BF56E  03 55 C4                  ADD EDX,dword ptr [EBP + -0x3c]
006BF571  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006BF574  03 D8                     ADD EBX,EAX
006BF576  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
006BF579  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
LAB_006bf580:
006BF580  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006BF583  8B 08                     MOV ECX,dword ptr [EAX]
006BF585  6A 00                     PUSH 0x0
006BF587  68 00 00 00 01            PUSH 0x1000000
006BF58C  56                        PUSH ESI
006BF58D  8B 57 44                  MOV EDX,dword ptr [EDI + 0x44]
006BF590  52                        PUSH EDX
006BF591  8D 55 C8                  LEA EDX,[EBP + -0x38]
006BF594  52                        PUSH EDX
006BF595  50                        PUSH EAX
006BF596  FF 51 14                  CALL dword ptr [ECX + 0x14]
006BF599  8B D8                     MOV EBX,EAX
006BF59B  85 DB                     TEST EBX,EBX
006BF59D  74 3B                     JZ 0x006bf5da
006BF59F  81 FB C2 01 76 88         CMP EBX,0x887601c2
006BF5A5  75 08                     JNZ 0x006bf5af
006BF5A7  57                        PUSH EDI
006BF5A8  E8 93 F6 00 00            CALL 0x006cec40
006BF5AD  EB 1F                     JMP 0x006bf5ce
LAB_006bf5af:
006BF5AF  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BF5B5  74 08                     JZ 0x006bf5bf
006BF5B7  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BF5BD  75 1B                     JNZ 0x006bf5da
LAB_006bf5bf:
006BF5BF  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006BF5C2  85 C0                     TEST EAX,EAX
006BF5C4  75 14                     JNZ 0x006bf5da
006BF5C6  6A 02                     PUSH 0x2
006BF5C8  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bf5ce:
006BF5CE  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006BF5D1  40                        INC EAX
006BF5D2  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006BF5D5  83 F8 02                  CMP EAX,0x2
006BF5D8  7C A6                     JL 0x006bf580
LAB_006bf5da:
006BF5DA  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BF5E0  74 08                     JZ 0x006bf5ea
006BF5E2  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BF5E8  75 16                     JNZ 0x006bf600
LAB_006bf5ea:
006BF5EA  33 DB                     XOR EBX,EBX
006BF5EC  B9 01 00 00 00            MOV ECX,0x1
006BF5F1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BF5F4  89 88 B4 01 00 00         MOV dword ptr [EAX + 0x1b4],ECX
006BF5FA  89 88 B8 01 00 00         MOV dword ptr [EAX + 0x1b8],ECX
LAB_006bf600:
006BF600  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006BF603  85 C0                     TEST EAX,EAX
006BF605  75 03                     JNZ 0x006bf60a
006BF607  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
LAB_006bf60a:
006BF60A  83 C6 10                  ADD ESI,0x10
006BF60D  FF 8D 5C FF FF FF         DEC dword ptr [EBP + 0xffffff5c]
006BF613  0F 85 26 FF FF FF         JNZ 0x006bf53f
LAB_006bf619:
006BF619  81 FB A0 00 76 88         CMP EBX,0x887600a0
006BF61F  74 08                     JZ 0x006bf629
006BF621  81 FB AE 01 76 88         CMP EBX,0x887601ae
006BF627  75 02                     JNZ 0x006bf62b
LAB_006bf629:
006BF629  33 DB                     XOR EBX,EBX
LAB_006bf62b:
006BF62B  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006BF62E  85 C0                     TEST EAX,EAX
006BF630  75 02                     JNZ 0x006bf634
006BF632  8B C3                     MOV EAX,EBX
LAB_006bf634:
006BF634  8D A5 50 FF FF FF         LEA ESP,[EBP + 0xffffff50]
006BF63A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BF63D  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006BF644  5F                        POP EDI
006BF645  5E                        POP ESI
006BF646  5B                        POP EBX
006BF647  8B E5                     MOV ESP,EBP
006BF649  5D                        POP EBP
006BF64A  C2 08 00                  RET 0x8
