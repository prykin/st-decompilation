FUN_00600750:
00600750  55                        PUSH EBP
00600751  8B EC                     MOV EBP,ESP
00600753  83 EC 28                  SUB ESP,0x28
00600756  57                        PUSH EDI
00600757  8B F9                     MOV EDI,ECX
00600759  33 C0                     XOR EAX,EAX
0060075B  8B 8F 26 02 00 00         MOV ECX,dword ptr [EDI + 0x226]
00600761  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00600764  3B C8                     CMP ECX,EAX
00600766  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00600769  0F 8E 1D 07 00 00         JLE 0x00600e8c
0060076F  53                        PUSH EBX
00600770  56                        PUSH ESI
LAB_00600771:
00600771  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00600774  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
0060077A  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0060077D  8D 1C C3                  LEA EBX,[EBX + EAX*0x8]
00600780  D1 E3                     SHL EBX,0x1
00600782  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00600785  8D 04 0B                  LEA EAX,[EBX + ECX*0x1]
00600788  8B 4C 0B 39               MOV ECX,dword ptr [EBX + ECX*0x1 + 0x39]
0060078C  49                        DEC ECX
0060078D  83 F9 04                  CMP ECX,0x4
00600790  0F 87 DF 06 00 00         JA 0x00600e75
switchD_00600796::switchD:
00600796  FF 24 8D AC 0E 60 00      JMP dword ptr [ECX*0x4 + 0x600eac]
switchD_00600796::caseD_2:
0060079D  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006007A3  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
006007A9  8B 50 3D                  MOV EDX,dword ptr [EAX + 0x3d]
006007AC  3B CA                     CMP ECX,EDX
006007AE  0F 82 C1 06 00 00         JC 0x00600e75
006007B4  8B 97 2E 02 00 00         MOV EDX,dword ptr [EDI + 0x22e]
006007BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006007BD  52                        PUSH EDX
006007BE  6A 03                     PUSH 0x3
006007C0  50                        PUSH EAX
006007C1  8B CF                     MOV ECX,EDI
006007C3  E8 89 2F E0 FF            CALL 0x00403751
006007C8  85 C0                     TEST EAX,EAX
006007CA  0F 8C A5 06 00 00         JL 0x00600e75
006007D0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006007D3  50                        PUSH EAX
006007D4  51                        PUSH ECX
006007D5  8B CF                     MOV ECX,EDI
006007D7  E8 F2 20 E0 FF            CALL 0x004028ce
006007DC  85 C0                     TEST EAX,EAX
006007DE  0F 84 91 06 00 00         JZ 0x00600e75
006007E4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006007E7  8B CF                     MOV ECX,EDI
006007E9  56                        PUSH ESI
006007EA  6A 00                     PUSH 0x0
006007EC  E8 36 36 E0 FF            CALL 0x00403e27
006007F1  85 C0                     TEST EAX,EAX
006007F3  0F 85 2F 01 00 00         JNZ 0x00600928
006007F9  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
006007FF  C7 44 13 39 01 00 00 00   MOV dword ptr [EBX + EDX*0x1 + 0x39],0x1
00600807  E9 69 06 00 00            JMP 0x00600e75
switchD_00600796::caseD_1:
0060080C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0060080F  8B CF                     MOV ECX,EDI
00600811  56                        PUSH ESI
00600812  E8 5E 47 E0 FF            CALL 0x00404f75
00600817  85 C0                     TEST EAX,EAX
00600819  0F 84 16 01 00 00         JZ 0x00600935
0060081F  8B 87 33 02 00 00         MOV EAX,dword ptr [EDI + 0x233]
00600825  C7 44 03 39 03 00 00 00   MOV dword ptr [EBX + EAX*0x1 + 0x39],0x3
0060082D  8A 87 32 02 00 00         MOV AL,byte ptr [EDI + 0x232]
00600833  84 C0                     TEST AL,AL
00600835  0F 84 ED 00 00 00         JZ 0x00600928
0060083B  56                        PUSH ESI
0060083C  6A 01                     PUSH 0x1
0060083E  8B CF                     MOV ECX,EDI
00600840  E8 E2 35 E0 FF            CALL 0x00403e27
00600845  85 C0                     TEST EAX,EAX
00600847  0F 85 DB 00 00 00         JNZ 0x00600928
0060084D  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
00600853  66 8B 44 0B 08            MOV AX,word ptr [EBX + ECX*0x1 + 0x8]
00600858  8D 34 0B                  LEA ESI,[EBX + ECX*0x1]
0060085B  66 85 C0                  TEST AX,AX
0060085E  8B 5E 42                  MOV EBX,dword ptr [ESI + 0x42]
00600861  0F BF C8                  MOVSX ECX,AX
00600864  B8 79 19 8C 02            MOV EAX,0x28c1979
00600869  7C 10                     JL 0x0060087b
0060086B  F7 E9                     IMUL ECX
0060086D  D1 FA                     SAR EDX,0x1
0060086F  8B C2                     MOV EAX,EDX
00600871  C1 E8 1F                  SHR EAX,0x1f
00600874  03 D0                     ADD EDX,EAX
00600876  0F BF CA                  MOVSX ECX,DX
00600879  EB 0F                     JMP 0x0060088a
LAB_0060087b:
0060087B  F7 E9                     IMUL ECX
0060087D  D1 FA                     SAR EDX,0x1
0060087F  8B CA                     MOV ECX,EDX
00600881  C1 E9 1F                  SHR ECX,0x1f
00600884  03 D1                     ADD EDX,ECX
00600886  0F BF CA                  MOVSX ECX,DX
00600889  49                        DEC ECX
LAB_0060088a:
0060088A  66 8B 46 06               MOV AX,word ptr [ESI + 0x6]
0060088E  66 85 C0                  TEST AX,AX
00600891  0F BF D0                  MOVSX EDX,AX
00600894  B8 79 19 8C 02            MOV EAX,0x28c1979
00600899  7C 10                     JL 0x006008ab
0060089B  F7 EA                     IMUL EDX
0060089D  D1 FA                     SAR EDX,0x1
0060089F  8B C2                     MOV EAX,EDX
006008A1  C1 E8 1F                  SHR EAX,0x1f
006008A4  03 D0                     ADD EDX,EAX
006008A6  0F BF C2                  MOVSX EAX,DX
006008A9  EB 0F                     JMP 0x006008ba
LAB_006008ab:
006008AB  F7 EA                     IMUL EDX
006008AD  D1 FA                     SAR EDX,0x1
006008AF  8B C2                     MOV EAX,EDX
006008B1  C1 E8 1F                  SHR EAX,0x1f
006008B4  03 D0                     ADD EDX,EAX
006008B6  0F BF C2                  MOVSX EAX,DX
006008B9  48                        DEC EAX
LAB_006008ba:
006008BA  68 60 04 00 00            PUSH 0x460
006008BF  51                        PUSH ECX
006008C0  50                        PUSH EAX
006008C1  8B CF                     MOV ECX,EDI
006008C3  E8 48 3D E0 FF            CALL 0x00404610
006008C8  8B 87 E9 01 00 00         MOV EAX,dword ptr [EDI + 0x1e9]
006008CE  85 C0                     TEST EAX,EAX
006008D0  74 38                     JZ 0x0060090a
006008D2  8B 8F F1 01 00 00         MOV ECX,dword ptr [EDI + 0x1f1]
006008D8  85 C9                     TEST ECX,ECX
006008DA  75 18                     JNZ 0x006008f4
006008DC  8B 88 ED 01 00 00         MOV ECX,dword ptr [EAX + 0x1ed]
006008E2  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
006008E5  51                        PUSH ECX
006008E6  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006008EC  52                        PUSH EDX
006008ED  E8 6E 9B 0E 00            CALL 0x006ea460
006008F2  EB 16                     JMP 0x0060090a
LAB_006008f4:
006008F4  8B 80 ED 01 00 00         MOV EAX,dword ptr [EAX + 0x1ed]
006008FA  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
006008FD  50                        PUSH EAX
006008FE  51                        PUSH ECX
006008FF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00600905  E8 D6 9A 0E 00            CALL 0x006ea3e0
LAB_0060090a:
0060090A  6A 53                     PUSH 0x53
0060090C  6A 5A                     PUSH 0x5a
0060090E  6A 01                     PUSH 0x1
00600910  8B CB                     MOV ECX,EBX
00600912  E8 B5 49 E0 FF            CALL 0x004052cc
00600917  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060091D  50                        PUSH EAX
0060091E  E8 BD 9B 0E 00            CALL 0x006ea4e0
00600923  E9 4D 05 00 00            JMP 0x00600e75
LAB_00600928:
00600928  56                        PUSH ESI
00600929  8B CF                     MOV ECX,EDI
0060092B  E8 78 2C E0 FF            CALL 0x004035a8
00600930  E9 40 05 00 00            JMP 0x00600e75
LAB_00600935:
00600935  8A 87 32 02 00 00         MOV AL,byte ptr [EDI + 0x232]
0060093B  84 C0                     TEST AL,AL
0060093D  0F 84 32 05 00 00         JZ 0x00600e75
00600943  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
00600949  8B 44 13 42               MOV EAX,dword ptr [EBX + EDX*0x1 + 0x42]
0060094D  8D 34 13                  LEA ESI,[EBX + EDX*0x1]
00600950  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00600953  A1 88 2A 80 00            MOV EAX,[0x00802a88]
00600958  85 C0                     TEST EAX,EAX
0060095A  0F 84 5C 01 00 00         JZ 0x00600abc
00600960  66 8B 46 0A               MOV AX,word ptr [ESI + 0xa]
00600964  66 85 C0                  TEST AX,AX
00600967  0F BF C8                  MOVSX ECX,AX
0060096A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0060096F  7C 14                     JL 0x00600985
00600971  F7 E9                     IMUL ECX
00600973  C1 FA 06                  SAR EDX,0x6
00600976  8B CA                     MOV ECX,EDX
00600978  C1 E9 1F                  SHR ECX,0x1f
0060097B  03 D1                     ADD EDX,ECX
0060097D  0F BF D2                  MOVSX EDX,DX
00600980  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00600983  EB 13                     JMP 0x00600998
LAB_00600985:
00600985  F7 E9                     IMUL ECX
00600987  C1 FA 06                  SAR EDX,0x6
0060098A  8B C2                     MOV EAX,EDX
0060098C  C1 E8 1F                  SHR EAX,0x1f
0060098F  03 D0                     ADD EDX,EAX
00600991  0F BF C2                  MOVSX EAX,DX
00600994  48                        DEC EAX
00600995  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00600998:
00600998  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
0060099C  66 85 C0                  TEST AX,AX
0060099F  0F BF C8                  MOVSX ECX,AX
006009A2  B8 79 19 8C 02            MOV EAX,0x28c1979
006009A7  7C 10                     JL 0x006009b9
006009A9  F7 E9                     IMUL ECX
006009AB  D1 FA                     SAR EDX,0x1
006009AD  8B CA                     MOV ECX,EDX
006009AF  C1 E9 1F                  SHR ECX,0x1f
006009B2  03 D1                     ADD EDX,ECX
006009B4  0F BF CA                  MOVSX ECX,DX
006009B7  EB 0F                     JMP 0x006009c8
LAB_006009b9:
006009B9  F7 E9                     IMUL ECX
006009BB  D1 FA                     SAR EDX,0x1
006009BD  8B C2                     MOV EAX,EDX
006009BF  C1 E8 1F                  SHR EAX,0x1f
006009C2  03 D0                     ADD EDX,EAX
006009C4  0F BF CA                  MOVSX ECX,DX
006009C7  49                        DEC ECX
LAB_006009c8:
006009C8  66 8B 46 06               MOV AX,word ptr [ESI + 0x6]
006009CC  66 85 C0                  TEST AX,AX
006009CF  0F BF D0                  MOVSX EDX,AX
006009D2  B8 79 19 8C 02            MOV EAX,0x28c1979
006009D7  7C 10                     JL 0x006009e9
006009D9  F7 EA                     IMUL EDX
006009DB  D1 FA                     SAR EDX,0x1
006009DD  8B C2                     MOV EAX,EDX
006009DF  C1 E8 1F                  SHR EAX,0x1f
006009E2  03 D0                     ADD EDX,EAX
006009E4  0F BF C2                  MOVSX EAX,DX
006009E7  EB 0F                     JMP 0x006009f8
LAB_006009e9:
006009E9  F7 EA                     IMUL EDX
006009EB  D1 FA                     SAR EDX,0x1
006009ED  8B C2                     MOV EAX,EDX
006009EF  C1 E8 1F                  SHR EAX,0x1f
006009F2  03 D0                     ADD EDX,EAX
006009F4  0F BF C2                  MOVSX EAX,DX
006009F7  48                        DEC EAX
LAB_006009f8:
006009F8  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
006009FE  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
00600A04  80 FA FF                  CMP DL,0xff
00600A07  74 6D                     JZ 0x00600a76
00600A09  8B 96 F8 00 00 00         MOV EDX,dword ptr [ESI + 0xf8]
00600A0F  85 D2                     TEST EDX,EDX
00600A11  74 63                     JZ 0x00600a76
00600A13  8D 55 E0                  LEA EDX,[EBP + -0x20]
00600A16  52                        PUSH EDX
00600A17  8D 55 E8                  LEA EDX,[EBP + -0x18]
00600A1A  52                        PUSH EDX
00600A1B  51                        PUSH ECX
00600A1C  50                        PUSH EAX
00600A1D  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
00600A23  50                        PUSH EAX
00600A24  8B CE                     MOV ECX,ESI
00600A26  E8 28 35 E0 FF            CALL 0x00403f53
00600A2B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00600A2E  85 C0                     TEST EAX,EAX
00600A30  7C 44                     JL 0x00600a76
00600A32  8B D0                     MOV EDX,EAX
00600A34  83 FA 05                  CMP EDX,0x5
00600A37  7D 3D                     JGE 0x00600a76
00600A39  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00600A3C  85 C0                     TEST EAX,EAX
00600A3E  7C 36                     JL 0x00600a76
00600A40  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00600A43  3B C1                     CMP EAX,ECX
00600A45  7D 2F                     JGE 0x00600a76
00600A47  8B 14 95 D0 AE 79 00      MOV EDX,dword ptr [EDX*0x4 + 0x79aed0]
00600A4E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00600A51  03 C2                     ADD EAX,EDX
00600A53  85 C0                     TEST EAX,EAX
00600A55  7C 1F                     JL 0x00600a76
00600A57  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
00600A5A  7D 1A                     JGE 0x00600a76
00600A5C  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
00600A5F  85 F6                     TEST ESI,ESI
00600A61  74 13                     JZ 0x00600a76
00600A63  0F AF C1                  IMUL EAX,ECX
00600A66  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00600A69  33 C9                     XOR ECX,ECX
00600A6B  03 C2                     ADD EAX,EDX
00600A6D  8A 0C 30                  MOV CL,byte ptr [EAX + ESI*0x1]
00600A70  8B C1                     MOV EAX,ECX
00600A72  85 C0                     TEST EAX,EAX
00600A74  74 25                     JZ 0x00600a9b
LAB_00600a76:
00600A76  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
00600A7C  8A 44 13 41               MOV AL,byte ptr [EBX + EDX*0x1 + 0x41]
00600A80  84 C0                     TEST AL,AL
00600A82  75 38                     JNZ 0x00600abc
00600A84  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00600A87  6A 00                     PUSH 0x0
00600A89  E8 F4 1E E0 FF            CALL 0x00402982
00600A8E  8B 87 33 02 00 00         MOV EAX,dword ptr [EDI + 0x233]
00600A94  C6 44 03 41 01            MOV byte ptr [EBX + EAX*0x1 + 0x41],0x1
00600A99  EB 21                     JMP 0x00600abc
LAB_00600a9b:
00600A9B  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
00600AA1  8A 44 0B 41               MOV AL,byte ptr [EBX + ECX*0x1 + 0x41]
00600AA5  84 C0                     TEST AL,AL
00600AA7  74 13                     JZ 0x00600abc
00600AA9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00600AAC  E8 5E 32 E0 FF            CALL 0x00403d0f
00600AB1  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
00600AB7  C6 44 13 41 00            MOV byte ptr [EBX + EDX*0x1 + 0x41],0x0
LAB_00600abc:
00600ABC  8B 87 33 02 00 00         MOV EAX,dword ptr [EDI + 0x233]
00600AC2  03 C3                     ADD EAX,EBX
00600AC4  0F BF 48 0A               MOVSX ECX,word ptr [EAX + 0xa]
00600AC8  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00600ACB  51                        PUSH ECX
00600ACC  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00600ACF  0F BF 50 08               MOVSX EDX,word ptr [EAX + 0x8]
00600AD3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00600AD9  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00600ADC  0F BF 40 06               MOVSX EAX,word ptr [EAX + 0x6]
00600AE0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00600AE6  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00600AEC  D9 1C 24                  FSTP float ptr [ESP]
00600AEF  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00600AF2  51                        PUSH ECX
00600AF3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00600AF6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00600AFC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00600B02  D9 1C 24                  FSTP float ptr [ESP]
00600B05  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00600B08  51                        PUSH ECX
00600B09  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00600B0C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00600B12  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00600B18  D9 1C 24                  FSTP float ptr [ESP]
00600B1B  E8 B9 3A E0 FF            CALL 0x004045d9
00600B20  E9 50 03 00 00            JMP 0x00600e75
switchD_00600796::caseD_3:
00600B25  8A 8F 32 02 00 00         MOV CL,byte ptr [EDI + 0x232]
00600B2B  84 C9                     TEST CL,CL
00600B2D  0F 84 25 03 00 00         JZ 0x00600e58
00600B33  8B 70 42                  MOV ESI,dword ptr [EAX + 0x42]
00600B36  6A 0D                     PUSH 0xd
00600B38  8B CE                     MOV ECX,ESI
00600B3A  E8 70 37 E0 FF            CALL 0x004042af
00600B3F  6A 0E                     PUSH 0xe
00600B41  8B CE                     MOV ECX,ESI
00600B43  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00600B46  E8 64 37 E0 FF            CALL 0x004042af
00600B4B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00600B4E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00600B51  83 F8 16                  CMP EAX,0x16
00600B54  7C 53                     JL 0x00600ba9
00600B56  83 F8 16                  CMP EAX,0x16
00600B59  75 16                     JNZ 0x00600b71
00600B5B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00600B61  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00600B67  8B CE                     MOV ECX,ESI
00600B69  52                        PUSH EDX
00600B6A  6A 0F                     PUSH 0xf
00600B6C  E8 CF 46 E0 FF            CALL 0x00405240
LAB_00600b71:
00600B71  6A 0F                     PUSH 0xf
00600B73  8B CE                     MOV ECX,ESI
00600B75  E8 35 37 E0 FF            CALL 0x004042af
00600B7A  6A 0F                     PUSH 0xf
00600B7C  8B CE                     MOV ECX,ESI
00600B7E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00600B81  E8 36 25 E0 FF            CALL 0x004030bc
00600B86  6A 0F                     PUSH 0xf
00600B88  8B CE                     MOV ECX,ESI
00600B8A  E8 1D 17 E0 FF            CALL 0x004022ac
00600B8F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00600B92  3B C8                     CMP ECX,EAX
00600B94  7D 06                     JGE 0x00600b9c
00600B96  8B C1                     MOV EAX,ECX
00600B98  40                        INC EAX
00600B99  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00600b9c:
00600B9C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00600B9F  8B CE                     MOV ECX,ESI
00600BA1  50                        PUSH EAX
00600BA2  6A 0F                     PUSH 0xf
00600BA4  E8 BB 04 E0 FF            CALL 0x00401064
LAB_00600ba9:
00600BA9  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
00600BAF  8A 44 0B 28               MOV AL,byte ptr [EBX + ECX*0x1 + 0x28]
00600BB3  84 C0                     TEST AL,AL
00600BB5  74 22                     JZ 0x00600bd9
00600BB7  6A 0E                     PUSH 0xe
00600BB9  8B CE                     MOV ECX,ESI
00600BBB  E8 EC 16 E0 FF            CALL 0x004022ac
00600BC0  8B D8                     MOV EBX,EAX
00600BC2  6A 0E                     PUSH 0xe
00600BC4  8B CE                     MOV ECX,ESI
00600BC6  4B                        DEC EBX
00600BC7  E8 E3 36 E0 FF            CALL 0x004042af
00600BCC  3B D8                     CMP EBX,EAX
00600BCE  75 09                     JNZ 0x00600bd9
00600BD0  6A 0E                     PUSH 0xe
00600BD2  8B CE                     MOV ECX,ESI
00600BD4  E8 8B 36 E0 FF            CALL 0x00404264
LAB_00600bd9:
00600BD9  6A 0D                     PUSH 0xd
00600BDB  8B CE                     MOV ECX,ESI
00600BDD  E8 CA 16 E0 FF            CALL 0x004022ac
00600BE2  8B D8                     MOV EBX,EAX
00600BE4  6A 0D                     PUSH 0xd
00600BE6  8B CE                     MOV ECX,ESI
00600BE8  4B                        DEC EBX
00600BE9  E8 C1 36 E0 FF            CALL 0x004042af
00600BEE  3B D8                     CMP EBX,EAX
00600BF0  75 09                     JNZ 0x00600bfb
00600BF2  6A 0D                     PUSH 0xd
00600BF4  8B CE                     MOV ECX,ESI
00600BF6  E8 69 36 E0 FF            CALL 0x00404264
LAB_00600bfb:
00600BFB  6A 0F                     PUSH 0xf
00600BFD  8B CE                     MOV ECX,ESI
00600BFF  E8 A8 16 E0 FF            CALL 0x004022ac
00600C04  8B D8                     MOV EBX,EAX
00600C06  6A 0F                     PUSH 0xf
00600C08  8B CE                     MOV ECX,ESI
00600C0A  4B                        DEC EBX
00600C0B  E8 9F 36 E0 FF            CALL 0x004042af
00600C10  3B D8                     CMP EBX,EAX
00600C12  75 11                     JNZ 0x00600c25
00600C14  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
00600C1A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00600C1D  C7 44 10 39 04 00 00 00   MOV dword ptr [EAX + EDX*0x1 + 0x39],0x4
LAB_00600c25:
00600C25  6A 0D                     PUSH 0xd
00600C27  8B CE                     MOV ECX,ESI
00600C29  E8 7E 16 E0 FF            CALL 0x004022ac
00600C2E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00600C31  3B D8                     CMP EBX,EAX
00600C33  7D 01                     JGE 0x00600c36
00600C35  43                        INC EBX
LAB_00600c36:
00600C36  6A 0E                     PUSH 0xe
00600C38  8B CE                     MOV ECX,ESI
00600C3A  E8 6D 16 E0 FF            CALL 0x004022ac
00600C3F  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00600C42  3B C8                     CMP ECX,EAX
00600C44  7D 01                     JGE 0x00600c47
00600C46  41                        INC ECX
LAB_00600c47:
00600C47  51                        PUSH ECX
00600C48  6A 0E                     PUSH 0xe
00600C4A  8B CE                     MOV ECX,ESI
00600C4C  E8 13 04 E0 FF            CALL 0x00401064
00600C51  6A 0E                     PUSH 0xe
00600C53  8B CE                     MOV ECX,ESI
00600C55  E8 62 24 E0 FF            CALL 0x004030bc
00600C5A  53                        PUSH EBX
00600C5B  6A 0D                     PUSH 0xd
00600C5D  8B CE                     MOV ECX,ESI
00600C5F  E8 00 04 E0 FF            CALL 0x00401064
00600C64  6A 0D                     PUSH 0xd
00600C66  8B CE                     MOV ECX,ESI
00600C68  E8 4F 24 E0 FF            CALL 0x004030bc
00600C6D  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
00600C73  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00600C76  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
00600C79  0F BF 4C 0A 0A            MOVSX ECX,word ptr [EDX + ECX*0x1 + 0xa]
00600C7E  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00600C81  51                        PUSH ECX
00600C82  DB 45 DC                  FILD dword ptr [EBP + -0x24]
00600C85  0F BF 50 08               MOVSX EDX,word ptr [EAX + 0x8]
00600C89  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00600C8F  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00600C92  0F BF 40 06               MOVSX EAX,word ptr [EAX + 0x6]
00600C96  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00600C9C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00600CA2  D9 1C 24                  FSTP float ptr [ESP]
00600CA5  DB 45 DC                  FILD dword ptr [EBP + -0x24]
00600CA8  51                        PUSH ECX
00600CA9  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00600CAC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00600CB2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00600CB8  D9 1C 24                  FSTP float ptr [ESP]
00600CBB  DB 45 DC                  FILD dword ptr [EBP + -0x24]
00600CBE  51                        PUSH ECX
00600CBF  8B CE                     MOV ECX,ESI
00600CC1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00600CC7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00600CCD  D9 1C 24                  FSTP float ptr [ESP]
00600CD0  E8 04 39 E0 FF            CALL 0x004045d9
00600CD5  A1 88 2A 80 00            MOV EAX,[0x00802a88]
00600CDA  85 C0                     TEST EAX,EAX
00600CDC  0F 84 93 01 00 00         JZ 0x00600e75
00600CE2  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
00600CE8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00600CEB  66 8B 44 0A 0A            MOV AX,word ptr [EDX + ECX*0x1 + 0xa]
00600CF0  8D 1C 0A                  LEA EBX,[EDX + ECX*0x1]
00600CF3  66 85 C0                  TEST AX,AX
00600CF6  0F BF C8                  MOVSX ECX,AX
00600CF9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00600CFE  7C 14                     JL 0x00600d14
00600D00  F7 E9                     IMUL ECX
00600D02  C1 FA 06                  SAR EDX,0x6
00600D05  8B C2                     MOV EAX,EDX
00600D07  C1 E8 1F                  SHR EAX,0x1f
00600D0A  03 D0                     ADD EDX,EAX
00600D0C  0F BF CA                  MOVSX ECX,DX
00600D0F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00600D12  EB 13                     JMP 0x00600d27
LAB_00600d14:
00600D14  F7 E9                     IMUL ECX
00600D16  C1 FA 06                  SAR EDX,0x6
00600D19  8B C2                     MOV EAX,EDX
00600D1B  C1 E8 1F                  SHR EAX,0x1f
00600D1E  03 D0                     ADD EDX,EAX
00600D20  0F BF C2                  MOVSX EAX,DX
00600D23  48                        DEC EAX
00600D24  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00600d27:
00600D27  66 8B 43 08               MOV AX,word ptr [EBX + 0x8]
00600D2B  66 85 C0                  TEST AX,AX
00600D2E  0F BF C8                  MOVSX ECX,AX
00600D31  B8 79 19 8C 02            MOV EAX,0x28c1979
00600D36  7C 10                     JL 0x00600d48
00600D38  F7 E9                     IMUL ECX
00600D3A  D1 FA                     SAR EDX,0x1
00600D3C  8B CA                     MOV ECX,EDX
00600D3E  C1 E9 1F                  SHR ECX,0x1f
00600D41  03 D1                     ADD EDX,ECX
00600D43  0F BF CA                  MOVSX ECX,DX
00600D46  EB 0F                     JMP 0x00600d57
LAB_00600d48:
00600D48  F7 E9                     IMUL ECX
00600D4A  D1 FA                     SAR EDX,0x1
00600D4C  8B C2                     MOV EAX,EDX
00600D4E  C1 E8 1F                  SHR EAX,0x1f
00600D51  03 D0                     ADD EDX,EAX
00600D53  0F BF CA                  MOVSX ECX,DX
00600D56  49                        DEC ECX
LAB_00600d57:
00600D57  66 8B 43 06               MOV AX,word ptr [EBX + 0x6]
00600D5B  66 85 C0                  TEST AX,AX
00600D5E  0F BF D0                  MOVSX EDX,AX
00600D61  B8 79 19 8C 02            MOV EAX,0x28c1979
00600D66  7C 10                     JL 0x00600d78
00600D68  F7 EA                     IMUL EDX
00600D6A  D1 FA                     SAR EDX,0x1
00600D6C  8B C2                     MOV EAX,EDX
00600D6E  C1 E8 1F                  SHR EAX,0x1f
00600D71  03 D0                     ADD EDX,EAX
00600D73  0F BF C2                  MOVSX EAX,DX
00600D76  EB 0F                     JMP 0x00600d87
LAB_00600d78:
00600D78  F7 EA                     IMUL EDX
00600D7A  D1 FA                     SAR EDX,0x1
00600D7C  8B C2                     MOV EAX,EDX
00600D7E  C1 E8 1F                  SHR EAX,0x1f
00600D81  03 D0                     ADD EDX,EAX
00600D83  0F BF C2                  MOVSX EAX,DX
00600D86  48                        DEC EAX
LAB_00600d87:
00600D87  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00600D8D  8B 1D 88 2A 80 00         MOV EBX,dword ptr [0x00802a88]
00600D93  80 FA FF                  CMP DL,0xff
00600D96  74 6E                     JZ 0x00600e06
00600D98  8B 93 F8 00 00 00         MOV EDX,dword ptr [EBX + 0xf8]
00600D9E  85 D2                     TEST EDX,EDX
00600DA0  74 64                     JZ 0x00600e06
00600DA2  8D 55 D8                  LEA EDX,[EBP + -0x28]
00600DA5  52                        PUSH EDX
00600DA6  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00600DA9  52                        PUSH EDX
00600DAA  51                        PUSH ECX
00600DAB  50                        PUSH EAX
00600DAC  8B 83 0C 01 00 00         MOV EAX,dword ptr [EBX + 0x10c]
00600DB2  50                        PUSH EAX
00600DB3  8B CB                     MOV ECX,EBX
00600DB5  E8 99 31 E0 FF            CALL 0x00403f53
00600DBA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00600DBD  85 C0                     TEST EAX,EAX
00600DBF  7C 45                     JL 0x00600e06
00600DC1  83 F8 05                  CMP EAX,0x5
00600DC4  7D 40                     JGE 0x00600e06
00600DC6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00600DC9  85 C0                     TEST EAX,EAX
00600DCB  7C 39                     JL 0x00600e06
00600DCD  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
00600DD0  3B C1                     CMP EAX,ECX
00600DD2  7D 32                     JGE 0x00600e06
00600DD4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00600DD7  8B 04 95 D0 AE 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x79aed0]
00600DDE  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00600DE1  03 C2                     ADD EAX,EDX
00600DE3  85 C0                     TEST EAX,EAX
00600DE5  7C 1F                     JL 0x00600e06
00600DE7  3B 43 34                  CMP EAX,dword ptr [EBX + 0x34]
00600DEA  7D 1A                     JGE 0x00600e06
00600DEC  8B 5B 4C                  MOV EBX,dword ptr [EBX + 0x4c]
00600DEF  85 DB                     TEST EBX,EBX
00600DF1  74 13                     JZ 0x00600e06
00600DF3  0F AF C1                  IMUL EAX,ECX
00600DF6  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00600DF9  03 C3                     ADD EAX,EBX
00600DFB  33 C9                     XOR ECX,ECX
00600DFD  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00600E00  8B C1                     MOV EAX,ECX
00600E02  85 C0                     TEST EAX,EAX
00600E04  74 2A                     JZ 0x00600e30
LAB_00600e06:
00600E06  8B 87 33 02 00 00         MOV EAX,dword ptr [EDI + 0x233]
00600E0C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00600E0F  8A 54 01 41               MOV DL,byte ptr [ECX + EAX*0x1 + 0x41]
00600E13  84 D2                     TEST DL,DL
00600E15  75 5E                     JNZ 0x00600e75
00600E17  6A 00                     PUSH 0x0
00600E19  8B CE                     MOV ECX,ESI
00600E1B  E8 62 1B E0 FF            CALL 0x00402982
00600E20  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
00600E26  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00600E29  C6 44 10 41 01            MOV byte ptr [EAX + EDX*0x1 + 0x41],0x1
00600E2E  EB 45                     JMP 0x00600e75
LAB_00600e30:
00600E30  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
00600E36  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00600E39  8A 44 0A 41               MOV AL,byte ptr [EDX + ECX*0x1 + 0x41]
00600E3D  84 C0                     TEST AL,AL
00600E3F  74 34                     JZ 0x00600e75
00600E41  8B CE                     MOV ECX,ESI
00600E43  E8 C7 2E E0 FF            CALL 0x00403d0f
00600E48  8B 87 33 02 00 00         MOV EAX,dword ptr [EDI + 0x233]
00600E4E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00600E51  C6 44 01 41 00            MOV byte ptr [ECX + EAX*0x1 + 0x41],0x0
00600E56  EB 1D                     JMP 0x00600e75
LAB_00600e58:
00600E58  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00600E5B  8B CF                     MOV ECX,EDI
00600E5D  52                        PUSH EDX
00600E5E  E8 45 27 E0 FF            CALL 0x004035a8
00600E63  EB 10                     JMP 0x00600e75
switchD_00600796::caseD_4:
00600E65  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00600E68  8B CF                     MOV ECX,EDI
00600E6A  50                        PUSH EAX
00600E6B  E8 38 27 E0 FF            CALL 0x004035a8
00600E70  EB 03                     JMP 0x00600e75
switchD_00600796::caseD_5:
00600E72  FF 45 EC                  INC dword ptr [EBP + -0x14]
switchD_00600796::default:
00600E75  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00600E78  8B 8F 26 02 00 00         MOV ECX,dword ptr [EDI + 0x226]
00600E7E  40                        INC EAX
00600E7F  3B C1                     CMP EAX,ECX
00600E81  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00600E84  0F 8C E7 F8 FF FF         JL 0x00600771
00600E8A  5E                        POP ESI
00600E8B  5B                        POP EBX
LAB_00600e8c:
00600E8C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00600E8F  8B 87 26 02 00 00         MOV EAX,dword ptr [EDI + 0x226]
00600E95  3B C8                     CMP ECX,EAX
00600E97  5F                        POP EDI
00600E98  75 09                     JNZ 0x00600ea3
00600E9A  B8 01 00 00 00            MOV EAX,0x1
00600E9F  8B E5                     MOV ESP,EBP
00600EA1  5D                        POP EBP
00600EA2  C3                        RET
LAB_00600ea3:
00600EA3  33 C0                     XOR EAX,EAX
00600EA5  8B E5                     MOV ESP,EBP
00600EA7  5D                        POP EBP
00600EA8  C3                        RET
