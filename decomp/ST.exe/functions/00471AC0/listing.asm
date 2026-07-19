STBoatC::Guard:
00471AC0  55                        PUSH EBP
00471AC1  8B EC                     MOV EBP,ESP
00471AC3  83 EC 60                  SUB ESP,0x60
00471AC6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00471AC9  53                        PUSH EBX
00471ACA  33 DB                     XOR EBX,EBX
00471ACC  56                        PUSH ESI
00471ACD  3B C3                     CMP EAX,EBX
00471ACF  57                        PUSH EDI
00471AD0  8B F1                     MOV ESI,ECX
00471AD2  74 05                     JZ 0x00471ad9
00471AD4  83 F8 01                  CMP EAX,0x1
00471AD7  75 79                     JNZ 0x00471b52
LAB_00471ad9:
00471AD9  B9 17 00 00 00            MOV ECX,0x17
00471ADE  33 C0                     XOR EAX,EAX
00471AE0  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
00471AE6  83 EC 10                  SUB ESP,0x10
00471AE9  F3 AB                     STOSD.REP ES:EDI
00471AEB  8D 86 A6 03 00 00         LEA EAX,[ESI + 0x3a6]
00471AF1  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
00471AF7  8B CC                     MOV ECX,ESP
00471AF9  8B 10                     MOV EDX,dword ptr [EAX]
00471AFB  89 11                     MOV dword ptr [ECX],EDX
00471AFD  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00471B00  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00471B03  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00471B06  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00471B09  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00471B0C  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00471B0F  8B CE                     MOV ECX,ESI
00471B11  E8 E7 01 F9 FF            CALL 0x00401cfd
00471B16  83 C8 FF                  OR EAX,0xffffffff
00471B19  89 9E 7B 04 00 00         MOV dword ptr [ESI + 0x47b],EBX
00471B1F  89 86 87 04 00 00         MOV dword ptr [ESI + 0x487],EAX
00471B25  C7 86 8B 04 00 00 FF FF 00 00  MOV dword ptr [ESI + 0x48b],0xffff
00471B2F  89 86 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EAX
00471B35  C7 86 36 08 00 00 02 00 00 00  MOV dword ptr [ESI + 0x836],0x2
00471B3F  66 8B 8E 16 08 00 00      MOV CX,word ptr [ESI + 0x816]
00471B46  66 69 C9 C9 00            IMUL CX,CX,0xc9
00471B4B  66 89 8E 14 08 00 00      MOV word ptr [ESI + 0x814],CX
LAB_00471b52:
00471B52  83 BE 2E 08 00 00 FF      CMP dword ptr [ESI + 0x82e],-0x1
00471B59  75 36                     JNZ 0x00471b91
00471B5B  8B 8E 36 08 00 00         MOV ECX,dword ptr [ESI + 0x836]
00471B61  49                        DEC ECX
00471B62  8B C1                     MOV EAX,ECX
00471B64  89 8E 36 08 00 00         MOV dword ptr [ESI + 0x836],ECX
00471B6A  83 F8 01                  CMP EAX,0x1
00471B6D  7E 1C                     JLE 0x00471b8b
00471B6F  8B 16                     MOV EDX,dword ptr [ESI]
00471B71  8B CE                     MOV ECX,ESI
00471B73  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00471B79  F7 D8                     NEG EAX
00471B7B  1B C0                     SBB EAX,EAX
00471B7D  24 FD                     AND AL,0xfd
00471B7F  83 C0 02                  ADD EAX,0x2
00471B82  5F                        POP EDI
00471B83  5E                        POP ESI
00471B84  5B                        POP EBX
00471B85  8B E5                     MOV ESP,EBP
00471B87  5D                        POP EBP
00471B88  C2 04 00                  RET 0x4
LAB_00471b8b:
00471B8B  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
LAB_00471b91:
00471B91  8B BE 36 08 00 00         MOV EDI,dword ptr [ESI + 0x836]
00471B97  47                        INC EDI
00471B98  89 BE 36 08 00 00         MOV dword ptr [ESI + 0x836],EDI
00471B9E  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
00471BA4  3B C3                     CMP EAX,EBX
00471BA6  8B CF                     MOV ECX,EDI
00471BA8  0F 85 C0 08 00 00         JNZ 0x0047246e
00471BAE  81 E1 01 00 00 80         AND ECX,0x80000001
00471BB4  79 05                     JNS 0x00471bbb
00471BB6  49                        DEC ECX
00471BB7  83 C9 FE                  OR ECX,0xfffffffe
00471BBA  41                        INC ECX
LAB_00471bbb:
00471BBB  0F 85 18 01 00 00         JNZ 0x00471cd9
00471BC1  A1 34 A1 7F 00            MOV EAX,[0x007fa134]
00471BC6  85 C0                     TEST EAX,EAX
00471BC8  0F 84 0B 01 00 00         JZ 0x00471cd9
00471BCE  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
00471BD4  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00471BD7  85 C9                     TEST ECX,ECX
00471BD9  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00471BDC  0F 84 F7 00 00 00         JZ 0x00471cd9
00471BE2  33 DB                     XOR EBX,EBX
00471BE4  8B F8                     MOV EDI,EAX
00471BE6  85 C9                     TEST ECX,ECX
00471BE8  0F 86 EB 00 00 00         JBE 0x00471cd9
LAB_00471bee:
00471BEE  85 FF                     TEST EDI,EDI
00471BF0  0F 8E E3 00 00 00         JLE 0x00471cd9
00471BF6  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
00471BFC  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00471BFF  52                        PUSH EDX
00471C00  8B D3                     MOV EDX,EBX
00471C02  E8 69 B0 23 00            CALL 0x006acc70
00471C07  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00471C0A  85 C9                     TEST ECX,ECX
00471C0C  0F 84 BB 00 00 00         JZ 0x00471ccd
00471C12  8D 45 FA                  LEA EAX,[EBP + -0x6]
00471C15  8D 55 F8                  LEA EDX,[EBP + -0x8]
00471C18  50                        PUSH EAX
00471C19  8D 45 F6                  LEA EAX,[EBP + -0xa]
00471C1C  52                        PUSH EDX
00471C1D  50                        PUSH EAX
00471C1E  4F                        DEC EDI
00471C1F  E8 A1 FC F8 FF            CALL 0x004018c5
00471C24  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
00471C28  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
00471C2C  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
00471C30  51                        PUSH ECX
00471C31  52                        PUSH EDX
00471C32  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00471C36  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00471C3A  50                        PUSH EAX
00471C3B  51                        PUSH ECX
00471C3C  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00471C40  52                        PUSH EDX
00471C41  50                        PUSH EAX
00471C42  E8 89 91 23 00            CALL 0x006aadd0
00471C47  8B 8E 0C 08 00 00         MOV ECX,dword ptr [ESI + 0x80c]
00471C4D  8B D0                     MOV EDX,EAX
00471C4F  B8 79 19 8C 02            MOV EAX,0x28c1979
00471C54  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00471C57  F7 E9                     IMUL ECX
00471C59  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00471C5C  D1 FA                     SAR EDX,0x1
00471C5E  8B CA                     MOV ECX,EDX
00471C60  C1 E9 1F                  SHR ECX,0x1f
00471C63  8D 54 0A 01               LEA EDX,[EDX + ECX*0x1 + 0x1]
00471C67  3B C2                     CMP EAX,EDX
00471C69  7F 62                     JG 0x00471ccd
00471C6B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00471C6E  8D 4D E0                  LEA ECX,[EBP + -0x20]
00471C71  51                        PUSH ECX
00471C72  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00471C75  52                        PUSH EDX
00471C76  E8 11 2B F9 FF            CALL 0x0040478c
00471C7B  83 F8 02                  CMP EAX,0x2
00471C7E  74 4D                     JZ 0x00471ccd
00471C80  85 C0                     TEST EAX,EAX
00471C82  75 34                     JNZ 0x00471cb8
00471C84  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00471C87  8B CE                     MOV ECX,ESI
00471C89  50                        PUSH EAX
00471C8A  E8 0A 1E F9 FF            CALL 0x00403a99
00471C8F  83 F8 01                  CMP EAX,0x1
00471C92  75 12                     JNZ 0x00471ca6
00471C94  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00471C97  8D 4D E0                  LEA ECX,[EBP + -0x20]
00471C9A  51                        PUSH ECX
00471C9B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00471C9E  52                        PUSH EDX
00471C9F  E8 EA 19 F9 FF            CALL 0x0040368e
00471CA4  EB 17                     JMP 0x00471cbd
LAB_00471ca6:
00471CA6  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00471CA9  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00471CAC  50                        PUSH EAX
00471CAD  51                        PUSH ECX
00471CAE  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00471CB1  E8 78 0B F9 FF            CALL 0x0040282e
00471CB6  EB 15                     JMP 0x00471ccd
LAB_00471cb8:
00471CB8  83 F8 01                  CMP EAX,0x1
00471CBB  75 10                     JNZ 0x00471ccd
LAB_00471cbd:
00471CBD  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00471CC0  8B CE                     MOV ECX,ESI
00471CC2  52                        PUSH EDX
00471CC3  E8 89 F7 F8 FF            CALL 0x00401451
00471CC8  83 F8 01                  CMP EAX,0x1
00471CCB  74 65                     JZ 0x00471d32
LAB_00471ccd:
00471CCD  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00471CD0  43                        INC EBX
00471CD1  3B D8                     CMP EBX,EAX
00471CD3  0F 82 15 FF FF FF         JC 0x00471bee
LAB_00471cd9:
00471CD9  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
00471CDF  33 DB                     XOR EBX,EBX
00471CE1  3B C3                     CMP EAX,EBX
00471CE3  0F 85 57 06 00 00         JNZ 0x00472340
00471CE9  83 BE 36 08 00 00 02      CMP dword ptr [ESI + 0x836],0x2
00471CF0  0F 85 37 02 00 00         JNZ 0x00471f2d
00471CF6  53                        PUSH EBX
00471CF7  8B CE                     MOV ECX,ESI
00471CF9  C7 86 7F 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x47f],0xffffffff
00471D03  E8 FD 3D F9 FF            CALL 0x00405b05
00471D08  8B F8                     MOV EDI,EAX
00471D0A  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00471D0D  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00471D13  05 39 30 00 00            ADD EAX,0x3039
00471D18  33 D2                     XOR EDX,EDX
00471D1A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00471D1D  B9 15 00 00 00            MOV ECX,0x15
00471D22  C1 E8 10                  SHR EAX,0x10
00471D25  F7 F1                     DIV ECX
00471D27  89 96 7F 04 00 00         MOV dword ptr [ESI + 0x47f],EDX
00471D2D  E9 05 02 00 00            JMP 0x00471f37
LAB_00471d32:
00471D32  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00471D35  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00471D38  50                        PUSH EAX
00471D39  51                        PUSH ECX
00471D3A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00471D3D  E8 EC 0A F9 FF            CALL 0x0040282e
00471D42  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00471D45  33 DB                     XOR EBX,EBX
00471D47  89 86 6B 04 00 00         MOV dword ptr [ESI + 0x46b],EAX
00471D4D  66 8B 90 6E 02 00 00      MOV DX,word ptr [EAX + 0x26e]
00471D54  66 89 96 6F 04 00 00      MOV word ptr [ESI + 0x46f],DX
00471D5B  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00471D5E  89 86 71 04 00 00         MOV dword ptr [ESI + 0x471],EAX
00471D64  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00471D68  66 3B C3                  CMP AX,BX
00471D6B  75 14                     JNZ 0x00471d81
00471D6D  8B 16                     MOV EDX,dword ptr [ESI]
00471D6F  BF 01 00 00 00            MOV EDI,0x1
00471D74  66 89 BE 69 04 00 00      MOV word ptr [ESI + 0x469],DI
00471D7B  57                        PUSH EDI
00471D7C  E9 48 01 00 00            JMP 0x00471ec9
LAB_00471d81:
00471D81  66 3D 04 00               CMP AX,0x4
00471D85  0F 85 8C 00 00 00         JNZ 0x00471e17
00471D8B  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00471D8F  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
00471D93  8B 06                     MOV EAX,dword ptr [ESI]
00471D95  6A 03                     PUSH 0x3
00471D97  51                        PUSH ECX
00471D98  52                        PUSH EDX
00471D99  8B CE                     MOV ECX,ESI
00471D9B  66 C7 86 69 04 00 00 FF FF  MOV word ptr [ESI + 0x469],0xffff
00471DA4  FF 50 18                  CALL dword ptr [EAX + 0x18]
00471DA7  83 F8 01                  CMP EAX,0x1
00471DAA  0F 85 29 FF FF FF         JNZ 0x00471cd9
00471DB0  89 86 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EAX
00471DB6  0F BF 86 69 04 00 00      MOVSX EAX,word ptr [ESI + 0x469]
00471DBD  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00471DC1  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00471DC5  03 C1                     ADD EAX,ECX
00471DC7  8B CE                     MOV ECX,ESI
00471DC9  50                        PUSH EAX
00471DCA  52                        PUSH EDX
00471DCB  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00471DCF  50                        PUSH EAX
00471DD0  E8 96 31 F9 FF            CALL 0x00404f6b
00471DD5  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00471DDB  53                        PUSH EBX
00471DDC  8B CE                     MOV ECX,ESI
00471DDE  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00471DE4  E8 4B 1D F9 FF            CALL 0x00403b34
00471DE9  83 F8 FF                  CMP EAX,-0x1
00471DEC  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00471DF2  0F 84 3C 0F 00 00         JZ 0x00472d34
LAB_00471df8:
00471DF8  3B C3                     CMP EAX,EBX
00471DFA  74 09                     JZ 0x00471e05
00471DFC  83 F8 03                  CMP EAX,0x3
00471DFF  0F 85 D4 FE FF FF         JNZ 0x00471cd9
LAB_00471e05:
00471E05  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
00471E0C  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
00471E12  E9 C2 FE FF FF            JMP 0x00471cd9
LAB_00471e17:
00471E17  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00471E1A  BF 01 00 00 00            MOV EDI,0x1
00471E1F  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00471E25  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00471E2B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00471E2E  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00471E32  C1 E8 10                  SHR EAX,0x10
00471E35  23 C7                     AND EAX,EDI
00471E37  8B 16                     MOV EDX,dword ptr [ESI]
00471E39  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
00471E40  66 F7 D8                  NEG AX
00471E43  1B C0                     SBB EAX,EAX
00471E45  83 E0 02                  AND EAX,0x2
00471E48  48                        DEC EAX
00471E49  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
00471E50  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
00471E54  50                        PUSH EAX
00471E55  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00471E59  51                        PUSH ECX
00471E5A  50                        PUSH EAX
00471E5B  8B CE                     MOV ECX,ESI
00471E5D  FF 52 18                  CALL dword ptr [EDX + 0x18]
00471E60  3B C7                     CMP EAX,EDI
00471E62  75 4D                     JNZ 0x00471eb1
00471E64  0F BF 8E 69 04 00 00      MOVSX ECX,word ptr [ESI + 0x469]
00471E6B  89 BE 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDI
00471E71  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00471E75  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00471E79  03 CA                     ADD ECX,EDX
00471E7B  51                        PUSH ECX
00471E7C  50                        PUSH EAX
00471E7D  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
00471E81  51                        PUSH ECX
00471E82  8B CE                     MOV ECX,ESI
00471E84  E8 E2 30 F9 FF            CALL 0x00404f6b
00471E89  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00471E8F  53                        PUSH EBX
00471E90  8B CE                     MOV ECX,ESI
00471E92  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00471E98  E8 97 1C F9 FF            CALL 0x00403b34
00471E9D  83 F8 FF                  CMP EAX,-0x1
00471EA0  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00471EA6  0F 84 88 0E 00 00         JZ 0x00472d34
00471EAC  E9 47 FF FF FF            JMP 0x00471df8
LAB_00471eb1:
00471EB1  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
00471EB8  8B 16                     MOV EDX,dword ptr [ESI]
00471EBA  66 F7 D8                  NEG AX
00471EBD  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
00471EC4  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
00471EC8  50                        PUSH EAX
LAB_00471ec9:
00471EC9  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00471ECD  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00471ED1  50                        PUSH EAX
00471ED2  51                        PUSH ECX
00471ED3  8B CE                     MOV ECX,ESI
00471ED5  FF 52 18                  CALL dword ptr [EDX + 0x18]
00471ED8  3B C7                     CMP EAX,EDI
00471EDA  0F 85 F9 FD FF FF         JNZ 0x00471cd9
00471EE0  0F BF 96 69 04 00 00      MOVSX EDX,word ptr [ESI + 0x469]
00471EE7  89 BE 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDI
00471EED  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00471EF1  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00471EF5  03 D0                     ADD EDX,EAX
00471EF7  52                        PUSH EDX
00471EF8  51                        PUSH ECX
00471EF9  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00471EFD  52                        PUSH EDX
00471EFE  8B CE                     MOV ECX,ESI
00471F00  E8 66 30 F9 FF            CALL 0x00404f6b
00471F05  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00471F0B  53                        PUSH EBX
00471F0C  8B CE                     MOV ECX,ESI
00471F0E  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00471F14  E8 1B 1C F9 FF            CALL 0x00403b34
00471F19  83 F8 FF                  CMP EAX,-0x1
00471F1C  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00471F22  0F 84 0C 0E 00 00         JZ 0x00472d34
00471F28  E9 CB FE FF FF            JMP 0x00471df8
LAB_00471f2d:
00471F2D  53                        PUSH EBX
00471F2E  8B CE                     MOV ECX,ESI
00471F30  E8 D0 3B F9 FF            CALL 0x00405b05
00471F35  8B F8                     MOV EDI,EAX
LAB_00471f37:
00471F37  0F BF 96 79 04 00 00      MOVSX EDX,word ptr [ESI + 0x479]
00471F3E  0F BF 86 77 04 00 00      MOVSX EAX,word ptr [ESI + 0x477]
00471F45  0F BF 8E 75 04 00 00      MOVSX ECX,word ptr [ESI + 0x475]
00471F4C  52                        PUSH EDX
00471F4D  50                        PUSH EAX
00471F4E  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00471F52  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00471F56  51                        PUSH ECX
00471F57  52                        PUSH EDX
00471F58  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
00471F5C  50                        PUSH EAX
00471F5D  51                        PUSH ECX
00471F5E  E8 6D 8E 23 00            CALL 0x006aadd0
00471F63  3B FB                     CMP EDI,EBX
00471F65  0F 85 7E 03 00 00         JNZ 0x004722e9
00471F6B  83 F8 05                  CMP EAX,0x5
00471F6E  7E 3B                     JLE 0x00471fab
00471F70  0F BF 96 79 04 00 00      MOVSX EDX,word ptr [ESI + 0x479]
00471F77  0F BF 86 77 04 00 00      MOVSX EAX,word ptr [ESI + 0x477]
00471F7E  0F BF 8E 75 04 00 00      MOVSX ECX,word ptr [ESI + 0x475]
00471F85  52                        PUSH EDX
00471F86  50                        PUSH EAX
00471F87  51                        PUSH ECX
00471F88  8B CE                     MOV ECX,ESI
00471F8A  C7 86 2E 08 00 00 05 00 00 00  MOV dword ptr [ESI + 0x82e],0x5
00471F94  E8 D2 2F F9 FF            CALL 0x00404f6b
00471F99  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00471F9F  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00471FA5  53                        PUSH EBX
00471FA6  E9 FB 00 00 00            JMP 0x004720a6
LAB_00471fab:
00471FAB  8B 96 83 04 00 00         MOV EDX,dword ptr [ESI + 0x483]
00471FB1  66 8B 86 8B 04 00 00      MOV AX,word ptr [ESI + 0x48b]
00471FB8  8A 8E 87 04 00 00         MOV CL,byte ptr [ESI + 0x487]
00471FBE  52                        PUSH EDX
00471FBF  50                        PUSH EAX
00471FC0  51                        PUSH ECX
00471FC1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00471FC7  E8 EE 08 F9 FF            CALL 0x004028ba
00471FCC  8B CE                     MOV ECX,ESI
00471FCE  8B F8                     MOV EDI,EAX
00471FD0  E8 13 FE F8 FF            CALL 0x00401de8
00471FD5  8B D8                     MOV EBX,EAX
00471FD7  83 FB 0A                  CMP EBX,0xa
00471FDA  0F 87 60 03 00 00         JA 0x00472340
switchD_00471fe0::switchD:
00471FE0  FF 24 9D 7C 2D 47 00      JMP dword ptr [EBX*0x4 + 0x472d7c]
switchD_00471fe0::caseD_5:
00471FE7  8D 55 E8                  LEA EDX,[EBP + -0x18]
00471FEA  8D 45 EC                  LEA EAX,[EBP + -0x14]
00471FED  52                        PUSH EDX
00471FEE  8D 4D F0                  LEA ECX,[EBP + -0x10]
00471FF1  50                        PUSH EAX
00471FF2  51                        PUSH ECX
00471FF3  8B CF                     MOV ECX,EDI
00471FF5  C7 86 2E 08 00 00 04 00 00 00  MOV dword ptr [ESI + 0x82e],0x4
00471FFF  E8 07 3F F9 FF            CALL 0x00405f0b
00472004  EB 78                     JMP 0x0047207e
switchD_00471fe0::caseD_6:
00472006  8D 55 0A                  LEA EDX,[EBP + 0xa]
00472009  8D 45 FC                  LEA EAX,[EBP + -0x4]
0047200C  52                        PUSH EDX
0047200D  8D 4D FE                  LEA ECX,[EBP + -0x2]
00472010  50                        PUSH EAX
00472011  51                        PUSH ECX
00472012  8B CF                     MOV ECX,EDI
00472014  E8 F2 3E F9 FF            CALL 0x00405f0b
00472019  66 8B 55 FE               MOV DX,word ptr [EBP + -0x2]
0047201D  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
00472021  66 8B 4D 0A               MOV CX,word ptr [EBP + 0xa]
00472025  66 89 96 00 08 00 00      MOV word ptr [ESI + 0x800],DX
0047202C  66 89 86 02 08 00 00      MOV word ptr [ESI + 0x802],AX
00472033  8D 55 E8                  LEA EDX,[EBP + -0x18]
00472036  66 89 8E 04 08 00 00      MOV word ptr [ESI + 0x804],CX
0047203D  8D 45 EC                  LEA EAX,[EBP + -0x14]
00472040  52                        PUSH EDX
00472041  8D 4D F0                  LEA ECX,[EBP + -0x10]
00472044  50                        PUSH EAX
00472045  51                        PUSH ECX
00472046  53                        PUSH EBX
00472047  8B CE                     MOV ECX,ESI
00472049  E8 18 3E F9 FF            CALL 0x00405e66
0047204E  85 C0                     TEST EAX,EAX
00472050  75 22                     JNZ 0x00472074
00472052  66 8B 86 14 08 00 00      MOV AX,word ptr [ESI + 0x814]
00472059  66 3D 2D 01               CMP AX,0x12d
0047205D  0F 8C DD 02 00 00         JL 0x00472340
00472063  05 37 FF FF FF            ADD EAX,0xffffff37
00472068  66 89 86 14 08 00 00      MOV word ptr [ESI + 0x814],AX
0047206F  E9 CC 02 00 00            JMP 0x00472340
LAB_00472074:
00472074  C7 86 2E 08 00 00 04 00 00 00  MOV dword ptr [ESI + 0x82e],0x4
LAB_0047207e:
0047207E  0F BF 55 E8               MOVSX EDX,word ptr [EBP + -0x18]
00472082  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
00472086  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
0047208A  52                        PUSH EDX
0047208B  50                        PUSH EAX
0047208C  51                        PUSH ECX
0047208D  8B CE                     MOV ECX,ESI
0047208F  E8 D7 2E F9 FF            CALL 0x00404f6b
00472094  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
0047209A  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
004720A4  6A 00                     PUSH 0x0
LAB_004720a6:
004720A6  8B CE                     MOV ECX,ESI
004720A8  E8 B9 01 F9 FF            CALL 0x00402266
004720AD  83 F8 FF                  CMP EAX,-0x1
004720B0  0F 85 84 02 00 00         JNZ 0x0047233a
004720B6  0B C0                     OR EAX,EAX
004720B8  5F                        POP EDI
004720B9  5E                        POP ESI
004720BA  5B                        POP EBX
004720BB  8B E5                     MOV ESP,EBP
004720BD  5D                        POP EBP
004720BE  C2 04 00                  RET 0x4
switchD_00471fe0::caseD_9:
004720C1  8D 55 E8                  LEA EDX,[EBP + -0x18]
004720C4  8D 45 EC                  LEA EAX,[EBP + -0x14]
004720C7  52                        PUSH EDX
004720C8  8D 4D F0                  LEA ECX,[EBP + -0x10]
004720CB  50                        PUSH EAX
004720CC  51                        PUSH ECX
004720CD  8B CF                     MOV ECX,EDI
004720CF  E8 0F 11 F9 FF            CALL 0x004031e3
004720D4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004720D7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004720DA  8B 16                     MOV EDX,dword ptr [ESI]
004720DC  50                        PUSH EAX
004720DD  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004720E0  51                        PUSH ECX
004720E1  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004720E5  50                        PUSH EAX
004720E6  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004720EA  51                        PUSH ECX
004720EB  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004720EF  50                        PUSH EAX
004720F0  51                        PUSH ECX
004720F1  8B CE                     MOV ECX,ESI
004720F3  FF 52 10                  CALL dword ptr [EDX + 0x10]
004720F6  0F BF C0                  MOVSX EAX,AX
004720F9  50                        PUSH EAX
004720FA  8B CE                     MOV ECX,ESI
004720FC  E8 B1 0F F9 FF            CALL 0x004030b2
00472101  50                        PUSH EAX
00472102  8B CE                     MOV ECX,ESI
00472104  E8 F3 01 F9 FF            CALL 0x004022fc
00472109  E9 32 02 00 00            JMP 0x00472340
switchD_00471fe0::caseD_0:
0047210E  8D 55 E8                  LEA EDX,[EBP + -0x18]
00472111  8D 45 EC                  LEA EAX,[EBP + -0x14]
00472114  52                        PUSH EDX
00472115  8D 4D F0                  LEA ECX,[EBP + -0x10]
00472118  50                        PUSH EAX
00472119  51                        PUSH ECX
0047211A  8B CF                     MOV ECX,EDI
0047211C  E8 C2 10 F9 FF            CALL 0x004031e3
00472121  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00472125  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00472129  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0047212D  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00472131  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
00472137  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
0047213B  84 C0                     TEST AL,AL
0047213D  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00472141  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00472148  0F 86 F2 01 00 00         JBE 0x00472340
0047214E  8D BE A8 02 00 00         LEA EDI,[ESI + 0x2a8]
LAB_00472154:
00472154  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
0047215A  85 C0                     TEST EAX,EAX
0047215C  0F 8E DE 01 00 00         JLE 0x00472340
00472162  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00472166  8D 47 FE                  LEA EAX,[EDI + -0x2]
00472169  52                        PUSH EDX
0047216A  8B 10                     MOV EDX,dword ptr [EAX]
0047216C  83 EC 08                  SUB ESP,0x8
0047216F  8B CC                     MOV ECX,ESP
00472171  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00472175  89 11                     MOV dword ptr [ECX],EDX
00472177  66 89 41 04               MOV word ptr [ECX + 0x4],AX
0047217B  8D 4D D8                  LEA ECX,[EBP + -0x28]
0047217E  51                        PUSH ECX
0047217F  8B CE                     MOV ECX,ESI
00472181  E8 A6 12 F9 FF            CALL 0x0040342c
00472186  8B 10                     MOV EDX,dword ptr [EAX]
00472188  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047218C  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0047218F  66 03 CA                  ADD CX,DX
00472192  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
00472196  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0047219A  66 2B 55 D2               SUB DX,word ptr [EBP + -0x2e]
0047219E  66 03 46 45               ADD AX,word ptr [ESI + 0x45]
004721A2  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
004721A6  66 8B 0F                  MOV CX,word ptr [EDI]
004721A9  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
004721AD  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
004721B1  52                        PUSH EDX
004721B2  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
004721B6  33 C0                     XOR EAX,EAX
004721B8  83 EC 08                  SUB ESP,0x8
004721BB  66 89 4D D2               MOV word ptr [EBP + -0x2e],CX
004721BF  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
004721C3  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004721C6  8B CC                     MOV ECX,ESP
004721C8  89 11                     MOV dword ptr [ECX],EDX
004721CA  66 89 41 04               MOV word ptr [ECX + 0x4],AX
004721CE  8D 45 C8                  LEA EAX,[EBP + -0x38]
004721D1  50                        PUSH EAX
004721D2  8B CE                     MOV ECX,ESI
004721D4  E8 53 12 F9 FF            CALL 0x0040342c
004721D9  8B C8                     MOV ECX,EAX
004721DB  8B 01                     MOV EAX,dword ptr [ECX]
004721DD  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004721E0  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
004721E4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004721E7  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
004721EB  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004721EE  03 C1                     ADD EAX,ECX
004721F0  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
004721F3  2B D1                     SUB EDX,ECX
004721F5  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
004721FB  83 E9 0A                  SUB ECX,0xa
004721FE  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
00472202  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
00472206  66 89 55 B6               MOV word ptr [EBP + -0x4a],DX
0047220A  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0047220D  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
00472211  F7 D9                     NEG ECX
00472213  1B C9                     SBB ECX,ECX
00472215  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00472218  83 E1 FE                  AND ECX,0xfffffffe
0047221B  41                        INC ECX
0047221C  83 FB 0A                  CMP EBX,0xa
0047221F  89 4D C2                  MOV dword ptr [EBP + -0x3e],ECX
00472222  75 09                     JNZ 0x0047222d
00472224  C7 45 A4 A1 00 00 00      MOV dword ptr [EBP + -0x5c],0xa1
0047222B  EB 09                     JMP 0x00472236
LAB_0047222d:
0047222D  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
00472233  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_00472236:
00472236  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0047223A  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047223D  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00472241  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
00472245  8D 4D A0                  LEA ECX,[EBP + -0x60]
00472248  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
0047224B  51                        PUSH ECX
0047224C  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
00472250  E8 C5 0A F9 FF            CALL 0x00402d1a
00472255  83 C4 04                  ADD ESP,0x4
00472258  83 FB 0A                  CMP EBX,0xa
0047225B  75 0C                     JNZ 0x00472269
0047225D  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
00472267  EB 17                     JMP 0x00472280
LAB_00472269:
00472269  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
0047226F  C7 86 AA 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7aa],0x0
00472279  48                        DEC EAX
0047227A  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
LAB_00472280:
00472280  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00472283  33 D2                     XOR EDX,EDX
00472285  8A 96 B2 02 00 00         MOV DL,byte ptr [ESI + 0x2b2]
0047228B  40                        INC EAX
0047228C  83 C7 06                  ADD EDI,0x6
0047228F  3B C2                     CMP EAX,EDX
00472291  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00472294  0F 82 BA FE FF FF         JC 0x00472154
0047229A  E9 A1 00 00 00            JMP 0x00472340
switchD_00471fe0::caseD_1:
0047229F  68 48 AD 7A 00            PUSH 0x7aad48
004722A4  68 CC 4C 7A 00            PUSH 0x7a4ccc
004722A9  6A FF                     PUSH -0x1
004722AB  6A 00                     PUSH 0x0
004722AD  68 5E 2C 00 00            PUSH 0x2c5e
004722B2  68 3C 9D 7A 00            PUSH 0x7a9d3c
004722B7  E8 14 B2 23 00            CALL 0x006ad4d0
004722BC  83 C4 18                  ADD ESP,0x18
004722BF  85 C0                     TEST EAX,EAX
004722C1  74 01                     JZ 0x004722c4
004722C3  CC                        INT3
LAB_004722c4:
004722C4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004722C9  68 5F 2C 00 00            PUSH 0x2c5f
004722CE  68 3C 9D 7A 00            PUSH 0x7a9d3c
004722D3  50                        PUSH EAX
004722D4  6A FF                     PUSH -0x1
004722D6  E8 65 3B 23 00            CALL 0x006a5e40
004722DB  B8 FF FF 00 00            MOV EAX,0xffff
004722E0  5F                        POP EDI
004722E1  5E                        POP ESI
004722E2  5B                        POP EBX
004722E3  8B E5                     MOV ESP,EBP
004722E5  5D                        POP EBP
004722E6  C2 04 00                  RET 0x4
LAB_004722e9:
004722E9  3B C3                     CMP EAX,EBX
004722EB  7E 53                     JLE 0x00472340
004722ED  0F BF 8E 79 04 00 00      MOVSX ECX,word ptr [ESI + 0x479]
004722F4  0F BF 96 77 04 00 00      MOVSX EDX,word ptr [ESI + 0x477]
004722FB  0F BF 86 75 04 00 00      MOVSX EAX,word ptr [ESI + 0x475]
00472302  51                        PUSH ECX
00472303  52                        PUSH EDX
00472304  50                        PUSH EAX
00472305  8B CE                     MOV ECX,ESI
00472307  C7 86 2E 08 00 00 05 00 00 00  MOV dword ptr [ESI + 0x82e],0x5
00472311  E8 55 2C F9 FF            CALL 0x00404f6b
00472316  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
0047231C  53                        PUSH EBX
0047231D  8B CE                     MOV ECX,ESI
0047231F  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00472325  E8 3C FF F8 FF            CALL 0x00402266
0047232A  83 F8 FF                  CMP EAX,-0x1
0047232D  75 0B                     JNZ 0x0047233a
0047232F  0B C0                     OR EAX,EAX
00472331  5F                        POP EDI
00472332  5E                        POP ESI
00472333  5B                        POP EBX
00472334  8B E5                     MOV ESP,EBP
00472336  5D                        POP EBP
00472337  C2 04 00                  RET 0x4
LAB_0047233a:
0047233A  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
switchD_00471fe0::caseD_2:
00472340  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
00472346  85 C0                     TEST EAX,EAX
00472348  0F 85 04 01 00 00         JNZ 0x00472452
0047234E  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
00472358  0F 85 F4 00 00 00         JNZ 0x00472452
0047235E  66 8B 86 75 04 00 00      MOV AX,word ptr [ESI + 0x475]
00472365  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00472369  66 3B C1                  CMP AX,CX
0047236C  75 1E                     JNZ 0x0047238c
0047236E  66 8B 96 77 04 00 00      MOV DX,word ptr [ESI + 0x477]
00472375  66 3B 56 49               CMP DX,word ptr [ESI + 0x49]
00472379  75 11                     JNZ 0x0047238c
0047237B  66 8B 96 79 04 00 00      MOV DX,word ptr [ESI + 0x479]
00472382  66 3B 56 4B               CMP DX,word ptr [ESI + 0x4b]
00472386  0F 84 C6 00 00 00         JZ 0x00472452
LAB_0047238c:
0047238C  0F BF 96 79 04 00 00      MOVSX EDX,word ptr [ESI + 0x479]
00472393  52                        PUSH EDX
00472394  0F BF 96 77 04 00 00      MOVSX EDX,word ptr [ESI + 0x477]
0047239B  0F BF C0                  MOVSX EAX,AX
0047239E  52                        PUSH EDX
0047239F  50                        PUSH EAX
004723A0  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
004723A4  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
004723A8  0F BF C9                  MOVSX ECX,CX
004723AB  52                        PUSH EDX
004723AC  50                        PUSH EAX
004723AD  51                        PUSH ECX
004723AE  E8 1D 8A 23 00            CALL 0x006aadd0
004723B3  83 F8 FC                  CMP EAX,-0x4
004723B6  74 79                     JZ 0x00472431
004723B8  83 F8 08                  CMP EAX,0x8
004723BB  7D 74                     JGE 0x00472431
004723BD  0F BF 96 79 04 00 00      MOVSX EDX,word ptr [ESI + 0x479]
004723C4  0F BF 86 77 04 00 00      MOVSX EAX,word ptr [ESI + 0x477]
004723CB  0F BF 8E 75 04 00 00      MOVSX ECX,word ptr [ESI + 0x475]
004723D2  52                        PUSH EDX
004723D3  50                        PUSH EAX
004723D4  51                        PUSH ECX
004723D5  8B CE                     MOV ECX,ESI
004723D7  C7 86 2E 08 00 00 04 00 00 00  MOV dword ptr [ESI + 0x82e],0x4
004723E1  E8 85 2B F9 FF            CALL 0x00404f6b
004723E6  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
004723EC  6A 00                     PUSH 0x0
004723EE  8B CE                     MOV ECX,ESI
004723F0  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
004723FA  E8 67 FE F8 FF            CALL 0x00402266
004723FF  83 F8 FF                  CMP EAX,-0x1
00472402  75 0B                     JNZ 0x0047240f
00472404  0B C0                     OR EAX,EAX
00472406  5F                        POP EDI
00472407  5E                        POP ESI
00472408  5B                        POP EBX
00472409  8B E5                     MOV ESP,EBP
0047240B  5D                        POP EBP
0047240C  C2 04 00                  RET 0x4
LAB_0047240f:
0047240F  8B 16                     MOV EDX,dword ptr [ESI]
00472411  8B CE                     MOV ECX,ESI
00472413  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00472419  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047241F  F7 D8                     NEG EAX
00472421  1B C0                     SBB EAX,EAX
00472423  24 FD                     AND AL,0xfd
00472425  83 C0 02                  ADD EAX,0x2
00472428  5F                        POP EDI
00472429  5E                        POP ESI
0047242A  5B                        POP EBX
0047242B  8B E5                     MOV ESP,EBP
0047242D  5D                        POP EBP
0047242E  C2 04 00                  RET 0x4
LAB_00472431:
00472431  66 8B 56 5B               MOV DX,word ptr [ESI + 0x5b]
00472435  66 8B 46 5D               MOV AX,word ptr [ESI + 0x5d]
00472439  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
0047243D  66 89 96 75 04 00 00      MOV word ptr [ESI + 0x475],DX
00472444  66 89 86 77 04 00 00      MOV word ptr [ESI + 0x477],AX
0047244B  66 89 8E 79 04 00 00      MOV word ptr [ESI + 0x479],CX
LAB_00472452:
00472452  8B 16                     MOV EDX,dword ptr [ESI]
00472454  8B CE                     MOV ECX,ESI
00472456  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047245C  F7 D8                     NEG EAX
0047245E  1B C0                     SBB EAX,EAX
00472460  24 FD                     AND AL,0xfd
00472462  83 C0 02                  ADD EAX,0x2
00472465  5F                        POP EDI
00472466  5E                        POP ESI
00472467  5B                        POP EBX
00472468  8B E5                     MOV ESP,EBP
0047246A  5D                        POP EBP
0047246B  C2 04 00                  RET 0x4
LAB_0047246e:
0047246E  83 F8 01                  CMP EAX,0x1
00472471  0F 85 4D 02 00 00         JNZ 0x004726c4
00472477  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
0047247D  6A 02                     PUSH 0x2
0047247F  8B CE                     MOV ECX,ESI
00472481  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00472487  E8 A8 16 F9 FF            CALL 0x00403b34
0047248C  83 F8 FF                  CMP EAX,-0x1
0047248F  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00472495  0F 84 99 08 00 00         JZ 0x00472d34
0047249B  3B C3                     CMP EAX,EBX
0047249D  74 0D                     JZ 0x004724ac
0047249F  83 F8 03                  CMP EAX,0x3
004724A2  75 1C                     JNZ 0x004724c0
004724A4  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
004724AA  EB 14                     JMP 0x004724c0
LAB_004724ac:
004724AC  C7 86 7F 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x47f],0xffffffff
004724B6  C7 86 2E 08 00 00 02 00 00 00  MOV dword ptr [ESI + 0x82e],0x2
LAB_004724c0:
004724C0  83 BE 2E 08 00 00 01      CMP dword ptr [ESI + 0x82e],0x1
004724C7  0F 85 E3 07 00 00         JNZ 0x00472cb0
004724CD  6A 01                     PUSH 0x1
004724CF  8B CE                     MOV ECX,ESI
004724D1  E8 2F 36 F9 FF            CALL 0x00405b05
004724D6  85 C0                     TEST EAX,EAX
004724D8  0F 85 D2 07 00 00         JNZ 0x00472cb0
004724DE  8B 86 83 04 00 00         MOV EAX,dword ptr [ESI + 0x483]
004724E4  66 8B 8E 8B 04 00 00      MOV CX,word ptr [ESI + 0x48b]
004724EB  8A 96 87 04 00 00         MOV DL,byte ptr [ESI + 0x487]
004724F1  50                        PUSH EAX
004724F2  51                        PUSH ECX
004724F3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004724F9  52                        PUSH EDX
004724FA  E8 BB 03 F9 FF            CALL 0x004028ba
004724FF  8B CE                     MOV ECX,ESI
00472501  8B F8                     MOV EDI,EAX
00472503  E8 E0 F8 F8 FF            CALL 0x00401de8
00472508  8B D8                     MOV EBX,EAX
0047250A  83 FB 0A                  CMP EBX,0xa
0047250D  0F 87 9D 07 00 00         JA 0x00472cb0
00472513  33 C0                     XOR EAX,EAX
00472515  8A 83 B8 2D 47 00         MOV AL,byte ptr [EBX + 0x472db8]
switchD_0047251b::switchD:
0047251B  FF 24 85 A8 2D 47 00      JMP dword ptr [EAX*0x4 + 0x472da8]
switchD_0047251b::caseD_9:
00472522  8D 4D E8                  LEA ECX,[EBP + -0x18]
00472525  8D 55 EC                  LEA EDX,[EBP + -0x14]
00472528  51                        PUSH ECX
00472529  8D 45 F0                  LEA EAX,[EBP + -0x10]
0047252C  52                        PUSH EDX
0047252D  50                        PUSH EAX
0047252E  E9 07 05 00 00            JMP 0x00472a3a
switchD_0047251b::caseD_0:
00472533  8D 55 E8                  LEA EDX,[EBP + -0x18]
00472536  8D 45 EC                  LEA EAX,[EBP + -0x14]
00472539  52                        PUSH EDX
0047253A  8D 4D F0                  LEA ECX,[EBP + -0x10]
0047253D  50                        PUSH EAX
0047253E  51                        PUSH ECX
0047253F  8B CF                     MOV ECX,EDI
00472541  E8 9D 0C F9 FF            CALL 0x004031e3
00472546  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047254A  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0047254E  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00472552  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00472556  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
0047255C  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
00472560  84 C0                     TEST AL,AL
00472562  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00472566  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0047256D  0F 86 3D 07 00 00         JBE 0x00472cb0
00472573  8D BE A8 02 00 00         LEA EDI,[ESI + 0x2a8]
LAB_00472579:
00472579  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
0047257F  85 C0                     TEST EAX,EAX
00472581  0F 8E 29 07 00 00         JLE 0x00472cb0
00472587  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
0047258B  8D 47 FE                  LEA EAX,[EDI + -0x2]
0047258E  52                        PUSH EDX
0047258F  8B 10                     MOV EDX,dword ptr [EAX]
00472591  83 EC 08                  SUB ESP,0x8
00472594  8B CC                     MOV ECX,ESP
00472596  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0047259A  89 11                     MOV dword ptr [ECX],EDX
0047259C  66 89 41 04               MOV word ptr [ECX + 0x4],AX
004725A0  8D 4D C8                  LEA ECX,[EBP + -0x38]
004725A3  51                        PUSH ECX
004725A4  8B CE                     MOV ECX,ESI
004725A6  E8 81 0E F9 FF            CALL 0x0040342c
004725AB  8B 10                     MOV EDX,dword ptr [EAX]
004725AD  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004725B1  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
004725B4  66 03 CA                  ADD CX,DX
004725B7  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
004725BB  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004725BF  66 2B 55 D2               SUB DX,word ptr [EBP + -0x2e]
004725C3  66 03 46 45               ADD AX,word ptr [ESI + 0x45]
004725C7  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
004725CB  66 8B 0F                  MOV CX,word ptr [EDI]
004725CE  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
004725D2  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
004725D6  52                        PUSH EDX
004725D7  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
004725DB  33 C0                     XOR EAX,EAX
004725DD  83 EC 08                  SUB ESP,0x8
004725E0  66 89 4D D2               MOV word ptr [EBP + -0x2e],CX
004725E4  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
004725E8  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004725EB  8B CC                     MOV ECX,ESP
004725ED  89 11                     MOV dword ptr [ECX],EDX
004725EF  66 89 41 04               MOV word ptr [ECX + 0x4],AX
004725F3  8D 45 D8                  LEA EAX,[EBP + -0x28]
004725F6  50                        PUSH EAX
004725F7  8B CE                     MOV ECX,ESI
004725F9  E8 2E 0E F9 FF            CALL 0x0040342c
004725FE  8B C8                     MOV ECX,EAX
00472600  8B 01                     MOV EAX,dword ptr [ECX]
00472602  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00472605  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
00472609  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0047260C  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
00472610  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00472613  03 C1                     ADD EAX,ECX
00472615  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
00472618  2B D1                     SUB EDX,ECX
0047261A  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
00472620  83 E9 0A                  SUB ECX,0xa
00472623  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
00472627  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
0047262B  66 89 55 B6               MOV word ptr [EBP + -0x4a],DX
0047262F  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00472632  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
00472636  F7 D9                     NEG ECX
00472638  1B C9                     SBB ECX,ECX
0047263A  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
0047263D  83 E1 FE                  AND ECX,0xfffffffe
00472640  41                        INC ECX
00472641  83 FB 0A                  CMP EBX,0xa
00472644  89 4D C2                  MOV dword ptr [EBP + -0x3e],ECX
00472647  75 09                     JNZ 0x00472652
00472649  C7 45 A4 A1 00 00 00      MOV dword ptr [EBP + -0x5c],0xa1
00472650  EB 09                     JMP 0x0047265b
LAB_00472652:
00472652  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
00472658  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_0047265b:
0047265B  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0047265F  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00472662  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00472666  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
0047266A  8D 4D A0                  LEA ECX,[EBP + -0x60]
0047266D  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00472670  51                        PUSH ECX
00472671  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
00472675  E8 A0 06 F9 FF            CALL 0x00402d1a
0047267A  83 C4 04                  ADD ESP,0x4
0047267D  83 FB 0A                  CMP EBX,0xa
00472680  75 0C                     JNZ 0x0047268e
00472682  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
0047268C  EB 17                     JMP 0x004726a5
LAB_0047268e:
0047268E  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00472694  C7 86 AA 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7aa],0x0
0047269E  48                        DEC EAX
0047269F  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
LAB_004726a5:
004726A5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004726A8  33 D2                     XOR EDX,EDX
004726AA  8A 96 B2 02 00 00         MOV DL,byte ptr [ESI + 0x2b2]
004726B0  40                        INC EAX
004726B1  83 C7 06                  ADD EDI,0x6
004726B4  3B C2                     CMP EAX,EDX
004726B6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004726B9  0F 82 BA FE FF FF         JC 0x00472579
004726BF  E9 EC 05 00 00            JMP 0x00472cb0
LAB_004726c4:
004726C4  83 F8 02                  CMP EAX,0x2
004726C7  0F 85 B4 02 00 00         JNZ 0x00472981
004726CD  8B CE                     MOV ECX,ESI
004726CF  E8 83 37 F9 FF            CALL 0x00405e57
004726D4  83 F8 01                  CMP EAX,0x1
004726D7  0F 85 B1 00 00 00         JNZ 0x0047278e
004726DD  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
004726E4  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
004726E8  66 F7 D8                  NEG AX
004726EB  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
004726F2  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
004726F6  8B 16                     MOV EDX,dword ptr [ESI]
004726F8  50                        PUSH EAX
004726F9  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
004726FD  50                        PUSH EAX
004726FE  51                        PUSH ECX
004726FF  8B CE                     MOV ECX,ESI
00472701  FF 52 18                  CALL dword ptr [EDX + 0x18]
00472704  83 F8 01                  CMP EAX,0x1
00472707  75 74                     JNZ 0x0047277d
00472709  0F BF 96 69 04 00 00      MOVSX EDX,word ptr [ESI + 0x469]
00472710  C7 86 2E 08 00 00 03 00 00 00  MOV dword ptr [ESI + 0x82e],0x3
0047271A  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0047271E  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00472722  03 D0                     ADD EDX,EAX
00472724  52                        PUSH EDX
00472725  51                        PUSH ECX
00472726  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0047272A  52                        PUSH EDX
0047272B  8B CE                     MOV ECX,ESI
0047272D  E8 39 28 F9 FF            CALL 0x00404f6b
00472732  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00472738  53                        PUSH EBX
00472739  8B CE                     MOV ECX,ESI
0047273B  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00472741  E8 EE 13 F9 FF            CALL 0x00403b34
00472746  83 F8 FF                  CMP EAX,-0x1
00472749  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
0047274F  0F 84 DF 05 00 00         JZ 0x00472d34
00472755  3B C3                     CMP EAX,EBX
00472757  74 09                     JZ 0x00472762
00472759  83 F8 03                  CMP EAX,0x3
0047275C  0F 85 0C 06 00 00         JNZ 0x00472d6e
LAB_00472762:
00472762  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
00472769  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
0047276F  B8 02 00 00 00            MOV EAX,0x2
00472774  5F                        POP EDI
00472775  5E                        POP ESI
00472776  5B                        POP EBX
00472777  8B E5                     MOV ESP,EBP
00472779  5D                        POP EBP
0047277A  C2 04 00                  RET 0x4
LAB_0047277d:
0047277D  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
00472784  66 F7 D8                  NEG AX
00472787  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
LAB_0047278e:
0047278E  83 BE 2E 08 00 00 02      CMP dword ptr [ESI + 0x82e],0x2
00472795  0F 85 15 05 00 00         JNZ 0x00472cb0
0047279B  6A 02                     PUSH 0x2
0047279D  8B CE                     MOV ECX,ESI
0047279F  E8 61 33 F9 FF            CALL 0x00405b05
004727A4  85 C0                     TEST EAX,EAX
004727A6  0F 85 04 05 00 00         JNZ 0x00472cb0
004727AC  8B 8E 83 04 00 00         MOV ECX,dword ptr [ESI + 0x483]
004727B2  66 8B 96 8B 04 00 00      MOV DX,word ptr [ESI + 0x48b]
004727B9  8A 86 87 04 00 00         MOV AL,byte ptr [ESI + 0x487]
004727BF  51                        PUSH ECX
004727C0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004727C6  52                        PUSH EDX
004727C7  50                        PUSH EAX
004727C8  E8 ED 00 F9 FF            CALL 0x004028ba
004727CD  8B CE                     MOV ECX,ESI
004727CF  8B F8                     MOV EDI,EAX
004727D1  E8 12 F6 F8 FF            CALL 0x00401de8
004727D6  8B D8                     MOV EBX,EAX
004727D8  83 FB 0A                  CMP EBX,0xa
004727DB  0F 87 CF 04 00 00         JA 0x00472cb0
004727E1  33 C9                     XOR ECX,ECX
004727E3  8A 8B D4 2D 47 00         MOV CL,byte ptr [EBX + 0x472dd4]
switchD_004727e9::switchD:
004727E9  FF 24 8D C4 2D 47 00      JMP dword ptr [ECX*0x4 + 0x472dc4]
switchD_004727e9::caseD_0:
004727F0  8D 55 E8                  LEA EDX,[EBP + -0x18]
004727F3  8D 45 EC                  LEA EAX,[EBP + -0x14]
004727F6  52                        PUSH EDX
004727F7  8D 4D F0                  LEA ECX,[EBP + -0x10]
004727FA  50                        PUSH EAX
004727FB  51                        PUSH ECX
004727FC  8B CF                     MOV ECX,EDI
004727FE  E8 E0 09 F9 FF            CALL 0x004031e3
00472803  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00472807  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0047280B  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0047280F  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00472813  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
00472819  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
0047281D  84 C0                     TEST AL,AL
0047281F  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00472823  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0047282A  0F 86 80 04 00 00         JBE 0x00472cb0
00472830  8D BE A8 02 00 00         LEA EDI,[ESI + 0x2a8]
LAB_00472836:
00472836  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
0047283C  85 C0                     TEST EAX,EAX
0047283E  0F 8E 6C 04 00 00         JLE 0x00472cb0
00472844  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00472848  8D 47 FE                  LEA EAX,[EDI + -0x2]
0047284B  52                        PUSH EDX
0047284C  8B 10                     MOV EDX,dword ptr [EAX]
0047284E  83 EC 08                  SUB ESP,0x8
00472851  8B CC                     MOV ECX,ESP
00472853  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00472857  89 11                     MOV dword ptr [ECX],EDX
00472859  66 89 41 04               MOV word ptr [ECX + 0x4],AX
0047285D  8D 4D C8                  LEA ECX,[EBP + -0x38]
00472860  51                        PUSH ECX
00472861  8B CE                     MOV ECX,ESI
00472863  E8 C4 0B F9 FF            CALL 0x0040342c
00472868  8B 10                     MOV EDX,dword ptr [EAX]
0047286A  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047286E  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00472871  66 03 CA                  ADD CX,DX
00472874  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
00472878  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0047287C  66 2B 55 D2               SUB DX,word ptr [EBP + -0x2e]
00472880  66 03 46 45               ADD AX,word ptr [ESI + 0x45]
00472884  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
00472888  66 8B 0F                  MOV CX,word ptr [EDI]
0047288B  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
0047288F  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00472893  52                        PUSH EDX
00472894  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
00472898  33 C0                     XOR EAX,EAX
0047289A  83 EC 08                  SUB ESP,0x8
0047289D  66 89 4D D2               MOV word ptr [EBP + -0x2e],CX
004728A1  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
004728A5  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004728A8  8B CC                     MOV ECX,ESP
004728AA  89 11                     MOV dword ptr [ECX],EDX
004728AC  66 89 41 04               MOV word ptr [ECX + 0x4],AX
004728B0  8D 45 D8                  LEA EAX,[EBP + -0x28]
004728B3  50                        PUSH EAX
004728B4  8B CE                     MOV ECX,ESI
004728B6  E8 71 0B F9 FF            CALL 0x0040342c
004728BB  8B C8                     MOV ECX,EAX
004728BD  8B 01                     MOV EAX,dword ptr [ECX]
004728BF  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004728C2  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
004728C6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004728C9  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
004728CD  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004728D0  03 C1                     ADD EAX,ECX
004728D2  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
004728D5  2B D1                     SUB EDX,ECX
004728D7  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
004728DD  83 E9 0A                  SUB ECX,0xa
004728E0  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
004728E4  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
004728E8  66 89 55 B6               MOV word ptr [EBP + -0x4a],DX
004728EC  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004728EF  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
004728F3  F7 D9                     NEG ECX
004728F5  1B C9                     SBB ECX,ECX
004728F7  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
004728FA  83 E1 FE                  AND ECX,0xfffffffe
004728FD  41                        INC ECX
004728FE  83 FB 0A                  CMP EBX,0xa
00472901  89 4D C2                  MOV dword ptr [EBP + -0x3e],ECX
00472904  75 09                     JNZ 0x0047290f
00472906  C7 45 A4 A1 00 00 00      MOV dword ptr [EBP + -0x5c],0xa1
0047290D  EB 09                     JMP 0x00472918
LAB_0047290f:
0047290F  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
00472915  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_00472918:
00472918  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0047291C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0047291F  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00472923  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
00472927  8D 4D A0                  LEA ECX,[EBP + -0x60]
0047292A  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
0047292D  51                        PUSH ECX
0047292E  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
00472932  E8 E3 03 F9 FF            CALL 0x00402d1a
00472937  83 C4 04                  ADD ESP,0x4
0047293A  83 FB 0A                  CMP EBX,0xa
0047293D  75 0C                     JNZ 0x0047294b
0047293F  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
00472949  EB 17                     JMP 0x00472962
LAB_0047294b:
0047294B  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00472951  C7 86 AA 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7aa],0x0
0047295B  48                        DEC EAX
0047295C  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
LAB_00472962:
00472962  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00472965  33 D2                     XOR EDX,EDX
00472967  8A 96 B2 02 00 00         MOV DL,byte ptr [ESI + 0x2b2]
0047296D  40                        INC EAX
0047296E  83 C7 06                  ADD EDI,0x6
00472971  3B C2                     CMP EAX,EDX
00472973  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00472976  0F 82 BA FE FF FF         JC 0x00472836
0047297C  E9 2F 03 00 00            JMP 0x00472cb0
LAB_00472981:
00472981  83 F8 03                  CMP EAX,0x3
00472984  0F 85 82 02 00 00         JNZ 0x00472c0c
0047298A  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00472990  6A 02                     PUSH 0x2
00472992  8B CE                     MOV ECX,ESI
00472994  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
0047299A  E8 95 11 F9 FF            CALL 0x00403b34
0047299F  83 F8 FF                  CMP EAX,-0x1
004729A2  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
004729A8  0F 84 86 03 00 00         JZ 0x00472d34
004729AE  3B C3                     CMP EAX,EBX
004729B0  74 05                     JZ 0x004729b7
004729B2  83 F8 03                  CMP EAX,0x3
004729B5  75 06                     JNZ 0x004729bd
LAB_004729b7:
004729B7  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
LAB_004729bd:
004729BD  83 BE 2E 08 00 00 01      CMP dword ptr [ESI + 0x82e],0x1
004729C4  0F 85 E6 02 00 00         JNZ 0x00472cb0
004729CA  6A 01                     PUSH 0x1
004729CC  8B CE                     MOV ECX,ESI
004729CE  E8 32 31 F9 FF            CALL 0x00405b05
004729D3  85 C0                     TEST EAX,EAX
004729D5  0F 85 D5 02 00 00         JNZ 0x00472cb0
004729DB  8B 8E 83 04 00 00         MOV ECX,dword ptr [ESI + 0x483]
004729E1  66 8B 96 8B 04 00 00      MOV DX,word ptr [ESI + 0x48b]
004729E8  8A 86 87 04 00 00         MOV AL,byte ptr [ESI + 0x487]
004729EE  51                        PUSH ECX
004729EF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004729F5  52                        PUSH EDX
004729F6  50                        PUSH EAX
004729F7  E8 BE FE F8 FF            CALL 0x004028ba
004729FC  8B CE                     MOV ECX,ESI
004729FE  8B F8                     MOV EDI,EAX
00472A00  E8 E3 F3 F8 FF            CALL 0x00401de8
00472A05  8B D8                     MOV EBX,EAX
00472A07  83 FB 0A                  CMP EBX,0xa
00472A0A  0F 87 A0 02 00 00         JA 0x00472cb0
00472A10  33 C9                     XOR ECX,ECX
00472A12  8A 8B F0 2D 47 00         MOV CL,byte ptr [EBX + 0x472df0]
switchD_00472a18::switchD:
00472A18  FF 24 8D E0 2D 47 00      JMP dword ptr [ECX*0x4 + 0x472de0]
switchD_0047251b::caseD_1:
00472A1F  C7 86 7F 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x47f],0xffffffff
00472A29  E9 82 02 00 00            JMP 0x00472cb0
switchD_004727e9::caseD_9:
00472A2E  8D 55 E8                  LEA EDX,[EBP + -0x18]
00472A31  8D 45 EC                  LEA EAX,[EBP + -0x14]
00472A34  52                        PUSH EDX
00472A35  8D 4D F0                  LEA ECX,[EBP + -0x10]
00472A38  50                        PUSH EAX
00472A39  51                        PUSH ECX
LAB_00472a3a:
00472A3A  8B CF                     MOV ECX,EDI
00472A3C  E8 A2 07 F9 FF            CALL 0x004031e3
00472A41  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00472A44  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00472A47  8B 16                     MOV EDX,dword ptr [ESI]
00472A49  50                        PUSH EAX
00472A4A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00472A4D  51                        PUSH ECX
00472A4E  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00472A52  50                        PUSH EAX
00472A53  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00472A57  51                        PUSH ECX
00472A58  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00472A5C  50                        PUSH EAX
00472A5D  51                        PUSH ECX
00472A5E  8B CE                     MOV ECX,ESI
00472A60  FF 52 10                  CALL dword ptr [EDX + 0x10]
00472A63  0F BF C0                  MOVSX EAX,AX
00472A66  50                        PUSH EAX
00472A67  8B CE                     MOV ECX,ESI
00472A69  E8 44 06 F9 FF            CALL 0x004030b2
00472A6E  50                        PUSH EAX
00472A6F  8B CE                     MOV ECX,ESI
00472A71  E8 86 F8 F8 FF            CALL 0x004022fc
00472A76  E9 35 02 00 00            JMP 0x00472cb0
switchD_00472a18::caseD_0:
00472A7B  8D 55 E8                  LEA EDX,[EBP + -0x18]
00472A7E  8D 45 EC                  LEA EAX,[EBP + -0x14]
00472A81  52                        PUSH EDX
00472A82  8D 4D F0                  LEA ECX,[EBP + -0x10]
00472A85  50                        PUSH EAX
00472A86  51                        PUSH ECX
00472A87  8B CF                     MOV ECX,EDI
00472A89  E8 55 07 F9 FF            CALL 0x004031e3
00472A8E  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00472A92  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00472A96  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00472A9A  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00472A9E  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
00472AA4  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
00472AA8  84 C0                     TEST AL,AL
00472AAA  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00472AAE  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00472AB5  0F 86 F5 01 00 00         JBE 0x00472cb0
00472ABB  8D BE A8 02 00 00         LEA EDI,[ESI + 0x2a8]
LAB_00472ac1:
00472AC1  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00472AC7  85 C0                     TEST EAX,EAX
00472AC9  0F 8E E1 01 00 00         JLE 0x00472cb0
00472ACF  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00472AD3  8D 47 FE                  LEA EAX,[EDI + -0x2]
00472AD6  52                        PUSH EDX
00472AD7  8B 10                     MOV EDX,dword ptr [EAX]
00472AD9  83 EC 08                  SUB ESP,0x8
00472ADC  8B CC                     MOV ECX,ESP
00472ADE  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00472AE2  89 11                     MOV dword ptr [ECX],EDX
00472AE4  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00472AE8  8D 4D C8                  LEA ECX,[EBP + -0x38]
00472AEB  51                        PUSH ECX
00472AEC  8B CE                     MOV ECX,ESI
00472AEE  E8 39 09 F9 FF            CALL 0x0040342c
00472AF3  8B 10                     MOV EDX,dword ptr [EAX]
00472AF5  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00472AF9  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00472AFC  66 03 CA                  ADD CX,DX
00472AFF  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
00472B03  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00472B07  66 2B 55 D2               SUB DX,word ptr [EBP + -0x2e]
00472B0B  66 03 46 45               ADD AX,word ptr [ESI + 0x45]
00472B0F  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
00472B13  66 8B 0F                  MOV CX,word ptr [EDI]
00472B16  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
00472B1A  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00472B1E  52                        PUSH EDX
00472B1F  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
00472B23  33 C0                     XOR EAX,EAX
00472B25  83 EC 08                  SUB ESP,0x8
00472B28  66 89 4D D2               MOV word ptr [EBP + -0x2e],CX
00472B2C  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
00472B30  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00472B33  8B CC                     MOV ECX,ESP
00472B35  89 11                     MOV dword ptr [ECX],EDX
00472B37  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00472B3B  8D 45 D8                  LEA EAX,[EBP + -0x28]
00472B3E  50                        PUSH EAX
00472B3F  8B CE                     MOV ECX,ESI
00472B41  E8 E6 08 F9 FF            CALL 0x0040342c
00472B46  8B C8                     MOV ECX,EAX
00472B48  8B 01                     MOV EAX,dword ptr [ECX]
00472B4A  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00472B4D  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
00472B51  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00472B54  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
00472B58  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00472B5B  03 C1                     ADD EAX,ECX
00472B5D  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
00472B60  2B D1                     SUB EDX,ECX
00472B62  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
00472B68  83 E9 0A                  SUB ECX,0xa
00472B6B  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
00472B6F  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
00472B73  66 89 55 B6               MOV word ptr [EBP + -0x4a],DX
00472B77  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00472B7A  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
00472B7E  F7 D9                     NEG ECX
00472B80  1B C9                     SBB ECX,ECX
00472B82  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00472B85  83 E1 FE                  AND ECX,0xfffffffe
00472B88  41                        INC ECX
00472B89  83 FB 0A                  CMP EBX,0xa
00472B8C  89 4D C2                  MOV dword ptr [EBP + -0x3e],ECX
00472B8F  75 09                     JNZ 0x00472b9a
00472B91  C7 45 A4 A1 00 00 00      MOV dword ptr [EBP + -0x5c],0xa1
00472B98  EB 09                     JMP 0x00472ba3
LAB_00472b9a:
00472B9A  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
00472BA0  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_00472ba3:
00472BA3  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00472BA7  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00472BAA  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00472BAE  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
00472BB2  8D 4D A0                  LEA ECX,[EBP + -0x60]
00472BB5  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00472BB8  51                        PUSH ECX
00472BB9  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
00472BBD  E8 58 01 F9 FF            CALL 0x00402d1a
00472BC2  83 C4 04                  ADD ESP,0x4
00472BC5  83 FB 0A                  CMP EBX,0xa
00472BC8  75 0C                     JNZ 0x00472bd6
00472BCA  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
00472BD4  EB 17                     JMP 0x00472bed
LAB_00472bd6:
00472BD6  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00472BDC  C7 86 AA 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7aa],0x0
00472BE6  48                        DEC EAX
00472BE7  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
LAB_00472bed:
00472BED  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00472BF0  33 D2                     XOR EDX,EDX
00472BF2  8A 96 B2 02 00 00         MOV DL,byte ptr [ESI + 0x2b2]
00472BF8  40                        INC EAX
00472BF9  83 C7 06                  ADD EDI,0x6
00472BFC  3B C2                     CMP EAX,EDX
00472BFE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00472C01  0F 82 BA FE FF FF         JC 0x00472ac1
00472C07  E9 A4 00 00 00            JMP 0x00472cb0
LAB_00472c0c:
00472C0C  83 F8 04                  CMP EAX,0x4
00472C0F  75 59                     JNZ 0x00472c6a
00472C11  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00472C17  6A 02                     PUSH 0x2
00472C19  8B CE                     MOV ECX,ESI
00472C1B  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00472C21  E8 40 F6 F8 FF            CALL 0x00402266
00472C26  83 F8 FF                  CMP EAX,-0x1
00472C29  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00472C2F  0F 84 FF 00 00 00         JZ 0x00472d34
00472C35  3B C3                     CMP EAX,EBX
00472C37  74 05                     JZ 0x00472c3e
00472C39  83 F8 03                  CMP EAX,0x3
00472C3C  75 10                     JNZ 0x00472c4e
LAB_00472c3e:
00472C3E  C7 86 36 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x836],0x1
00472C48  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
LAB_00472c4e:
00472C4E  8B 16                     MOV EDX,dword ptr [ESI]
00472C50  8B CE                     MOV ECX,ESI
00472C52  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00472C58  F7 D8                     NEG EAX
00472C5A  1B C0                     SBB EAX,EAX
00472C5C  24 FD                     AND AL,0xfd
00472C5E  83 C0 02                  ADD EAX,0x2
00472C61  5F                        POP EDI
00472C62  5E                        POP ESI
00472C63  5B                        POP EBX
00472C64  8B E5                     MOV ESP,EBP
00472C66  5D                        POP EBP
00472C67  C2 04 00                  RET 0x4
LAB_00472c6a:
00472C6A  83 F8 05                  CMP EAX,0x5
00472C6D  0F 85 D8 00 00 00         JNZ 0x00472d4b
00472C73  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00472C79  6A 02                     PUSH 0x2
00472C7B  8B CE                     MOV ECX,ESI
00472C7D  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00472C83  E8 DE F5 F8 FF            CALL 0x00402266
00472C88  83 F8 FF                  CMP EAX,-0x1
00472C8B  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00472C91  0F 84 9D 00 00 00         JZ 0x00472d34
00472C97  3B C3                     CMP EAX,EBX
00472C99  74 31                     JZ 0x00472ccc
00472C9B  83 F8 03                  CMP EAX,0x3
00472C9E  75 10                     JNZ 0x00472cb0
LAB_00472ca0:
00472CA0  C7 86 36 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x836],0x1
00472CAA  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
switchD_0047251b::caseD_2:
00472CB0  8B 06                     MOV EAX,dword ptr [ESI]
00472CB2  8B CE                     MOV ECX,ESI
00472CB4  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00472CBA  F7 D8                     NEG EAX
00472CBC  1B C0                     SBB EAX,EAX
00472CBE  24 FD                     AND AL,0xfd
00472CC0  83 C0 02                  ADD EAX,0x2
00472CC3  5F                        POP EDI
00472CC4  5E                        POP ESI
00472CC5  5B                        POP EBX
00472CC6  8B E5                     MOV ESP,EBP
00472CC8  5D                        POP EBP
00472CC9  C2 04 00                  RET 0x4
LAB_00472ccc:
00472CCC  0F BF 86 79 04 00 00      MOVSX EAX,word ptr [ESI + 0x479]
00472CD3  0F BF 8E 77 04 00 00      MOVSX ECX,word ptr [ESI + 0x477]
00472CDA  0F BF 96 75 04 00 00      MOVSX EDX,word ptr [ESI + 0x475]
00472CE1  50                        PUSH EAX
00472CE2  51                        PUSH ECX
00472CE3  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00472CE7  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00472CEB  52                        PUSH EDX
00472CEC  50                        PUSH EAX
00472CED  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00472CF1  51                        PUSH ECX
00472CF2  52                        PUSH EDX
00472CF3  E8 D8 80 23 00            CALL 0x006aadd0
00472CF8  85 C0                     TEST EAX,EAX
00472CFA  7E A4                     JLE 0x00472ca0
00472CFC  0F BF 86 79 04 00 00      MOVSX EAX,word ptr [ESI + 0x479]
00472D03  0F BF 8E 77 04 00 00      MOVSX ECX,word ptr [ESI + 0x477]
00472D0A  0F BF 96 75 04 00 00      MOVSX EDX,word ptr [ESI + 0x475]
00472D11  50                        PUSH EAX
00472D12  51                        PUSH ECX
00472D13  52                        PUSH EDX
00472D14  8B CE                     MOV ECX,ESI
00472D16  E8 50 22 F9 FF            CALL 0x00404f6b
00472D1B  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00472D21  53                        PUSH EBX
00472D22  8B CE                     MOV ECX,ESI
00472D24  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00472D2A  E8 37 F5 F8 FF            CALL 0x00402266
00472D2F  83 F8 FF                  CMP EAX,-0x1
00472D32  75 0C                     JNZ 0x00472d40
LAB_00472d34:
00472D34  83 C8 FF                  OR EAX,0xffffffff
00472D37  5F                        POP EDI
00472D38  5E                        POP ESI
00472D39  5B                        POP EBX
00472D3A  8B E5                     MOV ESP,EBP
00472D3C  5D                        POP EBP
00472D3D  C2 04 00                  RET 0x4
LAB_00472d40:
00472D40  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00472D46  E9 65 FF FF FF            JMP 0x00472cb0
LAB_00472d4b:
00472D4B  68 20 AD 7A 00            PUSH 0x7aad20
00472D50  68 CC 4C 7A 00            PUSH 0x7a4ccc
00472D55  53                        PUSH EBX
00472D56  53                        PUSH EBX
00472D57  68 BF 2D 00 00            PUSH 0x2dbf
00472D5C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00472D61  E8 6A A7 23 00            CALL 0x006ad4d0
00472D66  83 C4 18                  ADD ESP,0x18
00472D69  85 C0                     TEST EAX,EAX
00472D6B  74 01                     JZ 0x00472d6e
00472D6D  CC                        INT3
LAB_00472d6e:
00472D6E  5F                        POP EDI
00472D6F  5E                        POP ESI
00472D70  B8 02 00 00 00            MOV EAX,0x2
00472D75  5B                        POP EBX
00472D76  8B E5                     MOV ESP,EBP
00472D78  5D                        POP EBP
00472D79  C2 04 00                  RET 0x4
