FUN_006c3b00:
006C3B00  55                        PUSH EBP
006C3B01  8B EC                     MOV EBP,ESP
006C3B03  81 EC 08 02 00 00         SUB ESP,0x208
006C3B09  53                        PUSH EBX
006C3B0A  56                        PUSH ESI
006C3B0B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C3B0E  57                        PUSH EDI
006C3B0F  8D 86 08 05 00 00         LEA EAX,[ESI + 0x508]
006C3B15  50                        PUSH EAX
006C3B16  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006C3B19  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C3B1F  F7 46 04 00 00 00 20      TEST dword ptr [ESI + 0x4],0x20000000
006C3B26  74 06                     JZ 0x006c3b2e
006C3B28  56                        PUSH ESI
006C3B29  E8 E2 05 00 00            CALL 0x006c4110
LAB_006c3b2e:
006C3B2E  F7 46 04 00 00 00 40      TEST dword ptr [ESI + 0x4],0x40000000
006C3B35  74 06                     JZ 0x006c3b3d
006C3B37  56                        PUSH ESI
006C3B38  E8 C3 03 00 00            CALL 0x006c3f00
LAB_006c3b3d:
006C3B3D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C3B40  33 DB                     XOR EBX,EBX
006C3B42  A8 0C                     TEST AL,0xc
006C3B44  89 9E 90 00 00 00         MOV dword ptr [ESI + 0x90],EBX
006C3B4A  89 9E 94 00 00 00         MOV dword ptr [ESI + 0x94],EBX
006C3B50  74 02                     JZ 0x006c3b54
006C3B52  24 FD                     AND AL,0xfd
LAB_006c3b54:
006C3B54  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C3B57  56                        PUSH ESI
006C3B58  81 E1 F0 FF 7F FE         AND ECX,0xfe7ffff0
006C3B5E  0B C8                     OR ECX,EAX
006C3B60  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006C3B63  E8 C8 FA FF FF            CALL 0x006c3630
006C3B68  8B F8                     MOV EDI,EAX
006C3B6A  3B FB                     CMP EDI,EBX
006C3B6C  0F 85 C3 01 00 00         JNZ 0x006c3d35
006C3B72  F6 46 04 01               TEST byte ptr [ESI + 0x4],0x1
006C3B76  74 26                     JZ 0x006c3b9e
006C3B78  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006C3B7B  8B 42 40                  MOV EAX,dword ptr [EDX + 0x40]
006C3B7E  8D 56 2C                  LEA EDX,[ESI + 0x2c]
006C3B81  52                        PUSH EDX
006C3B82  50                        PUSH EAX
006C3B83  8B 08                     MOV ECX,dword ptr [EAX]
006C3B85  FF 51 38                  CALL dword ptr [ECX + 0x38]
006C3B88  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C3B8B  8B 40 40                  MOV EAX,dword ptr [EAX + 0x40]
006C3B8E  3B C3                     CMP EAX,EBX
006C3B90  74 0C                     JZ 0x006c3b9e
006C3B92  8B 08                     MOV ECX,dword ptr [EAX]
006C3B94  50                        PUSH EAX
006C3B95  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C3B98  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006C3B9B  89 5A 40                  MOV dword ptr [EDX + 0x40],EBX
LAB_006c3b9e:
006C3B9E  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
006C3BA1  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
006C3BA4  68 C0 DE 7E 00            PUSH 0x7edec0
006C3BA9  52                        PUSH EDX
006C3BAA  8B 08                     MOV ECX,dword ptr [EAX]
006C3BAC  50                        PUSH EAX
006C3BAD  FF 51 0C                  CALL dword ptr [ECX + 0xc]
006C3BB0  8B F8                     MOV EDI,EAX
006C3BB2  3B FB                     CMP EDI,EBX
006C3BB4  0F 8C 77 01 00 00         JL 0x006c3d31
006C3BBA  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
006C3BBD  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
006C3BC0  68 98 DE 7E 00            PUSH 0x7ede98
006C3BC5  52                        PUSH EDX
006C3BC6  8B 08                     MOV ECX,dword ptr [EAX]
006C3BC8  50                        PUSH EAX
006C3BC9  FF 51 0C                  CALL dword ptr [ECX + 0xc]
006C3BCC  8B F8                     MOV EDI,EAX
006C3BCE  3B FB                     CMP EDI,EBX
006C3BD0  0F 8C 5B 01 00 00         JL 0x006c3d31
006C3BD6  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
006C3BD9  8D 7E 50                  LEA EDI,[ESI + 0x50]
006C3BDC  57                        PUSH EDI
006C3BDD  68 30 12 7A 00            PUSH 0x7a1230
006C3BE2  8B 08                     MOV ECX,dword ptr [EAX]
006C3BE4  50                        PUSH EAX
006C3BE5  FF 11                     CALL dword ptr [ECX]
006C3BE7  85 C0                     TEST EAX,EAX
006C3BE9  74 02                     JZ 0x006c3bed
006C3BEB  89 1F                     MOV dword ptr [EDI],EBX
LAB_006c3bed:
006C3BED  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C3BF0  8D 95 F8 FD FF FF         LEA EDX,[EBP + 0xfffffdf8]
006C3BF6  68 04 01 00 00            PUSH 0x104
006C3BFB  52                        PUSH EDX
006C3BFC  6A FF                     PUSH -0x1
006C3BFE  50                        PUSH EAX
006C3BFF  53                        PUSH EBX
006C3C00  53                        PUSH EBX
006C3C01  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
006C3C07  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
006C3C0A  8D 95 F8 FD FF FF         LEA EDX,[EBP + 0xfffffdf8]
006C3C10  53                        PUSH EBX
006C3C11  52                        PUSH EDX
006C3C12  8B 08                     MOV ECX,dword ptr [EAX]
006C3C14  50                        PUSH EAX
006C3C15  FF 51 34                  CALL dword ptr [ECX + 0x34]
006C3C18  8B F8                     MOV EDI,EAX
006C3C1A  3B FB                     CMP EDI,EBX
006C3C1C  0F 8C 0F 01 00 00         JL 0x006c3d31
006C3C22  8B 1D 6C BC 85 00         MOV EBX,dword ptr [0x0085bc6c]
006C3C28  33 FF                     XOR EDI,EDI
LAB_006c3c2a:
006C3C2A  F7 46 04 00 00 80 00      TEST dword ptr [ESI + 0x4],0x800000
006C3C31  75 0D                     JNZ 0x006c3c40
006C3C33  6A 14                     PUSH 0x14
006C3C35  FF D3                     CALL EBX
006C3C37  47                        INC EDI
006C3C38  81 FF 96 00 00 00         CMP EDI,0x96
006C3C3E  7C EA                     JL 0x006c3c2a
LAB_006c3c40:
006C3C40  6A 14                     PUSH 0x14
006C3C42  FF D3                     CALL EBX
006C3C44  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
006C3C47  8D 56 5C                  LEA EDX,[ESI + 0x5c]
006C3C4A  52                        PUSH EDX
006C3C4B  68 20 12 7A 00            PUSH 0x7a1220
006C3C50  8B 08                     MOV ECX,dword ptr [EAX]
006C3C52  50                        PUSH EAX
006C3C53  FF 11                     CALL dword ptr [ECX]
006C3C55  8B F8                     MOV EDI,EAX
006C3C57  85 FF                     TEST EDI,EDI
006C3C59  0F 85 D6 00 00 00         JNZ 0x006c3d35
006C3C5F  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
006C3C62  8D 56 60                  LEA EDX,[ESI + 0x60]
006C3C65  52                        PUSH EDX
006C3C66  68 10 12 7A 00            PUSH 0x7a1210
006C3C6B  8B 08                     MOV ECX,dword ptr [EAX]
006C3C6D  50                        PUSH EAX
006C3C6E  FF 11                     CALL dword ptr [ECX]
006C3C70  8B F8                     MOV EDI,EAX
006C3C72  85 FF                     TEST EDI,EDI
006C3C74  0F 85 BB 00 00 00         JNZ 0x006c3d35
006C3C7A  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
006C3C7D  8D 5E 64                  LEA EBX,[ESI + 0x64]
006C3C80  53                        PUSH EBX
006C3C81  68 00 12 7A 00            PUSH 0x7a1200
006C3C86  8B 08                     MOV ECX,dword ptr [EAX]
006C3C88  50                        PUSH EAX
006C3C89  FF 11                     CALL dword ptr [ECX]
006C3C8B  8B F8                     MOV EDI,EAX
006C3C8D  85 FF                     TEST EDI,EDI
006C3C8F  74 06                     JZ 0x006c3c97
006C3C91  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
LAB_006c3c97:
006C3C97  8B 03                     MOV EAX,dword ptr [EBX]
006C3C99  85 C0                     TEST EAX,EAX
006C3C9B  74 7B                     JZ 0x006c3d18
006C3C9D  8B 10                     MOV EDX,dword ptr [EAX]
006C3C9F  68 F0 11 7A 00            PUSH 0x7a11f0
006C3CA4  50                        PUSH EAX
006C3CA5  FF 52 24                  CALL dword ptr [EDX + 0x24]
006C3CA8  85 C0                     TEST EAX,EAX
006C3CAA  A3 D4 68 85 00            MOV [0x008568d4],EAX
006C3CAF  75 2C                     JNZ 0x006c3cdd
006C3CB1  8B 03                     MOV EAX,dword ptr [EBX]
006C3CB3  8D 8E A0 00 00 00         LEA ECX,[ESI + 0xa0]
006C3CB9  51                        PUSH ECX
006C3CBA  50                        PUSH EAX
006C3CBB  8B 10                     MOV EDX,dword ptr [EAX]
006C3CBD  FF 52 28                  CALL dword ptr [EDX + 0x28]
006C3CC0  85 C0                     TEST EAX,EAX
006C3CC2  A3 D4 68 85 00            MOV [0x008568d4],EAX
006C3CC7  74 14                     JZ 0x006c3cdd
006C3CC9  C7 86 A0 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xa0],0x0
006C3CD3  C7 86 A4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xa4],0x0
LAB_006c3cdd:
006C3CDD  8B 03                     MOV EAX,dword ptr [EBX]
006C3CDF  68 E0 11 7A 00            PUSH 0x7a11e0
006C3CE4  50                        PUSH EAX
006C3CE5  8B 08                     MOV ECX,dword ptr [EAX]
006C3CE7  FF 51 24                  CALL dword ptr [ECX + 0x24]
006C3CEA  85 C0                     TEST EAX,EAX
006C3CEC  A3 D4 68 85 00            MOV [0x008568d4],EAX
006C3CF1  75 25                     JNZ 0x006c3d18
006C3CF3  8B 03                     MOV EAX,dword ptr [EBX]
006C3CF5  8D 9E A8 00 00 00         LEA EBX,[ESI + 0xa8]
006C3CFB  53                        PUSH EBX
006C3CFC  50                        PUSH EAX
006C3CFD  8B 10                     MOV EDX,dword ptr [EAX]
006C3CFF  FF 52 28                  CALL dword ptr [EDX + 0x28]
006C3D02  85 C0                     TEST EAX,EAX
006C3D04  A3 D4 68 85 00            MOV [0x008568d4],EAX
006C3D09  74 0D                     JZ 0x006c3d18
006C3D0B  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006C3D11  C7 43 04 00 00 00 00      MOV dword ptr [EBX + 0x4],0x0
LAB_006c3d18:
006C3D18  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C3D1B  56                        PUSH ESI
006C3D1C  81 E2 FF FF FF F3         AND EDX,0xf3ffffff
006C3D22  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
006C3D25  E8 56 00 00 00            CALL 0x006c3d80
006C3D2A  81 4E 04 00 00 00 40      OR dword ptr [ESI + 0x4],0x40000000
LAB_006c3d31:
006C3D31  85 FF                     TEST EDI,EDI
006C3D33  74 06                     JZ 0x006c3d3b
LAB_006c3d35:
006C3D35  56                        PUSH ESI
006C3D36  E8 C5 F7 FF FF            CALL 0x006c3500
LAB_006c3d3b:
006C3D3B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C3D3E  50                        PUSH EAX
006C3D3F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C3D45  85 FF                     TEST EDI,EDI
006C3D47  74 22                     JZ 0x006c3d6b
006C3D49  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C3D4F  68 7C 02 00 00            PUSH 0x27c
006C3D54  68 80 DE 7E 00            PUSH 0x7ede80
006C3D59  51                        PUSH ECX
006C3D5A  57                        PUSH EDI
006C3D5B  E8 E0 20 FE FF            CALL 0x006a5e40
006C3D60  8B C7                     MOV EAX,EDI
006C3D62  5F                        POP EDI
006C3D63  5E                        POP ESI
006C3D64  5B                        POP EBX
006C3D65  8B E5                     MOV ESP,EBP
006C3D67  5D                        POP EBP
006C3D68  C2 0C 00                  RET 0xc
LAB_006c3d6b:
006C3D6B  5F                        POP EDI
006C3D6C  5E                        POP ESI
006C3D6D  33 C0                     XOR EAX,EAX
006C3D6F  5B                        POP EBX
006C3D70  8B E5                     MOV ESP,EBP
006C3D72  5D                        POP EBP
006C3D73  C2 0C 00                  RET 0xc
