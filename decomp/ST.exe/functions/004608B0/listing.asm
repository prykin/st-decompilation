FUN_004608b0:
004608B0  55                        PUSH EBP
004608B1  8B EC                     MOV EBP,ESP
004608B3  83 EC 60                  SUB ESP,0x60
004608B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004608B9  53                        PUSH EBX
004608BA  33 DB                     XOR EBX,EBX
004608BC  83 CA FF                  OR EDX,0xffffffff
004608BF  56                        PUSH ESI
004608C0  3B C3                     CMP EAX,EBX
004608C2  57                        PUSH EDI
004608C3  8B F1                     MOV ESI,ECX
004608C5  74 09                     JZ 0x004608d0
004608C7  83 F8 01                  CMP EAX,0x1
004608CA  0F 85 95 00 00 00         JNZ 0x00460965
LAB_004608d0:
004608D0  B9 17 00 00 00            MOV ECX,0x17
004608D5  33 C0                     XOR EAX,EAX
004608D7  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
004608DD  F3 AB                     STOSD.REP ES:EDI
004608DF  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
004608E5  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
004608E9  66 89 86 75 04 00 00      MOV word ptr [ESI + 0x475],AX
004608F0  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
004608F4  66 89 8E 77 04 00 00      MOV word ptr [ESI + 0x477],CX
004608FB  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
004608FF  66 89 86 79 04 00 00      MOV word ptr [ESI + 0x479],AX
00460906  89 9E 7B 04 00 00         MOV dword ptr [ESI + 0x47b],EBX
0046090C  89 96 87 04 00 00         MOV dword ptr [ESI + 0x487],EDX
00460912  C7 86 8B 04 00 00 FF FF 00 00  MOV dword ptr [ESI + 0x48b],0xffff
0046091C  89 96 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDX
00460922  8B 86 5D 04 00 00         MOV EAX,dword ptr [ESI + 0x45d]
00460928  83 F8 06                  CMP EAX,0x6
0046092B  74 1B                     JZ 0x00460948
0046092D  83 F8 0C                  CMP EAX,0xc
00460930  74 16                     JZ 0x00460948
00460932  83 F8 0D                  CMP EAX,0xd
00460935  74 11                     JZ 0x00460948
00460937  83 F8 04                  CMP EAX,0x4
0046093A  74 0C                     JZ 0x00460948
0046093C  C7 86 36 08 00 00 04 00 00 00  MOV dword ptr [ESI + 0x836],0x4
00460946  EB 0A                     JMP 0x00460952
LAB_00460948:
00460948  C7 86 36 08 00 00 02 00 00 00  MOV dword ptr [ESI + 0x836],0x2
LAB_00460952:
00460952  66 8B 8E 16 08 00 00      MOV CX,word ptr [ESI + 0x816]
00460959  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046095E  66 89 8E 14 08 00 00      MOV word ptr [ESI + 0x814],CX
LAB_00460965:
00460965  39 96 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EDX
0046096B  75 36                     JNZ 0x004609a3
0046096D  8B 8E 36 08 00 00         MOV ECX,dword ptr [ESI + 0x836]
00460973  49                        DEC ECX
00460974  8B C1                     MOV EAX,ECX
00460976  89 8E 36 08 00 00         MOV dword ptr [ESI + 0x836],ECX
0046097C  83 F8 01                  CMP EAX,0x1
0046097F  7E 1C                     JLE 0x0046099d
00460981  8B 16                     MOV EDX,dword ptr [ESI]
00460983  8B CE                     MOV ECX,ESI
00460985  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046098B  F7 D8                     NEG EAX
0046098D  1B C0                     SBB EAX,EAX
0046098F  24 FD                     AND AL,0xfd
00460991  83 C0 02                  ADD EAX,0x2
00460994  5F                        POP EDI
00460995  5E                        POP ESI
00460996  5B                        POP EBX
00460997  8B E5                     MOV ESP,EBP
00460999  5D                        POP EBP
0046099A  C2 04 00                  RET 0x4
LAB_0046099d:
0046099D  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
LAB_004609a3:
004609A3  8B BE 36 08 00 00         MOV EDI,dword ptr [ESI + 0x836]
004609A9  47                        INC EDI
004609AA  89 BE 36 08 00 00         MOV dword ptr [ESI + 0x836],EDI
004609B0  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
004609B6  3B C3                     CMP EAX,EBX
004609B8  8B CF                     MOV ECX,EDI
004609BA  0F 85 C0 08 00 00         JNZ 0x00461280
004609C0  39 9E 3A 07 00 00         CMP dword ptr [ESI + 0x73a],EBX
004609C6  0F 8F 70 11 00 00         JG 0x00461b3c
004609CC  81 E1 01 00 00 80         AND ECX,0x80000001
004609D2  79 05                     JNS 0x004609d9
004609D4  49                        DEC ECX
004609D5  83 C9 FE                  OR ECX,0xfffffffe
004609D8  41                        INC ECX
LAB_004609d9:
004609D9  0F 85 BC 03 00 00         JNZ 0x00460d9b
004609DF  A1 34 A1 7F 00            MOV EAX,[0x007fa134]
004609E4  85 C0                     TEST EAX,EAX
004609E6  0F 84 AF 03 00 00         JZ 0x00460d9b
004609EC  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
004609F2  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
004609F5  85 C9                     TEST ECX,ECX
004609F7  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
004609FA  0F 84 9B 03 00 00         JZ 0x00460d9b
00460A00  33 DB                     XOR EBX,EBX
00460A02  8B F8                     MOV EDI,EAX
00460A04  85 C9                     TEST ECX,ECX
00460A06  0F 86 8F 03 00 00         JBE 0x00460d9b
LAB_00460a0c:
00460A0C  85 FF                     TEST EDI,EDI
00460A0E  0F 8E 87 03 00 00         JLE 0x00460d9b
00460A14  8B 0D 30 A1 7F 00         MOV ECX,dword ptr [0x007fa130]
00460A1A  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00460A1D  52                        PUSH EDX
00460A1E  8B D3                     MOV EDX,EBX
00460A20  E8 4B C2 24 00            CALL 0x006acc70
00460A25  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00460A28  85 C9                     TEST ECX,ECX
00460A2A  0F 84 BB 00 00 00         JZ 0x00460aeb
00460A30  8D 45 FA                  LEA EAX,[EBP + -0x6]
00460A33  8D 55 F8                  LEA EDX,[EBP + -0x8]
00460A36  50                        PUSH EAX
00460A37  8D 45 F6                  LEA EAX,[EBP + -0xa]
00460A3A  52                        PUSH EDX
00460A3B  50                        PUSH EAX
00460A3C  4F                        DEC EDI
00460A3D  E8 83 0E FA FF            CALL 0x004018c5
00460A42  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
00460A46  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
00460A4A  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
00460A4E  51                        PUSH ECX
00460A4F  52                        PUSH EDX
00460A50  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00460A54  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00460A58  50                        PUSH EAX
00460A59  51                        PUSH ECX
00460A5A  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00460A5E  52                        PUSH EDX
00460A5F  50                        PUSH EAX
00460A60  E8 6B A3 24 00            CALL 0x006aadd0
00460A65  8B 8E 0C 08 00 00         MOV ECX,dword ptr [ESI + 0x80c]
00460A6B  8B D0                     MOV EDX,EAX
00460A6D  B8 79 19 8C 02            MOV EAX,0x28c1979
00460A72  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00460A75  F7 E9                     IMUL ECX
00460A77  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00460A7A  D1 FA                     SAR EDX,0x1
00460A7C  8B CA                     MOV ECX,EDX
00460A7E  C1 E9 1F                  SHR ECX,0x1f
00460A81  8D 54 0A 01               LEA EDX,[EDX + ECX*0x1 + 0x1]
00460A85  3B C2                     CMP EAX,EDX
00460A87  7F 62                     JG 0x00460aeb
00460A89  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00460A8C  8D 4D E0                  LEA ECX,[EBP + -0x20]
00460A8F  51                        PUSH ECX
00460A90  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00460A93  52                        PUSH EDX
00460A94  E8 F3 3C FA FF            CALL 0x0040478c
00460A99  83 F8 02                  CMP EAX,0x2
00460A9C  74 4D                     JZ 0x00460aeb
00460A9E  85 C0                     TEST EAX,EAX
00460AA0  75 34                     JNZ 0x00460ad6
00460AA2  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00460AA5  8B CE                     MOV ECX,ESI
00460AA7  50                        PUSH EAX
00460AA8  E8 EC 2F FA FF            CALL 0x00403a99
00460AAD  83 F8 01                  CMP EAX,0x1
00460AB0  75 12                     JNZ 0x00460ac4
00460AB2  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00460AB5  8D 4D E0                  LEA ECX,[EBP + -0x20]
00460AB8  51                        PUSH ECX
00460AB9  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00460ABC  52                        PUSH EDX
00460ABD  E8 CC 2B FA FF            CALL 0x0040368e
00460AC2  EB 17                     JMP 0x00460adb
LAB_00460ac4:
00460AC4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00460AC7  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00460ACA  50                        PUSH EAX
00460ACB  51                        PUSH ECX
00460ACC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00460ACF  E8 5A 1D FA FF            CALL 0x0040282e
00460AD4  EB 15                     JMP 0x00460aeb
LAB_00460ad6:
00460AD6  83 F8 01                  CMP EAX,0x1
00460AD9  75 10                     JNZ 0x00460aeb
LAB_00460adb:
00460ADB  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00460ADE  8B CE                     MOV ECX,ESI
00460AE0  52                        PUSH EDX
00460AE1  E8 6B 09 FA FF            CALL 0x00401451
00460AE6  83 F8 01                  CMP EAX,0x1
00460AE9  74 11                     JZ 0x00460afc
LAB_00460aeb:
00460AEB  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00460AEE  43                        INC EBX
00460AEF  3B D8                     CMP EBX,EAX
00460AF1  0F 82 15 FF FF FF         JC 0x00460a0c
00460AF7  E9 9F 02 00 00            JMP 0x00460d9b
LAB_00460afc:
00460AFC  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00460AFF  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00460B02  50                        PUSH EAX
00460B03  51                        PUSH ECX
00460B04  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00460B07  E8 22 1D FA FF            CALL 0x0040282e
00460B0C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00460B0F  33 DB                     XOR EBX,EBX
00460B11  89 86 6B 04 00 00         MOV dword ptr [ESI + 0x46b],EAX
00460B17  66 8B 90 6E 02 00 00      MOV DX,word ptr [EAX + 0x26e]
00460B1E  66 89 96 6F 04 00 00      MOV word ptr [ESI + 0x46f],DX
00460B25  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00460B28  89 86 71 04 00 00         MOV dword ptr [ESI + 0x471],EAX
00460B2E  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00460B32  66 3B C3                  CMP AX,BX
00460B35  0F 85 91 00 00 00         JNZ 0x00460bcc
00460B3B  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00460B3F  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00460B43  8B 16                     MOV EDX,dword ptr [ESI]
00460B45  BF 01 00 00 00            MOV EDI,0x1
00460B4A  57                        PUSH EDI
00460B4B  50                        PUSH EAX
00460B4C  51                        PUSH ECX
00460B4D  8B CE                     MOV ECX,ESI
00460B4F  66 89 BE 69 04 00 00      MOV word ptr [ESI + 0x469],DI
00460B56  FF 52 18                  CALL dword ptr [EDX + 0x18]
00460B59  3B C7                     CMP EAX,EDI
00460B5B  0F 85 33 02 00 00         JNZ 0x00460d94
00460B61  0F BF 96 69 04 00 00      MOVSX EDX,word ptr [ESI + 0x469]
00460B68  89 BE 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDI
00460B6E  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00460B72  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00460B76  03 D0                     ADD EDX,EAX
00460B78  52                        PUSH EDX
00460B79  51                        PUSH ECX
00460B7A  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00460B7E  52                        PUSH EDX
00460B7F  8B CE                     MOV ECX,ESI
00460B81  E8 E5 43 FA FF            CALL 0x00404f6b
00460B86  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00460B8C  53                        PUSH EBX
00460B8D  8B CE                     MOV ECX,ESI
00460B8F  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00460B95  E8 9A 2F FA FF            CALL 0x00403b34
00460B9A  83 F8 FF                  CMP EAX,-0x1
00460B9D  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00460BA3  0F 84 ED 03 00 00         JZ 0x00460f96
00460BA9  3B C3                     CMP EAX,EBX
00460BAB  0F 84 5C 01 00 00         JZ 0x00460d0d
00460BB1  83 F8 03                  CMP EAX,0x3
00460BB4  0F 85 E1 01 00 00         JNZ 0x00460d9b
00460BBA  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
00460BC1  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
00460BC7  E9 CF 01 00 00            JMP 0x00460d9b
LAB_00460bcc:
00460BCC  66 3D 04 00               CMP AX,0x4
00460BD0  0F 85 90 00 00 00         JNZ 0x00460c66
00460BD6  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00460BDA  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
00460BDE  8B 06                     MOV EAX,dword ptr [ESI]
00460BE0  6A 03                     PUSH 0x3
00460BE2  51                        PUSH ECX
00460BE3  52                        PUSH EDX
00460BE4  8B CE                     MOV ECX,ESI
00460BE6  66 C7 86 69 04 00 00 FF FF  MOV word ptr [ESI + 0x469],0xffff
00460BEF  FF 50 18                  CALL dword ptr [EAX + 0x18]
00460BF2  83 F8 01                  CMP EAX,0x1
00460BF5  0F 85 99 01 00 00         JNZ 0x00460d94
00460BFB  89 86 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EAX
00460C01  0F BF 86 69 04 00 00      MOVSX EAX,word ptr [ESI + 0x469]
00460C08  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00460C0C  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00460C10  03 C1                     ADD EAX,ECX
00460C12  8B CE                     MOV ECX,ESI
00460C14  50                        PUSH EAX
00460C15  52                        PUSH EDX
00460C16  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00460C1A  50                        PUSH EAX
00460C1B  E8 4B 43 FA FF            CALL 0x00404f6b
00460C20  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00460C26  53                        PUSH EBX
00460C27  8B CE                     MOV ECX,ESI
00460C29  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00460C2F  E8 00 2F FA FF            CALL 0x00403b34
00460C34  83 F8 FF                  CMP EAX,-0x1
00460C37  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00460C3D  0F 84 53 03 00 00         JZ 0x00460f96
00460C43  3B C3                     CMP EAX,EBX
00460C45  0F 84 C2 00 00 00         JZ 0x00460d0d
00460C4B  83 F8 03                  CMP EAX,0x3
00460C4E  0F 85 47 01 00 00         JNZ 0x00460d9b
00460C54  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
00460C5B  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
00460C61  E9 35 01 00 00            JMP 0x00460d9b
LAB_00460c66:
00460C66  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00460C69  BF 01 00 00 00            MOV EDI,0x1
00460C6E  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00460C74  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00460C7A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00460C7D  C1 E8 10                  SHR EAX,0x10
00460C80  23 C7                     AND EAX,EDI
00460C82  66 3B C3                  CMP AX,BX
00460C85  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
00460C8C  75 09                     JNZ 0x00460c97
00460C8E  66 C7 86 69 04 00 00 FF FF  MOV word ptr [ESI + 0x469],0xffff
LAB_00460c97:
00460C97  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
00460C9E  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00460CA2  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
00460CA6  8B 16                     MOV EDX,dword ptr [ESI]
00460CA8  50                        PUSH EAX
00460CA9  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00460CAD  51                        PUSH ECX
00460CAE  50                        PUSH EAX
00460CAF  8B CE                     MOV ECX,ESI
00460CB1  FF 52 18                  CALL dword ptr [EDX + 0x18]
00460CB4  3B C7                     CMP EAX,EDI
00460CB6  75 64                     JNZ 0x00460d1c
00460CB8  0F BF 8E 69 04 00 00      MOVSX ECX,word ptr [ESI + 0x469]
00460CBF  89 BE 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDI
00460CC5  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00460CC9  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00460CCD  03 CA                     ADD ECX,EDX
00460CCF  51                        PUSH ECX
00460CD0  50                        PUSH EAX
00460CD1  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
00460CD5  51                        PUSH ECX
00460CD6  8B CE                     MOV ECX,ESI
00460CD8  E8 8E 42 FA FF            CALL 0x00404f6b
00460CDD  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00460CE3  53                        PUSH EBX
00460CE4  8B CE                     MOV ECX,ESI
00460CE6  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00460CEC  E8 43 2E FA FF            CALL 0x00403b34
00460CF1  83 F8 FF                  CMP EAX,-0x1
00460CF4  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00460CFA  0F 84 96 02 00 00         JZ 0x00460f96
LAB_00460d00:
00460D00  3B C3                     CMP EAX,EBX
00460D02  74 09                     JZ 0x00460d0d
00460D04  83 F8 03                  CMP EAX,0x3
00460D07  0F 85 8E 00 00 00         JNZ 0x00460d9b
LAB_00460d0d:
00460D0D  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
00460D14  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
00460D1A  EB 7F                     JMP 0x00460d9b
LAB_00460d1c:
00460D1C  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
00460D23  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00460D27  66 F7 D8                  NEG AX
00460D2A  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
00460D31  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
00460D35  8B 16                     MOV EDX,dword ptr [ESI]
00460D37  50                        PUSH EAX
00460D38  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00460D3C  50                        PUSH EAX
00460D3D  51                        PUSH ECX
00460D3E  8B CE                     MOV ECX,ESI
00460D40  FF 52 18                  CALL dword ptr [EDX + 0x18]
00460D43  3B C7                     CMP EAX,EDI
00460D45  75 4D                     JNZ 0x00460d94
00460D47  0F BF 96 69 04 00 00      MOVSX EDX,word ptr [ESI + 0x469]
00460D4E  89 BE 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EDI
00460D54  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00460D58  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00460D5C  03 D0                     ADD EDX,EAX
00460D5E  52                        PUSH EDX
00460D5F  51                        PUSH ECX
00460D60  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00460D64  52                        PUSH EDX
00460D65  8B CE                     MOV ECX,ESI
00460D67  E8 FF 41 FA FF            CALL 0x00404f6b
00460D6C  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00460D72  53                        PUSH EBX
00460D73  8B CE                     MOV ECX,ESI
00460D75  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00460D7B  E8 B4 2D FA FF            CALL 0x00403b34
00460D80  83 F8 FF                  CMP EAX,-0x1
00460D83  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00460D89  0F 84 07 02 00 00         JZ 0x00460f96
00460D8F  E9 6C FF FF FF            JMP 0x00460d00
LAB_00460d94:
00460D94  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
LAB_00460d9b:
00460D9B  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
00460DA1  85 C0                     TEST EAX,EAX
00460DA3  0F 85 BB 04 00 00         JNZ 0x00461264
00460DA9  83 BE 36 08 00 00 02      CMP dword ptr [ESI + 0x836],0x2
00460DB0  75 3A                     JNZ 0x00460dec
00460DB2  6A 00                     PUSH 0x0
00460DB4  8B CE                     MOV ECX,ESI
00460DB6  C7 86 7F 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x47f],0xffffffff
00460DC0  E8 40 4D FA FF            CALL 0x00405b05
00460DC5  8B C8                     MOV ECX,EAX
00460DC7  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00460DCA  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00460DD0  05 39 30 00 00            ADD EAX,0x3039
00460DD5  33 D2                     XOR EDX,EDX
00460DD7  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00460DDA  BF 15 00 00 00            MOV EDI,0x15
00460DDF  C1 E8 10                  SHR EAX,0x10
00460DE2  F7 F7                     DIV EDI
00460DE4  89 96 7F 04 00 00         MOV dword ptr [ESI + 0x47f],EDX
00460DEA  EB 0B                     JMP 0x00460df7
LAB_00460dec:
00460DEC  6A 00                     PUSH 0x0
00460DEE  8B CE                     MOV ECX,ESI
00460DF0  E8 10 4D FA FF            CALL 0x00405b05
00460DF5  8B C8                     MOV ECX,EAX
LAB_00460df7:
00460DF7  85 C9                     TEST ECX,ECX
00460DF9  0F 85 C7 00 00 00         JNZ 0x00460ec6
00460DFF  8B 8E 83 04 00 00         MOV ECX,dword ptr [ESI + 0x483]
00460E05  66 8B 96 8B 04 00 00      MOV DX,word ptr [ESI + 0x48b]
00460E0C  8A 86 87 04 00 00         MOV AL,byte ptr [ESI + 0x487]
00460E12  51                        PUSH ECX
00460E13  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00460E19  52                        PUSH EDX
00460E1A  50                        PUSH EAX
00460E1B  E8 9A 1A FA FF            CALL 0x004028ba
00460E20  8B CE                     MOV ECX,ESI
00460E22  8B F8                     MOV EDI,EAX
00460E24  E8 BF 0F FA FF            CALL 0x00401de8
00460E29  8B D8                     MOV EBX,EAX
00460E2B  83 FB 0A                  CMP EBX,0xa
00460E2E  0F 87 92 00 00 00         JA 0x00460ec6
switchD_00460e34::switchD:
00460E34  FF 24 9D 8C 1B 46 00      JMP dword ptr [EBX*0x4 + 0x461b8c]
switchD_00460e34::caseD_5:
00460E3B  8D 4D E8                  LEA ECX,[EBP + -0x18]
00460E3E  8D 55 EC                  LEA EDX,[EBP + -0x14]
00460E41  51                        PUSH ECX
00460E42  8D 45 F0                  LEA EAX,[EBP + -0x10]
00460E45  52                        PUSH EDX
00460E46  50                        PUSH EAX
00460E47  8B CF                     MOV ECX,EDI
00460E49  C7 86 2E 08 00 00 04 00 00 00  MOV dword ptr [ESI + 0x82e],0x4
00460E53  E8 B3 50 FA FF            CALL 0x00405f0b
00460E58  E9 4F 01 00 00            JMP 0x00460fac
switchD_00460e34::caseD_6:
00460E5D  8D 4D 0A                  LEA ECX,[EBP + 0xa]
00460E60  8D 55 FC                  LEA EDX,[EBP + -0x4]
00460E63  51                        PUSH ECX
00460E64  8D 45 FE                  LEA EAX,[EBP + -0x2]
00460E67  52                        PUSH EDX
00460E68  50                        PUSH EAX
00460E69  8B CF                     MOV ECX,EDI
00460E6B  E8 9B 50 FA FF            CALL 0x00405f0b
00460E70  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
00460E74  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
00460E78  66 8B 45 0A               MOV AX,word ptr [EBP + 0xa]
00460E7C  66 89 8E 00 08 00 00      MOV word ptr [ESI + 0x800],CX
00460E83  66 89 96 02 08 00 00      MOV word ptr [ESI + 0x802],DX
00460E8A  8D 4D E8                  LEA ECX,[EBP + -0x18]
00460E8D  66 89 86 04 08 00 00      MOV word ptr [ESI + 0x804],AX
00460E94  8D 55 EC                  LEA EDX,[EBP + -0x14]
00460E97  51                        PUSH ECX
00460E98  8D 45 F0                  LEA EAX,[EBP + -0x10]
00460E9B  52                        PUSH EDX
00460E9C  50                        PUSH EAX
00460E9D  53                        PUSH EBX
00460E9E  8B CE                     MOV ECX,ESI
00460EA0  E8 C1 4F FA FF            CALL 0x00405e66
00460EA5  85 C0                     TEST EAX,EAX
00460EA7  0F 85 F5 00 00 00         JNZ 0x00460fa2
00460EAD  66 8B 86 14 08 00 00      MOV AX,word ptr [ESI + 0x814]
00460EB4  66 3D 2D 01               CMP AX,0x12d
00460EB8  7C 0C                     JL 0x00460ec6
00460EBA  05 37 FF FF FF            ADD EAX,0xffffff37
00460EBF  66 89 86 14 08 00 00      MOV word ptr [ESI + 0x814],AX
switchD_00460e34::caseD_2:
00460EC6  8B 86 2E 08 00 00         MOV EAX,dword ptr [ESI + 0x82e]
00460ECC  85 C0                     TEST EAX,EAX
00460ECE  0F 85 90 03 00 00         JNZ 0x00461264
00460ED4  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
00460EDE  0F 85 80 03 00 00         JNZ 0x00461264
00460EE4  66 8B 86 75 04 00 00      MOV AX,word ptr [ESI + 0x475]
00460EEB  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00460EEF  66 3B C1                  CMP AX,CX
00460EF2  75 1E                     JNZ 0x00460f12
00460EF4  66 8B 96 77 04 00 00      MOV DX,word ptr [ESI + 0x477]
00460EFB  66 3B 56 49               CMP DX,word ptr [ESI + 0x49]
00460EFF  75 11                     JNZ 0x00460f12
00460F01  66 8B 96 79 04 00 00      MOV DX,word ptr [ESI + 0x479]
00460F08  66 3B 56 4B               CMP DX,word ptr [ESI + 0x4b]
00460F0C  0F 84 52 03 00 00         JZ 0x00461264
LAB_00460f12:
00460F12  0F BF 96 79 04 00 00      MOVSX EDX,word ptr [ESI + 0x479]
00460F19  52                        PUSH EDX
00460F1A  0F BF 96 77 04 00 00      MOVSX EDX,word ptr [ESI + 0x477]
00460F21  0F BF C0                  MOVSX EAX,AX
00460F24  52                        PUSH EDX
00460F25  50                        PUSH EAX
00460F26  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00460F2A  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00460F2E  0F BF C9                  MOVSX ECX,CX
00460F31  52                        PUSH EDX
00460F32  50                        PUSH EAX
00460F33  51                        PUSH ECX
00460F34  E8 97 9E 24 00            CALL 0x006aadd0
00460F39  83 F8 FC                  CMP EAX,-0x4
00460F3C  0F 84 01 03 00 00         JZ 0x00461243
00460F42  83 F8 08                  CMP EAX,0x8
00460F45  0F 8D F8 02 00 00         JGE 0x00461243
00460F4B  C7 86 2E 08 00 00 04 00 00 00  MOV dword ptr [ESI + 0x82e],0x4
00460F55  0F BF 96 79 04 00 00      MOVSX EDX,word ptr [ESI + 0x479]
00460F5C  0F BF 86 77 04 00 00      MOVSX EAX,word ptr [ESI + 0x477]
00460F63  0F BF 8E 75 04 00 00      MOVSX ECX,word ptr [ESI + 0x475]
00460F6A  52                        PUSH EDX
00460F6B  50                        PUSH EAX
00460F6C  51                        PUSH ECX
00460F6D  8B CE                     MOV ECX,ESI
00460F6F  E8 F7 3F FA FF            CALL 0x00404f6b
00460F74  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00460F7A  6A 00                     PUSH 0x0
00460F7C  8B CE                     MOV ECX,ESI
00460F7E  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
00460F88  E8 D9 12 FA FF            CALL 0x00402266
00460F8D  83 F8 FF                  CMP EAX,-0x1
00460F90  0F 85 8B 02 00 00         JNZ 0x00461221
LAB_00460f96:
00460F96  83 C8 FF                  OR EAX,0xffffffff
00460F99  5F                        POP EDI
00460F9A  5E                        POP ESI
00460F9B  5B                        POP EBX
00460F9C  8B E5                     MOV ESP,EBP
00460F9E  5D                        POP EBP
00460F9F  C2 04 00                  RET 0x4
LAB_00460fa2:
00460FA2  C7 86 2E 08 00 00 04 00 00 00  MOV dword ptr [ESI + 0x82e],0x4
LAB_00460fac:
00460FAC  0F BF 4D E8               MOVSX ECX,word ptr [EBP + -0x18]
00460FB0  0F BF 55 EC               MOVSX EDX,word ptr [EBP + -0x14]
00460FB4  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
00460FB8  51                        PUSH ECX
00460FB9  52                        PUSH EDX
00460FBA  50                        PUSH EAX
00460FBB  8B CE                     MOV ECX,ESI
00460FBD  E8 A9 3F FA FF            CALL 0x00404f6b
00460FC2  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00460FC8  6A 00                     PUSH 0x0
00460FCA  8B CE                     MOV ECX,ESI
00460FCC  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
00460FD6  E8 8B 12 FA FF            CALL 0x00402266
00460FDB  83 F8 FF                  CMP EAX,-0x1
00460FDE  75 0B                     JNZ 0x00460feb
00460FE0  0B C0                     OR EAX,EAX
00460FE2  5F                        POP EDI
00460FE3  5E                        POP ESI
00460FE4  5B                        POP EBX
00460FE5  8B E5                     MOV ESP,EBP
00460FE7  5D                        POP EBP
00460FE8  C2 04 00                  RET 0x4
LAB_00460feb:
00460FEB  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00460FF1  E9 D0 FE FF FF            JMP 0x00460ec6
switchD_00460e34::caseD_9:
00460FF6  8D 4D E8                  LEA ECX,[EBP + -0x18]
00460FF9  8D 55 EC                  LEA EDX,[EBP + -0x14]
00460FFC  51                        PUSH ECX
00460FFD  8D 45 F0                  LEA EAX,[EBP + -0x10]
00461000  52                        PUSH EDX
00461001  50                        PUSH EAX
00461002  8B CF                     MOV ECX,EDI
00461004  E8 DA 21 FA FF            CALL 0x004031e3
00461009  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0046100C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0046100F  8B 16                     MOV EDX,dword ptr [ESI]
00461011  50                        PUSH EAX
00461012  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00461015  51                        PUSH ECX
00461016  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046101A  50                        PUSH EAX
0046101B  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046101F  51                        PUSH ECX
00461020  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00461024  50                        PUSH EAX
00461025  51                        PUSH ECX
00461026  8B CE                     MOV ECX,ESI
00461028  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046102B  0F BF C0                  MOVSX EAX,AX
0046102E  50                        PUSH EAX
0046102F  8B CE                     MOV ECX,ESI
00461031  E8 7C 20 FA FF            CALL 0x004030b2
00461036  50                        PUSH EAX
00461037  8B CE                     MOV ECX,ESI
00461039  E8 BE 12 FA FF            CALL 0x004022fc
0046103E  E9 83 FE FF FF            JMP 0x00460ec6
switchD_00460e34::caseD_0:
00461043  8D 55 E8                  LEA EDX,[EBP + -0x18]
00461046  8D 45 EC                  LEA EAX,[EBP + -0x14]
00461049  52                        PUSH EDX
0046104A  8D 4D F0                  LEA ECX,[EBP + -0x10]
0046104D  50                        PUSH EAX
0046104E  51                        PUSH ECX
0046104F  8B CF                     MOV ECX,EDI
00461051  E8 8D 21 FA FF            CALL 0x004031e3
00461056  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046105A  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046105E  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00461062  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00461066  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
0046106C  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
00461070  84 C0                     TEST AL,AL
00461072  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00461076  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0046107D  0F 86 43 FE FF FF         JBE 0x00460ec6
00461083  8D BE A8 02 00 00         LEA EDI,[ESI + 0x2a8]
LAB_00461089:
00461089  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
0046108F  85 C0                     TEST EAX,EAX
00461091  0F 8E 2F FE FF FF         JLE 0x00460ec6
00461097  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
0046109B  8D 47 FE                  LEA EAX,[EDI + -0x2]
0046109E  52                        PUSH EDX
0046109F  8B 10                     MOV EDX,dword ptr [EAX]
004610A1  83 EC 08                  SUB ESP,0x8
004610A4  8B CC                     MOV ECX,ESP
004610A6  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004610AA  89 11                     MOV dword ptr [ECX],EDX
004610AC  66 89 41 04               MOV word ptr [ECX + 0x4],AX
004610B0  8D 4D D8                  LEA ECX,[EBP + -0x28]
004610B3  51                        PUSH ECX
004610B4  8B CE                     MOV ECX,ESI
004610B6  E8 71 23 FA FF            CALL 0x0040342c
004610BB  8B 10                     MOV EDX,dword ptr [EAX]
004610BD  66 8B CA                  MOV CX,DX
004610C0  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
004610C3  66 03 4E 41               ADD CX,word ptr [ESI + 0x41]
004610C7  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004610CB  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
004610CF  66 2B 55 D2               SUB DX,word ptr [EBP + -0x2e]
004610D3  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
004610D7  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004610DB  66 03 C8                  ADD CX,AX
004610DE  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
004610E2  66 8B 17                  MOV DX,word ptr [EDI]
004610E5  66 89 4D B2               MOV word ptr [EBP + -0x4e],CX
004610E9  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
004610ED  33 C0                     XOR EAX,EAX
004610EF  51                        PUSH ECX
004610F0  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
004610F4  83 EC 08                  SUB ESP,0x8
004610F7  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
004610FB  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004610FE  8B D4                     MOV EDX,ESP
00461100  89 0A                     MOV dword ptr [EDX],ECX
00461102  8B CE                     MOV ECX,ESI
00461104  66 89 42 04               MOV word ptr [EDX + 0x4],AX
00461108  8D 55 C8                  LEA EDX,[EBP + -0x38]
0046110B  52                        PUSH EDX
0046110C  E8 1B 23 FA FF            CALL 0x0040342c
00461111  8B C8                     MOV ECX,EAX
00461113  8B 01                     MOV EAX,dword ptr [ECX]
00461115  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00461118  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
0046111C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0046111F  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
00461123  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00461126  03 C1                     ADD EAX,ECX
00461128  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
0046112B  2B D1                     SUB EDX,ECX
0046112D  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
00461133  83 E9 0A                  SUB ECX,0xa
00461136  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
0046113A  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
0046113E  66 89 55 B6               MOV word ptr [EBP + -0x4a],DX
00461142  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00461145  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
00461149  F7 D9                     NEG ECX
0046114B  1B C9                     SBB ECX,ECX
0046114D  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00461150  83 E1 FE                  AND ECX,0xfffffffe
00461153  41                        INC ECX
00461154  83 FB 0A                  CMP EBX,0xa
00461157  89 4D C2                  MOV dword ptr [EBP + -0x3e],ECX
0046115A  75 09                     JNZ 0x00461165
0046115C  C7 45 A4 A1 00 00 00      MOV dword ptr [EBP + -0x5c],0xa1
00461163  EB 09                     JMP 0x0046116e
LAB_00461165:
00461165  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
0046116B  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_0046116e:
0046116E  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00461172  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00461175  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00461179  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
0046117D  8D 4D A0                  LEA ECX,[EBP + -0x60]
00461180  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00461183  51                        PUSH ECX
00461184  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
00461188  E8 8D 1B FA FF            CALL 0x00402d1a
0046118D  83 C4 04                  ADD ESP,0x4
00461190  83 FB 0A                  CMP EBX,0xa
00461193  75 0C                     JNZ 0x004611a1
00461195  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
0046119F  EB 17                     JMP 0x004611b8
LAB_004611a1:
004611A1  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
004611A7  C7 86 AA 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7aa],0x0
004611B1  48                        DEC EAX
004611B2  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
LAB_004611b8:
004611B8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004611BB  33 D2                     XOR EDX,EDX
004611BD  8A 96 B2 02 00 00         MOV DL,byte ptr [ESI + 0x2b2]
004611C3  40                        INC EAX
004611C4  83 C7 06                  ADD EDI,0x6
004611C7  3B C2                     CMP EAX,EDX
004611C9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004611CC  0F 82 B7 FE FF FF         JC 0x00461089
004611D2  E9 EF FC FF FF            JMP 0x00460ec6
switchD_00460e34::caseD_1:
004611D7  68 20 A1 7A 00            PUSH 0x7aa120
004611DC  68 CC 4C 7A 00            PUSH 0x7a4ccc
004611E1  6A FF                     PUSH -0x1
004611E3  6A 00                     PUSH 0x0
004611E5  68 E0 16 00 00            PUSH 0x16e0
004611EA  68 3C 9D 7A 00            PUSH 0x7a9d3c
004611EF  E8 DC C2 24 00            CALL 0x006ad4d0
004611F4  83 C4 18                  ADD ESP,0x18
004611F7  85 C0                     TEST EAX,EAX
004611F9  74 01                     JZ 0x004611fc
004611FB  CC                        INT3
LAB_004611fc:
004611FC  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00461201  68 E1 16 00 00            PUSH 0x16e1
00461206  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046120B  50                        PUSH EAX
0046120C  6A FF                     PUSH -0x1
0046120E  E8 2D 4C 24 00            CALL 0x006a5e40
00461213  B8 FF FF 00 00            MOV EAX,0xffff
00461218  5F                        POP EDI
00461219  5E                        POP ESI
0046121A  5B                        POP EBX
0046121B  8B E5                     MOV ESP,EBP
0046121D  5D                        POP EBP
0046121E  C2 04 00                  RET 0x4
LAB_00461221:
00461221  8B 16                     MOV EDX,dword ptr [ESI]
00461223  8B CE                     MOV ECX,ESI
00461225  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
0046122B  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00461231  F7 D8                     NEG EAX
00461233  1B C0                     SBB EAX,EAX
00461235  24 FD                     AND AL,0xfd
00461237  83 C0 02                  ADD EAX,0x2
0046123A  5F                        POP EDI
0046123B  5E                        POP ESI
0046123C  5B                        POP EBX
0046123D  8B E5                     MOV ESP,EBP
0046123F  5D                        POP EBP
00461240  C2 04 00                  RET 0x4
LAB_00461243:
00461243  66 8B 56 5B               MOV DX,word ptr [ESI + 0x5b]
00461247  66 8B 46 5D               MOV AX,word ptr [ESI + 0x5d]
0046124B  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
0046124F  66 89 96 75 04 00 00      MOV word ptr [ESI + 0x475],DX
00461256  66 89 86 77 04 00 00      MOV word ptr [ESI + 0x477],AX
0046125D  66 89 8E 79 04 00 00      MOV word ptr [ESI + 0x479],CX
LAB_00461264:
00461264  8B 16                     MOV EDX,dword ptr [ESI]
00461266  8B CE                     MOV ECX,ESI
00461268  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046126E  F7 D8                     NEG EAX
00461270  1B C0                     SBB EAX,EAX
00461272  24 FD                     AND AL,0xfd
00461274  83 C0 02                  ADD EAX,0x2
00461277  5F                        POP EDI
00461278  5E                        POP ESI
00461279  5B                        POP EBX
0046127A  8B E5                     MOV ESP,EBP
0046127C  5D                        POP EBP
0046127D  C2 04 00                  RET 0x4
LAB_00461280:
00461280  83 F8 01                  CMP EAX,0x1
00461283  0F 85 BD 02 00 00         JNZ 0x00461546
00461289  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
0046128F  6A 02                     PUSH 0x2
00461291  8B CE                     MOV ECX,ESI
00461293  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00461299  E8 96 28 FA FF            CALL 0x00403b34
0046129E  83 F8 FF                  CMP EAX,-0x1
004612A1  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
004612A7  0F 84 E9 FC FF FF         JZ 0x00460f96
004612AD  3B C3                     CMP EAX,EBX
004612AF  74 14                     JZ 0x004612c5
004612B1  83 F8 03                  CMP EAX,0x3
004612B4  75 23                     JNZ 0x004612d9
004612B6  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
004612BD  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
004612C3  EB 14                     JMP 0x004612d9
LAB_004612c5:
004612C5  C7 86 7F 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x47f],0xffffffff
004612CF  C7 86 2E 08 00 00 02 00 00 00  MOV dword ptr [ESI + 0x82e],0x2
LAB_004612d9:
004612D9  83 BE 2E 08 00 00 01      CMP dword ptr [ESI + 0x82e],0x1
004612E0  0F 85 95 08 00 00         JNZ 0x00461b7b
004612E6  6A 01                     PUSH 0x1
004612E8  8B CE                     MOV ECX,ESI
004612EA  E8 16 48 FA FF            CALL 0x00405b05
004612EF  85 C0                     TEST EAX,EAX
004612F1  0F 85 84 08 00 00         JNZ 0x00461b7b
004612F7  8B 86 83 04 00 00         MOV EAX,dword ptr [ESI + 0x483]
004612FD  66 8B 8E 8B 04 00 00      MOV CX,word ptr [ESI + 0x48b]
00461304  8A 96 87 04 00 00         MOV DL,byte ptr [ESI + 0x487]
0046130A  50                        PUSH EAX
0046130B  51                        PUSH ECX
0046130C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00461312  52                        PUSH EDX
00461313  E8 A2 15 FA FF            CALL 0x004028ba
00461318  8B CE                     MOV ECX,ESI
0046131A  8B F8                     MOV EDI,EAX
0046131C  E8 C7 0A FA FF            CALL 0x00401de8
00461321  8B D8                     MOV EBX,EAX
00461323  83 FB 0A                  CMP EBX,0xa
00461326  0F 87 4F 08 00 00         JA 0x00461b7b
0046132C  33 C0                     XOR EAX,EAX
0046132E  8A 83 C8 1B 46 00         MOV AL,byte ptr [EBX + 0x461bc8]
switchD_00461334::switchD:
00461334  FF 24 85 B8 1B 46 00      JMP dword ptr [EAX*0x4 + 0x461bb8]
switchD_00461334::caseD_1:
0046133B  C7 86 7F 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x47f],0xffffffff
00461345  B8 02 00 00 00            MOV EAX,0x2
0046134A  5F                        POP EDI
0046134B  5E                        POP ESI
0046134C  5B                        POP EBX
0046134D  8B E5                     MOV ESP,EBP
0046134F  5D                        POP EBP
00461350  C2 04 00                  RET 0x4
switchD_00461334::caseD_9:
00461353  8D 4D E8                  LEA ECX,[EBP + -0x18]
00461356  8D 55 EC                  LEA EDX,[EBP + -0x14]
00461359  51                        PUSH ECX
0046135A  8D 45 F0                  LEA EAX,[EBP + -0x10]
0046135D  52                        PUSH EDX
0046135E  50                        PUSH EAX
0046135F  8B CF                     MOV ECX,EDI
00461361  E8 7D 1E FA FF            CALL 0x004031e3
00461366  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00461369  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0046136C  8B 16                     MOV EDX,dword ptr [ESI]
0046136E  50                        PUSH EAX
0046136F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00461372  51                        PUSH ECX
00461373  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00461377  50                        PUSH EAX
00461378  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046137C  51                        PUSH ECX
0046137D  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00461381  50                        PUSH EAX
00461382  51                        PUSH ECX
00461383  8B CE                     MOV ECX,ESI
00461385  FF 52 10                  CALL dword ptr [EDX + 0x10]
00461388  0F BF C0                  MOVSX EAX,AX
0046138B  50                        PUSH EAX
0046138C  8B CE                     MOV ECX,ESI
0046138E  E8 1F 1D FA FF            CALL 0x004030b2
00461393  50                        PUSH EAX
00461394  8B CE                     MOV ECX,ESI
00461396  E8 61 0F FA FF            CALL 0x004022fc
0046139B  B8 02 00 00 00            MOV EAX,0x2
004613A0  5F                        POP EDI
004613A1  5E                        POP ESI
004613A2  5B                        POP EBX
004613A3  8B E5                     MOV ESP,EBP
004613A5  5D                        POP EBP
004613A6  C2 04 00                  RET 0x4
switchD_00461334::caseD_0:
004613A9  8D 55 E8                  LEA EDX,[EBP + -0x18]
004613AC  8D 45 EC                  LEA EAX,[EBP + -0x14]
004613AF  52                        PUSH EDX
004613B0  8D 4D F0                  LEA ECX,[EBP + -0x10]
004613B3  50                        PUSH EAX
004613B4  51                        PUSH ECX
004613B5  8B CF                     MOV ECX,EDI
004613B7  E8 27 1E FA FF            CALL 0x004031e3
004613BC  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004613C0  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
004613C4  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004613C8  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
004613CC  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
004613D2  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
004613D6  84 C0                     TEST AL,AL
004613D8  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
004613DC  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
004613E3  0F 86 92 07 00 00         JBE 0x00461b7b
004613E9  8D BE A8 02 00 00         LEA EDI,[ESI + 0x2a8]
LAB_004613ef:
004613EF  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
004613F5  85 C0                     TEST EAX,EAX
004613F7  0F 8E 7E 07 00 00         JLE 0x00461b7b
004613FD  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00461401  8D 47 FE                  LEA EAX,[EDI + -0x2]
00461404  52                        PUSH EDX
00461405  8B 10                     MOV EDX,dword ptr [EAX]
00461407  83 EC 08                  SUB ESP,0x8
0046140A  8B CC                     MOV ECX,ESP
0046140C  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00461410  89 11                     MOV dword ptr [ECX],EDX
00461412  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00461416  8D 4D C8                  LEA ECX,[EBP + -0x38]
00461419  51                        PUSH ECX
0046141A  8B CE                     MOV ECX,ESI
0046141C  E8 0B 20 FA FF            CALL 0x0040342c
00461421  8B 10                     MOV EDX,dword ptr [EAX]
00461423  66 8B CA                  MOV CX,DX
00461426  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00461429  66 03 4E 41               ADD CX,word ptr [ESI + 0x41]
0046142D  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00461431  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
00461435  66 2B 55 D2               SUB DX,word ptr [EBP + -0x2e]
00461439  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
0046143D  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00461441  66 03 C8                  ADD CX,AX
00461444  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
00461448  66 8B 17                  MOV DX,word ptr [EDI]
0046144B  66 89 4D B2               MOV word ptr [EBP + -0x4e],CX
0046144F  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00461453  33 C0                     XOR EAX,EAX
00461455  51                        PUSH ECX
00461456  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
0046145A  83 EC 08                  SUB ESP,0x8
0046145D  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
00461461  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00461464  8B D4                     MOV EDX,ESP
00461466  89 0A                     MOV dword ptr [EDX],ECX
00461468  8B CE                     MOV ECX,ESI
0046146A  66 89 42 04               MOV word ptr [EDX + 0x4],AX
0046146E  8D 55 D8                  LEA EDX,[EBP + -0x28]
00461471  52                        PUSH EDX
00461472  E8 B5 1F FA FF            CALL 0x0040342c
00461477  8B C8                     MOV ECX,EAX
00461479  8B 01                     MOV EAX,dword ptr [ECX]
0046147B  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0046147E  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
00461482  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00461485  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
00461489  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0046148C  03 C1                     ADD EAX,ECX
0046148E  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
00461491  2B D1                     SUB EDX,ECX
00461493  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
00461499  83 E9 0A                  SUB ECX,0xa
0046149C  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
004614A0  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
004614A4  66 89 55 B6               MOV word ptr [EBP + -0x4a],DX
004614A8  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004614AB  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
004614AF  F7 D9                     NEG ECX
004614B1  1B C9                     SBB ECX,ECX
004614B3  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
004614B6  83 E1 FE                  AND ECX,0xfffffffe
004614B9  41                        INC ECX
004614BA  83 FB 0A                  CMP EBX,0xa
004614BD  89 4D C2                  MOV dword ptr [EBP + -0x3e],ECX
004614C0  75 09                     JNZ 0x004614cb
004614C2  C7 45 A4 A1 00 00 00      MOV dword ptr [EBP + -0x5c],0xa1
004614C9  EB 09                     JMP 0x004614d4
LAB_004614cb:
004614CB  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
004614D1  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_004614d4:
004614D4  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
004614D8  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004614DB  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004614DF  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
004614E3  8D 4D A0                  LEA ECX,[EBP + -0x60]
004614E6  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
004614E9  51                        PUSH ECX
004614EA  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
004614EE  E8 27 18 FA FF            CALL 0x00402d1a
004614F3  83 C4 04                  ADD ESP,0x4
004614F6  83 FB 0A                  CMP EBX,0xa
004614F9  75 0C                     JNZ 0x00461507
004614FB  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
00461505  EB 17                     JMP 0x0046151e
LAB_00461507:
00461507  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
0046150D  C7 86 AA 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7aa],0x0
00461517  48                        DEC EAX
00461518  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
LAB_0046151e:
0046151E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00461521  33 D2                     XOR EDX,EDX
00461523  8A 96 B2 02 00 00         MOV DL,byte ptr [ESI + 0x2b2]
00461529  40                        INC EAX
0046152A  83 C7 06                  ADD EDI,0x6
0046152D  3B C2                     CMP EAX,EDX
0046152F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00461532  0F 82 B7 FE FF FF         JC 0x004613ef
00461538  B8 02 00 00 00            MOV EAX,0x2
0046153D  5F                        POP EDI
0046153E  5E                        POP ESI
0046153F  5B                        POP EBX
00461540  8B E5                     MOV ESP,EBP
00461542  5D                        POP EBP
00461543  C2 04 00                  RET 0x4
LAB_00461546:
00461546  83 F8 02                  CMP EAX,0x2
00461549  0F 85 13 03 00 00         JNZ 0x00461862
0046154F  8B CE                     MOV ECX,ESI
00461551  E8 01 49 FA FF            CALL 0x00405e57
00461556  83 F8 01                  CMP EAX,0x1
00461559  0F 85 B1 00 00 00         JNZ 0x00461610
0046155F  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
00461566  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
0046156A  66 F7 D8                  NEG AX
0046156D  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
00461574  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
00461578  8B 16                     MOV EDX,dword ptr [ESI]
0046157A  50                        PUSH EAX
0046157B  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0046157F  50                        PUSH EAX
00461580  51                        PUSH ECX
00461581  8B CE                     MOV ECX,ESI
00461583  FF 52 18                  CALL dword ptr [EDX + 0x18]
00461586  83 F8 01                  CMP EAX,0x1
00461589  75 74                     JNZ 0x004615ff
0046158B  0F BF 96 69 04 00 00      MOVSX EDX,word ptr [ESI + 0x469]
00461592  C7 86 2E 08 00 00 03 00 00 00  MOV dword ptr [ESI + 0x82e],0x3
0046159C  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
004615A0  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
004615A4  03 D0                     ADD EDX,EAX
004615A6  52                        PUSH EDX
004615A7  51                        PUSH ECX
004615A8  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
004615AC  52                        PUSH EDX
004615AD  8B CE                     MOV ECX,ESI
004615AF  E8 B7 39 FA FF            CALL 0x00404f6b
004615B4  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
004615BA  53                        PUSH EBX
004615BB  8B CE                     MOV ECX,ESI
004615BD  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
004615C3  E8 6C 25 FA FF            CALL 0x00403b34
004615C8  83 F8 FF                  CMP EAX,-0x1
004615CB  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
004615D1  0F 84 BF F9 FF FF         JZ 0x00460f96
004615D7  3B C3                     CMP EAX,EBX
004615D9  74 09                     JZ 0x004615e4
004615DB  83 F8 03                  CMP EAX,0x3
004615DE  0F 85 97 05 00 00         JNZ 0x00461b7b
LAB_004615e4:
004615E4  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
004615EB  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
004615F1  B8 02 00 00 00            MOV EAX,0x2
004615F6  5F                        POP EDI
004615F7  5E                        POP ESI
004615F8  5B                        POP EBX
004615F9  8B E5                     MOV ESP,EBP
004615FB  5D                        POP EBP
004615FC  C2 04 00                  RET 0x4
LAB_004615ff:
004615FF  66 8B 86 69 04 00 00      MOV AX,word ptr [ESI + 0x469]
00461606  66 F7 D8                  NEG AX
00461609  66 89 86 69 04 00 00      MOV word ptr [ESI + 0x469],AX
LAB_00461610:
00461610  83 BE 2E 08 00 00 02      CMP dword ptr [ESI + 0x82e],0x2
00461617  0F 85 1F 05 00 00         JNZ 0x00461b3c
0046161D  6A 02                     PUSH 0x2
0046161F  8B CE                     MOV ECX,ESI
00461621  E8 DF 44 FA FF            CALL 0x00405b05
00461626  85 C0                     TEST EAX,EAX
00461628  0F 85 0E 05 00 00         JNZ 0x00461b3c
0046162E  8B 8E 83 04 00 00         MOV ECX,dword ptr [ESI + 0x483]
00461634  66 8B 96 8B 04 00 00      MOV DX,word ptr [ESI + 0x48b]
0046163B  8A 86 87 04 00 00         MOV AL,byte ptr [ESI + 0x487]
00461641  51                        PUSH ECX
00461642  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00461648  52                        PUSH EDX
00461649  50                        PUSH EAX
0046164A  E8 6B 12 FA FF            CALL 0x004028ba
0046164F  8B CE                     MOV ECX,ESI
00461651  8B F8                     MOV EDI,EAX
00461653  E8 90 07 FA FF            CALL 0x00401de8
00461658  8B D8                     MOV EBX,EAX
0046165A  83 FB 0A                  CMP EBX,0xa
0046165D  0F 87 D9 04 00 00         JA 0x00461b3c
00461663  33 C9                     XOR ECX,ECX
00461665  8A 8B E4 1B 46 00         MOV CL,byte ptr [EBX + 0x461be4]
switchD_0046166b::switchD:
0046166B  FF 24 8D D4 1B 46 00      JMP dword ptr [ECX*0x4 + 0x461bd4]
switchD_0046166b::caseD_1:
00461672  C7 86 7F 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x47f],0xffffffff
0046167C  E9 BB 04 00 00            JMP 0x00461b3c
switchD_0046166b::caseD_9:
00461681  8D 55 E8                  LEA EDX,[EBP + -0x18]
00461684  8D 45 EC                  LEA EAX,[EBP + -0x14]
00461687  52                        PUSH EDX
00461688  8D 4D F0                  LEA ECX,[EBP + -0x10]
0046168B  50                        PUSH EAX
0046168C  51                        PUSH ECX
0046168D  8B CF                     MOV ECX,EDI
0046168F  E8 4F 1B FA FF            CALL 0x004031e3
00461694  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00461697  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0046169A  8B 16                     MOV EDX,dword ptr [ESI]
0046169C  50                        PUSH EAX
0046169D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004616A0  51                        PUSH ECX
004616A1  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004616A5  50                        PUSH EAX
004616A6  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004616AA  51                        PUSH ECX
004616AB  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004616AF  50                        PUSH EAX
004616B0  51                        PUSH ECX
004616B1  8B CE                     MOV ECX,ESI
004616B3  FF 52 10                  CALL dword ptr [EDX + 0x10]
004616B6  0F BF C0                  MOVSX EAX,AX
004616B9  50                        PUSH EAX
004616BA  8B CE                     MOV ECX,ESI
004616BC  E8 F1 19 FA FF            CALL 0x004030b2
004616C1  50                        PUSH EAX
004616C2  8B CE                     MOV ECX,ESI
004616C4  E8 33 0C FA FF            CALL 0x004022fc
004616C9  E9 6E 04 00 00            JMP 0x00461b3c
switchD_0046166b::caseD_0:
004616CE  8D 55 E8                  LEA EDX,[EBP + -0x18]
004616D1  8D 45 EC                  LEA EAX,[EBP + -0x14]
004616D4  52                        PUSH EDX
004616D5  8D 4D F0                  LEA ECX,[EBP + -0x10]
004616D8  50                        PUSH EAX
004616D9  51                        PUSH ECX
004616DA  8B CF                     MOV ECX,EDI
004616DC  E8 02 1B FA FF            CALL 0x004031e3
004616E1  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004616E5  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
004616E9  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004616ED  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
004616F1  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
004616F7  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
004616FB  84 C0                     TEST AL,AL
004616FD  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00461701  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00461708  0F 86 2E 04 00 00         JBE 0x00461b3c
0046170E  8D BE A8 02 00 00         LEA EDI,[ESI + 0x2a8]
LAB_00461714:
00461714  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
0046171A  85 C0                     TEST EAX,EAX
0046171C  0F 8E 1A 04 00 00         JLE 0x00461b3c
00461722  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00461726  8D 47 FE                  LEA EAX,[EDI + -0x2]
00461729  52                        PUSH EDX
0046172A  8B 10                     MOV EDX,dword ptr [EAX]
0046172C  83 EC 08                  SUB ESP,0x8
0046172F  8B CC                     MOV ECX,ESP
00461731  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00461735  89 11                     MOV dword ptr [ECX],EDX
00461737  66 89 41 04               MOV word ptr [ECX + 0x4],AX
0046173B  8D 4D C8                  LEA ECX,[EBP + -0x38]
0046173E  51                        PUSH ECX
0046173F  8B CE                     MOV ECX,ESI
00461741  E8 E6 1C FA FF            CALL 0x0040342c
00461746  8B 10                     MOV EDX,dword ptr [EAX]
00461748  66 8B CA                  MOV CX,DX
0046174B  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0046174E  66 03 4E 41               ADD CX,word ptr [ESI + 0x41]
00461752  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00461756  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
0046175A  66 2B 55 D2               SUB DX,word ptr [EBP + -0x2e]
0046175E  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
00461762  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00461766  66 03 C8                  ADD CX,AX
00461769  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
0046176D  66 8B 17                  MOV DX,word ptr [EDI]
00461770  66 89 4D B2               MOV word ptr [EBP + -0x4e],CX
00461774  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00461778  33 C0                     XOR EAX,EAX
0046177A  51                        PUSH ECX
0046177B  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
0046177F  83 EC 08                  SUB ESP,0x8
00461782  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
00461786  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00461789  8B D4                     MOV EDX,ESP
0046178B  89 0A                     MOV dword ptr [EDX],ECX
0046178D  8B CE                     MOV ECX,ESI
0046178F  66 89 42 04               MOV word ptr [EDX + 0x4],AX
00461793  8D 55 D8                  LEA EDX,[EBP + -0x28]
00461796  52                        PUSH EDX
00461797  E8 90 1C FA FF            CALL 0x0040342c
0046179C  8B C8                     MOV ECX,EAX
0046179E  8B 01                     MOV EAX,dword ptr [ECX]
004617A0  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004617A3  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
004617A7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004617AA  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
004617AE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004617B1  03 C1                     ADD EAX,ECX
004617B3  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
004617B6  2B D1                     SUB EDX,ECX
004617B8  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
004617BE  83 E9 0A                  SUB ECX,0xa
004617C1  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
004617C5  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
004617C9  66 89 55 B6               MOV word ptr [EBP + -0x4a],DX
004617CD  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004617D0  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
004617D4  F7 D9                     NEG ECX
004617D6  1B C9                     SBB ECX,ECX
004617D8  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
004617DB  83 E1 FE                  AND ECX,0xfffffffe
004617DE  41                        INC ECX
004617DF  83 FB 0A                  CMP EBX,0xa
004617E2  89 4D C2                  MOV dword ptr [EBP + -0x3e],ECX
004617E5  75 09                     JNZ 0x004617f0
004617E7  C7 45 A4 A1 00 00 00      MOV dword ptr [EBP + -0x5c],0xa1
004617EE  EB 09                     JMP 0x004617f9
LAB_004617f0:
004617F0  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
004617F6  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_004617f9:
004617F9  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
004617FD  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00461800  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00461804  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
00461808  8D 4D A0                  LEA ECX,[EBP + -0x60]
0046180B  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
0046180E  51                        PUSH ECX
0046180F  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
00461813  E8 02 15 FA FF            CALL 0x00402d1a
00461818  83 C4 04                  ADD ESP,0x4
0046181B  83 FB 0A                  CMP EBX,0xa
0046181E  75 0C                     JNZ 0x0046182c
00461820  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
0046182A  EB 17                     JMP 0x00461843
LAB_0046182c:
0046182C  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00461832  C7 86 AA 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7aa],0x0
0046183C  48                        DEC EAX
0046183D  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
LAB_00461843:
00461843  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00461846  33 D2                     XOR EDX,EDX
00461848  8A 96 B2 02 00 00         MOV DL,byte ptr [ESI + 0x2b2]
0046184E  40                        INC EAX
0046184F  83 C7 06                  ADD EDI,0x6
00461852  3B C2                     CMP EAX,EDX
00461854  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00461857  0F 82 B7 FE FF FF         JC 0x00461714
0046185D  E9 DA 02 00 00            JMP 0x00461b3c
LAB_00461862:
00461862  83 F8 03                  CMP EAX,0x3
00461865  0F 85 8F 02 00 00         JNZ 0x00461afa
0046186B  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00461871  6A 02                     PUSH 0x2
00461873  8B CE                     MOV ECX,ESI
00461875  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
0046187B  E8 B4 22 FA FF            CALL 0x00403b34
00461880  83 F8 FF                  CMP EAX,-0x1
00461883  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00461889  0F 84 07 F7 FF FF         JZ 0x00460f96
0046188F  3B C3                     CMP EAX,EBX
00461891  74 05                     JZ 0x00461898
00461893  83 F8 03                  CMP EAX,0x3
00461896  75 0D                     JNZ 0x004618a5
LAB_00461898:
00461898  66 89 9E 69 04 00 00      MOV word ptr [ESI + 0x469],BX
0046189F  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
LAB_004618a5:
004618A5  83 BE 2E 08 00 00 03      CMP dword ptr [ESI + 0x82e],0x3
004618AC  0F 85 C9 02 00 00         JNZ 0x00461b7b
004618B2  6A 03                     PUSH 0x3
004618B4  8B CE                     MOV ECX,ESI
004618B6  E8 4A 42 FA FF            CALL 0x00405b05
004618BB  85 C0                     TEST EAX,EAX
004618BD  0F 85 B8 02 00 00         JNZ 0x00461b7b
004618C3  8B 8E 83 04 00 00         MOV ECX,dword ptr [ESI + 0x483]
004618C9  66 8B 96 8B 04 00 00      MOV DX,word ptr [ESI + 0x48b]
004618D0  8A 86 87 04 00 00         MOV AL,byte ptr [ESI + 0x487]
004618D6  51                        PUSH ECX
004618D7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004618DD  52                        PUSH EDX
004618DE  50                        PUSH EAX
004618DF  E8 D6 0F FA FF            CALL 0x004028ba
004618E4  8B CE                     MOV ECX,ESI
004618E6  8B F8                     MOV EDI,EAX
004618E8  E8 FB 04 FA FF            CALL 0x00401de8
004618ED  8B D8                     MOV EBX,EAX
004618EF  83 FB 0A                  CMP EBX,0xa
004618F2  0F 87 83 02 00 00         JA 0x00461b7b
004618F8  33 C9                     XOR ECX,ECX
004618FA  8A 8B 00 1C 46 00         MOV CL,byte ptr [EBX + 0x461c00]
switchD_00461900::switchD:
00461900  FF 24 8D F0 1B 46 00      JMP dword ptr [ECX*0x4 + 0x461bf0]
switchD_00461900::caseD_9:
00461907  8D 55 E8                  LEA EDX,[EBP + -0x18]
0046190A  8D 45 EC                  LEA EAX,[EBP + -0x14]
0046190D  52                        PUSH EDX
0046190E  8D 4D F0                  LEA ECX,[EBP + -0x10]
00461911  50                        PUSH EAX
00461912  51                        PUSH ECX
00461913  8B CF                     MOV ECX,EDI
00461915  E8 C9 18 FA FF            CALL 0x004031e3
0046191A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0046191D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00461920  8B 16                     MOV EDX,dword ptr [ESI]
00461922  50                        PUSH EAX
00461923  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00461926  51                        PUSH ECX
00461927  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046192B  50                        PUSH EAX
0046192C  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00461930  51                        PUSH ECX
00461931  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00461935  50                        PUSH EAX
00461936  51                        PUSH ECX
00461937  8B CE                     MOV ECX,ESI
00461939  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046193C  0F BF C0                  MOVSX EAX,AX
0046193F  50                        PUSH EAX
00461940  8B CE                     MOV ECX,ESI
00461942  E8 6B 17 FA FF            CALL 0x004030b2
00461947  50                        PUSH EAX
00461948  8B CE                     MOV ECX,ESI
0046194A  E8 AD 09 FA FF            CALL 0x004022fc
0046194F  B8 02 00 00 00            MOV EAX,0x2
00461954  5F                        POP EDI
00461955  5E                        POP ESI
00461956  5B                        POP EBX
00461957  8B E5                     MOV ESP,EBP
00461959  5D                        POP EBP
0046195A  C2 04 00                  RET 0x4
switchD_00461900::caseD_0:
0046195D  8D 55 E8                  LEA EDX,[EBP + -0x18]
00461960  8D 45 EC                  LEA EAX,[EBP + -0x14]
00461963  52                        PUSH EDX
00461964  8D 4D F0                  LEA ECX,[EBP + -0x10]
00461967  50                        PUSH EAX
00461968  51                        PUSH ECX
00461969  8B CF                     MOV ECX,EDI
0046196B  E8 73 18 FA FF            CALL 0x004031e3
00461970  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00461974  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00461978  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046197C  66 89 45 AA               MOV word ptr [EBP + -0x56],AX
00461980  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
00461986  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
0046198A  84 C0                     TEST AL,AL
0046198C  66 89 4D AC               MOV word ptr [EBP + -0x54],CX
00461990  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00461997  0F 86 DE 01 00 00         JBE 0x00461b7b
0046199D  8D BE A8 02 00 00         LEA EDI,[ESI + 0x2a8]
LAB_004619a3:
004619A3  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
004619A9  85 C0                     TEST EAX,EAX
004619AB  0F 8E CA 01 00 00         JLE 0x00461b7b
004619B1  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
004619B5  8D 47 FE                  LEA EAX,[EDI + -0x2]
004619B8  52                        PUSH EDX
004619B9  8B 10                     MOV EDX,dword ptr [EAX]
004619BB  83 EC 08                  SUB ESP,0x8
004619BE  8B CC                     MOV ECX,ESP
004619C0  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004619C4  89 11                     MOV dword ptr [ECX],EDX
004619C6  66 89 41 04               MOV word ptr [ECX + 0x4],AX
004619CA  8D 4D C8                  LEA ECX,[EBP + -0x38]
004619CD  51                        PUSH ECX
004619CE  8B CE                     MOV ECX,ESI
004619D0  E8 57 1A FA FF            CALL 0x0040342c
004619D5  8B 10                     MOV EDX,dword ptr [EAX]
004619D7  66 8B CA                  MOV CX,DX
004619DA  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
004619DD  66 03 4E 41               ADD CX,word ptr [ESI + 0x41]
004619E1  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004619E5  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
004619E9  66 2B 55 D2               SUB DX,word ptr [EBP + -0x2e]
004619ED  66 89 4D AE               MOV word ptr [EBP + -0x52],CX
004619F1  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004619F5  66 03 C8                  ADD CX,AX
004619F8  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
004619FC  66 8B 17                  MOV DX,word ptr [EDI]
004619FF  66 89 4D B2               MOV word ptr [EBP + -0x4e],CX
00461A03  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00461A07  33 C0                     XOR EAX,EAX
00461A09  51                        PUSH ECX
00461A0A  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
00461A0E  83 EC 08                  SUB ESP,0x8
00461A11  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
00461A15  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00461A18  8B D4                     MOV EDX,ESP
00461A1A  89 0A                     MOV dword ptr [EDX],ECX
00461A1C  8B CE                     MOV ECX,ESI
00461A1E  66 89 42 04               MOV word ptr [EDX + 0x4],AX
00461A22  8D 55 D8                  LEA EDX,[EBP + -0x28]
00461A25  52                        PUSH EDX
00461A26  E8 01 1A FA FF            CALL 0x0040342c
00461A2B  8B C8                     MOV ECX,EAX
00461A2D  8B 01                     MOV EAX,dword ptr [ECX]
00461A2F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00461A32  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
00461A36  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00461A39  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
00461A3D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00461A40  03 C1                     ADD EAX,ECX
00461A42  8B 4D D2                  MOV ECX,dword ptr [EBP + -0x2e]
00461A45  2B D1                     SUB EDX,ECX
00461A47  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
00461A4D  83 E9 0A                  SUB ECX,0xa
00461A50  66 89 45 B4               MOV word ptr [EBP + -0x4c],AX
00461A54  66 8B 45 E8               MOV AX,word ptr [EBP + -0x18]
00461A58  66 89 55 B6               MOV word ptr [EBP + -0x4a],DX
00461A5C  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00461A5F  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
00461A63  F7 D9                     NEG ECX
00461A65  1B C9                     SBB ECX,ECX
00461A67  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00461A6A  83 E1 FE                  AND ECX,0xfffffffe
00461A6D  41                        INC ECX
00461A6E  83 FB 0A                  CMP EBX,0xa
00461A71  89 4D C2                  MOV dword ptr [EBP + -0x3e],ECX
00461A74  75 09                     JNZ 0x00461a7f
00461A76  C7 45 A4 A1 00 00 00      MOV dword ptr [EBP + -0x5c],0xa1
00461A7D  EB 09                     JMP 0x00461a88
LAB_00461a7f:
00461A7F  8B 86 9A 07 00 00         MOV EAX,dword ptr [ESI + 0x79a]
00461A85  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_00461a88:
00461A88  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00461A8C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00461A8F  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00461A93  66 89 4D BA               MOV word ptr [EBP + -0x46],CX
00461A97  8D 4D A0                  LEA ECX,[EBP + -0x60]
00461A9A  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00461A9D  51                        PUSH ECX
00461A9E  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
00461AA2  E8 73 12 FA FF            CALL 0x00402d1a
00461AA7  83 C4 04                  ADD ESP,0x4
00461AAA  83 FB 0A                  CMP EBX,0xa
00461AAD  75 0C                     JNZ 0x00461abb
00461AAF  C7 86 2A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x72a],0x0
00461AB9  EB 17                     JMP 0x00461ad2
LAB_00461abb:
00461ABB  8B 86 A2 07 00 00         MOV EAX,dword ptr [ESI + 0x7a2]
00461AC1  C7 86 AA 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7aa],0x0
00461ACB  48                        DEC EAX
00461ACC  89 86 A2 07 00 00         MOV dword ptr [ESI + 0x7a2],EAX
LAB_00461ad2:
00461AD2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00461AD5  33 D2                     XOR EDX,EDX
00461AD7  8A 96 B2 02 00 00         MOV DL,byte ptr [ESI + 0x2b2]
00461ADD  40                        INC EAX
00461ADE  83 C7 06                  ADD EDI,0x6
00461AE1  3B C2                     CMP EAX,EDX
00461AE3  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00461AE6  0F 82 B7 FE FF FF         JC 0x004619a3
00461AEC  B8 02 00 00 00            MOV EAX,0x2
00461AF1  5F                        POP EDI
00461AF2  5E                        POP ESI
00461AF3  5B                        POP EBX
00461AF4  8B E5                     MOV ESP,EBP
00461AF6  5D                        POP EBP
00461AF7  C2 04 00                  RET 0x4
LAB_00461afa:
00461AFA  83 F8 04                  CMP EAX,0x4
00461AFD  75 59                     JNZ 0x00461b58
00461AFF  8B BE B7 00 00 00         MOV EDI,dword ptr [ESI + 0xb7]
00461B05  6A 02                     PUSH 0x2
00461B07  8B CE                     MOV ECX,ESI
00461B09  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
00461B0F  E8 52 07 FA FF            CALL 0x00402266
00461B14  83 F8 FF                  CMP EAX,-0x1
00461B17  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
00461B1D  0F 84 73 F4 FF FF         JZ 0x00460f96
00461B23  3B C3                     CMP EAX,EBX
00461B25  74 05                     JZ 0x00461b2c
00461B27  83 F8 03                  CMP EAX,0x3
00461B2A  75 10                     JNZ 0x00461b3c
LAB_00461b2c:
00461B2C  C7 86 36 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x836],0x1
00461B36  89 9E 2E 08 00 00         MOV dword ptr [ESI + 0x82e],EBX
switchD_0046166b::caseD_2:
00461B3C  8B 06                     MOV EAX,dword ptr [ESI]
00461B3E  8B CE                     MOV ECX,ESI
00461B40  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00461B46  F7 D8                     NEG EAX
00461B48  1B C0                     SBB EAX,EAX
00461B4A  24 FD                     AND AL,0xfd
00461B4C  83 C0 02                  ADD EAX,0x2
00461B4F  5F                        POP EDI
00461B50  5E                        POP ESI
00461B51  5B                        POP EBX
00461B52  8B E5                     MOV ESP,EBP
00461B54  5D                        POP EBP
00461B55  C2 04 00                  RET 0x4
LAB_00461b58:
00461B58  68 F4 A0 7A 00            PUSH 0x7aa0f4
00461B5D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00461B62  53                        PUSH EBX
00461B63  53                        PUSH EBX
00461B64  68 08 18 00 00            PUSH 0x1808
00461B69  68 3C 9D 7A 00            PUSH 0x7a9d3c
00461B6E  E8 5D B9 24 00            CALL 0x006ad4d0
00461B73  83 C4 18                  ADD ESP,0x18
00461B76  85 C0                     TEST EAX,EAX
00461B78  74 01                     JZ 0x00461b7b
00461B7A  CC                        INT3
switchD_00461334::caseD_2:
00461B7B  5F                        POP EDI
00461B7C  5E                        POP ESI
00461B7D  B8 02 00 00 00            MOV EAX,0x2
00461B82  5B                        POP EBX
00461B83  8B E5                     MOV ESP,EBP
00461B85  5D                        POP EBP
00461B86  C2 04 00                  RET 0x4
