FUN_00586af0:
00586AF0  55                        PUSH EBP
00586AF1  8B EC                     MOV EBP,ESP
00586AF3  83 EC 68                  SUB ESP,0x68
00586AF6  53                        PUSH EBX
00586AF7  56                        PUSH ESI
00586AF8  8B F1                     MOV ESI,ECX
00586AFA  57                        PUSH EDI
00586AFB  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00586B02  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
00586B06  66 85 C0                  TEST AX,AX
00586B09  0F BF C8                  MOVSX ECX,AX
00586B0C  B8 79 19 8C 02            MOV EAX,0x28c1979
00586B11  7C 10                     JL 0x00586b23
00586B13  F7 E9                     IMUL ECX
00586B15  D1 FA                     SAR EDX,0x1
00586B17  8B C2                     MOV EAX,EDX
00586B19  C1 E8 1F                  SHR EAX,0x1f
00586B1C  03 D0                     ADD EDX,EAX
00586B1E  0F BF C2                  MOVSX EAX,DX
00586B21  EB 0F                     JMP 0x00586b32
LAB_00586b23:
00586B23  F7 E9                     IMUL ECX
00586B25  D1 FA                     SAR EDX,0x1
00586B27  8B CA                     MOV ECX,EDX
00586B29  C1 E9 1F                  SHR ECX,0x1f
00586B2C  03 D1                     ADD EDX,ECX
00586B2E  0F BF C2                  MOVSX EAX,DX
00586B31  48                        DEC EAX
LAB_00586b32:
00586B32  66 89 46 47               MOV word ptr [ESI + 0x47],AX
00586B36  66 89 46 5B               MOV word ptr [ESI + 0x5b],AX
00586B3A  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00586B3E  66 85 C0                  TEST AX,AX
00586B41  0F BF C8                  MOVSX ECX,AX
00586B44  B8 79 19 8C 02            MOV EAX,0x28c1979
00586B49  7C 10                     JL 0x00586b5b
00586B4B  F7 E9                     IMUL ECX
00586B4D  D1 FA                     SAR EDX,0x1
00586B4F  8B C2                     MOV EAX,EDX
00586B51  C1 E8 1F                  SHR EAX,0x1f
00586B54  03 D0                     ADD EDX,EAX
00586B56  0F BF C2                  MOVSX EAX,DX
00586B59  EB 0F                     JMP 0x00586b6a
LAB_00586b5b:
00586B5B  F7 E9                     IMUL ECX
00586B5D  D1 FA                     SAR EDX,0x1
00586B5F  8B CA                     MOV ECX,EDX
00586B61  C1 E9 1F                  SHR ECX,0x1f
00586B64  03 D1                     ADD EDX,ECX
00586B66  0F BF C2                  MOVSX EAX,DX
00586B69  48                        DEC EAX
LAB_00586b6a:
00586B6A  66 89 46 49               MOV word ptr [ESI + 0x49],AX
00586B6E  66 89 46 5D               MOV word ptr [ESI + 0x5d],AX
00586B72  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00586B76  66 85 C0                  TEST AX,AX
00586B79  0F BF C8                  MOVSX ECX,AX
00586B7C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00586B81  7C 11                     JL 0x00586b94
00586B83  F7 E9                     IMUL ECX
00586B85  C1 FA 06                  SAR EDX,0x6
00586B88  8B C2                     MOV EAX,EDX
00586B8A  C1 E8 1F                  SHR EAX,0x1f
00586B8D  03 D0                     ADD EDX,EAX
00586B8F  0F BF C2                  MOVSX EAX,DX
00586B92  EB 10                     JMP 0x00586ba4
LAB_00586b94:
00586B94  F7 E9                     IMUL ECX
00586B96  C1 FA 06                  SAR EDX,0x6
00586B99  8B CA                     MOV ECX,EDX
00586B9B  C1 E9 1F                  SHR ECX,0x1f
00586B9E  03 D1                     ADD EDX,ECX
00586BA0  0F BF C2                  MOVSX EAX,DX
00586BA3  48                        DEC EAX
LAB_00586ba4:
00586BA4  66 89 46 4B               MOV word ptr [ESI + 0x4b],AX
00586BA8  8B CE                     MOV ECX,ESI
00586BAA  66 89 46 5F               MOV word ptr [ESI + 0x5f],AX
00586BAE  E8 89 AE E7 FF            CALL 0x00401a3c
00586BB3  85 C0                     TEST EAX,EAX
00586BB5  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
00586BBB  74 19                     JZ 0x00586bd6
00586BBD  6A 01                     PUSH 0x1
00586BBF  8B CB                     MOV ECX,EBX
00586BC1  E8 06 E7 E7 FF            CALL 0x004052cc
00586BC6  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00586BCC  50                        PUSH EAX
00586BCD  E8 1E 40 16 00            CALL 0x006eabf0
00586BD2  6A 01                     PUSH 0x1
00586BD4  EB 26                     JMP 0x00586bfc
LAB_00586bd6:
00586BD6  6A 00                     PUSH 0x0
00586BD8  8B CB                     MOV ECX,EBX
00586BDA  E8 ED E6 E7 FF            CALL 0x004052cc
00586BDF  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00586BE5  50                        PUSH EAX
00586BE6  E8 05 40 16 00            CALL 0x006eabf0
00586BEB  8B CE                     MOV ECX,ESI
00586BED  E8 E6 E4 E7 FF            CALL 0x004050d8
00586BF2  83 F8 01                  CMP EAX,0x1
00586BF5  75 03                     JNZ 0x00586bfa
00586BF7  50                        PUSH EAX
00586BF8  EB 02                     JMP 0x00586bfc
LAB_00586bfa:
00586BFA  6A 00                     PUSH 0x0
LAB_00586bfc:
00586BFC  8B CB                     MOV ECX,EBX
00586BFE  E8 C9 E6 E7 FF            CALL 0x004052cc
00586C03  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00586C09  50                        PUSH EAX
00586C0A  E8 61 FC 15 00            CALL 0x006e6870
00586C0F  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
00586C15  83 E8 00                  SUB EAX,0x0
00586C18  0F 84 4F 0B 00 00         JZ 0x0058776d
00586C1E  48                        DEC EAX
00586C1F  0F 84 03 02 00 00         JZ 0x00586e28
00586C25  48                        DEC EAX
00586C26  0F 85 24 17 00 00         JNZ 0x00588350
00586C2C  6A 08                     PUSH 0x8
00586C2E  8B CB                     MOV ECX,EBX
00586C30  E8 7A D6 E7 FF            CALL 0x004042af
00586C35  8B F8                     MOV EDI,EAX
00586C37  83 FF 01                  CMP EDI,0x1
00586C3A  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
00586C3D  0F 85 AA 00 00 00         JNZ 0x00586ced
00586C43  8B 86 6F 02 00 00         MOV EAX,dword ptr [ESI + 0x26f]
00586C49  3D FF 00 00 00            CMP EAX,0xff
00586C4E  0F 84 99 00 00 00         JZ 0x00586ced
00586C54  66 8B 96 73 02 00 00      MOV DX,word ptr [ESI + 0x273]
00586C5B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00586C61  57                        PUSH EDI
00586C62  52                        PUSH EDX
00586C63  50                        PUSH EAX
00586C64  E8 51 BC E7 FF            CALL 0x004028ba
00586C69  8B D0                     MOV EDX,EAX
00586C6B  85 D2                     TEST EDX,EDX
00586C6D  74 7E                     JZ 0x00586ced
00586C6F  B9 07 00 00 00            MOV ECX,0x7
00586C74  33 C0                     XOR EAX,EAX
00586C76  BF F0 16 81 00            MOV EDI,0x8116f0
00586C7B  F3 AB                     STOSD.REP ES:EDI
00586C7D  8B 0D 0C 66 7E 00         MOV ECX,dword ptr [0x007e660c]
00586C83  8D 7D 98                  LEA EDI,[EBP + -0x68]
00586C86  89 0D F0 16 81 00         MOV dword ptr [0x008116f0],ECX
00586C8C  66 8B 86 A4 02 00 00      MOV AX,word ptr [ESI + 0x2a4]
00586C93  66 A3 FC 16 81 00         MOV [0x008116fc],AX
00586C99  66 8B 8E A0 02 00 00      MOV CX,word ptr [ESI + 0x2a0]
00586CA0  66 89 0D FE 16 81 00      MOV word ptr [0x008116fe],CX
00586CA7  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
00586CAD  A3 F8 16 81 00            MOV [0x008116f8],EAX
00586CB2  B9 08 00 00 00            MOV ECX,0x8
00586CB7  33 C0                     XOR EAX,EAX
00586CB9  C7 05 F4 16 81 00 AB 00 00 00  MOV dword ptr [0x008116f4],0xab
00586CC3  F3 AB                     STOSD.REP ES:EDI
00586CC5  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00586CC8  C7 45 A4 02 00 00 00      MOV dword ptr [EBP + -0x5c],0x2
00586CCF  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00586CD2  8D 4D 98                  LEA ECX,[EBP + -0x68]
00586CD5  C7 45 A8 10 01 00 00      MOV dword ptr [EBP + -0x58],0x110
00586CDC  C7 45 AC F0 16 81 00      MOV dword ptr [EBP + -0x54],0x8116f0
00586CE3  8B 02                     MOV EAX,dword ptr [EDX]
00586CE5  51                        PUSH ECX
00586CE6  8B CA                     MOV ECX,EDX
00586CE8  FF 10                     CALL dword ptr [EAX]
00586CEA  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
LAB_00586ced:
00586CED  8A 86 75 02 00 00         MOV AL,byte ptr [ESI + 0x275]
00586CF3  84 C0                     TEST AL,AL
00586CF5  76 2A                     JBE 0x00586d21
00586CF7  33 D2                     XOR EDX,EDX
00586CF9  8A 96 76 02 00 00         MOV DL,byte ptr [ESI + 0x276]
00586CFF  3B FA                     CMP EDI,EDX
00586D01  75 1E                     JNZ 0x00586d21
00586D03  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00586D08  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00586D0E  51                        PUSH ECX
00586D0F  6A 09                     PUSH 0x9
00586D11  8B CB                     MOV ECX,EBX
00586D13  E8 28 E5 E7 FF            CALL 0x00405240
00586D18  6A 09                     PUSH 0x9
00586D1A  8B CB                     MOV ECX,EBX
00586D1C  E8 33 DB E7 FF            CALL 0x00404854
LAB_00586d21:
00586D21  6A 08                     PUSH 0x8
00586D23  8B CB                     MOV ECX,EBX
00586D25  E8 82 B5 E7 FF            CALL 0x004022ac
00586D2A  48                        DEC EAX
00586D2B  3B F8                     CMP EDI,EAX
00586D2D  75 09                     JNZ 0x00586d38
00586D2F  6A 08                     PUSH 0x8
00586D31  8B CB                     MOV ECX,EBX
00586D33  E8 2C D5 E7 FF            CALL 0x00404264
LAB_00586d38:
00586D38  6A 0A                     PUSH 0xa
00586D3A  8B CB                     MOV ECX,EBX
00586D3C  E8 6B B5 E7 FF            CALL 0x004022ac
00586D41  48                        DEC EAX
00586D42  3B F8                     CMP EDI,EAX
00586D44  75 09                     JNZ 0x00586d4f
00586D46  6A 0A                     PUSH 0xa
00586D48  8B CB                     MOV ECX,EBX
00586D4A  E8 15 D5 E7 FF            CALL 0x00404264
LAB_00586d4f:
00586D4F  8A 86 75 02 00 00         MOV AL,byte ptr [ESI + 0x275]
00586D55  84 C0                     TEST AL,AL
00586D57  76 2C                     JBE 0x00586d85
00586D59  6A 09                     PUSH 0x9
00586D5B  8B CB                     MOV ECX,EBX
00586D5D  E8 4A B5 E7 FF            CALL 0x004022ac
00586D62  8B F8                     MOV EDI,EAX
00586D64  6A 09                     PUSH 0x9
00586D66  8B CB                     MOV ECX,EBX
00586D68  4F                        DEC EDI
00586D69  E8 41 D5 E7 FF            CALL 0x004042af
00586D6E  3B C7                     CMP EAX,EDI
00586D70  75 10                     JNZ 0x00586d82
00586D72  6A 09                     PUSH 0x9
00586D74  8B CB                     MOV ECX,EBX
00586D76  E8 E9 D4 E7 FF            CALL 0x00404264
00586D7B  C6 86 75 02 00 00 00      MOV byte ptr [ESI + 0x275],0x0
LAB_00586d82:
00586D82  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
LAB_00586d85:
00586D85  6A 08                     PUSH 0x8
00586D87  8B CB                     MOV ECX,EBX
00586D89  E8 1E B5 E7 FF            CALL 0x004022ac
00586D8E  48                        DEC EAX
00586D8F  3B F8                     CMP EDI,EAX
00586D91  75 18                     JNZ 0x00586dab
00586D93  8A 86 75 02 00 00         MOV AL,byte ptr [ESI + 0x275]
00586D99  84 C0                     TEST AL,AL
00586D9B  75 0E                     JNZ 0x00586dab
00586D9D  8B CE                     MOV ECX,ESI
00586D9F  E8 4E F1 E7 FF            CALL 0x00405ef2
00586DA4  5F                        POP EDI
00586DA5  5E                        POP ESI
00586DA6  5B                        POP EBX
00586DA7  8B E5                     MOV ESP,EBP
00586DA9  5D                        POP EBP
00586DAA  C3                        RET
LAB_00586dab:
00586DAB  83 FF 0A                  CMP EDI,0xa
00586DAE  0F 8D 26 17 00 00         JGE 0x005884da
00586DB4  8B 86 6F 02 00 00         MOV EAX,dword ptr [ESI + 0x26f]
00586DBA  3D FF 00 00 00            CMP EAX,0xff
00586DBF  0F 84 15 17 00 00         JZ 0x005884da
00586DC5  66 8B 96 73 02 00 00      MOV DX,word ptr [ESI + 0x273]
00586DCC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00586DD2  6A 01                     PUSH 0x1
00586DD4  52                        PUSH EDX
00586DD5  50                        PUSH EAX
00586DD6  E8 DF BA E7 FF            CALL 0x004028ba
00586DDB  85 C0                     TEST EAX,EAX
00586DDD  0F 84 F7 16 00 00         JZ 0x005884da
00586DE3  8D 4D E0                  LEA ECX,[EBP + -0x20]
00586DE6  8B 10                     MOV EDX,dword ptr [EAX]
00586DE8  51                        PUSH ECX
00586DE9  8D 4D D4                  LEA ECX,[EBP + -0x2c]
00586DEC  51                        PUSH ECX
00586DED  8D 4D D8                  LEA ECX,[EBP + -0x28]
00586DF0  51                        PUSH ECX
00586DF1  8D 4D DC                  LEA ECX,[EBP + -0x24]
00586DF4  51                        PUSH ECX
00586DF5  8B 8E 78 02 00 00         MOV ECX,dword ptr [ESI + 0x278]
00586DFB  51                        PUSH ECX
00586DFC  8B C8                     MOV ECX,EAX
00586DFE  FF 92 E0 00 00 00         CALL dword ptr [EDX + 0xe0]
00586E04  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00586E07  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00586E0A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00586E0D  52                        PUSH EDX
00586E0E  50                        PUSH EAX
00586E0F  51                        PUSH ECX
00586E10  8B CE                     MOV ECX,ESI
00586E12  E8 F0 C2 E7 FF            CALL 0x00403107
00586E17  8B 16                     MOV EDX,dword ptr [ESI]
00586E19  8B CE                     MOV ECX,ESI
00586E1B  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00586E21  5F                        POP EDI
00586E22  5E                        POP ESI
00586E23  5B                        POP EBX
00586E24  8B E5                     MOV ESP,EBP
00586E26  5D                        POP EBP
00586E27  C3                        RET
LAB_00586e28:
00586E28  8B 86 57 02 00 00         MOV EAX,dword ptr [ESI + 0x257]
00586E2E  85 C0                     TEST EAX,EAX
00586E30  75 11                     JNZ 0x00586e43
00586E32  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00586E37  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00586E3D  89 8E 57 02 00 00         MOV dword ptr [ESI + 0x257],ECX
LAB_00586e43:
00586E43  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
00586E49  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
00586E4C  52                        PUSH EDX
00586E4D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00586E50  BA FF EE 00 00            MOV EDX,0xeeff
00586E55  F7 EA                     IMUL EDX
00586E57  0F AC D0 10               SHRD EAX,EDX,0x10
00586E5B  83 D0 00                  ADC EAX,0x0
00586E5E  5A                        POP EDX
00586E5F  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
00586E65  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
00586E6B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00586E6E  52                        PUSH EDX
00586E6F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00586E72  BA FF EE 00 00            MOV EDX,0xeeff
00586E77  F7 EA                     IMUL EDX
00586E79  0F AC D0 10               SHRD EAX,EDX,0x10
00586E7D  83 D0 00                  ADC EAX,0x0
00586E80  5A                        POP EDX
00586E81  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
00586E87  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
00586E8D  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00586E90  52                        PUSH EDX
00586E91  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00586E94  BA FF EE 00 00            MOV EDX,0xeeff
00586E99  F7 EA                     IMUL EDX
00586E9B  0F AC D0 10               SHRD EAX,EDX,0x10
00586E9F  83 D0 00                  ADC EAX,0x0
00586EA2  5A                        POP EDX
00586EA3  66 8B 5E 41               MOV BX,word ptr [ESI + 0x41]
00586EA7  8B C8                     MOV ECX,EAX
00586EA9  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
00586EAF  89 8E 3D 02 00 00         MOV dword ptr [ESI + 0x23d],ECX
00586EB5  99                        CDQ
00586EB6  81 E2 FF FF 00 00         AND EDX,0xffff
00586EBC  0F BF FB                  MOVSX EDI,BX
00586EBF  03 C2                     ADD EAX,EDX
00586EC1  C1 F8 10                  SAR EAX,0x10
00586EC4  03 C7                     ADD EAX,EDI
00586EC6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00586EC9  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00586ECD  0F BF D0                  MOVSX EDX,AX
00586ED0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00586ED3  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
00586ED9  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00586EDC  99                        CDQ
00586EDD  81 E2 FF FF 00 00         AND EDX,0xffff
00586EE3  03 C2                     ADD EAX,EDX
00586EE5  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00586EE8  C1 F8 10                  SAR EAX,0x10
00586EEB  03 C2                     ADD EAX,EDX
00586EED  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00586EF0  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00586EF4  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00586EF7  0F BF C0                  MOVSX EAX,AX
00586EFA  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00586EFD  8B C1                     MOV EAX,ECX
00586EFF  99                        CDQ
00586F00  81 E2 FF FF 00 00         AND EDX,0xffff
00586F06  03 C2                     ADD EAX,EDX
00586F08  8B C8                     MOV ECX,EAX
00586F0A  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
00586F10  99                        CDQ
00586F11  83 E2 03                  AND EDX,0x3
00586F14  C1 F9 10                  SAR ECX,0x10
00586F17  03 C2                     ADD EAX,EDX
00586F19  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00586F1C  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
00586F1F  8B C8                     MOV ECX,EAX
00586F21  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00586F24  C1 F9 02                  SAR ECX,0x2
00586F27  03 D0                     ADD EDX,EAX
00586F29  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00586F2C  03 CA                     ADD ECX,EDX
00586F2E  85 C0                     TEST EAX,EAX
00586F30  7D 07                     JGE 0x00586f39
00586F32  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_00586f39:
00586F39  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00586F3C  85 C0                     TEST EAX,EAX
00586F3E  7D 07                     JGE 0x00586f47
00586F40  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_00586f47:
00586F47  85 C9                     TEST ECX,ECX
00586F49  7D 02                     JGE 0x00586f4d
00586F4B  33 C9                     XOR ECX,ECX
LAB_00586f4d:
00586F4D  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
00586F54  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
00586F57  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00586F5A  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
00586F5D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00586F60  3B D0                     CMP EDX,EAX
00586F62  7C 04                     JL 0x00586f68
00586F64  48                        DEC EAX
00586F65  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00586f68:
00586F68  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
00586F6F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00586F72  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00586F75  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00586F78  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00586F7B  3B D0                     CMP EDX,EAX
00586F7D  7C 04                     JL 0x00586f83
00586F7F  48                        DEC EAX
00586F80  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00586f83:
00586F83  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
00586F8A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00586F8D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00586F90  C1 E0 03                  SHL EAX,0x3
00586F93  3B C8                     CMP ECX,EAX
00586F95  7C 03                     JL 0x00586f9a
00586F97  8D 48 FF                  LEA ECX,[EAX + -0x1]
LAB_00586f9a:
00586F9A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00586F9D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00586FA0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00586FA3  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00586FA6  85 C0                     TEST EAX,EAX
00586FA8  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00586FAB  B8 79 19 8C 02            MOV EAX,0x28c1979
00586FB0  7C 14                     JL 0x00586fc6
00586FB2  F7 6D F4                  IMUL dword ptr [EBP + -0xc]
00586FB5  D1 FA                     SAR EDX,0x1
00586FB7  8B C2                     MOV EAX,EDX
00586FB9  C1 E8 1F                  SHR EAX,0x1f
00586FBC  03 D0                     ADD EDX,EAX
00586FBE  0F BF D2                  MOVSX EDX,DX
00586FC1  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00586FC4  EB 13                     JMP 0x00586fd9
LAB_00586fc6:
00586FC6  F7 6D F4                  IMUL dword ptr [EBP + -0xc]
00586FC9  D1 FA                     SAR EDX,0x1
00586FCB  8B C2                     MOV EAX,EDX
00586FCD  C1 E8 1F                  SHR EAX,0x1f
00586FD0  03 D0                     ADD EDX,EAX
00586FD2  0F BF C2                  MOVSX EAX,DX
00586FD5  48                        DEC EAX
00586FD6  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_00586fd9:
00586FD9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00586FDC  85 C0                     TEST EAX,EAX
00586FDE  B8 79 19 8C 02            MOV EAX,0x28c1979
00586FE3  7C 14                     JL 0x00586ff9
00586FE5  F7 6D F0                  IMUL dword ptr [EBP + -0x10]
00586FE8  D1 FA                     SAR EDX,0x1
00586FEA  8B C2                     MOV EAX,EDX
00586FEC  C1 E8 1F                  SHR EAX,0x1f
00586FEF  03 D0                     ADD EDX,EAX
00586FF1  0F BF D2                  MOVSX EDX,DX
00586FF4  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00586FF7  EB 13                     JMP 0x0058700c
LAB_00586ff9:
00586FF9  F7 6D F0                  IMUL dword ptr [EBP + -0x10]
00586FFC  D1 FA                     SAR EDX,0x1
00586FFE  8B C2                     MOV EAX,EDX
00587000  C1 E8 1F                  SHR EAX,0x1f
00587003  03 D0                     ADD EDX,EAX
00587005  0F BF C2                  MOVSX EAX,DX
00587008  48                        DEC EAX
00587009  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_0058700c:
0058700C  85 C9                     TEST ECX,ECX
0058700E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00587013  7C 14                     JL 0x00587029
00587015  F7 E9                     IMUL ECX
00587017  C1 FA 06                  SAR EDX,0x6
0058701A  8B C2                     MOV EAX,EDX
0058701C  C1 E8 1F                  SHR EAX,0x1f
0058701F  03 D0                     ADD EDX,EAX
00587021  0F BF D2                  MOVSX EDX,DX
00587024  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00587027  EB 13                     JMP 0x0058703c
LAB_00587029:
00587029  F7 E9                     IMUL ECX
0058702B  C1 FA 06                  SAR EDX,0x6
0058702E  8B C2                     MOV EAX,EDX
00587030  C1 E8 1F                  SHR EAX,0x1f
00587033  03 D0                     ADD EDX,EAX
00587035  0F BF C2                  MOVSX EAX,DX
00587038  48                        DEC EAX
00587039  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_0058703c:
0058703C  66 85 DB                  TEST BX,BX
0058703F  B8 79 19 8C 02            MOV EAX,0x28c1979
00587044  7C 10                     JL 0x00587056
00587046  F7 EF                     IMUL EDI
00587048  D1 FA                     SAR EDX,0x1
0058704A  8B C2                     MOV EAX,EDX
0058704C  C1 E8 1F                  SHR EAX,0x1f
0058704F  03 D0                     ADD EDX,EAX
00587051  0F BF FA                  MOVSX EDI,DX
00587054  EB 0F                     JMP 0x00587065
LAB_00587056:
00587056  F7 EF                     IMUL EDI
00587058  D1 FA                     SAR EDX,0x1
0058705A  8B C2                     MOV EAX,EDX
0058705C  C1 E8 1F                  SHR EAX,0x1f
0058705F  03 D0                     ADD EDX,EAX
00587061  0F BF FA                  MOVSX EDI,DX
00587064  4F                        DEC EDI
LAB_00587065:
00587065  8B 96 90 02 00 00         MOV EDX,dword ptr [ESI + 0x290]
0058706B  B8 79 19 8C 02            MOV EAX,0x28c1979
00587070  85 D2                     TEST EDX,EDX
00587072  7C 10                     JL 0x00587084
00587074  F7 EA                     IMUL EDX
00587076  D1 FA                     SAR EDX,0x1
00587078  8B C2                     MOV EAX,EDX
0058707A  C1 E8 1F                  SHR EAX,0x1f
0058707D  03 D0                     ADD EDX,EAX
0058707F  0F BF C2                  MOVSX EAX,DX
00587082  EB 0F                     JMP 0x00587093
LAB_00587084:
00587084  F7 EA                     IMUL EDX
00587086  D1 FA                     SAR EDX,0x1
00587088  8B C2                     MOV EAX,EDX
0058708A  C1 E8 1F                  SHR EAX,0x1f
0058708D  03 D0                     ADD EDX,EAX
0058708F  0F BF C2                  MOVSX EAX,DX
00587092  48                        DEC EAX
LAB_00587093:
00587093  3B F8                     CMP EDI,EAX
00587095  0F 85 C6 00 00 00         JNZ 0x00587161
0058709B  66 83 7D B8 00            CMP word ptr [EBP + -0x48],0x0
005870A0  B8 79 19 8C 02            MOV EAX,0x28c1979
005870A5  7C 11                     JL 0x005870b8
005870A7  F7 6D C0                  IMUL dword ptr [EBP + -0x40]
005870AA  D1 FA                     SAR EDX,0x1
005870AC  8B C2                     MOV EAX,EDX
005870AE  C1 E8 1F                  SHR EAX,0x1f
005870B1  03 D0                     ADD EDX,EAX
005870B3  0F BF FA                  MOVSX EDI,DX
005870B6  EB 10                     JMP 0x005870c8
LAB_005870b8:
005870B8  F7 6D C0                  IMUL dword ptr [EBP + -0x40]
005870BB  D1 FA                     SAR EDX,0x1
005870BD  8B C2                     MOV EAX,EDX
005870BF  C1 E8 1F                  SHR EAX,0x1f
005870C2  03 D0                     ADD EDX,EAX
005870C4  0F BF FA                  MOVSX EDI,DX
005870C7  4F                        DEC EDI
LAB_005870c8:
005870C8  8B 96 94 02 00 00         MOV EDX,dword ptr [ESI + 0x294]
005870CE  B8 79 19 8C 02            MOV EAX,0x28c1979
005870D3  85 D2                     TEST EDX,EDX
005870D5  7C 10                     JL 0x005870e7
005870D7  F7 EA                     IMUL EDX
005870D9  D1 FA                     SAR EDX,0x1
005870DB  8B C2                     MOV EAX,EDX
005870DD  C1 E8 1F                  SHR EAX,0x1f
005870E0  03 D0                     ADD EDX,EAX
005870E2  0F BF C2                  MOVSX EAX,DX
005870E5  EB 0F                     JMP 0x005870f6
LAB_005870e7:
005870E7  F7 EA                     IMUL EDX
005870E9  D1 FA                     SAR EDX,0x1
005870EB  8B C2                     MOV EAX,EDX
005870ED  C1 E8 1F                  SHR EAX,0x1f
005870F0  03 D0                     ADD EDX,EAX
005870F2  0F BF C2                  MOVSX EAX,DX
005870F5  48                        DEC EAX
LAB_005870f6:
005870F6  3B F8                     CMP EDI,EAX
005870F8  75 67                     JNZ 0x00587161
005870FA  66 83 7D C4 00            CMP word ptr [EBP + -0x3c],0x0
005870FF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00587104  7C 12                     JL 0x00587118
00587106  F7 6D BC                  IMUL dword ptr [EBP + -0x44]
00587109  C1 FA 06                  SAR EDX,0x6
0058710C  8B C2                     MOV EAX,EDX
0058710E  C1 E8 1F                  SHR EAX,0x1f
00587111  03 D0                     ADD EDX,EAX
00587113  0F BF FA                  MOVSX EDI,DX
00587116  EB 11                     JMP 0x00587129
LAB_00587118:
00587118  F7 6D BC                  IMUL dword ptr [EBP + -0x44]
0058711B  C1 FA 06                  SAR EDX,0x6
0058711E  8B C2                     MOV EAX,EDX
00587120  C1 E8 1F                  SHR EAX,0x1f
00587123  03 D0                     ADD EDX,EAX
00587125  0F BF FA                  MOVSX EDI,DX
00587128  4F                        DEC EDI
LAB_00587129:
00587129  8B 96 98 02 00 00         MOV EDX,dword ptr [ESI + 0x298]
0058712F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00587134  85 D2                     TEST EDX,EDX
00587136  7C 11                     JL 0x00587149
00587138  F7 EA                     IMUL EDX
0058713A  C1 FA 06                  SAR EDX,0x6
0058713D  8B C2                     MOV EAX,EDX
0058713F  C1 E8 1F                  SHR EAX,0x1f
00587142  03 D0                     ADD EDX,EAX
00587144  0F BF C2                  MOVSX EAX,DX
00587147  EB 10                     JMP 0x00587159
LAB_00587149:
00587149  F7 EA                     IMUL EDX
0058714B  C1 FA 06                  SAR EDX,0x6
0058714E  8B C2                     MOV EAX,EDX
00587150  C1 E8 1F                  SHR EAX,0x1f
00587153  03 D0                     ADD EDX,EAX
00587155  0F BF C2                  MOVSX EAX,DX
00587158  48                        DEC EAX
LAB_00587159:
00587159  3B F8                     CMP EDI,EAX
0058715B  0F 84 F5 01 00 00         JZ 0x00587356
LAB_00587161:
00587161  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
00587164  66 85 FF                  TEST DI,DI
00587167  0F 8C C0 01 00 00         JL 0x0058732d
0058716D  66 3B 3D 40 B2 7F 00      CMP DI,word ptr [0x007fb240]
00587174  0F 8D B3 01 00 00         JGE 0x0058732d
0058717A  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0058717D  66 85 D2                  TEST DX,DX
00587180  0F 8C A7 01 00 00         JL 0x0058732d
00587186  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0058718D  0F 8D 9A 01 00 00         JGE 0x0058732d
00587193  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00587196  66 85 C0                  TEST AX,AX
00587199  0F 8C 8E 01 00 00         JL 0x0058732d
0058719F  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005871A6  0F 8D 81 01 00 00         JGE 0x0058732d
005871AC  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005871B3  0F BF C0                  MOVSX EAX,AX
005871B6  0F AF D8                  IMUL EBX,EAX
005871B9  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
005871C0  0F BF D2                  MOVSX EDX,DX
005871C3  0F AF D0                  IMUL EDX,EAX
005871C6  0F BF C7                  MOVSX EAX,DI
005871C9  03 DA                     ADD EBX,EDX
005871CB  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005871D1  03 D8                     ADD EBX,EAX
005871D3  8B 3C DA                  MOV EDI,dword ptr [EDX + EBX*0x8]
005871D6  85 FF                     TEST EDI,EDI
005871D8  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
005871DB  0F 84 4C 01 00 00         JZ 0x0058732d
005871E1  81 7F 20 B4 00 00 00      CMP dword ptr [EDI + 0x20],0xb4
005871E8  0F 84 35 01 00 00         JZ 0x00587323
005871EE  8B 07                     MOV EAX,dword ptr [EDI]
005871F0  8B CF                     MOV ECX,EDI
005871F2  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
005871F8  85 C0                     TEST EAX,EAX
005871FA  0F 84 23 01 00 00         JZ 0x00587323
00587200  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00587203  3D E8 03 00 00            CMP EAX,0x3e8
00587208  74 09                     JZ 0x00587213
0058720A  83 F8 14                  CMP EAX,0x14
0058720D  0F 85 46 01 00 00         JNZ 0x00587359
LAB_00587213:
00587213  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00587216  83 F8 08                  CMP EAX,0x8
00587219  0F 83 3A 01 00 00         JNC 0x00587359
0058721F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00587225  85 C9                     TEST ECX,ECX
00587227  74 11                     JZ 0x0058723a
00587229  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0058722C  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00587234  0F 83 1F 01 00 00         JNC 0x00587359
LAB_0058723a:
0058723A  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0058723D  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00587240  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00587243  88 4D B8                  MOV byte ptr [EBP + -0x48],CL
00587246  8A 98 6F 14 00 00         MOV BL,byte ptr [EAX + 0x146f]
0058724C  88 55 BC                  MOV byte ptr [EBP + -0x44],DL
0058724F  84 DB                     TEST BL,BL
00587251  74 38                     JZ 0x0058728b
00587253  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00587256  81 E1 FF 00 00 00         AND ECX,0xff
0058725C  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
0058725F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00587262  81 E1 FF 00 00 00         AND ECX,0xff
00587268  8D 1C D0                  LEA EBX,[EAX + EDX*0x8]
0058726B  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0058726E  8A 94 1A CA 11 00 00      MOV DL,byte ptr [EDX + EBX*0x1 + 0x11ca]
00587275  33 DB                     XOR EBX,EBX
00587277  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0058727A  3A 94 01 CA 11 00 00      CMP DL,byte ptr [ECX + EAX*0x1 + 0x11ca]
00587281  0F 95 C3                  SETNZ BL
00587284  8B C3                     MOV EAX,EBX
00587286  E9 94 00 00 00            JMP 0x0058731f
LAB_0058728b:
0058728B  3A CA                     CMP CL,DL
0058728D  75 07                     JNZ 0x00587296
0058728F  33 C0                     XOR EAX,EAX
00587291  E9 80 00 00 00            JMP 0x00587316
LAB_00587296:
00587296  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00587299  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
0058729C  81 E1 FF 00 00 00         AND ECX,0xff
005872A2  81 E7 FF 00 00 00         AND EDI,0xff
005872A8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
005872AB  8A 94 3A 2F 14 00 00      MOV DL,byte ptr [EDX + EDI*0x1 + 0x142f]
005872B2  84 D2                     TEST DL,DL
005872B4  75 13                     JNZ 0x005872c9
005872B6  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
005872B9  38 94 0B 2F 14 00 00      CMP byte ptr [EBX + ECX*0x1 + 0x142f],DL
005872C0  75 07                     JNZ 0x005872c9
005872C2  B8 FE FF FF FF            MOV EAX,0xfffffffe
005872C7  EB 4A                     JMP 0x00587313
LAB_005872c9:
005872C9  80 FA 01                  CMP DL,0x1
005872CC  75 12                     JNZ 0x005872e0
005872CE  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
005872D1  80 BC 0B 2F 14 00 00 00   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x0
005872D9  75 05                     JNZ 0x005872e0
005872DB  83 C8 FF                  OR EAX,0xffffffff
005872DE  EB 33                     JMP 0x00587313
LAB_005872e0:
005872E0  84 D2                     TEST DL,DL
005872E2  75 14                     JNZ 0x005872f8
005872E4  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
005872E7  80 BC 0B 2F 14 00 00 01   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x1
005872EF  75 07                     JNZ 0x005872f8
005872F1  B8 01 00 00 00            MOV EAX,0x1
005872F6  EB 1B                     JMP 0x00587313
LAB_005872f8:
005872F8  80 FA 01                  CMP DL,0x1
005872FB  75 14                     JNZ 0x00587311
005872FD  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
00587300  80 BC 08 2F 14 00 00 01   CMP byte ptr [EAX + ECX*0x1 + 0x142f],0x1
00587308  75 07                     JNZ 0x00587311
0058730A  B8 02 00 00 00            MOV EAX,0x2
0058730F  EB 02                     JMP 0x00587313
LAB_00587311:
00587311  33 C0                     XOR EAX,EAX
LAB_00587313:
00587313  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_00587316:
00587316  33 C9                     XOR ECX,ECX
00587318  85 C0                     TEST EAX,EAX
0058731A  0F 9C C1                  SETL CL
0058731D  8B C1                     MOV EAX,ECX
LAB_0058731f:
0058731F  85 C0                     TEST EAX,EAX
00587321  74 36                     JZ 0x00587359
LAB_00587323:
00587323  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00587326  33 FF                     XOR EDI,EDI
00587328  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0058732B  EB 3B                     JMP 0x00587368
LAB_0058732d:
0058732D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00587330  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00587333  51                        PUSH ECX
00587334  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058733A  52                        PUSH EDX
0058733B  50                        PUSH EAX
0058733C  E8 FD D6 E7 FF            CALL 0x00404a3e
00587341  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00587344  33 C9                     XOR ECX,ECX
00587346  85 C0                     TEST EAX,EAX
00587348  0F 9D C1                  SETGE CL
0058734B  8B F9                     MOV EDI,ECX
0058734D  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
00587354  EB 12                     JMP 0x00587368
LAB_00587356:
00587356  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_00587359:
00587359  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0058735C  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
00587363  EB 03                     JMP 0x00587368
LAB_00587365:
00587365  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_00587368:
00587368  85 FF                     TEST EDI,EDI
0058736A  0F 84 0B 03 00 00         JZ 0x0058767b
00587370  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
00587373  83 FF 06                  CMP EDI,0x6
00587376  0F 87 84 00 00 00         JA 0x00587400
switchD_0058737c::switchD:
0058737C  FF 24 BD EC 84 58 00      JMP dword ptr [EDI*0x4 + 0x5884ec]
switchD_0058737c::caseD_0:
00587383  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
00587387  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0058738A  EB 77                     JMP 0x00587403
switchD_0058737c::caseD_1:
0058738C  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00587390  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00587393  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00587396  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00587399  EB 68                     JMP 0x00587403
switchD_0058737c::caseD_3:
0058739B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058739E  EB 04                     JMP 0x005873a4
switchD_0058737c::caseD_4:
005873A0  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
LAB_005873a4:
005873A4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005873A7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005873AA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005873AD  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
005873B3  99                        CDQ
005873B4  83 E2 03                  AND EDX,0x3
005873B7  03 C2                     ADD EAX,EDX
005873B9  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
005873BD  8B D8                     MOV EBX,EAX
005873BF  C1 FB 02                  SAR EBX,0x2
005873C2  03 DA                     ADD EBX,EDX
005873C4  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
005873C7  EB 3A                     JMP 0x00587403
switchD_0058737c::caseD_5:
005873C9  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
005873CD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005873D0  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
005873D6  99                        CDQ
005873D7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005873DA  83 E2 03                  AND EDX,0x3
005873DD  03 C2                     ADD EAX,EDX
005873DF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005873E2  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
005873E6  8B D8                     MOV EBX,EAX
005873E8  C1 FB 02                  SAR EBX,0x2
005873EB  03 DA                     ADD EBX,EDX
005873ED  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
005873F0  EB 11                     JMP 0x00587403
switchD_0058737c::caseD_6:
005873F2  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
005873F6  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
005873FA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005873FD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00587400:
00587400  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
switchD_0058737c::default:
00587403  47                        INC EDI
00587404  B8 79 19 8C 02            MOV EAX,0x28c1979
00587409  85 C9                     TEST ECX,ECX
0058740B  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0058740E  7C 10                     JL 0x00587420
00587410  F7 E9                     IMUL ECX
00587412  D1 FA                     SAR EDX,0x1
00587414  8B C2                     MOV EAX,EDX
00587416  C1 E8 1F                  SHR EAX,0x1f
00587419  03 D0                     ADD EDX,EAX
0058741B  0F BF FA                  MOVSX EDI,DX
0058741E  EB 0F                     JMP 0x0058742f
LAB_00587420:
00587420  F7 E9                     IMUL ECX
00587422  D1 FA                     SAR EDX,0x1
00587424  8B CA                     MOV ECX,EDX
00587426  C1 E9 1F                  SHR ECX,0x1f
00587429  03 D1                     ADD EDX,ECX
0058742B  0F BF FA                  MOVSX EDI,DX
0058742E  4F                        DEC EDI
LAB_0058742f:
0058742F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00587432  85 C0                     TEST EAX,EAX
00587434  B8 79 19 8C 02            MOV EAX,0x28c1979
00587439  7C 11                     JL 0x0058744c
0058743B  F7 6D E8                  IMUL dword ptr [EBP + -0x18]
0058743E  D1 FA                     SAR EDX,0x1
00587440  8B C2                     MOV EAX,EDX
00587442  C1 E8 1F                  SHR EAX,0x1f
00587445  03 D0                     ADD EDX,EAX
00587447  0F BF CA                  MOVSX ECX,DX
0058744A  EB 10                     JMP 0x0058745c
LAB_0058744c:
0058744C  F7 6D E8                  IMUL dword ptr [EBP + -0x18]
0058744F  D1 FA                     SAR EDX,0x1
00587451  8B CA                     MOV ECX,EDX
00587453  C1 E9 1F                  SHR ECX,0x1f
00587456  03 D1                     ADD EDX,ECX
00587458  0F BF CA                  MOVSX ECX,DX
0058745B  49                        DEC ECX
LAB_0058745c:
0058745C  85 DB                     TEST EBX,EBX
0058745E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00587463  7C 11                     JL 0x00587476
00587465  F7 EB                     IMUL EBX
00587467  C1 FA 06                  SAR EDX,0x6
0058746A  8B C2                     MOV EAX,EDX
0058746C  C1 E8 1F                  SHR EAX,0x1f
0058746F  03 D0                     ADD EDX,EAX
00587471  0F BF C2                  MOVSX EAX,DX
00587474  EB 10                     JMP 0x00587486
LAB_00587476:
00587476  F7 EB                     IMUL EBX
00587478  C1 FA 06                  SAR EDX,0x6
0058747B  8B C2                     MOV EAX,EDX
0058747D  C1 E8 1F                  SHR EAX,0x1f
00587480  03 D0                     ADD EDX,EAX
00587482  0F BF C2                  MOVSX EAX,DX
00587485  48                        DEC EAX
LAB_00587486:
00587486  66 85 FF                  TEST DI,DI
00587489  0F 8C C2 01 00 00         JL 0x00587651
0058748F  66 3B 3D 40 B2 7F 00      CMP DI,word ptr [0x007fb240]
00587496  0F 8D B5 01 00 00         JGE 0x00587651
0058749C  66 85 C9                  TEST CX,CX
0058749F  0F 8C AC 01 00 00         JL 0x00587651
005874A5  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
005874AC  0F 8D 9F 01 00 00         JGE 0x00587651
005874B2  66 85 C0                  TEST AX,AX
005874B5  0F 8C 96 01 00 00         JL 0x00587651
005874BB  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005874C2  0F 8D 89 01 00 00         JGE 0x00587651
005874C8  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
005874CF  0F BF C0                  MOVSX EAX,AX
005874D2  0F AF D0                  IMUL EDX,EAX
005874D5  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
005874DC  0F BF C9                  MOVSX ECX,CX
005874DF  0F AF C1                  IMUL EAX,ECX
005874E2  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005874E8  03 D0                     ADD EDX,EAX
005874EA  0F BF C7                  MOVSX EAX,DI
005874ED  03 D0                     ADD EDX,EAX
005874EF  8B 3C D1                  MOV EDI,dword ptr [ECX + EDX*0x8]
005874F2  85 FF                     TEST EDI,EDI
005874F4  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
005874F7  0F 84 54 01 00 00         JZ 0x00587651
005874FD  81 7F 20 B4 00 00 00      CMP dword ptr [EDI + 0x20],0xb4
00587504  0F 84 3E 01 00 00         JZ 0x00587648
0058750A  8B 17                     MOV EDX,dword ptr [EDI]
0058750C  8B CF                     MOV ECX,EDI
0058750E  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00587514  85 C0                     TEST EAX,EAX
00587516  0F 84 2C 01 00 00         JZ 0x00587648
0058751C  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0058751F  3D E8 03 00 00            CMP EAX,0x3e8
00587524  74 09                     JZ 0x0058752f
00587526  83 F8 14                  CMP EAX,0x14
00587529  0F 85 40 01 00 00         JNZ 0x0058766f
LAB_0058752f:
0058752F  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00587532  83 F8 08                  CMP EAX,0x8
00587535  0F 83 34 01 00 00         JNC 0x0058766f
0058753B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00587541  85 C9                     TEST ECX,ECX
00587543  74 11                     JZ 0x00587556
00587545  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00587548  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00587550  0F 83 19 01 00 00         JNC 0x0058766f
LAB_00587556:
00587556  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00587559  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0058755C  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0058755F  88 4D B8                  MOV byte ptr [EBP + -0x48],CL
00587562  80 B8 6F 14 00 00 00      CMP byte ptr [EAX + 0x146f],0x0
00587569  88 55 BC                  MOV byte ptr [EBP + -0x44],DL
0058756C  74 42                     JZ 0x005875b0
0058756E  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00587571  81 E1 FF 00 00 00         AND ECX,0xff
00587577  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
0058757A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0058757D  81 E1 FF 00 00 00         AND ECX,0xff
00587583  8D 3C D0                  LEA EDI,[EAX + EDX*0x8]
00587586  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00587589  8A 94 3A CA 11 00 00      MOV DL,byte ptr [EDX + EDI*0x1 + 0x11ca]
00587590  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00587593  33 D2                     XOR EDX,EDX
00587595  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00587598  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0058759B  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
0058759E  3A 94 01 CA 11 00 00      CMP DL,byte ptr [ECX + EAX*0x1 + 0x11ca]
005875A5  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
005875A8  0F 95 C0                  SETNZ AL
005875AB  E9 94 00 00 00            JMP 0x00587644
LAB_005875b0:
005875B0  3A CA                     CMP CL,DL
005875B2  75 07                     JNZ 0x005875bb
005875B4  33 C0                     XOR EAX,EAX
005875B6  E9 80 00 00 00            JMP 0x0058763b
LAB_005875bb:
005875BB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005875BE  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
005875C1  81 E1 FF 00 00 00         AND ECX,0xff
005875C7  81 E7 FF 00 00 00         AND EDI,0xff
005875CD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
005875D0  8A 94 3A 2F 14 00 00      MOV DL,byte ptr [EDX + EDI*0x1 + 0x142f]
005875D7  84 D2                     TEST DL,DL
005875D9  75 13                     JNZ 0x005875ee
005875DB  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
005875DE  38 94 0B 2F 14 00 00      CMP byte ptr [EBX + ECX*0x1 + 0x142f],DL
005875E5  75 07                     JNZ 0x005875ee
005875E7  B8 FE FF FF FF            MOV EAX,0xfffffffe
005875EC  EB 4A                     JMP 0x00587638
LAB_005875ee:
005875EE  80 FA 01                  CMP DL,0x1
005875F1  75 12                     JNZ 0x00587605
005875F3  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
005875F6  80 BC 0B 2F 14 00 00 00   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x0
005875FE  75 05                     JNZ 0x00587605
00587600  83 C8 FF                  OR EAX,0xffffffff
00587603  EB 33                     JMP 0x00587638
LAB_00587605:
00587605  84 D2                     TEST DL,DL
00587607  75 14                     JNZ 0x0058761d
00587609  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
0058760C  80 BC 0B 2F 14 00 00 01   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x1
00587614  75 07                     JNZ 0x0058761d
00587616  B8 01 00 00 00            MOV EAX,0x1
0058761B  EB 1B                     JMP 0x00587638
LAB_0058761d:
0058761D  80 FA 01                  CMP DL,0x1
00587620  75 14                     JNZ 0x00587636
00587622  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
00587625  80 BC 08 2F 14 00 00 01   CMP byte ptr [EAX + ECX*0x1 + 0x142f],0x1
0058762D  75 07                     JNZ 0x00587636
0058762F  B8 02 00 00 00            MOV EAX,0x2
00587634  EB 02                     JMP 0x00587638
LAB_00587636:
00587636  33 C0                     XOR EAX,EAX
LAB_00587638:
00587638  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_0058763b:
0058763B  33 C9                     XOR ECX,ECX
0058763D  85 C0                     TEST EAX,EAX
0058763F  0F 9C C1                  SETL CL
00587642  8B C1                     MOV EAX,ECX
LAB_00587644:
00587644  85 C0                     TEST EAX,EAX
00587646  74 27                     JZ 0x0058766f
LAB_00587648:
00587648  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0058764F  EB 1E                     JMP 0x0058766f
LAB_00587651:
00587651  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00587654  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00587657  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058765D  53                        PUSH EBX
0058765E  52                        PUSH EDX
0058765F  50                        PUSH EAX
00587660  E8 D9 D3 E7 FF            CALL 0x00404a3e
00587665  33 C9                     XOR ECX,ECX
00587667  85 C0                     TEST EAX,EAX
00587669  0F 9D C1                  SETGE CL
0058766C  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_0058766f:
0058766F  83 7D CC 07               CMP dword ptr [EBP + -0x34],0x7
00587673  0F 8C EC FC FF FF         JL 0x00587365
00587679  EB 26                     JMP 0x005876a1
LAB_0058767b:
0058767B  83 7D CC 07               CMP dword ptr [EBP + -0x34],0x7
0058767F  7D 20                     JGE 0x005876a1
00587681  85 DB                     TEST EBX,EBX
00587683  7D 0C                     JGE 0x00587691
00587685  33 DB                     XOR EBX,EBX
00587687  C7 86 5F 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x25f],0x2
LAB_00587691:
00587691  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00587694  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00587697  53                        PUSH EBX
00587698  52                        PUSH EDX
00587699  50                        PUSH EAX
0058769A  8B CE                     MOV ECX,ESI
0058769C  E8 66 BA E7 FF            CALL 0x00403107
LAB_005876a1:
005876A1  8B 8E 5F 02 00 00         MOV ECX,dword ptr [ESI + 0x25f]
005876A7  8B 96 5B 02 00 00         MOV EDX,dword ptr [ESI + 0x25b]
005876AD  03 D1                     ADD EDX,ECX
005876AF  8B C2                     MOV EAX,EDX
005876B1  89 96 5B 02 00 00         MOV dword ptr [ESI + 0x25b],EDX
005876B7  83 F8 0C                  CMP EAX,0xc
005876BA  7E 0C                     JLE 0x005876c8
005876BC  C7 86 5F 02 00 00 FE FF FF FF  MOV dword ptr [ESI + 0x25f],0xfffffffe
005876C6  EB 0F                     JMP 0x005876d7
LAB_005876c8:
005876C8  83 F8 F4                  CMP EAX,-0xc
005876CB  7D 0A                     JGE 0x005876d7
005876CD  C7 86 5F 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x25f],0x2
LAB_005876d7:
005876D7  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005876DD  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005876E3  8B 96 53 02 00 00         MOV EDX,dword ptr [ESI + 0x253]
005876E9  2B C2                     SUB EAX,EDX
005876EB  83 F8 0A                  CMP EAX,0xa
005876EE  76 19                     JBE 0x00587709
005876F0  8B CE                     MOV ECX,ESI
005876F2  E8 59 DA E7 FF            CALL 0x00405150
005876F7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005876FD  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00587703  89 96 53 02 00 00         MOV dword ptr [ESI + 0x253],EDX
LAB_00587709:
00587709  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0058770E  8B 96 57 02 00 00         MOV EDX,dword ptr [ESI + 0x257]
00587714  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0058771A  2B CA                     SUB ECX,EDX
0058771C  81 F9 A0 0F 00 00         CMP ECX,0xfa0
00587722  0F 86 28 0C 00 00         JBE 0x00588350
00587728  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058772E  6A 0E                     PUSH 0xe
00587730  8B CF                     MOV ECX,EDI
00587732  C7 86 31 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x231],0x2
0058773C  E8 23 CB E7 FF            CALL 0x00404264
00587741  8B CF                     MOV ECX,EDI
00587743  E8 48 B3 E7 FF            CALL 0x00402a90
00587748  8B CE                     MOV ECX,ESI
0058774A  C7 86 6F 02 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x26f],0xff
00587754  E8 3A A6 E7 FF            CALL 0x00401d93
00587759  85 C0                     TEST EAX,EAX
0058775B  0F 84 EF 0B 00 00         JZ 0x00588350
LAB_00587761:
00587761  8B CE                     MOV ECX,ESI
00587763  E8 8A E7 E7 FF            CALL 0x00405ef2
00587768  E9 E3 0B 00 00            JMP 0x00588350
LAB_0058776d:
0058776D  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
00587773  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
00587776  52                        PUSH EDX
00587777  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0058777A  BA FF EE 00 00            MOV EDX,0xeeff
0058777F  F7 EA                     IMUL EDX
00587781  0F AC D0 10               SHRD EAX,EDX,0x10
00587785  83 D0 00                  ADC EAX,0x0
00587788  5A                        POP EDX
00587789  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
0058778F  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
00587795  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00587798  52                        PUSH EDX
00587799  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0058779C  BA FF EE 00 00            MOV EDX,0xeeff
005877A1  F7 EA                     IMUL EDX
005877A3  0F AC D0 10               SHRD EAX,EDX,0x10
005877A7  83 D0 00                  ADC EAX,0x0
005877AA  5A                        POP EDX
005877AB  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
005877B1  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
005877B7  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
005877BA  52                        PUSH EDX
005877BB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005877BE  BA FF EE 00 00            MOV EDX,0xeeff
005877C3  F7 EA                     IMUL EDX
005877C5  0F AC D0 10               SHRD EAX,EDX,0x10
005877C9  83 D0 00                  ADC EAX,0x0
005877CC  5A                        POP EDX
005877CD  66 8B 96 73 02 00 00      MOV DX,word ptr [ESI + 0x273]
005877D4  89 86 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EAX
005877DA  8A 86 6F 02 00 00         MOV AL,byte ptr [ESI + 0x26f]
005877E0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005877E6  6A 01                     PUSH 0x1
005877E8  52                        PUSH EDX
005877E9  50                        PUSH EAX
005877EA  E8 CB B0 E7 FF            CALL 0x004028ba
005877EF  85 C0                     TEST EAX,EAX
005877F1  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
005877F4  74 4E                     JZ 0x00587844
005877F6  8D BE 45 02 00 00         LEA EDI,[ESI + 0x245]
005877FC  8D 9E 43 02 00 00         LEA EBX,[ESI + 0x243]
00587802  8D 8E 41 02 00 00         LEA ECX,[ESI + 0x241]
00587808  57                        PUSH EDI
00587809  53                        PUSH EBX
0058780A  51                        PUSH ECX
0058780B  8B C8                     MOV ECX,EAX
0058780D  E8 D1 B9 E7 FF            CALL 0x004031e3
00587812  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00587815  0F BF 13                  MOVSX EDX,word ptr [EBX]
00587818  0F BF 86 41 02 00 00      MOVSX EAX,word ptr [ESI + 0x241]
0058781F  51                        PUSH ECX
00587820  52                        PUSH EDX
00587821  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
00587825  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00587829  50                        PUSH EAX
0058782A  51                        PUSH ECX
0058782B  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0058782F  52                        PUSH EDX
00587830  50                        PUSH EAX
00587831  E8 D7 56 12 00            CALL 0x006acf0d
00587836  8B F8                     MOV EDI,EAX
00587838  A1 0C 17 81 00            MOV EAX,[0x0081170c]
0058783D  83 C4 18                  ADD ESP,0x18
00587840  3B F8                     CMP EDI,EAX
00587842  7E 7C                     JLE 0x005878c0
LAB_00587844:
00587844  8B CE                     MOV ECX,ESI
00587846  33 FF                     XOR EDI,EDI
00587848  E8 03 D9 E7 FF            CALL 0x00405150
0058784D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00587853  3B C7                     CMP EAX,EDI
00587855  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00587858  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0058785E  89 96 53 02 00 00         MOV dword ptr [ESI + 0x253],EDX
00587864  0F 84 D4 0A 00 00         JZ 0x0058833e
0058786A  39 BE 31 02 00 00         CMP dword ptr [ESI + 0x231],EDI
00587870  0F 85 C8 0A 00 00         JNZ 0x0058833e
00587876  8D BE 45 02 00 00         LEA EDI,[ESI + 0x245]
0058787C  8D 9E 43 02 00 00         LEA EBX,[ESI + 0x243]
00587882  8D 96 41 02 00 00         LEA EDX,[ESI + 0x241]
00587888  57                        PUSH EDI
00587889  53                        PUSH EBX
0058788A  52                        PUSH EDX
0058788B  8B C8                     MOV ECX,EAX
0058788D  E8 51 B9 E7 FF            CALL 0x004031e3
00587892  0F BF 07                  MOVSX EAX,word ptr [EDI]
00587895  0F BF 0B                  MOVSX ECX,word ptr [EBX]
00587898  0F BF 96 41 02 00 00      MOVSX EDX,word ptr [ESI + 0x241]
0058789F  50                        PUSH EAX
005878A0  51                        PUSH ECX
005878A1  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
005878A5  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
005878A9  52                        PUSH EDX
005878AA  50                        PUSH EAX
005878AB  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
005878AF  51                        PUSH ECX
005878B0  52                        PUSH EDX
005878B1  E8 57 56 12 00            CALL 0x006acf0d
005878B6  8B F8                     MOV EDI,EAX
005878B8  A1 0C 17 81 00            MOV EAX,[0x0081170c]
005878BD  83 C4 18                  ADD ESP,0x18
LAB_005878c0:
005878C0  2B C7                     SUB EAX,EDI
005878C2  79 02                     JNS 0x005878c6
005878C4  F7 D8                     NEG EAX
LAB_005878c6:
005878C6  8B D8                     MOV EBX,EAX
005878C8  B8 67 66 66 66            MOV EAX,0x66666667
005878CD  8B CB                     MOV ECX,EBX
005878CF  0F AF CB                  IMUL ECX,EBX
005878D2  F7 E9                     IMUL ECX
005878D4  C1 FA 02                  SAR EDX,0x2
005878D7  8B C2                     MOV EAX,EDX
005878D9  C1 E8 1F                  SHR EAX,0x1f
005878DC  03 D0                     ADD EDX,EAX
005878DE  B8 67 66 66 66            MOV EAX,0x66666667
005878E3  8B CA                     MOV ECX,EDX
005878E5  F7 EB                     IMUL EBX
005878E7  C1 FA 02                  SAR EDX,0x2
005878EA  8B C2                     MOV EAX,EDX
005878EC  C1 E8 1F                  SHR EAX,0x1f
005878EF  03 D0                     ADD EDX,EAX
005878F1  B8 89 B5 F8 14            MOV EAX,0x14f8b589
005878F6  0F AF CA                  IMUL ECX,EDX
005878F9  F7 E9                     IMUL ECX
005878FB  C1 FA 0C                  SAR EDX,0xc
005878FE  8B CA                     MOV ECX,EDX
00587900  B8 03 00 00 00            MOV EAX,0x3
00587905  C1 E9 1F                  SHR ECX,0x1f
00587908  03 D1                     ADD EDX,ECX
0058790A  8B 8E 63 02 00 00         MOV ECX,dword ptr [ESI + 0x263]
00587910  23 C8                     AND ECX,EAX
00587912  8B DA                     MOV EBX,EDX
00587914  8B 96 67 02 00 00         MOV EDX,dword ptr [ESI + 0x267]
0058791A  89 8E 63 02 00 00         MOV dword ptr [ESI + 0x263],ECX
00587920  8B 8E 6B 02 00 00         MOV ECX,dword ptr [ESI + 0x26b]
00587926  23 D0                     AND EDX,EAX
00587928  23 C8                     AND ECX,EAX
0058792A  89 96 67 02 00 00         MOV dword ptr [ESI + 0x267],EDX
00587930  85 FF                     TEST EDI,EDI
00587932  89 8E 6B 02 00 00         MOV dword ptr [ESI + 0x26b],ECX
00587938  0F 84 C0 00 00 00         JZ 0x005879fe
0058793E  0F BF 86 41 02 00 00      MOVSX EAX,word ptr [ESI + 0x241]
00587945  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
00587949  2B C2                     SUB EAX,EDX
0058794B  0F AF 05 0C 17 81 00      IMUL EAX,dword ptr [0x0081170c]
00587952  99                        CDQ
00587953  F7 FF                     IDIV EDI
00587955  8B C8                     MOV ECX,EAX
00587957  B8 31 C3 51 A1            MOV EAX,0xa151c331
0058795C  0F AF CB                  IMUL ECX,EBX
0058795F  C1 E1 02                  SHL ECX,0x2
00587962  F7 E9                     IMUL ECX
00587964  03 D1                     ADD EDX,ECX
00587966  C1 FA 10                  SAR EDX,0x10
00587969  8B C2                     MOV EAX,EDX
0058796B  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0058796F  C1 E8 1F                  SHR EAX,0x1f
00587972  03 D0                     ADD EDX,EAX
00587974  8B 86 63 02 00 00         MOV EAX,dword ptr [ESI + 0x263]
0058797A  03 D0                     ADD EDX,EAX
0058797C  0F BF 86 43 02 00 00      MOVSX EAX,word ptr [ESI + 0x243]
00587983  2B C1                     SUB EAX,ECX
00587985  89 96 63 02 00 00         MOV dword ptr [ESI + 0x263],EDX
0058798B  0F AF 05 0C 17 81 00      IMUL EAX,dword ptr [0x0081170c]
00587992  99                        CDQ
00587993  F7 FF                     IDIV EDI
00587995  8B C8                     MOV ECX,EAX
00587997  B8 31 C3 51 A1            MOV EAX,0xa151c331
0058799C  0F AF CB                  IMUL ECX,EBX
0058799F  C1 E1 02                  SHL ECX,0x2
005879A2  F7 E9                     IMUL ECX
005879A4  03 D1                     ADD EDX,ECX
005879A6  C1 FA 10                  SAR EDX,0x10
005879A9  8B C2                     MOV EAX,EDX
005879AB  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
005879AF  C1 E8 1F                  SHR EAX,0x1f
005879B2  03 D0                     ADD EDX,EAX
005879B4  8B 86 67 02 00 00         MOV EAX,dword ptr [ESI + 0x267]
005879BA  03 D0                     ADD EDX,EAX
005879BC  0F BF 86 45 02 00 00      MOVSX EAX,word ptr [ESI + 0x245]
005879C3  2B C1                     SUB EAX,ECX
005879C5  89 96 67 02 00 00         MOV dword ptr [ESI + 0x267],EDX
005879CB  0F AF 05 0C 17 81 00      IMUL EAX,dword ptr [0x0081170c]
005879D2  99                        CDQ
005879D3  F7 FF                     IDIV EDI
005879D5  8B C8                     MOV ECX,EAX
005879D7  B8 31 C3 51 A1            MOV EAX,0xa151c331
005879DC  0F AF CB                  IMUL ECX,EBX
005879DF  C1 E1 02                  SHL ECX,0x2
005879E2  F7 E9                     IMUL ECX
005879E4  03 D1                     ADD EDX,ECX
005879E6  C1 FA 10                  SAR EDX,0x10
005879E9  8B C2                     MOV EAX,EDX
005879EB  C1 E8 1F                  SHR EAX,0x1f
005879EE  03 D0                     ADD EDX,EAX
005879F0  8B 86 6B 02 00 00         MOV EAX,dword ptr [ESI + 0x26b]
005879F6  03 D0                     ADD EDX,EAX
005879F8  89 96 6B 02 00 00         MOV dword ptr [ESI + 0x26b],EDX
LAB_005879fe:
005879FE  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
00587A04  8B BE 63 02 00 00         MOV EDI,dword ptr [ESI + 0x263]
00587A0A  99                        CDQ
00587A0B  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00587A0F  81 E2 FF FF 00 00         AND EDX,0xffff
00587A15  03 C2                     ADD EAX,EDX
00587A17  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00587A1A  C1 FF 02                  SAR EDI,0x2
00587A1D  C1 F8 10                  SAR EAX,0x10
00587A20  03 F8                     ADD EDI,EAX
00587A22  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
00587A28  0F BF C9                  MOVSX ECX,CX
00587A2B  66 8B 5E 43               MOV BX,word ptr [ESI + 0x43]
00587A2F  03 F9                     ADD EDI,ECX
00587A31  8B 8E 67 02 00 00         MOV ECX,dword ptr [ESI + 0x267]
00587A37  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
00587A3A  99                        CDQ
00587A3B  81 E2 FF FF 00 00         AND EDX,0xffff
00587A41  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00587A44  03 C2                     ADD EAX,EDX
00587A46  C1 F9 02                  SAR ECX,0x2
00587A49  C1 F8 10                  SAR EAX,0x10
00587A4C  03 C8                     ADD ECX,EAX
00587A4E  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00587A52  0F BF D3                  MOVSX EDX,BX
00587A55  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
00587A59  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
00587A5F  8B 9E 6B 02 00 00         MOV EBX,dword ptr [ESI + 0x26b]
00587A65  03 CA                     ADD ECX,EDX
00587A67  99                        CDQ
00587A68  81 E2 FF FF 00 00         AND EDX,0xffff
00587A6E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00587A71  03 C2                     ADD EAX,EDX
00587A73  C1 FB 02                  SAR EBX,0x2
00587A76  C1 F8 10                  SAR EAX,0x10
00587A79  03 D8                     ADD EBX,EAX
00587A7B  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
00587A81  99                        CDQ
00587A82  83 E2 03                  AND EDX,0x3
00587A85  03 C2                     ADD EAX,EDX
00587A87  0F BF 55 C4               MOVSX EDX,word ptr [EBP + -0x3c]
00587A8B  C1 F8 02                  SAR EAX,0x2
00587A8E  03 D8                     ADD EBX,EAX
00587A90  03 DA                     ADD EBX,EDX
00587A92  85 FF                     TEST EDI,EDI
00587A94  7D 05                     JGE 0x00587a9b
00587A96  33 FF                     XOR EDI,EDI
00587A98  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_00587a9b:
00587A9B  85 C9                     TEST ECX,ECX
00587A9D  7D 05                     JGE 0x00587aa4
00587A9F  33 C9                     XOR ECX,ECX
00587AA1  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00587aa4:
00587AA4  85 DB                     TEST EBX,EBX
00587AA6  7D 02                     JGE 0x00587aaa
00587AA8  33 DB                     XOR EBX,EBX
LAB_00587aaa:
00587AAA  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00587AB1  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00587AB4  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00587AB7  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00587ABA  3B F8                     CMP EDI,EAX
00587ABC  7C 06                     JL 0x00587ac4
00587ABE  8D 78 FF                  LEA EDI,[EAX + -0x1]
00587AC1  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_00587ac4:
00587AC4  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
00587ACB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00587ACE  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00587AD1  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00587AD4  3B C8                     CMP ECX,EAX
00587AD6  7C 06                     JL 0x00587ade
00587AD8  8D 48 FF                  LEA ECX,[EAX + -0x1]
00587ADB  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00587ade:
00587ADE  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
00587AE5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00587AE8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00587AEB  C1 E0 03                  SHL EAX,0x3
00587AEE  3B D8                     CMP EBX,EAX
00587AF0  7C 03                     JL 0x00587af5
00587AF2  8D 58 FF                  LEA EBX,[EAX + -0x1]
LAB_00587af5:
00587AF5  85 FF                     TEST EDI,EDI
00587AF7  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00587AFA  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00587AFD  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00587B00  B8 79 19 8C 02            MOV EAX,0x28c1979
00587B05  7C 13                     JL 0x00587b1a
00587B07  F7 EF                     IMUL EDI
00587B09  D1 FA                     SAR EDX,0x1
00587B0B  8B C2                     MOV EAX,EDX
00587B0D  C1 E8 1F                  SHR EAX,0x1f
00587B10  03 D0                     ADD EDX,EAX
00587B12  0F BF D2                  MOVSX EDX,DX
00587B15  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00587B18  EB 12                     JMP 0x00587b2c
LAB_00587b1a:
00587B1A  F7 EF                     IMUL EDI
00587B1C  D1 FA                     SAR EDX,0x1
00587B1E  8B C2                     MOV EAX,EDX
00587B20  C1 E8 1F                  SHR EAX,0x1f
00587B23  03 D0                     ADD EDX,EAX
00587B25  0F BF C2                  MOVSX EAX,DX
00587B28  48                        DEC EAX
00587B29  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_00587b2c:
00587B2C  85 C9                     TEST ECX,ECX
00587B2E  B8 79 19 8C 02            MOV EAX,0x28c1979
00587B33  7C 13                     JL 0x00587b48
00587B35  F7 E9                     IMUL ECX
00587B37  D1 FA                     SAR EDX,0x1
00587B39  8B CA                     MOV ECX,EDX
00587B3B  C1 E9 1F                  SHR ECX,0x1f
00587B3E  03 D1                     ADD EDX,ECX
00587B40  0F BF D2                  MOVSX EDX,DX
00587B43  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00587B46  EB 12                     JMP 0x00587b5a
LAB_00587b48:
00587B48  F7 E9                     IMUL ECX
00587B4A  D1 FA                     SAR EDX,0x1
00587B4C  8B C2                     MOV EAX,EDX
00587B4E  C1 E8 1F                  SHR EAX,0x1f
00587B51  03 D0                     ADD EDX,EAX
00587B53  0F BF C2                  MOVSX EAX,DX
00587B56  48                        DEC EAX
00587B57  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_00587b5a:
00587B5A  85 DB                     TEST EBX,EBX
00587B5C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00587B61  7C 11                     JL 0x00587b74
00587B63  F7 EB                     IMUL EBX
00587B65  C1 FA 06                  SAR EDX,0x6
00587B68  8B CA                     MOV ECX,EDX
00587B6A  C1 E9 1F                  SHR ECX,0x1f
00587B6D  03 D1                     ADD EDX,ECX
00587B6F  0F BF C2                  MOVSX EAX,DX
00587B72  EB 10                     JMP 0x00587b84
LAB_00587b74:
00587B74  F7 EB                     IMUL EBX
00587B76  C1 FA 06                  SAR EDX,0x6
00587B79  8B C2                     MOV EAX,EDX
00587B7B  C1 E8 1F                  SHR EAX,0x1f
00587B7E  03 D0                     ADD EDX,EAX
00587B80  0F BF C2                  MOVSX EAX,DX
00587B83  48                        DEC EAX
LAB_00587b84:
00587B84  C7 86 78 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x278],0xffffffff
00587B8E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00587B94  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00587B97  F6 81 E4 00 00 00 01      TEST byte ptr [ECX + 0xe4],0x1
00587B9E  74 52                     JZ 0x00587bf2
00587BA0  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00587BA3  0F BF 51 47               MOVSX EDX,word ptr [ECX + 0x47]
00587BA7  3B 55 D0                  CMP EDX,dword ptr [EBP + -0x30]
00587BAA  75 46                     JNZ 0x00587bf2
00587BAC  0F BF 51 49               MOVSX EDX,word ptr [ECX + 0x49]
00587BB0  3B 55 CC                  CMP EDX,dword ptr [EBP + -0x34]
00587BB3  75 3D                     JNZ 0x00587bf2
00587BB5  0F BF 49 4B               MOVSX ECX,word ptr [ECX + 0x4b]
00587BB9  3B C8                     CMP ECX,EAX
00587BBB  75 35                     JNZ 0x00587bf2
00587BBD  66 8B 86 51 02 00 00      MOV AX,word ptr [ESI + 0x251]
00587BC4  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00587BC7  50                        PUSH EAX
00587BC8  66 8B 86 4F 02 00 00      MOV AX,word ptr [ESI + 0x24f]
00587BCF  50                        PUSH EAX
00587BD0  66 8B 86 4D 02 00 00      MOV AX,word ptr [ESI + 0x24d]
00587BD7  8B 11                     MOV EDX,dword ptr [ECX]
00587BD9  50                        PUSH EAX
00587BDA  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00587BDD  50                        PUSH EAX
00587BDE  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00587BE1  50                        PUSH EAX
00587BE2  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00587BE5  50                        PUSH EAX
00587BE6  FF 92 DC 00 00 00         CALL dword ptr [EDX + 0xdc]
00587BEC  89 86 78 02 00 00         MOV dword ptr [ESI + 0x278],EAX
LAB_00587bf2:
00587BF2  8B 86 78 02 00 00         MOV EAX,dword ptr [ESI + 0x278]
00587BF8  85 C0                     TEST EAX,EAX
00587BFA  0F 8C AC 00 00 00         JL 0x00587cac
00587C00  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00587C06  6A 0E                     PUSH 0xe
00587C08  8B CF                     MOV ECX,EDI
00587C0A  C7 86 31 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x231],0x2
00587C14  E8 4B C6 E7 FF            CALL 0x00404264
00587C19  8B CF                     MOV ECX,EDI
00587C1B  E8 70 AE E7 FF            CALL 0x00402a90
00587C20  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
00587C24  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
00587C28  8D 5E 43                  LEA EBX,[ESI + 0x43]
00587C2B  68 5C 04 00 00            PUSH 0x45c
00587C30  51                        PUSH ECX
00587C31  52                        PUSH EDX
00587C32  8B CE                     MOV ECX,ESI
00587C34  E8 E0 C0 E7 FF            CALL 0x00403d19
00587C39  8B CE                     MOV ECX,ESI
00587C3B  E8 53 A1 E7 FF            CALL 0x00401d93
00587C40  85 C0                     TEST EAX,EAX
00587C42  0F 85 19 FB FF FF         JNZ 0x00587761
00587C48  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
00587C4B  8B 8E 78 02 00 00         MOV ECX,dword ptr [ESI + 0x278]
00587C51  8D 45 E0                  LEA EAX,[EBP + -0x20]
00587C54  8B 17                     MOV EDX,dword ptr [EDI]
00587C56  50                        PUSH EAX
00587C57  8D 46 45                  LEA EAX,[ESI + 0x45]
00587C5A  50                        PUSH EAX
00587C5B  8D 46 41                  LEA EAX,[ESI + 0x41]
00587C5E  53                        PUSH EBX
00587C5F  50                        PUSH EAX
00587C60  51                        PUSH ECX
00587C61  8B CF                     MOV ECX,EDI
00587C63  FF 92 E0 00 00 00         CALL dword ptr [EDX + 0xe0]
00587C69  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00587C6C  85 C0                     TEST EAX,EAX
00587C6E  75 1E                     JNZ 0x00587c8e
00587C70  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
00587C76  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
00587C7C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00587C82  52                        PUSH EDX
00587C83  50                        PUSH EAX
00587C84  E8 D7 27 16 00            CALL 0x006ea460
00587C89  E9 C2 06 00 00            JMP 0x00588350
LAB_00587c8e:
00587C8E  8B 8F ED 01 00 00         MOV ECX,dword ptr [EDI + 0x1ed]
00587C94  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
00587C9A  51                        PUSH ECX
00587C9B  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00587CA1  52                        PUSH EDX
00587CA2  E8 39 27 16 00            CALL 0x006ea3e0
00587CA7  E9 A4 06 00 00            JMP 0x00588350
LAB_00587cac:
00587CAC  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
00587CB0  66 85 C0                  TEST AX,AX
00587CB3  0F BF C8                  MOVSX ECX,AX
00587CB6  B8 79 19 8C 02            MOV EAX,0x28c1979
00587CBB  7C 10                     JL 0x00587ccd
00587CBD  F7 E9                     IMUL ECX
00587CBF  D1 FA                     SAR EDX,0x1
00587CC1  8B C2                     MOV EAX,EDX
00587CC3  C1 E8 1F                  SHR EAX,0x1f
00587CC6  03 D0                     ADD EDX,EAX
00587CC8  0F BF CA                  MOVSX ECX,DX
00587CCB  EB 0F                     JMP 0x00587cdc
LAB_00587ccd:
00587CCD  F7 E9                     IMUL ECX
00587CCF  D1 FA                     SAR EDX,0x1
00587CD1  8B CA                     MOV ECX,EDX
00587CD3  C1 E9 1F                  SHR ECX,0x1f
00587CD6  03 D1                     ADD EDX,ECX
00587CD8  0F BF CA                  MOVSX ECX,DX
00587CDB  49                        DEC ECX
LAB_00587cdc:
00587CDC  8B 96 90 02 00 00         MOV EDX,dword ptr [ESI + 0x290]
00587CE2  B8 79 19 8C 02            MOV EAX,0x28c1979
00587CE7  85 D2                     TEST EDX,EDX
00587CE9  7C 10                     JL 0x00587cfb
00587CEB  F7 EA                     IMUL EDX
00587CED  D1 FA                     SAR EDX,0x1
00587CEF  8B C2                     MOV EAX,EDX
00587CF1  C1 E8 1F                  SHR EAX,0x1f
00587CF4  03 D0                     ADD EDX,EAX
00587CF6  0F BF C2                  MOVSX EAX,DX
00587CF9  EB 0F                     JMP 0x00587d0a
LAB_00587cfb:
00587CFB  F7 EA                     IMUL EDX
00587CFD  D1 FA                     SAR EDX,0x1
00587CFF  8B C2                     MOV EAX,EDX
00587D01  C1 E8 1F                  SHR EAX,0x1f
00587D04  03 D0                     ADD EDX,EAX
00587D06  0F BF C2                  MOVSX EAX,DX
00587D09  48                        DEC EAX
LAB_00587d0a:
00587D0A  3B C8                     CMP ECX,EAX
00587D0C  0F 85 CC 00 00 00         JNZ 0x00587dde
00587D12  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00587D16  66 85 C0                  TEST AX,AX
00587D19  0F BF C8                  MOVSX ECX,AX
00587D1C  B8 79 19 8C 02            MOV EAX,0x28c1979
00587D21  7C 10                     JL 0x00587d33
00587D23  F7 E9                     IMUL ECX
00587D25  D1 FA                     SAR EDX,0x1
00587D27  8B CA                     MOV ECX,EDX
00587D29  C1 E9 1F                  SHR ECX,0x1f
00587D2C  03 D1                     ADD EDX,ECX
00587D2E  0F BF CA                  MOVSX ECX,DX
00587D31  EB 0F                     JMP 0x00587d42
LAB_00587d33:
00587D33  F7 E9                     IMUL ECX
00587D35  D1 FA                     SAR EDX,0x1
00587D37  8B C2                     MOV EAX,EDX
00587D39  C1 E8 1F                  SHR EAX,0x1f
00587D3C  03 D0                     ADD EDX,EAX
00587D3E  0F BF CA                  MOVSX ECX,DX
00587D41  49                        DEC ECX
LAB_00587d42:
00587D42  8B 96 94 02 00 00         MOV EDX,dword ptr [ESI + 0x294]
00587D48  B8 79 19 8C 02            MOV EAX,0x28c1979
00587D4D  85 D2                     TEST EDX,EDX
00587D4F  7C 10                     JL 0x00587d61
00587D51  F7 EA                     IMUL EDX
00587D53  D1 FA                     SAR EDX,0x1
00587D55  8B C2                     MOV EAX,EDX
00587D57  C1 E8 1F                  SHR EAX,0x1f
00587D5A  03 D0                     ADD EDX,EAX
00587D5C  0F BF C2                  MOVSX EAX,DX
00587D5F  EB 0F                     JMP 0x00587d70
LAB_00587d61:
00587D61  F7 EA                     IMUL EDX
00587D63  D1 FA                     SAR EDX,0x1
00587D65  8B C2                     MOV EAX,EDX
00587D67  C1 E8 1F                  SHR EAX,0x1f
00587D6A  03 D0                     ADD EDX,EAX
00587D6C  0F BF C2                  MOVSX EAX,DX
00587D6F  48                        DEC EAX
LAB_00587d70:
00587D70  3B C8                     CMP ECX,EAX
00587D72  75 6A                     JNZ 0x00587dde
00587D74  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
00587D78  66 85 C0                  TEST AX,AX
00587D7B  0F BF C8                  MOVSX ECX,AX
00587D7E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00587D83  7C 11                     JL 0x00587d96
00587D85  F7 E9                     IMUL ECX
00587D87  C1 FA 06                  SAR EDX,0x6
00587D8A  8B CA                     MOV ECX,EDX
00587D8C  C1 E9 1F                  SHR ECX,0x1f
00587D8F  03 D1                     ADD EDX,ECX
00587D91  0F BF CA                  MOVSX ECX,DX
00587D94  EB 10                     JMP 0x00587da6
LAB_00587d96:
00587D96  F7 E9                     IMUL ECX
00587D98  C1 FA 06                  SAR EDX,0x6
00587D9B  8B C2                     MOV EAX,EDX
00587D9D  C1 E8 1F                  SHR EAX,0x1f
00587DA0  03 D0                     ADD EDX,EAX
00587DA2  0F BF CA                  MOVSX ECX,DX
00587DA5  49                        DEC ECX
LAB_00587da6:
00587DA6  8B 96 98 02 00 00         MOV EDX,dword ptr [ESI + 0x298]
00587DAC  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00587DB1  85 D2                     TEST EDX,EDX
00587DB3  7C 11                     JL 0x00587dc6
00587DB5  F7 EA                     IMUL EDX
00587DB7  C1 FA 06                  SAR EDX,0x6
00587DBA  8B C2                     MOV EAX,EDX
00587DBC  C1 E8 1F                  SHR EAX,0x1f
00587DBF  03 D0                     ADD EDX,EAX
00587DC1  0F BF C2                  MOVSX EAX,DX
00587DC4  EB 10                     JMP 0x00587dd6
LAB_00587dc6:
00587DC6  F7 EA                     IMUL EDX
00587DC8  C1 FA 06                  SAR EDX,0x6
00587DCB  8B C2                     MOV EAX,EDX
00587DCD  C1 E8 1F                  SHR EAX,0x1f
00587DD0  03 D0                     ADD EDX,EAX
00587DD2  0F BF C2                  MOVSX EAX,DX
00587DD5  48                        DEC EAX
LAB_00587dd6:
00587DD6  3B C8                     CMP ECX,EAX
00587DD8  0F 84 DB 01 00 00         JZ 0x00587fb9
LAB_00587dde:
00587DDE  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00587DE1  66 85 C0                  TEST AX,AX
00587DE4  0F 8C B4 01 00 00         JL 0x00587f9e
00587DEA  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
00587DF1  66 3B C1                  CMP AX,CX
00587DF4  0F 8D A4 01 00 00         JGE 0x00587f9e
00587DFA  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00587DFD  66 85 C0                  TEST AX,AX
00587E00  0F 8C 98 01 00 00         JL 0x00587f9e
00587E06  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
00587E0D  0F 8D 8B 01 00 00         JGE 0x00587f9e
00587E13  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00587E16  66 85 C0                  TEST AX,AX
00587E19  0F 8C 7F 01 00 00         JL 0x00587f9e
00587E1F  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00587E26  0F 8D 72 01 00 00         JGE 0x00587f9e
00587E2C  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00587E33  0F BF C0                  MOVSX EAX,AX
00587E36  0F AF D0                  IMUL EDX,EAX
00587E39  0F BF 45 CC               MOVSX EAX,word ptr [EBP + -0x34]
00587E3D  0F BF C9                  MOVSX ECX,CX
00587E40  0F AF C8                  IMUL ECX,EAX
00587E43  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00587E48  03 D1                     ADD EDX,ECX
00587E4A  0F BF 4D D0               MOVSX ECX,word ptr [EBP + -0x30]
00587E4E  03 D1                     ADD EDX,ECX
00587E50  8B 04 D0                  MOV EAX,dword ptr [EAX + EDX*0x8]
00587E53  85 C0                     TEST EAX,EAX
00587E55  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00587E58  0F 84 40 01 00 00         JZ 0x00587f9e
00587E5E  81 78 20 B4 00 00 00      CMP dword ptr [EAX + 0x20],0xb4
00587E65  0F 84 2D 01 00 00         JZ 0x00587f98
00587E6B  8B F8                     MOV EDI,EAX
00587E6D  8B CF                     MOV ECX,EDI
00587E6F  8B 17                     MOV EDX,dword ptr [EDI]
00587E71  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00587E77  85 C0                     TEST EAX,EAX
00587E79  0F 84 19 01 00 00         JZ 0x00587f98
00587E7F  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00587E82  3D E8 03 00 00            CMP EAX,0x3e8
00587E87  74 09                     JZ 0x00587e92
00587E89  83 F8 14                  CMP EAX,0x14
00587E8C  0F 85 27 01 00 00         JNZ 0x00587fb9
LAB_00587e92:
00587E92  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00587E95  83 F8 08                  CMP EAX,0x8
00587E98  0F 83 1B 01 00 00         JNC 0x00587fb9
00587E9E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00587EA4  85 C9                     TEST ECX,ECX
00587EA6  74 11                     JZ 0x00587eb9
00587EA8  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00587EAB  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00587EB3  0F 83 00 01 00 00         JNC 0x00587fb9
LAB_00587eb9:
00587EB9  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00587EBC  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00587EBF  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00587EC2  88 4D B8                  MOV byte ptr [EBP + -0x48],CL
00587EC5  8A 98 6F 14 00 00         MOV BL,byte ptr [EAX + 0x146f]
00587ECB  88 55 BC                  MOV byte ptr [EBP + -0x44],DL
00587ECE  84 DB                     TEST BL,BL
00587ED0  74 38                     JZ 0x00587f0a
00587ED2  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00587ED5  33 DB                     XOR EBX,EBX
00587ED7  81 E1 FF 00 00 00         AND ECX,0xff
00587EDD  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
00587EE0  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00587EE3  81 E1 FF 00 00 00         AND ECX,0xff
00587EE9  8D 3C D0                  LEA EDI,[EAX + EDX*0x8]
00587EEC  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00587EEF  8A 94 3A CA 11 00 00      MOV DL,byte ptr [EDX + EDI*0x1 + 0x11ca]
00587EF6  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00587EF9  3A 94 01 CA 11 00 00      CMP DL,byte ptr [ECX + EAX*0x1 + 0x11ca]
00587F00  0F 95 C3                  SETNZ BL
00587F03  8B C3                     MOV EAX,EBX
00587F05  E9 8A 00 00 00            JMP 0x00587f94
LAB_00587f0a:
00587F0A  3A CA                     CMP CL,DL
00587F0C  74 7B                     JZ 0x00587f89
00587F0E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00587F11  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
00587F14  81 E1 FF 00 00 00         AND ECX,0xff
00587F1A  81 E7 FF 00 00 00         AND EDI,0xff
00587F20  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00587F23  8A 94 3A 2F 14 00 00      MOV DL,byte ptr [EDX + EDI*0x1 + 0x142f]
00587F2A  84 D2                     TEST DL,DL
00587F2C  75 13                     JNZ 0x00587f41
00587F2E  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
00587F31  38 94 0B 2F 14 00 00      CMP byte ptr [EBX + ECX*0x1 + 0x142f],DL
00587F38  75 07                     JNZ 0x00587f41
00587F3A  B8 FE FF FF FF            MOV EAX,0xfffffffe
00587F3F  EB 4A                     JMP 0x00587f8b
LAB_00587f41:
00587F41  80 FA 01                  CMP DL,0x1
00587F44  75 12                     JNZ 0x00587f58
00587F46  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
00587F49  80 BC 0B 2F 14 00 00 00   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x0
00587F51  75 05                     JNZ 0x00587f58
00587F53  83 C8 FF                  OR EAX,0xffffffff
00587F56  EB 33                     JMP 0x00587f8b
LAB_00587f58:
00587F58  84 D2                     TEST DL,DL
00587F5A  75 14                     JNZ 0x00587f70
00587F5C  8D 1C F8                  LEA EBX,[EAX + EDI*0x8]
00587F5F  80 BC 0B 2F 14 00 00 01   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x1
00587F67  75 07                     JNZ 0x00587f70
00587F69  B8 01 00 00 00            MOV EAX,0x1
00587F6E  EB 1B                     JMP 0x00587f8b
LAB_00587f70:
00587F70  80 FA 01                  CMP DL,0x1
00587F73  75 14                     JNZ 0x00587f89
00587F75  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
00587F78  80 BC 08 2F 14 00 00 01   CMP byte ptr [EAX + ECX*0x1 + 0x142f],0x1
00587F80  75 07                     JNZ 0x00587f89
00587F82  B8 02 00 00 00            MOV EAX,0x2
00587F87  EB 02                     JMP 0x00587f8b
LAB_00587f89:
00587F89  33 C0                     XOR EAX,EAX
LAB_00587f8b:
00587F8B  33 C9                     XOR ECX,ECX
00587F8D  85 C0                     TEST EAX,EAX
00587F8F  0F 9C C1                  SETL CL
00587F92  8B C1                     MOV EAX,ECX
LAB_00587f94:
00587F94  85 C0                     TEST EAX,EAX
00587F96  74 21                     JZ 0x00587fb9
LAB_00587f98:
00587F98  33 DB                     XOR EBX,EBX
00587F9A  33 C9                     XOR ECX,ECX
00587F9C  EB 25                     JMP 0x00587fc3
LAB_00587f9e:
00587F9E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00587FA1  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00587FA7  53                        PUSH EBX
00587FA8  52                        PUSH EDX
00587FA9  57                        PUSH EDI
00587FAA  E8 8F CA E7 FF            CALL 0x00404a3e
00587FAF  33 C9                     XOR ECX,ECX
00587FB1  85 C0                     TEST EAX,EAX
00587FB3  0F 9D C1                  SETGE CL
00587FB6  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_00587fb9:
00587FB9  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00587FBC  33 C9                     XOR ECX,ECX
00587FBE  EB 03                     JMP 0x00587fc3
LAB_00587fc0:
00587FC0  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_00587fc3:
00587FC3  85 DB                     TEST EBX,EBX
00587FC5  0F 84 0F 03 00 00         JZ 0x005882da
00587FCB  83 F9 06                  CMP ECX,0x6
00587FCE  0F 87 8A 00 00 00         JA 0x0058805e
switchD_00587fd4::switchD:
00587FD4  FF 24 8D 08 85 58 00      JMP dword ptr [ECX*0x4 + 0x588508]
switchD_00587fd4::caseD_0:
00587FDB  0F BF 5E 41               MOVSX EBX,word ptr [ESI + 0x41]
00587FDF  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00587FE2  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00587FE5  EB 7D                     JMP 0x00588064
switchD_00587fd4::caseD_1:
00587FE7  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00587FEB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00587FEE  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00587FF1  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00587FF4  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00587FF7  EB 6B                     JMP 0x00588064
switchD_00587fd4::caseD_3:
00587FF9  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00587FFC  EB 04                     JMP 0x00588002
switchD_00587fd4::caseD_4:
00587FFE  0F BF 5E 41               MOVSX EBX,word ptr [ESI + 0x41]
LAB_00588002:
00588002  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00588005  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00588008  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0058800B  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
00588011  99                        CDQ
00588012  83 E2 03                  AND EDX,0x3
00588015  03 C2                     ADD EAX,EDX
00588017  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
0058801B  8B F8                     MOV EDI,EAX
0058801D  C1 FF 02                  SAR EDI,0x2
00588020  03 FA                     ADD EDI,EDX
00588022  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00588025  EB 3D                     JMP 0x00588064
switchD_00587fd4::caseD_5:
00588027  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0058802B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0058802E  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
00588034  99                        CDQ
00588035  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00588038  83 E2 03                  AND EDX,0x3
0058803B  03 C2                     ADD EAX,EDX
0058803D  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00588040  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
00588044  8B F8                     MOV EDI,EAX
00588046  C1 FF 02                  SAR EDI,0x2
00588049  03 FA                     ADD EDI,EDX
0058804B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0058804E  EB 14                     JMP 0x00588064
switchD_00587fd4::caseD_6:
00588050  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00588054  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00588058  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058805B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_0058805e:
0058805E  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00588061  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
switchD_00587fd4::default:
00588064  41                        INC ECX
00588065  B8 79 19 8C 02            MOV EAX,0x28c1979
0058806A  85 DB                     TEST EBX,EBX
0058806C  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0058806F  7C 10                     JL 0x00588081
00588071  F7 EB                     IMUL EBX
00588073  D1 FA                     SAR EDX,0x1
00588075  8B C2                     MOV EAX,EDX
00588077  C1 E8 1F                  SHR EAX,0x1f
0058807A  03 D0                     ADD EDX,EAX
0058807C  0F BF DA                  MOVSX EBX,DX
0058807F  EB 0F                     JMP 0x00588090
LAB_00588081:
00588081  F7 EB                     IMUL EBX
00588083  D1 FA                     SAR EDX,0x1
00588085  8B CA                     MOV ECX,EDX
00588087  C1 E9 1F                  SHR ECX,0x1f
0058808A  03 D1                     ADD EDX,ECX
0058808C  0F BF DA                  MOVSX EBX,DX
0058808F  4B                        DEC EBX
LAB_00588090:
00588090  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00588093  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
00588096  85 C0                     TEST EAX,EAX
00588098  B8 79 19 8C 02            MOV EAX,0x28c1979
0058809D  7C 11                     JL 0x005880b0
0058809F  F7 6D E8                  IMUL dword ptr [EBP + -0x18]
005880A2  D1 FA                     SAR EDX,0x1
005880A4  8B C2                     MOV EAX,EDX
005880A6  C1 E8 1F                  SHR EAX,0x1f
005880A9  03 D0                     ADD EDX,EAX
005880AB  0F BF CA                  MOVSX ECX,DX
005880AE  EB 10                     JMP 0x005880c0
LAB_005880b0:
005880B0  F7 6D E8                  IMUL dword ptr [EBP + -0x18]
005880B3  D1 FA                     SAR EDX,0x1
005880B5  8B CA                     MOV ECX,EDX
005880B7  C1 E9 1F                  SHR ECX,0x1f
005880BA  03 D1                     ADD EDX,ECX
005880BC  0F BF CA                  MOVSX ECX,DX
005880BF  49                        DEC ECX
LAB_005880c0:
005880C0  85 FF                     TEST EDI,EDI
005880C2  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005880C7  7C 11                     JL 0x005880da
005880C9  F7 EF                     IMUL EDI
005880CB  C1 FA 06                  SAR EDX,0x6
005880CE  8B C2                     MOV EAX,EDX
005880D0  C1 E8 1F                  SHR EAX,0x1f
005880D3  03 D0                     ADD EDX,EAX
005880D5  0F BF C2                  MOVSX EAX,DX
005880D8  EB 10                     JMP 0x005880ea
LAB_005880da:
005880DA  F7 EF                     IMUL EDI
005880DC  C1 FA 06                  SAR EDX,0x6
005880DF  8B C2                     MOV EAX,EDX
005880E1  C1 E8 1F                  SHR EAX,0x1f
005880E4  03 D0                     ADD EDX,EAX
005880E6  0F BF C2                  MOVSX EAX,DX
005880E9  48                        DEC EAX
LAB_005880ea:
005880EA  66 85 DB                  TEST BX,BX
005880ED  0F 8C C0 01 00 00         JL 0x005882b3
005880F3  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
005880FA  66 39 55 D0               CMP word ptr [EBP + -0x30],DX
005880FE  0F 8D AF 01 00 00         JGE 0x005882b3
00588104  66 85 C9                  TEST CX,CX
00588107  0F 8C A6 01 00 00         JL 0x005882b3
0058810D  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00588114  0F 8D 99 01 00 00         JGE 0x005882b3
0058811A  66 85 C0                  TEST AX,AX
0058811D  0F 8C 90 01 00 00         JL 0x005882b3
00588123  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0058812A  0F 8D 83 01 00 00         JGE 0x005882b3
00588130  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00588137  0F BF C0                  MOVSX EAX,AX
0058813A  0F AF D0                  IMUL EDX,EAX
0058813D  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00588144  0F BF C9                  MOVSX ECX,CX
00588147  0F AF C1                  IMUL EAX,ECX
0058814A  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00588150  03 D0                     ADD EDX,EAX
00588152  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
00588156  03 D0                     ADD EDX,EAX
00588158  8B 1C D1                  MOV EBX,dword ptr [ECX + EDX*0x8]
0058815B  85 DB                     TEST EBX,EBX
0058815D  0F 84 50 01 00 00         JZ 0x005882b3
00588163  81 7B 20 B4 00 00 00      CMP dword ptr [EBX + 0x20],0xb4
0058816A  0F 84 3F 01 00 00         JZ 0x005882af
00588170  8B 13                     MOV EDX,dword ptr [EBX]
00588172  8B CB                     MOV ECX,EBX
00588174  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0058817A  85 C0                     TEST EAX,EAX
0058817C  0F 84 2D 01 00 00         JZ 0x005882af
00588182  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00588185  3D E8 03 00 00            CMP EAX,0x3e8
0058818A  74 09                     JZ 0x00588195
0058818C  83 F8 14                  CMP EAX,0x14
0058818F  0F 85 39 01 00 00         JNZ 0x005882ce
LAB_00588195:
00588195  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00588198  83 F8 08                  CMP EAX,0x8
0058819B  0F 83 2D 01 00 00         JNC 0x005882ce
005881A1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005881A7  85 C9                     TEST ECX,ECX
005881A9  74 11                     JZ 0x005881bc
005881AB  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005881AE  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
005881B6  0F 83 12 01 00 00         JNC 0x005882ce
LAB_005881bc:
005881BC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005881BF  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
005881C2  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
005881C5  88 4D B8                  MOV byte ptr [EBP + -0x48],CL
005881C8  80 B8 6F 14 00 00 00      CMP byte ptr [EAX + 0x146f],0x0
005881CF  88 55 BC                  MOV byte ptr [EBP + -0x44],DL
005881D2  74 3C                     JZ 0x00588210
005881D4  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
005881D7  81 E1 FF 00 00 00         AND ECX,0xff
005881DD  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
005881E0  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005881E3  81 E1 FF 00 00 00         AND ECX,0xff
005881E9  8D 3C D0                  LEA EDI,[EAX + EDX*0x8]
005881EC  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
005881EF  8D 3C C9                  LEA EDI,[ECX + ECX*0x8]
005881F2  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
005881F5  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
005881F8  8A 94 0A CA 11 00 00      MOV DL,byte ptr [EDX + ECX*0x1 + 0x11ca]
005881FF  33 C9                     XOR ECX,ECX
00588201  3A 94 07 CA 11 00 00      CMP DL,byte ptr [EDI + EAX*0x1 + 0x11ca]
00588208  0F 95 C1                  SETNZ CL
0058820B  E9 99 00 00 00            JMP 0x005882a9
LAB_00588210:
00588210  3A CA                     CMP CL,DL
00588212  0F 84 88 00 00 00         JZ 0x005882a0
00588218  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0058821B  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
0058821E  81 E1 FF 00 00 00         AND ECX,0xff
00588224  81 E7 FF 00 00 00         AND EDI,0xff
0058822A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0058822D  8A 94 3A 2F 14 00 00      MOV DL,byte ptr [EDX + EDI*0x1 + 0x142f]
00588234  84 D2                     TEST DL,DL
00588236  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00588239  75 17                     JNZ 0x00588252
0058823B  8D 14 F8                  LEA EDX,[EAX + EDI*0x8]
0058823E  80 BC 0A 2F 14 00 00 00   CMP byte ptr [EDX + ECX*0x1 + 0x142f],0x0
00588246  75 07                     JNZ 0x0058824f
00588248  B8 FE FF FF FF            MOV EAX,0xfffffffe
0058824D  EB 53                     JMP 0x005882a2
LAB_0058824f:
0058824F  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
LAB_00588252:
00588252  80 FA 01                  CMP DL,0x1
00588255  75 15                     JNZ 0x0058826c
00588257  8D 14 F8                  LEA EDX,[EAX + EDI*0x8]
0058825A  80 BC 0A 2F 14 00 00 00   CMP byte ptr [EDX + ECX*0x1 + 0x142f],0x0
00588262  75 05                     JNZ 0x00588269
00588264  83 C8 FF                  OR EAX,0xffffffff
00588267  EB 39                     JMP 0x005882a2
LAB_00588269:
00588269  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
LAB_0058826c:
0058826C  84 D2                     TEST DL,DL
0058826E  75 17                     JNZ 0x00588287
00588270  8D 14 F8                  LEA EDX,[EAX + EDI*0x8]
00588273  80 BC 0A 2F 14 00 00 01   CMP byte ptr [EDX + ECX*0x1 + 0x142f],0x1
0058827B  75 07                     JNZ 0x00588284
0058827D  B8 01 00 00 00            MOV EAX,0x1
00588282  EB 1E                     JMP 0x005882a2
LAB_00588284:
00588284  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
LAB_00588287:
00588287  80 FA 01                  CMP DL,0x1
0058828A  75 14                     JNZ 0x005882a0
0058828C  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
0058828F  80 BC 08 2F 14 00 00 01   CMP byte ptr [EAX + ECX*0x1 + 0x142f],0x1
00588297  75 07                     JNZ 0x005882a0
00588299  B8 02 00 00 00            MOV EAX,0x2
0058829E  EB 02                     JMP 0x005882a2
LAB_005882a0:
005882A0  33 C0                     XOR EAX,EAX
LAB_005882a2:
005882A2  33 C9                     XOR ECX,ECX
005882A4  85 C0                     TEST EAX,EAX
005882A6  0F 9C C1                  SETL CL
LAB_005882a9:
005882A9  8B C1                     MOV EAX,ECX
005882AB  85 C0                     TEST EAX,EAX
005882AD  74 1F                     JZ 0x005882ce
LAB_005882af:
005882AF  33 DB                     XOR EBX,EBX
005882B1  EB 1B                     JMP 0x005882ce
LAB_005882b3:
005882B3  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005882B6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005882B9  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005882BF  57                        PUSH EDI
005882C0  52                        PUSH EDX
005882C1  50                        PUSH EAX
005882C2  E8 77 C7 E7 FF            CALL 0x00404a3e
005882C7  33 DB                     XOR EBX,EBX
005882C9  85 C0                     TEST EAX,EAX
005882CB  0F 9D C3                  SETGE BL
LAB_005882ce:
005882CE  83 7D CC 07               CMP dword ptr [EBP + -0x34],0x7
005882D2  0F 8C E8 FC FF FF         JL 0x00587fc0
005882D8  EB 2C                     JMP 0x00588306
LAB_005882da:
005882DA  83 F9 07                  CMP ECX,0x7
005882DD  7D 27                     JGE 0x00588306
005882DF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005882E2  85 C0                     TEST EAX,EAX
005882E4  7D 10                     JGE 0x005882f6
005882E6  8B 8E 5F 02 00 00         MOV ECX,dword ptr [ESI + 0x25f]
005882EC  33 C0                     XOR EAX,EAX
005882EE  F7 D9                     NEG ECX
005882F0  89 8E 5F 02 00 00         MOV dword ptr [ESI + 0x25f],ECX
LAB_005882f6:
005882F6  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005882F9  50                        PUSH EAX
005882FA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005882FD  52                        PUSH EDX
005882FE  50                        PUSH EAX
005882FF  8B CE                     MOV ECX,ESI
00588301  E8 01 AE E7 FF            CALL 0x00403107
LAB_00588306:
00588306  8B 8E 5F 02 00 00         MOV ECX,dword ptr [ESI + 0x25f]
0058830C  8B 96 5B 02 00 00         MOV EDX,dword ptr [ESI + 0x25b]
00588312  03 D1                     ADD EDX,ECX
00588314  8B C2                     MOV EAX,EDX
00588316  89 96 5B 02 00 00         MOV dword ptr [ESI + 0x25b],EDX
0058831C  83 F8 0C                  CMP EAX,0xc
0058831F  7E 0C                     JLE 0x0058832d
00588321  C7 86 5F 02 00 00 FE FF FF FF  MOV dword ptr [ESI + 0x25f],0xfffffffe
0058832B  EB 23                     JMP 0x00588350
LAB_0058832d:
0058832D  83 F8 F4                  CMP EAX,-0xc
00588330  7D 1E                     JGE 0x00588350
00588332  C7 86 5F 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x25f],0x2
0058833C  EB 12                     JMP 0x00588350
LAB_0058833e:
0058833E  89 BE 6B 02 00 00         MOV dword ptr [ESI + 0x26b],EDI
00588344  89 BE 67 02 00 00         MOV dword ptr [ESI + 0x267],EDI
0058834A  89 BE 63 02 00 00         MOV dword ptr [ESI + 0x263],EDI
LAB_00588350:
00588350  8B 96 31 02 00 00         MOV EDX,dword ptr [ESI + 0x231]
00588356  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058835A  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0058835E  66 8B 5E 45               MOV BX,word ptr [ESI + 0x45]
00588362  83 FA 02                  CMP EDX,0x2
00588365  66 89 86 4D 02 00 00      MOV word ptr [ESI + 0x24d],AX
0058836C  66 89 8E 4F 02 00 00      MOV word ptr [ESI + 0x24f],CX
00588373  66 89 9E 51 02 00 00      MOV word ptr [ESI + 0x251],BX
0058837A  0F 84 5A 01 00 00         JZ 0x005884da
00588380  66 85 C0                  TEST AX,AX
00588383  0F BF D0                  MOVSX EDX,AX
00588386  B8 79 19 8C 02            MOV EAX,0x28c1979
0058838B  7C 10                     JL 0x0058839d
0058838D  F7 EA                     IMUL EDX
0058838F  D1 FA                     SAR EDX,0x1
00588391  8B C2                     MOV EAX,EDX
00588393  C1 E8 1F                  SHR EAX,0x1f
00588396  03 D0                     ADD EDX,EAX
00588398  0F BF FA                  MOVSX EDI,DX
0058839B  EB 0F                     JMP 0x005883ac
LAB_0058839d:
0058839D  F7 EA                     IMUL EDX
0058839F  D1 FA                     SAR EDX,0x1
005883A1  8B C2                     MOV EAX,EDX
005883A3  C1 E8 1F                  SHR EAX,0x1f
005883A6  03 D0                     ADD EDX,EAX
005883A8  0F BF FA                  MOVSX EDI,DX
005883AB  4F                        DEC EDI
LAB_005883ac:
005883AC  66 85 C9                  TEST CX,CX
005883AF  0F BF C9                  MOVSX ECX,CX
005883B2  B8 79 19 8C 02            MOV EAX,0x28c1979
005883B7  7C 10                     JL 0x005883c9
005883B9  F7 E9                     IMUL ECX
005883BB  D1 FA                     SAR EDX,0x1
005883BD  8B CA                     MOV ECX,EDX
005883BF  C1 E9 1F                  SHR ECX,0x1f
005883C2  03 D1                     ADD EDX,ECX
005883C4  0F BF CA                  MOVSX ECX,DX
005883C7  EB 0F                     JMP 0x005883d8
LAB_005883c9:
005883C9  F7 E9                     IMUL ECX
005883CB  D1 FA                     SAR EDX,0x1
005883CD  8B C2                     MOV EAX,EDX
005883CF  C1 E8 1F                  SHR EAX,0x1f
005883D2  03 D0                     ADD EDX,EAX
005883D4  0F BF CA                  MOVSX ECX,DX
005883D7  49                        DEC ECX
LAB_005883d8:
005883D8  66 85 DB                  TEST BX,BX
005883DB  0F BF D3                  MOVSX EDX,BX
005883DE  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005883E3  7C 11                     JL 0x005883f6
005883E5  F7 EA                     IMUL EDX
005883E7  C1 FA 06                  SAR EDX,0x6
005883EA  8B C2                     MOV EAX,EDX
005883EC  C1 E8 1F                  SHR EAX,0x1f
005883EF  03 D0                     ADD EDX,EAX
005883F1  0F BF C2                  MOVSX EAX,DX
005883F4  EB 10                     JMP 0x00588406
LAB_005883f6:
005883F6  F7 EA                     IMUL EDX
005883F8  C1 FA 06                  SAR EDX,0x6
005883FB  8B C2                     MOV EAX,EDX
005883FD  C1 E8 1F                  SHR EAX,0x1f
00588400  03 D0                     ADD EDX,EAX
00588402  0F BF C2                  MOVSX EAX,DX
00588405  48                        DEC EAX
LAB_00588406:
00588406  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0058840A  3B D7                     CMP EDX,EDI
0058840C  75 14                     JNZ 0x00588422
0058840E  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00588412  3B D1                     CMP EDX,ECX
00588414  75 0C                     JNZ 0x00588422
00588416  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0058841A  3B D0                     CMP EDX,EAX
0058841C  0F 84 B8 00 00 00         JZ 0x005884da
LAB_00588422:
00588422  85 FF                     TEST EDI,EDI
00588424  0F 8C B0 00 00 00         JL 0x005884da
0058842A  85 C9                     TEST ECX,ECX
0058842C  0F 8C A8 00 00 00         JL 0x005884da
00588432  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00588439  3B F8                     CMP EDI,EAX
0058843B  0F 8D 99 00 00 00         JGE 0x005884da
00588441  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00588448  3B CA                     CMP ECX,EDX
0058844A  0F 8D 8A 00 00 00         JGE 0x005884da
00588450  0F AF C1                  IMUL EAX,ECX
00588453  8B 1D 6C B2 7F 00         MOV EBX,dword ptr [0x007fb26c]
00588459  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
0058845C  80 3C 1A 00               CMP byte ptr [EDX + EBX*0x1],0x0
00588460  76 78                     JBE 0x005884da
00588462  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
00588465  8B 14 9D 4C B2 7F 00      MOV EDX,dword ptr [EBX*0x4 + 0x7fb24c]
0058846C  85 D2                     TEST EDX,EDX
0058846E  74 08                     JZ 0x00588478
00588470  03 D7                     ADD EDX,EDI
00588472  80 3C 02 00               CMP byte ptr [EDX + EAX*0x1],0x0
00588476  77 62                     JA 0x005884da
LAB_00588478:
00588478  A1 0C 66 7E 00            MOV EAX,[0x007e660c]
0058847D  50                        PUSH EAX
0058847E  6A 01                     PUSH 0x1
00588480  53                        PUSH EBX
00588481  51                        PUSH ECX
00588482  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00588488  57                        PUSH EDI
00588489  E8 D8 B6 E7 FF            CALL 0x00403b66
0058848E  85 C0                     TEST EAX,EAX
00588490  7C 48                     JL 0x005884da
00588492  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
00588496  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0058849A  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0058849E  51                        PUSH ECX
0058849F  52                        PUSH EDX
005884A0  50                        PUSH EAX
005884A1  E8 DC D6 E7 FF            CALL 0x00405b82
005884A6  83 C4 0C                  ADD ESP,0xc
005884A9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005884AF  8B CF                     MOV ECX,EDI
005884B1  6A 0E                     PUSH 0xe
005884B3  E8 AC BD E7 FF            CALL 0x00404264
005884B8  8B CF                     MOV ECX,EDI
005884BA  E8 D1 A5 E7 FF            CALL 0x00402a90
005884BF  8B CE                     MOV ECX,ESI
005884C1  C7 86 31 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x231],0x2
005884CB  C7 86 6F 02 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x26f],0xff
005884D5  E8 18 DA E7 FF            CALL 0x00405ef2
LAB_005884da:
005884DA  8B 16                     MOV EDX,dword ptr [ESI]
005884DC  8B CE                     MOV ECX,ESI
005884DE  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
005884E4  5F                        POP EDI
005884E5  5E                        POP ESI
005884E6  5B                        POP EBX
005884E7  8B E5                     MOV ESP,EBP
005884E9  5D                        POP EBP
005884EA  C3                        RET
