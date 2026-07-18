STGroupBoatC::GrpDismant:
004A0040  55                        PUSH EBP
004A0041  8B EC                     MOV EBP,ESP
004A0043  83 EC 74                  SUB ESP,0x74
004A0046  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
004A0049  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
004A004F  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004A0052  53                        PUSH EBX
004A0053  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004A0056  56                        PUSH ESI
004A0057  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004A005A  33 DB                     XOR EBX,EBX
004A005C  57                        PUSH EDI
004A005D  8D 4D 90                  LEA ECX,[EBP + -0x70]
004A0060  8D 45 8C                  LEA EAX,[EBP + -0x74]
004A0063  53                        PUSH EBX
004A0064  51                        PUSH ECX
004A0065  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
004A0068  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004A006B  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
004A006E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A0073  E8 78 D7 28 00            CALL 0x0072d7f0
004A0078  8B F0                     MOV ESI,EAX
004A007A  83 C4 08                  ADD ESP,0x8
004A007D  3B F3                     CMP ESI,EBX
004A007F  0F 85 92 03 00 00         JNZ 0x004a0417
004A0085  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004A0088  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
004A008B  3B C3                     CMP EAX,EBX
004A008D  74 09                     JZ 0x004a0098
004A008F  83 F8 01                  CMP EAX,0x1
004A0092  0F 85 85 02 00 00         JNZ 0x004a031d
LAB_004a0098:
004A0098  B9 15 00 00 00            MOV ECX,0x15
004A009D  33 C0                     XOR EAX,EAX
004A009F  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
004A00A5  F3 AB                     STOSD.REP ES:EDI
004A00A7  66 8B 86 BB 01 00 00      MOV AX,word ptr [ESI + 0x1bb]
004A00AE  66 8B 96 B9 01 00 00      MOV DX,word ptr [ESI + 0x1b9]
004A00B5  66 89 86 F0 02 00 00      MOV word ptr [ESI + 0x2f0],AX
004A00BC  66 8B 86 BD 01 00 00      MOV AX,word ptr [ESI + 0x1bd]
004A00C3  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
004A00C6  66 89 96 EE 02 00 00      MOV word ptr [ESI + 0x2ee],DX
004A00CD  66 89 86 F2 02 00 00      MOV word ptr [ESI + 0x2f2],AX
004A00D4  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
004A00DB  0F BF D0                  MOVSX EDX,AX
004A00DE  83 E9 02                  SUB ECX,0x2
004A00E1  3B D1                     CMP EDX,ECX
004A00E3  7E 1A                     JLE 0x004a00ff
004A00E5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A00EA  68 C7 0C 00 00            PUSH 0xcc7
004A00EF  68 3C BE 7A 00            PUSH 0x7abe3c
004A00F4  50                        PUSH EAX
004A00F5  68 09 00 FE AF            PUSH 0xaffe0009
004A00FA  E8 41 5D 20 00            CALL 0x006a5e40
LAB_004a00ff:
004A00FF  66 8B 86 EE 02 00 00      MOV AX,word ptr [ESI + 0x2ee]
004A0106  66 8B 8E F2 02 00 00      MOV CX,word ptr [ESI + 0x2f2]
004A010D  66 8B 96 F0 02 00 00      MOV DX,word ptr [ESI + 0x2f0]
004A0114  66 3B C3                  CMP AX,BX
004A0117  7C 54                     JL 0x004a016d
004A0119  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004A0120  66 3B C7                  CMP AX,DI
004A0123  7D 48                     JGE 0x004a016d
004A0125  66 3B D3                  CMP DX,BX
004A0128  7C 43                     JL 0x004a016d
004A012A  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004A0131  7D 3A                     JGE 0x004a016d
004A0133  66 3B CB                  CMP CX,BX
004A0136  7C 35                     JL 0x004a016d
004A0138  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004A013F  7D 2A                     JGE 0x004a016b
004A0141  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004A0148  0F BF C9                  MOVSX ECX,CX
004A014B  0F AF D9                  IMUL EBX,ECX
004A014E  0F BF CF                  MOVSX ECX,DI
004A0151  0F BF D2                  MOVSX EDX,DX
004A0154  0F AF CA                  IMUL ECX,EDX
004A0157  0F BF C0                  MOVSX EAX,AX
004A015A  03 D9                     ADD EBX,ECX
004A015C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004A0162  03 D8                     ADD EBX,EAX
004A0164  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
004A0167  33 DB                     XOR EBX,EBX
004A0169  EB 04                     JMP 0x004a016f
LAB_004a016b:
004A016B  33 DB                     XOR EBX,EBX
LAB_004a016d:
004A016D  33 FF                     XOR EDI,EDI
LAB_004a016f:
004A016F  3B FB                     CMP EDI,EBX
004A0171  74 1D                     JZ 0x004a0190
004A0173  81 7F 20 E8 03 00 00      CMP dword ptr [EDI + 0x20],0x3e8
004A017A  75 14                     JNZ 0x004a0190
004A017C  0F BE 56 24               MOVSX EDX,byte ptr [ESI + 0x24]
004A0180  39 57 24                  CMP dword ptr [EDI + 0x24],EDX
004A0183  75 0B                     JNZ 0x004a0190
004A0185  8B CF                     MOV ECX,EDI
004A0187  E8 8E 12 F6 FF            CALL 0x0040141a
004A018C  85 C0                     TEST EAX,EAX
004A018E  75 1A                     JNZ 0x004a01aa
LAB_004a0190:
004A0190  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A0195  68 CC 0C 00 00            PUSH 0xccc
004A019A  68 3C BE 7A 00            PUSH 0x7abe3c
004A019F  50                        PUSH EAX
004A01A0  68 09 00 FE AF            PUSH 0xaffe0009
004A01A5  E8 96 5C 20 00            CALL 0x006a5e40
LAB_004a01aa:
004A01AA  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
004A01AD  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
004A01B0  89 8E F4 02 00 00         MOV dword ptr [ESI + 0x2f4],ECX
004A01B6  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A01BC  66 8B 8E F0 02 00 00      MOV CX,word ptr [ESI + 0x2f0]
004A01C3  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A01C9  66 8B 96 F2 02 00 00      MOV DX,word ptr [ESI + 0x2f2]
004A01D0  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004A01D3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004A01D6  66 8B 86 EE 02 00 00      MOV AX,word ptr [ESI + 0x2ee]
004A01DD  66 89 4D D6               MOV word ptr [EBP + -0x2a],CX
004A01E1  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
004A01E5  8B 86 F4 02 00 00         MOV EAX,dword ptr [ESI + 0x2f4]
004A01EB  89 45 DA                  MOV dword ptr [EBP + -0x26],EAX
004A01EE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A01F1  3B C3                     CMP EAX,EBX
004A01F3  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
004A01F7  0F 86 F3 00 00 00         JBE 0x004a02f0
004A01FD  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004A0200  33 D2                     XOR EDX,EDX
LAB_004a0202:
004A0202  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A0205  51                        PUSH ECX
004A0206  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A0209  E8 62 CA 20 00            CALL 0x006acc70
004A020E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A0211  66 3D FF FF               CMP AX,0xffff
004A0215  0F 84 BB 00 00 00         JZ 0x004a02d6
004A021B  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A021E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A0224  6A 01                     PUSH 0x1
004A0226  50                        PUSH EAX
004A0227  52                        PUSH EDX
004A0228  E8 8D 26 F6 FF            CALL 0x004028ba
004A022D  8B F8                     MOV EDI,EAX
004A022F  85 FF                     TEST EDI,EDI
004A0231  75 1A                     JNZ 0x004a024d
004A0233  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A0238  68 D4 0C 00 00            PUSH 0xcd4
004A023D  68 3C BE 7A 00            PUSH 0x7abe3c
004A0242  50                        PUSH EAX
004A0243  68 04 00 FE AF            PUSH 0xaffe0004
004A0248  E8 F3 5B 20 00            CALL 0x006a5e40
LAB_004a024d:
004A024D  8B 17                     MOV EDX,dword ptr [EDI]
004A024F  8B CF                     MOV ECX,EDI
004A0251  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A0254  83 F8 0C                  CMP EAX,0xc
004A0257  74 51                     JZ 0x004a02aa
004A0259  8B 07                     MOV EAX,dword ptr [EDI]
004A025B  8B CF                     MOV ECX,EDI
004A025D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A0260  83 F8 18                  CMP EAX,0x18
004A0263  74 45                     JZ 0x004a02aa
004A0265  8B 17                     MOV EDX,dword ptr [EDI]
004A0267  8B CF                     MOV ECX,EDI
004A0269  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A026C  83 F8 1D                  CMP EAX,0x1d
004A026F  74 39                     JZ 0x004a02aa
004A0271  8B CF                     MOV ECX,EDI
004A0273  E8 E0 4B F6 FF            CALL 0x00404e58
004A0278  85 C0                     TEST EAX,EAX
004A027A  75 08                     JNZ 0x004a0284
004A027C  8D 45 EC                  LEA EAX,[EBP + -0x14]
004A027F  50                        PUSH EAX
004A0280  6A 03                     PUSH 0x3
004A0282  EB 4B                     JMP 0x004a02cf
LAB_004a0284:
004A0284  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A0287  85 C0                     TEST EAX,EAX
004A0289  75 10                     JNZ 0x004a029b
004A028B  6A 01                     PUSH 0x1
004A028D  6A 02                     PUSH 0x2
004A028F  6A 01                     PUSH 0x1
004A0291  6A 00                     PUSH 0x0
004A0293  E8 F8 DF 20 00            CALL 0x006ae290
004A0298  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004a029b:
004A029B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004A029E  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A02A1  51                        PUSH ECX
004A02A2  52                        PUSH EDX
004A02A3  E8 18 DF 20 00            CALL 0x006ae1c0
004A02A8  EB 2C                     JMP 0x004a02d6
LAB_004a02aa:
004A02AA  85 DB                     TEST EBX,EBX
004A02AC  75 11                     JNZ 0x004a02bf
004A02AE  6A 01                     PUSH 0x1
004A02B0  6A 02                     PUSH 0x2
004A02B2  6A 01                     PUSH 0x1
004A02B4  53                        PUSH EBX
004A02B5  E8 D6 DF 20 00            CALL 0x006ae290
004A02BA  8B D8                     MOV EBX,EAX
004A02BC  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
LAB_004a02bf:
004A02BF  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A02C2  50                        PUSH EAX
004A02C3  53                        PUSH EBX
004A02C4  E8 F7 DE 20 00            CALL 0x006ae1c0
004A02C9  8D 4D D0                  LEA ECX,[EBP + -0x30]
004A02CC  51                        PUSH ECX
004A02CD  6A 12                     PUSH 0x12
LAB_004a02cf:
004A02CF  8B CF                     MOV ECX,EDI
004A02D1  E8 50 1E F6 FF            CALL 0x00402126
LAB_004a02d6:
004A02D6  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004A02D9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A02DC  42                        INC EDX
004A02DD  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004A02E0  81 E2 FF FF 00 00         AND EDX,0xffff
004A02E6  3B D0                     CMP EDX,EAX
004A02E8  0F 82 14 FF FF FF         JC 0x004a0202
004A02EE  EB 03                     JMP 0x004a02f3
LAB_004a02f0:
004A02F0  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_004a02f3:
004A02F3  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004A02F6  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A02F9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A02FF  57                        PUSH EDI
004A0300  53                        PUSH EBX
004A0301  52                        PUSH EDX
004A0302  E8 94 3A F6 FF            CALL 0x00403d9b
004A0307  85 DB                     TEST EBX,EBX
004A0309  74 06                     JZ 0x004a0311
004A030B  53                        PUSH EBX
004A030C  E8 FF DD 20 00            CALL 0x006ae110
LAB_004a0311:
004A0311  85 FF                     TEST EDI,EDI
004A0313  74 06                     JZ 0x004a031b
004A0315  57                        PUSH EDI
004A0316  E8 F5 DD 20 00            CALL 0x006ae110
LAB_004a031b:
004A031B  33 DB                     XOR EBX,EBX
LAB_004a031d:
004A031D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A0322  33 D2                     XOR EDX,EDX
004A0324  B9 1E 00 00 00            MOV ECX,0x1e
004A0329  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
004A0330  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004A0336  F7 F1                     DIV ECX
004A0338  83 FA 0C                  CMP EDX,0xc
004A033B  0F 85 C1 00 00 00         JNZ 0x004a0402
004A0341  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A0344  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004A0347  85 C0                     TEST EAX,EAX
004A0349  0F 86 A5 00 00 00         JBE 0x004a03f4
004A034F  33 D2                     XOR EDX,EDX
LAB_004a0351:
004A0351  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A0354  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A0357  50                        PUSH EAX
004A0358  E8 13 C9 20 00            CALL 0x006acc70
004A035D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A0360  66 3D FF FF               CMP AX,0xffff
004A0364  74 71                     JZ 0x004a03d7
004A0366  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A0369  6A 01                     PUSH 0x1
004A036B  50                        PUSH EAX
004A036C  51                        PUSH ECX
004A036D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A0373  E8 42 25 F6 FF            CALL 0x004028ba
004A0378  8B F8                     MOV EDI,EAX
004A037A  85 FF                     TEST EDI,EDI
004A037C  75 1B                     JNZ 0x004a0399
004A037E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A0384  68 F6 0C 00 00            PUSH 0xcf6
004A0389  68 3C BE 7A 00            PUSH 0x7abe3c
004A038E  52                        PUSH EDX
004A038F  68 04 00 FE AF            PUSH 0xaffe0004
004A0394  E8 A7 5A 20 00            CALL 0x006a5e40
LAB_004a0399:
004A0399  8B 07                     MOV EAX,dword ptr [EDI]
004A039B  8B CF                     MOV ECX,EDI
004A039D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A03A0  83 F8 0C                  CMP EAX,0xc
004A03A3  74 18                     JZ 0x004a03bd
004A03A5  8B 17                     MOV EDX,dword ptr [EDI]
004A03A7  8B CF                     MOV ECX,EDI
004A03A9  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A03AC  83 F8 18                  CMP EAX,0x18
004A03AF  74 0C                     JZ 0x004a03bd
004A03B1  8B 07                     MOV EAX,dword ptr [EDI]
004A03B3  8B CF                     MOV ECX,EDI
004A03B5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A03B8  83 F8 1D                  CMP EAX,0x1d
004A03BB  75 0C                     JNZ 0x004a03c9
LAB_004a03bd:
004A03BD  8B CF                     MOV ECX,EDI
004A03BF  E8 18 2B F6 FF            CALL 0x00402edc
004A03C4  83 F8 12                  CMP EAX,0x12
004A03C7  74 24                     JZ 0x004a03ed
LAB_004a03c9:
004A03C9  6A 12                     PUSH 0x12
004A03CB  8B CF                     MOV ECX,EDI
004A03CD  E8 27 4A F6 FF            CALL 0x00404df9
004A03D2  83 F8 01                  CMP EAX,0x1
004A03D5  74 16                     JZ 0x004a03ed
LAB_004a03d7:
004A03D7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A03DA  43                        INC EBX
004A03DB  8B D3                     MOV EDX,EBX
004A03DD  81 E2 FF FF 00 00         AND EDX,0xffff
004A03E3  3B D0                     CMP EDX,EAX
004A03E5  0F 82 66 FF FF FF         JC 0x004a0351
004A03EB  EB 07                     JMP 0x004a03f4
LAB_004a03ed:
004A03ED  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
LAB_004a03f4:
004A03F4  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004A03F7  85 C0                     TEST EAX,EAX
004A03F9  75 07                     JNZ 0x004a0402
004A03FB  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_004a0402:
004A0402  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
004A0405  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004A0408  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A040E  5F                        POP EDI
004A040F  5E                        POP ESI
004A0410  5B                        POP EBX
004A0411  8B E5                     MOV ESP,EBP
004A0413  5D                        POP EBP
004A0414  C2 04 00                  RET 0x4
LAB_004a0417:
004A0417  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
004A041A  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004A0420  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A0426  74 40                     JZ 0x004a0468
004A0428  68 58 C1 7A 00            PUSH 0x7ac158
004A042D  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A0432  56                        PUSH ESI
004A0433  53                        PUSH EBX
004A0434  68 02 0D 00 00            PUSH 0xd02
004A0439  68 3C BE 7A 00            PUSH 0x7abe3c
004A043E  E8 8D D0 20 00            CALL 0x006ad4d0
004A0443  83 C4 18                  ADD ESP,0x18
004A0446  85 C0                     TEST EAX,EAX
004A0448  74 01                     JZ 0x004a044b
004A044A  CC                        INT3
LAB_004a044b:
004A044B  68 03 0D 00 00            PUSH 0xd03
004A0450  68 3C BE 7A 00            PUSH 0x7abe3c
004A0455  53                        PUSH EBX
004A0456  56                        PUSH ESI
004A0457  E8 E4 59 20 00            CALL 0x006a5e40
004A045C  83 C8 FF                  OR EAX,0xffffffff
004A045F  5F                        POP EDI
004A0460  5E                        POP ESI
004A0461  5B                        POP EBX
004A0462  8B E5                     MOV ESP,EBP
004A0464  5D                        POP EBP
004A0465  C2 04 00                  RET 0x4
LAB_004a0468:
004A0468  5F                        POP EDI
004A0469  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
004A046C  8B C3                     MOV EAX,EBX
004A046E  5E                        POP ESI
004A046F  5B                        POP EBX
004A0470  8B E5                     MOV ESP,EBP
004A0472  5D                        POP EBP
004A0473  C2 04 00                  RET 0x4
