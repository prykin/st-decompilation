FUN_005deb90:
005DEB90  55                        PUSH EBP
005DEB91  8B EC                     MOV EBP,ESP
005DEB93  81 EC AC 05 00 00         SUB ESP,0x5ac
005DEB99  8B 81 B2 06 00 00         MOV EAX,dword ptr [ECX + 0x6b2]
005DEB9F  8B 91 9E 06 00 00         MOV EDX,dword ptr [ECX + 0x69e]
005DEBA5  53                        PUSH EBX
005DEBA6  8B 99 AE 06 00 00         MOV EBX,dword ptr [ECX + 0x6ae]
005DEBAC  56                        PUSH ESI
005DEBAD  57                        PUSH EDI
005DEBAE  03 C3                     ADD EAX,EBX
005DEBB0  83 CE FF                  OR ESI,0xffffffff
005DEBB3  33 FF                     XOR EDI,EDI
005DEBB5  3B C2                     CMP EAX,EDX
005DEBB7  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005DEBBA  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005DEBBD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005DEBC0  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
005DEBC7  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005DEBCA  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005DEBCD  76 09                     JBE 0x005debd8
005DEBCF  33 C0                     XOR EAX,EAX
005DEBD1  5F                        POP EDI
005DEBD2  5E                        POP ESI
005DEBD3  5B                        POP EBX
005DEBD4  8B E5                     MOV ESP,EBP
005DEBD6  5D                        POP EBP
005DEBD7  C3                        RET
LAB_005debd8:
005DEBD8  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005DEBDE  8D 45 A8                  LEA EAX,[EBP + -0x58]
005DEBE1  8D 55 A4                  LEA EDX,[EBP + -0x5c]
005DEBE4  57                        PUSH EDI
005DEBE5  50                        PUSH EAX
005DEBE6  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
005DEBE9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DEBEF  E8 FC EB 14 00            CALL 0x0072d7f0
005DEBF4  83 C4 08                  ADD ESP,0x8
005DEBF7  3B C7                     CMP EAX,EDI
005DEBF9  0F 85 DD 02 00 00         JNZ 0x005deedc
005DEBFF  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005DEC02  8B 93 B2 06 00 00         MOV EDX,dword ptr [EBX + 0x6b2]
005DEC08  8B B3 AE 06 00 00         MOV ESI,dword ptr [EBX + 0x6ae]
005DEC0E  8B 83 9A 06 00 00         MOV EAX,dword ptr [EBX + 0x69a]
005DEC14  8D 0C 16                  LEA ECX,[ESI + EDX*0x1]
005DEC17  03 C8                     ADD ECX,EAX
005DEC19  8B 83 9E 06 00 00         MOV EAX,dword ptr [EBX + 0x69e]
005DEC1F  2B C6                     SUB EAX,ESI
005DEC21  2B C2                     SUB EAX,EDX
005DEC23  50                        PUSH EAX
005DEC24  51                        PUSH ECX
005DEC25  8D 8D A0 FE FF FF         LEA ECX,[EBP + 0xfffffea0]
005DEC2B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DEC2E  51                        PUSH ECX
005DEC2F  E8 0C F7 14 00            CALL 0x0072e340
005DEC34  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005DEC37  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005DEC3A  83 C4 0C                  ADD ESP,0xc
005DEC3D  3B C7                     CMP EAX,EDI
005DEC3F  C6 84 15 9F FE FF FF 00   MOV byte ptr [EBP + EDX*0x1 + 0xfffffe9f],0x0
005DEC47  0F 84 81 00 00 00         JZ 0x005decce
005DEC4D  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
005DEC53  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_005dec56:
005DEC56  A1 C0 C1 79 00            MOV EAX,[0x0079c1c0]
005DEC5B  85 F6                     TEST ESI,ESI
005DEC5D  50                        PUSH EAX
005DEC5E  7D 24                     JGE 0x005dec84
005DEC60  8B 15 BC C1 79 00         MOV EDX,dword ptr [0x0079c1bc]
005DEC66  8D 8D A0 FE FF FF         LEA ECX,[EBP + 0xfffffea0]
005DEC6C  51                        PUSH ECX
005DEC6D  52                        PUSH EDX
005DEC6E  68 80 76 80 00            PUSH 0x807680
005DEC73  68 40 D1 7C 00            PUSH 0x7cd140
005DEC78  68 16 ED 80 00            PUSH 0x80ed16
005DEC7D  FF D7                     CALL EDI
005DEC7F  83 C4 18                  ADD ESP,0x18
005DEC82  EB 23                     JMP 0x005deca7
LAB_005dec84:
005DEC84  8B 15 BC C1 79 00         MOV EDX,dword ptr [0x0079c1bc]
005DEC8A  8D 8D A0 FE FF FF         LEA ECX,[EBP + 0xfffffea0]
005DEC90  56                        PUSH ESI
005DEC91  51                        PUSH ECX
005DEC92  52                        PUSH EDX
005DEC93  68 80 76 80 00            PUSH 0x807680
005DEC98  68 30 D9 7C 00            PUSH 0x7cd930
005DEC9D  68 16 ED 80 00            PUSH 0x80ed16
005DECA2  FF D7                     CALL EDI
005DECA4  83 C4 1C                  ADD ESP,0x1c
LAB_005deca7:
005DECA7  8D 85 54 FA FF FF         LEA EAX,[EBP + 0xfffffa54]
005DECAD  46                        INC ESI
005DECAE  50                        PUSH EAX
005DECAF  68 16 ED 80 00            PUSH 0x80ed16
005DECB4  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005DECB7  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
005DECBD  33 C9                     XOR ECX,ECX
005DECBF  83 F8 FF                  CMP EAX,-0x1
005DECC2  0F 95 C1                  SETNZ CL
005DECC5  8B C1                     MOV EAX,ECX
005DECC7  85 C0                     TEST EAX,EAX
005DECC9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005DECCC  75 88                     JNZ 0x005dec56
LAB_005decce:
005DECCE  8D 95 A0 FE FF FF         LEA EDX,[EBP + 0xfffffea0]
005DECD4  6A 00                     PUSH 0x0
005DECD6  8D 85 94 FB FF FF         LEA EAX,[EBP + 0xfffffb94]
005DECDC  52                        PUSH EDX
005DECDD  8D 8D 98 FC FF FF         LEA ECX,[EBP + 0xfffffc98]
005DECE3  50                        PUSH EAX
005DECE4  51                        PUSH ECX
005DECE5  68 16 ED 80 00            PUSH 0x80ed16
005DECEA  E8 41 FA 14 00            CALL 0x0072e730
005DECEF  8B 15 C0 C1 79 00         MOV EDX,dword ptr [0x0079c1c0]
005DECF5  8D 85 A0 FE FF FF         LEA EAX,[EBP + 0xfffffea0]
005DECFB  52                        PUSH EDX
005DECFC  8D 8D 94 FB FF FF         LEA ECX,[EBP + 0xfffffb94]
005DED02  50                        PUSH EAX
005DED03  8D 95 98 FC FF FF         LEA EDX,[EBP + 0xfffffc98]
005DED09  51                        PUSH ECX
005DED0A  8D 85 9C FD FF FF         LEA EAX,[EBP + 0xfffffd9c]
005DED10  52                        PUSH EDX
005DED11  50                        PUSH EAX
005DED12  E8 F9 03 15 00            CALL 0x0072f110
005DED17  83 C4 28                  ADD ESP,0x28
005DED1A  8B 3D 80 BC 85 00         MOV EDI,dword ptr [0x0085bc80]
005DED20  8D 8D 9C FD FF FF         LEA ECX,[EBP + 0xfffffd9c]
005DED26  6A 00                     PUSH 0x0
005DED28  68 80 00 00 00            PUSH 0x80
005DED2D  6A 02                     PUSH 0x2
005DED2F  6A 00                     PUSH 0x0
005DED31  6A 01                     PUSH 0x1
005DED33  68 00 00 00 40            PUSH 0x40000000
005DED38  51                        PUSH ECX
005DED39  FF D7                     CALL EDI
005DED3B  8B F0                     MOV ESI,EAX
005DED3D  83 FE FF                  CMP ESI,-0x1
005DED40  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005DED43  75 17                     JNZ 0x005ded5c
005DED45  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005DED4B  68 58 04 00 00            PUSH 0x458
005DED50  68 18 D7 7C 00            PUSH 0x7cd718
005DED55  52                        PUSH EDX
005DED56  50                        PUSH EAX
005DED57  E8 E4 70 0C 00            CALL 0x006a5e40
LAB_005ded5c:
005DED5C  6A 00                     PUSH 0x0
005DED5E  6A 00                     PUSH 0x0
005DED60  6A 00                     PUSH 0x0
005DED62  56                        PUSH ESI
005DED63  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
005DED69  83 F8 FF                  CMP EAX,-0x1
005DED6C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DED6F  75 17                     JNZ 0x005ded88
005DED71  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005DED76  68 59 04 00 00            PUSH 0x459
005DED7B  68 18 D7 7C 00            PUSH 0x7cd718
005DED80  50                        PUSH EAX
005DED81  6A FF                     PUSH -0x1
005DED83  E8 B8 70 0C 00            CALL 0x006a5e40
LAB_005ded88:
005DED88  8B 93 AE 06 00 00         MOV EDX,dword ptr [EBX + 0x6ae]
005DED8E  8B 83 9A 06 00 00         MOV EAX,dword ptr [EBX + 0x69a]
005DED94  8D 4D FC                  LEA ECX,[EBP + -0x4]
005DED97  6A 00                     PUSH 0x0
005DED99  51                        PUSH ECX
005DED9A  52                        PUSH EDX
005DED9B  50                        PUSH EAX
005DED9C  56                        PUSH ESI
005DED9D  FF 15 90 BC 85 00         CALL dword ptr [0x0085bc90]
005DEDA3  85 C0                     TEST EAX,EAX
005DEDA5  74 0D                     JZ 0x005dedb4
005DEDA7  8B 8B AE 06 00 00         MOV ECX,dword ptr [EBX + 0x6ae]
005DEDAD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DEDB0  3B C8                     CMP ECX,EAX
005DEDB2  74 18                     JZ 0x005dedcc
LAB_005dedb4:
005DEDB4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005DEDBA  68 5A 04 00 00            PUSH 0x45a
005DEDBF  68 18 D7 7C 00            PUSH 0x7cd718
005DEDC4  52                        PUSH EDX
005DEDC5  6A FF                     PUSH -0x1
005DEDC7  E8 74 70 0C 00            CALL 0x006a5e40
LAB_005dedcc:
005DEDCC  56                        PUSH ESI
005DEDCD  FF 15 B0 BB 85 00         CALL dword ptr [0x0085bbb0]
005DEDD3  56                        PUSH ESI
005DEDD4  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
005DEDDA  A1 C4 C1 79 00            MOV EAX,[0x0079c1c4]
005DEDDF  8D 8D A0 FE FF FF         LEA ECX,[EBP + 0xfffffea0]
005DEDE5  50                        PUSH EAX
005DEDE6  8D 95 94 FB FF FF         LEA EDX,[EBP + 0xfffffb94]
005DEDEC  51                        PUSH ECX
005DEDED  8D 85 98 FC FF FF         LEA EAX,[EBP + 0xfffffc98]
005DEDF3  52                        PUSH EDX
005DEDF4  8D 8D 9C FD FF FF         LEA ECX,[EBP + 0xfffffd9c]
005DEDFA  50                        PUSH EAX
005DEDFB  51                        PUSH ECX
005DEDFC  E8 0F 03 15 00            CALL 0x0072f110
005DEE01  83 C4 14                  ADD ESP,0x14
005DEE04  8D 95 9C FD FF FF         LEA EDX,[EBP + 0xfffffd9c]
005DEE0A  6A 00                     PUSH 0x0
005DEE0C  68 80 00 00 00            PUSH 0x80
005DEE11  6A 02                     PUSH 0x2
005DEE13  6A 00                     PUSH 0x0
005DEE15  6A 01                     PUSH 0x1
005DEE17  68 00 00 00 40            PUSH 0x40000000
005DEE1C  52                        PUSH EDX
005DEE1D  FF D7                     CALL EDI
005DEE1F  8B F0                     MOV ESI,EAX
005DEE21  83 FE FF                  CMP ESI,-0x1
005DEE24  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005DEE27  75 16                     JNZ 0x005dee3f
005DEE29  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005DEE2E  68 5F 04 00 00            PUSH 0x45f
005DEE33  68 18 D7 7C 00            PUSH 0x7cd718
005DEE38  50                        PUSH EAX
005DEE39  56                        PUSH ESI
005DEE3A  E8 01 70 0C 00            CALL 0x006a5e40
LAB_005dee3f:
005DEE3F  6A 00                     PUSH 0x0
005DEE41  6A 00                     PUSH 0x0
005DEE43  6A 00                     PUSH 0x0
005DEE45  56                        PUSH ESI
005DEE46  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
005DEE4C  83 F8 FF                  CMP EAX,-0x1
005DEE4F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DEE52  75 17                     JNZ 0x005dee6b
005DEE54  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
005DEE5A  68 60 04 00 00            PUSH 0x460
005DEE5F  68 18 D7 7C 00            PUSH 0x7cd718
005DEE64  51                        PUSH ECX
005DEE65  50                        PUSH EAX
005DEE66  E8 D5 6F 0C 00            CALL 0x006a5e40
LAB_005dee6b:
005DEE6B  8B 83 B2 06 00 00         MOV EAX,dword ptr [EBX + 0x6b2]
005DEE71  8B 8B AE 06 00 00         MOV ECX,dword ptr [EBX + 0x6ae]
005DEE77  8D 55 FC                  LEA EDX,[EBP + -0x4]
005DEE7A  6A 00                     PUSH 0x0
005DEE7C  52                        PUSH EDX
005DEE7D  50                        PUSH EAX
005DEE7E  03 8B 9A 06 00 00         ADD ECX,dword ptr [EBX + 0x69a]
005DEE84  51                        PUSH ECX
005DEE85  56                        PUSH ESI
005DEE86  FF 15 90 BC 85 00         CALL dword ptr [0x0085bc90]
005DEE8C  85 C0                     TEST EAX,EAX
005DEE8E  74 0D                     JZ 0x005dee9d
005DEE90  8B 93 B2 06 00 00         MOV EDX,dword ptr [EBX + 0x6b2]
005DEE96  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DEE99  3B D0                     CMP EDX,EAX
005DEE9B  74 17                     JZ 0x005deeb4
LAB_005dee9d:
005DEE9D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005DEEA2  68 61 04 00 00            PUSH 0x461
005DEEA7  68 18 D7 7C 00            PUSH 0x7cd718
005DEEAC  50                        PUSH EAX
005DEEAD  6A FF                     PUSH -0x1
005DEEAF  E8 8C 6F 0C 00            CALL 0x006a5e40
LAB_005deeb4:
005DEEB4  56                        PUSH ESI
005DEEB5  FF 15 B0 BB 85 00         CALL dword ptr [0x0085bbb0]
005DEEBB  56                        PUSH ESI
005DEEBC  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
005DEEC2  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005DEEC5  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
005DEECC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005DEECF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DEED5  5F                        POP EDI
005DEED6  5E                        POP ESI
005DEED7  5B                        POP EBX
005DEED8  8B E5                     MOV ESP,EBP
005DEEDA  5D                        POP EBP
005DEEDB  C3                        RET
LAB_005deedc:
005DEEDC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005DEEDF  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
005DEEE2  3B C6                     CMP EAX,ESI
005DEEE4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DEEEA  74 07                     JZ 0x005deef3
005DEEEC  50                        PUSH EAX
005DEEED  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_005deef3:
005DEEF3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005DEEF6  5F                        POP EDI
005DEEF7  5E                        POP ESI
005DEEF8  5B                        POP EBX
005DEEF9  8B E5                     MOV ESP,EBP
005DEEFB  5D                        POP EBP
005DEEFC  C3                        RET
