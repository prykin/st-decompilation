FUN_0060a000:
0060A000  55                        PUSH EBP
0060A001  8B EC                     MOV EBP,ESP
0060A003  83 EC 20                  SUB ESP,0x20
0060A006  57                        PUSH EDI
0060A007  8B F9                     MOV EDI,ECX
0060A009  33 C9                     XOR ECX,ECX
0060A00B  8B 87 34 02 00 00         MOV EAX,dword ptr [EDI + 0x234]
0060A011  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0060A014  3B C1                     CMP EAX,ECX
0060A016  0F 84 12 03 00 00         JZ 0x0060a32e
0060A01C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0060A01F  8B 8F 0D 02 00 00         MOV ECX,dword ptr [EDI + 0x20d]
0060A025  53                        PUSH EBX
0060A026  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0060A029  83 F9 04                  CMP ECX,0x4
0060A02C  56                        PUSH ESI
0060A02D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0060A030  0F 87 A0 00 00 00         JA 0x0060a0d6
switchD_0060a036::switchD:
0060A036  FF 24 8D 38 A3 60 00      JMP dword ptr [ECX*0x4 + 0x60a338]
switchD_0060a036::caseD_0:
0060A03D  83 BF F5 01 00 00 4D      CMP dword ptr [EDI + 0x1f5],0x4d
0060A044  75 19                     JNZ 0x0060a05f
0060A046  8B B7 1D 02 00 00         MOV ESI,dword ptr [EDI + 0x21d]
0060A04C  8B C3                     MOV EAX,EBX
0060A04E  99                        CDQ
0060A04F  F7 FE                     IDIV ESI
0060A051  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060A054  B8 ED 03 00 00            MOV EAX,0x3ed
0060A059  99                        CDQ
0060A05A  F7 FE                     IDIV ESI
0060A05C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0060a05f:
0060A05F  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0060A062  83 F9 03                  CMP ECX,0x3
0060A065  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
0060A06B  75 0C                     JNZ 0x0060a079
0060A06D  8B 87 F9 01 00 00         MOV EAX,dword ptr [EDI + 0x1f9]
0060A073  89 87 FD 01 00 00         MOV dword ptr [EDI + 0x1fd],EAX
LAB_0060a079:
0060A079  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0060a07c:
0060A07C  8B 97 FD 01 00 00         MOV EDX,dword ptr [EDI + 0x1fd]
0060A082  33 C9                     XOR ECX,ECX
0060A084  3B D9                     CMP EBX,ECX
0060A086  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0060A089  89 97 26 02 00 00         MOV dword ptr [EDI + 0x226],EDX
0060A08F  C7 87 30 02 00 00 01 00 00 00  MOV dword ptr [EDI + 0x230],0x1
0060A099  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0060A09C  0F 8E 77 02 00 00         JLE 0x0060a319
LAB_0060a0a2:
0060A0A2  83 BF F5 01 00 00 4D      CMP dword ptr [EDI + 0x1f5],0x4d
0060A0A9  0F 85 6A 01 00 00         JNZ 0x0060a219
0060A0AF  8B 87 1D 02 00 00         MOV EAX,dword ptr [EDI + 0x21d]
0060A0B5  33 DB                     XOR EBX,EBX
0060A0B7  85 C0                     TEST EAX,EAX
0060A0B9  0F 8E 48 02 00 00         JLE 0x0060a307
0060A0BF  EB 23                     JMP 0x0060a0e4
switchD_0060a036::caseD_2:
0060A0C1  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0060A0C4  8B C3                     MOV EAX,EBX
0060A0C6  99                        CDQ
0060A0C7  D8 3D 28 CD 79 00         FDIVR float ptr [0x0079cd28]
0060A0CD  2B C2                     SUB EAX,EDX
0060A0CF  D1 F8                     SAR EAX,0x1
0060A0D1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0060A0D4  EB A6                     JMP 0x0060a07c
switchD_0060a036::caseD_1:
0060A0D6  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0060A0D9  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
0060A0DF  EB 9B                     JMP 0x0060a07c
LAB_0060a0e1:
0060A0E1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0060a0e4:
0060A0E4  8B C3                     MOV EAX,EBX
0060A0E6  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0060A0EA  03 C1                     ADD EAX,ECX
0060A0EC  8B 8F 34 02 00 00         MOV ECX,dword ptr [EDI + 0x234]
0060A0F2  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
0060A0F5  0F 83 F7 00 00 00         JNC 0x0060a1f2
0060A0FB  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0060A0FE  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0060A101  0F AF F0                  IMUL ESI,EAX
0060A104  03 F2                     ADD ESI,EDX
0060A106  85 F6                     TEST ESI,ESI
0060A108  0F 84 E4 00 00 00         JZ 0x0060a1f2
0060A10E  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0060A111  D8 C9                     FMUL ST1
0060A113  D9 56 2C                  FST float ptr [ESI + 0x2c]
0060A116  D9 C0                     FLD ST0
0060A118  D9 FF                     FCOS
0060A11A  DA 8F FD 01 00 00         FIMUL dword ptr [EDI + 0x1fd]
0060A120  E8 63 41 12 00            CALL 0x0072e288
0060A125  D9 FE                     FSIN
0060A127  03 87 E9 01 00 00         ADD EAX,dword ptr [EDI + 0x1e9]
0060A12D  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0060A130  DA 8F FD 01 00 00         FIMUL dword ptr [EDI + 0x1fd]
0060A136  E8 4D 41 12 00            CALL 0x0072e288
0060A13B  03 87 ED 01 00 00         ADD EAX,dword ptr [EDI + 0x1ed]
0060A141  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0060A144  8B C3                     MOV EAX,EBX
0060A146  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
0060A14A  03 87 F1 01 00 00         ADD EAX,dword ptr [EDI + 0x1f1]
0060A150  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0060A153  8B 8F E9 01 00 00         MOV ECX,dword ptr [EDI + 0x1e9]
0060A159  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
0060A15C  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
0060A162  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
0060A165  8B 87 F1 01 00 00         MOV EAX,dword ptr [EDI + 0x1f1]
0060A16B  85 DB                     TEST EBX,EBX
0060A16D  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0060A170  C7 46 04 FF FF FF FF      MOV dword ptr [ESI + 0x4],0xffffffff
0060A177  75 29                     JNZ 0x0060a1a2
0060A179  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0060A17C  8B 8F 15 02 00 00         MOV ECX,dword ptr [EDI + 0x215]
0060A182  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060A185  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
0060A188  89 0E                     MOV dword ptr [ESI],ECX
0060A18A  B9 03 00 00 00            MOV ECX,0x3
0060A18F  99                        CDQ
0060A190  F7 F9                     IDIV ECX
0060A192  C7 46 28 07 00 00 00      MOV dword ptr [ESI + 0x28],0x7
0060A199  85 D2                     TEST EDX,EDX
0060A19B  75 55                     JNZ 0x0060a1f2
0060A19D  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
0060A1A0  EB 50                     JMP 0x0060a1f2
LAB_0060a1a2:
0060A1A2  8B 97 11 02 00 00         MOV EDX,dword ptr [EDI + 0x211]
0060A1A8  C7 46 28 00 00 00 00      MOV dword ptr [ESI + 0x28],0x0
0060A1AF  89 16                     MOV dword ptr [ESI],EDX
0060A1B1  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0060A1B4  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0060A1BA  8B 8F FD 01 00 00         MOV ECX,dword ptr [EDI + 0x1fd]
0060A1C0  05 39 30 00 00            ADD EAX,0x3039
0060A1C5  83 C1 64                  ADD ECX,0x64
0060A1C8  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
0060A1CB  C1 E8 10                  SHR EAX,0x10
0060A1CE  81 C1 39 FF FF FF         ADD ECX,0xffffff39
0060A1D4  33 D2                     XOR EDX,EDX
0060A1D6  F7 F1                     DIV ECX
0060A1D8  81 C2 C8 00 00 00         ADD EDX,0xc8
0060A1DE  33 C0                     XOR EAX,EAX
0060A1E0  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0060A1E3  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0060A1E6  DF 6D E0                  FILD qword ptr [EBP + -0x20]
0060A1E9  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0060A1EC  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0060A1EF  D9 5E 30                  FSTP float ptr [ESI + 0x30]
LAB_0060a1f2:
0060A1F2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060A1F5  40                        INC EAX
0060A1F6  83 F8 07                  CMP EAX,0x7
0060A1F9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060A1FC  7C 07                     JL 0x0060a205
0060A1FE  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_0060a205:
0060A205  8B 87 1D 02 00 00         MOV EAX,dword ptr [EDI + 0x21d]
0060A20B  43                        INC EBX
0060A20C  3B D8                     CMP EBX,EAX
0060A20E  0F 8C CD FE FF FF         JL 0x0060a0e1
0060A214  E9 EE 00 00 00            JMP 0x0060a307
LAB_0060a219:
0060A219  8B 87 34 02 00 00         MOV EAX,dword ptr [EDI + 0x234]
0060A21F  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0060A222  0F 83 DF 00 00 00         JNC 0x0060a307
0060A228  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0060A22B  0F AF F1                  IMUL ESI,ECX
0060A22E  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0060A231  85 F6                     TEST ESI,ESI
0060A233  0F 84 CE 00 00 00         JZ 0x0060a307
0060A239  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0060A23C  D9 55 E8                  FST float ptr [EBP + -0x18]
0060A23F  D8 C9                     FMUL ST1
0060A241  D9 56 2C                  FST float ptr [ESI + 0x2c]
0060A244  D9 C0                     FLD ST0
0060A246  D9 FF                     FCOS
0060A248  DA 8F FD 01 00 00         FIMUL dword ptr [EDI + 0x1fd]
0060A24E  E8 35 40 12 00            CALL 0x0072e288
0060A253  D9 FE                     FSIN
0060A255  03 87 E9 01 00 00         ADD EAX,dword ptr [EDI + 0x1e9]
0060A25B  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0060A25E  DA 8F FD 01 00 00         FIMUL dword ptr [EDI + 0x1fd]
0060A264  E8 1F 40 12 00            CALL 0x0072e288
0060A269  03 87 ED 01 00 00         ADD EAX,dword ptr [EDI + 0x1ed]
0060A26F  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0060A272  8B 8F F1 01 00 00         MOV ECX,dword ptr [EDI + 0x1f1]
0060A278  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
0060A27B  8B 97 E9 01 00 00         MOV EDX,dword ptr [EDI + 0x1e9]
0060A281  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
0060A284  8B 87 ED 01 00 00         MOV EAX,dword ptr [EDI + 0x1ed]
0060A28A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0060A28D  8B 87 F5 01 00 00         MOV EAX,dword ptr [EDI + 0x1f5]
0060A293  83 F8 4D                  CMP EAX,0x4d
0060A296  75 12                     JNZ 0x0060a2aa
0060A298  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0060A29B  B8 64 00 00 00            MOV EAX,0x64
0060A2A0  03 D0                     ADD EDX,EAX
0060A2A2  03 C8                     ADD ECX,EAX
0060A2A4  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
0060A2A7  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
LAB_0060a2aa:
0060A2AA  8B 8F F1 01 00 00         MOV ECX,dword ptr [EDI + 0x1f1]
0060A2B0  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
0060A2B3  8B 87 0D 02 00 00         MOV EAX,dword ptr [EDI + 0x20d]
0060A2B9  83 F8 04                  CMP EAX,0x4
0060A2BC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0060A2BF  75 11                     JNZ 0x0060a2d2
0060A2C1  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
0060A2C4  7F 0C                     JG 0x0060a2d2
0060A2C6  D9 45 E8                  FLD float ptr [EBP + -0x18]
0060A2C9  D8 8F 2A 02 00 00         FMUL float ptr [EDI + 0x22a]
0060A2CF  D9 5E 30                  FSTP float ptr [ESI + 0x30]
LAB_0060a2d2:
0060A2D2  85 C0                     TEST EAX,EAX
0060A2D4  7E 0F                     JLE 0x0060a2e5
0060A2D6  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
0060A2D9  7E 0A                     JLE 0x0060a2e5
0060A2DB  8B 97 15 02 00 00         MOV EDX,dword ptr [EDI + 0x215]
0060A2E1  89 16                     MOV dword ptr [ESI],EDX
0060A2E3  EB 08                     JMP 0x0060a2ed
LAB_0060a2e5:
0060A2E5  8B 87 11 02 00 00         MOV EAX,dword ptr [EDI + 0x211]
0060A2EB  89 06                     MOV dword ptr [ESI],EAX
LAB_0060a2ed:
0060A2ED  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060A2F0  C7 46 28 00 00 00 00      MOV dword ptr [ESI + 0x28],0x0
0060A2F7  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0060A2FA  40                        INC EAX
0060A2FB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060A2FE  78 07                     JS 0x0060a307
0060A300  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_0060a307:
0060A307  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0060A30A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060A30D  41                        INC ECX
0060A30E  3B C8                     CMP ECX,EAX
0060A310  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0060A313  0F 8C 89 FD FF FF         JL 0x0060a0a2
LAB_0060a319:
0060A319  5E                        POP ESI
0060A31A  C7 87 54 02 00 00 00 00 00 00  MOV dword ptr [EDI + 0x254],0x0
0060A324  5B                        POP EBX
0060A325  33 C0                     XOR EAX,EAX
0060A327  DD D8                     FSTP ST0
0060A329  5F                        POP EDI
0060A32A  8B E5                     MOV ESP,EBP
0060A32C  5D                        POP EBP
0060A32D  C3                        RET
LAB_0060a32e:
0060A32E  33 C0                     XOR EAX,EAX
0060A330  5F                        POP EDI
0060A331  8B E5                     MOV ESP,EBP
0060A333  5D                        POP EBP
0060A334  C3                        RET
