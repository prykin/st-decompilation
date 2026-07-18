FUN_006de9c0:
006DE9C0  55                        PUSH EBP
006DE9C1  8B EC                     MOV EBP,ESP
006DE9C3  6A FF                     PUSH -0x1
006DE9C5  68 08 E0 79 00            PUSH 0x79e008
006DE9CA  68 64 D9 72 00            PUSH 0x72d964
006DE9CF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006DE9D5  50                        PUSH EAX
006DE9D6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006DE9DD  81 EC F8 00 00 00         SUB ESP,0xf8
006DE9E3  53                        PUSH EBX
006DE9E4  56                        PUSH ESI
006DE9E5  57                        PUSH EDI
006DE9E6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DE9E9  8B F1                     MOV ESI,ECX
006DE9EB  BB 30 75 00 00            MOV EBX,0x7530
006DE9F0  89 9D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EBX
006DE9F6  B8 D0 8A FF FF            MOV EAX,0xffff8ad0
006DE9FB  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
006DEA01  89 9D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EBX
006DEA07  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
006DEA0D  83 BE 24 01 00 00 01      CMP dword ptr [ESI + 0x124],0x1
006DEA14  0F 85 D4 00 00 00         JNZ 0x006deaee
006DEA1A  8B 9E 74 03 00 00         MOV EBX,dword ptr [ESI + 0x374]
006DEA20  8B 8E 80 03 00 00         MOV ECX,dword ptr [ESI + 0x380]
006DEA26  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006DEA29  03 C3                     ADD EAX,EBX
006DEA2B  99                        CDQ
006DEA2C  F7 F9                     IDIV ECX
006DEA2E  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
006DEA34  85 C0                     TEST EAX,EAX
006DEA36  7D 08                     JGE 0x006dea40
006DEA38  33 C0                     XOR EAX,EAX
006DEA3A  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
LAB_006dea40:
006DEA40  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
006DEA46  0F BF 3A                  MOVSX EDI,word ptr [EDX]
006DEA49  89 BD 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EDI
006DEA4F  3B C7                     CMP EAX,EDI
006DEA51  7C 09                     JL 0x006dea5c
006DEA53  8D 47 FF                  LEA EAX,[EDI + -0x1]
006DEA56  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
LAB_006dea5c:
006DEA5C  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006DEA5F  03 C3                     ADD EAX,EBX
006DEA61  99                        CDQ
006DEA62  F7 F9                     IDIV ECX
006DEA64  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
006DEA6A  85 C0                     TEST EAX,EAX
006DEA6C  7D 08                     JGE 0x006dea76
006DEA6E  33 C0                     XOR EAX,EAX
006DEA70  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006dea76:
006DEA76  3B C7                     CMP EAX,EDI
006DEA78  7C 07                     JL 0x006dea81
006DEA7A  4F                        DEC EDI
006DEA7B  89 BD 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDI
LAB_006dea81:
006DEA81  8B 9E 78 03 00 00         MOV EBX,dword ptr [ESI + 0x378]
006DEA87  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006DEA8A  03 C3                     ADD EAX,EBX
006DEA8C  99                        CDQ
006DEA8D  F7 F9                     IDIV ECX
006DEA8F  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
006DEA95  85 C0                     TEST EAX,EAX
006DEA97  7D 0A                     JGE 0x006deaa3
006DEA99  C7 85 68 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff68],0x0
LAB_006deaa3:
006DEAA3  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DEAA9  0F BF 78 02               MOVSX EDI,word ptr [EAX + 0x2]
006DEAAD  39 BD 68 FF FF FF         CMP dword ptr [EBP + 0xffffff68],EDI
006DEAB3  7C 09                     JL 0x006deabe
006DEAB5  8D 57 FF                  LEA EDX,[EDI + -0x1]
006DEAB8  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
LAB_006deabe:
006DEABE  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006DEAC1  03 C3                     ADD EAX,EBX
006DEAC3  99                        CDQ
006DEAC4  F7 F9                     IDIV ECX
006DEAC6  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
006DEACC  85 C0                     TEST EAX,EAX
006DEACE  7D 0A                     JGE 0x006deada
006DEAD0  C7 85 44 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff44],0x0
LAB_006deada:
006DEADA  39 BD 44 FF FF FF         CMP dword ptr [EBP + 0xffffff44],EDI
006DEAE0  0F 8C EE 04 00 00         JL 0x006defd4
006DEAE6  8D 47 FF                  LEA EAX,[EDI + -0x1]
006DEAE9  E9 E0 04 00 00            JMP 0x006defce
LAB_006deaee:
006DEAEE  8D 4D DC                  LEA ECX,[EBP + -0x24]
006DEAF1  51                        PUSH ECX
006DEAF2  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006DEAF5  52                        PUSH EDX
006DEAF6  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DEAFC  D9 E0                     FCHS
006DEAFE  51                        PUSH ECX
006DEAFF  D9 1C 24                  FSTP float ptr [ESP]
006DEB02  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006DEB05  50                        PUSH EAX
006DEB06  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006DEB09  51                        PUSH ECX
006DEB0A  8B CE                     MOV ECX,ESI
006DEB0C  E8 0F 31 00 00            CALL 0x006e1c20
006DEB11  D9 45 DC                  FLD float ptr [EBP + -0x24]
006DEB14  D9 45 E4                  FLD float ptr [EBP + -0x1c]
006DEB17  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEB1D  E8 66 F7 04 00            CALL 0x0072e288
006DEB22  85 C0                     TEST EAX,EAX
006DEB24  7D 02                     JGE 0x006deb28
006DEB26  33 C0                     XOR EAX,EAX
LAB_006deb28:
006DEB28  8B BE 80 02 00 00         MOV EDI,dword ptr [ESI + 0x280]
006DEB2E  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006DEB31  3B C1                     CMP EAX,ECX
006DEB33  7C 03                     JL 0x006deb38
006DEB35  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006deb38:
006DEB38  3D 30 75 00 00            CMP EAX,0x7530
006DEB3D  7D 08                     JGE 0x006deb47
006DEB3F  8B D8                     MOV EBX,EAX
006DEB41  89 9D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EBX
LAB_006deb47:
006DEB47  3D D0 8A FF FF            CMP EAX,0xffff8ad0
006DEB4C  7E 06                     JLE 0x006deb54
006DEB4E  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006deb54:
006DEB54  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEB5A  E8 29 F7 04 00            CALL 0x0072e288
006DEB5F  85 C0                     TEST EAX,EAX
006DEB61  7D 02                     JGE 0x006deb65
006DEB63  33 C0                     XOR EAX,EAX
LAB_006deb65:
006DEB65  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
006DEB69  3B C1                     CMP EAX,ECX
006DEB6B  7C 03                     JL 0x006deb70
006DEB6D  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006deb70:
006DEB70  3D 30 75 00 00            CMP EAX,0x7530
006DEB75  7D 06                     JGE 0x006deb7d
006DEB77  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_006deb7d:
006DEB7D  3D D0 8A FF FF            CMP EAX,0xffff8ad0
006DEB82  7E 06                     JLE 0x006deb8a
006DEB84  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006deb8a:
006DEB8A  8D 55 DC                  LEA EDX,[EBP + -0x24]
006DEB8D  52                        PUSH EDX
006DEB8E  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006DEB91  50                        PUSH EAX
006DEB92  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DEB98  D9 E0                     FCHS
006DEB9A  51                        PUSH ECX
006DEB9B  D9 1C 24                  FSTP float ptr [ESP]
006DEB9E  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006DEBA1  49                        DEC ECX
006DEBA2  51                        PUSH ECX
006DEBA3  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
006DEBA6  52                        PUSH EDX
006DEBA7  8B CE                     MOV ECX,ESI
006DEBA9  E8 72 30 00 00            CALL 0x006e1c20
006DEBAE  D9 45 DC                  FLD float ptr [EBP + -0x24]
006DEBB1  D9 45 E4                  FLD float ptr [EBP + -0x1c]
006DEBB4  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEBBA  E8 C9 F6 04 00            CALL 0x0072e288
006DEBBF  85 C0                     TEST EAX,EAX
006DEBC1  7D 02                     JGE 0x006debc5
006DEBC3  33 C0                     XOR EAX,EAX
LAB_006debc5:
006DEBC5  8B BE 80 02 00 00         MOV EDI,dword ptr [ESI + 0x280]
006DEBCB  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006DEBCE  3B C1                     CMP EAX,ECX
006DEBD0  7C 03                     JL 0x006debd5
006DEBD2  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006debd5:
006DEBD5  3B C3                     CMP EAX,EBX
006DEBD7  7D 08                     JGE 0x006debe1
006DEBD9  8B D8                     MOV EBX,EAX
006DEBDB  89 9D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EBX
LAB_006debe1:
006DEBE1  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
006DEBE7  7E 06                     JLE 0x006debef
006DEBE9  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006debef:
006DEBEF  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEBF5  E8 8E F6 04 00            CALL 0x0072e288
006DEBFA  85 C0                     TEST EAX,EAX
006DEBFC  7D 02                     JGE 0x006dec00
006DEBFE  33 C0                     XOR EAX,EAX
LAB_006dec00:
006DEC00  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
006DEC04  3B C1                     CMP EAX,ECX
006DEC06  7C 03                     JL 0x006dec0b
006DEC08  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006dec0b:
006DEC0B  3B 85 68 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff68]
006DEC11  7D 06                     JGE 0x006dec19
006DEC13  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_006dec19:
006DEC19  3B 85 44 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff44]
006DEC1F  7E 06                     JLE 0x006dec27
006DEC21  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006dec27:
006DEC27  8D 45 DC                  LEA EAX,[EBP + -0x24]
006DEC2A  50                        PUSH EAX
006DEC2B  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006DEC2E  51                        PUSH ECX
006DEC2F  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DEC35  D9 E0                     FCHS
006DEC37  51                        PUSH ECX
006DEC38  D9 1C 24                  FSTP float ptr [ESP]
006DEC3B  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006DEC3E  4A                        DEC EDX
006DEC3F  52                        PUSH EDX
006DEC40  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006DEC43  48                        DEC EAX
006DEC44  50                        PUSH EAX
006DEC45  8B CE                     MOV ECX,ESI
006DEC47  E8 D4 2F 00 00            CALL 0x006e1c20
006DEC4C  D9 45 DC                  FLD float ptr [EBP + -0x24]
006DEC4F  D9 45 E4                  FLD float ptr [EBP + -0x1c]
006DEC52  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEC58  E8 2B F6 04 00            CALL 0x0072e288
006DEC5D  85 C0                     TEST EAX,EAX
006DEC5F  7D 02                     JGE 0x006dec63
006DEC61  33 C0                     XOR EAX,EAX
LAB_006dec63:
006DEC63  8B BE 80 02 00 00         MOV EDI,dword ptr [ESI + 0x280]
006DEC69  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006DEC6C  3B C1                     CMP EAX,ECX
006DEC6E  7C 03                     JL 0x006dec73
006DEC70  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006dec73:
006DEC73  3B C3                     CMP EAX,EBX
006DEC75  7D 08                     JGE 0x006dec7f
006DEC77  8B D8                     MOV EBX,EAX
006DEC79  89 9D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EBX
LAB_006dec7f:
006DEC7F  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
006DEC85  7E 06                     JLE 0x006dec8d
006DEC87  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006dec8d:
006DEC8D  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEC93  E8 F0 F5 04 00            CALL 0x0072e288
006DEC98  85 C0                     TEST EAX,EAX
006DEC9A  7D 02                     JGE 0x006dec9e
006DEC9C  33 C0                     XOR EAX,EAX
LAB_006dec9e:
006DEC9E  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
006DECA2  3B C1                     CMP EAX,ECX
006DECA4  7C 03                     JL 0x006deca9
006DECA6  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006deca9:
006DECA9  3B 85 68 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff68]
006DECAF  7D 06                     JGE 0x006decb7
006DECB1  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_006decb7:
006DECB7  3B 85 44 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff44]
006DECBD  7E 06                     JLE 0x006decc5
006DECBF  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006decc5:
006DECC5  8D 4D DC                  LEA ECX,[EBP + -0x24]
006DECC8  51                        PUSH ECX
006DECC9  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006DECCC  52                        PUSH EDX
006DECCD  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DECD3  D9 E0                     FCHS
006DECD5  51                        PUSH ECX
006DECD6  D9 1C 24                  FSTP float ptr [ESP]
006DECD9  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006DECDC  50                        PUSH EAX
006DECDD  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006DECE0  49                        DEC ECX
006DECE1  51                        PUSH ECX
006DECE2  8B CE                     MOV ECX,ESI
006DECE4  E8 37 2F 00 00            CALL 0x006e1c20
006DECE9  D9 45 DC                  FLD float ptr [EBP + -0x24]
006DECEC  D9 45 E4                  FLD float ptr [EBP + -0x1c]
006DECEF  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DECF5  E8 8E F5 04 00            CALL 0x0072e288
006DECFA  85 C0                     TEST EAX,EAX
006DECFC  7D 02                     JGE 0x006ded00
006DECFE  33 C0                     XOR EAX,EAX
LAB_006ded00:
006DED00  8B BE 80 02 00 00         MOV EDI,dword ptr [ESI + 0x280]
006DED06  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006DED09  3B C1                     CMP EAX,ECX
006DED0B  7C 03                     JL 0x006ded10
006DED0D  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006ded10:
006DED10  3B C3                     CMP EAX,EBX
006DED12  7D 06                     JGE 0x006ded1a
006DED14  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
LAB_006ded1a:
006DED1A  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
006DED20  7E 06                     JLE 0x006ded28
006DED22  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006ded28:
006DED28  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DED2E  E8 55 F5 04 00            CALL 0x0072e288
006DED33  85 C0                     TEST EAX,EAX
006DED35  7D 02                     JGE 0x006ded39
006DED37  33 C0                     XOR EAX,EAX
LAB_006ded39:
006DED39  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
006DED3D  3B C1                     CMP EAX,ECX
006DED3F  7C 03                     JL 0x006ded44
006DED41  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006ded44:
006DED44  3B 85 68 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff68]
006DED4A  7D 06                     JGE 0x006ded52
006DED4C  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_006ded52:
006DED52  3B 85 44 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff44]
006DED58  7E 06                     JLE 0x006ded60
006DED5A  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006ded60:
006DED60  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DED66  DC 0D 90 DF 79 00         FMUL double ptr [0x0079df90]
006DED6C  D9 9D 08 FF FF FF         FSTP float ptr [EBP + 0xffffff08]
006DED72  8D 55 DC                  LEA EDX,[EBP + -0x24]
006DED75  52                        PUSH EDX
006DED76  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006DED79  50                        PUSH EAX
006DED7A  8B 9D 08 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff08]
006DED80  53                        PUSH EBX
006DED81  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006DED84  51                        PUSH ECX
006DED85  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
006DED88  52                        PUSH EDX
006DED89  8B CE                     MOV ECX,ESI
006DED8B  E8 90 2E 00 00            CALL 0x006e1c20
006DED90  D9 45 DC                  FLD float ptr [EBP + -0x24]
006DED93  D9 45 E4                  FLD float ptr [EBP + -0x1c]
006DED96  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DED9C  E8 E7 F4 04 00            CALL 0x0072e288
006DEDA1  85 C0                     TEST EAX,EAX
006DEDA3  7D 02                     JGE 0x006deda7
006DEDA5  33 C0                     XOR EAX,EAX
LAB_006deda7:
006DEDA7  8B BE 80 02 00 00         MOV EDI,dword ptr [ESI + 0x280]
006DEDAD  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006DEDB0  3B C1                     CMP EAX,ECX
006DEDB2  7C 03                     JL 0x006dedb7
006DEDB4  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006dedb7:
006DEDB7  3B 85 64 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff64]
006DEDBD  7D 06                     JGE 0x006dedc5
006DEDBF  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
LAB_006dedc5:
006DEDC5  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
006DEDCB  7E 06                     JLE 0x006dedd3
006DEDCD  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006dedd3:
006DEDD3  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEDD9  E8 AA F4 04 00            CALL 0x0072e288
006DEDDE  85 C0                     TEST EAX,EAX
006DEDE0  7D 02                     JGE 0x006dede4
006DEDE2  33 C0                     XOR EAX,EAX
LAB_006dede4:
006DEDE4  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
006DEDE8  3B C1                     CMP EAX,ECX
006DEDEA  7C 03                     JL 0x006dedef
006DEDEC  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006dedef:
006DEDEF  3B 85 68 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff68]
006DEDF5  7D 06                     JGE 0x006dedfd
006DEDF7  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_006dedfd:
006DEDFD  3B 85 44 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff44]
006DEE03  7E 06                     JLE 0x006dee0b
006DEE05  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006dee0b:
006DEE0B  8D 45 DC                  LEA EAX,[EBP + -0x24]
006DEE0E  50                        PUSH EAX
006DEE0F  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006DEE12  51                        PUSH ECX
006DEE13  53                        PUSH EBX
006DEE14  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006DEE17  4A                        DEC EDX
006DEE18  52                        PUSH EDX
006DEE19  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006DEE1C  50                        PUSH EAX
006DEE1D  8B CE                     MOV ECX,ESI
006DEE1F  E8 FC 2D 00 00            CALL 0x006e1c20
006DEE24  D9 45 DC                  FLD float ptr [EBP + -0x24]
006DEE27  D9 45 E4                  FLD float ptr [EBP + -0x1c]
006DEE2A  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEE30  E8 53 F4 04 00            CALL 0x0072e288
006DEE35  85 C0                     TEST EAX,EAX
006DEE37  7D 02                     JGE 0x006dee3b
006DEE39  33 C0                     XOR EAX,EAX
LAB_006dee3b:
006DEE3B  8B BE 80 02 00 00         MOV EDI,dword ptr [ESI + 0x280]
006DEE41  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006DEE44  3B C1                     CMP EAX,ECX
006DEE46  7C 03                     JL 0x006dee4b
006DEE48  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006dee4b:
006DEE4B  3B 85 64 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff64]
006DEE51  7D 06                     JGE 0x006dee59
006DEE53  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
LAB_006dee59:
006DEE59  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
006DEE5F  7E 06                     JLE 0x006dee67
006DEE61  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006dee67:
006DEE67  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEE6D  E8 16 F4 04 00            CALL 0x0072e288
006DEE72  85 C0                     TEST EAX,EAX
006DEE74  7D 02                     JGE 0x006dee78
006DEE76  33 C0                     XOR EAX,EAX
LAB_006dee78:
006DEE78  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
006DEE7C  3B C1                     CMP EAX,ECX
006DEE7E  7C 03                     JL 0x006dee83
006DEE80  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006dee83:
006DEE83  3B 85 68 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff68]
006DEE89  7D 06                     JGE 0x006dee91
006DEE8B  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_006dee91:
006DEE91  3B 85 44 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff44]
006DEE97  7E 06                     JLE 0x006dee9f
006DEE99  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006dee9f:
006DEE9F  8D 4D DC                  LEA ECX,[EBP + -0x24]
006DEEA2  51                        PUSH ECX
006DEEA3  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006DEEA6  52                        PUSH EDX
006DEEA7  53                        PUSH EBX
006DEEA8  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006DEEAB  48                        DEC EAX
006DEEAC  50                        PUSH EAX
006DEEAD  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006DEEB0  49                        DEC ECX
006DEEB1  51                        PUSH ECX
006DEEB2  8B CE                     MOV ECX,ESI
006DEEB4  E8 67 2D 00 00            CALL 0x006e1c20
006DEEB9  D9 45 DC                  FLD float ptr [EBP + -0x24]
006DEEBC  D9 45 E4                  FLD float ptr [EBP + -0x1c]
006DEEBF  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEEC5  E8 BE F3 04 00            CALL 0x0072e288
006DEECA  85 C0                     TEST EAX,EAX
006DEECC  7D 02                     JGE 0x006deed0
006DEECE  33 C0                     XOR EAX,EAX
LAB_006deed0:
006DEED0  8B BE 80 02 00 00         MOV EDI,dword ptr [ESI + 0x280]
006DEED6  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006DEED9  3B C1                     CMP EAX,ECX
006DEEDB  7C 03                     JL 0x006deee0
006DEEDD  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006deee0:
006DEEE0  3B 85 64 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff64]
006DEEE6  7D 06                     JGE 0x006deeee
006DEEE8  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
LAB_006deeee:
006DEEEE  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
006DEEF4  7E 06                     JLE 0x006deefc
006DEEF6  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006deefc:
006DEEFC  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEF02  E8 81 F3 04 00            CALL 0x0072e288
006DEF07  85 C0                     TEST EAX,EAX
006DEF09  7D 02                     JGE 0x006def0d
006DEF0B  33 C0                     XOR EAX,EAX
LAB_006def0d:
006DEF0D  0F BF 4F 02               MOVSX ECX,word ptr [EDI + 0x2]
006DEF11  3B C1                     CMP EAX,ECX
006DEF13  7C 03                     JL 0x006def18
006DEF15  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006def18:
006DEF18  3B 85 68 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff68]
006DEF1E  7D 06                     JGE 0x006def26
006DEF20  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_006def26:
006DEF26  3B 85 44 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff44]
006DEF2C  7E 06                     JLE 0x006def34
006DEF2E  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006def34:
006DEF34  8D 55 DC                  LEA EDX,[EBP + -0x24]
006DEF37  52                        PUSH EDX
006DEF38  8D 45 E4                  LEA EAX,[EBP + -0x1c]
006DEF3B  50                        PUSH EAX
006DEF3C  53                        PUSH EBX
006DEF3D  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006DEF40  51                        PUSH ECX
006DEF41  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006DEF44  4A                        DEC EDX
006DEF45  52                        PUSH EDX
006DEF46  8B CE                     MOV ECX,ESI
006DEF48  E8 D3 2C 00 00            CALL 0x006e1c20
006DEF4D  D9 45 E4                  FLD float ptr [EBP + -0x1c]
006DEF50  D9 45 DC                  FLD float ptr [EBP + -0x24]
006DEF53  DD 5D 80                  FSTP double ptr [EBP + -0x80]
006DEF56  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEF5C  E8 27 F3 04 00            CALL 0x0072e288
006DEF61  85 C0                     TEST EAX,EAX
006DEF63  7D 02                     JGE 0x006def67
006DEF65  33 C0                     XOR EAX,EAX
LAB_006def67:
006DEF67  8B BE 80 02 00 00         MOV EDI,dword ptr [ESI + 0x280]
006DEF6D  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006DEF70  89 8D 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],ECX
006DEF76  3B C1                     CMP EAX,ECX
006DEF78  7C 03                     JL 0x006def7d
006DEF7A  8D 41 FF                  LEA EAX,[ECX + -0x1]
LAB_006def7d:
006DEF7D  3B 85 64 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff64]
006DEF83  7D 06                     JGE 0x006def8b
006DEF85  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
LAB_006def8b:
006DEF8B  3B 85 40 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff40]
006DEF91  7E 06                     JLE 0x006def99
006DEF93  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
LAB_006def99:
006DEF99  DD 45 80                  FLD double ptr [EBP + -0x80]
006DEF9C  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DEFA2  E8 E1 F2 04 00            CALL 0x0072e288
006DEFA7  85 C0                     TEST EAX,EAX
006DEFA9  7D 02                     JGE 0x006defad
006DEFAB  33 C0                     XOR EAX,EAX
LAB_006defad:
006DEFAD  0F BF 7F 02               MOVSX EDI,word ptr [EDI + 0x2]
006DEFB1  3B C7                     CMP EAX,EDI
006DEFB3  7C 03                     JL 0x006defb8
006DEFB5  8D 47 FF                  LEA EAX,[EDI + -0x1]
LAB_006defb8:
006DEFB8  3B 85 68 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff68]
006DEFBE  7D 06                     JGE 0x006defc6
006DEFC0  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_006defc6:
006DEFC6  3B 85 44 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff44]
006DEFCC  7E 06                     JLE 0x006defd4
LAB_006defce:
006DEFCE  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
LAB_006defd4:
006DEFD4  D1 BD 64 FF FF FF         SAR dword ptr [EBP + 0xffffff64],0x1
006DEFDA  D1 BD 68 FF FF FF         SAR dword ptr [EBP + 0xffffff68],0x1
006DEFE0  8B 85 0C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff0c]
006DEFE6  8D 48 FE                  LEA ECX,[EAX + -0x2]
006DEFE9  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
006DEFEF  3B C1                     CMP EAX,ECX
006DEFF1  7D 05                     JGE 0x006deff8
006DEFF3  D1 F8                     SAR EAX,0x1
006DEFF5  40                        INC EAX
006DEFF6  EB 02                     JMP 0x006deffa
LAB_006deff8:
006DEFF8  D1 F8                     SAR EAX,0x1
LAB_006deffa:
006DEFFA  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
006DF000  83 C7 FE                  ADD EDI,-0x2
006DF003  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
006DF009  3B C7                     CMP EAX,EDI
006DF00B  7D 05                     JGE 0x006df012
006DF00D  D1 F8                     SAR EAX,0x1
006DF00F  40                        INC EAX
006DF010  EB 02                     JMP 0x006df014
LAB_006df012:
006DF012  D1 F8                     SAR EAX,0x1
LAB_006df014:
006DF014  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
006DF01A  33 C0                     XOR EAX,EAX
006DF01C  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
006DF022  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
006DF028  BF 05 00 00 00            MOV EDI,0x5
006DF02D  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
LAB_006df030:
006DF030  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DF036  0F BF 41 02               MOVSX EAX,word ptr [ECX + 0x2]
006DF03A  0F BF 11                  MOVSX EDX,word ptr [ECX]
006DF03D  0F AF C2                  IMUL EAX,EDX
006DF040  0F AF C7                  IMUL EAX,EDI
006DF043  99                        CDQ
006DF044  83 E2 03                  AND EDX,0x3
006DF047  03 C2                     ADD EAX,EDX
006DF049  C1 F8 02                  SAR EAX,0x2
006DF04C  8D 84 81 59 04 00 00      LEA EAX,[ECX + EAX*0x4 + 0x459]
006DF053  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006DF056  DB 45 A4                  FILD dword ptr [EBP + -0x5c]
006DF059  DC 8E D0 00 00 00         FMUL double ptr [ESI + 0xd0]
006DF05F  DD 9D 48 FF FF FF         FSTP double ptr [EBP + 0xffffff48]
006DF065  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
006DF06B  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006DF06E  3B 8D 44 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff44]
006DF074  0F 8F AA 00 00 00         JG 0x006df124
LAB_006df07a:
006DF07A  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
006DF080  0F BF 02                  MOVSX EAX,word ptr [EDX]
006DF083  0F AF C1                  IMUL EAX,ECX
006DF086  99                        CDQ
006DF087  2B C2                     SUB EAX,EDX
006DF089  D1 F8                     SAR EAX,0x1
006DF08B  8B BD 64 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff64]
006DF091  8B D7                     MOV EDX,EDI
006DF093  3B 95 40 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff40]
006DF099  7F 76                     JG 0x006df111
006DF09B  8B CF                     MOV ECX,EDI
006DF09D  03 C1                     ADD EAX,ECX
006DF09F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006DF0A2  8D 1C 82                  LEA EBX,[EDX + EAX*0x4]
LAB_006df0a5:
006DF0A5  8B 03                     MOV EAX,dword ptr [EBX]
006DF0A7  85 C0                     TEST EAX,EAX
006DF0A9  74 57                     JZ 0x006df102
006DF0AB  33 C9                     XOR ECX,ECX
006DF0AD  8A 48 48                  MOV CL,byte ptr [EAX + 0x48]
006DF0B0  89 8D 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],ECX
006DF0B6  DB 85 04 FF FF FF         FILD dword ptr [EBP + 0xffffff04]
006DF0BC  DC 8E D0 00 00 00         FMUL double ptr [ESI + 0xd0]
006DF0C2  DC AD 48 FF FF FF         FSUBR double ptr [EBP + 0xffffff48]
006DF0C8  83 EC 08                  SUB ESP,0x8
006DF0CB  DD 1C 24                  FSTP double ptr [ESP]
006DF0CE  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
006DF0D4  52                        PUSH EDX
006DF0D5  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006DF0DB  50                        PUSH EAX
006DF0DC  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006DF0DF  51                        PUSH ECX
006DF0E0  57                        PUSH EDI
006DF0E1  8B CE                     MOV ECX,ESI
006DF0E3  E8 88 F4 FF FF            CALL 0x006de570
006DF0E8  85 C0                     TEST EAX,EAX
006DF0EA  74 16                     JZ 0x006df102
006DF0EC  8B 03                     MOV EAX,dword ptr [EBX]
006DF0EE  8B 96 40 01 00 00         MOV EDX,dword ptr [ESI + 0x140]
006DF0F4  89 10                     MOV dword ptr [EAX],EDX
006DF0F6  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
006DF0FC  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df102:
006DF102  47                        INC EDI
006DF103  83 C3 04                  ADD EBX,0x4
006DF106  3B BD 40 FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff40]
006DF10C  7E 97                     JLE 0x006df0a5
006DF10E  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
LAB_006df111:
006DF111  41                        INC ECX
006DF112  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006DF115  3B 8D 44 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff44]
006DF11B  0F 8E 59 FF FF FF         JLE 0x006df07a
006DF121  8B 7D A4                  MOV EDI,dword ptr [EBP + -0x5c]
LAB_006df124:
006DF124  4F                        DEC EDI
006DF125  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
006DF128  85 FF                     TEST EDI,EDI
006DF12A  0F 8F 00 FF FF FF         JG 0x006df030
006DF130  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
006DF136  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006DF139  8B BD 44 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff44]
006DF13F  3B CF                     CMP ECX,EDI
006DF141  0F 8F 9C 00 00 00         JG 0x006df1e3
LAB_006df147:
006DF147  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF14D  0F BF 00                  MOVSX EAX,word ptr [EAX]
006DF150  0F AF C1                  IMUL EAX,ECX
006DF153  99                        CDQ
006DF154  2B C2                     SUB EAX,EDX
006DF156  D1 F8                     SAR EAX,0x1
006DF158  8B 9D 64 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff64]
006DF15E  3B 9D 40 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff40]
006DF164  7F 6B                     JG 0x006df1d1
006DF166  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
006DF169  C1 E7 02                  SHL EDI,0x2
LAB_006df16c:
006DF16C  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DF172  8B 84 0F 59 04 00 00      MOV EAX,dword ptr [EDI + ECX*0x1 + 0x459]
006DF179  85 C0                     TEST EAX,EAX
006DF17B  74 3F                     JZ 0x006df1bc
006DF17D  83 78 24 02               CMP dword ptr [EAX + 0x24],0x2
006DF181  7F 39                     JG 0x006df1bc
006DF183  6A 00                     PUSH 0x0
006DF185  6A 00                     PUSH 0x0
006DF187  6A 00                     PUSH 0x0
006DF189  6A 00                     PUSH 0x0
006DF18B  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006DF18E  52                        PUSH EDX
006DF18F  53                        PUSH EBX
006DF190  8B CE                     MOV ECX,ESI
006DF192  E8 D9 F3 FF FF            CALL 0x006de570
006DF197  85 C0                     TEST EAX,EAX
006DF199  74 21                     JZ 0x006df1bc
006DF19B  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF1A1  8B 84 07 59 04 00 00      MOV EAX,dword ptr [EDI + EAX*0x1 + 0x459]
006DF1A8  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DF1AE  89 08                     MOV dword ptr [EAX],ECX
006DF1B0  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
006DF1B6  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df1bc:
006DF1BC  43                        INC EBX
006DF1BD  83 C7 04                  ADD EDI,0x4
006DF1C0  3B 9D 40 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff40]
006DF1C6  7E A4                     JLE 0x006df16c
006DF1C8  8B BD 44 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff44]
006DF1CE  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
LAB_006df1d1:
006DF1D1  41                        INC ECX
006DF1D2  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006DF1D5  3B CF                     CMP ECX,EDI
006DF1D7  0F 8E 6A FF FF FF         JLE 0x006df147
006DF1DD  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
LAB_006df1e3:
006DF1E3  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006DF1E6  3B CF                     CMP ECX,EDI
006DF1E8  0F 8F 9F 00 00 00         JG 0x006df28d
LAB_006df1ee:
006DF1EE  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
006DF1F4  0F BF 02                  MOVSX EAX,word ptr [EDX]
006DF1F7  0F AF 45 A8               IMUL EAX,dword ptr [EBP + -0x58]
006DF1FB  99                        CDQ
006DF1FC  2B C2                     SUB EAX,EDX
006DF1FE  D1 F8                     SAR EAX,0x1
006DF200  8B 9D 64 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff64]
006DF206  3B 9D 40 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff40]
006DF20C  7F 6C                     JG 0x006df27a
006DF20E  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
006DF211  C1 E7 02                  SHL EDI,0x2
LAB_006df214:
006DF214  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF21A  8B 84 07 59 04 00 00      MOV EAX,dword ptr [EDI + EAX*0x1 + 0x459]
006DF221  85 C0                     TEST EAX,EAX
006DF223  74 49                     JZ 0x006df26e
006DF225  83 78 24 02               CMP dword ptr [EAX + 0x24],0x2
006DF229  7E 43                     JLE 0x006df26e
006DF22B  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DF231  D9 E0                     FCHS
006DF233  83 EC 08                  SUB ESP,0x8
006DF236  DD 1C 24                  FSTP double ptr [ESP]
006DF239  6A 00                     PUSH 0x0
006DF23B  6A 00                     PUSH 0x0
006DF23D  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006DF240  51                        PUSH ECX
006DF241  53                        PUSH EBX
006DF242  8B CE                     MOV ECX,ESI
006DF244  E8 27 F3 FF FF            CALL 0x006de570
006DF249  85 C0                     TEST EAX,EAX
006DF24B  74 21                     JZ 0x006df26e
006DF24D  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
006DF253  8B 84 17 59 04 00 00      MOV EAX,dword ptr [EDI + EDX*0x1 + 0x459]
006DF25A  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DF260  89 08                     MOV dword ptr [EAX],ECX
006DF262  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
006DF268  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df26e:
006DF26E  43                        INC EBX
006DF26F  83 C7 04                  ADD EDI,0x4
006DF272  3B 9D 40 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff40]
006DF278  7E 9A                     JLE 0x006df214
LAB_006df27a:
006DF27A  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006DF27D  40                        INC EAX
006DF27E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006DF281  3B 85 44 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff44]
006DF287  0F 8E 61 FF FF FF         JLE 0x006df1ee
LAB_006df28d:
006DF28D  8B 96 40 01 00 00         MOV EDX,dword ptr [ESI + 0x140]
006DF293  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006DF296  8B 86 3C 01 00 00         MOV EAX,dword ptr [ESI + 0x13c]
006DF29C  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
006DF2A2  8B 86 24 01 00 00         MOV EAX,dword ptr [ESI + 0x124]
006DF2A8  83 F8 0A                  CMP EAX,0xa
006DF2AB  0F 84 EE 13 00 00         JZ 0x006e069f
006DF2B1  83 F8 01                  CMP EAX,0x1
006DF2B4  0F 84 E5 13 00 00         JZ 0x006e069f
006DF2BA  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
006DF2C0  85 C0                     TEST EAX,EAX
006DF2C2  0F 85 E8 07 00 00         JNZ 0x006dfab0
006DF2C8  8B 9D 64 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff64]
LAB_006df2ce:
006DF2CE  3B 9D 40 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff40]
006DF2D4  0F 8F 86 01 00 00         JG 0x006df460
006DF2DA  6A 00                     PUSH 0x0
006DF2DC  6A 00                     PUSH 0x0
006DF2DE  6A 00                     PUSH 0x0
006DF2E0  6A 00                     PUSH 0x0
006DF2E2  6A FF                     PUSH -0x1
006DF2E4  53                        PUSH EBX
006DF2E5  8B CE                     MOV ECX,ESI
006DF2E7  E8 84 F2 FF FF            CALL 0x006de570
006DF2EC  85 C0                     TEST EAX,EAX
006DF2EE  74 7C                     JZ 0x006df36c
006DF2F0  9B                        WAIT
006DF2F1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006DF2F8  B8 50 00 00 00            MOV EAX,0x50
006DF2FD  E8 3E E7 04 00            CALL 0x0072da40
006DF302  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF305  8B D4                     MOV EDX,ESP
006DF307  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF30D  9B                        WAIT
006DF30E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF315  B9 14 00 00 00            MOV ECX,0x14
006DF31A  33 C0                     XOR EAX,EAX
006DF31C  8B FA                     MOV EDI,EDX
006DF31E  F3 AB                     STOSD.REP ES:EDI
006DF320  8D 0C 1B                  LEA ECX,[EBX + EBX*0x1]
006DF323  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006DF327  66 C7 42 06 FE FF         MOV word ptr [EDX + 0x6],0xfffe
006DF32D  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF333  8B 88 21 04 00 00         MOV ECX,dword ptr [EAX + 0x421]
006DF339  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006DF33C  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF343  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF34A  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF351  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF358  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006DF35E  89 02                     MOV dword ptr [EDX],EAX
006DF360  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF366  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df36c:
006DF36C  6A 00                     PUSH 0x0
006DF36E  6A 00                     PUSH 0x0
006DF370  6A 00                     PUSH 0x0
006DF372  6A 00                     PUSH 0x0
006DF374  6A FE                     PUSH -0x2
006DF376  53                        PUSH EBX
006DF377  8B CE                     MOV ECX,ESI
006DF379  E8 F2 F1 FF FF            CALL 0x006de570
006DF37E  85 C0                     TEST EAX,EAX
006DF380  74 7C                     JZ 0x006df3fe
006DF382  9B                        WAIT
006DF383  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006DF38A  B8 50 00 00 00            MOV EAX,0x50
006DF38F  E8 AC E6 04 00            CALL 0x0072da40
006DF394  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF397  8B D4                     MOV EDX,ESP
006DF399  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF39F  9B                        WAIT
006DF3A0  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF3A7  B9 14 00 00 00            MOV ECX,0x14
006DF3AC  33 C0                     XOR EAX,EAX
006DF3AE  8B FA                     MOV EDI,EDX
006DF3B0  F3 AB                     STOSD.REP ES:EDI
006DF3B2  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006DF3B5  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006DF3B9  66 C7 42 06 FC FF         MOV word ptr [EDX + 0x6],0xfffc
006DF3BF  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DF3C5  8B 81 41 04 00 00         MOV EAX,dword ptr [ECX + 0x441]
006DF3CB  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DF3CE  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF3D5  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF3DC  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF3E3  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF3EA  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DF3F0  89 0A                     MOV dword ptr [EDX],ECX
006DF3F2  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF3F8  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df3fe:
006DF3FE  43                        INC EBX
006DF3FF  E9 CA FE FF FF            JMP 0x006df2ce
LAB_006df460:
006DF460  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006DF466  85 C0                     TEST EAX,EAX
006DF468  0F 85 0F 03 00 00         JNZ 0x006df77d
006DF46E  6A 00                     PUSH 0x0
006DF470  6A 00                     PUSH 0x0
006DF472  6A 00                     PUSH 0x0
006DF474  6A 00                     PUSH 0x0
006DF476  6A FF                     PUSH -0x1
006DF478  6A FF                     PUSH -0x1
006DF47A  8B CE                     MOV ECX,ESI
006DF47C  E8 EF F0 FF FF            CALL 0x006de570
006DF481  85 C0                     TEST EAX,EAX
006DF483  74 7C                     JZ 0x006df501
006DF485  9B                        WAIT
006DF486  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
006DF48D  B8 50 00 00 00            MOV EAX,0x50
006DF492  E8 A9 E5 04 00            CALL 0x0072da40
006DF497  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF49A  8B D4                     MOV EDX,ESP
006DF49C  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF4A2  9B                        WAIT
006DF4A3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF4AA  B9 14 00 00 00            MOV ECX,0x14
006DF4AF  33 C0                     XOR EAX,EAX
006DF4B1  8B FA                     MOV EDI,EDX
006DF4B3  F3 AB                     STOSD.REP ES:EDI
006DF4B5  B8 FE FF FF FF            MOV EAX,0xfffffffe
006DF4BA  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006DF4BE  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006DF4C2  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF4C8  8B 88 0D 04 00 00         MOV ECX,dword ptr [EAX + 0x40d]
006DF4CE  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006DF4D1  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF4D8  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF4DF  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF4E6  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF4ED  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006DF4F3  89 02                     MOV dword ptr [EDX],EAX
006DF4F5  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF4FB  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df501:
006DF501  6A 00                     PUSH 0x0
006DF503  6A 00                     PUSH 0x0
006DF505  6A 00                     PUSH 0x0
006DF507  6A 00                     PUSH 0x0
006DF509  6A FE                     PUSH -0x2
006DF50B  6A FF                     PUSH -0x1
006DF50D  8B CE                     MOV ECX,ESI
006DF50F  E8 5C F0 FF FF            CALL 0x006de570
006DF514  85 C0                     TEST EAX,EAX
006DF516  0F 84 DC 00 00 00         JZ 0x006df5f8
006DF51C  9B                        WAIT
006DF51D  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
006DF524  B8 50 00 00 00            MOV EAX,0x50
006DF529  E8 12 E5 04 00            CALL 0x0072da40
006DF52E  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF531  8B D4                     MOV EDX,ESP
006DF533  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF539  9B                        WAIT
006DF53A  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF541  B9 14 00 00 00            MOV ECX,0x14
006DF546  33 C0                     XOR EAX,EAX
006DF548  8B FA                     MOV EDI,EDX
006DF54A  F3 AB                     STOSD.REP ES:EDI
006DF54C  66 C7 42 04 FE FF         MOV word ptr [EDX + 0x4],0xfffe
006DF552  BB FC FF FF FF            MOV EBX,0xfffffffc
006DF557  66 89 5A 06               MOV word ptr [EDX + 0x6],BX
006DF55B  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF561  8B 88 41 04 00 00         MOV ECX,dword ptr [EAX + 0x441]
006DF567  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006DF56A  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF571  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF578  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF57F  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF586  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006DF58C  89 02                     MOV dword ptr [EDX],EAX
006DF58E  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF594  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006DF59A  EB 61                     JMP 0x006df5fd
LAB_006df5f8:
006DF5F8  BB FC FF FF FF            MOV EBX,0xfffffffc
LAB_006df5fd:
006DF5FD  6A 00                     PUSH 0x0
006DF5FF  6A 00                     PUSH 0x0
006DF601  6A 00                     PUSH 0x0
006DF603  6A 00                     PUSH 0x0
006DF605  6A FF                     PUSH -0x1
006DF607  6A FE                     PUSH -0x2
006DF609  8B CE                     MOV ECX,ESI
006DF60B  E8 60 EF FF FF            CALL 0x006de570
006DF610  85 C0                     TEST EAX,EAX
006DF612  74 79                     JZ 0x006df68d
006DF614  9B                        WAIT
006DF615  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
006DF61C  B8 50 00 00 00            MOV EAX,0x50
006DF621  E8 1A E4 04 00            CALL 0x0072da40
006DF626  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF629  8B D4                     MOV EDX,ESP
006DF62B  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF631  9B                        WAIT
006DF632  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF639  B9 14 00 00 00            MOV ECX,0x14
006DF63E  33 C0                     XOR EAX,EAX
006DF640  8B FA                     MOV EDI,EDX
006DF642  F3 AB                     STOSD.REP ES:EDI
006DF644  66 89 5A 04               MOV word ptr [EDX + 0x4],BX
006DF648  66 C7 42 06 FE FF         MOV word ptr [EDX + 0x6],0xfffe
006DF64E  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF654  8B 88 3D 04 00 00         MOV ECX,dword ptr [EAX + 0x43d]
006DF65A  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006DF65D  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF664  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF66B  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF672  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF679  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006DF67F  89 02                     MOV dword ptr [EDX],EAX
006DF681  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF687  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df68d:
006DF68D  6A 00                     PUSH 0x0
006DF68F  6A 00                     PUSH 0x0
006DF691  6A 00                     PUSH 0x0
006DF693  6A 00                     PUSH 0x0
006DF695  6A FE                     PUSH -0x2
006DF697  6A FE                     PUSH -0x2
006DF699  8B CE                     MOV ECX,ESI
006DF69B  E8 D0 EE FF FF            CALL 0x006de570
006DF6A0  85 C0                     TEST EAX,EAX
006DF6A2  0F 84 D5 00 00 00         JZ 0x006df77d
006DF6A8  9B                        WAIT
006DF6A9  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
006DF6B0  B8 50 00 00 00            MOV EAX,0x50
006DF6B5  E8 86 E3 04 00            CALL 0x0072da40
006DF6BA  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF6BD  8B D4                     MOV EDX,ESP
006DF6BF  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF6C5  9B                        WAIT
006DF6C6  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF6CD  B9 14 00 00 00            MOV ECX,0x14
006DF6D2  33 C0                     XOR EAX,EAX
006DF6D4  8B FA                     MOV EDI,EDX
006DF6D6  F3 AB                     STOSD.REP ES:EDI
006DF6D8  66 89 5A 04               MOV word ptr [EDX + 0x4],BX
006DF6DC  66 89 5A 06               MOV word ptr [EDX + 0x6],BX
006DF6E0  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF6E6  8B 88 2D 04 00 00         MOV ECX,dword ptr [EAX + 0x42d]
006DF6EC  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006DF6EF  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF6F6  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF6FD  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF704  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF70B  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006DF711  89 02                     MOV dword ptr [EDX],EAX
006DF713  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF719  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006DF71F  EB 5C                     JMP 0x006df77d
LAB_006df77d:
006DF77D  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
006DF783  0F BF 02                  MOVSX EAX,word ptr [EDX]
006DF786  99                        CDQ
006DF787  2B C2                     SUB EAX,EDX
006DF789  8B D8                     MOV EBX,EAX
006DF78B  D1 FB                     SAR EBX,0x1
006DF78D  8D 43 FF                  LEA EAX,[EBX + -0x1]
006DF790  39 85 40 FF FF FF         CMP dword ptr [EBP + 0xffffff40],EAX
006DF796  0F 8C 14 03 00 00         JL 0x006dfab0
006DF79C  6A 00                     PUSH 0x0
006DF79E  6A 00                     PUSH 0x0
006DF7A0  6A 00                     PUSH 0x0
006DF7A2  6A 00                     PUSH 0x0
006DF7A4  6A FF                     PUSH -0x1
006DF7A6  53                        PUSH EBX
006DF7A7  8B CE                     MOV ECX,ESI
006DF7A9  E8 C2 ED FF FF            CALL 0x006de570
006DF7AE  85 C0                     TEST EAX,EAX
006DF7B0  74 7C                     JZ 0x006df82e
006DF7B2  9B                        WAIT
006DF7B3  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
006DF7BA  B8 50 00 00 00            MOV EAX,0x50
006DF7BF  E8 7C E2 04 00            CALL 0x0072da40
006DF7C4  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF7C7  8B D4                     MOV EDX,ESP
006DF7C9  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF7CF  9B                        WAIT
006DF7D0  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF7D7  B9 14 00 00 00            MOV ECX,0x14
006DF7DC  33 C0                     XOR EAX,EAX
006DF7DE  8B FA                     MOV EDI,EDX
006DF7E0  F3 AB                     STOSD.REP ES:EDI
006DF7E2  8D 0C 1B                  LEA ECX,[EBX + EBX*0x1]
006DF7E5  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006DF7E9  66 C7 42 06 FE FF         MOV word ptr [EDX + 0x6],0xfffe
006DF7EF  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DF7F5  8B 88 19 04 00 00         MOV ECX,dword ptr [EAX + 0x419]
006DF7FB  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006DF7FE  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF805  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF80C  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF813  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF81A  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006DF820  89 02                     MOV dword ptr [EDX],EAX
006DF822  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF828  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df82e:
006DF82E  6A 00                     PUSH 0x0
006DF830  6A 00                     PUSH 0x0
006DF832  6A 00                     PUSH 0x0
006DF834  6A 00                     PUSH 0x0
006DF836  6A FE                     PUSH -0x2
006DF838  53                        PUSH EBX
006DF839  8B CE                     MOV ECX,ESI
006DF83B  E8 30 ED FF FF            CALL 0x006de570
006DF840  85 C0                     TEST EAX,EAX
006DF842  0F 84 DA 00 00 00         JZ 0x006df922
006DF848  9B                        WAIT
006DF849  C7 45 FC 07 00 00 00      MOV dword ptr [EBP + -0x4],0x7
006DF850  B8 50 00 00 00            MOV EAX,0x50
006DF855  E8 E6 E1 04 00            CALL 0x0072da40
006DF85A  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF85D  8B D4                     MOV EDX,ESP
006DF85F  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF865  9B                        WAIT
006DF866  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF86D  B9 14 00 00 00            MOV ECX,0x14
006DF872  33 C0                     XOR EAX,EAX
006DF874  8B FA                     MOV EDI,EDX
006DF876  F3 AB                     STOSD.REP ES:EDI
006DF878  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006DF87B  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006DF87F  66 C7 42 06 FC FF         MOV word ptr [EDX + 0x6],0xfffc
006DF885  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DF88B  8B 81 41 04 00 00         MOV EAX,dword ptr [ECX + 0x441]
006DF891  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DF894  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF89B  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF8A2  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF8A9  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF8B0  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DF8B6  89 0A                     MOV dword ptr [EDX],ECX
006DF8B8  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF8BE  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006DF8C4  EB 5C                     JMP 0x006df922
LAB_006df922:
006DF922  8D 43 01                  LEA EAX,[EBX + 0x1]
006DF925  6A 00                     PUSH 0x0
006DF927  6A 00                     PUSH 0x0
006DF929  6A 00                     PUSH 0x0
006DF92B  6A 00                     PUSH 0x0
006DF92D  6A FF                     PUSH -0x1
006DF92F  50                        PUSH EAX
006DF930  8B CE                     MOV ECX,ESI
006DF932  E8 39 EC FF FF            CALL 0x006de570
006DF937  85 C0                     TEST EAX,EAX
006DF939  74 7D                     JZ 0x006df9b8
006DF93B  9B                        WAIT
006DF93C  C7 45 FC 08 00 00 00      MOV dword ptr [EBP + -0x4],0x8
006DF943  B8 50 00 00 00            MOV EAX,0x50
006DF948  E8 F3 E0 04 00            CALL 0x0072da40
006DF94D  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF950  8B D4                     MOV EDX,ESP
006DF952  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF958  9B                        WAIT
006DF959  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF960  B9 14 00 00 00            MOV ECX,0x14
006DF965  33 C0                     XOR EAX,EAX
006DF967  8B FA                     MOV EDI,EDX
006DF969  F3 AB                     STOSD.REP ES:EDI
006DF96B  8D 44 1B 02               LEA EAX,[EBX + EBX*0x1 + 0x2]
006DF96F  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006DF973  66 C7 42 06 FE FF         MOV word ptr [EDX + 0x6],0xfffe
006DF979  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DF97F  8B 81 45 04 00 00         MOV EAX,dword ptr [ECX + 0x445]
006DF985  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DF988  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DF98F  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DF996  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DF99D  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DF9A4  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DF9AA  89 0A                     MOV dword ptr [EDX],ECX
006DF9AC  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DF9B2  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006df9b8:
006DF9B8  6A 00                     PUSH 0x0
006DF9BA  6A 00                     PUSH 0x0
006DF9BC  6A 00                     PUSH 0x0
006DF9BE  6A 00                     PUSH 0x0
006DF9C0  6A FE                     PUSH -0x2
006DF9C2  8D 43 01                  LEA EAX,[EBX + 0x1]
006DF9C5  50                        PUSH EAX
006DF9C6  8B CE                     MOV ECX,ESI
006DF9C8  E8 A3 EB FF FF            CALL 0x006de570
006DF9CD  85 C0                     TEST EAX,EAX
006DF9CF  0F 84 DB 00 00 00         JZ 0x006dfab0
006DF9D5  9B                        WAIT
006DF9D6  C7 45 FC 09 00 00 00      MOV dword ptr [EBP + -0x4],0x9
006DF9DD  B8 50 00 00 00            MOV EAX,0x50
006DF9E2  E8 59 E0 04 00            CALL 0x0072da40
006DF9E7  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DF9EA  8B D4                     MOV EDX,ESP
006DF9EC  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DF9F2  9B                        WAIT
006DF9F3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DF9FA  B9 14 00 00 00            MOV ECX,0x14
006DF9FF  33 C0                     XOR EAX,EAX
006DFA01  8B FA                     MOV EDI,EDX
006DFA03  F3 AB                     STOSD.REP ES:EDI
006DFA05  8D 44 1B 02               LEA EAX,[EBX + EBX*0x1 + 0x2]
006DFA09  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006DFA0D  66 C7 42 06 FC FF         MOV word ptr [EDX + 0x6],0xfffc
006DFA13  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DFA19  8B 81 39 04 00 00         MOV EAX,dword ptr [ECX + 0x439]
006DFA1F  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DFA22  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DFA29  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DFA30  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DFA37  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DFA3E  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DFA44  89 0A                     MOV dword ptr [EDX],ECX
006DFA46  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DFA4C  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006DFA52  EB 5C                     JMP 0x006dfab0
LAB_006dfab0:
006DFAB0  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DFAB6  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
006DFABA  99                        CDQ
006DFABB  2B C2                     SUB EAX,EDX
006DFABD  8B D8                     MOV EBX,EAX
006DFABF  D1 FB                     SAR EBX,0x1
006DFAC1  8D 4B FF                  LEA ECX,[EBX + -0x1]
006DFAC4  39 8D 44 FF FF FF         CMP dword ptr [EBP + 0xffffff44],ECX
006DFACA  0F 8C 48 08 00 00         JL 0x006e0318
006DFAD0  8B BD 64 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff64]
LAB_006dfad6:
006DFAD6  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
006DFAD9  3B BD 40 FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff40]
006DFADF  0F 8F 9E 01 00 00         JG 0x006dfc83
006DFAE5  6A 00                     PUSH 0x0
006DFAE7  6A 00                     PUSH 0x0
006DFAE9  6A 00                     PUSH 0x0
006DFAEB  6A 00                     PUSH 0x0
006DFAED  53                        PUSH EBX
006DFAEE  57                        PUSH EDI
006DFAEF  8B CE                     MOV ECX,ESI
006DFAF1  E8 7A EA FF FF            CALL 0x006de570
006DFAF6  85 C0                     TEST EAX,EAX
006DFAF8  0F 84 83 00 00 00         JZ 0x006dfb81
006DFAFE  9B                        WAIT
006DFAFF  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
006DFB06  B8 50 00 00 00            MOV EAX,0x50
006DFB0B  E8 30 DF 04 00            CALL 0x0072da40
006DFB10  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DFB13  8B D4                     MOV EDX,ESP
006DFB15  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DFB1B  9B                        WAIT
006DFB1C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DFB23  B9 14 00 00 00            MOV ECX,0x14
006DFB28  33 C0                     XOR EAX,EAX
006DFB2A  8B FA                     MOV EDI,EDX
006DFB2C  F3 AB                     STOSD.REP ES:EDI
006DFB2E  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006DFB31  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
006DFB34  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006DFB38  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006DFB3B  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006DFB3F  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DFB45  8B 81 29 04 00 00         MOV EAX,dword ptr [ECX + 0x429]
006DFB4B  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DFB4E  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DFB55  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DFB5C  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DFB63  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DFB6A  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DFB70  89 0A                     MOV dword ptr [EDX],ECX
006DFB72  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DFB78  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006DFB7E  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
LAB_006dfb81:
006DFB81  6A 00                     PUSH 0x0
006DFB83  6A 00                     PUSH 0x0
006DFB85  6A 00                     PUSH 0x0
006DFB87  6A 00                     PUSH 0x0
006DFB89  8D 43 01                  LEA EAX,[EBX + 0x1]
006DFB8C  50                        PUSH EAX
006DFB8D  57                        PUSH EDI
006DFB8E  8B CE                     MOV ECX,ESI
006DFB90  E8 DB E9 FF FF            CALL 0x006de570
006DFB95  85 C0                     TEST EAX,EAX
006DFB97  0F 84 84 00 00 00         JZ 0x006dfc21
006DFB9D  9B                        WAIT
006DFB9E  C7 45 FC 0B 00 00 00      MOV dword ptr [EBP + -0x4],0xb
006DFBA5  B8 50 00 00 00            MOV EAX,0x50
006DFBAA  E8 91 DE 04 00            CALL 0x0072da40
006DFBAF  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DFBB2  8B D4                     MOV EDX,ESP
006DFBB4  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DFBBA  9B                        WAIT
006DFBBB  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DFBC2  B9 14 00 00 00            MOV ECX,0x14
006DFBC7  33 C0                     XOR EAX,EAX
006DFBC9  8B FA                     MOV EDI,EDX
006DFBCB  F3 AB                     STOSD.REP ES:EDI
006DFBCD  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006DFBD0  8D 04 09                  LEA EAX,[ECX + ECX*0x1]
006DFBD3  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006DFBD7  8D 4C 1B 02               LEA ECX,[EBX + EBX*0x1 + 0x2]
006DFBDB  66 89 4A 06               MOV word ptr [EDX + 0x6],CX
006DFBDF  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DFBE5  8B 88 49 04 00 00         MOV ECX,dword ptr [EAX + 0x449]
006DFBEB  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006DFBEE  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DFBF5  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DFBFC  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DFC03  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DFC0A  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006DFC10  89 02                     MOV dword ptr [EDX],EAX
006DFC12  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DFC18  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006DFC1E  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
LAB_006dfc21:
006DFC21  47                        INC EDI
006DFC22  E9 AF FE FF FF            JMP 0x006dfad6
LAB_006dfc83:
006DFC83  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006DFC89  85 C0                     TEST EAX,EAX
006DFC8B  0F 85 14 03 00 00         JNZ 0x006dffa5
006DFC91  6A 00                     PUSH 0x0
006DFC93  6A 00                     PUSH 0x0
006DFC95  6A 00                     PUSH 0x0
006DFC97  6A 00                     PUSH 0x0
006DFC99  53                        PUSH EBX
006DFC9A  6A FF                     PUSH -0x1
006DFC9C  8B CE                     MOV ECX,ESI
006DFC9E  E8 CD E8 FF FF            CALL 0x006de570
006DFCA3  85 C0                     TEST EAX,EAX
006DFCA5  74 7C                     JZ 0x006dfd23
006DFCA7  9B                        WAIT
006DFCA8  C7 45 FC 0C 00 00 00      MOV dword ptr [EBP + -0x4],0xc
006DFCAF  B8 50 00 00 00            MOV EAX,0x50
006DFCB4  E8 87 DD 04 00            CALL 0x0072da40
006DFCB9  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DFCBC  8B D4                     MOV EDX,ESP
006DFCBE  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DFCC4  9B                        WAIT
006DFCC5  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DFCCC  B9 14 00 00 00            MOV ECX,0x14
006DFCD1  33 C0                     XOR EAX,EAX
006DFCD3  8B FA                     MOV EDI,EDX
006DFCD5  F3 AB                     STOSD.REP ES:EDI
006DFCD7  66 C7 42 04 FE FF         MOV word ptr [EDX + 0x4],0xfffe
006DFCDD  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006DFCE0  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006DFCE4  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DFCEA  8B 81 11 04 00 00         MOV EAX,dword ptr [ECX + 0x411]
006DFCF0  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DFCF3  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DFCFA  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DFD01  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DFD08  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DFD0F  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DFD15  89 0A                     MOV dword ptr [EDX],ECX
006DFD17  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DFD1D  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006dfd23:
006DFD23  8D 43 01                  LEA EAX,[EBX + 0x1]
006DFD26  6A 00                     PUSH 0x0
006DFD28  6A 00                     PUSH 0x0
006DFD2A  6A 00                     PUSH 0x0
006DFD2C  6A 00                     PUSH 0x0
006DFD2E  50                        PUSH EAX
006DFD2F  6A FF                     PUSH -0x1
006DFD31  8B CE                     MOV ECX,ESI
006DFD33  E8 38 E8 FF FF            CALL 0x006de570
006DFD38  85 C0                     TEST EAX,EAX
006DFD3A  0F 84 DB 00 00 00         JZ 0x006dfe1b
006DFD40  9B                        WAIT
006DFD41  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
006DFD48  B8 50 00 00 00            MOV EAX,0x50
006DFD4D  E8 EE DC 04 00            CALL 0x0072da40
006DFD52  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DFD55  8B D4                     MOV EDX,ESP
006DFD57  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DFD5D  9B                        WAIT
006DFD5E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DFD65  B9 14 00 00 00            MOV ECX,0x14
006DFD6A  33 C0                     XOR EAX,EAX
006DFD6C  8B FA                     MOV EDI,EDX
006DFD6E  F3 AB                     STOSD.REP ES:EDI
006DFD70  66 C7 42 04 FE FF         MOV word ptr [EDX + 0x4],0xfffe
006DFD76  8D 44 1B 02               LEA EAX,[EBX + EBX*0x1 + 0x2]
006DFD7A  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006DFD7E  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DFD84  8B 81 49 04 00 00         MOV EAX,dword ptr [ECX + 0x449]
006DFD8A  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DFD8D  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DFD94  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DFD9B  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DFDA2  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DFDA9  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DFDAF  89 0A                     MOV dword ptr [EDX],ECX
006DFDB1  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DFDB7  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006DFDBD  EB 5C                     JMP 0x006dfe1b
LAB_006dfe1b:
006DFE1B  6A 00                     PUSH 0x0
006DFE1D  6A 00                     PUSH 0x0
006DFE1F  6A 00                     PUSH 0x0
006DFE21  6A 00                     PUSH 0x0
006DFE23  53                        PUSH EBX
006DFE24  6A FE                     PUSH -0x2
006DFE26  8B CE                     MOV ECX,ESI
006DFE28  E8 43 E7 FF FF            CALL 0x006de570
006DFE2D  85 C0                     TEST EAX,EAX
006DFE2F  74 7C                     JZ 0x006dfead
006DFE31  9B                        WAIT
006DFE32  C7 45 FC 0E 00 00 00      MOV dword ptr [EBP + -0x4],0xe
006DFE39  B8 50 00 00 00            MOV EAX,0x50
006DFE3E  E8 FD DB 04 00            CALL 0x0072da40
006DFE43  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DFE46  8B D4                     MOV EDX,ESP
006DFE48  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DFE4E  9B                        WAIT
006DFE4F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DFE56  B9 14 00 00 00            MOV ECX,0x14
006DFE5B  33 C0                     XOR EAX,EAX
006DFE5D  8B FA                     MOV EDI,EDX
006DFE5F  F3 AB                     STOSD.REP ES:EDI
006DFE61  66 C7 42 04 FC FF         MOV word ptr [EDX + 0x4],0xfffc
006DFE67  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006DFE6A  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006DFE6E  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DFE74  8B 81 3D 04 00 00         MOV EAX,dword ptr [ECX + 0x43d]
006DFE7A  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DFE7D  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DFE84  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DFE8B  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DFE92  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DFE99  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DFE9F  89 0A                     MOV dword ptr [EDX],ECX
006DFEA1  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DFEA7  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006dfead:
006DFEAD  6A 00                     PUSH 0x0
006DFEAF  6A 00                     PUSH 0x0
006DFEB1  6A 00                     PUSH 0x0
006DFEB3  6A 00                     PUSH 0x0
006DFEB5  8D 43 01                  LEA EAX,[EBX + 0x1]
006DFEB8  50                        PUSH EAX
006DFEB9  6A FE                     PUSH -0x2
006DFEBB  8B CE                     MOV ECX,ESI
006DFEBD  E8 AE E6 FF FF            CALL 0x006de570
006DFEC2  85 C0                     TEST EAX,EAX
006DFEC4  0F 84 DB 00 00 00         JZ 0x006dffa5
006DFECA  9B                        WAIT
006DFECB  C7 45 FC 0F 00 00 00      MOV dword ptr [EBP + -0x4],0xf
006DFED2  B8 50 00 00 00            MOV EAX,0x50
006DFED7  E8 64 DB 04 00            CALL 0x0072da40
006DFEDC  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DFEDF  8B D4                     MOV EDX,ESP
006DFEE1  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006DFEE7  9B                        WAIT
006DFEE8  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DFEEF  B9 14 00 00 00            MOV ECX,0x14
006DFEF4  33 C0                     XOR EAX,EAX
006DFEF6  8B FA                     MOV EDI,EDX
006DFEF8  F3 AB                     STOSD.REP ES:EDI
006DFEFA  66 C7 42 04 FC FF         MOV word ptr [EDX + 0x4],0xfffc
006DFF00  8D 44 1B 02               LEA EAX,[EBX + EBX*0x1 + 0x2]
006DFF04  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006DFF08  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006DFF0E  8B 81 31 04 00 00         MOV EAX,dword ptr [ECX + 0x431]
006DFF14  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006DFF17  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006DFF1E  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006DFF25  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006DFF2C  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006DFF33  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006DFF39  89 0A                     MOV dword ptr [EDX],ECX
006DFF3B  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006DFF41  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006DFF47  EB 5C                     JMP 0x006dffa5
LAB_006dffa5:
006DFFA5  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DFFAB  0F BF 00                  MOVSX EAX,word ptr [EAX]
006DFFAE  99                        CDQ
006DFFAF  2B C2                     SUB EAX,EDX
006DFFB1  D1 F8                     SAR EAX,0x1
006DFFB3  89 85 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EAX
006DFFB9  48                        DEC EAX
006DFFBA  39 85 40 FF FF FF         CMP dword ptr [EBP + 0xffffff40],EAX
006DFFC0  0F 8C 52 03 00 00         JL 0x006e0318
006DFFC6  6A 00                     PUSH 0x0
006DFFC8  6A 00                     PUSH 0x0
006DFFCA  6A 00                     PUSH 0x0
006DFFCC  6A 00                     PUSH 0x0
006DFFCE  53                        PUSH EBX
006DFFCF  8B 8D 00 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff00]
006DFFD5  51                        PUSH ECX
006DFFD6  8B CE                     MOV ECX,ESI
006DFFD8  E8 93 E5 FF FF            CALL 0x006de570
006DFFDD  85 C0                     TEST EAX,EAX
006DFFDF  0F 84 83 00 00 00         JZ 0x006e0068
006DFFE5  9B                        WAIT
006DFFE6  C7 45 FC 10 00 00 00      MOV dword ptr [EBP + -0x4],0x10
006DFFED  B8 50 00 00 00            MOV EAX,0x50
006DFFF2  E8 49 DA 04 00            CALL 0x0072da40
006DFFF7  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006DFFFA  8B D4                     MOV EDX,ESP
006DFFFC  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E0002  9B                        WAIT
006E0003  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E000A  B9 14 00 00 00            MOV ECX,0x14
006E000F  33 C0                     XOR EAX,EAX
006E0011  8B FA                     MOV EDI,EDX
006E0013  F3 AB                     STOSD.REP ES:EDI
006E0015  8B 85 00 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff00]
006E001B  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
006E001E  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006E0022  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006E0025  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006E0029  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006E002F  8B 81 15 04 00 00         MOV EAX,dword ptr [ECX + 0x415]
006E0035  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006E0038  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006E003F  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006E0046  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006E004D  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006E0054  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006E005A  89 0A                     MOV dword ptr [EDX],ECX
006E005C  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E0062  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006e0068:
006E0068  8D 43 01                  LEA EAX,[EBX + 0x1]
006E006B  6A 00                     PUSH 0x0
006E006D  6A 00                     PUSH 0x0
006E006F  6A 00                     PUSH 0x0
006E0071  6A 00                     PUSH 0x0
006E0073  50                        PUSH EAX
006E0074  8B 85 00 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff00]
006E007A  50                        PUSH EAX
006E007B  8B CE                     MOV ECX,ESI
006E007D  E8 EE E4 FF FF            CALL 0x006de570
006E0082  85 C0                     TEST EAX,EAX
006E0084  0F 84 E2 00 00 00         JZ 0x006e016c
006E008A  9B                        WAIT
006E008B  C7 45 FC 11 00 00 00      MOV dword ptr [EBP + -0x4],0x11
006E0092  B8 50 00 00 00            MOV EAX,0x50
006E0097  E8 A4 D9 04 00            CALL 0x0072da40
006E009C  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E009F  8B D4                     MOV EDX,ESP
006E00A1  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E00A7  9B                        WAIT
006E00A8  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E00AF  B9 14 00 00 00            MOV ECX,0x14
006E00B4  33 C0                     XOR EAX,EAX
006E00B6  8B FA                     MOV EDI,EDX
006E00B8  F3 AB                     STOSD.REP ES:EDI
006E00BA  8B 8D 00 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff00]
006E00C0  8D 04 09                  LEA EAX,[ECX + ECX*0x1]
006E00C3  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006E00C7  8D 4C 1B 02               LEA ECX,[EBX + EBX*0x1 + 0x2]
006E00CB  66 89 4A 06               MOV word ptr [EDX + 0x6],CX
006E00CF  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006E00D5  8B 88 49 04 00 00         MOV ECX,dword ptr [EAX + 0x449]
006E00DB  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006E00DE  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006E00E5  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006E00EC  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006E00F3  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006E00FA  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006E0100  89 02                     MOV dword ptr [EDX],EAX
006E0102  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E0108  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006E010E  EB 5C                     JMP 0x006e016c
LAB_006e016c:
006E016C  8B 95 00 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff00]
006E0172  8D 42 01                  LEA EAX,[EDX + 0x1]
006E0175  6A 00                     PUSH 0x0
006E0177  6A 00                     PUSH 0x0
006E0179  6A 00                     PUSH 0x0
006E017B  6A 00                     PUSH 0x0
006E017D  53                        PUSH EBX
006E017E  50                        PUSH EAX
006E017F  8B CE                     MOV ECX,ESI
006E0181  E8 EA E3 FF FF            CALL 0x006de570
006E0186  85 C0                     TEST EAX,EAX
006E0188  0F 84 84 00 00 00         JZ 0x006e0212
006E018E  9B                        WAIT
006E018F  C7 45 FC 12 00 00 00      MOV dword ptr [EBP + -0x4],0x12
006E0196  B8 50 00 00 00            MOV EAX,0x50
006E019B  E8 A0 D8 04 00            CALL 0x0072da40
006E01A0  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E01A3  8B D4                     MOV EDX,ESP
006E01A5  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E01AB  9B                        WAIT
006E01AC  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E01B3  B9 14 00 00 00            MOV ECX,0x14
006E01B8  33 C0                     XOR EAX,EAX
006E01BA  8B FA                     MOV EDI,EDX
006E01BC  F3 AB                     STOSD.REP ES:EDI
006E01BE  8B 85 00 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff00]
006E01C4  8D 4C 00 02               LEA ECX,[EAX + EAX*0x1 + 0x2]
006E01C8  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006E01CC  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006E01CF  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006E01D3  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006E01D9  8B 81 45 04 00 00         MOV EAX,dword ptr [ECX + 0x445]
006E01DF  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006E01E2  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006E01E9  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006E01F0  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006E01F7  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006E01FE  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006E0204  89 0A                     MOV dword ptr [EDX],ECX
006E0206  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E020C  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006e0212:
006E0212  6A 00                     PUSH 0x0
006E0214  6A 00                     PUSH 0x0
006E0216  6A 00                     PUSH 0x0
006E0218  6A 00                     PUSH 0x0
006E021A  8D 43 01                  LEA EAX,[EBX + 0x1]
006E021D  50                        PUSH EAX
006E021E  8B 85 00 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff00]
006E0224  40                        INC EAX
006E0225  50                        PUSH EAX
006E0226  8B CE                     MOV ECX,ESI
006E0228  E8 43 E3 FF FF            CALL 0x006de570
006E022D  85 C0                     TEST EAX,EAX
006E022F  0F 84 E3 00 00 00         JZ 0x006e0318
006E0235  9B                        WAIT
006E0236  C7 45 FC 13 00 00 00      MOV dword ptr [EBP + -0x4],0x13
006E023D  B8 50 00 00 00            MOV EAX,0x50
006E0242  E8 F9 D7 04 00            CALL 0x0072da40
006E0247  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E024A  8B D4                     MOV EDX,ESP
006E024C  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E0252  9B                        WAIT
006E0253  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E025A  B9 14 00 00 00            MOV ECX,0x14
006E025F  33 C0                     XOR EAX,EAX
006E0261  8B FA                     MOV EDI,EDX
006E0263  F3 AB                     STOSD.REP ES:EDI
006E0265  8B 8D 00 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff00]
006E026B  8D 44 09 02               LEA EAX,[ECX + ECX*0x1 + 0x2]
006E026F  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006E0273  8D 4C 1B 02               LEA ECX,[EBX + EBX*0x1 + 0x2]
006E0277  66 89 4A 06               MOV word ptr [EDX + 0x6],CX
006E027B  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006E0281  8B 88 35 04 00 00         MOV ECX,dword ptr [EAX + 0x435]
006E0287  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006E028A  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006E0291  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006E0298  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006E029F  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006E02A6  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006E02AC  89 02                     MOV dword ptr [EDX],EAX
006E02AE  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E02B4  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006E02BA  EB 5C                     JMP 0x006e0318
LAB_006e0318:
006E0318  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006E031E  85 C0                     TEST EAX,EAX
006E0320  0F 85 98 01 00 00         JNZ 0x006e04be
006E0326  8B 9D 68 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff68]
LAB_006e032c:
006E032C  3B 9D 44 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff44]
006E0332  0F 8F 86 01 00 00         JG 0x006e04be
006E0338  6A 00                     PUSH 0x0
006E033A  6A 00                     PUSH 0x0
006E033C  6A 00                     PUSH 0x0
006E033E  6A 00                     PUSH 0x0
006E0340  53                        PUSH EBX
006E0341  6A FF                     PUSH -0x1
006E0343  8B CE                     MOV ECX,ESI
006E0345  E8 26 E2 FF FF            CALL 0x006de570
006E034A  85 C0                     TEST EAX,EAX
006E034C  74 7C                     JZ 0x006e03ca
006E034E  9B                        WAIT
006E034F  C7 45 FC 14 00 00 00      MOV dword ptr [EBP + -0x4],0x14
006E0356  B8 50 00 00 00            MOV EAX,0x50
006E035B  E8 E0 D6 04 00            CALL 0x0072da40
006E0360  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E0363  8B D4                     MOV EDX,ESP
006E0365  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E036B  9B                        WAIT
006E036C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E0373  B9 14 00 00 00            MOV ECX,0x14
006E0378  33 C0                     XOR EAX,EAX
006E037A  8B FA                     MOV EDI,EDX
006E037C  F3 AB                     STOSD.REP ES:EDI
006E037E  66 C7 42 04 FE FF         MOV word ptr [EDX + 0x4],0xfffe
006E0384  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006E0387  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006E038B  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006E0391  8B 81 1D 04 00 00         MOV EAX,dword ptr [ECX + 0x41d]
006E0397  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006E039A  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006E03A1  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006E03A8  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006E03AF  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006E03B6  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006E03BC  89 0A                     MOV dword ptr [EDX],ECX
006E03BE  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E03C4  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006e03ca:
006E03CA  6A 00                     PUSH 0x0
006E03CC  6A 00                     PUSH 0x0
006E03CE  6A 00                     PUSH 0x0
006E03D0  6A 00                     PUSH 0x0
006E03D2  53                        PUSH EBX
006E03D3  6A FE                     PUSH -0x2
006E03D5  8B CE                     MOV ECX,ESI
006E03D7  E8 94 E1 FF FF            CALL 0x006de570
006E03DC  85 C0                     TEST EAX,EAX
006E03DE  74 7C                     JZ 0x006e045c
006E03E0  9B                        WAIT
006E03E1  C7 45 FC 15 00 00 00      MOV dword ptr [EBP + -0x4],0x15
006E03E8  B8 50 00 00 00            MOV EAX,0x50
006E03ED  E8 4E D6 04 00            CALL 0x0072da40
006E03F2  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E03F5  8B D4                     MOV EDX,ESP
006E03F7  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E03FD  9B                        WAIT
006E03FE  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E0405  B9 14 00 00 00            MOV ECX,0x14
006E040A  33 C0                     XOR EAX,EAX
006E040C  8B FA                     MOV EDI,EDX
006E040E  F3 AB                     STOSD.REP ES:EDI
006E0410  66 C7 42 04 FC FF         MOV word ptr [EDX + 0x4],0xfffc
006E0416  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006E0419  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006E041D  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006E0423  8B 81 3D 04 00 00         MOV EAX,dword ptr [ECX + 0x43d]
006E0429  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006E042C  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006E0433  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006E043A  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006E0441  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006E0448  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006E044E  89 0A                     MOV dword ptr [EDX],ECX
006E0450  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E0456  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
LAB_006e045c:
006E045C  43                        INC EBX
006E045D  E9 CA FE FF FF            JMP 0x006e032c
LAB_006e04be:
006E04BE  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006E04C4  0F BF 00                  MOVSX EAX,word ptr [EAX]
006E04C7  99                        CDQ
006E04C8  2B C2                     SUB EAX,EDX
006E04CA  8B F8                     MOV EDI,EAX
006E04CC  D1 FF                     SAR EDI,0x1
006E04CE  89 BD 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EDI
006E04D4  8D 4F FF                  LEA ECX,[EDI + -0x1]
006E04D7  39 8D 40 FF FF FF         CMP dword ptr [EBP + 0xffffff40],ECX
006E04DD  0F 8C BC 01 00 00         JL 0x006e069f
006E04E3  8B 9D 68 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff68]
LAB_006e04e9:
006E04E9  3B 9D 44 FF FF FF         CMP EBX,dword ptr [EBP + 0xffffff44]
006E04EF  0F 8F AA 01 00 00         JG 0x006e069f
006E04F5  6A 00                     PUSH 0x0
006E04F7  6A 00                     PUSH 0x0
006E04F9  6A 00                     PUSH 0x0
006E04FB  6A 00                     PUSH 0x0
006E04FD  53                        PUSH EBX
006E04FE  57                        PUSH EDI
006E04FF  8B CE                     MOV ECX,ESI
006E0501  E8 6A E0 FF FF            CALL 0x006de570
006E0506  85 C0                     TEST EAX,EAX
006E0508  0F 84 89 00 00 00         JZ 0x006e0597
006E050E  9B                        WAIT
006E050F  C7 45 FC 16 00 00 00      MOV dword ptr [EBP + -0x4],0x16
006E0516  B8 50 00 00 00            MOV EAX,0x50
006E051B  E8 20 D5 04 00            CALL 0x0072da40
006E0520  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E0523  8B D4                     MOV EDX,ESP
006E0525  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E052B  9B                        WAIT
006E052C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E0533  B9 14 00 00 00            MOV ECX,0x14
006E0538  33 C0                     XOR EAX,EAX
006E053A  8B FA                     MOV EDI,EDX
006E053C  F3 AB                     STOSD.REP ES:EDI
006E053E  8B 85 00 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff00]
006E0544  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
006E0547  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006E054B  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006E054E  66 89 42 06               MOV word ptr [EDX + 0x6],AX
006E0552  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
006E0558  8B 81 25 04 00 00         MOV EAX,dword ptr [ECX + 0x425]
006E055E  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
006E0561  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006E0568  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006E056F  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006E0576  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006E057D  8B 8E 40 01 00 00         MOV ECX,dword ptr [ESI + 0x140]
006E0583  89 0A                     MOV dword ptr [EDX],ECX
006E0585  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E058B  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006E0591  8B BD 00 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff00]
LAB_006e0597:
006E0597  6A 00                     PUSH 0x0
006E0599  6A 00                     PUSH 0x0
006E059B  6A 00                     PUSH 0x0
006E059D  6A 00                     PUSH 0x0
006E059F  53                        PUSH EBX
006E05A0  8D 47 01                  LEA EAX,[EDI + 0x1]
006E05A3  50                        PUSH EAX
006E05A4  8B CE                     MOV ECX,ESI
006E05A6  E8 C5 DF FF FF            CALL 0x006de570
006E05AB  85 C0                     TEST EAX,EAX
006E05AD  0F 84 8A 00 00 00         JZ 0x006e063d
006E05B3  9B                        WAIT
006E05B4  C7 45 FC 17 00 00 00      MOV dword ptr [EBP + -0x4],0x17
006E05BB  B8 50 00 00 00            MOV EAX,0x50
006E05C0  E8 7B D4 04 00            CALL 0x0072da40
006E05C5  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E05C8  8B D4                     MOV EDX,ESP
006E05CA  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E05D0  9B                        WAIT
006E05D1  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E05D8  B9 14 00 00 00            MOV ECX,0x14
006E05DD  33 C0                     XOR EAX,EAX
006E05DF  8B FA                     MOV EDI,EDX
006E05E1  F3 AB                     STOSD.REP ES:EDI
006E05E3  8B 8D 00 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff00]
006E05E9  8D 44 09 02               LEA EAX,[ECX + ECX*0x1 + 0x2]
006E05ED  66 89 42 04               MOV word ptr [EDX + 0x4],AX
006E05F1  8D 0C 1B                  LEA ECX,[EBX + EBX*0x1]
006E05F4  66 89 4A 06               MOV word ptr [EDX + 0x6],CX
006E05F8  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006E05FE  8B 88 45 04 00 00         MOV ECX,dword ptr [EAX + 0x445]
006E0604  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006E0607  C7 42 1C 04 00 00 00      MOV dword ptr [EDX + 0x1c],0x4
006E060E  C7 42 20 28 E7 7E 00      MOV dword ptr [EDX + 0x20],0x7ee728
006E0615  C7 42 24 02 00 00 00      MOV dword ptr [EDX + 0x24],0x2
006E061C  C7 42 28 F0 E6 7E 00      MOV dword ptr [EDX + 0x28],0x7ee6f0
006E0623  8B 86 40 01 00 00         MOV EAX,dword ptr [ESI + 0x140]
006E0629  89 02                     MOV dword ptr [EDX],EAX
006E062B  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E0631  FF 86 3C 01 00 00         INC dword ptr [ESI + 0x13c]
006E0637  8B BD 00 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff00]
LAB_006e063d:
006E063D  43                        INC EBX
006E063E  E9 A6 FE FF FF            JMP 0x006e04e9
LAB_006e069f:
006E069F  8B CE                     MOV ECX,ESI
006E06A1  E8 AA D6 FF FF            CALL 0x006ddd50
006E06A6  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006E06A9  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
006E06AF  8B 85 3C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3c]
006E06B5  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
006E06BB  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006E06BE  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006E06C1  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006E06C4  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006E06C7  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006E06CA  2B D0                     SUB EDX,EAX
006E06CC  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006E06CF  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006E06D2  2B C1                     SUB EAX,ECX
006E06D4  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006E06D7  8B 86 90 02 00 00         MOV EAX,dword ptr [ESI + 0x290]
006E06DD  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
006E06E4  8B 8E 8C 02 00 00         MOV ECX,dword ptr [ESI + 0x28c]
006E06EA  85 C9                     TEST ECX,ECX
006E06EC  0F 8E 0E 02 00 00         JLE 0x006e0900
006E06F2  8D 58 08                  LEA EBX,[EAX + 0x8]
006E06F5  89 9D FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],EBX
LAB_006e06fb:
006E06FB  8B 7B 1C                  MOV EDI,dword ptr [EBX + 0x1c]
006E06FE  85 FF                     TEST EDI,EDI
006E0700  0F 84 DE 01 00 00         JZ 0x006e08e4
006E0706  8B 0B                     MOV ECX,dword ptr [EBX]
006E0708  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
006E070E  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006E0711  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
006E0717  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006E071A  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006E0720  6A 00                     PUSH 0x0
006E0722  6A 00                     PUSH 0x0
006E0724  6A 00                     PUSH 0x0
006E0726  6A 00                     PUSH 0x0
006E0728  6A 00                     PUSH 0x0
006E072A  6A 00                     PUSH 0x0
006E072C  6A 00                     PUSH 0x0
006E072E  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
006E0734  51                        PUSH ECX
006E0735  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E0738  52                        PUSH EDX
006E0739  8B CE                     MOV ECX,ESI
006E073B  E8 90 1E 00 00            CALL 0x006e25d0
006E0740  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006E0743  C1 F8 10                  SAR EAX,0x10
006E0746  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E0749  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006E074C  C1 F8 10                  SAR EAX,0x10
006E074F  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006E0752  83 BE F0 02 00 00 64      CMP dword ptr [ESI + 0x2f0],0x64
006E0759  75 49                     JNZ 0x006e07a4
006E075B  0F BF 4B 14               MOVSX ECX,word ptr [EBX + 0x14]
006E075F  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E0762  2B C1                     SUB EAX,ECX
006E0764  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E0767  0F BF 53 16               MOVSX EDX,word ptr [EBX + 0x16]
006E076B  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006E076E  2B CA                     SUB ECX,EDX
006E0770  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006E0773  0F BF 57 0E               MOVSX EDX,word ptr [EDI + 0xe]
006E0777  03 D0                     ADD EDX,EAX
006E0779  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
006E077F  0F BF 47 10               MOVSX EAX,word ptr [EDI + 0x10]
006E0783  03 C1                     ADD EAX,ECX
006E0785  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006E078B  0F BF 4F 12               MOVSX ECX,word ptr [EDI + 0x12]
006E078F  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
006E0795  0F BF 57 14               MOVSX EDX,word ptr [EDI + 0x14]
006E0799  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
006E079F  E9 08 01 00 00            JMP 0x006e08ac
LAB_006e07a4:
006E07A4  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006E07A7  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E07AA  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006E07B0  8B D1                     MOV EDX,ECX
006E07B2  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006E07B9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E07BE  F7 EA                     IMUL EDX
006E07C0  C1 FA 05                  SAR EDX,0x5
006E07C3  8B C2                     MOV EAX,EDX
006E07C5  C1 E8 1F                  SHR EAX,0x1f
006E07C8  03 D0                     ADD EDX,EAX
006E07CA  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
006E07D0  8B 86 F4 02 00 00         MOV EAX,dword ptr [ESI + 0x2f4]
006E07D6  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006E07DC  0F AF D0                  IMUL EDX,EAX
006E07DF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E07E4  F7 EA                     IMUL EDX
006E07E6  C1 FA 05                  SAR EDX,0x5
006E07E9  8B C2                     MOV EAX,EDX
006E07EB  C1 E8 1F                  SHR EAX,0x1f
006E07EE  03 D0                     ADD EDX,EAX
006E07F0  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
006E07F6  0F BF 53 14               MOVSX EDX,word ptr [EBX + 0x14]
006E07FA  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006E0801  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E0806  F7 EA                     IMUL EDX
006E0808  C1 FA 05                  SAR EDX,0x5
006E080B  8B C2                     MOV EAX,EDX
006E080D  C1 E8 1F                  SHR EAX,0x1f
006E0810  03 D0                     ADD EDX,EAX
006E0812  01 55 B0                  ADD dword ptr [EBP + -0x50],EDX
006E0815  0F BF 53 16               MOVSX EDX,word ptr [EBX + 0x16]
006E0819  0F AF 96 F4 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f4]
006E0820  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E0825  F7 EA                     IMUL EDX
006E0827  C1 FA 05                  SAR EDX,0x5
006E082A  8B C2                     MOV EAX,EDX
006E082C  C1 E8 1F                  SHR EAX,0x1f
006E082F  03 D0                     ADD EDX,EAX
006E0831  01 55 A8                  ADD dword ptr [EBP + -0x58],EDX
006E0834  0F BF 5F 0E               MOVSX EBX,word ptr [EDI + 0xe]
006E0838  0F AF 9D 60 FF FF FF      IMUL EBX,dword ptr [EBP + 0xffffff60]
006E083F  8B C1                     MOV EAX,ECX
006E0841  99                        CDQ
006E0842  2B C2                     SUB EAX,EDX
006E0844  D1 F8                     SAR EAX,0x1
006E0846  03 C3                     ADD EAX,EBX
006E0848  99                        CDQ
006E0849  F7 F9                     IDIV ECX
006E084B  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
006E084E  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
006E0854  0F BF 5F 10               MOVSX EBX,word ptr [EDI + 0x10]
006E0858  0F AF 9D 38 FF FF FF      IMUL EBX,dword ptr [EBP + 0xffffff38]
006E085F  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006E0865  99                        CDQ
006E0866  2B C2                     SUB EAX,EDX
006E0868  D1 F8                     SAR EAX,0x1
006E086A  03 C3                     ADD EAX,EBX
006E086C  99                        CDQ
006E086D  8B 9D 7C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff7c]
006E0873  F7 FB                     IDIV EBX
006E0875  03 45 A8                  ADD EAX,dword ptr [EBP + -0x58]
006E0878  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006E087E  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
006E0882  0F AF 85 60 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff60]
006E0889  99                        CDQ
006E088A  F7 F9                     IDIV ECX
006E088C  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
006E0892  0F BF 47 14               MOVSX EAX,word ptr [EDI + 0x14]
006E0896  0F AF 85 38 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff38]
006E089D  99                        CDQ
006E089E  F7 FB                     IDIV EBX
006E08A0  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
006E08A6  8B 9D FC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffefc]
LAB_006e08ac:
006E08AC  8D 4D CC                  LEA ECX,[EBP + -0x34]
006E08AF  51                        PUSH ECX
006E08B0  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
006E08B6  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006E08B9  E8 A2 FB FC FF            CALL 0x006b0460
006E08BE  85 C0                     TEST EAX,EAX
006E08C0  74 22                     JZ 0x006e08e4
006E08C2  6A 01                     PUSH 0x1
006E08C4  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
006E08C7  52                        PUSH EDX
006E08C8  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006E08CB  50                        PUSH EAX
006E08CC  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006E08CF  51                        PUSH ECX
006E08D0  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006E08D3  52                        PUSH EDX
006E08D4  57                        PUSH EDI
006E08D5  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006E08D8  50                        PUSH EAX
006E08D9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006E08DC  51                        PUSH ECX
006E08DD  8B CE                     MOV ECX,ESI
006E08DF  E8 2C 84 02 00            CALL 0x00708d10
LAB_006e08e4:
006E08E4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E08E7  40                        INC EAX
006E08E8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006E08EB  83 C3 2C                  ADD EBX,0x2c
006E08EE  89 9D FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],EBX
006E08F4  3B 86 8C 02 00 00         CMP EAX,dword ptr [ESI + 0x28c]
006E08FA  0F 8C FB FD FF FF         JL 0x006e06fb
LAB_006e0900:
006E0900  8B 9E 94 02 00 00         MOV EBX,dword ptr [ESI + 0x294]
006E0906  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
006E090C  85 DB                     TEST EBX,EBX
006E090E  0F 84 FB 01 00 00         JZ 0x006e0b0f
LAB_006e0914:
006E0914  8B 7B 24                  MOV EDI,dword ptr [EBX + 0x24]
006E0917  85 FF                     TEST EDI,EDI
006E0919  0F 84 E0 01 00 00         JZ 0x006e0aff
006E091F  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006E0922  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
006E0928  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006E092B  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006E0931  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
006E0934  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
006E093A  6A 00                     PUSH 0x0
006E093C  6A 00                     PUSH 0x0
006E093E  6A 00                     PUSH 0x0
006E0940  6A 00                     PUSH 0x0
006E0942  6A 00                     PUSH 0x0
006E0944  6A 00                     PUSH 0x0
006E0946  6A 00                     PUSH 0x0
006E0948  8D 95 70 FF FF FF         LEA EDX,[EBP + 0xffffff70]
006E094E  52                        PUSH EDX
006E094F  8D 45 BC                  LEA EAX,[EBP + -0x44]
006E0952  50                        PUSH EAX
006E0953  8B CE                     MOV ECX,ESI
006E0955  E8 76 1C 00 00            CALL 0x006e25d0
006E095A  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006E095D  C1 F8 10                  SAR EAX,0x10
006E0960  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E0963  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006E0966  C1 F8 10                  SAR EAX,0x10
006E0969  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006E096C  83 BE F0 02 00 00 64      CMP dword ptr [ESI + 0x2f0],0x64
006E0973  75 49                     JNZ 0x006e09be
006E0975  0F BF 4B 1C               MOVSX ECX,word ptr [EBX + 0x1c]
006E0979  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E097C  2B C1                     SUB EAX,ECX
006E097E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E0981  0F BF 53 1E               MOVSX EDX,word ptr [EBX + 0x1e]
006E0985  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006E0988  2B CA                     SUB ECX,EDX
006E098A  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006E098D  0F BF 57 0E               MOVSX EDX,word ptr [EDI + 0xe]
006E0991  03 D0                     ADD EDX,EAX
006E0993  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
006E0999  0F BF 47 10               MOVSX EAX,word ptr [EDI + 0x10]
006E099D  03 C1                     ADD EAX,ECX
006E099F  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006E09A5  0F BF 4F 12               MOVSX ECX,word ptr [EDI + 0x12]
006E09A9  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
006E09AF  0F BF 57 14               MOVSX EDX,word ptr [EDI + 0x14]
006E09B3  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
006E09B9  E9 08 01 00 00            JMP 0x006e0ac6
LAB_006e09be:
006E09BE  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006E09C1  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E09C4  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006E09CA  8B D1                     MOV EDX,ECX
006E09CC  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006E09D3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E09D8  F7 EA                     IMUL EDX
006E09DA  C1 FA 05                  SAR EDX,0x5
006E09DD  8B C2                     MOV EAX,EDX
006E09DF  C1 E8 1F                  SHR EAX,0x1f
006E09E2  03 D0                     ADD EDX,EAX
006E09E4  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
006E09EA  8B 86 F4 02 00 00         MOV EAX,dword ptr [ESI + 0x2f4]
006E09F0  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006E09F6  0F AF D0                  IMUL EDX,EAX
006E09F9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E09FE  F7 EA                     IMUL EDX
006E0A00  C1 FA 05                  SAR EDX,0x5
006E0A03  8B C2                     MOV EAX,EDX
006E0A05  C1 E8 1F                  SHR EAX,0x1f
006E0A08  03 D0                     ADD EDX,EAX
006E0A0A  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
006E0A10  0F BF 53 1C               MOVSX EDX,word ptr [EBX + 0x1c]
006E0A14  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006E0A1B  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E0A20  F7 EA                     IMUL EDX
006E0A22  C1 FA 05                  SAR EDX,0x5
006E0A25  8B C2                     MOV EAX,EDX
006E0A27  C1 E8 1F                  SHR EAX,0x1f
006E0A2A  03 D0                     ADD EDX,EAX
006E0A2C  01 55 B0                  ADD dword ptr [EBP + -0x50],EDX
006E0A2F  0F BF 53 1E               MOVSX EDX,word ptr [EBX + 0x1e]
006E0A33  0F AF 96 F4 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f4]
006E0A3A  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E0A3F  F7 EA                     IMUL EDX
006E0A41  C1 FA 05                  SAR EDX,0x5
006E0A44  8B C2                     MOV EAX,EDX
006E0A46  C1 E8 1F                  SHR EAX,0x1f
006E0A49  03 D0                     ADD EDX,EAX
006E0A4B  01 55 A8                  ADD dword ptr [EBP + -0x58],EDX
006E0A4E  0F BF 5F 0E               MOVSX EBX,word ptr [EDI + 0xe]
006E0A52  0F AF 9D 60 FF FF FF      IMUL EBX,dword ptr [EBP + 0xffffff60]
006E0A59  8B C1                     MOV EAX,ECX
006E0A5B  99                        CDQ
006E0A5C  2B C2                     SUB EAX,EDX
006E0A5E  D1 F8                     SAR EAX,0x1
006E0A60  03 C3                     ADD EAX,EBX
006E0A62  99                        CDQ
006E0A63  F7 F9                     IDIV ECX
006E0A65  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
006E0A68  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
006E0A6E  0F BF 5F 10               MOVSX EBX,word ptr [EDI + 0x10]
006E0A72  0F AF 9D 38 FF FF FF      IMUL EBX,dword ptr [EBP + 0xffffff38]
006E0A79  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006E0A7F  99                        CDQ
006E0A80  2B C2                     SUB EAX,EDX
006E0A82  D1 F8                     SAR EAX,0x1
006E0A84  03 C3                     ADD EAX,EBX
006E0A86  99                        CDQ
006E0A87  8B 9D 7C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff7c]
006E0A8D  F7 FB                     IDIV EBX
006E0A8F  03 45 A8                  ADD EAX,dword ptr [EBP + -0x58]
006E0A92  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006E0A98  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
006E0A9C  0F AF 85 60 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff60]
006E0AA3  99                        CDQ
006E0AA4  F7 F9                     IDIV ECX
006E0AA6  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
006E0AAC  0F BF 47 14               MOVSX EAX,word ptr [EDI + 0x14]
006E0AB0  0F AF 85 38 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff38]
006E0AB7  99                        CDQ
006E0AB8  F7 FB                     IDIV EBX
006E0ABA  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
006E0AC0  8B 9D 34 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff34]
LAB_006e0ac6:
006E0AC6  8D 4D CC                  LEA ECX,[EBP + -0x34]
006E0AC9  51                        PUSH ECX
006E0ACA  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
006E0AD0  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006E0AD3  E8 88 F9 FC FF            CALL 0x006b0460
006E0AD8  85 C0                     TEST EAX,EAX
006E0ADA  74 23                     JZ 0x006e0aff
006E0ADC  6A 01                     PUSH 0x1
006E0ADE  6A 00                     PUSH 0x0
006E0AE0  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
006E0AE3  03 55 C4                  ADD EDX,dword ptr [EBP + -0x3c]
006E0AE6  52                        PUSH EDX
006E0AE7  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006E0AEA  50                        PUSH EAX
006E0AEB  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006E0AEE  51                        PUSH ECX
006E0AEF  57                        PUSH EDI
006E0AF0  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006E0AF3  52                        PUSH EDX
006E0AF4  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006E0AF7  50                        PUSH EAX
006E0AF8  8B CE                     MOV ECX,ESI
006E0AFA  E8 11 82 02 00            CALL 0x00708d10
LAB_006e0aff:
006E0AFF  8B 1B                     MOV EBX,dword ptr [EBX]
006E0B01  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
006E0B07  85 DB                     TEST EBX,EBX
006E0B09  0F 85 05 FE FF FF         JNZ 0x006e0914
LAB_006e0b0f:
006E0B0F  8B 86 90 02 00 00         MOV EAX,dword ptr [ESI + 0x290]
006E0B15  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
006E0B1C  8B 8E 8C 02 00 00         MOV ECX,dword ptr [ESI + 0x28c]
006E0B22  85 C9                     TEST ECX,ECX
006E0B24  0F 8E 06 02 00 00         JLE 0x006e0d30
006E0B2A  8D 58 08                  LEA EBX,[EAX + 0x8]
006E0B2D  89 9D F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EBX
LAB_006e0b33:
006E0B33  8B 7B 18                  MOV EDI,dword ptr [EBX + 0x18]
006E0B36  8B 0B                     MOV ECX,dword ptr [EBX]
006E0B38  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
006E0B3E  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006E0B41  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
006E0B47  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006E0B4A  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006E0B50  6A 00                     PUSH 0x0
006E0B52  6A 00                     PUSH 0x0
006E0B54  6A 00                     PUSH 0x0
006E0B56  6A 00                     PUSH 0x0
006E0B58  6A 00                     PUSH 0x0
006E0B5A  6A 00                     PUSH 0x0
006E0B5C  6A 00                     PUSH 0x0
006E0B5E  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
006E0B64  51                        PUSH ECX
006E0B65  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E0B68  52                        PUSH EDX
006E0B69  8B CE                     MOV ECX,ESI
006E0B6B  E8 60 1A 00 00            CALL 0x006e25d0
006E0B70  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006E0B73  C1 F8 10                  SAR EAX,0x10
006E0B76  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E0B79  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006E0B7C  C1 F8 10                  SAR EAX,0x10
006E0B7F  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006E0B82  83 BE F0 02 00 00 64      CMP dword ptr [ESI + 0x2f0],0x64
006E0B89  75 49                     JNZ 0x006e0bd4
006E0B8B  0F BF 4B 14               MOVSX ECX,word ptr [EBX + 0x14]
006E0B8F  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E0B92  2B C1                     SUB EAX,ECX
006E0B94  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E0B97  0F BF 53 16               MOVSX EDX,word ptr [EBX + 0x16]
006E0B9B  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006E0B9E  2B CA                     SUB ECX,EDX
006E0BA0  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006E0BA3  0F BF 57 0E               MOVSX EDX,word ptr [EDI + 0xe]
006E0BA7  03 D0                     ADD EDX,EAX
006E0BA9  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
006E0BAF  0F BF 47 10               MOVSX EAX,word ptr [EDI + 0x10]
006E0BB3  03 C1                     ADD EAX,ECX
006E0BB5  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006E0BBB  0F BF 4F 12               MOVSX ECX,word ptr [EDI + 0x12]
006E0BBF  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
006E0BC5  0F BF 57 14               MOVSX EDX,word ptr [EDI + 0x14]
006E0BC9  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
006E0BCF  E9 08 01 00 00            JMP 0x006e0cdc
LAB_006e0bd4:
006E0BD4  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006E0BD7  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E0BDA  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006E0BE0  8B D1                     MOV EDX,ECX
006E0BE2  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006E0BE9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E0BEE  F7 EA                     IMUL EDX
006E0BF0  C1 FA 05                  SAR EDX,0x5
006E0BF3  8B C2                     MOV EAX,EDX
006E0BF5  C1 E8 1F                  SHR EAX,0x1f
006E0BF8  03 D0                     ADD EDX,EAX
006E0BFA  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
006E0C00  8B 86 F4 02 00 00         MOV EAX,dword ptr [ESI + 0x2f4]
006E0C06  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006E0C0C  0F AF D0                  IMUL EDX,EAX
006E0C0F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E0C14  F7 EA                     IMUL EDX
006E0C16  C1 FA 05                  SAR EDX,0x5
006E0C19  8B C2                     MOV EAX,EDX
006E0C1B  C1 E8 1F                  SHR EAX,0x1f
006E0C1E  03 D0                     ADD EDX,EAX
006E0C20  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
006E0C26  0F BF 53 14               MOVSX EDX,word ptr [EBX + 0x14]
006E0C2A  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006E0C31  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E0C36  F7 EA                     IMUL EDX
006E0C38  C1 FA 05                  SAR EDX,0x5
006E0C3B  8B C2                     MOV EAX,EDX
006E0C3D  C1 E8 1F                  SHR EAX,0x1f
006E0C40  03 D0                     ADD EDX,EAX
006E0C42  01 55 B0                  ADD dword ptr [EBP + -0x50],EDX
006E0C45  0F BF 53 16               MOVSX EDX,word ptr [EBX + 0x16]
006E0C49  0F AF 96 F4 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f4]
006E0C50  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E0C55  F7 EA                     IMUL EDX
006E0C57  C1 FA 05                  SAR EDX,0x5
006E0C5A  8B C2                     MOV EAX,EDX
006E0C5C  C1 E8 1F                  SHR EAX,0x1f
006E0C5F  03 D0                     ADD EDX,EAX
006E0C61  01 55 A8                  ADD dword ptr [EBP + -0x58],EDX
006E0C64  0F BF 5F 0E               MOVSX EBX,word ptr [EDI + 0xe]
006E0C68  0F AF 9D 60 FF FF FF      IMUL EBX,dword ptr [EBP + 0xffffff60]
006E0C6F  8B C1                     MOV EAX,ECX
006E0C71  99                        CDQ
006E0C72  2B C2                     SUB EAX,EDX
006E0C74  D1 F8                     SAR EAX,0x1
006E0C76  03 C3                     ADD EAX,EBX
006E0C78  99                        CDQ
006E0C79  F7 F9                     IDIV ECX
006E0C7B  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
006E0C7E  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
006E0C84  0F BF 5F 10               MOVSX EBX,word ptr [EDI + 0x10]
006E0C88  0F AF 9D 38 FF FF FF      IMUL EBX,dword ptr [EBP + 0xffffff38]
006E0C8F  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006E0C95  99                        CDQ
006E0C96  2B C2                     SUB EAX,EDX
006E0C98  D1 F8                     SAR EAX,0x1
006E0C9A  03 C3                     ADD EAX,EBX
006E0C9C  99                        CDQ
006E0C9D  8B 9D 7C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff7c]
006E0CA3  F7 FB                     IDIV EBX
006E0CA5  03 45 A8                  ADD EAX,dword ptr [EBP + -0x58]
006E0CA8  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006E0CAE  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
006E0CB2  0F AF 85 60 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff60]
006E0CB9  99                        CDQ
006E0CBA  F7 F9                     IDIV ECX
006E0CBC  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
006E0CC2  0F BF 47 14               MOVSX EAX,word ptr [EDI + 0x14]
006E0CC6  0F AF 85 38 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff38]
006E0CCD  99                        CDQ
006E0CCE  F7 FB                     IDIV EBX
006E0CD0  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
006E0CD6  8B 9D F8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffef8]
LAB_006e0cdc:
006E0CDC  8D 4D CC                  LEA ECX,[EBP + -0x34]
006E0CDF  51                        PUSH ECX
006E0CE0  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
006E0CE6  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006E0CE9  E8 72 F7 FC FF            CALL 0x006b0460
006E0CEE  85 C0                     TEST EAX,EAX
006E0CF0  74 22                     JZ 0x006e0d14
006E0CF2  6A 00                     PUSH 0x0
006E0CF4  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
006E0CF7  52                        PUSH EDX
006E0CF8  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006E0CFB  50                        PUSH EAX
006E0CFC  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006E0CFF  51                        PUSH ECX
006E0D00  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006E0D03  52                        PUSH EDX
006E0D04  57                        PUSH EDI
006E0D05  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006E0D08  50                        PUSH EAX
006E0D09  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006E0D0C  51                        PUSH ECX
006E0D0D  8B CE                     MOV ECX,ESI
006E0D0F  E8 FC 7F 02 00            CALL 0x00708d10
LAB_006e0d14:
006E0D14  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E0D17  40                        INC EAX
006E0D18  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006E0D1B  83 C3 2C                  ADD EBX,0x2c
006E0D1E  89 9D F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EBX
006E0D24  3B 86 8C 02 00 00         CMP EAX,dword ptr [ESI + 0x28c]
006E0D2A  0F 8C 03 FE FF FF         JL 0x006e0b33
LAB_006e0d30:
006E0D30  8B 9E 94 02 00 00         MOV EBX,dword ptr [ESI + 0x294]
006E0D36  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
006E0D3C  85 DB                     TEST EBX,EBX
006E0D3E  0F 84 F3 01 00 00         JZ 0x006e0f37
LAB_006e0d44:
006E0D44  8B 7B 20                  MOV EDI,dword ptr [EBX + 0x20]
006E0D47  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006E0D4A  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
006E0D50  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006E0D53  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006E0D59  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
006E0D5C  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
006E0D62  6A 00                     PUSH 0x0
006E0D64  6A 00                     PUSH 0x0
006E0D66  6A 00                     PUSH 0x0
006E0D68  6A 00                     PUSH 0x0
006E0D6A  6A 00                     PUSH 0x0
006E0D6C  6A 00                     PUSH 0x0
006E0D6E  6A 00                     PUSH 0x0
006E0D70  8D 95 70 FF FF FF         LEA EDX,[EBP + 0xffffff70]
006E0D76  52                        PUSH EDX
006E0D77  8D 45 BC                  LEA EAX,[EBP + -0x44]
006E0D7A  50                        PUSH EAX
006E0D7B  8B CE                     MOV ECX,ESI
006E0D7D  E8 4E 18 00 00            CALL 0x006e25d0
006E0D82  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006E0D85  C1 F8 10                  SAR EAX,0x10
006E0D88  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E0D8B  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006E0D8E  C1 F8 10                  SAR EAX,0x10
006E0D91  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006E0D94  83 BE F0 02 00 00 64      CMP dword ptr [ESI + 0x2f0],0x64
006E0D9B  75 49                     JNZ 0x006e0de6
006E0D9D  0F BF 4B 1C               MOVSX ECX,word ptr [EBX + 0x1c]
006E0DA1  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E0DA4  2B C1                     SUB EAX,ECX
006E0DA6  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E0DA9  0F BF 53 1E               MOVSX EDX,word ptr [EBX + 0x1e]
006E0DAD  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006E0DB0  2B CA                     SUB ECX,EDX
006E0DB2  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006E0DB5  0F BF 57 0E               MOVSX EDX,word ptr [EDI + 0xe]
006E0DB9  03 D0                     ADD EDX,EAX
006E0DBB  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
006E0DC1  0F BF 47 10               MOVSX EAX,word ptr [EDI + 0x10]
006E0DC5  03 C1                     ADD EAX,ECX
006E0DC7  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006E0DCD  0F BF 4F 12               MOVSX ECX,word ptr [EDI + 0x12]
006E0DD1  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
006E0DD7  0F BF 57 14               MOVSX EDX,word ptr [EDI + 0x14]
006E0DDB  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
006E0DE1  E9 08 01 00 00            JMP 0x006e0eee
LAB_006e0de6:
006E0DE6  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006E0DE9  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E0DEC  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006E0DF2  8B D1                     MOV EDX,ECX
006E0DF4  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006E0DFB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E0E00  F7 EA                     IMUL EDX
006E0E02  C1 FA 05                  SAR EDX,0x5
006E0E05  8B C2                     MOV EAX,EDX
006E0E07  C1 E8 1F                  SHR EAX,0x1f
006E0E0A  03 D0                     ADD EDX,EAX
006E0E0C  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
006E0E12  8B 86 F4 02 00 00         MOV EAX,dword ptr [ESI + 0x2f4]
006E0E18  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006E0E1E  0F AF D0                  IMUL EDX,EAX
006E0E21  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006E0E26  F7 EA                     IMUL EDX
006E0E28  C1 FA 05                  SAR EDX,0x5
006E0E2B  8B C2                     MOV EAX,EDX
006E0E2D  C1 E8 1F                  SHR EAX,0x1f
006E0E30  03 D0                     ADD EDX,EAX
006E0E32  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
006E0E38  0F BF 53 1C               MOVSX EDX,word ptr [EBX + 0x1c]
006E0E3C  0F AF 96 F0 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f0]
006E0E43  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E0E48  F7 EA                     IMUL EDX
006E0E4A  C1 FA 05                  SAR EDX,0x5
006E0E4D  8B C2                     MOV EAX,EDX
006E0E4F  C1 E8 1F                  SHR EAX,0x1f
006E0E52  03 D0                     ADD EDX,EAX
006E0E54  01 55 B0                  ADD dword ptr [EBP + -0x50],EDX
006E0E57  0F BF 53 1E               MOVSX EDX,word ptr [EBX + 0x1e]
006E0E5B  0F AF 96 F4 02 00 00      IMUL EDX,dword ptr [ESI + 0x2f4]
006E0E62  B8 E1 7A 14 AE            MOV EAX,0xae147ae1
006E0E67  F7 EA                     IMUL EDX
006E0E69  C1 FA 05                  SAR EDX,0x5
006E0E6C  8B C2                     MOV EAX,EDX
006E0E6E  C1 E8 1F                  SHR EAX,0x1f
006E0E71  03 D0                     ADD EDX,EAX
006E0E73  01 55 A8                  ADD dword ptr [EBP + -0x58],EDX
006E0E76  0F BF 5F 0E               MOVSX EBX,word ptr [EDI + 0xe]
006E0E7A  0F AF 9D 60 FF FF FF      IMUL EBX,dword ptr [EBP + 0xffffff60]
006E0E81  8B C1                     MOV EAX,ECX
006E0E83  99                        CDQ
006E0E84  2B C2                     SUB EAX,EDX
006E0E86  D1 F8                     SAR EAX,0x1
006E0E88  03 C3                     ADD EAX,EBX
006E0E8A  99                        CDQ
006E0E8B  F7 F9                     IDIV ECX
006E0E8D  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
006E0E90  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
006E0E96  0F BF 5F 10               MOVSX EBX,word ptr [EDI + 0x10]
006E0E9A  0F AF 9D 38 FF FF FF      IMUL EBX,dword ptr [EBP + 0xffffff38]
006E0EA1  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006E0EA7  99                        CDQ
006E0EA8  2B C2                     SUB EAX,EDX
006E0EAA  D1 F8                     SAR EAX,0x1
006E0EAC  03 C3                     ADD EAX,EBX
006E0EAE  99                        CDQ
006E0EAF  8B 9D 7C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff7c]
006E0EB5  F7 FB                     IDIV EBX
006E0EB7  03 45 A8                  ADD EAX,dword ptr [EBP + -0x58]
006E0EBA  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
006E0EC0  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
006E0EC4  0F AF 85 60 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff60]
006E0ECB  99                        CDQ
006E0ECC  F7 F9                     IDIV ECX
006E0ECE  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
006E0ED4  0F BF 47 14               MOVSX EAX,word ptr [EDI + 0x14]
006E0ED8  0F AF 85 38 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff38]
006E0EDF  99                        CDQ
006E0EE0  F7 FB                     IDIV EBX
006E0EE2  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
006E0EE8  8B 9D 34 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff34]
LAB_006e0eee:
006E0EEE  8D 4D CC                  LEA ECX,[EBP + -0x34]
006E0EF1  51                        PUSH ECX
006E0EF2  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
006E0EF8  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006E0EFB  E8 60 F5 FC FF            CALL 0x006b0460
006E0F00  85 C0                     TEST EAX,EAX
006E0F02  74 23                     JZ 0x006e0f27
006E0F04  6A 00                     PUSH 0x0
006E0F06  6A 00                     PUSH 0x0
006E0F08  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
006E0F0B  03 55 C4                  ADD EDX,dword ptr [EBP + -0x3c]
006E0F0E  52                        PUSH EDX
006E0F0F  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006E0F12  50                        PUSH EAX
006E0F13  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006E0F16  51                        PUSH ECX
006E0F17  57                        PUSH EDI
006E0F18  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006E0F1B  52                        PUSH EDX
006E0F1C  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006E0F1F  50                        PUSH EAX
006E0F20  8B CE                     MOV ECX,ESI
006E0F22  E8 E9 7D 02 00            CALL 0x00708d10
LAB_006e0f27:
006E0F27  8B 1B                     MOV EBX,dword ptr [EBX]
006E0F29  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
006E0F2F  85 DB                     TEST EBX,EBX
006E0F31  0F 85 0D FE FF FF         JNZ 0x006e0d44
LAB_006e0f37:
006E0F37  8B 86 24 01 00 00         MOV EAX,dword ptr [ESI + 0x124]
006E0F3D  83 F8 0A                  CMP EAX,0xa
006E0F40  0F 84 BA 00 00 00         JZ 0x006e1000
006E0F46  83 F8 01                  CMP EAX,0x1
006E0F49  0F 84 B1 00 00 00         JZ 0x006e1000
006E0F4F  8B 86 98 02 00 00         MOV EAX,dword ptr [ESI + 0x298]
006E0F55  85 C0                     TEST EAX,EAX
006E0F57  0F 84 A3 00 00 00         JZ 0x006e1000
006E0F5D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E0F60  85 C0                     TEST EAX,EAX
006E0F62  0F 84 98 00 00 00         JZ 0x006e1000
006E0F68  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E0F6B  81 E1 00 11 00 00         AND ECX,0x1100
006E0F71  81 F9 00 01 00 00         CMP ECX,0x100
006E0F77  0F 84 83 00 00 00         JZ 0x006e1000
006E0F7D  8B 86 DC 02 00 00         MOV EAX,dword ptr [ESI + 0x2dc]
006E0F83  85 C0                     TEST EAX,EAX
006E0F85  74 0A                     JZ 0x006e0f91
006E0F87  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
006E0F8D  85 C0                     TEST EAX,EAX
006E0F8F  74 6F                     JZ 0x006e1000
LAB_006e0f91:
006E0F91  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006E0F94  8B 7E 38                  MOV EDI,dword ptr [ESI + 0x38]
006E0F97  2B F9                     SUB EDI,ECX
006E0F99  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006E0F9C  8B 5E 3C                  MOV EBX,dword ptr [ESI + 0x3c]
006E0F9F  2B DA                     SUB EBX,EDX
006E0FA1  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006E0FA4  0F AF C2                  IMUL EAX,EDX
006E0FA7  03 46 0C                  ADD EAX,dword ptr [ESI + 0xc]
006E0FAA  03 C1                     ADD EAX,ECX
006E0FAC  9B                        WAIT
006E0FAD  C7 45 FC 18 00 00 00      MOV dword ptr [EBP + -0x4],0x18
LAB_006e0fb4:
006E0FB4  8B D3                     MOV EDX,EBX
006E0FB6  4B                        DEC EBX
006E0FB7  89 9D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EBX
006E0FBD  85 D2                     TEST EDX,EDX
006E0FBF  74 37                     JZ 0x006e0ff8
006E0FC1  33 C9                     XOR ECX,ECX
006E0FC3  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
LAB_006e0fc9:
006E0FC9  3B CF                     CMP ECX,EDI
006E0FCB  7D 20                     JGE 0x006e0fed
006E0FCD  33 D2                     XOR EDX,EDX
006E0FCF  8A 14 01                  MOV DL,byte ptr [ECX + EAX*0x1]
006E0FD2  8B 9E 98 02 00 00         MOV EBX,dword ptr [ESI + 0x298]
006E0FD8  8A 14 13                  MOV DL,byte ptr [EBX + EDX*0x1]
006E0FDB  88 14 01                  MOV byte ptr [ECX + EAX*0x1],DL
006E0FDE  41                        INC ECX
006E0FDF  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
006E0FE5  8B 9D 20 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff20]
006E0FEB  EB DC                     JMP 0x006e0fc9
LAB_006e0fed:
006E0FED  03 46 28                  ADD EAX,dword ptr [ESI + 0x28]
006E0FF0  89 85 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EAX
006E0FF6  EB BC                     JMP 0x006e0fb4
LAB_006e0ff8:
006E0FF8  9B                        WAIT
006E0FF9  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006e1000:
006E1000  C7 86 34 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x134],0x0
006E100A  8D A5 EC FE FF FF         LEA ESP,[EBP + 0xfffffeec]
006E1010  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E1013  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006E101A  5F                        POP EDI
006E101B  5E                        POP ESI
006E101C  5B                        POP EBX
006E101D  8B E5                     MOV ESP,EBP
006E101F  5D                        POP EBP
006E1020  C3                        RET
