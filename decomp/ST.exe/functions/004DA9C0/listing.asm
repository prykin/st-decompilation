FUN_004da9c0:
004DA9C0  55                        PUSH EBP
004DA9C1  8B EC                     MOV EBP,ESP
004DA9C3  81 EC B8 02 00 00         SUB ESP,0x2b8
004DA9C9  53                        PUSH EBX
004DA9CA  56                        PUSH ESI
004DA9CB  57                        PUSH EDI
004DA9CC  33 DB                     XOR EBX,EBX
004DA9CE  BF 2E 58 7F 00            MOV EDI,0x7f582e
004DA9D3  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004DA9D6  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
004DA9D9  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004DA9DC  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
004DA9DF  EB 03                     JMP 0x004da9e4
LAB_004da9e1:
004DA9E1  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_004da9e4:
004DA9E4  8B 07                     MOV EAX,dword ptr [EDI]
004DA9E6  83 F8 01                  CMP EAX,0x1
004DA9E9  0F 85 01 01 00 00         JNZ 0x004daaf0
004DA9EF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA9F5  53                        PUSH EBX
004DA9F6  E8 BC 9F F2 FF            CALL 0x004049b7
004DA9FB  25 FF 00 00 00            AND EAX,0xff
004DAA00  48                        DEC EAX
004DAA01  74 18                     JZ 0x004daa1b
004DAA03  48                        DEC EAX
004DAA04  74 0E                     JZ 0x004daa14
004DAA06  48                        DEC EAX
004DAA07  74 04                     JZ 0x004daa0d
004DAA09  33 C0                     XOR EAX,EAX
004DAA0B  EB 13                     JMP 0x004daa20
LAB_004daa0d:
004DAA0D  B8 49 00 00 00            MOV EAX,0x49
004DAA12  EB 0C                     JMP 0x004daa20
LAB_004daa14:
004DAA14  B8 8D 00 00 00            MOV EAX,0x8d
004DAA19  EB 05                     JMP 0x004daa20
LAB_004daa1b:
004DAA1B  B8 3D 00 00 00            MOV EAX,0x3d
LAB_004daa20:
004DAA20  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DAA26  50                        PUSH EAX
004DAA27  53                        PUSH EBX
004DAA28  E8 3E 6E F2 FF            CALL 0x0040186b
004DAA2D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DAA33  8B 04 85 6C 8F 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x798f6c]
004DAA3A  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
004DAA3D  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DAA43  03 C6                     ADD EAX,ESI
004DAA45  3B D0                     CMP EDX,EAX
004DAA47  0F 82 41 02 00 00         JC 0x004dac8e
004DAA4D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004DAA50  33 D2                     XOR EDX,EDX
004DAA52  B9 03 00 00 00            MOV ECX,0x3
004DAA57  F7 F1                     DIV ECX
004DAA59  83 FA 01                  CMP EDX,0x1
004DAA5C  75 0E                     JNZ 0x004daa6c
004DAA5E  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
004DAA64  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
004DAA67  E9 22 02 00 00            JMP 0x004dac8e
LAB_004daa6c:
004DAA6C  8B 15 74 8F 79 00         MOV EDX,dword ptr [0x00798f74]
004DAA72  33 C0                     XOR EAX,EAX
004DAA74  A0 4D 87 80 00            MOV AL,[0x0080874d]
004DAA79  C7 07 02 00 00 00         MOV dword ptr [EDI],0x2
004DAA7F  3B D8                     CMP EBX,EAX
004DAA81  89 57 10                  MOV dword ptr [EDI + 0x10],EDX
004DAA84  0F 85 04 02 00 00         JNZ 0x004dac8e
004DAA8A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004DAA8D  53                        PUSH EBX
004DAA8E  E8 24 9F F2 FF            CALL 0x004049b7
004DAA93  25 FF 00 00 00            AND EAX,0xff
004DAA98  48                        DEC EAX
004DAA99  74 3C                     JZ 0x004daad7
004DAA9B  48                        DEC EAX
004DAA9C  74 20                     JZ 0x004daabe
004DAA9E  48                        DEC EAX
004DAA9F  0F 85 E9 01 00 00         JNZ 0x004dac8e
004DAAA5  6A 00                     PUSH 0x0
004DAAA7  6A 00                     PUSH 0x0
004DAAA9  6A 73                     PUSH 0x73
004DAAAB  6A 00                     PUSH 0x0
004DAAAD  6A 06                     PUSH 0x6
004DAAAF  B9 58 76 80 00            MOV ECX,0x807658
004DAAB4  E8 1F A1 F2 FF            CALL 0x00404bd8
004DAAB9  E9 D0 01 00 00            JMP 0x004dac8e
LAB_004daabe:
004DAABE  6A 00                     PUSH 0x0
004DAAC0  6A 00                     PUSH 0x0
004DAAC2  6A 72                     PUSH 0x72
004DAAC4  6A 00                     PUSH 0x0
004DAAC6  6A 06                     PUSH 0x6
004DAAC8  B9 58 76 80 00            MOV ECX,0x807658
004DAACD  E8 06 A1 F2 FF            CALL 0x00404bd8
004DAAD2  E9 B7 01 00 00            JMP 0x004dac8e
LAB_004daad7:
004DAAD7  6A 00                     PUSH 0x0
004DAAD9  6A 00                     PUSH 0x0
004DAADB  6A 71                     PUSH 0x71
004DAADD  6A 00                     PUSH 0x0
004DAADF  6A 06                     PUSH 0x6
004DAAE1  B9 58 76 80 00            MOV ECX,0x807658
004DAAE6  E8 ED A0 F2 FF            CALL 0x00404bd8
004DAAEB  E9 9E 01 00 00            JMP 0x004dac8e
LAB_004daaf0:
004DAAF0  83 F8 03                  CMP EAX,0x3
004DAAF3  0F 85 95 01 00 00         JNZ 0x004dac8e
004DAAF9  33 C0                     XOR EAX,EAX
004DAAFB  C7 45 F8 E9 87 80 00      MOV dword ptr [EBP + -0x8],0x8087e9
004DAB02  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004DAB05  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_004dab08:
004DAB08  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DAB0E  53                        PUSH EBX
004DAB0F  E8 A3 9E F2 FF            CALL 0x004049b7
004DAB14  25 FF 00 00 00            AND EAX,0xff
004DAB19  48                        DEC EAX
004DAB1A  74 18                     JZ 0x004dab34
004DAB1C  48                        DEC EAX
004DAB1D  74 0E                     JZ 0x004dab2d
004DAB1F  48                        DEC EAX
004DAB20  74 04                     JZ 0x004dab26
004DAB22  33 F6                     XOR ESI,ESI
004DAB24  EB 13                     JMP 0x004dab39
LAB_004dab26:
004DAB26  BE 47 00 00 00            MOV ESI,0x47
004DAB2B  EB 0C                     JMP 0x004dab39
LAB_004dab2d:
004DAB2D  BE 8E 00 00 00            MOV ESI,0x8e
004DAB32  EB 05                     JMP 0x004dab39
LAB_004dab34:
004DAB34  BE 3F 00 00 00            MOV ESI,0x3f
LAB_004dab39:
004DAB39  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
004DAB3C  0F 84 09 01 00 00         JZ 0x004dac4b
004DAB42  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DAB45  8A 01                     MOV AL,byte ptr [ECX]
004DAB47  3C FF                     CMP AL,0xff
004DAB49  0F 84 FC 00 00 00         JZ 0x004dac4b
004DAB4F  8A 51 FF                  MOV DL,byte ptr [ECX + -0x1]
004DAB52  84 D2                     TEST DL,DL
004DAB54  0F 84 F1 00 00 00         JZ 0x004dac4b
004DAB5A  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004DAB60  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
004DAB63  84 C9                     TEST CL,CL
004DAB65  74 2A                     JZ 0x004dab91
004DAB67  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004DAB6A  25 FF 00 00 00            AND EAX,0xff
004DAB6F  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004DAB72  8B C3                     MOV EAX,EBX
004DAB74  25 FF 00 00 00            AND EAX,0xff
004DAB79  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004DAB7C  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004DAB83  33 C0                     XOR EAX,EAX
004DAB85  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004DAB8C  0F 95 C0                  SETNZ AL
004DAB8F  EB 79                     JMP 0x004dac0a
LAB_004dab91:
004DAB91  3A C3                     CMP AL,BL
004DAB93  74 6A                     JZ 0x004dabff
004DAB95  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004DAB98  8B CB                     MOV ECX,EBX
004DAB9A  25 FF 00 00 00            AND EAX,0xff
004DAB9F  81 E1 FF 00 00 00         AND ECX,0xff
004DABA5  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004DABAC  84 D2                     TEST DL,DL
004DABAE  75 10                     JNZ 0x004dabc0
004DABB0  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
004DABB7  75 07                     JNZ 0x004dabc0
004DABB9  B8 FE FF FF FF            MOV EAX,0xfffffffe
004DABBE  EB 41                     JMP 0x004dac01
LAB_004dabc0:
004DABC0  80 FA 01                  CMP DL,0x1
004DABC3  75 0F                     JNZ 0x004dabd4
004DABC5  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
004DABCD  75 05                     JNZ 0x004dabd4
004DABCF  83 C8 FF                  OR EAX,0xffffffff
004DABD2  EB 2D                     JMP 0x004dac01
LAB_004dabd4:
004DABD4  84 D2                     TEST DL,DL
004DABD6  75 11                     JNZ 0x004dabe9
004DABD8  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004DABE0  75 07                     JNZ 0x004dabe9
004DABE2  B8 01 00 00 00            MOV EAX,0x1
004DABE7  EB 18                     JMP 0x004dac01
LAB_004dabe9:
004DABE9  80 FA 01                  CMP DL,0x1
004DABEC  75 11                     JNZ 0x004dabff
004DABEE  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004DABF6  75 07                     JNZ 0x004dabff
004DABF8  B8 02 00 00 00            MOV EAX,0x2
004DABFD  EB 02                     JMP 0x004dac01
LAB_004dabff:
004DABFF  33 C0                     XOR EAX,EAX
LAB_004dac01:
004DAC01  33 C9                     XOR ECX,ECX
004DAC03  85 C0                     TEST EAX,EAX
004DAC05  0F 9C C1                  SETL CL
004DAC08  8B C1                     MOV EAX,ECX
LAB_004dac0a:
004DAC0A  85 C0                     TEST EAX,EAX
004DAC0C  74 3D                     JZ 0x004dac4b
004DAC0E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DAC11  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DAC17  56                        PUSH ESI
004DAC18  52                        PUSH EDX
004DAC19  E8 4D 6C F2 FF            CALL 0x0040186b
004DAC1E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DAC24  8B 04 85 74 8F 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x798f74]
004DAC2B  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
004DAC2E  8B B2 E4 00 00 00         MOV ESI,dword ptr [EDX + 0xe4]
004DAC34  03 C8                     ADD ECX,EAX
004DAC36  3B F1                     CMP ESI,ECX
004DAC38  73 11                     JNC 0x004dac4b
004DAC3A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004DAC3D  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
004DAC44  3B C1                     CMP EAX,ECX
004DAC46  76 03                     JBE 0x004dac4b
004DAC48  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_004dac4b:
004DAC4B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004DAC4E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004DAC51  83 C0 51                  ADD EAX,0x51
004DAC54  46                        INC ESI
004DAC55  3D 71 8A 80 00            CMP EAX,0x808a71
004DAC5A  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DAC5D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DAC60  0F 8C A2 FE FF FF         JL 0x004dab08
004DAC66  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004DAC69  85 C0                     TEST EAX,EAX
004DAC6B  75 08                     JNZ 0x004dac75
004DAC6D  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
004DAC73  EB 19                     JMP 0x004dac8e
LAB_004dac75:
004DAC75  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DAC7B  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004DAC7E  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DAC84  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004DAC87  2B C2                     SUB EAX,EDX
004DAC89  03 C1                     ADD EAX,ECX
004DAC8B  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
LAB_004dac8e:
004DAC8E  83 C7 34                  ADD EDI,0x34
004DAC91  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004DAC98  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_004dac9b:
004DAC9B  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
004DAC9E  0F 84 E5 01 00 00         JZ 0x004dae89
004DACA4  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DACAA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DACAD  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004DACB3  8B 51 E0                  MOV EDX,dword ptr [ECX + -0x20]
004DACB6  3B C2                     CMP EAX,EDX
004DACB8  0F 85 CB 01 00 00         JNZ 0x004dae89
004DACBE  8B D1                     MOV EDX,ECX
004DACC0  83 3A 00                  CMP dword ptr [EDX],0x0
004DACC3  0F 85 C0 01 00 00         JNZ 0x004dae89
004DACC9  33 C0                     XOR EAX,EAX
004DACCB  A0 4D 87 80 00            MOV AL,[0x0080874d]
004DACD0  3B D8                     CMP EBX,EAX
004DACD2  75 41                     JNZ 0x004dad15
004DACD4  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
004DACDA  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004DACDD  53                        PUSH EBX
004DACDE  E8 D4 9C F2 FF            CALL 0x004049b7
004DACE3  25 FF 00 00 00            AND EAX,0xff
004DACE8  48                        DEC EAX
004DACE9  74 16                     JZ 0x004dad01
004DACEB  48                        DEC EAX
004DACEC  74 0B                     JZ 0x004dacf9
004DACEE  48                        DEC EAX
004DACEF  75 24                     JNZ 0x004dad15
004DACF1  6A 00                     PUSH 0x0
004DACF3  6A 00                     PUSH 0x0
004DACF5  6A 79                     PUSH 0x79
004DACF7  EB 0E                     JMP 0x004dad07
LAB_004dacf9:
004DACF9  6A 00                     PUSH 0x0
004DACFB  6A 00                     PUSH 0x0
004DACFD  6A 78                     PUSH 0x78
004DACFF  EB 06                     JMP 0x004dad07
LAB_004dad01:
004DAD01  6A 00                     PUSH 0x0
004DAD03  6A 00                     PUSH 0x0
004DAD05  6A 77                     PUSH 0x77
LAB_004dad07:
004DAD07  6A 00                     PUSH 0x0
004DAD09  6A 06                     PUSH 0x6
004DAD0B  B9 58 76 80 00            MOV ECX,0x807658
004DAD10  E8 C3 9E F2 FF            CALL 0x00404bd8
LAB_004dad15:
004DAD15  33 C0                     XOR EAX,EAX
004DAD17  B9 9B 00 00 00            MOV ECX,0x9b
004DAD1C  8D BD 48 FD FF FF         LEA EDI,[EBP + 0xfffffd48]
004DAD22  33 DB                     XOR EBX,EBX
004DAD24  8D 95 48 FD FF FF         LEA EDX,[EBP + 0xfffffd48]
004DAD2A  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
004DAD2D  F3 AB                     STOSD.REP ES:EDI
004DAD2F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_004dad32:
004DAD32  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004DAD35  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DAD3B  50                        PUSH EAX
004DAD3C  E8 76 9C F2 FF            CALL 0x004049b7
004DAD41  25 FF 00 00 00            AND EAX,0xff
004DAD46  8B 0C 85 00 FC 7B 00      MOV ECX,dword ptr [EAX*0x4 + 0x7bfc00]
004DAD4D  80 3C 19 00               CMP byte ptr [ECX + EBX*0x1],0x0
004DAD51  0F 85 98 00 00 00         JNZ 0x004dadef
004DAD57  8A 83 BC 53 7E 00         MOV AL,byte ptr [EBX + 0x7e53bc]
004DAD5D  84 C0                     TEST AL,AL
004DAD5F  0F 84 8A 00 00 00         JZ 0x004dadef
004DAD65  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004DAD68  33 F6                     XOR ESI,ESI
004DAD6A  83 C2 14                  ADD EDX,0x14
004DAD6D  BF E9 87 80 00            MOV EDI,0x8087e9
004DAD72  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_004dad75:
004DAD75  39 75 F8                  CMP dword ptr [EBP + -0x8],ESI
004DAD78  74 52                     JZ 0x004dadcc
004DAD7A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004DAD7D  3B C6                     CMP EAX,ESI
004DAD7F  74 4B                     JZ 0x004dadcc
004DAD81  81 FF 71 8A 80 00         CMP EDI,0x808a71
004DAD87  7D 43                     JGE 0x004dadcc
004DAD89  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DAD8F  85 C9                     TEST ECX,ECX
004DAD91  74 05                     JZ 0x004dad98
004DAD93  80 3F 08                  CMP byte ptr [EDI],0x8
004DAD96  73 34                     JNC 0x004dadcc
LAB_004dad98:
004DAD98  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004DAD9B  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
004DADA1  3B 0A                     CMP ECX,dword ptr [EDX]
004DADA3  77 27                     JA 0x004dadcc
004DADA5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DADAB  53                        PUSH EBX
004DADAC  50                        PUSH EAX
004DADAD  E8 B9 6A F2 FF            CALL 0x0040186b
004DADB2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004DADB5  8B D0                     MOV EDX,EAX
004DADB7  42                        INC EDX
004DADB8  53                        PUSH EBX
004DADB9  56                        PUSH ESI
004DADBA  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
004DADBD  E8 A9 6A F2 FF            CALL 0x0040186b
004DADC2  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004DADC5  3B C1                     CMP EAX,ECX
004DADC7  7D 1A                     JGE 0x004dade3
004DADC9  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
LAB_004dadcc:
004DADCC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004DADCF  83 C7 51                  ADD EDI,0x51
004DADD2  46                        INC ESI
004DADD3  83 C1 04                  ADD ECX,0x4
004DADD6  81 FF 71 8A 80 00         CMP EDI,0x808a71
004DADDC  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004DADDF  7C 94                     JL 0x004dad75
004DADE1  EB 0C                     JMP 0x004dadef
LAB_004dade3:
004DADE3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004DADE6  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
004DADE9  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
LAB_004dadef:
004DADEF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004DADF2  43                        INC EBX
004DADF3  83 C1 04                  ADD ECX,0x4
004DADF6  81 FB 9B 00 00 00         CMP EBX,0x9b
004DADFC  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
004DADFF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004DAE02  0F 8C 2A FF FF FF         JL 0x004dad32
004DAE08  A1 BC 17 81 00            MOV EAX,[0x008117bc]
004DAE0D  85 C0                     TEST EAX,EAX
004DAE0F  74 75                     JZ 0x004dae86
004DAE11  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004DAE14  B9 08 00 00 00            MOV ECX,0x8
004DAE19  33 C0                     XOR EAX,EAX
004DAE1B  8D 7D B4                  LEA EDI,[EBP + -0x4c]
004DAE1E  F3 AB                     STOSD.REP ES:EDI
004DAE20  C7 45 C4 EA 5D 00 00      MOV dword ptr [EBP + -0x3c],0x5dea
004DAE27  66 89 5D C8               MOV word ptr [EBP + -0x38],BX
004DAE2B  33 F6                     XOR ESI,ESI
004DAE2D  8D BD 48 FD FF FF         LEA EDI,[EBP + 0xfffffd48]
LAB_004dae33:
004DAE33  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004DAE36  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DAE3C  50                        PUSH EAX
004DAE3D  E8 75 9B F2 FF            CALL 0x004049b7
004DAE42  25 FF 00 00 00            AND EAX,0xff
004DAE47  8B 0C 85 00 FC 7B 00      MOV ECX,dword ptr [EAX*0x4 + 0x7bfc00]
004DAE4E  80 3C 31 00               CMP byte ptr [ECX + ESI*0x1],0x0
004DAE52  75 26                     JNZ 0x004dae7a
004DAE54  83 3F 00                  CMP dword ptr [EDI],0x0
004DAE57  75 21                     JNZ 0x004dae7a
004DAE59  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004DAE5C  56                        PUSH ESI
004DAE5D  53                        PUSH EBX
004DAE5E  66 89 75 CC               MOV word ptr [EBP + -0x34],SI
004DAE62  E8 04 6A F2 FF            CALL 0x0040186b
004DAE67  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004DAE6D  40                        INC EAX
004DAE6E  66 89 45 CE               MOV word ptr [EBP + -0x32],AX
004DAE72  8D 45 B4                  LEA EAX,[EBP + -0x4c]
004DAE75  8B 11                     MOV EDX,dword ptr [ECX]
004DAE77  50                        PUSH EAX
004DAE78  FF 12                     CALL dword ptr [EDX]
LAB_004dae7a:
004DAE7A  46                        INC ESI
004DAE7B  83 C7 04                  ADD EDI,0x4
004DAE7E  81 FE 9B 00 00 00         CMP ESI,0x9b
004DAE84  7C AD                     JL 0x004dae33
LAB_004dae86:
004DAE86  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_004dae89:
004DAE89  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004DAE8C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DAE8F  40                        INC EAX
004DAE90  83 C2 04                  ADD EDX,0x4
004DAE93  83 F8 08                  CMP EAX,0x8
004DAE96  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DAE99  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004DAE9C  0F 8C F9 FD FF FF         JL 0x004dac9b
004DAEA2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004DAEA5  43                        INC EBX
004DAEA6  05 62 0A 00 00            ADD EAX,0xa62
004DAEAB  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004DAEAE  3D 3E AB 7F 00            CMP EAX,0x7fab3e
004DAEB3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004DAEB6  0F 8C 25 FB FF FF         JL 0x004da9e1
004DAEBC  5F                        POP EDI
004DAEBD  5E                        POP ESI
004DAEBE  33 C0                     XOR EAX,EAX
004DAEC0  5B                        POP EBX
004DAEC1  8B E5                     MOV ESP,EBP
004DAEC3  5D                        POP EBP
004DAEC4  C3                        RET
