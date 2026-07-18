FUN_004248d0:
004248D0  55                        PUSH EBP
004248D1  8B EC                     MOV EBP,ESP
004248D3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004248D6  53                        PUSH EBX
004248D7  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
004248DA  56                        PUSH ESI
004248DB  F6 C3 02                  TEST BL,0x2
004248DE  57                        PUSH EDI
004248DF  74 01                     JZ 0x004248e2
004248E1  40                        INC EAX
LAB_004248e2:
004248E2  66 8B 91 74 03 00 00      MOV DX,word ptr [ECX + 0x374]
004248E9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004248EC  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004248EF  66 03 D0                  ADD DX,AX
004248F2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004248F5  66 89 14 F7               MOV word ptr [EDI + ESI*0x8],DX
004248F9  F6 C3 01                  TEST BL,0x1
004248FC  8D 50 01                  LEA EDX,[EAX + 0x1]
004248FF  75 02                     JNZ 0x00424903
00424901  8B D0                     MOV EDX,EAX
LAB_00424903:
00424903  66 03 91 78 03 00 00      ADD DX,word ptr [ECX + 0x378]
0042490A  66 89 54 F7 02            MOV word ptr [EDI + ESI*0x8 + 0x2],DX
0042490F  66 89 5C F7 06            MOV word ptr [EDI + ESI*0x8 + 0x6],BX
00424914  8B B9 7C 03 00 00         MOV EDI,dword ptr [ECX + 0x37c]
0042491A  33 D2                     XOR EDX,EDX
0042491C  8B F7                     MOV ESI,EDI
0042491E  0F AF F0                  IMUL ESI,EAX
00424921  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00424924  03 F0                     ADD ESI,EAX
00424926  8B 81 90 03 00 00         MOV EAX,dword ptr [ECX + 0x390]
0042492C  83 FB 03                  CMP EBX,0x3
0042492F  8A 14 30                  MOV DL,byte ptr [EAX + ESI*0x1]
00424932  0F 87 A6 01 00 00         JA 0x00424ade
switchD_00424938::switchD:
00424938  FF 24 9D E0 4C 42 00      JMP dword ptr [EBX*0x4 + 0x424ce0]
switchD_00424938::caseD_0:
0042493F  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00424942  85 DB                     TEST EBX,EBX
00424944  7E 3F                     JLE 0x00424985
00424946  8B D8                     MOV EBX,EAX
00424948  2B DF                     SUB EBX,EDI
0042494A  8D 3C 33                  LEA EDI,[EBX + ESI*0x1]
0042494D  33 DB                     XOR EBX,EBX
0042494F  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
00424952  8A 1F                     MOV BL,byte ptr [EDI]
00424954  3B D3                     CMP EDX,EBX
00424956  7D 0B                     JGE 0x00424963
00424958  8B FB                     MOV EDI,EBX
0042495A  2B FA                     SUB EDI,EDX
0042495C  83 FF 0A                  CMP EDI,0xa
0042495F  7F 02                     JG 0x00424963
00424961  8B D3                     MOV EDX,EBX
LAB_00424963:
00424963  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00424966  85 FF                     TEST EDI,EDI
00424968  0F 8E 70 01 00 00         JLE 0x00424ade
0042496E  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00424971  33 DB                     XOR EBX,EBX
00424973  8A 5F FF                  MOV BL,byte ptr [EDI + -0x1]
00424976  8B FB                     MOV EDI,EBX
00424978  3B D7                     CMP EDX,EDI
0042497A  7D 09                     JGE 0x00424985
0042497C  2B DA                     SUB EBX,EDX
0042497E  83 FB 0A                  CMP EBX,0xa
00424981  7F 02                     JG 0x00424985
00424983  8B D7                     MOV EDX,EDI
LAB_00424985:
00424985  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00424988  85 FF                     TEST EDI,EDI
0042498A  0F 8E 4E 01 00 00         JLE 0x00424ade
00424990  33 DB                     XOR EBX,EBX
00424992  8A 5C 30 FF               MOV BL,byte ptr [EAX + ESI*0x1 + -0x1]
00424996  E9 C5 00 00 00            JMP 0x00424a60
switchD_00424938::caseD_1:
0042499B  8B 81 70 03 00 00         MOV EAX,dword ptr [ECX + 0x370]
004249A1  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004249A4  48                        DEC EAX
004249A5  3B D8                     CMP EBX,EAX
004249A7  7D 3D                     JGE 0x004249e6
004249A9  8B 81 90 03 00 00         MOV EAX,dword ptr [ECX + 0x390]
004249AF  03 C7                     ADD EAX,EDI
004249B1  8D 3C 30                  LEA EDI,[EAX + ESI*0x1]
004249B4  33 C0                     XOR EAX,EAX
004249B6  8A 07                     MOV AL,byte ptr [EDI]
004249B8  3B D0                     CMP EDX,EAX
004249BA  7D 0B                     JGE 0x004249c7
004249BC  8B D8                     MOV EBX,EAX
004249BE  2B DA                     SUB EBX,EDX
004249C0  83 FB 0A                  CMP EBX,0xa
004249C3  7F 02                     JG 0x004249c7
004249C5  8B D0                     MOV EDX,EAX
LAB_004249c7:
004249C7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004249CA  85 C0                     TEST EAX,EAX
004249CC  0F 8E 0C 01 00 00         JLE 0x00424ade
004249D2  33 C0                     XOR EAX,EAX
004249D4  8A 47 FF                  MOV AL,byte ptr [EDI + -0x1]
004249D7  3B D0                     CMP EDX,EAX
004249D9  7D 0B                     JGE 0x004249e6
004249DB  8B F8                     MOV EDI,EAX
004249DD  2B FA                     SUB EDI,EDX
004249DF  83 FF 0A                  CMP EDI,0xa
004249E2  7F 02                     JG 0x004249e6
004249E4  8B D0                     MOV EDX,EAX
LAB_004249e6:
004249E6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004249E9  85 C0                     TEST EAX,EAX
004249EB  0F 8E ED 00 00 00         JLE 0x00424ade
004249F1  8B B9 90 03 00 00         MOV EDI,dword ptr [ECX + 0x390]
004249F7  33 C0                     XOR EAX,EAX
004249F9  8A 44 37 FF               MOV AL,byte ptr [EDI + ESI*0x1 + -0x1]
004249FD  EB 63                     JMP 0x00424a62
switchD_00424938::caseD_2:
004249FF  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00424A02  85 DB                     TEST EBX,EBX
00424A04  7E 42                     JLE 0x00424a48
00424A06  8B D8                     MOV EBX,EAX
00424A08  2B DF                     SUB EBX,EDI
00424A0A  8D 3C 33                  LEA EDI,[EBX + ESI*0x1]
00424A0D  33 DB                     XOR EBX,EBX
00424A0F  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
00424A12  8A 1F                     MOV BL,byte ptr [EDI]
00424A14  8B FB                     MOV EDI,EBX
00424A16  3B D7                     CMP EDX,EDI
00424A18  7D 09                     JGE 0x00424a23
00424A1A  2B DA                     SUB EBX,EDX
00424A1C  83 FB 0A                  CMP EBX,0xa
00424A1F  7F 02                     JG 0x00424a23
00424A21  8B D7                     MOV EDX,EDI
LAB_00424a23:
00424A23  8B B9 70 03 00 00         MOV EDI,dword ptr [ECX + 0x370]
00424A29  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00424A2C  4F                        DEC EDI
00424A2D  3B DF                     CMP EBX,EDI
00424A2F  7D 17                     JGE 0x00424a48
00424A31  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00424A34  33 DB                     XOR EBX,EBX
00424A36  8A 5F 01                  MOV BL,byte ptr [EDI + 0x1]
00424A39  8B FB                     MOV EDI,EBX
00424A3B  3B D7                     CMP EDX,EDI
00424A3D  7D 09                     JGE 0x00424a48
00424A3F  2B DA                     SUB EBX,EDX
00424A41  83 FB 0A                  CMP EBX,0xa
00424A44  7F 02                     JG 0x00424a48
00424A46  8B D7                     MOV EDX,EDI
LAB_00424a48:
00424A48  8B B9 70 03 00 00         MOV EDI,dword ptr [ECX + 0x370]
00424A4E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00424A51  4F                        DEC EDI
00424A52  3B DF                     CMP EBX,EDI
00424A54  0F 8D 84 00 00 00         JGE 0x00424ade
00424A5A  33 DB                     XOR EBX,EBX
00424A5C  8A 5C 30 01               MOV BL,byte ptr [EAX + ESI*0x1 + 0x1]
LAB_00424a60:
00424A60  8B C3                     MOV EAX,EBX
LAB_00424a62:
00424A62  3B D0                     CMP EDX,EAX
00424A64  7D 78                     JGE 0x00424ade
00424A66  8B F8                     MOV EDI,EAX
00424A68  2B FA                     SUB EDI,EDX
00424A6A  83 FF 0A                  CMP EDI,0xa
00424A6D  7F 6F                     JG 0x00424ade
00424A6F  EB 6B                     JMP 0x00424adc
switchD_00424938::caseD_3:
00424A71  8B 81 70 03 00 00         MOV EAX,dword ptr [ECX + 0x370]
00424A77  8D 58 FF                  LEA EBX,[EAX + -0x1]
00424A7A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00424A7D  3B C3                     CMP EAX,EBX
00424A7F  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00424A82  7D 3A                     JGE 0x00424abe
00424A84  8B 81 90 03 00 00         MOV EAX,dword ptr [ECX + 0x390]
00424A8A  03 C7                     ADD EAX,EDI
00424A8C  8D 3C 30                  LEA EDI,[EAX + ESI*0x1]
00424A8F  33 C0                     XOR EAX,EAX
00424A91  8A 07                     MOV AL,byte ptr [EDI]
00424A93  3B D0                     CMP EDX,EAX
00424A95  7D 0E                     JGE 0x00424aa5
00424A97  8B D8                     MOV EBX,EAX
00424A99  2B DA                     SUB EBX,EDX
00424A9B  83 FB 0A                  CMP EBX,0xa
00424A9E  7F 02                     JG 0x00424aa2
00424AA0  8B D0                     MOV EDX,EAX
LAB_00424aa2:
00424AA2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_00424aa5:
00424AA5  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
00424AA8  7D 34                     JGE 0x00424ade
00424AAA  33 C0                     XOR EAX,EAX
00424AAC  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
00424AAF  3B D0                     CMP EDX,EAX
00424AB1  7D 0B                     JGE 0x00424abe
00424AB3  8B F8                     MOV EDI,EAX
00424AB5  2B FA                     SUB EDI,EDX
00424AB7  83 FF 0A                  CMP EDI,0xa
00424ABA  7F 02                     JG 0x00424abe
00424ABC  8B D0                     MOV EDX,EAX
LAB_00424abe:
00424ABE  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
00424AC1  7D 1B                     JGE 0x00424ade
00424AC3  8B B9 90 03 00 00         MOV EDI,dword ptr [ECX + 0x390]
00424AC9  33 C0                     XOR EAX,EAX
00424ACB  8A 44 37 01               MOV AL,byte ptr [EDI + ESI*0x1 + 0x1]
00424ACF  3B D0                     CMP EDX,EAX
00424AD1  7D 0B                     JGE 0x00424ade
00424AD3  8B F8                     MOV EDI,EAX
00424AD5  2B FA                     SUB EDI,EDX
00424AD7  83 FF 0A                  CMP EDI,0xa
00424ADA  7F 02                     JG 0x00424ade
LAB_00424adc:
00424ADC  8B D0                     MOV EDX,EAX
switchD_00424938::default:
00424ADE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00424AE1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00424AE4  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00424AE7  66 89 54 C7 04            MOV word ptr [EDI + EAX*0x8 + 0x4],DX
00424AEC  40                        INC EAX
00424AED  85 DB                     TEST EBX,EBX
00424AEF  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00424AF2  0F 8C E0 01 00 00         JL 0x00424cd8
00424AF8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00424AFB  F6 C3 02                  TEST BL,0x2
00424AFE  74 01                     JZ 0x00424b01
00424B00  42                        INC EDX
LAB_00424b01:
00424B01  66 8B B9 74 03 00 00      MOV DI,word ptr [ECX + 0x374]
00424B08  66 03 FA                  ADD DI,DX
00424B0B  66 8B D7                  MOV DX,DI
00424B0E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00424B11  66 89 14 C7               MOV word ptr [EDI + EAX*0x8],DX
00424B15  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00424B18  F6 C3 01                  TEST BL,0x1
00424B1B  74 01                     JZ 0x00424b1e
00424B1D  42                        INC EDX
LAB_00424b1e:
00424B1E  66 03 91 78 03 00 00      ADD DX,word ptr [ECX + 0x378]
00424B25  66 89 54 C7 02            MOV word ptr [EDI + EAX*0x8 + 0x2],DX
00424B2A  66 89 5C C7 06            MOV word ptr [EDI + EAX*0x8 + 0x6],BX
00424B2F  8B B9 90 03 00 00         MOV EDI,dword ptr [ECX + 0x390]
00424B35  33 D2                     XOR EDX,EDX
00424B37  83 FB 03                  CMP EBX,0x3
00424B3A  8A 14 37                  MOV DL,byte ptr [EDI + ESI*0x1]
00424B3D  0F 87 89 01 00 00         JA 0x00424ccc
switchD_00424b43::switchD:
00424B43  FF 24 9D F0 4C 42 00      JMP dword ptr [EBX*0x4 + 0x424cf0]
switchD_00424b43::caseD_0:
00424B4A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00424B4D  85 C0                     TEST EAX,EAX
00424B4F  7E 3F                     JLE 0x00424b90
00424B51  8B 99 7C 03 00 00         MOV EBX,dword ptr [ECX + 0x37c]
00424B57  8B C7                     MOV EAX,EDI
00424B59  2B C3                     SUB EAX,EBX
00424B5B  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
00424B5E  33 C0                     XOR EAX,EAX
00424B60  8A 01                     MOV AL,byte ptr [ECX]
00424B62  3B D0                     CMP EDX,EAX
00424B64  7D 0B                     JGE 0x00424b71
00424B66  8B D8                     MOV EBX,EAX
00424B68  2B DA                     SUB EBX,EDX
00424B6A  83 FB 0A                  CMP EBX,0xa
00424B6D  7F 02                     JG 0x00424b71
00424B6F  8B D0                     MOV EDX,EAX
LAB_00424b71:
00424B71  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00424B74  85 C0                     TEST EAX,EAX
00424B76  0F 8E 50 01 00 00         JLE 0x00424ccc
00424B7C  33 C0                     XOR EAX,EAX
00424B7E  8A 41 FF                  MOV AL,byte ptr [ECX + -0x1]
00424B81  3B D0                     CMP EDX,EAX
00424B83  7D 0B                     JGE 0x00424b90
00424B85  8B C8                     MOV ECX,EAX
00424B87  2B CA                     SUB ECX,EDX
00424B89  83 F9 0A                  CMP ECX,0xa
00424B8C  7F 02                     JG 0x00424b90
LAB_00424b8e:
00424B8E  8B D0                     MOV EDX,EAX
LAB_00424b90:
00424B90  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00424B93  85 C0                     TEST EAX,EAX
00424B95  0F 8E 31 01 00 00         JLE 0x00424ccc
00424B9B  33 C0                     XOR EAX,EAX
00424B9D  8A 44 37 FF               MOV AL,byte ptr [EDI + ESI*0x1 + -0x1]
00424BA1  E9 B0 00 00 00            JMP 0x00424c56
switchD_00424b43::caseD_1:
00424BA6  8B 81 70 03 00 00         MOV EAX,dword ptr [ECX + 0x370]
00424BAC  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00424BAF  48                        DEC EAX
00424BB0  3B D8                     CMP EBX,EAX
00424BB2  7D DC                     JGE 0x00424b90
00424BB4  8B 99 7C 03 00 00         MOV EBX,dword ptr [ECX + 0x37c]
00424BBA  8B C7                     MOV EAX,EDI
00424BBC  03 C3                     ADD EAX,EBX
00424BBE  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
00424BC1  33 C0                     XOR EAX,EAX
00424BC3  8A 01                     MOV AL,byte ptr [ECX]
00424BC5  3B D0                     CMP EDX,EAX
00424BC7  7D 0B                     JGE 0x00424bd4
00424BC9  8B D8                     MOV EBX,EAX
00424BCB  2B DA                     SUB EBX,EDX
00424BCD  83 FB 0A                  CMP EBX,0xa
00424BD0  7F 02                     JG 0x00424bd4
00424BD2  8B D0                     MOV EDX,EAX
LAB_00424bd4:
00424BD4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00424BD7  85 C0                     TEST EAX,EAX
00424BD9  0F 8E ED 00 00 00         JLE 0x00424ccc
00424BDF  33 C0                     XOR EAX,EAX
00424BE1  8A 41 FF                  MOV AL,byte ptr [ECX + -0x1]
00424BE4  3B D0                     CMP EDX,EAX
00424BE6  7D A8                     JGE 0x00424b90
00424BE8  8B C8                     MOV ECX,EAX
00424BEA  2B CA                     SUB ECX,EDX
00424BEC  83 F9 0A                  CMP ECX,0xa
00424BEF  7F 9F                     JG 0x00424b90
00424BF1  EB 9B                     JMP 0x00424b8e
switchD_00424b43::caseD_2:
00424BF3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00424BF6  85 C0                     TEST EAX,EAX
00424BF8  7E 48                     JLE 0x00424c42
00424BFA  8B 99 7C 03 00 00         MOV EBX,dword ptr [ECX + 0x37c]
00424C00  8B C7                     MOV EAX,EDI
00424C02  2B C3                     SUB EAX,EBX
00424C04  33 DB                     XOR EBX,EBX
00424C06  8A 1C 30                  MOV BL,byte ptr [EAX + ESI*0x1]
00424C09  03 C6                     ADD EAX,ESI
00424C0B  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
00424C0E  8B C3                     MOV EAX,EBX
00424C10  3B D0                     CMP EDX,EAX
00424C12  7D 09                     JGE 0x00424c1d
00424C14  2B DA                     SUB EBX,EDX
00424C16  83 FB 0A                  CMP EBX,0xa
00424C19  7F 02                     JG 0x00424c1d
00424C1B  8B D0                     MOV EDX,EAX
LAB_00424c1d:
00424C1D  8B 81 70 03 00 00         MOV EAX,dword ptr [ECX + 0x370]
00424C23  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00424C26  48                        DEC EAX
00424C27  3B D8                     CMP EBX,EAX
00424C29  7D 17                     JGE 0x00424c42
00424C2B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00424C2E  33 C0                     XOR EAX,EAX
00424C30  8A 43 01                  MOV AL,byte ptr [EBX + 0x1]
00424C33  3B D0                     CMP EDX,EAX
00424C35  7D 0B                     JGE 0x00424c42
00424C37  8B D8                     MOV EBX,EAX
00424C39  2B DA                     SUB EBX,EDX
00424C3B  83 FB 0A                  CMP EBX,0xa
00424C3E  7F 02                     JG 0x00424c42
00424C40  8B D0                     MOV EDX,EAX
LAB_00424c42:
00424C42  8B 89 70 03 00 00         MOV ECX,dword ptr [ECX + 0x370]
00424C48  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00424C4B  49                        DEC ECX
00424C4C  3B C1                     CMP EAX,ECX
00424C4E  7D 7C                     JGE 0x00424ccc
00424C50  33 C0                     XOR EAX,EAX
00424C52  8A 44 37 01               MOV AL,byte ptr [EDI + ESI*0x1 + 0x1]
LAB_00424c56:
00424C56  3B D0                     CMP EDX,EAX
00424C58  7D 72                     JGE 0x00424ccc
00424C5A  8B C8                     MOV ECX,EAX
00424C5C  2B CA                     SUB ECX,EDX
00424C5E  83 F9 0A                  CMP ECX,0xa
00424C61  7F 69                     JG 0x00424ccc
00424C63  EB 65                     JMP 0x00424cca
switchD_00424b43::caseD_3:
00424C65  8B 81 70 03 00 00         MOV EAX,dword ptr [ECX + 0x370]
00424C6B  8D 58 FF                  LEA EBX,[EAX + -0x1]
00424C6E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00424C71  3B C3                     CMP EAX,EBX
00424C73  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
00424C76  7D 3A                     JGE 0x00424cb2
00424C78  8B C7                     MOV EAX,EDI
00424C7A  03 81 7C 03 00 00         ADD EAX,dword ptr [ECX + 0x37c]
00424C80  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
00424C83  33 C0                     XOR EAX,EAX
00424C85  8A 01                     MOV AL,byte ptr [ECX]
00424C87  3B D0                     CMP EDX,EAX
00424C89  7D 0E                     JGE 0x00424c99
00424C8B  8B D8                     MOV EBX,EAX
00424C8D  2B DA                     SUB EBX,EDX
00424C8F  83 FB 0A                  CMP EBX,0xa
00424C92  7F 02                     JG 0x00424c96
00424C94  8B D0                     MOV EDX,EAX
LAB_00424c96:
00424C96  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_00424c99:
00424C99  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
00424C9C  7D 2E                     JGE 0x00424ccc
00424C9E  33 C0                     XOR EAX,EAX
00424CA0  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
00424CA3  3B D0                     CMP EDX,EAX
00424CA5  7D 0B                     JGE 0x00424cb2
00424CA7  8B C8                     MOV ECX,EAX
00424CA9  2B CA                     SUB ECX,EDX
00424CAB  83 F9 0A                  CMP ECX,0xa
00424CAE  7F 02                     JG 0x00424cb2
00424CB0  8B D0                     MOV EDX,EAX
LAB_00424cb2:
00424CB2  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
00424CB5  7D 15                     JGE 0x00424ccc
00424CB7  33 C0                     XOR EAX,EAX
00424CB9  8A 44 37 01               MOV AL,byte ptr [EDI + ESI*0x1 + 0x1]
00424CBD  3B D0                     CMP EDX,EAX
00424CBF  7D 0B                     JGE 0x00424ccc
00424CC1  8B C8                     MOV ECX,EAX
00424CC3  2B CA                     SUB ECX,EDX
00424CC5  83 F9 0A                  CMP ECX,0xa
00424CC8  7F 02                     JG 0x00424ccc
LAB_00424cca:
00424CCA  8B D0                     MOV EDX,EAX
switchD_00424b43::default:
00424CCC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00424CCF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00424CD2  66 89 54 C1 04            MOV word ptr [ECX + EAX*0x8 + 0x4],DX
00424CD7  40                        INC EAX
LAB_00424cd8:
00424CD8  5F                        POP EDI
00424CD9  5E                        POP ESI
00424CDA  5B                        POP EBX
00424CDB  5D                        POP EBP
00424CDC  C2 18 00                  RET 0x18
