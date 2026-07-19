FUN_0065bd70:
0065BD70  55                        PUSH EBP
0065BD71  8B EC                     MOV EBP,ESP
0065BD73  83 EC 18                  SUB ESP,0x18
0065BD76  56                        PUSH ESI
0065BD77  57                        PUSH EDI
0065BD78  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0065BD7B  83 CA FF                  OR EDX,0xffffffff
0065BD7E  8B F1                     MOV ESI,ECX
0065BD80  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0065BD83  3D DC 5D 00 00            CMP EAX,0x5ddc
0065BD88  0F 87 F9 00 00 00         JA 0x0065be87
0065BD8E  0F 84 EC 00 00 00         JZ 0x0065be80
0065BD94  3D D4 5D 00 00            CMP EAX,0x5dd4
0065BD99  0F 87 85 00 00 00         JA 0x0065be24
0065BD9F  74 79                     JZ 0x0065be1a
0065BDA1  3D D0 5D 00 00            CMP EAX,0x5dd0
0065BDA6  77 40                     JA 0x0065bde8
0065BDA8  74 34                     JZ 0x0065bdde
0065BDAA  8B C8                     MOV ECX,EAX
0065BDAC  83 E9 00                  SUB ECX,0x0
0065BDAF  74 23                     JZ 0x0065bdd4
0065BDB1  81 E9 C5 5D 00 00         SUB ECX,0x5dc5
0065BDB7  74 11                     JZ 0x0065bdca
0065BDB9  49                        DEC ECX
0065BDBA  0F 85 D8 08 00 00         JNZ 0x0065c698
0065BDC0  BA 58 04 00 00            MOV EDX,0x458
0065BDC5  E9 3A 01 00 00            JMP 0x0065bf04
LAB_0065bdca:
0065BDCA  BA 57 04 00 00            MOV EDX,0x457
0065BDCF  E9 30 01 00 00            JMP 0x0065bf04
LAB_0065bdd4:
0065BDD4  BA 56 04 00 00            MOV EDX,0x456
0065BDD9  E9 26 01 00 00            JMP 0x0065bf04
LAB_0065bdde:
0065BDDE  BA 59 04 00 00            MOV EDX,0x459
0065BDE3  E9 1C 01 00 00            JMP 0x0065bf04
LAB_0065bde8:
0065BDE8  8B C8                     MOV ECX,EAX
0065BDEA  81 E9 D1 5D 00 00         SUB ECX,0x5dd1
0065BDF0  74 1E                     JZ 0x0065be10
0065BDF2  49                        DEC ECX
0065BDF3  74 11                     JZ 0x0065be06
0065BDF5  49                        DEC ECX
0065BDF6  0F 85 9C 08 00 00         JNZ 0x0065c698
0065BDFC  BA 5C 04 00 00            MOV EDX,0x45c
0065BE01  E9 FE 00 00 00            JMP 0x0065bf04
LAB_0065be06:
0065BE06  BA 5B 04 00 00            MOV EDX,0x45b
0065BE0B  E9 F4 00 00 00            JMP 0x0065bf04
LAB_0065be10:
0065BE10  BA 5A 04 00 00            MOV EDX,0x45a
0065BE15  E9 EA 00 00 00            JMP 0x0065bf04
LAB_0065be1a:
0065BE1A  BA 5D 04 00 00            MOV EDX,0x45d
0065BE1F  E9 E0 00 00 00            JMP 0x0065bf04
LAB_0065be24:
0065BE24  8D 88 2B A2 FF FF         LEA ECX,[EAX + 0xffffa22b]
0065BE2A  83 F9 06                  CMP ECX,0x6
0065BE2D  0F 87 65 08 00 00         JA 0x0065c698
switchD_0065be33::switchD:
0065BE33  FF 24 8D A4 C6 65 00      JMP dword ptr [ECX*0x4 + 0x65c6a4]
switchD_0065be33::caseD_5dd6:
0065BE3A  BA 5E 04 00 00            MOV EDX,0x45e
0065BE3F  E9 C0 00 00 00            JMP 0x0065bf04
switchD_0065be33::caseD_5dd7:
0065BE44  BA 5F 04 00 00            MOV EDX,0x45f
0065BE49  E9 B6 00 00 00            JMP 0x0065bf04
switchD_0065be33::caseD_5dd8:
0065BE4E  BA 60 04 00 00            MOV EDX,0x460
0065BE53  E9 AC 00 00 00            JMP 0x0065bf04
switchD_0065be33::caseD_5dd9:
0065BE58  BA 61 04 00 00            MOV EDX,0x461
0065BE5D  E9 A2 00 00 00            JMP 0x0065bf04
switchD_0065be33::caseD_5dda:
0065BE62  BA 62 04 00 00            MOV EDX,0x462
0065BE67  E9 98 00 00 00            JMP 0x0065bf04
switchD_0065be33::caseD_5ddb:
0065BE6C  BA 63 04 00 00            MOV EDX,0x463
0065BE71  E9 8E 00 00 00            JMP 0x0065bf04
switchD_0065be33::caseD_5dd5:
0065BE76  BA 74 04 00 00            MOV EDX,0x474
0065BE7B  E9 84 00 00 00            JMP 0x0065bf04
LAB_0065be80:
0065BE80  BA 64 04 00 00            MOV EDX,0x464
0065BE85  EB 7D                     JMP 0x0065bf04
LAB_0065be87:
0065BE87  8D 88 23 A2 FF FF         LEA ECX,[EAX + 0xffffa223]
0065BE8D  83 F9 0F                  CMP ECX,0xf
0065BE90  0F 87 02 08 00 00         JA 0x0065c698
switchD_0065be96::switchD:
0065BE96  FF 24 8D C0 C6 65 00      JMP dword ptr [ECX*0x4 + 0x65c6c0]
switchD_0065be96::caseD_5ddd:
0065BE9D  BA 65 04 00 00            MOV EDX,0x465
0065BEA2  EB 60                     JMP 0x0065bf04
switchD_0065be96::caseD_5dde:
0065BEA4  BA 66 04 00 00            MOV EDX,0x466
0065BEA9  EB 59                     JMP 0x0065bf04
switchD_0065be96::caseD_5ddf:
0065BEAB  BA 67 04 00 00            MOV EDX,0x467
0065BEB0  EB 52                     JMP 0x0065bf04
switchD_0065be96::caseD_5de0:
0065BEB2  BA 68 04 00 00            MOV EDX,0x468
0065BEB7  EB 4B                     JMP 0x0065bf04
switchD_0065be96::caseD_5de1:
0065BEB9  BA 69 04 00 00            MOV EDX,0x469
0065BEBE  EB 44                     JMP 0x0065bf04
switchD_0065be96::caseD_5de2:
0065BEC0  BA 6A 04 00 00            MOV EDX,0x46a
0065BEC5  EB 3D                     JMP 0x0065bf04
switchD_0065be96::caseD_5de3:
0065BEC7  BA 6B 04 00 00            MOV EDX,0x46b
0065BECC  EB 36                     JMP 0x0065bf04
switchD_0065be96::caseD_5de4:
0065BECE  BA 6C 04 00 00            MOV EDX,0x46c
0065BED3  EB 2F                     JMP 0x0065bf04
switchD_0065be96::caseD_5de6:
0065BED5  BA 6D 04 00 00            MOV EDX,0x46d
0065BEDA  EB 28                     JMP 0x0065bf04
switchD_0065be96::caseD_5de7:
0065BEDC  BA 6E 04 00 00            MOV EDX,0x46e
0065BEE1  EB 21                     JMP 0x0065bf04
switchD_0065be96::caseD_5de9:
0065BEE3  BA 6F 04 00 00            MOV EDX,0x46f
0065BEE8  EB 1A                     JMP 0x0065bf04
switchD_0065be96::caseD_5dea:
0065BEEA  BA 70 04 00 00            MOV EDX,0x470
0065BEEF  EB 13                     JMP 0x0065bf04
switchD_0065be96::caseD_5de5:
0065BEF1  BA 71 04 00 00            MOV EDX,0x471
0065BEF6  EB 0C                     JMP 0x0065bf04
switchD_0065be96::caseD_5deb:
0065BEF8  BA 72 04 00 00            MOV EDX,0x472
0065BEFD  EB 05                     JMP 0x0065bf04
switchD_0065be96::caseD_5dec:
0065BEFF  BA 73 04 00 00            MOV EDX,0x473
LAB_0065bf04:
0065BF04  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0065BF07  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0065BF0A  85 C9                     TEST ECX,ECX
0065BF0C  0F 84 86 07 00 00         JZ 0x0065c698
0065BF12  05 3B A2 FF FF            ADD EAX,0xffffa23b
0065BF17  53                        PUSH EBX
0065BF18  83 F8 27                  CMP EAX,0x27
0065BF1B  0F 87 3A 07 00 00         JA 0x0065c65b
0065BF21  33 C9                     XOR ECX,ECX
0065BF23  8A 88 2C C7 65 00         MOV CL,byte ptr [EAX + 0x65c72c]
switchD_0065bf29::switchD:
0065BF29  FF 24 8D 00 C7 65 00      JMP dword ptr [ECX*0x4 + 0x65c700]
switchD_0065bf29::caseD_5dc5:
0065BF30  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0065BF33  89 96 2F 05 00 00         MOV dword ptr [ESI + 0x52f],EDX
0065BF39  E9 1D 07 00 00            JMP 0x0065c65b
switchD_0065bf29::caseD_5dc6:
0065BF3E  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0065BF41  8B 8E B3 05 00 00         MOV ECX,dword ptr [ESI + 0x5b3]
0065BF47  50                        PUSH EAX
0065BF48  6A 00                     PUSH 0x0
0065BF4A  51                        PUSH ECX
0065BF4B  E9 06 07 00 00            JMP 0x0065c656
switchD_0065bf29::caseD_5dd0:
0065BF50  66 8B 4F 14               MOV CX,word ptr [EDI + 0x14]
0065BF54  66 85 C9                  TEST CX,CX
0065BF57  0F 8C E1 00 00 00         JL 0x0065c03e
0065BF5D  66 83 F9 08               CMP CX,0x8
0065BF61  0F 8D D7 00 00 00         JGE 0x0065c03e
0065BF67  0F BF D1                  MOVSX EDX,CX
0065BF6A  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
0065BF6D  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065BF75  0F 84 C3 00 00 00         JZ 0x0065c03e
0065BF7B  89 96 2F 05 00 00         MOV dword ptr [ESI + 0x52f],EDX
0065BF81  33 D2                     XOR EDX,EDX
0065BF83  8A 94 C0 E8 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065BF8A  6A 01                     PUSH 0x1
0065BF8C  89 96 33 05 00 00         MOV dword ptr [ESI + 0x533],EDX
0065BF92  33 D2                     XOR EDX,EDX
0065BF94  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065BF9B  89 96 37 05 00 00         MOV dword ptr [ESI + 0x537],EDX
0065BFA1  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
0065BFA5  50                        PUSH EAX
0065BFA6  51                        PUSH ECX
0065BFA7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065BFAD  E8 08 69 DA FF            CALL 0x004028ba
0065BFB2  8B D8                     MOV EBX,EAX
0065BFB4  85 DB                     TEST EBX,EBX
0065BFB6  0F 84 82 00 00 00         JZ 0x0065c03e
0065BFBC  8B 13                     MOV EDX,dword ptr [EBX]
0065BFBE  8B CB                     MOV ECX,EBX
0065BFC0  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0065BFC3  89 86 3B 05 00 00         MOV dword ptr [ESI + 0x53b],EAX
0065BFC9  8B 03                     MOV EAX,dword ptr [EBX]
0065BFCB  8B CB                     MOV ECX,EBX
0065BFCD  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0065BFD0  8D 4D FE                  LEA ECX,[EBP + -0x2]
0065BFD3  89 86 3F 05 00 00         MOV dword ptr [ESI + 0x53f],EAX
0065BFD9  8D 55 0E                  LEA EDX,[EBP + 0xe]
0065BFDC  51                        PUSH ECX
0065BFDD  8D 45 0A                  LEA EAX,[EBP + 0xa]
0065BFE0  52                        PUSH EDX
0065BFE1  50                        PUSH EAX
0065BFE2  8B CB                     MOV ECX,EBX
0065BFE4  E8 DC 58 DA FF            CALL 0x004018c5
0065BFE9  0F BF 4D 0A               MOVSX ECX,word ptr [EBP + 0xa]
0065BFED  0F BF 55 0E               MOVSX EDX,word ptr [EBP + 0xe]
0065BFF1  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
0065BFF5  89 8E 43 05 00 00         MOV dword ptr [ESI + 0x543],ECX
0065BFFB  89 96 47 05 00 00         MOV dword ptr [ESI + 0x547],EDX
0065C001  89 86 4B 05 00 00         MOV dword ptr [ESI + 0x54b],EAX
0065C007  66 8B 43 30               MOV AX,word ptr [EBX + 0x30]
0065C00B  66 3D FF FF               CMP AX,0xffff
0065C00F  75 05                     JNZ 0x0065c016
0065C011  83 C8 FF                  OR EAX,0xffffffff
0065C014  EB 05                     JMP 0x0065c01b
LAB_0065c016:
0065C016  25 FF FF 00 00            AND EAX,0xffff
LAB_0065c01b:
0065C01B  89 86 4F 05 00 00         MOV dword ptr [ESI + 0x54f],EAX
LAB_0065c021:
0065C021  8B 13                     MOV EDX,dword ptr [EBX]
0065C023  8D 45 E8                  LEA EAX,[EBP + -0x18]
0065C026  50                        PUSH EAX
0065C027  8B CB                     MOV ECX,EBX
0065C029  FF 52 74                  CALL dword ptr [EDX + 0x74]
0065C02C  8B 96 B3 05 00 00         MOV EDX,dword ptr [ESI + 0x5b3]
0065C032  8D 4D E8                  LEA ECX,[EBP + -0x18]
0065C035  51                        PUSH ECX
0065C036  6A 00                     PUSH 0x0
0065C038  52                        PUSH EDX
0065C039  E8 E2 9F 05 00            CALL 0x006b6020
LAB_0065c03e:
0065C03E  66 8B 57 18               MOV DX,word ptr [EDI + 0x18]
LAB_0065c042:
0065C042  66 85 D2                  TEST DX,DX
0065C045  0F 8C 25 05 00 00         JL 0x0065c570
0065C04B  66 83 FA 08               CMP DX,0x8
0065C04F  0F 8D 1B 05 00 00         JGE 0x0065c570
0065C055  0F BF CA                  MOVSX ECX,DX
0065C058  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0065C05B  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065C063  0F 84 07 05 00 00         JZ 0x0065c570
0065C069  89 8E 57 05 00 00         MOV dword ptr [ESI + 0x557],ECX
0065C06F  33 C9                     XOR ECX,ECX
0065C071  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065C078  89 8E 5B 05 00 00         MOV dword ptr [ESI + 0x55b],ECX
0065C07E  33 C9                     XOR ECX,ECX
0065C080  8A 8C C0 EA 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C087  89 8E 5F 05 00 00         MOV dword ptr [ESI + 0x55f],ECX
0065C08D  66 8B 7F 1A               MOV DI,word ptr [EDI + 0x1a]
0065C091  E9 25 04 00 00            JMP 0x0065c4bb
switchD_0065bf29::caseD_5dd6:
0065C096  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
0065C09A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065C0A0  6A 05                     PUSH 0x5
0065C0A2  50                        PUSH EAX
0065C0A3  6A 00                     PUSH 0x0
0065C0A5  E8 10 68 DA FF            CALL 0x004028ba
0065C0AA  8B D8                     MOV EBX,EAX
0065C0AC  85 DB                     TEST EBX,EBX
0065C0AE  0F 84 AD 00 00 00         JZ 0x0065c161
0065C0B4  8B 13                     MOV EDX,dword ptr [EBX]
0065C0B6  8B CB                     MOV ECX,EBX
0065C0B8  FF 92 2C 01 00 00         CALL dword ptr [EDX + 0x12c]
0065C0BE  89 86 2F 05 00 00         MOV dword ptr [ESI + 0x52f],EAX
0065C0C4  8B 03                     MOV EAX,dword ptr [EBX]
0065C0C6  8B CB                     MOV ECX,EBX
0065C0C8  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0065C0CB  89 86 33 05 00 00         MOV dword ptr [ESI + 0x533],EAX
0065C0D1  8B 86 2F 05 00 00         MOV EAX,dword ptr [ESI + 0x52f]
0065C0D7  33 C9                     XOR ECX,ECX
0065C0D9  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0065C0DC  8A 8C C0 EA 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C0E3  89 8E 37 05 00 00         MOV dword ptr [ESI + 0x537],ECX
0065C0E9  8B 13                     MOV EDX,dword ptr [EBX]
0065C0EB  8B CB                     MOV ECX,EBX
0065C0ED  FF 92 30 01 00 00         CALL dword ptr [EDX + 0x130]
0065C0F3  89 86 3B 05 00 00         MOV dword ptr [ESI + 0x53b],EAX
0065C0F9  8D 45 FE                  LEA EAX,[EBP + -0x2]
0065C0FC  8D 4D 0E                  LEA ECX,[EBP + 0xe]
0065C0FF  50                        PUSH EAX
0065C100  8D 55 0A                  LEA EDX,[EBP + 0xa]
0065C103  51                        PUSH ECX
0065C104  52                        PUSH EDX
0065C105  8B CB                     MOV ECX,EBX
0065C107  C7 86 3F 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x53f],0x0
0065C111  E8 F5 9D DA FF            CALL 0x00405f0b
0065C116  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
0065C11A  0F BF 4D 0E               MOVSX ECX,word ptr [EBP + 0xe]
0065C11E  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
0065C122  89 86 43 05 00 00         MOV dword ptr [ESI + 0x543],EAX
0065C128  89 8E 47 05 00 00         MOV dword ptr [ESI + 0x547],ECX
0065C12E  89 96 4B 05 00 00         MOV dword ptr [ESI + 0x54b],EDX
0065C134  8B 03                     MOV EAX,dword ptr [EBX]
0065C136  8B CB                     MOV ECX,EBX
0065C138  FF 90 38 01 00 00         CALL dword ptr [EAX + 0x138]
0065C13E  89 86 4F 05 00 00         MOV dword ptr [ESI + 0x54f],EAX
0065C144  8B 13                     MOV EDX,dword ptr [EBX]
0065C146  8D 45 E8                  LEA EAX,[EBP + -0x18]
0065C149  8B CB                     MOV ECX,EBX
0065C14B  50                        PUSH EAX
0065C14C  FF 52 74                  CALL dword ptr [EDX + 0x74]
0065C14F  8B 96 B3 05 00 00         MOV EDX,dword ptr [ESI + 0x5b3]
0065C155  8D 4D E8                  LEA ECX,[EBP + -0x18]
0065C158  51                        PUSH ECX
0065C159  6A 00                     PUSH 0x0
0065C15B  52                        PUSH EDX
0065C15C  E8 BF 9E 05 00            CALL 0x006b6020
LAB_0065c161:
0065C161  66 8B 57 18               MOV DX,word ptr [EDI + 0x18]
0065C165  66 85 D2                  TEST DX,DX
0065C168  0F 8C 02 04 00 00         JL 0x0065c570
0065C16E  66 83 FA 08               CMP DX,0x8
0065C172  0F 8D F8 03 00 00         JGE 0x0065c570
0065C178  0F BF CA                  MOVSX ECX,DX
0065C17B  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0065C17E  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065C186  0F 84 E4 03 00 00         JZ 0x0065c570
0065C18C  89 8E 57 05 00 00         MOV dword ptr [ESI + 0x557],ECX
0065C192  33 C9                     XOR ECX,ECX
0065C194  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065C19B  89 8E 5B 05 00 00         MOV dword ptr [ESI + 0x55b],ECX
0065C1A1  33 C9                     XOR ECX,ECX
0065C1A3  8A 8C C0 EA 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C1AA  89 8E 5F 05 00 00         MOV dword ptr [ESI + 0x55f],ECX
0065C1B0  66 8B 7F 1A               MOV DI,word ptr [EDI + 0x1a]
0065C1B4  E9 02 03 00 00            JMP 0x0065c4bb
switchD_0065bf29::caseD_5ddb:
0065C1B9  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
0065C1BD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065C1C3  6A 02                     PUSH 0x2
0065C1C5  50                        PUSH EAX
0065C1C6  6A 00                     PUSH 0x0
0065C1C8  E8 ED 66 DA FF            CALL 0x004028ba
0065C1CD  8B D8                     MOV EBX,EAX
0065C1CF  85 DB                     TEST EBX,EBX
0065C1D1  74 7F                     JZ 0x0065c252
0065C1D3  C7 86 2F 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x52f],0x0
0065C1DD  8B 13                     MOV EDX,dword ptr [EBX]
0065C1DF  8B CB                     MOV ECX,EBX
0065C1E1  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0065C1E4  89 86 33 05 00 00         MOV dword ptr [ESI + 0x533],EAX
0065C1EA  33 C0                     XOR EAX,EAX
0065C1EC  89 86 37 05 00 00         MOV dword ptr [ESI + 0x537],EAX
0065C1F2  8B 8B 42 03 00 00         MOV ECX,dword ptr [EBX + 0x342]
0065C1F8  89 86 3F 05 00 00         MOV dword ptr [ESI + 0x53f],EAX
0065C1FE  8D 55 FE                  LEA EDX,[EBP + -0x2]
0065C201  89 8E 3B 05 00 00         MOV dword ptr [ESI + 0x53b],ECX
0065C207  8D 45 0E                  LEA EAX,[EBP + 0xe]
0065C20A  52                        PUSH EDX
0065C20B  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0065C20E  50                        PUSH EAX
0065C20F  51                        PUSH ECX
0065C210  8B CB                     MOV ECX,EBX
0065C212  E8 F4 9C DA FF            CALL 0x00405f0b
0065C217  0F BF 45 0E               MOVSX EAX,word ptr [EBP + 0xe]
0065C21B  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
0065C21F  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
0065C223  89 86 47 05 00 00         MOV dword ptr [ESI + 0x547],EAX
0065C229  89 96 43 05 00 00         MOV dword ptr [ESI + 0x543],EDX
0065C22F  89 8E 4B 05 00 00         MOV dword ptr [ESI + 0x54b],ECX
0065C235  8B 13                     MOV EDX,dword ptr [EBX]
0065C237  8D 45 E8                  LEA EAX,[EBP + -0x18]
0065C23A  8B CB                     MOV ECX,EBX
0065C23C  50                        PUSH EAX
0065C23D  FF 52 74                  CALL dword ptr [EDX + 0x74]
0065C240  8B 96 B3 05 00 00         MOV EDX,dword ptr [ESI + 0x5b3]
0065C246  8D 4D E8                  LEA ECX,[EBP + -0x18]
0065C249  51                        PUSH ECX
0065C24A  6A 00                     PUSH 0x0
0065C24C  52                        PUSH EDX
0065C24D  E8 CE 9D 05 00            CALL 0x006b6020
LAB_0065c252:
0065C252  66 8B 57 18               MOV DX,word ptr [EDI + 0x18]
0065C256  66 85 D2                  TEST DX,DX
0065C259  0F 8C 11 03 00 00         JL 0x0065c570
0065C25F  66 83 FA 08               CMP DX,0x8
0065C263  0F 8D 07 03 00 00         JGE 0x0065c570
0065C269  0F BF CA                  MOVSX ECX,DX
0065C26C  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0065C26F  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065C277  0F 84 F3 02 00 00         JZ 0x0065c570
0065C27D  89 8E 57 05 00 00         MOV dword ptr [ESI + 0x557],ECX
0065C283  33 C9                     XOR ECX,ECX
0065C285  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065C28C  89 8E 5B 05 00 00         MOV dword ptr [ESI + 0x55b],ECX
0065C292  33 C9                     XOR ECX,ECX
0065C294  8A 8C C0 EA 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C29B  89 8E 5F 05 00 00         MOV dword ptr [ESI + 0x55f],ECX
0065C2A1  66 8B 7F 1A               MOV DI,word ptr [EDI + 0x1a]
0065C2A5  E9 11 02 00 00            JMP 0x0065c4bb
switchD_0065bf29::caseD_5ddf:
0065C2AA  8B 5F 14                  MOV EBX,dword ptr [EDI + 0x14]
0065C2AD  85 DB                     TEST EBX,EBX
0065C2AF  74 5C                     JZ 0x0065c30d
0065C2B1  33 C0                     XOR EAX,EAX
0065C2B3  8B CB                     MOV ECX,EBX
0065C2B5  89 86 2F 05 00 00         MOV dword ptr [ESI + 0x52f],EAX
0065C2BB  89 86 33 05 00 00         MOV dword ptr [ESI + 0x533],EAX
0065C2C1  89 86 37 05 00 00         MOV dword ptr [ESI + 0x537],EAX
0065C2C7  8B 03                     MOV EAX,dword ptr [EBX]
0065C2C9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0065C2CC  8D 4D FE                  LEA ECX,[EBP + -0x2]
0065C2CF  89 86 3B 05 00 00         MOV dword ptr [ESI + 0x53b],EAX
0065C2D5  8D 55 0E                  LEA EDX,[EBP + 0xe]
0065C2D8  51                        PUSH ECX
0065C2D9  8D 45 0A                  LEA EAX,[EBP + 0xa]
0065C2DC  52                        PUSH EDX
0065C2DD  50                        PUSH EAX
0065C2DE  8B CB                     MOV ECX,EBX
0065C2E0  C7 86 3F 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x53f],0x0
0065C2EA  E8 D6 55 DA FF            CALL 0x004018c5
0065C2EF  0F BF 4D 0A               MOVSX ECX,word ptr [EBP + 0xa]
0065C2F3  0F BF 55 0E               MOVSX EDX,word ptr [EBP + 0xe]
0065C2F7  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
0065C2FB  89 8E 43 05 00 00         MOV dword ptr [ESI + 0x543],ECX
0065C301  89 96 47 05 00 00         MOV dword ptr [ESI + 0x547],EDX
0065C307  89 86 4B 05 00 00         MOV dword ptr [ESI + 0x54b],EAX
LAB_0065c30d:
0065C30D  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0065C310  66 8B 57 18               MOV DX,word ptr [EDI + 0x18]
0065C314  3D E1 5D 00 00            CMP EAX,0x5de1
0065C319  0F 85 51 02 00 00         JNZ 0x0065c570
0065C31F  E9 1E FD FF FF            JMP 0x0065c042
switchD_0065bf29::caseD_5de3:
0065C324  66 8B 47 14               MOV AX,word ptr [EDI + 0x14]
0065C328  66 85 C0                  TEST AX,AX
0065C32B  0F 8C 0D FD FF FF         JL 0x0065c03e
0065C331  66 3D 08 00               CMP AX,0x8
0065C335  0F 8D 03 FD FF FF         JGE 0x0065c03e
0065C33B  0F BF C8                  MOVSX ECX,AX
0065C33E  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0065C341  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065C349  0F 84 EF FC FF FF         JZ 0x0065c03e
0065C34F  89 8E 2F 05 00 00         MOV dword ptr [ESI + 0x52f],ECX
0065C355  33 C9                     XOR ECX,ECX
0065C357  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065C35E  33 D2                     XOR EDX,EDX
0065C360  89 8E 33 05 00 00         MOV dword ptr [ESI + 0x533],ECX
0065C366  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C36D  89 96 37 05 00 00         MOV dword ptr [ESI + 0x537],EDX
0065C373  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
0065C377  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065C37D  6A 03                     PUSH 0x3
0065C37F  50                        PUSH EAX
0065C380  6A 00                     PUSH 0x0
0065C382  E8 33 65 DA FF            CALL 0x004028ba
0065C387  8B D8                     MOV EBX,EAX
0065C389  85 DB                     TEST EBX,EBX
0065C38B  0F 84 AD FC FF FF         JZ 0x0065c03e
0065C391  8B 13                     MOV EDX,dword ptr [EBX]
0065C393  8B CB                     MOV ECX,EBX
0065C395  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0065C398  89 86 3B 05 00 00         MOV dword ptr [ESI + 0x53b],EAX
0065C39E  8B 03                     MOV EAX,dword ptr [EBX]
0065C3A0  8B CB                     MOV ECX,EBX
0065C3A2  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0065C3A5  8D 4D FE                  LEA ECX,[EBP + -0x2]
0065C3A8  89 86 3F 05 00 00         MOV dword ptr [ESI + 0x53f],EAX
0065C3AE  8D 55 0E                  LEA EDX,[EBP + 0xe]
0065C3B1  51                        PUSH ECX
0065C3B2  8D 45 0A                  LEA EAX,[EBP + 0xa]
0065C3B5  52                        PUSH EDX
0065C3B6  50                        PUSH EAX
0065C3B7  8B CB                     MOV ECX,EBX
0065C3B9  E8 07 55 DA FF            CALL 0x004018c5
0065C3BE  0F BF 4D 0A               MOVSX ECX,word ptr [EBP + 0xa]
0065C3C2  0F BF 55 0E               MOVSX EDX,word ptr [EBP + 0xe]
0065C3C6  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
0065C3CA  89 8E 43 05 00 00         MOV dword ptr [ESI + 0x543],ECX
0065C3D0  89 96 47 05 00 00         MOV dword ptr [ESI + 0x547],EDX
0065C3D6  89 86 4B 05 00 00         MOV dword ptr [ESI + 0x54b],EAX
0065C3DC  E9 40 FC FF FF            JMP 0x0065c021
switchD_0065bf29::caseD_5de6:
0065C3E1  66 8B 47 14               MOV AX,word ptr [EDI + 0x14]
0065C3E5  66 85 C0                  TEST AX,AX
0065C3E8  7C 65                     JL 0x0065c44f
0065C3EA  66 3D 08 00               CMP AX,0x8
0065C3EE  7D 5F                     JGE 0x0065c44f
0065C3F0  0F BF C8                  MOVSX ECX,AX
0065C3F3  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0065C3F6  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065C3FE  74 4F                     JZ 0x0065c44f
0065C400  89 8E 2F 05 00 00         MOV dword ptr [ESI + 0x52f],ECX
0065C406  33 C9                     XOR ECX,ECX
0065C408  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065C40F  33 D2                     XOR EDX,EDX
0065C411  89 8E 33 05 00 00         MOV dword ptr [ESI + 0x533],ECX
0065C417  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C41E  33 C0                     XOR EAX,EAX
0065C420  89 96 37 05 00 00         MOV dword ptr [ESI + 0x537],EDX
0065C426  66 8B 47 18               MOV AX,word ptr [EDI + 0x18]
0065C42A  33 C9                     XOR ECX,ECX
0065C42C  89 86 3B 05 00 00         MOV dword ptr [ESI + 0x53b],EAX
0065C432  66 8B 4F 1A               MOV CX,word ptr [EDI + 0x1a]
0065C436  89 8E 3F 05 00 00         MOV dword ptr [ESI + 0x53f],ECX
0065C43C  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0065C43F  33 D2                     XOR EDX,EDX
0065C441  3D E7 5D 00 00            CMP EAX,0x5de7
0065C446  0F 94 C2                  SETZ DL
0065C449  89 96 43 05 00 00         MOV dword ptr [ESI + 0x543],EDX
LAB_0065c44f:
0065C44F  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0065C452  3D E6 5D 00 00            CMP EAX,0x5de6
0065C457  0F 82 FE 01 00 00         JC 0x0065c65b
0065C45D  3D E8 5D 00 00            CMP EAX,0x5de8
0065C462  0F 87 F3 01 00 00         JA 0x0065c65b
0065C468  66 8B 57 14               MOV DX,word ptr [EDI + 0x14]
0065C46C  66 85 D2                  TEST DX,DX
0065C46F  0F 8C FB 00 00 00         JL 0x0065c570
0065C475  66 83 FA 08               CMP DX,0x8
0065C479  0F 8D F1 00 00 00         JGE 0x0065c570
0065C47F  0F BF CA                  MOVSX ECX,DX
0065C482  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0065C485  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065C48D  0F 84 DD 00 00 00         JZ 0x0065c570
0065C493  89 8E 57 05 00 00         MOV dword ptr [ESI + 0x557],ECX
0065C499  33 C9                     XOR ECX,ECX
0065C49B  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065C4A2  89 8E 5B 05 00 00         MOV dword ptr [ESI + 0x55b],ECX
0065C4A8  33 C9                     XOR ECX,ECX
0065C4AA  8A 8C C0 EA 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C4B1  89 8E 5F 05 00 00         MOV dword ptr [ESI + 0x55f],ECX
0065C4B7  66 8B 7F 16               MOV DI,word ptr [EDI + 0x16]
LAB_0065c4bb:
0065C4BB  66 81 FF FF FF            CMP DI,0xffff
0065C4C0  0F 84 9B 00 00 00         JZ 0x0065c561
0065C4C6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065C4CC  6A 01                     PUSH 0x1
0065C4CE  57                        PUSH EDI
0065C4CF  52                        PUSH EDX
0065C4D0  E8 E5 63 DA FF            CALL 0x004028ba
0065C4D5  8B F8                     MOV EDI,EAX
0065C4D7  85 FF                     TEST EDI,EDI
0065C4D9  0F 84 82 00 00 00         JZ 0x0065c561
0065C4DF  8B 17                     MOV EDX,dword ptr [EDI]
0065C4E1  8B CF                     MOV ECX,EDI
0065C4E3  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0065C4E6  89 86 63 05 00 00         MOV dword ptr [ESI + 0x563],EAX
0065C4EC  8B 07                     MOV EAX,dword ptr [EDI]
0065C4EE  8B CF                     MOV ECX,EDI
0065C4F0  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0065C4F3  8D 4D FE                  LEA ECX,[EBP + -0x2]
0065C4F6  89 86 67 05 00 00         MOV dword ptr [ESI + 0x567],EAX
0065C4FC  8D 55 0E                  LEA EDX,[EBP + 0xe]
0065C4FF  51                        PUSH ECX
0065C500  8D 45 0A                  LEA EAX,[EBP + 0xa]
0065C503  52                        PUSH EDX
0065C504  50                        PUSH EAX
0065C505  8B CF                     MOV ECX,EDI
0065C507  E8 B9 53 DA FF            CALL 0x004018c5
0065C50C  0F BF 4D 0A               MOVSX ECX,word ptr [EBP + 0xa]
0065C510  0F BF 55 0E               MOVSX EDX,word ptr [EBP + 0xe]
0065C514  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
0065C518  89 8E 6B 05 00 00         MOV dword ptr [ESI + 0x56b],ECX
0065C51E  89 96 6F 05 00 00         MOV dword ptr [ESI + 0x56f],EDX
0065C524  89 86 73 05 00 00         MOV dword ptr [ESI + 0x573],EAX
0065C52A  66 8B 47 30               MOV AX,word ptr [EDI + 0x30]
0065C52E  66 3D FF FF               CMP AX,0xffff
0065C532  75 05                     JNZ 0x0065c539
0065C534  83 C8 FF                  OR EAX,0xffffffff
0065C537  EB 05                     JMP 0x0065c53e
LAB_0065c539:
0065C539  25 FF FF 00 00            AND EAX,0xffff
LAB_0065c53e:
0065C53E  89 86 77 05 00 00         MOV dword ptr [ESI + 0x577],EAX
0065C544  8B 17                     MOV EDX,dword ptr [EDI]
0065C546  8D 45 E8                  LEA EAX,[EBP + -0x18]
0065C549  8B CF                     MOV ECX,EDI
0065C54B  50                        PUSH EAX
0065C54C  FF 52 74                  CALL dword ptr [EDX + 0x74]
0065C54F  8B 96 B3 05 00 00         MOV EDX,dword ptr [ESI + 0x5b3]
0065C555  8D 4D E8                  LEA ECX,[EBP + -0x18]
0065C558  51                        PUSH ECX
0065C559  6A 01                     PUSH 0x1
0065C55B  52                        PUSH EDX
0065C55C  E9 F5 00 00 00            JMP 0x0065c656
LAB_0065c561:
0065C561  C7 86 63 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x563],0x0
0065C56B  E9 EB 00 00 00            JMP 0x0065c65b
FUN_0065bd70::cf_common_exit_0065C570:
0065C570  C7 86 57 05 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x557],0xff
0065C57A  E9 DC 00 00 00            JMP 0x0065c65b
switchD_0065bf29::caseD_5de5:
0065C57F  66 8B 47 14               MOV AX,word ptr [EDI + 0x14]
0065C583  66 85 C0                  TEST AX,AX
0065C586  0F 8C CF 00 00 00         JL 0x0065c65b
0065C58C  66 3D 08 00               CMP AX,0x8
0065C590  0F 8D C5 00 00 00         JGE 0x0065c65b
0065C596  0F BF C8                  MOVSX ECX,AX
0065C599  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0065C59C  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065C5A4  0F 84 B1 00 00 00         JZ 0x0065c65b
0065C5AA  89 8E 2F 05 00 00         MOV dword ptr [ESI + 0x52f],ECX
0065C5B0  33 C9                     XOR ECX,ECX
0065C5B2  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065C5B9  33 D2                     XOR EDX,EDX
0065C5BB  89 8E 33 05 00 00         MOV dword ptr [ESI + 0x533],ECX
0065C5C1  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C5C8  33 C0                     XOR EAX,EAX
0065C5CA  89 96 37 05 00 00         MOV dword ptr [ESI + 0x537],EDX
0065C5D0  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
0065C5D4  33 C9                     XOR ECX,ECX
0065C5D6  89 86 3B 05 00 00         MOV dword ptr [ESI + 0x53b],EAX
0065C5DC  66 8B 4F 1C               MOV CX,word ptr [EDI + 0x1c]
0065C5E0  89 8E 3F 05 00 00         MOV dword ptr [ESI + 0x53f],ECX
0065C5E6  8B 7F 18                  MOV EDI,dword ptr [EDI + 0x18]
0065C5E9  85 FF                     TEST EDI,EDI
0065C5EB  74 6E                     JZ 0x0065c65b
0065C5ED  8B 96 B3 05 00 00         MOV EDX,dword ptr [ESI + 0x5b3]
0065C5F3  83 C7 3B                  ADD EDI,0x3b
0065C5F6  57                        PUSH EDI
0065C5F7  6A 00                     PUSH 0x0
0065C5F9  52                        PUSH EDX
0065C5FA  EB 5A                     JMP 0x0065c656
switchD_0065bf29::caseD_5deb:
0065C5FC  66 8B 47 14               MOV AX,word ptr [EDI + 0x14]
0065C600  66 85 C0                  TEST AX,AX
0065C603  7C 56                     JL 0x0065c65b
0065C605  66 3D 08 00               CMP AX,0x8
0065C609  7D 50                     JGE 0x0065c65b
0065C60B  0F BF C8                  MOVSX ECX,AX
0065C60E  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
0065C611  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0065C619  74 40                     JZ 0x0065c65b
0065C61B  89 8E 2F 05 00 00         MOV dword ptr [ESI + 0x52f],ECX
0065C621  33 C9                     XOR ECX,ECX
0065C623  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
0065C62A  33 D2                     XOR EDX,EDX
0065C62C  89 8E 33 05 00 00         MOV dword ptr [ESI + 0x533],ECX
0065C632  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0065C639  89 96 37 05 00 00         MOV dword ptr [ESI + 0x537],EDX
0065C63F  8B 7F 18                  MOV EDI,dword ptr [EDI + 0x18]
0065C642  85 FF                     TEST EDI,EDI
0065C644  74 15                     JZ 0x0065c65b
0065C646  8B 86 B3 05 00 00         MOV EAX,dword ptr [ESI + 0x5b3]
0065C64C  81 C7 92 00 00 00         ADD EDI,0x92
0065C652  57                        PUSH EDI
0065C653  6A 00                     PUSH 0x0
0065C655  50                        PUSH EAX
LAB_0065c656:
0065C656  E8 C5 99 05 00            CALL 0x006b6020
FUN_0065bd70::cf_common_exit_0065C65B:
0065C65B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0065C661  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0065C666  F7 A1 E4 00 00 00         MUL dword ptr [ECX + 0xe4]
0065C66C  C1 EA 03                  SHR EDX,0x3
0065C66F  89 96 A7 05 00 00         MOV dword ptr [ESI + 0x5a7],EDX
0065C675  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0065C67B  8B CE                     MOV ECX,ESI
0065C67D  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0065C683  8B 16                     MOV EDX,dword ptr [ESI]
0065C685  89 86 AB 05 00 00         MOV dword ptr [ESI + 0x5ab],EAX
0065C68B  FF 52 14                  CALL dword ptr [EDX + 0x14]
0065C68E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0065C691  89 86 AF 05 00 00         MOV dword ptr [ESI + 0x5af],EAX
0065C697  5B                        POP EBX
switchD_0065be33::default:
0065C698  5F                        POP EDI
0065C699  8B C2                     MOV EAX,EDX
0065C69B  5E                        POP ESI
0065C69C  8B E5                     MOV ESP,EBP
0065C69E  5D                        POP EBP
0065C69F  C2 08 00                  RET 0x8
