FUN_006cf950:
006CF950  55                        PUSH EBP
006CF951  8B EC                     MOV EBP,ESP
006CF953  81 EC 9C 00 00 00         SUB ESP,0x9c
006CF959  56                        PUSH ESI
006CF95A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CF95D  57                        PUSH EDI
006CF95E  83 7E 20 FF               CMP dword ptr [ESI + 0x20],-0x1
006CF962  0F 85 66 02 00 00         JNZ 0x006cfbce
006CF968  8B 06                     MOV EAX,dword ptr [ESI]
006CF96A  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006CF96D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006CF970  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
006CF973  A9 00 40 00 60            TEST EAX,0x60004000
006CF978  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
006CF97B  0F 85 4D 02 00 00         JNZ 0x006cfbce
006CF981  A9 00 00 00 08            TEST EAX,0x8000000
006CF986  74 4D                     JZ 0x006cf9d5
006CF988  8B 86 C4 00 00 00         MOV EAX,dword ptr [ESI + 0xc4]
006CF98E  8B BE CC 00 00 00         MOV EDI,dword ptr [ESI + 0xcc]
006CF994  8B 04 87                  MOV EAX,dword ptr [EDI + EAX*0x4]
006CF997  33 FF                     XOR EDI,EDI
006CF999  3B C7                     CMP EAX,EDI
006CF99B  0F 84 21 02 00 00         JZ 0x006cfbc2
006CF9A1  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
006CF9A4  89 7E 20                  MOV dword ptr [ESI + 0x20],EDI
006CF9A7  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
006CF9AA  89 7E 24                  MOV dword ptr [ESI + 0x24],EDI
006CF9AD  0F BF 78 0E               MOVSX EDI,word ptr [EAX + 0xe]
006CF9B1  03 F9                     ADD EDI,ECX
006CF9B3  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
006CF9B6  5F                        POP EDI
006CF9B7  0F BF 48 10               MOVSX ECX,word ptr [EAX + 0x10]
006CF9BB  03 CA                     ADD ECX,EDX
006CF9BD  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
006CF9C0  0F BF 50 12               MOVSX EDX,word ptr [EAX + 0x12]
006CF9C4  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
006CF9C7  0F BF 40 14               MOVSX EAX,word ptr [EAX + 0x14]
006CF9CB  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006CF9CE  5E                        POP ESI
006CF9CF  8B E5                     MOV ESP,EBP
006CF9D1  5D                        POP EBP
006CF9D2  C2 04 00                  RET 0x4
LAB_006cf9d5:
006CF9D5  A9 00 00 00 05            TEST EAX,0x5000000
006CF9DA  0F 84 1A 01 00 00         JZ 0x006cfafa
006CF9E0  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
006CF9E6  B8 00 7D 00 00            MOV EAX,0x7d00
006CF9EB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006CF9EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006CF9F1  8B 86 C4 00 00 00         MOV EAX,dword ptr [ESI + 0xc4]
006CF9F7  8B BE CC 00 00 00         MOV EDI,dword ptr [ESI + 0xcc]
006CF9FD  0F AF C1                  IMUL EAX,ECX
006CFA00  53                        PUSH EBX
006CFA01  33 D2                     XOR EDX,EDX
006CFA03  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006CFA06  33 DB                     XOR EBX,EBX
006CFA08  85 C9                     TEST ECX,ECX
006CFA0A  8D 3C 47                  LEA EDI,[EDI + EAX*0x2]
006CFA0D  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006CFA10  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006CFA13  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006CFA16  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006CFA19  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006CFA1C  0F 8E A3 00 00 00         JLE 0x006cfac5
006CFA22  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_006cfa25:
006CFA25  66 83 7F 04 00            CMP word ptr [EDI + 0x4],0x0
006CFA2A  0F 8C 82 00 00 00         JL 0x006cfab2
006CFA30  8B 47 06                  MOV EAX,dword ptr [EDI + 0x6]
006CFA33  85 C0                     TEST EAX,EAX
006CFA35  74 7B                     JZ 0x006cfab2
006CFA37  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006CFA3A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006CFA3D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006CFA40  03 D1                     ADD EDX,ECX
006CFA42  3B DA                     CMP EBX,EDX
006CFA44  7D 03                     JGE 0x006cfa49
006CFA46  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006cfa49:
006CFA49  0F BF 7F 02               MOVSX EDI,word ptr [EDI + 0x2]
006CFA4D  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006CFA50  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006CFA53  03 D7                     ADD EDX,EDI
006CFA55  3B DA                     CMP EBX,EDX
006CFA57  7D 03                     JGE 0x006cfa5c
006CFA59  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006cfa5c:
006CFA5C  0F BF 50 0E               MOVSX EDX,word ptr [EAX + 0xe]
006CFA60  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006CFA63  03 D1                     ADD EDX,ECX
006CFA65  3B DA                     CMP EBX,EDX
006CFA67  7E 03                     JLE 0x006cfa6c
006CFA69  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_006cfa6c:
006CFA6C  0F BF 50 10               MOVSX EDX,word ptr [EAX + 0x10]
006CFA70  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006CFA73  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006CFA76  03 D7                     ADD EDX,EDI
006CFA78  3B DA                     CMP EBX,EDX
006CFA7A  7E 03                     JLE 0x006cfa7f
006CFA7C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_006cfa7f:
006CFA7F  0F BF 58 12               MOVSX EBX,word ptr [EAX + 0x12]
006CFA83  0F BF 50 0E               MOVSX EDX,word ptr [EAX + 0xe]
006CFA87  03 DA                     ADD EBX,EDX
006CFA89  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
006CFA8C  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006CFA8F  3B DA                     CMP EBX,EDX
006CFA91  7D 05                     JGE 0x006cfa98
006CFA93  8B DA                     MOV EBX,EDX
006CFA95  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
LAB_006cfa98:
006CFA98  0F BF 40 14               MOVSX EAX,word ptr [EAX + 0x14]
006CFA9C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006CFA9F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CFAA2  03 C7                     ADD EAX,EDI
006CFAA4  03 C1                     ADD EAX,ECX
006CFAA6  3B D0                     CMP EDX,EAX
006CFAA8  7D 05                     JGE 0x006cfaaf
006CFAAA  8B D0                     MOV EDX,EAX
006CFAAC  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_006cfaaf:
006CFAAF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006cfab2:
006CFAB2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006CFAB5  83 C7 0A                  ADD EDI,0xa
006CFAB8  48                        DEC EAX
006CFAB9  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006CFABC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006CFABF  0F 85 60 FF FF FF         JNZ 0x006cfa25
LAB_006cfac5:
006CFAC5  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006CFAC8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006CFACB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006CFACE  03 C7                     ADD EAX,EDI
006CFAD0  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
006CFAD3  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006CFAD6  03 C1                     ADD EAX,ECX
006CFAD8  2B DF                     SUB EBX,EDI
006CFADA  2B D1                     SUB EDX,ECX
006CFADC  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
006CFADF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006CFAE2  89 56 34                  MOV dword ptr [ESI + 0x34],EDX
006CFAE5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CFAE8  89 5E 30                  MOV dword ptr [ESI + 0x30],EBX
006CFAEB  5B                        POP EBX
006CFAEC  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
006CFAEF  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
006CFAF2  5F                        POP EDI
006CFAF3  5E                        POP ESI
006CFAF4  8B E5                     MOV ESP,EBP
006CFAF6  5D                        POP EBP
006CFAF7  C2 04 00                  RET 0x4
LAB_006cfafa:
006CFAFA  A9 00 00 00 C0            TEST EAX,0xc0000000
006CFAFF  74 48                     JZ 0x006cfb49
006CFB01  8B 8E C4 00 00 00         MOV ECX,dword ptr [ESI + 0xc4]
006CFB07  8B 96 CC 00 00 00         MOV EDX,dword ptr [ESI + 0xcc]
006CFB0D  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
006CFB10  8D 0C CA                  LEA ECX,[EDX + ECX*0x8]
006CFB13  33 D2                     XOR EDX,EDX
006CFB15  3B C2                     CMP EAX,EDX
006CFB17  74 1C                     JZ 0x006cfb35
006CFB19  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006CFB1C  5F                        POP EDI
006CFB1D  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006CFB20  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
006CFB23  8B 01                     MOV EAX,dword ptr [ECX]
006CFB25  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006CFB28  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
006CFB2B  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006CFB2E  5E                        POP ESI
006CFB2F  8B E5                     MOV ESP,EBP
006CFB31  5D                        POP EBP
006CFB32  C2 04 00                  RET 0x4
LAB_006cfb35:
006CFB35  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
006CFB38  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
006CFB3B  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
006CFB3E  89 56 34                  MOV dword ptr [ESI + 0x34],EDX
006CFB41  5F                        POP EDI
006CFB42  5E                        POP ESI
006CFB43  8B E5                     MOV ESP,EBP
006CFB45  5D                        POP EBP
006CFB46  C2 04 00                  RET 0x4
LAB_006cfb49:
006CFB49  A9 00 00 00 A0            TEST EAX,0xa0000000
006CFB4E  74 7E                     JZ 0x006cfbce
006CFB50  8B 8E C4 00 00 00         MOV ECX,dword ptr [ESI + 0xc4]
006CFB56  8B 96 CC 00 00 00         MOV EDX,dword ptr [ESI + 0xcc]
006CFB5C  33 FF                     XOR EDI,EDI
006CFB5E  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
006CFB61  3B C7                     CMP EAX,EDI
006CFB63  74 5D                     JZ 0x006cfbc2
006CFB65  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
006CFB6B  C7 85 64 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff64],0x7c
006CFB75  C7 85 68 FF FF FF 06 00 00 00  MOV dword ptr [EBP + 0xffffff68],0x6
006CFB7F  8B 08                     MOV ECX,dword ptr [EAX]
006CFB81  52                        PUSH EDX
006CFB82  50                        PUSH EAX
006CFB83  FF 51 58                  CALL dword ptr [ECX + 0x58]
006CFB86  85 C0                     TEST EAX,EAX
006CFB88  74 18                     JZ 0x006cfba2
006CFB8A  33 C9                     XOR ECX,ECX
006CFB8C  33 C0                     XOR EAX,EAX
006CFB8E  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
006CFB91  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
006CFB94  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
006CFB97  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006CFB9A  5F                        POP EDI
006CFB9B  5E                        POP ESI
006CFB9C  8B E5                     MOV ESP,EBP
006CFB9E  5D                        POP EBP
006CFB9F  C2 04 00                  RET 0x4
LAB_006cfba2:
006CFBA2  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
006CFBA8  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006CFBAE  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
006CFBB1  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
006CFBB4  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
006CFBB7  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006CFBBA  5F                        POP EDI
006CFBBB  5E                        POP ESI
006CFBBC  8B E5                     MOV ESP,EBP
006CFBBE  5D                        POP EBP
006CFBBF  C2 04 00                  RET 0x4
LAB_006cfbc2:
006CFBC2  89 7E 20                  MOV dword ptr [ESI + 0x20],EDI
006CFBC5  89 7E 30                  MOV dword ptr [ESI + 0x30],EDI
006CFBC8  89 7E 24                  MOV dword ptr [ESI + 0x24],EDI
006CFBCB  89 7E 34                  MOV dword ptr [ESI + 0x34],EDI
LAB_006cfbce:
006CFBCE  5F                        POP EDI
006CFBCF  5E                        POP ESI
006CFBD0  8B E5                     MOV ESP,EBP
006CFBD2  5D                        POP EBP
006CFBD3  C2 04 00                  RET 0x4
