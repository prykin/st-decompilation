FUN_00502990:
00502990  55                        PUSH EBP
00502991  8B EC                     MOV EBP,ESP
00502993  83 EC 4C                  SUB ESP,0x4c
00502996  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050299B  53                        PUSH EBX
0050299C  56                        PUSH ESI
0050299D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005029A0  57                        PUSH EDI
005029A1  8D 55 B8                  LEA EDX,[EBP + -0x48]
005029A4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005029A7  6A 00                     PUSH 0x0
005029A9  52                        PUSH EDX
005029AA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005029AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005029B3  E8 38 AE 22 00            CALL 0x0072d7f0
005029B8  8B F0                     MOV ESI,EAX
005029BA  83 C4 08                  ADD ESP,0x8
005029BD  85 F6                     TEST ESI,ESI
005029BF  0F 85 7D 03 00 00         JNZ 0x00502d42
005029C5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005029C8  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
005029CE  83 F8 04                  CMP EAX,0x4
005029D1  0F 87 6C 01 00 00         JA 0x00502b43
switchD_005029d7::switchD:
005029D7  FF 24 85 88 2D 50 00      JMP dword ptr [EAX*0x4 + 0x502d88]
switchD_005029d7::caseD_0:
005029DE  8B 86 74 09 00 00         MOV EAX,dword ptr [ESI + 0x974]
005029E4  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
005029EA  50                        PUSH EAX
005029EB  6A 01                     PUSH 0x1
005029ED  6A 46                     PUSH 0x46
005029EF  6A 00                     PUSH 0x0
005029F1  51                        PUSH ECX
005029F2  E8 32 08 F0 FF            CALL 0x00403229
005029F7  8B 96 7C 09 00 00         MOV EDX,dword ptr [ESI + 0x97c]
005029FD  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00502A03  52                        PUSH EDX
00502A04  6A 06                     PUSH 0x6
00502A06  6A 00                     PUSH 0x0
00502A08  6A 31                     PUSH 0x31
00502A0A  50                        PUSH EAX
00502A0B  E8 19 08 F0 FF            CALL 0x00403229
00502A10  83 C4 28                  ADD ESP,0x28
00502A13  E9 2B 01 00 00            JMP 0x00502b43
switchD_005029d7::caseD_1:
00502A18  8B 8E 88 09 00 00         MOV ECX,dword ptr [ESI + 0x988]
00502A1E  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
00502A24  51                        PUSH ECX
00502A25  6A 01                     PUSH 0x1
00502A27  6A 46                     PUSH 0x46
00502A29  6A 00                     PUSH 0x0
00502A2B  52                        PUSH EDX
00502A2C  E8 F8 07 F0 FF            CALL 0x00403229
00502A31  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
00502A37  83 C4 14                  ADD ESP,0x14
00502A3A  3D BD 00 00 00            CMP EAX,0xbd
00502A3F  74 19                     JZ 0x00502a5a
00502A41  8B 86 8C 09 00 00         MOV EAX,dword ptr [ESI + 0x98c]
00502A47  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00502A4D  50                        PUSH EAX
00502A4E  6A 06                     PUSH 0x6
00502A50  6A 00                     PUSH 0x0
00502A52  6A 31                     PUSH 0x31
00502A54  51                        PUSH ECX
00502A55  E9 E1 00 00 00            JMP 0x00502b3b
LAB_00502a5a:
00502A5A  8B 96 7C 09 00 00         MOV EDX,dword ptr [ESI + 0x97c]
00502A60  E9 C8 00 00 00            JMP 0x00502b2d
switchD_005029d7::caseD_2:
00502A65  8B 8E 88 09 00 00         MOV ECX,dword ptr [ESI + 0x988]
00502A6B  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
00502A71  51                        PUSH ECX
00502A72  6A 01                     PUSH 0x1
00502A74  6A 46                     PUSH 0x46
00502A76  6A 00                     PUSH 0x0
00502A78  52                        PUSH EDX
00502A79  E8 AB 07 F0 FF            CALL 0x00403229
00502A7E  8B 86 8C 09 00 00         MOV EAX,dword ptr [ESI + 0x98c]
00502A84  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00502A8A  50                        PUSH EAX
00502A8B  6A 06                     PUSH 0x6
00502A8D  6A 00                     PUSH 0x0
00502A8F  6A 31                     PUSH 0x31
00502A91  51                        PUSH ECX
00502A92  E8 92 07 F0 FF            CALL 0x00403229
00502A97  83 C4 28                  ADD ESP,0x28
00502A9A  E9 A4 00 00 00            JMP 0x00502b43
switchD_005029d7::caseD_4:
00502A9F  8B 96 74 09 00 00         MOV EDX,dword ptr [ESI + 0x974]
00502AA5  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00502AAB  52                        PUSH EDX
00502AAC  6A 01                     PUSH 0x1
00502AAE  6A 46                     PUSH 0x46
00502AB0  6A 00                     PUSH 0x0
00502AB2  50                        PUSH EAX
00502AB3  E8 71 07 F0 FF            CALL 0x00403229
00502AB8  8B 8E 7C 09 00 00         MOV ECX,dword ptr [ESI + 0x97c]
00502ABE  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
00502AC4  51                        PUSH ECX
00502AC5  6A 06                     PUSH 0x6
00502AC7  6A 00                     PUSH 0x0
00502AC9  6A 31                     PUSH 0x31
00502ACB  52                        PUSH EDX
00502ACC  E8 58 07 F0 FF            CALL 0x00403229
00502AD1  83 C4 28                  ADD ESP,0x28
00502AD4  EB 6D                     JMP 0x00502b43
switchD_005029d7::caseD_3:
00502AD6  8B 86 74 09 00 00         MOV EAX,dword ptr [ESI + 0x974]
00502ADC  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00502AE2  50                        PUSH EAX
00502AE3  6A 01                     PUSH 0x1
00502AE5  6A 46                     PUSH 0x46
00502AE7  6A 00                     PUSH 0x0
00502AE9  51                        PUSH ECX
00502AEA  E8 3A 07 F0 FF            CALL 0x00403229
00502AEF  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
00502AF5  83 C4 14                  ADD ESP,0x14
00502AF8  83 C0 F7                  ADD EAX,-0x9
00502AFB  3D B4 00 00 00            CMP EAX,0xb4
00502B00  77 25                     JA 0x00502b27
00502B02  33 D2                     XOR EDX,EDX
00502B04  8A 90 A4 2D 50 00         MOV DL,byte ptr [EAX + 0x502da4]
switchD_00502b0a::switchD:
00502B0A  FF 24 95 9C 2D 50 00      JMP dword ptr [EDX*0x4 + 0x502d9c]
switchD_00502b0a::caseD_9:
00502B11  8B 86 7C 09 00 00         MOV EAX,dword ptr [ESI + 0x97c]
00502B17  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00502B1D  50                        PUSH EAX
00502B1E  6A 06                     PUSH 0x6
00502B20  6A 00                     PUSH 0x0
00502B22  6A 31                     PUSH 0x31
00502B24  51                        PUSH ECX
00502B25  EB 14                     JMP 0x00502b3b
switchD_00502b0a::caseD_a:
00502B27  8B 96 90 09 00 00         MOV EDX,dword ptr [ESI + 0x990]
LAB_00502b2d:
00502B2D  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00502B33  52                        PUSH EDX
00502B34  6A 06                     PUSH 0x6
00502B36  6A 00                     PUSH 0x0
00502B38  6A 31                     PUSH 0x31
00502B3A  50                        PUSH EAX
LAB_00502b3b:
00502B3B  E8 E9 06 F0 FF            CALL 0x00403229
00502B40  83 C4 14                  ADD ESP,0x14
switchD_005029d7::default:
00502B43  33 C0                     XOR EAX,EAX
00502B45  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
00502B4B  48                        DEC EAX
00502B4C  0F 85 BD 01 00 00         JNZ 0x00502d0f
00502B52  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
00502B58  83 C0 E6                  ADD EAX,-0x1a
00502B5B  83 F8 0A                  CMP EAX,0xa
00502B5E  0F 87 AB 01 00 00         JA 0x00502d0f
00502B64  33 C9                     XOR ECX,ECX
00502B66  8A 88 68 2E 50 00         MOV CL,byte ptr [EAX + 0x502e68]
switchD_00502b6c::switchD:
00502B6C  FF 24 8D 5C 2E 50 00      JMP dword ptr [ECX*0x4 + 0x502e5c]
switchD_00502b6c::caseD_1a:
00502B73  8B 96 B2 02 00 00         MOV EDX,dword ptr [ESI + 0x2b2]
00502B79  6A 03                     PUSH 0x3
00502B7B  52                        PUSH EDX
00502B7C  E8 1F 88 20 00            CALL 0x0070b3a0
00502B81  50                        PUSH EAX
00502B82  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00502B88  6A 01                     PUSH 0x1
00502B8A  68 84 00 00 00            PUSH 0x84
00502B8F  6A 3C                     PUSH 0x3c
00502B91  50                        PUSH EAX
00502B92  E8 92 06 F0 FF            CALL 0x00403229
00502B97  8A 86 B6 0B 00 00         MOV AL,byte ptr [ESI + 0xbb6]
00502B9D  83 C4 1C                  ADD ESP,0x1c
00502BA0  32 DB                     XOR BL,BL
00502BA2  A8 FE                     TEST AL,0xfe
00502BA4  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
00502BA7  76 47                     JBE 0x00502bf0
LAB_00502ba9:
00502BA9  8B 8E B6 02 00 00         MOV ECX,dword ptr [ESI + 0x2b6]
00502BAF  6A 03                     PUSH 0x3
00502BB1  51                        PUSH ECX
00502BB2  E8 E9 87 20 00            CALL 0x0070b3a0
00502BB7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00502BBA  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00502BC0  81 E2 FF 00 00 00         AND EDX,0xff
00502BC6  50                        PUSH EAX
00502BC7  6A 01                     PUSH 0x1
00502BC9  68 87 00 00 00            PUSH 0x87
00502BCE  8D 04 95 3F 00 00 00      LEA EAX,[EDX*0x4 + 0x3f]
00502BD5  50                        PUSH EAX
00502BD6  51                        PUSH ECX
00502BD7  E8 4D 06 F0 FF            CALL 0x00403229
00502BDC  8A 96 B6 0B 00 00         MOV DL,byte ptr [ESI + 0xbb6]
00502BE2  83 C4 1C                  ADD ESP,0x1c
00502BE5  FE C3                     INC BL
00502BE7  D0 EA                     SHR DL,0x1
00502BE9  3A DA                     CMP BL,DL
00502BEB  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
00502BEE  72 B9                     JC 0x00502ba9
LAB_00502bf0:
00502BF0  80 FB 14                  CMP BL,0x14
00502BF3  0F 83 16 01 00 00         JNC 0x00502d0f
00502BF9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00502BFC  BB 14 00 00 00            MOV EBX,0x14
00502C01  25 FF 00 00 00            AND EAX,0xff
00502C06  2B D8                     SUB EBX,EAX
00502C08  8D 3C 85 3F 00 00 00      LEA EDI,[EAX*0x4 + 0x3f]
LAB_00502c0f:
00502C0F  8B 86 B6 02 00 00         MOV EAX,dword ptr [ESI + 0x2b6]
00502C15  6A 00                     PUSH 0x0
00502C17  50                        PUSH EAX
00502C18  E8 83 87 20 00            CALL 0x0070b3a0
00502C1D  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00502C23  50                        PUSH EAX
00502C24  6A 01                     PUSH 0x1
00502C26  68 87 00 00 00            PUSH 0x87
00502C2B  57                        PUSH EDI
00502C2C  51                        PUSH ECX
00502C2D  E8 F7 05 F0 FF            CALL 0x00403229
00502C32  83 C4 1C                  ADD ESP,0x1c
00502C35  83 C7 04                  ADD EDI,0x4
00502C38  4B                        DEC EBX
00502C39  75 D4                     JNZ 0x00502c0f
00502C3B  E9 CF 00 00 00            JMP 0x00502d0f
switchD_00502b6c::caseD_1b:
00502C40  80 BE CD 0B 00 00 FF      CMP byte ptr [ESI + 0xbcd],0xff
00502C47  0F 84 C2 00 00 00         JZ 0x00502d0f
00502C4D  8B 96 B2 02 00 00         MOV EDX,dword ptr [ESI + 0x2b2]
00502C53  6A 03                     PUSH 0x3
00502C55  52                        PUSH EDX
00502C56  E8 45 87 20 00            CALL 0x0070b3a0
00502C5B  50                        PUSH EAX
00502C5C  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00502C62  6A 01                     PUSH 0x1
00502C64  68 84 00 00 00            PUSH 0x84
00502C69  6A 3C                     PUSH 0x3c
00502C6B  50                        PUSH EAX
00502C6C  E8 B8 05 F0 FF            CALL 0x00403229
00502C71  8A 86 CD 0B 00 00         MOV AL,byte ptr [ESI + 0xbcd]
00502C77  83 C4 1C                  ADD ESP,0x1c
00502C7A  32 DB                     XOR BL,BL
00502C7C  84 C0                     TEST AL,AL
00502C7E  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
00502C81  76 45                     JBE 0x00502cc8
LAB_00502c83:
00502C83  8B 8E B6 02 00 00         MOV ECX,dword ptr [ESI + 0x2b6]
00502C89  6A 01                     PUSH 0x1
00502C8B  51                        PUSH ECX
00502C8C  E8 0F 87 20 00            CALL 0x0070b3a0
00502C91  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00502C94  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00502C9A  81 E2 FF 00 00 00         AND EDX,0xff
00502CA0  50                        PUSH EAX
00502CA1  6A 01                     PUSH 0x1
00502CA3  68 87 00 00 00            PUSH 0x87
00502CA8  8D 04 95 3F 00 00 00      LEA EAX,[EDX*0x4 + 0x3f]
00502CAF  50                        PUSH EAX
00502CB0  51                        PUSH ECX
00502CB1  E8 73 05 F0 FF            CALL 0x00403229
00502CB6  8A 86 CD 0B 00 00         MOV AL,byte ptr [ESI + 0xbcd]
00502CBC  83 C4 1C                  ADD ESP,0x1c
00502CBF  FE C3                     INC BL
00502CC1  3A D8                     CMP BL,AL
00502CC3  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
00502CC6  72 BB                     JC 0x00502c83
LAB_00502cc8:
00502CC8  80 FB 14                  CMP BL,0x14
00502CCB  73 42                     JNC 0x00502d0f
00502CCD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00502CD0  BB 14 00 00 00            MOV EBX,0x14
00502CD5  25 FF 00 00 00            AND EAX,0xff
00502CDA  2B D8                     SUB EBX,EAX
00502CDC  8D 3C 85 3F 00 00 00      LEA EDI,[EAX*0x4 + 0x3f]
LAB_00502ce3:
00502CE3  8B 96 B6 02 00 00         MOV EDX,dword ptr [ESI + 0x2b6]
00502CE9  6A 00                     PUSH 0x0
00502CEB  52                        PUSH EDX
00502CEC  E8 AF 86 20 00            CALL 0x0070b3a0
00502CF1  50                        PUSH EAX
00502CF2  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00502CF8  6A 01                     PUSH 0x1
00502CFA  68 87 00 00 00            PUSH 0x87
00502CFF  57                        PUSH EDI
00502D00  50                        PUSH EAX
00502D01  E8 23 05 F0 FF            CALL 0x00403229
00502D06  83 C4 1C                  ADD ESP,0x1c
00502D09  83 C7 04                  ADD EDI,0x4
00502D0C  4B                        DEC EBX
00502D0D  75 D4                     JNZ 0x00502ce3
switchD_00502b6c::caseD_1c:
00502D0F  8B 86 54 01 00 00         MOV EAX,dword ptr [ESI + 0x154]
00502D15  85 C0                     TEST EAX,EAX
00502D17  7C 19                     JL 0x00502d32
00502D19  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
00502D1F  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
00502D22  51                        PUSH ECX
00502D23  52                        PUSH EDX
00502D24  6A FF                     PUSH -0x1
00502D26  50                        PUSH EAX
00502D27  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00502D2C  50                        PUSH EAX
00502D2D  E8 0E 09 1B 00            CALL 0x006b3640
LAB_00502d32:
00502D32  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00502D35  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00502D3B  5F                        POP EDI
00502D3C  5E                        POP ESI
00502D3D  5B                        POP EBX
00502D3E  8B E5                     MOV ESP,EBP
00502D40  5D                        POP EBP
00502D41  C3                        RET
LAB_00502d42:
00502D42  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00502D45  68 00 26 7C 00            PUSH 0x7c2600
00502D4A  68 CC 4C 7A 00            PUSH 0x7a4ccc
00502D4F  56                        PUSH ESI
00502D50  6A 00                     PUSH 0x0
00502D52  68 ED 01 00 00            PUSH 0x1ed
00502D57  68 24 25 7C 00            PUSH 0x7c2524
00502D5C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00502D62  E8 69 A7 1A 00            CALL 0x006ad4d0
00502D67  83 C4 18                  ADD ESP,0x18
00502D6A  85 C0                     TEST EAX,EAX
00502D6C  74 01                     JZ 0x00502d6f
00502D6E  CC                        INT3
LAB_00502d6f:
00502D6F  68 ED 01 00 00            PUSH 0x1ed
00502D74  68 24 25 7C 00            PUSH 0x7c2524
00502D79  6A 00                     PUSH 0x0
00502D7B  56                        PUSH ESI
00502D7C  E8 BF 30 1A 00            CALL 0x006a5e40
00502D81  5F                        POP EDI
00502D82  5E                        POP ESI
00502D83  5B                        POP EBX
00502D84  8B E5                     MOV ESP,EBP
00502D86  5D                        POP EBP
00502D87  C3                        RET
