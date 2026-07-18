STGroupBoatC::GrpLoadObj:
0049DFA0  55                        PUSH EBP
0049DFA1  8B EC                     MOV EBP,ESP
0049DFA3  81 EC 80 00 00 00         SUB ESP,0x80
0049DFA9  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049DFAC  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049DFB2  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0049DFB5  53                        PUSH EBX
0049DFB6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049DFB9  56                        PUSH ESI
0049DFBA  33 F6                     XOR ESI,ESI
0049DFBC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0049DFBF  57                        PUSH EDI
0049DFC0  8D 4D 84                  LEA ECX,[EBP + -0x7c]
0049DFC3  8D 45 80                  LEA EAX,[EBP + -0x80]
0049DFC6  56                        PUSH ESI
0049DFC7  51                        PUSH ECX
0049DFC8  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0049DFCB  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0049DFCE  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0049DFD1  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
0049DFD4  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
0049DFDB  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
0049DFDE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049DFE3  E8 08 F8 28 00            CALL 0x0072d7f0
0049DFE8  8B F8                     MOV EDI,EAX
0049DFEA  83 C4 08                  ADD ESP,0x8
0049DFED  3B FE                     CMP EDI,ESI
0049DFEF  0F 85 9F 03 00 00         JNZ 0x0049e394
0049DFF5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049DFF8  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
0049DFFB  83 F8 01                  CMP EAX,0x1
0049DFFE  74 08                     JZ 0x0049e008
0049E000  3B C6                     CMP EAX,ESI
0049E002  0F 85 65 02 00 00         JNZ 0x0049e26d
LAB_0049e008:
0049E008  B9 15 00 00 00            MOV ECX,0x15
0049E00D  33 C0                     XOR EAX,EAX
0049E00F  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049E015  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049E018  F3 AB                     STOSD.REP ES:EDI
0049E01A  8B 83 78 01 00 00         MOV EAX,dword ptr [EBX + 0x178]
0049E020  89 73 65                  MOV dword ptr [EBX + 0x65],ESI
0049E023  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049E029  52                        PUSH EDX
0049E02A  50                        PUSH EAX
0049E02B  E8 A0 82 24 00            CALL 0x006e62d0
0049E030  83 F8 FC                  CMP EAX,-0x4
0049E033  75 0B                     JNZ 0x0049e040
0049E035  33 C0                     XOR EAX,EAX
0049E037  5F                        POP EDI
0049E038  5E                        POP ESI
0049E039  5B                        POP EBX
0049E03A  8B E5                     MOV ESP,EBP
0049E03C  5D                        POP EBP
0049E03D  C2 04 00                  RET 0x4
LAB_0049e040:
0049E040  8D B3 A7 02 00 00         LEA ESI,[EBX + 0x2a7]
0049E046  8D 83 A5 02 00 00         LEA EAX,[EBX + 0x2a5]
0049E04C  8D 8B A3 02 00 00         LEA ECX,[EBX + 0x2a3]
0049E052  56                        PUSH ESI
0049E053  50                        PUSH EAX
0049E054  51                        PUSH ECX
0049E055  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E058  E8 AE 7E F6 FF            CALL 0x00405f0b
0049E05D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E060  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0049E063  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0049E06A  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0049E06D  89 93 A9 02 00 00         MOV dword ptr [EBX + 0x2a9],EDX
0049E073  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049E078  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0049E07E  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0049E081  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0049E084  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049E087  85 C0                     TEST EAX,EAX
0049E089  0F 8E 2D 01 00 00         JLE 0x0049e1bc
LAB_0049e08f:
0049E08F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0049E092  8D 4D F8                  LEA ECX,[EBP + -0x8]
0049E095  51                        PUSH ECX
0049E096  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049E099  E8 D2 EB 20 00            CALL 0x006acc70
0049E09E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049E0A1  66 3D FF FF               CMP AX,0xffff
0049E0A5  0F 84 FF 00 00 00         JZ 0x0049e1aa
0049E0AB  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049E0AE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049E0B4  6A 01                     PUSH 0x1
0049E0B6  50                        PUSH EAX
0049E0B7  52                        PUSH EDX
0049E0B8  E8 FD 47 F6 FF            CALL 0x004028ba
0049E0BD  85 C0                     TEST EAX,EAX
0049E0BF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0049E0C2  75 1D                     JNZ 0x0049e0e1
0049E0C4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049E0C9  68 5B 0A 00 00            PUSH 0xa5b
0049E0CE  68 3C BE 7A 00            PUSH 0x7abe3c
0049E0D3  50                        PUSH EAX
0049E0D4  68 04 00 FE AF            PUSH 0xaffe0004
0049E0D9  E8 62 7D 20 00            CALL 0x006a5e40
0049E0DE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0049e0e1:
0049E0E1  8B 10                     MOV EDX,dword ptr [EAX]
0049E0E3  8B C8                     MOV ECX,EAX
0049E0E5  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0049E0EB  85 C0                     TEST EAX,EAX
0049E0ED  0F 84 B7 00 00 00         JZ 0x0049e1aa
0049E0F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E0F6  E8 5D 6D F6 FF            CALL 0x00404e58
0049E0FB  85 C0                     TEST EAX,EAX
0049E0FD  0F 85 88 00 00 00         JNZ 0x0049e18b
0049E103  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E106  8B 01                     MOV EAX,dword ptr [ECX]
0049E108  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049E10B  83 F8 07                  CMP EAX,0x7
0049E10E  74 0A                     JZ 0x0049e11a
0049E110  83 F8 13                  CMP EAX,0x13
0049E113  74 05                     JZ 0x0049e11a
0049E115  83 F8 1B                  CMP EAX,0x1b
0049E118  75 61                     JNZ 0x0049e17b
LAB_0049e11a:
0049E11A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E11D  E8 E6 44 F6 FF            CALL 0x00402608
0049E122  85 C0                     TEST EAX,EAX
0049E124  75 55                     JNZ 0x0049e17b
0049E126  66 8B 8B A3 02 00 00      MOV CX,word ptr [EBX + 0x2a3]
0049E12D  66 8B 93 A5 02 00 00      MOV DX,word ptr [EBX + 0x2a5]
0049E134  66 8B 06                  MOV AX,word ptr [ESI]
0049E137  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
0049E13B  8B 8B A9 02 00 00         MOV ECX,dword ptr [EBX + 0x2a9]
0049E141  66 89 55 CA               MOV word ptr [EBP + -0x36],DX
0049E145  8D 55 C4                  LEA EDX,[EBP + -0x3c]
0049E148  89 4D CE                  MOV dword ptr [EBP + -0x32],ECX
0049E14B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E14E  52                        PUSH EDX
0049E14F  6A 0F                     PUSH 0xf
0049E151  66 89 45 CC               MOV word ptr [EBP + -0x34],AX
0049E155  E8 CC 3F F6 FF            CALL 0x00402126
0049E15A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049E15D  85 C0                     TEST EAX,EAX
0049E15F  75 10                     JNZ 0x0049e171
0049E161  6A 01                     PUSH 0x1
0049E163  6A 02                     PUSH 0x2
0049E165  6A 01                     PUSH 0x1
0049E167  6A 00                     PUSH 0x0
0049E169  E8 22 01 21 00            CALL 0x006ae290
0049E16E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0049e171:
0049E171  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0049E174  8D 45 F8                  LEA EAX,[EBP + -0x8]
0049E177  50                        PUSH EAX
0049E178  51                        PUSH ECX
0049E179  EB 2A                     JMP 0x0049e1a5
LAB_0049e17b:
0049E17B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E17E  8D 55 E8                  LEA EDX,[EBP + -0x18]
0049E181  52                        PUSH EDX
0049E182  6A 03                     PUSH 0x3
0049E184  E8 9D 3F F6 FF            CALL 0x00402126
0049E189  EB 1F                     JMP 0x0049e1aa
LAB_0049e18b:
0049E18B  85 FF                     TEST EDI,EDI
0049E18D  75 11                     JNZ 0x0049e1a0
0049E18F  6A 01                     PUSH 0x1
0049E191  6A 02                     PUSH 0x2
0049E193  6A 01                     PUSH 0x1
0049E195  57                        PUSH EDI
0049E196  E8 F5 00 21 00            CALL 0x006ae290
0049E19B  8B F8                     MOV EDI,EAX
0049E19D  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
LAB_0049e1a0:
0049E1A0  8D 45 F8                  LEA EAX,[EBP + -0x8]
0049E1A3  50                        PUSH EAX
0049E1A4  57                        PUSH EDI
LAB_0049e1a5:
0049E1A5  E8 16 00 21 00            CALL 0x006ae1c0
LAB_0049e1aa:
0049E1AA  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049E1AD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0049E1B0  40                        INC EAX
0049E1B1  3B C1                     CMP EAX,ECX
0049E1B3  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0049E1B6  0F 8C D3 FE FF FF         JL 0x0049e08f
LAB_0049e1bc:
0049E1BC  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0049E1BF  85 F6                     TEST ESI,ESI
0049E1C1  74 1B                     JZ 0x0049e1de
0049E1C3  85 FF                     TEST EDI,EDI
0049E1C5  74 13                     JZ 0x0049e1da
0049E1C7  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049E1CA  57                        PUSH EDI
0049E1CB  56                        PUSH ESI
0049E1CC  51                        PUSH ECX
0049E1CD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049E1D3  E8 C3 5B F6 FF            CALL 0x00403d9b
0049E1D8  EB 63                     JMP 0x0049e23d
LAB_0049e1da:
0049E1DA  85 F6                     TEST ESI,ESI
0049E1DC  75 63                     JNZ 0x0049e241
LAB_0049e1de:
0049E1DE  85 FF                     TEST EDI,EDI
0049E1E0  74 50                     JZ 0x0049e232
0049E1E2  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0049E1E5  33 F6                     XOR ESI,ESI
0049E1E7  85 C0                     TEST EAX,EAX
0049E1E9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0049E1EC  7E 3A                     JLE 0x0049e228
LAB_0049e1ee:
0049E1EE  8D 55 F8                  LEA EDX,[EBP + -0x8]
0049E1F1  8B CF                     MOV ECX,EDI
0049E1F3  52                        PUSH EDX
0049E1F4  8B D6                     MOV EDX,ESI
0049E1F6  E8 75 EA 20 00            CALL 0x006acc70
0049E1FB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049E1FE  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049E201  6A 01                     PUSH 0x1
0049E203  50                        PUSH EAX
0049E204  51                        PUSH ECX
0049E205  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049E20B  E8 AA 46 F6 FF            CALL 0x004028ba
0049E210  8D 55 E8                  LEA EDX,[EBP + -0x18]
0049E213  8B C8                     MOV ECX,EAX
0049E215  52                        PUSH EDX
0049E216  6A 03                     PUSH 0x3
0049E218  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0049E21B  E8 06 3F F6 FF            CALL 0x00402126
0049E220  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049E223  46                        INC ESI
0049E224  3B F0                     CMP ESI,EAX
0049E226  7C C6                     JL 0x0049e1ee
LAB_0049e228:
0049E228  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0049E22B  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0049e232:
0049E232  85 F6                     TEST ESI,ESI
0049E234  75 0B                     JNZ 0x0049e241
0049E236  85 FF                     TEST EDI,EDI
0049E238  75 03                     JNZ 0x0049e23d
0049E23A  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
LAB_0049e23d:
0049E23D  85 F6                     TEST ESI,ESI
0049E23F  74 06                     JZ 0x0049e247
LAB_0049e241:
0049E241  56                        PUSH ESI
0049E242  E8 C9 FE 20 00            CALL 0x006ae110
LAB_0049e247:
0049E247  85 FF                     TEST EDI,EDI
0049E249  74 06                     JZ 0x0049e251
0049E24B  57                        PUSH EDI
0049E24C  E8 BF FE 20 00            CALL 0x006ae110
LAB_0049e251:
0049E251  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049E256  68 86 0A 00 00            PUSH 0xa86
0049E25B  68 3C BE 7A 00            PUSH 0x7abe3c
0049E260  50                        PUSH EAX
0049E261  68 09 00 FE AF            PUSH 0xaffe0009
0049E266  E8 D5 7B 20 00            CALL 0x006a5e40
0049E26B  33 F6                     XOR ESI,ESI
LAB_0049e26d:
0049E26D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049E273  33 D2                     XOR EDX,EDX
0049E275  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0049E27B  B9 14 00 00 00            MOV ECX,0x14
0049E280  F7 F1                     DIV ECX
0049E282  85 D2                     TEST EDX,EDX
0049E284  0F 85 F5 00 00 00         JNZ 0x0049e37f
0049E28A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049E28D  33 FF                     XOR EDI,EDI
0049E28F  3B C6                     CMP EAX,ESI
0049E291  0F 8E DB 00 00 00         JLE 0x0049e372
LAB_0049e297:
0049E297  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049E29A  8D 55 F8                  LEA EDX,[EBP + -0x8]
0049E29D  52                        PUSH EDX
0049E29E  8B D7                     MOV EDX,EDI
0049E2A0  E8 CB E9 20 00            CALL 0x006acc70
0049E2A5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049E2A8  66 3D FF FF               CMP AX,0xffff
0049E2AC  0F 84 B4 00 00 00         JZ 0x0049e366
0049E2B2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049E2B8  6A 01                     PUSH 0x1
0049E2BA  50                        PUSH EAX
0049E2BB  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049E2BE  50                        PUSH EAX
0049E2BF  E8 F6 45 F6 FF            CALL 0x004028ba
0049E2C4  3B C6                     CMP EAX,ESI
0049E2C6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0049E2C9  75 1E                     JNZ 0x0049e2e9
0049E2CB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049E2D1  68 8E 0A 00 00            PUSH 0xa8e
0049E2D6  68 3C BE 7A 00            PUSH 0x7abe3c
0049E2DB  51                        PUSH ECX
0049E2DC  68 04 00 FE AF            PUSH 0xaffe0004
0049E2E1  E8 5A 7B 20 00            CALL 0x006a5e40
0049E2E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0049e2e9:
0049E2E9  8B 10                     MOV EDX,dword ptr [EAX]
0049E2EB  8B C8                     MOV ECX,EAX
0049E2ED  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0049E2F3  85 C0                     TEST EAX,EAX
0049E2F5  74 6F                     JZ 0x0049e366
0049E2F7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E2FA  8B 01                     MOV EAX,dword ptr [ECX]
0049E2FC  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049E2FF  83 F8 07                  CMP EAX,0x7
0049E302  74 0A                     JZ 0x0049e30e
0049E304  83 F8 13                  CMP EAX,0x13
0049E307  74 05                     JZ 0x0049e30e
0049E309  83 F8 1B                  CMP EAX,0x1b
0049E30C  75 58                     JNZ 0x0049e366
LAB_0049e30e:
0049E30E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E311  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
0049E318  E8 EB 42 F6 FF            CALL 0x00402608
0049E31D  3B 83 A9 02 00 00         CMP EAX,dword ptr [EBX + 0x2a9]
0049E323  75 1E                     JNZ 0x0049e343
0049E325  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049E32B  68 95 0A 00 00            PUSH 0xa95
0049E330  68 3C BE 7A 00            PUSH 0x7abe3c
0049E335  51                        PUSH ECX
0049E336  68 09 00 FE AF            PUSH 0xaffe0009
0049E33B  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0049E33E  E8 FD 7A 20 00            CALL 0x006a5e40
LAB_0049e343:
0049E343  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E346  E8 91 4B F6 FF            CALL 0x00402edc
0049E34B  83 F8 0F                  CMP EAX,0xf
0049E34E  74 0F                     JZ 0x0049e35f
0049E350  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049E353  6A 0F                     PUSH 0xf
0049E355  E8 9F 6A F6 FF            CALL 0x00404df9
0049E35A  83 F8 01                  CMP EAX,0x1
0049E35D  75 07                     JNZ 0x0049e366
LAB_0049e35f:
0049E35F  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_0049e366:
0049E366  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049E369  47                        INC EDI
0049E36A  3B F8                     CMP EDI,EAX
0049E36C  0F 8C 25 FF FF FF         JL 0x0049e297
LAB_0049e372:
0049E372  39 75 DC                  CMP dword ptr [EBP + -0x24],ESI
0049E375  74 05                     JZ 0x0049e37c
0049E377  39 75 D8                  CMP dword ptr [EBP + -0x28],ESI
0049E37A  75 03                     JNZ 0x0049e37f
LAB_0049e37c:
0049E37C  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
LAB_0049e37f:
0049E37F  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0049E382  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0049e388:
0049E388  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049E38B  5F                        POP EDI
0049E38C  5E                        POP ESI
0049E38D  5B                        POP EBX
0049E38E  8B E5                     MOV ESP,EBP
0049E390  5D                        POP EBP
0049E391  C2 04 00                  RET 0x4
LAB_0049e394:
0049E394  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0049E397  81 FF 09 00 FE AF         CMP EDI,0xaffe0009
0049E39D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049E3A2  74 E4                     JZ 0x0049e388
0049E3A4  68 74 C0 7A 00            PUSH 0x7ac074
0049E3A9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049E3AE  57                        PUSH EDI
0049E3AF  56                        PUSH ESI
0049E3B0  68 A0 0A 00 00            PUSH 0xaa0
0049E3B5  68 3C BE 7A 00            PUSH 0x7abe3c
0049E3BA  E8 11 F1 20 00            CALL 0x006ad4d0
0049E3BF  83 C4 18                  ADD ESP,0x18
0049E3C2  85 C0                     TEST EAX,EAX
0049E3C4  74 01                     JZ 0x0049e3c7
0049E3C6  CC                        INT3
LAB_0049e3c7:
0049E3C7  68 A1 0A 00 00            PUSH 0xaa1
0049E3CC  68 3C BE 7A 00            PUSH 0x7abe3c
0049E3D1  56                        PUSH ESI
0049E3D2  57                        PUSH EDI
0049E3D3  E8 68 7A 20 00            CALL 0x006a5e40
0049E3D8  5F                        POP EDI
0049E3D9  5E                        POP ESI
0049E3DA  83 C8 FF                  OR EAX,0xffffffff
0049E3DD  5B                        POP EBX
0049E3DE  8B E5                     MOV ESP,EBP
0049E3E0  5D                        POP EBP
0049E3E1  C2 04 00                  RET 0x4
