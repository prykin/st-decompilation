FUN_005578d0:
005578D0  55                        PUSH EBP
005578D1  8B EC                     MOV EBP,ESP
005578D3  83 EC 4C                  SUB ESP,0x4c
005578D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005578DB  53                        PUSH EBX
005578DC  56                        PUSH ESI
005578DD  57                        PUSH EDI
005578DE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005578E1  33 FF                     XOR EDI,EDI
005578E3  8D 55 B8                  LEA EDX,[EBP + -0x48]
005578E6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005578E9  57                        PUSH EDI
005578EA  52                        PUSH EDX
005578EB  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005578EE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005578F4  E8 F7 5E 1D 00            CALL 0x0072d7f0
005578F9  8B F0                     MOV ESI,EAX
005578FB  83 C4 08                  ADD ESP,0x8
005578FE  3B F7                     CMP ESI,EDI
00557900  0F 85 76 02 00 00         JNZ 0x00557b7c
00557906  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0055790D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00557910  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
00557913  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00557916  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0055791D  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
00557920  8D 0C 02                  LEA ECX,[EDX + EAX*0x1]
00557923  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
00557926  C1 E0 04                  SHL EAX,0x4
00557929  2B C1                     SUB EAX,ECX
0055792B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0055792E  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
00557931  8D 8C C0 78 78 11 00      LEA ECX,[EAX + EAX*0x8 + 0x117878]
00557938  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0055793B  C1 F9 10                  SAR ECX,0x10
0055793E  03 C2                     ADD EAX,EDX
00557940  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
00557943  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00557946  C1 E1 04                  SHL ECX,0x4
00557949  2B C8                     SUB ECX,EAX
0055794B  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0055794E  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
00557951  8D 84 C0 78 78 11 00      LEA EAX,[EAX + EAX*0x8 + 0x117878]
00557958  C1 F8 10                  SAR EAX,0x10
0055795B  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0055795E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00557961  03 C2                     ADD EAX,EDX
00557963  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00557966  C1 E1 04                  SHL ECX,0x4
00557969  2B C8                     SUB ECX,EAX
0055796B  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0055796E  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
00557971  8D 84 C0 78 78 11 00      LEA EAX,[EAX + EAX*0x8 + 0x117878]
00557978  C1 F8 10                  SAR EAX,0x10
0055797B  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0055797E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00557981  03 C2                     ADD EAX,EDX
00557983  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00557986  C1 E1 04                  SHL ECX,0x4
00557989  2B C8                     SUB ECX,EAX
0055798B  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0055798E  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
00557991  8D 84 C0 78 78 11 00      LEA EAX,[EAX + EAX*0x8 + 0x117878]
00557998  C1 F8 10                  SAR EAX,0x10
0055799B  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0055799E  A0 4D 87 80 00            MOV AL,[0x0080874d]
005579A3  3C FF                     CMP AL,0xff
005579A5  0F 84 AE 01 00 00         JZ 0x00557b59
005579AB  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
005579AE  C7 86 14 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x114],0x1
005579B8  0F AF CA                  IMUL ECX,EDX
005579BB  D1 E1                     SHL ECX,0x1
005579BD  51                        PUSH ECX
005579BE  E8 4D 32 15 00            CALL 0x006aac10
005579C3  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
005579C6  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
005579C9  0F AF 56 34               IMUL EDX,dword ptr [ESI + 0x34]
005579CD  52                        PUSH EDX
005579CE  E8 3D 32 15 00            CALL 0x006aac10
005579D3  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
005579D6  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
005579D9  0F AF 46 34               IMUL EAX,dword ptr [ESI + 0x34]
005579DD  D1 E0                     SHL EAX,0x1
005579DF  50                        PUSH EAX
005579E0  E8 2B 32 15 00            CALL 0x006aac10
005579E5  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
005579E8  8D 7E 3C                  LEA EDI,[ESI + 0x3c]
005579EB  BB 04 00 00 00            MOV EBX,0x4
LAB_005579f0:
005579F0  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
005579F3  0F AF 4E 2C               IMUL ECX,dword ptr [ESI + 0x2c]
005579F7  51                        PUSH ECX
005579F8  E8 13 32 15 00            CALL 0x006aac10
005579FD  89 07                     MOV dword ptr [EDI],EAX
005579FF  83 C7 04                  ADD EDI,0x4
00557A02  4B                        DEC EBX
00557A03  75 EB                     JNZ 0x005579f0
00557A05  6A 0A                     PUSH 0xa
00557A07  6A 1C                     PUSH 0x1c
00557A09  6A 0A                     PUSH 0xa
00557A0B  6A 00                     PUSH 0x0
00557A0D  E8 7E 68 15 00            CALL 0x006ae290
00557A12  6A 0A                     PUSH 0xa
00557A14  6A 0C                     PUSH 0xc
00557A16  6A 0A                     PUSH 0xa
00557A18  6A 00                     PUSH 0x0
00557A1A  89 86 F4 00 00 00         MOV dword ptr [ESI + 0xf4],EAX
00557A20  E8 6B 68 15 00            CALL 0x006ae290
00557A25  33 D2                     XOR EDX,EDX
00557A27  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
00557A2D  8A 15 95 8A 80 00         MOV DL,byte ptr [0x00808a95]
00557A33  33 C0                     XOR EAX,EAX
00557A35  89 96 F8 00 00 00         MOV dword ptr [ESI + 0xf8],EDX
00557A3B  A0 4D 87 80 00            MOV AL,[0x0080874d]
00557A40  C6 84 30 FC 00 00 00 01   MOV byte ptr [EAX + ESI*0x1 + 0xfc],0x1
00557A48  A0 94 8A 80 00            MOV AL,[0x00808a94]
00557A4D  84 C0                     TEST AL,AL
00557A4F  0F 84 10 01 00 00         JZ 0x00557b65
00557A55  BF E9 87 80 00            MOV EDI,0x8087e9
00557A5A  33 DB                     XOR EBX,EBX
00557A5C  81 FF 71 8A 80 00         CMP EDI,0x808a71
00557A62  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00557A65  0F 8D D9 00 00 00         JGE 0x00557b44
LAB_00557a6b:
00557A6B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00557A70  85 C0                     TEST EAX,EAX
00557A72  74 09                     JZ 0x00557a7d
00557A74  80 3F 08                  CMP byte ptr [EDI],0x8
00557A77  0F 83 C7 00 00 00         JNC 0x00557b44
LAB_00557a7d:
00557A7D  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00557A83  33 C0                     XOR EAX,EAX
00557A85  8A C1                     MOV AL,CL
00557A87  3B D8                     CMP EBX,EAX
00557A89  0F 84 AD 00 00 00         JZ 0x00557b3c
00557A8F  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00557A95  84 D2                     TEST DL,DL
00557A97  74 2E                     JZ 0x00557ac7
00557A99  8B CB                     MOV ECX,EBX
00557A9B  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
00557A9E  81 E1 FF 00 00 00         AND ECX,0xff
00557AA4  C1 E7 04                  SHL EDI,0x4
00557AA7  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00557AAA  C1 E2 04                  SHL EDX,0x4
00557AAD  8A 8C 0A EA 87 80 00      MOV CL,byte ptr [EDX + ECX*0x1 + 0x8087ea]
00557AB4  33 D2                     XOR EDX,EDX
00557AB6  3A 8C 07 EA 87 80 00      CMP CL,byte ptr [EDI + EAX*0x1 + 0x8087ea]
00557ABD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00557AC0  0F 95 C2                  SETNZ DL
00557AC3  8B C2                     MOV EAX,EDX
00557AC5  EB 71                     JMP 0x00557b38
LAB_00557ac7:
00557AC7  3A CB                     CMP CL,BL
00557AC9  74 62                     JZ 0x00557b2d
00557ACB  8B CB                     MOV ECX,EBX
00557ACD  81 E1 FF 00 00 00         AND ECX,0xff
00557AD3  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00557ADA  84 D2                     TEST DL,DL
00557ADC  75 10                     JNZ 0x00557aee
00557ADE  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00557AE5  75 07                     JNZ 0x00557aee
00557AE7  B8 FE FF FF FF            MOV EAX,0xfffffffe
00557AEC  EB 41                     JMP 0x00557b2f
LAB_00557aee:
00557AEE  80 FA 01                  CMP DL,0x1
00557AF1  75 0F                     JNZ 0x00557b02
00557AF3  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00557AFB  75 05                     JNZ 0x00557b02
00557AFD  83 C8 FF                  OR EAX,0xffffffff
00557B00  EB 2D                     JMP 0x00557b2f
LAB_00557b02:
00557B02  84 D2                     TEST DL,DL
00557B04  75 11                     JNZ 0x00557b17
00557B06  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00557B0E  75 07                     JNZ 0x00557b17
00557B10  B8 01 00 00 00            MOV EAX,0x1
00557B15  EB 18                     JMP 0x00557b2f
LAB_00557b17:
00557B17  80 FA 01                  CMP DL,0x1
00557B1A  75 11                     JNZ 0x00557b2d
00557B1C  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00557B24  75 07                     JNZ 0x00557b2d
00557B26  B8 02 00 00 00            MOV EAX,0x2
00557B2B  EB 02                     JMP 0x00557b2f
LAB_00557b2d:
00557B2D  33 C0                     XOR EAX,EAX
LAB_00557b2f:
00557B2F  33 C9                     XOR ECX,ECX
00557B31  85 C0                     TEST EAX,EAX
00557B33  0F 9C C1                  SETL CL
00557B36  8B C1                     MOV EAX,ECX
LAB_00557b38:
00557B38  85 C0                     TEST EAX,EAX
00557B3A  75 08                     JNZ 0x00557b44
LAB_00557b3c:
00557B3C  C6 84 33 FC 00 00 00 01   MOV byte ptr [EBX + ESI*0x1 + 0xfc],0x1
LAB_00557b44:
00557B44  83 C7 51                  ADD EDI,0x51
00557B47  43                        INC EBX
00557B48  81 FF 71 8A 80 00         CMP EDI,0x808a71
00557B4E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00557B51  0F 8C 14 FF FF FF         JL 0x00557a6b
00557B57  EB 0C                     JMP 0x00557b65
LAB_00557b59:
00557B59  89 BE 14 01 00 00         MOV dword ptr [ESI + 0x114],EDI
00557B5F  89 BE F8 00 00 00         MOV dword ptr [ESI + 0xf8],EDI
LAB_00557b65:
00557B65  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00557B68  C7 46 1C D4 05 00 00      MOV dword ptr [ESI + 0x1c],0x5d4
00557B6F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00557B75  5F                        POP EDI
00557B76  5E                        POP ESI
00557B77  5B                        POP EBX
00557B78  8B E5                     MOV ESP,EBP
00557B7A  5D                        POP EBP
00557B7B  C3                        RET
LAB_00557b7c:
00557B7C  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00557B7F  68 F0 92 7C 00            PUSH 0x7c92f0
00557B84  68 CC 4C 7A 00            PUSH 0x7a4ccc
00557B89  56                        PUSH ESI
00557B8A  57                        PUSH EDI
00557B8B  6A 77                     PUSH 0x77
00557B8D  68 CC 92 7C 00            PUSH 0x7c92cc
00557B92  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00557B97  E8 34 59 15 00            CALL 0x006ad4d0
00557B9C  83 C4 18                  ADD ESP,0x18
00557B9F  85 C0                     TEST EAX,EAX
00557BA1  74 01                     JZ 0x00557ba4
00557BA3  CC                        INT3
LAB_00557ba4:
00557BA4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00557BA7  E8 E3 A5 EA FF            CALL 0x0040218f
00557BAC  6A 79                     PUSH 0x79
00557BAE  68 CC 92 7C 00            PUSH 0x7c92cc
00557BB3  57                        PUSH EDI
00557BB4  56                        PUSH ESI
00557BB5  E8 86 E2 14 00            CALL 0x006a5e40
00557BBA  5F                        POP EDI
00557BBB  5E                        POP ESI
00557BBC  5B                        POP EBX
00557BBD  8B E5                     MOV ESP,EBP
00557BBF  5D                        POP EBP
00557BC0  C3                        RET
