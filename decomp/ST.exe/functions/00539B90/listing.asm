FUN_00539b90:
00539B90  55                        PUSH EBP
00539B91  8B EC                     MOV EBP,ESP
00539B93  81 EC B4 06 00 00         SUB ESP,0x6b4
00539B99  53                        PUSH EBX
00539B9A  56                        PUSH ESI
00539B9B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00539B9E  57                        PUSH EDI
00539B9F  B9 F6 00 00 00            MOV ECX,0xf6
00539BA4  33 C0                     XOR EAX,EAX
00539BA6  8D BD 7C FB FF FF         LEA EDI,[EBP + 0xfffffb7c]
00539BAC  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
00539BB2  F3 AB                     STOSD.REP ES:EDI
00539BB4  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00539BB9  33 FF                     XOR EDI,EDI
00539BBB  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
00539BC1  57                        PUSH EDI
00539BC2  52                        PUSH EDX
00539BC3  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
00539BC9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00539BCF  E8 1C 3C 1F 00            CALL 0x0072d7f0
00539BD4  8B F0                     MOV ESI,EAX
00539BD6  83 C4 08                  ADD ESP,0x8
00539BD9  3B F7                     CMP ESI,EDI
00539BDB  0F 85 AB 05 00 00         JNZ 0x0053a18c
00539BE1  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00539BE4  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00539BE9  89 1D E4 16 80 00         MOV dword ptr [0x008016e4],EBX
00539BEF  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00539BF2  51                        PUSH ECX
00539BF3  68 9D 01 00 00            PUSH 0x19d
00539BF8  E8 03 43 1D 00            CALL 0x0070df00
00539BFD  57                        PUSH EDI
00539BFE  57                        PUSH EDI
00539BFF  6A 01                     PUSH 0x1
00539C01  89 83 DD 01 00 00         MOV dword ptr [EBX + 0x1dd],EAX
00539C07  57                        PUSH EDI
00539C08  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
00539C0B  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
00539C0E  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
00539C14  6A FF                     PUSH -0x1
00539C16  68 08 3F 7C 00            PUSH 0x7c3f08
00539C1B  6A 0B                     PUSH 0xb
00539C1D  52                        PUSH EDX
00539C1E  E8 CD FE 1C 00            CALL 0x00709af0
00539C23  83 C4 28                  ADD ESP,0x28
00539C26  89 83 D1 01 00 00         MOV dword ptr [EBX + 0x1d1],EAX
00539C2C  57                        PUSH EDI
00539C2D  57                        PUSH EDI
00539C2E  6A 01                     PUSH 0x1
00539C30  57                        PUSH EDI
00539C31  6A FF                     PUSH -0x1
00539C33  57                        PUSH EDI
00539C34  68 F8 75 7C 00            PUSH 0x7c75f8
00539C39  E8 3E BB EC FF            CALL 0x0040577c
00539C3E  83 C4 08                  ADD ESP,0x8
00539C41  50                        PUSH EAX
00539C42  A1 94 67 80 00            MOV EAX,[0x00806794]
00539C47  6A 0B                     PUSH 0xb
00539C49  50                        PUSH EAX
00539C4A  E8 A1 FE 1C 00            CALL 0x00709af0
00539C4F  83 C4 20                  ADD ESP,0x20
00539C52  89 83 D5 01 00 00         MOV dword ptr [EBX + 0x1d5],EAX
00539C58  57                        PUSH EDI
00539C59  57                        PUSH EDI
00539C5A  6A 01                     PUSH 0x1
00539C5C  57                        PUSH EDI
00539C5D  6A FF                     PUSH -0x1
00539C5F  57                        PUSH EDI
00539C60  68 1C 20 7C 00            PUSH 0x7c201c
00539C65  E8 12 BB EC FF            CALL 0x0040577c
00539C6A  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
00539C70  83 C4 08                  ADD ESP,0x8
00539C73  50                        PUSH EAX
00539C74  6A 0B                     PUSH 0xb
00539C76  51                        PUSH ECX
00539C77  E8 74 FE 1C 00            CALL 0x00709af0
00539C7C  89 83 D9 01 00 00         MOV dword ptr [EBX + 0x1d9],EAX
00539C82  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00539C85  83 C4 20                  ADD ESP,0x20
00539C88  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00539C8B  3B F7                     CMP ESI,EDI
00539C8D  75 1A                     JNZ 0x00539ca9
00539C8F  33 F6                     XOR ESI,ESI
00539C91  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00539C95  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00539C99  83 C6 1F                  ADD ESI,0x1f
00539C9C  C1 EE 03                  SHR ESI,0x3
00539C9F  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00539CA5  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00539ca9:
00539CA9  50                        PUSH EAX
00539CAA  E8 F1 B2 17 00            CALL 0x006b4fa0
00539CAF  8B CE                     MOV ECX,ESI
00539CB1  8B F8                     MOV EDI,EAX
00539CB3  8B D1                     MOV EDX,ECX
00539CB5  83 C8 FF                  OR EAX,0xffffffff
00539CB8  C1 E9 02                  SHR ECX,0x2
00539CBB  F3 AB                     STOSD.REP ES:EDI
00539CBD  8B CA                     MOV ECX,EDX
00539CBF  33 F6                     XOR ESI,ESI
00539CC1  6A 01                     PUSH 0x1
00539CC3  83 E1 03                  AND ECX,0x3
00539CC6  56                        PUSH ESI
00539CC7  56                        PUSH ESI
00539CC8  F3 AA                     STOSB.REP ES:EDI
00539CCA  68 E4 75 7C 00            PUSH 0x7c75e4
00539CCF  E8 A8 BA EC FF            CALL 0x0040577c
00539CD4  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00539CDA  83 C4 08                  ADD ESP,0x8
00539CDD  50                        PUSH EAX
00539CDE  6A 01                     PUSH 0x1
00539CE0  E8 FB 7F 1B 00            CALL 0x006f1ce0
00539CE5  8D BB CD 01 00 00         LEA EDI,[EBX + 0x1cd]
00539CEB  50                        PUSH EAX
00539CEC  6A 01                     PUSH 0x1
00539CEE  56                        PUSH ESI
00539CEF  89 07                     MOV dword ptr [EDI],EAX
00539CF1  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00539CF4  56                        PUSH ESI
00539CF5  50                        PUSH EAX
00539CF6  E8 2E 95 EC FF            CALL 0x00403229
00539CFB  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00539D01  83 C4 14                  ADD ESP,0x14
00539D04  57                        PUSH EDI
00539D05  E8 D6 83 1B 00            CALL 0x006f20e0
00539D0A  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
00539D11  74 43                     JZ 0x00539d56
00539D13  6A 01                     PUSH 0x1
00539D15  56                        PUSH ESI
00539D16  56                        PUSH ESI
00539D17  68 D0 75 7C 00            PUSH 0x7c75d0
00539D1C  E8 5B BA EC FF            CALL 0x0040577c
00539D21  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00539D27  83 C4 08                  ADD ESP,0x8
00539D2A  50                        PUSH EAX
00539D2B  6A 01                     PUSH 0x1
00539D2D  E8 AE 7F 1B 00            CALL 0x006f1ce0
00539D32  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00539D35  50                        PUSH EAX
00539D36  6A 01                     PUSH 0x1
00539D38  68 A4 00 00 00            PUSH 0xa4
00539D3D  6A 20                     PUSH 0x20
00539D3F  51                        PUSH ECX
00539D40  89 07                     MOV dword ptr [EDI],EAX
00539D42  E8 E2 94 EC FF            CALL 0x00403229
00539D47  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00539D4D  83 C4 14                  ADD ESP,0x14
00539D50  57                        PUSH EDI
00539D51  E8 8A 83 1B 00            CALL 0x006f20e0
LAB_00539d56:
00539D56  6A 01                     PUSH 0x1
00539D58  56                        PUSH ESI
00539D59  56                        PUSH ESI
00539D5A  68 BC 75 7C 00            PUSH 0x7c75bc
00539D5F  E8 18 BA EC FF            CALL 0x0040577c
00539D64  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00539D6A  83 C4 08                  ADD ESP,0x8
00539D6D  50                        PUSH EAX
00539D6E  6A 01                     PUSH 0x1
00539D70  E8 6B 7F 1B 00            CALL 0x006f1ce0
00539D75  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00539D78  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
00539D7E  89 07                     MOV dword ptr [EDI],EAX
00539D80  6A 0C                     PUSH 0xc
00539D82  BF 02 00 00 00            MOV EDI,0x2
00539D87  68 F3 00 00 00            PUSH 0xf3
00539D8C  57                        PUSH EDI
00539D8D  6A 6C                     PUSH 0x6c
00539D8F  56                        PUSH ESI
00539D90  52                        PUSH EDX
00539D91  E8 FA 6C 1D 00            CALL 0x00710a90
00539D96  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00539D9C  33 C0                     XOR EAX,EAX
00539D9E  80 FA 03                  CMP DL,0x3
00539DA1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00539DA7  0F 95 C0                  SETNZ AL
00539DAA  48                        DEC EAX
00539DAB  83 E0 05                  AND EAX,0x5
00539DAE  50                        PUSH EAX
00539DAF  6A FF                     PUSH -0x1
00539DB1  6A FE                     PUSH -0x2
00539DB3  51                        PUSH ECX
00539DB4  68 33 27 00 00            PUSH 0x2733
00539DB9  E8 82 63 17 00            CALL 0x006b0140
00539DBE  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
00539DC4  50                        PUSH EAX
00539DC5  E8 F6 7B 1D 00            CALL 0x007119c0
00539DCA  8B CB                     MOV ECX,EBX
00539DCC  E8 71 94 EC FF            CALL 0x00403242
00539DD1  56                        PUSH ESI
00539DD2  56                        PUSH ESI
00539DD3  56                        PUSH ESI
00539DD4  56                        PUSH ESI
00539DD5  56                        PUSH ESI
00539DD6  56                        PUSH ESI
00539DD7  68 00 C0 00 00            PUSH 0xc000
00539DDC  68 FF BF 00 00            PUSH 0xbfff
00539DE1  56                        PUSH ESI
00539DE2  68 94 38 7C 00            PUSH 0x7c3894
00539DE7  E8 90 B9 EC FF            CALL 0x0040577c
00539DEC  83 C4 08                  ADD ESP,0x8
00539DEF  8B CB                     MOV ECX,EBX
00539DF1  50                        PUSH EAX
00539DF2  6A 01                     PUSH 0x1
00539DF4  68 C7 00 00 00            PUSH 0xc7
00539DF9  68 71 01 00 00            PUSH 0x171
00539DFE  6A 01                     PUSH 0x1
00539E00  56                        PUSH ESI
00539E01  E8 85 9B EC FF            CALL 0x0040398b
00539E06  89 83 7C 01 00 00         MOV dword ptr [EBX + 0x17c],EAX
00539E0C  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
00539E11  3C 08                     CMP AL,0x8
00539E13  89 B5 7C FB FF FF         MOV dword ptr [EBP + 0xfffffb7c],ESI
00539E19  76 0F                     JBE 0x00539e2a
00539E1B  33 D2                     XOR EDX,EDX
00539E1D  8A D0                     MOV DL,AL
00539E1F  83 EA 08                  SUB EDX,0x8
00539E22  89 95 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDX
00539E28  EB 06                     JMP 0x00539e30
LAB_00539e2a:
00539E2A  89 B5 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],ESI
LAB_00539e30:
00539E30  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
00539E33  8B 83 C9 01 00 00         MOV EAX,dword ptr [EBX + 0x1c9]
00539E39  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00539E3C  81 C2 9C 01 00 00         ADD EDX,0x19c
00539E42  89 95 8C FB FF FF         MOV dword ptr [EBP + 0xfffffb8c],EDX
00539E48  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
00539E4B  3B D6                     CMP EDX,ESI
00539E4D  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
00539E53  89 8D 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ECX
00539E59  89 BD 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDI
00539E5F  C7 85 2C FF FF FF 00 62 00 00  MOV dword ptr [EBP + 0xffffff2c],0x6200
00539E69  89 BD 80 FB FF FF         MOV dword ptr [EBP + 0xfffffb80],EDI
00539E6F  89 B5 84 FB FF FF         MOV dword ptr [EBP + 0xfffffb84],ESI
00539E75  89 BD 88 FB FF FF         MOV dword ptr [EBP + 0xfffffb88],EDI
00539E7B  75 07                     JNZ 0x00539e84
00539E7D  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00539E80  F7 D8                     NEG EAX
00539E82  EB 03                     JMP 0x00539e87
LAB_00539e84:
00539E84  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00539e87:
00539E87  83 C0 6D                  ADD EAX,0x6d
00539E8A  89 8D E4 FB FF FF         MOV dword ptr [EBP + 0xfffffbe4],ECX
00539E90  89 85 90 FB FF FF         MOV dword ptr [EBP + 0xfffffb90],EAX
00539E96  89 BD E8 FB FF FF         MOV dword ptr [EBP + 0xfffffbe8],EDI
00539E9C  B8 01 00 00 00            MOV EAX,0x1
00539EA1  89 BD 00 FD FF FF         MOV dword ptr [EBP + 0xfffffd00],EDI
00539EA7  B9 5F 00 00 00            MOV ECX,0x5f
00539EAC  8D B5 84 FB FF FF         LEA ESI,[EBP + 0xfffffb84]
00539EB2  8D BD 04 FD FF FF         LEA EDI,[EBP + 0xfffffd04]
00539EB8  C7 85 94 FB FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffffb94],0x11
00539EC2  C7 85 98 FB FF FF 24 00 00 00  MOV dword ptr [EBP + 0xfffffb98],0x24
00539ECC  C7 85 94 FC FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffc94],0x1f4
00539ED6  C7 85 98 FC FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffc98],0x32
00539EE0  C7 85 EC FB FF FF 02 62 00 00  MOV dword ptr [EBP + 0xfffffbec],0x6202
00539EEA  89 85 8C FC FF FF         MOV dword ptr [EBP + 0xfffffc8c],EAX
00539EF0  89 85 90 FC FF FF         MOV dword ptr [EBP + 0xfffffc90],EAX
00539EF6  85 D2                     TEST EDX,EDX
00539EF8  F3 A5                     MOVSD.REP ES:EDI,ESI
00539EFA  75 07                     JNZ 0x00539f03
00539EFC  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00539EFF  F7 D8                     NEG EAX
00539F01  EB 03                     JMP 0x00539f06
LAB_00539f03:
00539F03  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00539f06:
00539F06  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00539F09  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
00539F0F  83 C0 1A                  ADD EAX,0x1a
00539F12  6A 00                     PUSH 0x0
00539F14  8D B3 C5 01 00 00         LEA ESI,[EBX + 0x1c5]
00539F1A  52                        PUSH EDX
00539F1B  89 85 10 FD FF FF         MOV dword ptr [EBP + 0xfffffd10],EAX
00539F21  C7 85 6C FD FF FF 01 62 00 00  MOV dword ptr [EBP + 0xfffffd6c],0x6201
00539F2B  8B 01                     MOV EAX,dword ptr [ECX]
00539F2D  6A 00                     PUSH 0x0
00539F2F  56                        PUSH ESI
00539F30  6A 04                     PUSH 0x4
00539F32  FF 50 08                  CALL dword ptr [EAX + 0x8]
00539F35  80 3D AF 8A 80 00 08      CMP byte ptr [0x00808aaf],0x8
00539F3C  76 1E                     JBE 0x00539f5c
00539F3E  8B 0E                     MOV ECX,dword ptr [ESI]
00539F40  8D 43 18                  LEA EAX,[EBX + 0x18]
00539F43  50                        PUSH EAX
00539F44  51                        PUSH ECX
00539F45  6A 02                     PUSH 0x2
00539F47  8B CB                     MOV ECX,EBX
00539F49  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00539F50  C7 43 2C 01 00 00 00      MOV dword ptr [EBX + 0x2c],0x1
00539F57  E8 24 C1 1A 00            CALL 0x006e6080
LAB_00539f5c:
00539F5C  8D 93 A1 01 00 00         LEA EDX,[EBX + 0x1a1]
00539F62  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
00539F66  BF FF B4 00 00            MOV EDI,0xb4ff
00539F6B  BE 1C 00 00 00            MOV ESI,0x1c
00539F70  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00539f73:
00539F73  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
00539F78  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
00539F7B  3A C8                     CMP CL,AL
00539F7D  73 10                     JNC 0x00539f8f
00539F7F  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00539F84  84 C0                     TEST AL,AL
00539F86  75 07                     JNZ 0x00539f8f
00539F88  B8 01 00 00 00            MOV EAX,0x1
00539F8D  EB 02                     JMP 0x00539f91
LAB_00539f8f:
00539F8F  33 C0                     XOR EAX,EAX
LAB_00539f91:
00539F91  6A 0E                     PUSH 0xe
00539F93  6A 16                     PUSH 0x16
00539F95  6A 00                     PUSH 0x0
00539F97  6A 00                     PUSH 0x0
00539F99  6A 00                     PUSH 0x0
00539F9B  8D 4F 10                  LEA ECX,[EDI + 0x10]
00539F9E  6A 00                     PUSH 0x0
00539FA0  51                        PUSH ECX
00539FA1  57                        PUSH EDI
00539FA2  6A 00                     PUSH 0x0
00539FA4  8D 56 FE                  LEA EDX,[ESI + -0x2]
00539FA7  6A 00                     PUSH 0x0
00539FA9  52                        PUSH EDX
00539FAA  6A 4D                     PUSH 0x4d
00539FAC  50                        PUSH EAX
00539FAD  6A 00                     PUSH 0x0
00539FAF  8B CB                     MOV ECX,EBX
00539FB1  E8 D5 99 EC FF            CALL 0x0040398b
00539FB6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00539FB9  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00539FBC  89 41 E0                  MOV dword ptr [ECX + -0x20],EAX
00539FBF  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
00539FC4  3A D0                     CMP DL,AL
00539FC6  73 10                     JNC 0x00539fd8
00539FC8  A0 83 87 80 00            MOV AL,[0x00808783]
00539FCD  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00539FD4  3C 03                     CMP AL,0x3
00539FD6  74 07                     JZ 0x00539fdf
LAB_00539fd8:
00539FD8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_00539fdf:
00539FDF  6A 00                     PUSH 0x0
00539FE1  6A 00                     PUSH 0x0
00539FE3  6A 00                     PUSH 0x0
00539FE5  6A 00                     PUSH 0x0
00539FE7  6A 00                     PUSH 0x0
00539FE9  8D 47 30                  LEA EAX,[EDI + 0x30]
00539FEC  6A 00                     PUSH 0x0
00539FEE  8D 4F 20                  LEA ECX,[EDI + 0x20]
00539FF1  50                        PUSH EAX
00539FF2  51                        PUSH ECX
00539FF3  6A 00                     PUSH 0x0
00539FF5  6A 01                     PUSH 0x1
00539FF7  6A 00                     PUSH 0x0
00539FF9  68 1C 20 7C 00            PUSH 0x7c201c
00539FFE  E8 79 B7 EC FF            CALL 0x0040577c
0053A003  83 C4 08                  ADD ESP,0x8
0053A006  50                        PUSH EAX
0053A007  E8 F4 8B 1B 00            CALL 0x006f2c00
0053A00C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053A00F  83 C4 0C                  ADD ESP,0xc
0053A012  8B CB                     MOV ECX,EBX
0053A014  50                        PUSH EAX
0053A015  6A 01                     PUSH 0x1
0053A017  56                        PUSH ESI
0053A018  68 83 01 00 00            PUSH 0x183
0053A01D  52                        PUSH EDX
0053A01E  6A 00                     PUSH 0x0
0053A020  E8 66 99 EC FF            CALL 0x0040398b
0053A025  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0053A028  83 C6 0F                  ADD ESI,0xf
0053A02B  89 01                     MOV dword ptr [ECX],EAX
0053A02D  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0053A030  FE C0                     INC AL
0053A032  47                        INC EDI
0053A033  83 C1 04                  ADD ECX,0x4
0053A036  3C 08                     CMP AL,0x8
0053A038  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0053A03B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053A03E  0F 82 2F FF FF FF         JC 0x00539f73
0053A044  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0053A04B  0F 85 28 01 00 00         JNZ 0x0053a179
0053A051  B9 16 00 00 00            MOV ECX,0x16
0053A056  33 C0                     XOR EAX,EAX
0053A058  8D 7D 98                  LEA EDI,[EBP + -0x68]
0053A05B  BE 01 00 00 00            MOV ESI,0x1
0053A060  F3 AB                     STOSD.REP ES:EDI
0053A062  B9 8C 00 00 00            MOV ECX,0x8c
0053A067  8D BD 4C F9 FF FF         LEA EDI,[EBP + 0xfffff94c]
0053A06D  F3 AB                     STOSD.REP ES:EDI
0053A06F  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
0053A072  8D 85 50 F9 FF FF         LEA EAX,[EBP + 0xfffff950]
0053A078  83 C1 27                  ADD ECX,0x27
0053A07B  BF 04 00 00 00            MOV EDI,0x4
LAB_0053a080:
0053A080  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
0053A083  89 70 FC                  MOV dword ptr [EAX + -0x4],ESI
0053A086  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0053A08C  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0053A08F  85 D2                     TEST EDX,EDX
0053A091  C7 40 10 13 00 00 00      MOV dword ptr [EAX + 0x10],0x13
0053A098  75 07                     JNZ 0x0053a0a1
0053A09A  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
0053A09D  F7 DA                     NEG EDX
0053A09F  EB 03                     JMP 0x0053a0a4
LAB_0053a0a1:
0053A0A1  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
LAB_0053a0a4:
0053A0A4  81 C2 A9 00 00 00         ADD EDX,0xa9
0053A0AA  46                        INC ESI
0053A0AB  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0053A0AE  C7 40 14 0E 00 00 00      MOV dword ptr [EAX + 0x14],0xe
0053A0B5  83 C1 5C                  ADD ECX,0x5c
0053A0B8  83 C0 70                  ADD EAX,0x70
0053A0BB  4F                        DEC EDI
0053A0BC  75 C2                     JNZ 0x0053a080
0053A0BE  8D 85 4C F9 FF FF         LEA EAX,[EBP + 0xfffff94c]
0053A0C4  B9 01 00 00 00            MOV ECX,0x1
0053A0C9  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0053A0CC  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0053A0CF  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0053A0D2  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0053A0D5  8D 45 98                  LEA EAX,[EBP + -0x68]
0053A0D8  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
0053A0DB  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0053A0DE  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0053A0E1  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0053A0E4  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0053A0E7  6A 00                     PUSH 0x0
0053A0E9  BA 02 00 00 00            MOV EDX,0x2
0053A0EE  50                        PUSH EAX
0053A0EF  8D 83 C1 01 00 00         LEA EAX,[EBX + 0x1c1]
0053A0F5  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
0053A0F8  C7 45 B0 08 B2 00 00      MOV dword ptr [EBP + -0x50],0xb208
0053A0FF  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0053A102  C7 45 D0 09 B2 00 00      MOV dword ptr [EBP + -0x30],0xb209
0053A109  8B 11                     MOV EDX,dword ptr [ECX]
0053A10B  6A 00                     PUSH 0x0
0053A10D  50                        PUSH EAX
0053A10E  6A 05                     PUSH 0x5
0053A110  FF 52 08                  CALL dword ptr [EDX + 0x8]
0053A113  BF B8 42 00 00            MOV EDI,0x42b8
0053A118  BE 3C 00 00 00            MOV ESI,0x3c
0053A11D  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
LAB_0053a124:
0053A124  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0053A127  6A 0E                     PUSH 0xe
0053A129  6A 46                     PUSH 0x46
0053A12B  68 A9 00 00 00            PUSH 0xa9
0053A130  56                        PUSH ESI
0053A131  6A 00                     PUSH 0x0
0053A133  51                        PUSH ECX
0053A134  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
0053A13A  E8 51 69 1D 00            CALL 0x00710a90
0053A13F  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053A144  33 D2                     XOR EDX,EDX
0053A146  3C 03                     CMP AL,0x3
0053A148  A1 18 76 80 00            MOV EAX,[0x00807618]
0053A14D  0F 95 C2                  SETNZ DL
0053A150  4A                        DEC EDX
0053A151  83 E2 05                  AND EDX,0x5
0053A154  52                        PUSH EDX
0053A155  6A FF                     PUSH -0x1
0053A157  6A 00                     PUSH 0x0
0053A159  50                        PUSH EAX
0053A15A  57                        PUSH EDI
0053A15B  E8 E0 5F 17 00            CALL 0x006b0140
0053A160  8B 8B DD 01 00 00         MOV ECX,dword ptr [EBX + 0x1dd]
0053A166  50                        PUSH EAX
0053A167  E8 54 78 1D 00            CALL 0x007119c0
0053A16C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053A16F  83 C6 5C                  ADD ESI,0x5c
0053A172  47                        INC EDI
0053A173  48                        DEC EAX
0053A174  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053A177  75 AB                     JNZ 0x0053a124
LAB_0053a179:
0053A179  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
0053A17F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053A185  5F                        POP EDI
0053A186  5E                        POP ESI
0053A187  5B                        POP EBX
0053A188  8B E5                     MOV ESP,EBP
0053A18A  5D                        POP EBP
0053A18B  C3                        RET
LAB_0053a18c:
0053A18C  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0053A192  68 9C 75 7C 00            PUSH 0x7c759c
0053A197  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053A19C  56                        PUSH ESI
0053A19D  57                        PUSH EDI
0053A19E  68 81 00 00 00            PUSH 0x81
0053A1A3  68 74 75 7C 00            PUSH 0x7c7574
0053A1A8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053A1AE  E8 1D 33 17 00            CALL 0x006ad4d0
0053A1B3  83 C4 18                  ADD ESP,0x18
0053A1B6  85 C0                     TEST EAX,EAX
0053A1B8  74 01                     JZ 0x0053a1bb
0053A1BA  CC                        INT3
LAB_0053a1bb:
0053A1BB  68 81 00 00 00            PUSH 0x81
0053A1C0  68 74 75 7C 00            PUSH 0x7c7574
0053A1C5  57                        PUSH EDI
0053A1C6  56                        PUSH ESI
0053A1C7  E8 74 BC 16 00            CALL 0x006a5e40
0053A1CC  5F                        POP EDI
0053A1CD  5E                        POP ESI
0053A1CE  5B                        POP EBX
0053A1CF  8B E5                     MOV ESP,EBP
0053A1D1  5D                        POP EBP
0053A1D2  C3                        RET
