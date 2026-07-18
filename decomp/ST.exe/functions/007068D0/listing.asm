FUN_007068d0:
007068D0  55                        PUSH EBP
007068D1  8B EC                     MOV EBP,ESP
007068D3  81 EC 84 00 00 00         SUB ESP,0x84
007068D9  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
007068DC  53                        PUSH EBX
007068DD  56                        PUSH ESI
007068DE  83 F8 02                  CMP EAX,0x2
007068E1  57                        PUSH EDI
007068E2  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
007068EC  0F 8E 34 05 00 00         JLE 0x00706e26
007068F2  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
007068F5  83 F9 02                  CMP ECX,0x2
007068F8  0F 8E 28 05 00 00         JLE 0x00706e26
007068FE  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00706901  8D 7A 01                  LEA EDI,[EDX + 0x1]
00706904  BA 03 00 00 00            MOV EDX,0x3
00706909  3B F8                     CMP EDI,EAX
0070690B  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
0070690E  7C 05                     JL 0x00706915
00706910  8B FA                     MOV EDI,EDX
00706912  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
LAB_00706915:
00706915  3B F9                     CMP EDI,ECX
00706917  7C 05                     JL 0x0070691e
00706919  8B FA                     MOV EDI,EDX
0070691B  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
LAB_0070691e:
0070691E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00706921  8D B5 7C FF FF FF         LEA ESI,[EBP + 0xffffff7c]
00706927  C7 45 FC 1F 00 00 00      MOV dword ptr [EBP + -0x4],0x1f
LAB_0070692e:
0070692E  E8 8D 7D 02 00            CALL 0x0072e6c0
00706933  99                        CDQ
00706934  F7 7D 28                  IDIV dword ptr [EBP + 0x28]
00706937  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0070693A  E8 81 7D 02 00            CALL 0x0072e6c0
0070693F  99                        CDQ
00706940  F7 FF                     IDIV EDI
00706942  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00706945  83 C6 04                  ADD ESI,0x4
00706948  0F AF D3                  IMUL EDX,EBX
0070694B  03 D0                     ADD EDX,EAX
0070694D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00706950  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
00706953  48                        DEC EAX
00706954  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00706957  75 D5                     JNZ 0x0070692e
00706959  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0070695C  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0070695F  B8 01 00 00 00            MOV EAX,0x1
00706964  33 F6                     XOR ESI,ESI
00706966  2B C2                     SUB EAX,EDX
00706968  03 C8                     ADD ECX,EAX
0070696A  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0070696D  2B C7                     SUB EAX,EDI
0070696F  89 4D 30                  MOV dword ptr [EBP + 0x30],ECX
00706972  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00706975  0F 88 AB 04 00 00         JS 0x00706e26
0070697B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0070697E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00706981:
00706981  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00706984  33 D2                     XOR EDX,EDX
00706986  8A 10                     MOV DL,byte ptr [EAX]
00706988  40                        INC EAX
00706989  85 D2                     TEST EDX,EDX
0070698B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
0070698E  0F 84 7B 04 00 00         JZ 0x00706e0f
00706994  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00706997  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_0070699a:
0070699A  F6 C2 80                  TEST DL,0x80
0070699D  8B C2                     MOV EAX,EDX
0070699F  74 36                     JZ 0x007069d7
007069A1  83 E0 3F                  AND EAX,0x3f
007069A4  3B C3                     CMP EAX,EBX
007069A6  7F 45                     JG 0x007069ed
007069A8  F6 C2 40                  TEST DL,0x40
007069AB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007069AE  74 13                     JZ 0x007069c3
007069B0  42                        INC EDX
007069B1  2B D8                     SUB EBX,EAX
007069B3  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
007069B6  33 D2                     XOR EDX,EDX
007069B8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007069BB  8A 10                     MOV DL,byte ptr [EAX]
007069BD  40                        INC EAX
007069BE  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
007069C1  EB D7                     JMP 0x0070699a
LAB_007069c3:
007069C3  03 D0                     ADD EDX,EAX
007069C5  2B D8                     SUB EBX,EAX
007069C7  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
007069CA  33 D2                     XOR EDX,EDX
007069CC  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007069CF  8A 10                     MOV DL,byte ptr [EAX]
007069D1  40                        INC EAX
007069D2  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
007069D5  EB C3                     JMP 0x0070699a
LAB_007069d7:
007069D7  83 E0 7F                  AND EAX,0x7f
007069DA  3B C3                     CMP EAX,EBX
007069DC  7F 0F                     JG 0x007069ed
007069DE  2B D8                     SUB EBX,EAX
007069E0  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007069E3  33 D2                     XOR EDX,EDX
007069E5  8A 10                     MOV DL,byte ptr [EAX]
007069E7  40                        INC EAX
007069E8  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
007069EB  EB AD                     JMP 0x0070699a
LAB_007069ed:
007069ED  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
007069F0  2B C3                     SUB EAX,EBX
007069F2  8B DA                     MOV EBX,EDX
007069F4  81 E3 C0 00 00 00         AND EBX,0xc0
007069FA  80 FB 80                  CMP BL,0x80
007069FD  75 0E                     JNZ 0x00706a0d
007069FF  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
00706A02  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706A05  03 DF                     ADD EBX,EDI
00706A07  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706A0A  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_00706a0d:
00706A0D  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00706A10  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00706A13  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00706A16  85 DB                     TEST EBX,EBX
00706A18  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00706A1B  0F 84 CE 01 00 00         JZ 0x00706bef
00706A21  3B C3                     CMP EAX,EBX
00706A23  0F 8F F8 00 00 00         JG 0x00706b21
00706A29  8B DA                     MOV EBX,EDX
00706A2B  81 E3 80 00 00 00         AND EBX,0x80
00706A31  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00706A34  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
LAB_00706a37:
00706A37  2B D8                     SUB EBX,EAX
00706A39  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00706A3C  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00706A3F  85 DB                     TEST EBX,EBX
00706A41  0F 84 94 00 00 00         JZ 0x00706adb
00706A47  F6 C2 40                  TEST DL,0x40
00706A4A  74 49                     JZ 0x00706a95
00706A4C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706A4F  43                        INC EBX
00706A50  48                        DEC EAX
00706A51  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706A54  0F 88 86 00 00 00         JS 0x00706ae0
00706A5A  40                        INC EAX
00706A5B  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00706a5e:
00706A5E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706A61  33 C0                     XOR EAX,EAX
00706A63  66 8B 07                  MOV AX,word ptr [EDI]
00706A66  3B D8                     CMP EBX,EAX
00706A68  77 1C                     JA 0x00706a86
00706A6A  8B 84 B5 7C FF FF FF      MOV EAX,dword ptr [EBP + ESI*0x4 + 0xffffff7c]
00706A71  33 DB                     XOR EBX,EBX
00706A73  46                        INC ESI
00706A74  8A 1C 08                  MOV BL,byte ptr [EAX + ECX*0x1]
00706A77  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00706A7A  83 FE 1F                  CMP ESI,0x1f
00706A7D  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
00706A80  88 01                     MOV byte ptr [ECX],AL
00706A82  7C 02                     JL 0x00706a86
00706A84  33 F6                     XOR ESI,ESI
LAB_00706a86:
00706A86  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00706A89  83 C7 02                  ADD EDI,0x2
00706A8C  41                        INC ECX
00706A8D  48                        DEC EAX
00706A8E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00706A91  75 CB                     JNZ 0x00706a5e
00706A93  EB 4B                     JMP 0x00706ae0
LAB_00706a95:
00706A95  48                        DEC EAX
00706A96  78 48                     JS 0x00706ae0
00706A98  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706A9B  40                        INC EAX
00706A9C  03 D8                     ADD EBX,EAX
00706A9E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00706AA1  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_00706aa4:
00706AA4  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706AA7  33 C0                     XOR EAX,EAX
00706AA9  66 8B 07                  MOV AX,word ptr [EDI]
00706AAC  3B D8                     CMP EBX,EAX
00706AAE  77 1C                     JA 0x00706acc
00706AB0  8B 84 B5 7C FF FF FF      MOV EAX,dword ptr [EBP + ESI*0x4 + 0xffffff7c]
00706AB7  33 DB                     XOR EBX,EBX
00706AB9  46                        INC ESI
00706ABA  8A 1C 08                  MOV BL,byte ptr [EAX + ECX*0x1]
00706ABD  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00706AC0  83 FE 1F                  CMP ESI,0x1f
00706AC3  8A 04 03                  MOV AL,byte ptr [EBX + EAX*0x1]
00706AC6  88 01                     MOV byte ptr [ECX],AL
00706AC8  7C 02                     JL 0x00706acc
00706ACA  33 F6                     XOR ESI,ESI
LAB_00706acc:
00706ACC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00706ACF  83 C7 02                  ADD EDI,0x2
00706AD2  41                        INC ECX
00706AD3  48                        DEC EAX
00706AD4  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00706AD7  75 CB                     JNZ 0x00706aa4
00706AD9  EB 05                     JMP 0x00706ae0
LAB_00706adb:
00706ADB  03 C8                     ADD ECX,EAX
00706ADD  8D 3C 47                  LEA EDI,[EDI + EAX*0x2]
LAB_00706ae0:
00706AE0  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00706AE3  85 DB                     TEST EBX,EBX
00706AE5  7E 33                     JLE 0x00706b1a
00706AE7  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706AEA  33 D2                     XOR EDX,EDX
00706AEC  8A 13                     MOV DL,byte ptr [EBX]
00706AEE  8B C2                     MOV EAX,EDX
00706AF0  25 80 00 00 00            AND EAX,0x80
00706AF5  43                        INC EBX
00706AF6  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00706AF9  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706AFC  85 C0                     TEST EAX,EAX
00706AFE  8B C2                     MOV EAX,EDX
00706B00  74 05                     JZ 0x00706b07
00706B02  83 E0 3F                  AND EAX,0x3f
00706B05  EB 03                     JMP 0x00706b0a
LAB_00706b07:
00706B07  83 E0 7F                  AND EAX,0x7f
LAB_00706b0a:
00706B0A  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00706B0D  3B C3                     CMP EAX,EBX
00706B0F  0F 8E 22 FF FF FF         JLE 0x00706a37
00706B15  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706B18  EB 0A                     JMP 0x00706b24
LAB_00706b1a:
00706B1A  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706B1D  33 C0                     XOR EAX,EAX
00706B1F  EB 03                     JMP 0x00706b24
LAB_00706b21:
00706B21  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
LAB_00706b24:
00706B24  2B C3                     SUB EAX,EBX
00706B26  F6 C2 80                  TEST DL,0x80
00706B29  0F 84 6C 02 00 00         JZ 0x00706d9b
00706B2F  F6 C2 40                  TEST DL,0x40
00706B32  74 60                     JZ 0x00706b94
00706B34  85 DB                     TEST EBX,EBX
00706B36  0F 8E 67 02 00 00         JLE 0x00706da3
00706B3C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706B3F  43                        INC EBX
00706B40  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706B43  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00706B46  4B                        DEC EBX
00706B47  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00706B4A  0F 88 53 02 00 00         JS 0x00706da3
00706B50  43                        INC EBX
00706B51  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_00706b54:
00706B54  33 DB                     XOR EBX,EBX
00706B56  66 8B 1F                  MOV BX,word ptr [EDI]
00706B59  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00706B5C  3B FB                     CMP EDI,EBX
00706B5E  77 1C                     JA 0x00706b7c
00706B60  8B BC B5 7C FF FF FF      MOV EDI,dword ptr [EBP + ESI*0x4 + 0xffffff7c]
00706B67  33 DB                     XOR EBX,EBX
00706B69  46                        INC ESI
00706B6A  8A 1C 0F                  MOV BL,byte ptr [EDI + ECX*0x1]
00706B6D  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
00706B70  83 FE 1F                  CMP ESI,0x1f
00706B73  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706B76  88 19                     MOV byte ptr [ECX],BL
00706B78  7C 02                     JL 0x00706b7c
00706B7A  33 F6                     XOR ESI,ESI
LAB_00706b7c:
00706B7C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706B7F  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00706B82  83 C7 02                  ADD EDI,0x2
00706B85  41                        INC ECX
00706B86  4B                        DEC EBX
00706B87  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706B8A  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00706B8D  75 C5                     JNZ 0x00706b54
00706B8F  E9 0F 02 00 00            JMP 0x00706da3
LAB_00706b94:
00706B94  4B                        DEC EBX
00706B95  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00706B98  0F 88 05 02 00 00         JS 0x00706da3
00706B9E  8B FB                     MOV EDI,EBX
00706BA0  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706BA3  47                        INC EDI
00706BA4  03 DF                     ADD EBX,EDI
00706BA6  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
00706BA9  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_00706bac:
00706BAC  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00706BAF  33 FF                     XOR EDI,EDI
00706BB1  66 8B 3B                  MOV DI,word ptr [EBX]
00706BB4  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706BB7  3B DF                     CMP EBX,EDI
00706BB9  77 1C                     JA 0x00706bd7
00706BBB  8B BC B5 7C FF FF FF      MOV EDI,dword ptr [EBP + ESI*0x4 + 0xffffff7c]
00706BC2  33 DB                     XOR EBX,EBX
00706BC4  46                        INC ESI
00706BC5  8A 1C 0F                  MOV BL,byte ptr [EDI + ECX*0x1]
00706BC8  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
00706BCB  83 FE 1F                  CMP ESI,0x1f
00706BCE  8A 1C 3B                  MOV BL,byte ptr [EBX + EDI*0x1]
00706BD1  88 19                     MOV byte ptr [ECX],BL
00706BD3  7C 02                     JL 0x00706bd7
00706BD5  33 F6                     XOR ESI,ESI
LAB_00706bd7:
00706BD7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706BDA  83 C7 02                  ADD EDI,0x2
00706BDD  41                        INC ECX
00706BDE  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706BE1  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
00706BE4  4F                        DEC EDI
00706BE5  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
00706BE8  75 C2                     JNZ 0x00706bac
00706BEA  E9 B4 01 00 00            JMP 0x00706da3
LAB_00706bef:
00706BEF  3B C3                     CMP EAX,EBX
00706BF1  0F 8F F0 00 00 00         JG 0x00706ce7
00706BF7  8B DA                     MOV EBX,EDX
00706BF9  81 E3 80 00 00 00         AND EBX,0x80
LAB_00706bff:
00706BFF  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
00706C02  2B F8                     SUB EDI,EAX
00706C04  85 DB                     TEST EBX,EBX
00706C06  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
00706C09  0F 84 90 00 00 00         JZ 0x00706c9f
00706C0F  F6 C2 40                  TEST DL,0x40
00706C12  74 47                     JZ 0x00706c5b
00706C14  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706C17  43                        INC EBX
00706C18  48                        DEC EAX
00706C19  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706C1C  0F 88 8A 00 00 00         JS 0x00706cac
00706C22  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706C25  40                        INC EAX
00706C26  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00706C29  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
LAB_00706c2c:
00706C2C  33 DB                     XOR EBX,EBX
00706C2E  66 8B 1F                  MOV BX,word ptr [EDI]
00706C31  3B C3                     CMP EAX,EBX
00706C33  77 14                     JA 0x00706c49
00706C35  8B 9C B5 7C FF FF FF      MOV EBX,dword ptr [EBP + ESI*0x4 + 0xffffff7c]
00706C3C  46                        INC ESI
00706C3D  83 FE 1F                  CMP ESI,0x1f
00706C40  8A 1C 0B                  MOV BL,byte ptr [EBX + ECX*0x1]
00706C43  88 19                     MOV byte ptr [ECX],BL
00706C45  7C 02                     JL 0x00706c49
00706C47  33 F6                     XOR ESI,ESI
LAB_00706c49:
00706C49  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00706C4C  83 C7 02                  ADD EDI,0x2
00706C4F  41                        INC ECX
00706C50  4B                        DEC EBX
00706C51  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00706C54  75 D6                     JNZ 0x00706c2c
00706C56  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706C59  EB 54                     JMP 0x00706caf
LAB_00706c5b:
00706C5B  48                        DEC EAX
00706C5C  78 4E                     JS 0x00706cac
00706C5E  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00706C61  40                        INC EAX
00706C62  03 F8                     ADD EDI,EAX
00706C64  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00706C67  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00706C6A  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00706C6D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_00706c70:
00706C70  33 DB                     XOR EBX,EBX
00706C72  66 8B 1F                  MOV BX,word ptr [EDI]
00706C75  3B C3                     CMP EAX,EBX
00706C77  77 14                     JA 0x00706c8d
00706C79  8B 9C B5 7C FF FF FF      MOV EBX,dword ptr [EBP + ESI*0x4 + 0xffffff7c]
00706C80  46                        INC ESI
00706C81  83 FE 1F                  CMP ESI,0x1f
00706C84  8A 1C 0B                  MOV BL,byte ptr [EBX + ECX*0x1]
00706C87  88 19                     MOV byte ptr [ECX],BL
00706C89  7C 02                     JL 0x00706c8d
00706C8B  33 F6                     XOR ESI,ESI
LAB_00706c8d:
00706C8D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00706C90  83 C7 02                  ADD EDI,0x2
00706C93  41                        INC ECX
00706C94  4B                        DEC EBX
00706C95  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00706C98  75 D6                     JNZ 0x00706c70
00706C9A  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706C9D  EB 10                     JMP 0x00706caf
LAB_00706c9f:
00706C9F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706CA2  03 C8                     ADD ECX,EAX
00706CA4  8D 3C 47                  LEA EDI,[EDI + EAX*0x2]
00706CA7  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706CAA  EB 03                     JMP 0x00706caf
LAB_00706cac:
00706CAC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_00706caf:
00706CAF  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00706CB2  85 C0                     TEST EAX,EAX
00706CB4  7E 2F                     JLE 0x00706ce5
00706CB6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00706CB9  33 D2                     XOR EDX,EDX
00706CBB  8A 10                     MOV DL,byte ptr [EAX]
00706CBD  8B DA                     MOV EBX,EDX
00706CBF  81 E3 80 00 00 00         AND EBX,0x80
00706CC5  40                        INC EAX
00706CC6  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00706CC9  8B C2                     MOV EAX,EDX
00706CCB  85 DB                     TEST EBX,EBX
00706CCD  74 05                     JZ 0x00706cd4
00706CCF  83 E0 3F                  AND EAX,0x3f
00706CD2  EB 03                     JMP 0x00706cd7
LAB_00706cd4:
00706CD4  83 E0 7F                  AND EAX,0x7f
LAB_00706cd7:
00706CD7  3B 45 28                  CMP EAX,dword ptr [EBP + 0x28]
00706CDA  0F 8E 1F FF FF FF         JLE 0x00706bff
00706CE0  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706CE3  EB 02                     JMP 0x00706ce7
LAB_00706ce5:
00706CE5  33 C0                     XOR EAX,EAX
LAB_00706ce7:
00706CE7  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00706CEA  2B C3                     SUB EAX,EBX
00706CEC  F6 C2 80                  TEST DL,0x80
00706CEF  0F 84 A6 00 00 00         JZ 0x00706d9b
00706CF5  F6 C2 40                  TEST DL,0x40
00706CF8  74 55                     JZ 0x00706d4f
00706CFA  85 DB                     TEST EBX,EBX
00706CFC  0F 8E A1 00 00 00         JLE 0x00706da3
00706D02  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706D05  43                        INC EBX
00706D06  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00706D09  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00706D0C  4B                        DEC EBX
00706D0D  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00706D10  0F 88 8D 00 00 00         JS 0x00706da3
00706D16  43                        INC EBX
00706D17  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_00706d1a:
00706D1A  33 DB                     XOR EBX,EBX
00706D1C  66 8B 1F                  MOV BX,word ptr [EDI]
00706D1F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00706D22  3B FB                     CMP EDI,EBX
00706D24  77 14                     JA 0x00706d3a
00706D26  8B BC B5 7C FF FF FF      MOV EDI,dword ptr [EBP + ESI*0x4 + 0xffffff7c]
00706D2D  46                        INC ESI
00706D2E  83 FE 1F                  CMP ESI,0x1f
00706D31  8A 1C 0F                  MOV BL,byte ptr [EDI + ECX*0x1]
00706D34  88 19                     MOV byte ptr [ECX],BL
00706D36  7C 02                     JL 0x00706d3a
00706D38  33 F6                     XOR ESI,ESI
LAB_00706d3a:
00706D3A  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706D3D  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00706D40  83 C7 02                  ADD EDI,0x2
00706D43  41                        INC ECX
00706D44  4B                        DEC EBX
00706D45  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706D48  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00706D4B  75 CD                     JNZ 0x00706d1a
00706D4D  EB 54                     JMP 0x00706da3
LAB_00706d4f:
00706D4F  4B                        DEC EBX
00706D50  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00706D53  78 4E                     JS 0x00706da3
00706D55  8B FB                     MOV EDI,EBX
00706D57  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706D5A  47                        INC EDI
00706D5B  03 DF                     ADD EBX,EDI
00706D5D  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
00706D60  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_00706d63:
00706D63  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00706D66  33 FF                     XOR EDI,EDI
00706D68  66 8B 3B                  MOV DI,word ptr [EBX]
00706D6B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00706D6E  3B DF                     CMP EBX,EDI
00706D70  77 14                     JA 0x00706d86
00706D72  8B BC B5 7C FF FF FF      MOV EDI,dword ptr [EBP + ESI*0x4 + 0xffffff7c]
00706D79  46                        INC ESI
00706D7A  83 FE 1F                  CMP ESI,0x1f
00706D7D  8A 1C 0F                  MOV BL,byte ptr [EDI + ECX*0x1]
00706D80  88 19                     MOV byte ptr [ECX],BL
00706D82  7C 02                     JL 0x00706d86
00706D84  33 F6                     XOR ESI,ESI
LAB_00706d86:
00706D86  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706D89  83 C7 02                  ADD EDI,0x2
00706D8C  41                        INC ECX
00706D8D  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706D90  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
00706D93  4F                        DEC EDI
00706D94  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
00706D97  75 CA                     JNZ 0x00706d63
00706D99  EB 08                     JMP 0x00706da3
LAB_00706d9b:
00706D9B  8D 3C 5F                  LEA EDI,[EDI + EBX*0x2]
00706D9E  03 CB                     ADD ECX,EBX
00706DA0  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
LAB_00706da3:
00706DA3  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00706DA6  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00706DA9  2B FB                     SUB EDI,EBX
00706DAB  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00706DAE  2B FB                     SUB EDI,EBX
00706DB0  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00706DB3  3B C7                     CMP EAX,EDI
00706DB5  7D 2E                     JGE 0x00706de5
LAB_00706db7:
00706DB7  81 E2 C0 00 00 00         AND EDX,0xc0
00706DBD  2B F8                     SUB EDI,EAX
00706DBF  80 FA 80                  CMP DL,0x80
00706DC2  75 02                     JNZ 0x00706dc6
00706DC4  03 D8                     ADD EBX,EAX
LAB_00706dc6:
00706DC6  33 D2                     XOR EDX,EDX
00706DC8  8A 13                     MOV DL,byte ptr [EBX]
00706DCA  8B C2                     MOV EAX,EDX
00706DCC  24 80                     AND AL,0x80
00706DCE  43                        INC EBX
00706DCF  84 C0                     TEST AL,AL
00706DD1  8B C2                     MOV EAX,EDX
00706DD3  74 09                     JZ 0x00706dde
00706DD5  83 E0 3F                  AND EAX,0x3f
00706DD8  F6 C2 40                  TEST DL,0x40
00706DDB  74 01                     JZ 0x00706dde
00706DDD  43                        INC EBX
LAB_00706dde:
00706DDE  3B C7                     CMP EAX,EDI
00706DE0  7C D5                     JL 0x00706db7
00706DE2  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_00706de5:
00706DE5  81 E2 C0 00 00 00         AND EDX,0xc0
00706DEB  80 FA 80                  CMP DL,0x80
00706DEE  75 05                     JNZ 0x00706df5
00706DF0  03 DF                     ADD EBX,EDI
00706DF2  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_00706df5:
00706DF5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00706DF8  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
00706DFB  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00706DFE  8B D3                     MOV EDX,EBX
00706E00  2B D0                     SUB EDX,EAX
00706E02  03 C0                     ADD EAX,EAX
00706E04  03 CA                     ADD ECX,EDX
00706E06  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00706E09  2B D0                     SUB EDX,EAX
00706E0B  03 FA                     ADD EDI,EDX
00706E0D  EB 07                     JMP 0x00706e16
LAB_00706e0f:
00706E0F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00706E12  03 CB                     ADD ECX,EBX
00706E14  03 F8                     ADD EDI,EAX
LAB_00706e16:
00706E16  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00706E19  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00706E1C  48                        DEC EAX
00706E1D  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00706E20  0F 89 5B FB FF FF         JNS 0x00706981
LAB_00706e26:
00706E26  5F                        POP EDI
00706E27  5E                        POP ESI
00706E28  5B                        POP EBX
00706E29  8B E5                     MOV ESP,EBP
00706E2B  5D                        POP EBP
00706E2C  C2 30 00                  RET 0x30
