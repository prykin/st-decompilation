FUN_0058c760:
0058C760  55                        PUSH EBP
0058C761  8B EC                     MOV EBP,ESP
0058C763  83 EC 7C                  SUB ESP,0x7c
0058C766  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
0058C76C  53                        PUSH EBX
0058C76D  56                        PUSH ESI
0058C76E  57                        PUSH EDI
0058C76F  BF 07 00 00 00            MOV EDI,0x7
0058C774  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0058C777  3B C7                     CMP EAX,EDI
0058C779  75 14                     JNZ 0x0058c78f
0058C77B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0058C77E  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
0058C782  74 0B                     JZ 0x0058c78f
0058C784  33 C0                     XOR EAX,EAX
0058C786  5F                        POP EDI
0058C787  5E                        POP ESI
0058C788  5B                        POP EBX
0058C789  8B E5                     MOV ESP,EBP
0058C78B  5D                        POP EBP
0058C78C  C2 04 00                  RET 0x4
LAB_0058c78f:
0058C78F  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0058C795  8D 45 88                  LEA EAX,[EBP + -0x78]
0058C798  8D 55 84                  LEA EDX,[EBP + -0x7c]
0058C79B  6A 00                     PUSH 0x0
0058C79D  50                        PUSH EAX
0058C79E  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
0058C7A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0058C7A7  E8 44 10 1A 00            CALL 0x0072d7f0
0058C7AC  8B F0                     MOV ESI,EAX
0058C7AE  83 C4 08                  ADD ESP,0x8
0058C7B1  85 F6                     TEST ESI,ESI
0058C7B3  0F 85 BA 05 00 00         JNZ 0x0058cd73
0058C7B9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0058C7BC  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0058C7BF  56                        PUSH ESI
0058C7C0  8B CB                     MOV ECX,EBX
0058C7C2  E8 40 87 E7 FF            CALL 0x00404f07
0058C7C7  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0058C7CA  3D 0F 01 00 00            CMP EAX,0x10f
0058C7CF  0F 87 55 05 00 00         JA 0x0058cd2a
0058C7D5  0F 84 94 03 00 00         JZ 0x0058cb6f
0058C7DB  83 E8 00                  SUB EAX,0x0
0058C7DE  0F 84 71 03 00 00         JZ 0x0058cb55
0058C7E4  83 E8 02                  SUB EAX,0x2
0058C7E7  74 25                     JZ 0x0058c80e
0058C7E9  48                        DEC EAX
0058C7EA  0F 85 70 05 00 00         JNZ 0x0058cd60
0058C7F0  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058C7F6  E8 DA 59 E7 FF            CALL 0x004021d5
0058C7FB  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058C7FE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058C803  33 C0                     XOR EAX,EAX
0058C805  5F                        POP EDI
0058C806  5E                        POP ESI
0058C807  5B                        POP EBX
0058C808  8B E5                     MOV ESP,EBP
0058C80A  5D                        POP EBP
0058C80B  C2 04 00                  RET 0x4
LAB_0058c80e:
0058C80E  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0058C811  89 BB 31 02 00 00         MOV dword ptr [EBX + 0x231],EDI
0058C817  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0058C81A  83 F8 01                  CMP EAX,0x1
0058C81D  0F 86 77 01 00 00         JBE 0x0058c99a
0058C823  83 F8 02                  CMP EAX,0x2
0058C826  0F 85 91 02 00 00         JNZ 0x0058cabd
0058C82C  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0058C82F  8D BB 75 02 00 00         LEA EDI,[EBX + 0x275]
0058C835  B9 09 00 00 00            MOV ECX,0x9
0058C83A  8B F0                     MOV ESI,EAX
0058C83C  F3 A5                     MOVSD.REP ES:EDI,ESI
0058C83E  66 A5                     MOVSW ES:EDI,ESI
0058C840  8B 48 74                  MOV ECX,dword ptr [EAX + 0x74]
0058C843  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0058C846  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0058C849  8D 4C 01 7C               LEA ECX,[ECX + EAX*0x1 + 0x7c]
0058C84D  51                        PUSH ECX
0058C84E  8B CB                     MOV ECX,EBX
0058C850  E8 CA 8C E7 FF            CALL 0x0040551f
0058C855  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0058C858  6A 44                     PUSH 0x44
0058C85A  8B 56 26                  MOV EDX,dword ptr [ESI + 0x26]
0058C85D  89 93 31 02 00 00         MOV dword ptr [EBX + 0x231],EDX
0058C863  8B 46 2A                  MOV EAX,dword ptr [ESI + 0x2a]
0058C866  89 83 35 02 00 00         MOV dword ptr [EBX + 0x235],EAX
0058C86C  8B 4E 2E                  MOV ECX,dword ptr [ESI + 0x2e]
0058C86F  89 8B 39 02 00 00         MOV dword ptr [EBX + 0x239],ECX
0058C875  8B 56 32                  MOV EDX,dword ptr [ESI + 0x32]
0058C878  89 93 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDX
0058C87E  8B 46 36                  MOV EAX,dword ptr [ESI + 0x36]
0058C881  89 83 41 02 00 00         MOV dword ptr [EBX + 0x241],EAX
0058C887  8B 4E 3A                  MOV ECX,dword ptr [ESI + 0x3a]
0058C88A  89 8B 45 02 00 00         MOV dword ptr [EBX + 0x245],ECX
0058C890  8B 56 3E                  MOV EDX,dword ptr [ESI + 0x3e]
0058C893  89 93 49 02 00 00         MOV dword ptr [EBX + 0x249],EDX
0058C899  8B 46 42                  MOV EAX,dword ptr [ESI + 0x42]
0058C89C  89 83 4D 02 00 00         MOV dword ptr [EBX + 0x24d],EAX
0058C8A2  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
0058C8A5  89 8B 51 02 00 00         MOV dword ptr [EBX + 0x251],ECX
0058C8AB  8B 56 4A                  MOV EDX,dword ptr [ESI + 0x4a]
0058C8AE  89 93 55 02 00 00         MOV dword ptr [EBX + 0x255],EDX
0058C8B4  8B 46 4E                  MOV EAX,dword ptr [ESI + 0x4e]
0058C8B7  89 83 59 02 00 00         MOV dword ptr [EBX + 0x259],EAX
0058C8BD  8B 4E 52                  MOV ECX,dword ptr [ESI + 0x52]
0058C8C0  89 8B 5D 02 00 00         MOV dword ptr [EBX + 0x25d],ECX
0058C8C6  8B 56 56                  MOV EDX,dword ptr [ESI + 0x56]
0058C8C9  89 93 61 02 00 00         MOV dword ptr [EBX + 0x261],EDX
0058C8CF  8B 46 5A                  MOV EAX,dword ptr [ESI + 0x5a]
0058C8D2  89 83 65 02 00 00         MOV dword ptr [EBX + 0x265],EAX
0058C8D8  8B 4E 5E                  MOV ECX,dword ptr [ESI + 0x5e]
0058C8DB  89 8B 69 02 00 00         MOV dword ptr [EBX + 0x269],ECX
0058C8E1  8B 56 62                  MOV EDX,dword ptr [ESI + 0x62]
0058C8E4  89 93 6D 02 00 00         MOV dword ptr [EBX + 0x26d],EDX
0058C8EA  8B 46 66                  MOV EAX,dword ptr [ESI + 0x66]
0058C8ED  89 83 71 02 00 00         MOV dword ptr [EBX + 0x271],EAX
0058C8F3  66 8B 4E 6A               MOV CX,word ptr [ESI + 0x6a]
0058C8F7  66 89 4B 41               MOV word ptr [EBX + 0x41],CX
0058C8FB  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
0058C8FF  66 89 53 43               MOV word ptr [EBX + 0x43],DX
0058C903  66 8B 46 6E               MOV AX,word ptr [ESI + 0x6e]
0058C907  66 89 43 45               MOV word ptr [EBX + 0x45],AX
0058C90B  E8 60 E3 11 00            CALL 0x006aac70
0058C910  85 C0                     TEST EAX,EAX
0058C912  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0058C915  0F 84 A2 01 00 00         JZ 0x0058cabd
0058C91B  33 D2                     XOR EDX,EDX
0058C91D  33 C9                     XOR ECX,ECX
0058C91F  EB 03                     JMP 0x0058c924
LAB_0058c921:
0058C921  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
LAB_0058c924:
0058C924  8B 3D 74 67 80 00         MOV EDI,dword ptr [0x00806774]
0058C92A  89 3C 01                  MOV dword ptr [ECX + EAX*0x1],EDI
0058C92D  83 C1 04                  ADD ECX,0x4
0058C930  83 F9 44                  CMP ECX,0x44
0058C933  7C EC                     JL 0x0058c921
0058C935  8B 83 39 02 00 00         MOV EAX,dword ptr [EBX + 0x239]
0058C93B  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0058C941  3B C2                     CMP EAX,EDX
0058C943  7E 19                     JLE 0x0058c95e
0058C945  3B CA                     CMP ECX,EDX
0058C947  74 15                     JZ 0x0058c95e
0058C949  8D 79 30                  LEA EDI,[ECX + 0x30]
0058C94C  85 FF                     TEST EDI,EDI
0058C94E  74 0E                     JZ 0x0058c95e
0058C950  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
0058C953  8D 04 B8                  LEA EAX,[EAX + EDI*0x4]
0058C956  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0058C959  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0058C95C  EB 03                     JMP 0x0058c961
LAB_0058c95e:
0058C95E  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
LAB_0058c961:
0058C961  0F BF 49 2C               MOVSX ECX,word ptr [ECX + 0x2c]
0058C965  A1 CC 73 80 00            MOV EAX,[0x008073cc]
0058C96A  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0058C96D  83 C6 78                  ADD ESI,0x78
0058C970  8D 4D C8                  LEA ECX,[EBP + -0x38]
0058C973  56                        PUSH ESI
0058C974  51                        PUSH ECX
0058C975  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058C97B  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0058C97E  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0058C981  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0058C984  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0058C987  E8 19 83 E7 FF            CALL 0x00404ca5
0058C98C  8D 55 C8                  LEA EDX,[EBP + -0x38]
0058C98F  52                        PUSH EDX
0058C990  E8 CB E6 11 00            CALL 0x006ab060
0058C995  E9 23 01 00 00            JMP 0x0058cabd
LAB_0058c99a:
0058C99A  C7 83 39 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x239],0x0
0058C9A4  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0058C9A7  B9 09 00 00 00            MOV ECX,0x9
0058C9AC  8D BB 75 02 00 00         LEA EDI,[EBX + 0x275]
0058C9B2  F3 A5                     MOVSD.REP ES:EDI,ESI
0058C9B4  66 A5                     MOVSW ES:EDI,ESI
0058C9B6  A1 74 67 80 00            MOV EAX,[0x00806774]
0058C9BB  6A 1D                     PUSH 0x1d
0058C9BD  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0058C9C3  68 A8 BA 7C 00            PUSH 0x7cbaa8
0058C9C8  50                        PUSH EAX
0058C9C9  6A 0E                     PUSH 0xe
0058C9CB  8B CE                     MOV ECX,ESI
0058C9CD  E8 B1 77 E7 FF            CALL 0x00404183
0058C9D2  85 C0                     TEST EAX,EAX
0058C9D4  74 18                     JZ 0x0058c9ee
0058C9D6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0058C9DC  68 58 01 00 00            PUSH 0x158
0058C9E1  68 B8 BA 7C 00            PUSH 0x7cbab8
0058C9E6  51                        PUSH ECX
0058C9E7  6A FF                     PUSH -0x1
0058C9E9  E8 52 94 11 00            CALL 0x006a5e40
LAB_0058c9ee:
0058C9EE  6A 0E                     PUSH 0xe
0058C9F0  8B CE                     MOV ECX,ESI
0058C9F2  E8 AF 90 E7 FF            CALL 0x00405aa6
0058C9F7  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0058C9FD  8B CE                     MOV ECX,ESI
0058C9FF  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0058CA05  50                        PUSH EAX
0058CA06  6A 0E                     PUSH 0xe
0058CA08  E8 33 88 E7 FF            CALL 0x00405240
0058CA0D  66 8B 8B 91 02 00 00      MOV CX,word ptr [EBX + 0x291]
0058CA14  66 8B 93 8D 02 00 00      MOV DX,word ptr [EBX + 0x28d]
0058CA1B  66 8B 83 89 02 00 00      MOV AX,word ptr [EBX + 0x289]
0058CA22  51                        PUSH ECX
0058CA23  52                        PUSH EDX
0058CA24  50                        PUSH EAX
0058CA25  8B CB                     MOV ECX,EBX
0058CA27  E8 DB 66 E7 FF            CALL 0x00403107
0058CA2C  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0058CA32  66 8B 43 41               MOV AX,word ptr [EBX + 0x41]
0058CA36  66 85 C0                  TEST AX,AX
0058CA39  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
0058CA3D  0F BF C8                  MOVSX ECX,AX
0058CA40  89 93 45 02 00 00         MOV dword ptr [EBX + 0x245],EDX
0058CA46  C7 83 31 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x231],0x0
0058CA50  B8 79 19 8C 02            MOV EAX,0x28c1979
0058CA55  7C 10                     JL 0x0058ca67
0058CA57  F7 E9                     IMUL ECX
0058CA59  D1 FA                     SAR EDX,0x1
0058CA5B  8B C2                     MOV EAX,EDX
0058CA5D  C1 E8 1F                  SHR EAX,0x1f
0058CA60  03 D0                     ADD EDX,EAX
0058CA62  0F BF C2                  MOVSX EAX,DX
0058CA65  EB 0F                     JMP 0x0058ca76
LAB_0058ca67:
0058CA67  F7 E9                     IMUL ECX
0058CA69  D1 FA                     SAR EDX,0x1
0058CA6B  8B CA                     MOV ECX,EDX
0058CA6D  C1 E9 1F                  SHR ECX,0x1f
0058CA70  03 D1                     ADD EDX,ECX
0058CA72  0F BF C2                  MOVSX EAX,DX
0058CA75  48                        DEC EAX
LAB_0058ca76:
0058CA76  89 83 51 02 00 00         MOV dword ptr [EBX + 0x251],EAX
0058CA7C  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
0058CA80  66 85 C0                  TEST AX,AX
0058CA83  0F BF C8                  MOVSX ECX,AX
0058CA86  B8 79 19 8C 02            MOV EAX,0x28c1979
0058CA8B  7C 10                     JL 0x0058ca9d
0058CA8D  F7 E9                     IMUL ECX
0058CA8F  D1 FA                     SAR EDX,0x1
0058CA91  8B C2                     MOV EAX,EDX
0058CA93  C1 E8 1F                  SHR EAX,0x1f
0058CA96  03 D0                     ADD EDX,EAX
0058CA98  0F BF C2                  MOVSX EAX,DX
0058CA9B  EB 0F                     JMP 0x0058caac
LAB_0058ca9d:
0058CA9D  F7 E9                     IMUL ECX
0058CA9F  D1 FA                     SAR EDX,0x1
0058CAA1  8B CA                     MOV ECX,EDX
0058CAA3  C1 E9 1F                  SHR ECX,0x1f
0058CAA6  03 D1                     ADD EDX,ECX
0058CAA8  0F BF C2                  MOVSX EAX,DX
0058CAAB  48                        DEC EAX
LAB_0058caac:
0058CAAC  6A 00                     PUSH 0x0
0058CAAE  6A 0E                     PUSH 0xe
0058CAB0  8B CE                     MOV ECX,ESI
0058CAB2  89 83 55 02 00 00         MOV dword ptr [EBX + 0x255],EAX
0058CAB8  E8 A7 45 E7 FF            CALL 0x00401064
LAB_0058cabd:
0058CABD  8B 8B 89 02 00 00         MOV ECX,dword ptr [EBX + 0x289]
0058CAC3  B8 79 19 8C 02            MOV EAX,0x28c1979
0058CAC8  85 C9                     TEST ECX,ECX
0058CACA  7C 10                     JL 0x0058cadc
0058CACC  F7 E9                     IMUL ECX
0058CACE  D1 FA                     SAR EDX,0x1
0058CAD0  8B C2                     MOV EAX,EDX
0058CAD2  C1 E8 1F                  SHR EAX,0x1f
0058CAD5  03 D0                     ADD EDX,EAX
0058CAD7  0F BF C2                  MOVSX EAX,DX
0058CADA  EB 0F                     JMP 0x0058caeb
LAB_0058cadc:
0058CADC  F7 E9                     IMUL ECX
0058CADE  D1 FA                     SAR EDX,0x1
0058CAE0  8B CA                     MOV ECX,EDX
0058CAE2  C1 E9 1F                  SHR ECX,0x1f
0058CAE5  03 D1                     ADD EDX,ECX
0058CAE7  0F BF C2                  MOVSX EAX,DX
0058CAEA  48                        DEC EAX
LAB_0058caeb:
0058CAEB  8B 8B 8D 02 00 00         MOV ECX,dword ptr [EBX + 0x28d]
0058CAF1  66 89 43 47               MOV word ptr [EBX + 0x47],AX
0058CAF5  85 C9                     TEST ECX,ECX
0058CAF7  B8 79 19 8C 02            MOV EAX,0x28c1979
0058CAFC  7C 2B                     JL 0x0058cb29
0058CAFE  F7 E9                     IMUL ECX
0058CB00  D1 FA                     SAR EDX,0x1
0058CB02  8B C2                     MOV EAX,EDX
0058CB04  66 C7 43 4B 04 00         MOV word ptr [EBX + 0x4b],0x4
0058CB0A  C1 E8 1F                  SHR EAX,0x1f
0058CB0D  03 D0                     ADD EDX,EAX
0058CB0F  0F BF C2                  MOVSX EAX,DX
0058CB12  66 89 43 49               MOV word ptr [EBX + 0x49],AX
0058CB16  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058CB19  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058CB1E  33 C0                     XOR EAX,EAX
0058CB20  5F                        POP EDI
0058CB21  5E                        POP ESI
0058CB22  5B                        POP EBX
0058CB23  8B E5                     MOV ESP,EBP
0058CB25  5D                        POP EBP
0058CB26  C2 04 00                  RET 0x4
LAB_0058cb29:
0058CB29  F7 E9                     IMUL ECX
0058CB2B  D1 FA                     SAR EDX,0x1
0058CB2D  8B CA                     MOV ECX,EDX
0058CB2F  66 C7 43 4B 04 00         MOV word ptr [EBX + 0x4b],0x4
0058CB35  C1 E9 1F                  SHR ECX,0x1f
0058CB38  03 D1                     ADD EDX,ECX
0058CB3A  0F BF C2                  MOVSX EAX,DX
0058CB3D  48                        DEC EAX
0058CB3E  66 89 43 49               MOV word ptr [EBX + 0x49],AX
0058CB42  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058CB45  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058CB4A  33 C0                     XOR EAX,EAX
0058CB4C  5F                        POP EDI
0058CB4D  5E                        POP ESI
0058CB4E  5B                        POP EBX
0058CB4F  8B E5                     MOV ESP,EBP
0058CB51  5D                        POP EBP
0058CB52  C2 04 00                  RET 0x4
LAB_0058cb55:
0058CB55  8B CB                     MOV ECX,EBX
0058CB57  E8 E5 71 E7 FF            CALL 0x00403d41
0058CB5C  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058CB5F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058CB64  33 C0                     XOR EAX,EAX
0058CB66  5F                        POP EDI
0058CB67  5E                        POP ESI
0058CB68  5B                        POP EBX
0058CB69  8B E5                     MOV ESP,EBP
0058CB6B  5D                        POP EBP
0058CB6C  C2 04 00                  RET 0x4
LAB_0058cb6f:
0058CB6F  8D 55 FC                  LEA EDX,[EBP + -0x4]
0058CB72  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058CB78  52                        PUSH EDX
0058CB79  E8 56 4D E7 FF            CALL 0x004018d4
0058CB7E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058CB81  8D 45 F4                  LEA EAX,[EBP + -0xc]
0058CB84  50                        PUSH EAX
0058CB85  8B CB                     MOV ECX,EBX
0058CB87  E8 0E 46 E7 FF            CALL 0x0040119a
0058CB8C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058CB8F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058CB92  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058CB95  8D 44 0A 7C               LEA EAX,[EDX + ECX*0x1 + 0x7c]
0058CB99  50                        PUSH EAX
0058CB9A  E8 D1 E0 11 00            CALL 0x006aac70
0058CB9F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0058CBA2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0058CBA5  85 C9                     TEST ECX,ECX
0058CBA7  0F 84 B3 01 00 00         JZ 0x0058cd60
0058CBAD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0058CBB0  85 C9                     TEST ECX,ECX
0058CBB2  0F 84 A8 01 00 00         JZ 0x0058cd60
0058CBB8  85 C0                     TEST EAX,EAX
0058CBBA  0F 84 A0 01 00 00         JZ 0x0058cd60
0058CBC0  8D B3 75 02 00 00         LEA ESI,[EBX + 0x275]
0058CBC6  B9 09 00 00 00            MOV ECX,0x9
0058CBCB  8B F8                     MOV EDI,EAX
0058CBCD  F3 A5                     MOVSD.REP ES:EDI,ESI
0058CBCF  66 A5                     MOVSW ES:EDI,ESI
0058CBD1  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
0058CBD8  8B 8B 31 02 00 00         MOV ECX,dword ptr [EBX + 0x231]
0058CBDE  89 48 26                  MOV dword ptr [EAX + 0x26],ECX
0058CBE1  8B 93 35 02 00 00         MOV EDX,dword ptr [EBX + 0x235]
0058CBE7  89 50 2A                  MOV dword ptr [EAX + 0x2a],EDX
0058CBEA  8B 8B 39 02 00 00         MOV ECX,dword ptr [EBX + 0x239]
0058CBF0  89 48 2E                  MOV dword ptr [EAX + 0x2e],ECX
0058CBF3  8B 93 3D 02 00 00         MOV EDX,dword ptr [EBX + 0x23d]
0058CBF9  89 50 32                  MOV dword ptr [EAX + 0x32],EDX
0058CBFC  8B 8B 41 02 00 00         MOV ECX,dword ptr [EBX + 0x241]
0058CC02  89 48 36                  MOV dword ptr [EAX + 0x36],ECX
0058CC05  8B 93 45 02 00 00         MOV EDX,dword ptr [EBX + 0x245]
0058CC0B  89 50 3A                  MOV dword ptr [EAX + 0x3a],EDX
0058CC0E  8B 8B 49 02 00 00         MOV ECX,dword ptr [EBX + 0x249]
0058CC14  89 48 3E                  MOV dword ptr [EAX + 0x3e],ECX
0058CC17  8B 93 4D 02 00 00         MOV EDX,dword ptr [EBX + 0x24d]
0058CC1D  89 50 42                  MOV dword ptr [EAX + 0x42],EDX
0058CC20  8B 8B 51 02 00 00         MOV ECX,dword ptr [EBX + 0x251]
0058CC26  89 48 46                  MOV dword ptr [EAX + 0x46],ECX
0058CC29  8B 93 55 02 00 00         MOV EDX,dword ptr [EBX + 0x255]
0058CC2F  89 50 4A                  MOV dword ptr [EAX + 0x4a],EDX
0058CC32  8B 8B 59 02 00 00         MOV ECX,dword ptr [EBX + 0x259]
0058CC38  89 48 4E                  MOV dword ptr [EAX + 0x4e],ECX
0058CC3B  8B 93 5D 02 00 00         MOV EDX,dword ptr [EBX + 0x25d]
0058CC41  89 50 52                  MOV dword ptr [EAX + 0x52],EDX
0058CC44  8B 8B 61 02 00 00         MOV ECX,dword ptr [EBX + 0x261]
0058CC4A  89 48 56                  MOV dword ptr [EAX + 0x56],ECX
0058CC4D  8B 93 65 02 00 00         MOV EDX,dword ptr [EBX + 0x265]
0058CC53  89 50 5A                  MOV dword ptr [EAX + 0x5a],EDX
0058CC56  8B 8B 69 02 00 00         MOV ECX,dword ptr [EBX + 0x269]
0058CC5C  89 48 5E                  MOV dword ptr [EAX + 0x5e],ECX
0058CC5F  8B 93 6D 02 00 00         MOV EDX,dword ptr [EBX + 0x26d]
0058CC65  89 50 62                  MOV dword ptr [EAX + 0x62],EDX
0058CC68  8B 8B 71 02 00 00         MOV ECX,dword ptr [EBX + 0x271]
0058CC6E  89 48 66                  MOV dword ptr [EAX + 0x66],ECX
0058CC71  66 8B 53 41               MOV DX,word ptr [EBX + 0x41]
0058CC75  66 89 50 6A               MOV word ptr [EAX + 0x6a],DX
0058CC79  66 8B 4B 43               MOV CX,word ptr [EBX + 0x43]
0058CC7D  66 89 48 6C               MOV word ptr [EAX + 0x6c],CX
0058CC81  66 8B 53 45               MOV DX,word ptr [EBX + 0x45]
0058CC85  66 89 50 6E               MOV word ptr [EAX + 0x6e],DX
0058CC89  C7 40 70 00 00 00 00      MOV dword ptr [EAX + 0x70],0x0
0058CC90  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058CC93  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058CC96  89 41 74                  MOV dword ptr [ECX + 0x74],EAX
0058CC99  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058CC9C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058CC9F  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0058CCA2  8B C1                     MOV EAX,ECX
0058CCA4  8D 7A 78                  LEA EDI,[EDX + 0x78]
0058CCA7  C1 E9 02                  SHR ECX,0x2
0058CCAA  F3 A5                     MOVSD.REP ES:EDI,ESI
0058CCAC  8B C8                     MOV ECX,EAX
0058CCAE  83 E1 03                  AND ECX,0x3
0058CCB1  F3 A4                     MOVSB.REP ES:EDI,ESI
0058CCB3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058CCB6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058CCB9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058CCBC  89 4C 02 78               MOV dword ptr [EDX + EAX*0x1 + 0x78],ECX
0058CCC0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058CCC3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058CCC6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058CCC9  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0058CCCC  8D 7C 10 7C               LEA EDI,[EAX + EDX*0x1 + 0x7c]
0058CCD0  8B D1                     MOV EDX,ECX
0058CCD2  C1 E9 02                  SHR ECX,0x2
0058CCD5  F3 A5                     MOVSD.REP ES:EDI,ESI
0058CCD7  8B CA                     MOV ECX,EDX
0058CCD9  83 E1 03                  AND ECX,0x3
0058CCDC  F3 A4                     MOVSB.REP ES:EDI,ESI
0058CCDE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058CCE1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058CCE4  8D 54 01 7C               LEA EDX,[ECX + EAX*0x1 + 0x7c]
0058CCE8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058CCEB  52                        PUSH EDX
0058CCEC  50                        PUSH EAX
0058CCED  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0058CCF0  51                        PUSH ECX
0058CCF1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058CCF7  E8 FD 58 E7 FF            CALL 0x004025f9
0058CCFC  8D 55 EC                  LEA EDX,[EBP + -0x14]
0058CCFF  52                        PUSH EDX
0058CD00  E8 5B E3 11 00            CALL 0x006ab060
0058CD05  8D 45 F0                  LEA EAX,[EBP + -0x10]
0058CD08  50                        PUSH EAX
0058CD09  E8 52 E3 11 00            CALL 0x006ab060
0058CD0E  8D 4D F8                  LEA ECX,[EBP + -0x8]
0058CD11  51                        PUSH ECX
0058CD12  E8 49 E3 11 00            CALL 0x006ab060
0058CD17  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058CD1A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058CD1F  33 C0                     XOR EAX,EAX
0058CD21  5F                        POP EDI
0058CD22  5E                        POP ESI
0058CD23  5B                        POP EBX
0058CD24  8B E5                     MOV ESP,EBP
0058CD26  5D                        POP EBP
0058CD27  C2 04 00                  RET 0x4
LAB_0058cd2a:
0058CD2A  2D 12 01 00 00            SUB EAX,0x112
0058CD2F  74 24                     JZ 0x0058cd55
0058CD31  48                        DEC EAX
0058CD32  75 2C                     JNZ 0x0058cd60
0058CD34  8B 93 D5 01 00 00         MOV EDX,dword ptr [EBX + 0x1d5]
0058CD3A  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058CD40  FF 12                     CALL dword ptr [EDX]
0058CD42  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058CD45  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058CD4A  33 C0                     XOR EAX,EAX
0058CD4C  5F                        POP EDI
0058CD4D  5E                        POP ESI
0058CD4E  5B                        POP EBX
0058CD4F  8B E5                     MOV ESP,EBP
0058CD51  5D                        POP EBP
0058CD52  C2 04 00                  RET 0x4
LAB_0058cd55:
0058CD55  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058CD5B  E8 30 5D E7 FF            CALL 0x00402a90
LAB_0058cd60:
0058CD60  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058CD63  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058CD68  33 C0                     XOR EAX,EAX
0058CD6A  5F                        POP EDI
0058CD6B  5E                        POP ESI
0058CD6C  5B                        POP EBX
0058CD6D  8B E5                     MOV ESP,EBP
0058CD6F  5D                        POP EBP
0058CD70  C2 04 00                  RET 0x4
LAB_0058cd73:
0058CD73  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0058CD76  68 08 BB 7C 00            PUSH 0x7cbb08
0058CD7B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058CD80  56                        PUSH ESI
0058CD81  6A 00                     PUSH 0x0
0058CD83  68 FD 01 00 00            PUSH 0x1fd
0058CD88  68 B8 BA 7C 00            PUSH 0x7cbab8
0058CD8D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0058CD93  E8 38 07 12 00            CALL 0x006ad4d0
0058CD98  83 C4 18                  ADD ESP,0x18
0058CD9B  85 C0                     TEST EAX,EAX
0058CD9D  74 01                     JZ 0x0058cda0
0058CD9F  CC                        INT3
LAB_0058cda0:
0058CDA0  68 FE 01 00 00            PUSH 0x1fe
0058CDA5  68 B8 BA 7C 00            PUSH 0x7cbab8
0058CDAA  6A 00                     PUSH 0x0
0058CDAC  56                        PUSH ESI
0058CDAD  E8 8E 90 11 00            CALL 0x006a5e40
0058CDB2  5F                        POP EDI
0058CDB3  5E                        POP ESI
0058CDB4  B8 FF FF 00 00            MOV EAX,0xffff
0058CDB9  5B                        POP EBX
0058CDBA  8B E5                     MOV ESP,EBP
0058CDBC  5D                        POP EBP
0058CDBD  C2 04 00                  RET 0x4
