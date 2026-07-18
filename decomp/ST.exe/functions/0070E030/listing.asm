FUN_0070e030:
0070E030  55                        PUSH EBP
0070E031  8B EC                     MOV EBP,ESP
0070E033  81 EC BC 04 00 00         SUB ESP,0x4bc
0070E039  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070E03C  53                        PUSH EBX
0070E03D  33 DB                     XOR EBX,EBX
0070E03F  56                        PUSH ESI
0070E040  3B C3                     CMP EAX,EBX
0070E042  57                        PUSH EDI
0070E043  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0070E046  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0070E049  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
0070E04C  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
0070E04F  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
0070E052  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
0070E055  C7 45 A0 01 00 00 00      MOV dword ptr [EBP + -0x60],0x1
0070E05C  0F 84 F1 24 00 00         JZ 0x00710553
0070E062  39 98 FD 00 00 00         CMP dword ptr [EAX + 0xfd],EBX
0070E068  0F 84 E5 24 00 00         JZ 0x00710553
0070E06E  8B 90 9A 00 00 00         MOV EDX,dword ptr [EAX + 0x9a]
0070E074  3B D3                     CMP EDX,EBX
0070E076  0F 84 D7 24 00 00         JZ 0x00710553
0070E07C  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
0070E07F  74 23                     JZ 0x0070e0a4
0070E081  33 C0                     XOR EAX,EAX
0070E083  33 C9                     XOR ECX,ECX
0070E085  66 8B 42 64               MOV AX,word ptr [EDX + 0x64]
0070E089  3B C3                     CMP EAX,EBX
0070E08B  7E 17                     JLE 0x0070e0a4
0070E08D  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0070E090  83 C2 6E                  ADD EDX,0x6e
LAB_0070e093:
0070E093  66 39 32                  CMP word ptr [EDX],SI
0070E096  0F 84 B7 24 00 00         JZ 0x00710553
0070E09C  41                        INC ECX
0070E09D  83 C2 0A                  ADD EDX,0xa
0070E0A0  3B C8                     CMP ECX,EAX
0070E0A2  7C EF                     JL 0x0070e093
LAB_0070e0a4:
0070E0A4  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070E0A9  8D 95 48 FF FF FF         LEA EDX,[EBP + 0xffffff48]
0070E0AF  8D 8D 44 FF FF FF         LEA ECX,[EBP + 0xffffff44]
0070E0B5  53                        PUSH EBX
0070E0B6  52                        PUSH EDX
0070E0B7  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
0070E0BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070E0C3  E8 28 F7 01 00            CALL 0x0072d7f0
0070E0C8  8B F0                     MOV ESI,EAX
0070E0CA  83 C4 08                  ADD ESP,0x8
0070E0CD  3B F3                     CMP ESI,EBX
0070E0CF  0F 85 2C 24 00 00         JNZ 0x00710501
0070E0D5  33 C0                     XOR EAX,EAX
0070E0D7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070E0DA  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0070E0DD  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0070E0E0  8B 96 FD 00 00 00         MOV EDX,dword ptr [ESI + 0xfd]
0070E0E6  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0070E0E9  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0070E0EC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070E0EF  25 FF FF 00 00            AND EAX,0xffff
0070E0F4  51                        PUSH ECX
0070E0F5  50                        PUSH EAX
0070E0F6  50                        PUSH EAX
0070E0F7  52                        PUSH EDX
0070E0F8  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0070E0FB  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
0070E0FE  89 5D B4                  MOV dword ptr [EBP + -0x4c],EBX
0070E101  FF 15 E8 BA 85 00         CALL dword ptr [0x0085bae8]
0070E107  85 C0                     TEST EAX,EAX
0070E109  74 2E                     JZ 0x0070e139
0070E10B  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0070E10E  33 C9                     XOR ECX,ECX
0070E110  3B C3                     CMP EAX,EBX
0070E112  0F 9E C1                  SETLE CL
0070E115  49                        DEC ECX
0070E116  33 D2                     XOR EDX,EDX
0070E118  23 C8                     AND ECX,EAX
0070E11A  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0070E11D  3B D0                     CMP EDX,EAX
0070E11F  1B D2                     SBB EDX,EDX
0070E121  23 D0                     AND EDX,EAX
0070E123  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0070E126  03 CA                     ADD ECX,EDX
0070E128  33 D2                     XOR EDX,EDX
0070E12A  3B C3                     CMP EAX,EBX
0070E12C  0F 9E C2                  SETLE DL
0070E12F  4A                        DEC EDX
0070E130  23 D0                     AND EDX,EAX
0070E132  03 CA                     ADD ECX,EDX
0070E134  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0070E137  EB 44                     JMP 0x0070e17d
LAB_0070e139:
0070E139  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070E13C  8B 96 FD 00 00 00         MOV EDX,dword ptr [ESI + 0xfd]
0070E142  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0070E145  25 FF FF 00 00            AND EAX,0xffff
0070E14A  51                        PUSH ECX
0070E14B  50                        PUSH EAX
0070E14C  50                        PUSH EAX
0070E14D  52                        PUSH EDX
0070E14E  FF 15 E4 BA 85 00         CALL dword ptr [0x0085bae4]
0070E154  8B 96 FD 00 00 00         MOV EDX,dword ptr [ESI + 0xfd]
0070E15A  8D 45 C8                  LEA EAX,[EBP + -0x38]
0070E15D  50                        PUSH EAX
0070E15E  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0070E161  6A 01                     PUSH 0x1
0070E163  51                        PUSH ECX
0070E164  52                        PUSH EDX
0070E165  FF 15 E0 BA 85 00         CALL dword ptr [0x0085bae0]
0070E16B  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0070E16E  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0070E171  3B C8                     CMP ECX,EAX
0070E173  7F 05                     JG 0x0070e17a
0070E175  8B C8                     MOV ECX,EAX
0070E177  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
LAB_0070e17a:
0070E17A  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
LAB_0070e17d:
0070E17D  3B CB                     CMP ECX,EBX
0070E17F  0F 8E 11 01 00 00         JLE 0x0070e296
0070E185  8B BE 51 01 00 00         MOV EDI,dword ptr [ESI + 0x151]
0070E18B  03 F9                     ADD EDI,ECX
0070E18D  3B C3                     CMP EAX,EBX
0070E18F  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0070E192  7D 08                     JGE 0x0070e19c
0070E194  99                        CDQ
0070E195  33 C2                     XOR EAX,EDX
0070E197  2B C2                     SUB EAX,EDX
0070E199  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
LAB_0070e19c:
0070E19C  8B 96 7D 01 00 00         MOV EDX,dword ptr [ESI + 0x17d]
0070E1A2  8B 8E 35 01 00 00         MOV ECX,dword ptr [ESI + 0x135]
0070E1A8  8B C7                     MOV EAX,EDI
0070E1AA  03 C2                     ADD EAX,EDX
0070E1AC  3B C1                     CMP EAX,ECX
0070E1AE  0F 8C D4 00 00 00         JL 0x0070e288
0070E1B4  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070E1BA  8B 96 81 01 00 00         MOV EDX,dword ptr [ESI + 0x181]
0070E1C0  03 D1                     ADD EDX,ECX
0070E1C2  89 96 81 01 00 00         MOV dword ptr [ESI + 0x181],EDX
0070E1C8  89 9E 7D 01 00 00         MOV dword ptr [ESI + 0x17d],EBX
0070E1CE  8B 96 61 01 00 00         MOV EDX,dword ptr [ESI + 0x161]
0070E1D4  8B 86 39 01 00 00         MOV EAX,dword ptr [ESI + 0x139]
0070E1DA  03 C2                     ADD EAX,EDX
0070E1DC  89 86 39 01 00 00         MOV dword ptr [ESI + 0x139],EAX
0070E1E2  8B 86 9A 00 00 00         MOV EAX,dword ptr [ESI + 0x9a]
0070E1E8  66 39 18                  CMP word ptr [EAX],BX
0070E1EB  0F 8E 97 00 00 00         JLE 0x0070e288
0070E1F1  8D 7E 04                  LEA EDI,[ESI + 0x4]
LAB_0070e1f4:
0070E1F4  8B 07                     MOV EAX,dword ptr [EDI]
0070E1F6  8B 8E 39 01 00 00         MOV ECX,dword ptr [ESI + 0x139]
0070E1FC  8B 96 35 01 00 00         MOV EDX,dword ptr [ESI + 0x135]
0070E202  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070E205  83 C0 28                  ADD EAX,0x28
0070E208  6A 01                     PUSH 0x1
0070E20A  50                        PUSH EAX
0070E20B  68 00 01 00 00            PUSH 0x100
0070E210  6A 08                     PUSH 0x8
0070E212  51                        PUSH ECX
0070E213  52                        PUSH EDX
0070E214  E8 A7 6E FA FF            CALL 0x006b50c0
0070E219  89 07                     MOV dword ptr [EDI],EAX
0070E21B  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
0070E221  0F BF 51 42               MOVSX EDX,word ptr [ECX + 0x42]
0070E225  8B 8E 39 01 00 00         MOV ECX,dword ptr [ESI + 0x139]
0070E22B  52                        PUSH EDX
0070E22C  8B 96 35 01 00 00         MOV EDX,dword ptr [ESI + 0x135]
0070E232  51                        PUSH ECX
0070E233  52                        PUSH EDX
0070E234  6A 00                     PUSH 0x0
0070E236  6A 00                     PUSH 0x0
0070E238  6A 00                     PUSH 0x0
0070E23A  50                        PUSH EAX
0070E23B  E8 30 5F FA FF            CALL 0x006b4170
0070E240  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070E243  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0070E246  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0070E249  51                        PUSH ECX
0070E24A  52                        PUSH EDX
0070E24B  6A 00                     PUSH 0x0
0070E24D  6A 00                     PUSH 0x0
0070E24F  6A 00                     PUSH 0x0
0070E251  50                        PUSH EAX
0070E252  8B 07                     MOV EAX,dword ptr [EDI]
0070E254  6A 00                     PUSH 0x0
0070E256  6A 00                     PUSH 0x0
0070E258  6A 00                     PUSH 0x0
0070E25A  50                        PUSH EAX
0070E25B  E8 90 73 FA FF            CALL 0x006b55f0
0070E260  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070E263  85 C0                     TEST EAX,EAX
0070E265  74 09                     JZ 0x0070e270
0070E267  8D 4D F8                  LEA ECX,[EBP + -0x8]
0070E26A  51                        PUSH ECX
0070E26B  E8 F0 CD F9 FF            CALL 0x006ab060
LAB_0070e270:
0070E270  8B 96 9A 00 00 00         MOV EDX,dword ptr [ESI + 0x9a]
0070E276  43                        INC EBX
0070E277  83 C7 04                  ADD EDI,0x4
0070E27A  0F BF 02                  MOVSX EAX,word ptr [EDX]
0070E27D  3B D8                     CMP EBX,EAX
0070E27F  0F 8C 6F FF FF FF         JL 0x0070e1f4
0070E285  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_0070e288:
0070E288  8B 8E 7D 01 00 00         MOV ECX,dword ptr [ESI + 0x17d]
0070E28E  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
0070E291  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0070E294  EB 18                     JMP 0x0070e2ae
LAB_0070e296:
0070E296  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070E29C  68 2E 02 00 00            PUSH 0x22e
0070E2A1  68 90 01 7F 00            PUSH 0x7f0190
0070E2A6  52                        PUSH EDX
0070E2A7  6A CC                     PUSH -0x34
0070E2A9  E8 92 7B F9 FF            CALL 0x006a5e40
LAB_0070e2ae:
0070E2AE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070E2B1  66 8B C1                  MOV AX,CX
0070E2B4  66 C1 E8 08               SHR AX,0x8
0070E2B8  84 C0                     TEST AL,AL
0070E2BA  74 11                     JZ 0x0070e2cd
0070E2BC  88 45 C4                  MOV byte ptr [EBP + -0x3c],AL
0070E2BF  88 4D C5                  MOV byte ptr [EBP + -0x3b],CL
0070E2C2  C6 45 C6 00               MOV byte ptr [EBP + -0x3a],0x0
0070E2C6  BF 02 00 00 00            MOV EDI,0x2
0070E2CB  EB 0C                     JMP 0x0070e2d9
LAB_0070e2cd:
0070E2CD  88 4D C4                  MOV byte ptr [EBP + -0x3c],CL
0070E2D0  C6 45 C5 00               MOV byte ptr [EBP + -0x3b],0x0
0070E2D4  BF 01 00 00 00            MOV EDI,0x1
LAB_0070e2d9:
0070E2D9  8B 86 65 01 00 00         MOV EAX,dword ptr [ESI + 0x165]
0070E2DF  8B 8E 69 01 00 00         MOV ECX,dword ptr [ESI + 0x169]
0070E2E5  8B 96 09 01 00 00         MOV EDX,dword ptr [ESI + 0x109]
0070E2EB  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0070E2EE  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0070E2F1  8B 8E FD 00 00 00         MOV ECX,dword ptr [ESI + 0xfd]
0070E2F7  8D 45 88                  LEA EAX,[EBP + -0x78]
0070E2FA  52                        PUSH EDX
0070E2FB  33 DB                     XOR EBX,EBX
0070E2FD  50                        PUSH EAX
0070E2FE  51                        PUSH ECX
0070E2FF  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
0070E302  89 5D 8C                  MOV dword ptr [EBP + -0x74],EBX
0070E305  89 5D 88                  MOV dword ptr [EBP + -0x78],EBX
0070E308  FF 15 E4 BD 85 00         CALL dword ptr [0x0085bde4]
0070E30E  8B 8E 41 01 00 00         MOV ECX,dword ptr [ESI + 0x141]
0070E314  8B 86 45 01 00 00         MOV EAX,dword ptr [ESI + 0x145]
0070E31A  57                        PUSH EDI
0070E31B  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
0070E31E  8D 55 C4                  LEA EDX,[EBP + -0x3c]
0070E321  03 CF                     ADD ECX,EDI
0070E323  52                        PUSH EDX
0070E324  8B 96 FD 00 00 00         MOV EDX,dword ptr [ESI + 0xfd]
0070E32A  50                        PUSH EAX
0070E32B  51                        PUSH ECX
0070E32C  52                        PUSH EDX
0070E32D  FF 15 DC BA 85 00         CALL dword ptr [0x0085badc]
0070E333  8B 86 69 01 00 00         MOV EAX,dword ptr [ESI + 0x169]
0070E339  8B 8E 65 01 00 00         MOV ECX,dword ptr [ESI + 0x165]
0070E33F  8B 96 29 01 00 00         MOV EDX,dword ptr [ESI + 0x129]
0070E345  50                        PUSH EAX
0070E346  8B 86 25 01 00 00         MOV EAX,dword ptr [ESI + 0x125]
0070E34C  51                        PUSH ECX
0070E34D  53                        PUSH EBX
0070E34E  53                        PUSH EBX
0070E34F  52                        PUSH EDX
0070E350  50                        PUSH EAX
0070E351  53                        PUSH EBX
0070E352  53                        PUSH EBX
0070E353  53                        PUSH EBX
0070E354  53                        PUSH EBX
0070E355  E8 96 72 FA FF            CALL 0x006b55f0
0070E35A  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
0070E360  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0070E363  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
0070E366  66 39 19                  CMP word ptr [ECX],BX
0070E369  0F 8E 0F 20 00 00         JLE 0x0071037e
LAB_0070e36f:
0070E36F  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0070E372  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070E378  8B D0                     MOV EDX,EAX
0070E37A  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0070E37D  0F AF 96 89 01 00 00      IMUL EDX,dword ptr [ESI + 0x189]
0070E384  40                        INC EAX
0070E385  6A 01                     PUSH 0x1
0070E387  8A 5C 0A 01               MOV BL,byte ptr [EDX + ECX*0x1 + 0x1]
0070E38B  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0070E38E  8B 14 86                  MOV EDX,dword ptr [ESI + EAX*0x4]
0070E391  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070E397  83 C2 28                  ADD EDX,0x28
0070E39A  88 5D D8                  MOV byte ptr [EBP + -0x28],BL
0070E39D  52                        PUSH EDX
0070E39E  68 00 01 00 00            PUSH 0x100
0070E3A3  6A 08                     PUSH 0x8
0070E3A5  50                        PUSH EAX
0070E3A6  57                        PUSH EDI
0070E3A7  E8 14 6D FA FF            CALL 0x006b50c0
0070E3AC  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070E3B2  33 D2                     XOR EDX,EDX
0070E3B4  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0070E3B7  8A 11                     MOV DL,byte ptr [ECX]
0070E3B9  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070E3BF  52                        PUSH EDX
0070E3C0  51                        PUSH ECX
0070E3C1  57                        PUSH EDI
0070E3C2  6A 00                     PUSH 0x0
0070E3C4  6A 00                     PUSH 0x0
0070E3C6  6A 00                     PUSH 0x0
0070E3C8  50                        PUSH EAX
0070E3C9  E8 A2 5D FA FF            CALL 0x006b4170
0070E3CE  81 BE 71 01 00 00 00 00 10 00  CMP dword ptr [ESI + 0x171],0x100000
0070E3D8  0F 85 5A 01 00 00         JNZ 0x0070e538
0070E3DE  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070E3E4  85 C0                     TEST EAX,EAX
0070E3E6  75 0E                     JNZ 0x0070e3f6
0070E3E8  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070E3EE  85 C0                     TEST EAX,EAX
0070E3F0  0F 84 42 01 00 00         JZ 0x0070e538
LAB_0070e3f6:
0070E3F6  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070E3FC  3A 1A                     CMP BL,byte ptr [EDX]
0070E3FE  0F 84 34 01 00 00         JZ 0x0070e538
0070E404  8B 86 65 01 00 00         MOV EAX,dword ptr [ESI + 0x165]
0070E40A  8B 8E 69 01 00 00         MOV ECX,dword ptr [ESI + 0x169]
0070E410  8B 96 09 01 00 00         MOV EDX,dword ptr [ESI + 0x109]
0070E416  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0070E419  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0070E41C  8B 8E FD 00 00 00         MOV ECX,dword ptr [ESI + 0xfd]
0070E422  8D 45 88                  LEA EAX,[EBP + -0x78]
0070E425  52                        PUSH EDX
0070E426  33 FF                     XOR EDI,EDI
0070E428  50                        PUSH EAX
0070E429  51                        PUSH ECX
0070E42A  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
0070E42D  89 7D 88                  MOV dword ptr [EBP + -0x78],EDI
0070E430  FF 15 E4 BD 85 00         CALL dword ptr [0x0085bde4]
0070E436  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0070E439  8B 8E 4D 01 00 00         MOV ECX,dword ptr [ESI + 0x14d]
0070E43F  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0070E442  52                        PUSH EDX
0070E443  8B 96 49 01 00 00         MOV EDX,dword ptr [ESI + 0x149]
0070E449  50                        PUSH EAX
0070E44A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070E44D  51                        PUSH ECX
0070E44E  03 D0                     ADD EDX,EAX
0070E450  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
0070E456  52                        PUSH EDX
0070E457  50                        PUSH EAX
0070E458  FF 15 DC BA 85 00         CALL dword ptr [0x0085badc]
0070E45E  8B 8E 69 01 00 00         MOV ECX,dword ptr [ESI + 0x169]
0070E464  8B 96 65 01 00 00         MOV EDX,dword ptr [ESI + 0x165]
0070E46A  8B 86 29 01 00 00         MOV EAX,dword ptr [ESI + 0x129]
0070E470  51                        PUSH ECX
0070E471  8B 8E 25 01 00 00         MOV ECX,dword ptr [ESI + 0x125]
0070E477  52                        PUSH EDX
0070E478  57                        PUSH EDI
0070E479  57                        PUSH EDI
0070E47A  50                        PUSH EAX
0070E47B  51                        PUSH ECX
0070E47C  57                        PUSH EDI
0070E47D  57                        PUSH EDI
0070E47E  57                        PUSH EDI
0070E47F  57                        PUSH EDI
0070E480  E8 6B 71 FA FF            CALL 0x006b55f0
0070E485  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070E48B  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0070E48E  3B CF                     CMP ECX,EDI
0070E490  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070E493  0F 8E 92 00 00 00         JLE 0x0070e52b
LAB_0070e499:
0070E499  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0070E49C  33 DB                     XOR EBX,EBX
0070E49E  85 C9                     TEST ECX,ECX
0070E4A0  7E 74                     JLE 0x0070e516
LAB_0070e4a2:
0070E4A2  50                        PUSH EAX
0070E4A3  8B F8                     MOV EDI,EAX
0070E4A5  E8 F6 6A FA FF            CALL 0x006b4fa0
0070E4AA  33 D2                     XOR EDX,EDX
0070E4AC  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0070E4AF  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0070E4B3  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
0070E4B7  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070E4BA  83 C2 1F                  ADD EDX,0x1f
0070E4BD  C1 EA 03                  SHR EDX,0x3
0070E4C0  2B CF                     SUB ECX,EDI
0070E4C2  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070E4C8  49                        DEC ECX
0070E4C9  0F AF D1                  IMUL EDX,ECX
0070E4CC  8B CB                     MOV ECX,EBX
0070E4CE  03 C8                     ADD ECX,EAX
0070E4D0  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
0070E4D4  75 35                     JNZ 0x0070e50b
0070E4D6  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070E4D9  57                        PUSH EDI
0070E4DA  E8 C1 6A FA FF            CALL 0x006b4fa0
0070E4DF  33 D2                     XOR EDX,EDX
0070E4E1  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0070E4E4  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0070E4E8  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
0070E4EC  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070E4EF  83 C2 1F                  ADD EDX,0x1f
0070E4F2  C1 EA 03                  SHR EDX,0x3
0070E4F5  2B CF                     SUB ECX,EDI
0070E4F7  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070E4FD  49                        DEC ECX
0070E4FE  0F AF D1                  IMUL EDX,ECX
0070E501  8B CB                     MOV ECX,EBX
0070E503  03 C8                     ADD ECX,EAX
0070E505  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070E508  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
LAB_0070e50b:
0070E50B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E50E  43                        INC EBX
0070E50F  3B D8                     CMP EBX,EAX
0070E511  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0070E514  7C 8C                     JL 0x0070e4a2
LAB_0070e516:
0070E516  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070E519  8B 96 61 01 00 00         MOV EDX,dword ptr [ESI + 0x161]
0070E51F  41                        INC ECX
0070E520  3B CA                     CMP ECX,EDX
0070E522  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070E525  0F 8C 6E FF FF FF         JL 0x0070e499
LAB_0070e52b:
0070E52B  85 C0                     TEST EAX,EAX
0070E52D  74 09                     JZ 0x0070e538
0070E52F  8D 4D C0                  LEA ECX,[EBP + -0x40]
0070E532  51                        PUSH ECX
0070E533  E8 28 CB F9 FF            CALL 0x006ab060
LAB_0070e538:
0070E538  8B 86 6D 01 00 00         MOV EAX,dword ptr [ESI + 0x16d]
0070E53E  33 FF                     XOR EDI,EDI
0070E540  3B C7                     CMP EAX,EDI
0070E542  0F 84 04 09 00 00         JZ 0x0070ee4c
0070E548  83 BE 89 01 00 00 02      CMP dword ptr [ESI + 0x189],0x2
0070E54F  0F 8E F7 08 00 00         JLE 0x0070ee4c
0070E555  3D 00 08 00 00            CMP EAX,0x800
0070E55A  0F 87 50 05 00 00         JA 0x0070eab0
0070E560  0F 84 6E 03 00 00         JZ 0x0070e8d4
0070E566  3D 00 01 00 00            CMP EAX,0x100
0070E56B  0F 84 9B 02 00 00         JZ 0x0070e80c
0070E571  3D 00 02 00 00            CMP EAX,0x200
0070E576  0F 84 30 01 00 00         JZ 0x0070e6ac
0070E57C  3D 00 04 00 00            CMP EAX,0x400
0070E581  0F 85 8B 09 00 00         JNZ 0x0070ef12
0070E587  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070E58D  33 DB                     XOR EBX,EBX
0070E58F  3B C7                     CMP EAX,EDI
0070E591  0F 8E 7B 09 00 00         JLE 0x0070ef12
LAB_0070e597:
0070E597  8B BE 89 01 00 00         MOV EDI,dword ptr [ESI + 0x189]
0070E59D  8B 86 85 01 00 00         MOV EAX,dword ptr [ESI + 0x185]
0070E5A3  8B CF                     MOV ECX,EDI
0070E5A5  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0070E5A9  8A 54 08 02               MOV DL,byte ptr [EAX + ECX*0x1 + 0x2]
0070E5AD  8B 86 D4 00 00 00         MOV EAX,dword ptr [ESI + 0xd4]
0070E5B3  3B D8                     CMP EBX,EAX
0070E5B5  88 55 EF                  MOV byte ptr [EBP + -0x11],DL
0070E5B8  7E 5C                     JLE 0x0070e616
0070E5BA  8B 86 C8 00 00 00         MOV EAX,dword ptr [ESI + 0xc8]
0070E5C0  8B 96 D0 00 00 00         MOV EDX,dword ptr [ESI + 0xd0]
0070E5C6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070E5C9  2B C2                     SUB EAX,EDX
0070E5CB  3B D8                     CMP EBX,EAX
0070E5CD  7C 12                     JL 0x0070e5e1
0070E5CF  0F AF 7D 9C               IMUL EDI,dword ptr [EBP + -0x64]
0070E5D3  8B 86 85 01 00 00         MOV EAX,dword ptr [ESI + 0x185]
0070E5D9  8A 04 07                  MOV AL,byte ptr [EDI + EAX*0x1]
0070E5DC  88 45 EF                  MOV byte ptr [EBP + -0x11],AL
0070E5DF  EB 35                     JMP 0x0070e616
LAB_0070e5e1:
0070E5E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070E5E4  2B C2                     SUB EAX,EDX
0070E5E6  8B 96 D4 00 00 00         MOV EDX,dword ptr [ESI + 0xd4]
0070E5EC  2B C2                     SUB EAX,EDX
0070E5EE  85 C0                     TEST EAX,EAX
0070E5F0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070E5F3  7E 1B                     JLE 0x0070e610
0070E5F5  8B C3                     MOV EAX,EBX
0070E5F7  2B C2                     SUB EAX,EDX
0070E5F9  4F                        DEC EDI
0070E5FA  0F AF C7                  IMUL EAX,EDI
0070E5FD  99                        CDQ
0070E5FE  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
0070E601  03 86 85 01 00 00         ADD EAX,dword ptr [ESI + 0x185]
0070E607  8A 4C 08 02               MOV CL,byte ptr [EAX + ECX*0x1 + 0x2]
0070E60B  88 4D EF                  MOV byte ptr [EBP + -0x11],CL
0070E60E  EB 06                     JMP 0x0070e616
LAB_0070e610:
0070E610  8A 55 EF                  MOV DL,byte ptr [EBP + -0x11]
0070E613  88 55 EF                  MOV byte ptr [EBP + -0x11],DL
LAB_0070e616:
0070E616  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E619  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070E620  85 C0                     TEST EAX,EAX
0070E622  7E 74                     JLE 0x0070e698
LAB_0070e624:
0070E624  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070E627  57                        PUSH EDI
0070E628  E8 73 69 FA FF            CALL 0x006b4fa0
0070E62D  33 C9                     XOR ECX,ECX
0070E62F  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070E632  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070E636  2B D3                     SUB EDX,EBX
0070E638  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070E63C  83 C1 1F                  ADD ECX,0x1f
0070E63F  C1 E9 03                  SHR ECX,0x3
0070E642  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070E648  4A                        DEC EDX
0070E649  0F AF CA                  IMUL ECX,EDX
0070E64C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0070E64F  03 D0                     ADD EDX,EAX
0070E651  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070E655  75 33                     JNZ 0x0070e68a
0070E657  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070E65A  57                        PUSH EDI
0070E65B  E8 40 69 FA FF            CALL 0x006b4fa0
0070E660  33 C9                     XOR ECX,ECX
0070E662  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070E665  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070E669  2B D3                     SUB EDX,EBX
0070E66B  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070E66F  83 C1 1F                  ADD ECX,0x1f
0070E672  C1 E9 03                  SHR ECX,0x3
0070E675  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070E67B  4A                        DEC EDX
0070E67C  0F AF CA                  IMUL ECX,EDX
0070E67F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0070E682  03 D0                     ADD EDX,EAX
0070E684  8A 45 EF                  MOV AL,byte ptr [EBP + -0x11]
0070E687  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
LAB_0070e68a:
0070E68A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070E68D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0070E690  40                        INC EAX
0070E691  3B C1                     CMP EAX,ECX
0070E693  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0070E696  7C 8C                     JL 0x0070e624
LAB_0070e698:
0070E698  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070E69E  43                        INC EBX
0070E69F  3B D8                     CMP EBX,EAX
0070E6A1  0F 8C F0 FE FF FF         JL 0x0070e597
0070E6A7  E9 66 08 00 00            JMP 0x0070ef12
LAB_0070e6ac:
0070E6AC  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070E6B2  C7 45 F0 FF FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffff
0070E6B9  3B C7                     CMP EAX,EDI
0070E6BB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0070E6BE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070E6C1  7E 6F                     JLE 0x0070e732
LAB_0070e6c3:
0070E6C3  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E6C6  33 DB                     XOR EBX,EBX
0070E6C8  85 C0                     TEST EAX,EAX
0070E6CA  7E 55                     JLE 0x0070e721
LAB_0070e6cc:
0070E6CC  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070E6CF  57                        PUSH EDI
0070E6D0  E8 CB 68 FA FF            CALL 0x006b4fa0
0070E6D5  33 C9                     XOR ECX,ECX
0070E6D7  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070E6DA  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070E6DE  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070E6E2  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070E6E5  83 C1 1F                  ADD ECX,0x1f
0070E6E8  C1 E9 03                  SHR ECX,0x3
0070E6EB  2B D7                     SUB EDX,EDI
0070E6ED  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070E6F3  4A                        DEC EDX
0070E6F4  0F AF CA                  IMUL ECX,EDX
0070E6F7  8B D3                     MOV EDX,EBX
0070E6F9  03 D0                     ADD EDX,EAX
0070E6FB  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070E6FF  74 0A                     JZ 0x0070e70b
0070E701  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E704  43                        INC EBX
0070E705  3B D8                     CMP EBX,EAX
0070E707  7C C3                     JL 0x0070e6cc
0070E709  EB 16                     JMP 0x0070e721
LAB_0070e70b:
0070E70B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0070E70E  85 C9                     TEST ECX,ECX
0070E710  7D 06                     JGE 0x0070e718
0070E712  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070E715  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0070e718:
0070E718  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070E71B  2B C1                     SUB EAX,ECX
0070E71D  40                        INC EAX
0070E71E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0070e721:
0070E721  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070E724  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070E72A  40                        INC EAX
0070E72B  3B C1                     CMP EAX,ECX
0070E72D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0070E730  7C 91                     JL 0x0070e6c3
LAB_0070e732:
0070E732  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070E735  85 C0                     TEST EAX,EAX
0070E737  0F 8E D5 07 00 00         JLE 0x0070ef12
0070E73D  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0070E740  03 C7                     ADD EAX,EDI
0070E742  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070E745  3B F8                     CMP EDI,EAX
0070E747  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070E74A  0F 8D C2 07 00 00         JGE 0x0070ef12
LAB_0070e750:
0070E750  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0070E756  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070E759  8B C7                     MOV EAX,EDI
0070E75B  2B C3                     SUB EAX,EBX
0070E75D  8D 51 FF                  LEA EDX,[ECX + -0x1]
0070E760  0F AF C2                  IMUL EAX,EDX
0070E763  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0070E767  99                        CDQ
0070E768  F7 7D F8                  IDIV dword ptr [EBP + -0x8]
0070E76B  33 DB                     XOR EBX,EBX
0070E76D  03 C1                     ADD EAX,ECX
0070E76F  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070E775  8A 54 08 02               MOV DL,byte ptr [EAX + ECX*0x1 + 0x2]
0070E779  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E77C  85 C0                     TEST EAX,EAX
0070E77E  88 55 EF                  MOV byte ptr [EBP + -0x11],DL
0070E781  7E 75                     JLE 0x0070e7f8
LAB_0070e783:
0070E783  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070E786  57                        PUSH EDI
0070E787  E8 14 68 FA FF            CALL 0x006b4fa0
0070E78C  33 C9                     XOR ECX,ECX
0070E78E  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070E791  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070E795  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070E799  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070E79C  83 C1 1F                  ADD ECX,0x1f
0070E79F  C1 E9 03                  SHR ECX,0x3
0070E7A2  2B D7                     SUB EDX,EDI
0070E7A4  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070E7AA  4A                        DEC EDX
0070E7AB  0F AF CA                  IMUL ECX,EDX
0070E7AE  8B D3                     MOV EDX,EBX
0070E7B0  03 D0                     ADD EDX,EAX
0070E7B2  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070E7B6  75 35                     JNZ 0x0070e7ed
0070E7B8  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070E7BB  57                        PUSH EDI
0070E7BC  E8 DF 67 FA FF            CALL 0x006b4fa0
0070E7C1  33 C9                     XOR ECX,ECX
0070E7C3  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070E7C6  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070E7CA  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070E7CE  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070E7D1  83 C1 1F                  ADD ECX,0x1f
0070E7D4  C1 E9 03                  SHR ECX,0x3
0070E7D7  2B D7                     SUB EDX,EDI
0070E7D9  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070E7DF  4A                        DEC EDX
0070E7E0  0F AF CA                  IMUL ECX,EDX
0070E7E3  8B D3                     MOV EDX,EBX
0070E7E5  03 D0                     ADD EDX,EAX
0070E7E7  8A 45 EF                  MOV AL,byte ptr [EBP + -0x11]
0070E7EA  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
LAB_0070e7ed:
0070E7ED  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E7F0  43                        INC EBX
0070E7F1  3B D8                     CMP EBX,EAX
0070E7F3  7C 8E                     JL 0x0070e783
0070E7F5  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0070e7f8:
0070E7F8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070E7FB  47                        INC EDI
0070E7FC  3B F8                     CMP EDI,EAX
0070E7FE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070E801  0F 8C 49 FF FF FF         JL 0x0070e750
0070E807  E9 06 07 00 00            JMP 0x0070ef12
LAB_0070e80c:
0070E80C  8B 9E 61 01 00 00         MOV EBX,dword ptr [ESI + 0x161]
0070E812  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070E815  3B DF                     CMP EBX,EDI
0070E817  0F 8E F5 06 00 00         JLE 0x0070ef12
LAB_0070e81d:
0070E81D  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0070E823  8D 41 FF                  LEA EAX,[ECX + -0x1]
0070E826  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0070E82A  0F AF C7                  IMUL EAX,EDI
0070E82D  99                        CDQ
0070E82E  F7 FB                     IDIV EBX
0070E830  33 DB                     XOR EBX,EBX
0070E832  03 C1                     ADD EAX,ECX
0070E834  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070E83A  8A 54 08 02               MOV DL,byte ptr [EAX + ECX*0x1 + 0x2]
0070E83E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E841  85 C0                     TEST EAX,EAX
0070E843  88 55 EF                  MOV byte ptr [EBP + -0x11],DL
0070E846  7E 75                     JLE 0x0070e8bd
LAB_0070e848:
0070E848  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070E84B  57                        PUSH EDI
0070E84C  E8 4F 67 FA FF            CALL 0x006b4fa0
0070E851  33 C9                     XOR ECX,ECX
0070E853  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070E856  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070E85A  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070E85E  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070E861  83 C1 1F                  ADD ECX,0x1f
0070E864  C1 E9 03                  SHR ECX,0x3
0070E867  2B D7                     SUB EDX,EDI
0070E869  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070E86F  4A                        DEC EDX
0070E870  0F AF CA                  IMUL ECX,EDX
0070E873  8B D3                     MOV EDX,EBX
0070E875  03 D0                     ADD EDX,EAX
0070E877  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070E87B  75 35                     JNZ 0x0070e8b2
0070E87D  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070E880  57                        PUSH EDI
0070E881  E8 1A 67 FA FF            CALL 0x006b4fa0
0070E886  33 C9                     XOR ECX,ECX
0070E888  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070E88B  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070E88F  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070E893  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070E896  83 C1 1F                  ADD ECX,0x1f
0070E899  C1 E9 03                  SHR ECX,0x3
0070E89C  2B D7                     SUB EDX,EDI
0070E89E  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070E8A4  4A                        DEC EDX
0070E8A5  0F AF CA                  IMUL ECX,EDX
0070E8A8  8B D3                     MOV EDX,EBX
0070E8AA  03 D0                     ADD EDX,EAX
0070E8AC  8A 45 EF                  MOV AL,byte ptr [EBP + -0x11]
0070E8AF  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
LAB_0070e8b2:
0070E8B2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E8B5  43                        INC EBX
0070E8B6  3B D8                     CMP EBX,EAX
0070E8B8  7C 8E                     JL 0x0070e848
0070E8BA  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0070e8bd:
0070E8BD  8B 9E 61 01 00 00         MOV EBX,dword ptr [ESI + 0x161]
0070E8C3  47                        INC EDI
0070E8C4  3B FB                     CMP EDI,EBX
0070E8C6  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070E8C9  0F 8C 4E FF FF FF         JL 0x0070e81d
0070E8CF  E9 3E 06 00 00            JMP 0x0070ef12
LAB_0070e8d4:
0070E8D4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070E8D7  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0070E8DA  3B C7                     CMP EAX,EDI
0070E8DC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0070E8DF  0F 8E 2D 06 00 00         JLE 0x0070ef12
LAB_0070e8e5:
0070E8E5  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070E8EB  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070E8F2  85 C0                     TEST EAX,EAX
0070E8F4  0F 8E 07 01 00 00         JLE 0x0070ea01
LAB_0070e8fa:
0070E8FA  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0070E8FD  53                        PUSH EBX
0070E8FE  E8 9D 66 FA FF            CALL 0x006b4fa0
0070E903  33 C9                     XOR ECX,ECX
0070E905  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0070E908  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070E90C  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
0070E910  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0070E913  83 C1 1F                  ADD ECX,0x1f
0070E916  C1 E9 03                  SHR ECX,0x3
0070E919  2B D3                     SUB EDX,EBX
0070E91B  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070E921  4A                        DEC EDX
0070E922  0F AF CA                  IMUL ECX,EDX
0070E925  8B D7                     MOV EDX,EDI
0070E927  03 D0                     ADD EDX,EAX
0070E929  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
0070E92C  3C FF                     CMP AL,0xff
0070E92E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070E931  75 21                     JNZ 0x0070e954
0070E933  0F BF C8                  MOVSX ECX,AX
0070E936  40                        INC EAX
0070E937  66 8B D3                  MOV DX,BX
0070E93A  66 3D 00 01               CMP AX,0x100
0070E93E  66 89 94 4D 44 FD FF FF   MOV word ptr [EBP + ECX*0x2 + 0xfffffd44],DX
0070E946  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070E949  0F 8C 9D 00 00 00         JL 0x0070e9ec
0070E94F  E9 91 00 00 00            JMP 0x0070e9e5
LAB_0070e954:
0070E954  66 85 C0                  TEST AX,AX
0070E957  0F 8E 8F 00 00 00         JLE 0x0070e9ec
0070E95D  0F BF D8                  MOVSX EBX,AX
0070E960  33 D2                     XOR EDX,EDX
0070E962  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0070E965  85 DB                     TEST EBX,EBX
0070E967  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0070E96A  7E 79                     JLE 0x0070e9e5
0070E96C  8D 85 44 FD FF FF         LEA EAX,[EBP + 0xfffffd44]
0070E972  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0070e975:
0070E975  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0070E97B  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070E97E  57                        PUSH EDI
0070E97F  8D 41 FF                  LEA EAX,[ECX + -0x1]
0070E982  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0070E986  0F AF C2                  IMUL EAX,EDX
0070E989  99                        CDQ
0070E98A  F7 FB                     IDIV EBX
0070E98C  33 DB                     XOR EBX,EBX
0070E98E  03 C1                     ADD EAX,ECX
0070E990  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070E996  8A 5C 08 02               MOV BL,byte ptr [EAX + ECX*0x1 + 0x2]
0070E99A  E8 01 66 FA FF            CALL 0x006b4fa0
0070E99F  33 D2                     XOR EDX,EDX
0070E9A1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070E9A4  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0070E9A8  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
0070E9AC  0F BF 09                  MOVSX ECX,word ptr [ECX]
0070E9AF  8B 7F 08                  MOV EDI,dword ptr [EDI + 0x8]
0070E9B2  83 C2 1F                  ADD EDX,0x1f
0070E9B5  C1 EA 03                  SHR EDX,0x3
0070E9B8  2B F9                     SUB EDI,ECX
0070E9BA  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070E9C0  4F                        DEC EDI
0070E9C1  0F AF D7                  IMUL EDX,EDI
0070E9C4  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0070E9C7  8B CF                     MOV ECX,EDI
0070E9C9  03 C8                     ADD ECX,EAX
0070E9CB  88 1C 0A                  MOV byte ptr [EDX + ECX*0x1],BL
0070E9CE  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0070E9D1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070E9D4  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0070E9D7  42                        INC EDX
0070E9D8  83 C1 02                  ADD ECX,0x2
0070E9DB  3B D3                     CMP EDX,EBX
0070E9DD  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0070E9E0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0070E9E3  7C 90                     JL 0x0070e975
LAB_0070e9e5:
0070E9E5  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_0070e9ec:
0070E9EC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070E9EF  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070E9F5  40                        INC EAX
0070E9F6  3B C1                     CMP EAX,ECX
0070E9F8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0070E9FB  0F 8C F9 FE FF FF         JL 0x0070e8fa
LAB_0070ea01:
0070EA01  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070EA04  66 85 C0                  TEST AX,AX
0070EA07  0F 8E 8F 00 00 00         JLE 0x0070ea9c
0070EA0D  0F BF D8                  MOVSX EBX,AX
0070EA10  33 D2                     XOR EDX,EDX
0070EA12  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0070EA15  85 DB                     TEST EBX,EBX
0070EA17  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0070EA1A  7E 79                     JLE 0x0070ea95
0070EA1C  8D 85 44 FD FF FF         LEA EAX,[EBP + 0xfffffd44]
0070EA22  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0070ea25:
0070EA25  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0070EA2B  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070EA2E  57                        PUSH EDI
0070EA2F  8D 41 FF                  LEA EAX,[ECX + -0x1]
0070EA32  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0070EA36  0F AF C2                  IMUL EAX,EDX
0070EA39  99                        CDQ
0070EA3A  F7 FB                     IDIV EBX
0070EA3C  33 DB                     XOR EBX,EBX
0070EA3E  03 C1                     ADD EAX,ECX
0070EA40  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070EA46  8A 5C 08 02               MOV BL,byte ptr [EAX + ECX*0x1 + 0x2]
0070EA4A  E8 51 65 FA FF            CALL 0x006b4fa0
0070EA4F  33 D2                     XOR EDX,EDX
0070EA51  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070EA54  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0070EA58  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
0070EA5C  0F BF 09                  MOVSX ECX,word ptr [ECX]
0070EA5F  8B 7F 08                  MOV EDI,dword ptr [EDI + 0x8]
0070EA62  83 C2 1F                  ADD EDX,0x1f
0070EA65  C1 EA 03                  SHR EDX,0x3
0070EA68  2B F9                     SUB EDI,ECX
0070EA6A  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070EA70  4F                        DEC EDI
0070EA71  0F AF D7                  IMUL EDX,EDI
0070EA74  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0070EA77  8B CF                     MOV ECX,EDI
0070EA79  03 C8                     ADD ECX,EAX
0070EA7B  88 1C 0A                  MOV byte ptr [EDX + ECX*0x1],BL
0070EA7E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0070EA81  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070EA84  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0070EA87  42                        INC EDX
0070EA88  83 C1 02                  ADD ECX,0x2
0070EA8B  3B D3                     CMP EDX,EBX
0070EA8D  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0070EA90  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0070EA93  7C 90                     JL 0x0070ea25
LAB_0070ea95:
0070EA95  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_0070ea9c:
0070EA9C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070EA9F  47                        INC EDI
0070EAA0  3B F8                     CMP EDI,EAX
0070EAA2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0070EAA5  0F 8C 3A FE FF FF         JL 0x0070e8e5
0070EAAB  E9 62 04 00 00            JMP 0x0070ef12
LAB_0070eab0:
0070EAB0  3D 00 10 00 00            CMP EAX,0x1000
0070EAB5  0F 84 CC 02 00 00         JZ 0x0070ed87
0070EABB  3D 00 20 00 00            CMP EAX,0x2000
0070EAC0  0F 84 F6 00 00 00         JZ 0x0070ebbc
0070EAC6  3D 00 40 00 00            CMP EAX,0x4000
0070EACB  0F 85 41 04 00 00         JNZ 0x0070ef12
0070EAD1  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0070EAD7  50                        PUSH EAX
0070EAD8  E8 D3 FB 01 00            CALL 0x0072e6b0
0070EADD  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070EAE3  83 C4 04                  ADD ESP,0x4
0070EAE6  85 C0                     TEST EAX,EAX
0070EAE8  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070EAEF  0F 8E 1D 04 00 00         JLE 0x0070ef12
LAB_0070eaf5:
0070EAF5  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070EAF8  33 DB                     XOR EBX,EBX
0070EAFA  85 C0                     TEST EAX,EAX
0070EAFC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070EAFF  0F 8E 9D 00 00 00         JLE 0x0070eba2
LAB_0070eb05:
0070EB05  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070EB08  57                        PUSH EDI
0070EB09  E8 92 64 FA FF            CALL 0x006b4fa0
0070EB0E  33 D2                     XOR EDX,EDX
0070EB10  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0070EB13  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0070EB17  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
0070EB1B  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070EB1E  83 C2 1F                  ADD EDX,0x1f
0070EB21  C1 EA 03                  SHR EDX,0x3
0070EB24  2B CF                     SUB ECX,EDI
0070EB26  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070EB2C  49                        DEC ECX
0070EB2D  0F AF D1                  IMUL EDX,ECX
0070EB30  8B CB                     MOV ECX,EBX
0070EB32  03 C8                     ADD ECX,EAX
0070EB34  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
0070EB38  75 59                     JNZ 0x0070eb93
0070EB3A  8B BE 89 01 00 00         MOV EDI,dword ptr [ESI + 0x189]
0070EB40  E8 7B FB 01 00            CALL 0x0072e6c0
0070EB45  99                        CDQ
0070EB46  8D 4F FF                  LEA ECX,[EDI + -0x1]
0070EB49  0F AF 7D D0               IMUL EDI,dword ptr [EBP + -0x30]
0070EB4D  F7 F9                     IDIV ECX
0070EB4F  8B 86 85 01 00 00         MOV EAX,dword ptr [ESI + 0x185]
0070EB55  33 DB                     XOR EBX,EBX
0070EB57  03 D7                     ADD EDX,EDI
0070EB59  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070EB5C  57                        PUSH EDI
0070EB5D  8A 5C 02 02               MOV BL,byte ptr [EDX + EAX*0x1 + 0x2]
0070EB61  E8 3A 64 FA FF            CALL 0x006b4fa0
0070EB66  33 C9                     XOR ECX,ECX
0070EB68  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070EB6B  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070EB6F  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070EB73  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0070EB76  83 C1 1F                  ADD ECX,0x1f
0070EB79  C1 E9 03                  SHR ECX,0x3
0070EB7C  2B D7                     SUB EDX,EDI
0070EB7E  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070EB84  4A                        DEC EDX
0070EB85  0F AF CA                  IMUL ECX,EDX
0070EB88  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070EB8B  03 D0                     ADD EDX,EAX
0070EB8D  88 1C 11                  MOV byte ptr [ECX + EDX*0x1],BL
0070EB90  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0070eb93:
0070EB93  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070EB96  43                        INC EBX
0070EB97  3B D8                     CMP EBX,EAX
0070EB99  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070EB9C  0F 8C 63 FF FF FF         JL 0x0070eb05
LAB_0070eba2:
0070EBA2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070EBA5  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070EBAB  40                        INC EAX
0070EBAC  3B C1                     CMP EAX,ECX
0070EBAE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0070EBB1  0F 8C 3E FF FF FF         JL 0x0070eaf5
0070EBB7  E9 56 03 00 00            JMP 0x0070ef12
LAB_0070ebbc:
0070EBBC  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070EBC2  33 DB                     XOR EBX,EBX
0070EBC4  3B C7                     CMP EAX,EDI
0070EBC6  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0070EBC9  0F 8E 43 03 00 00         JLE 0x0070ef12
0070EBCF  EB 02                     JMP 0x0070ebd3
LAB_0070ebd1:
0070EBD1  33 FF                     XOR EDI,EDI
LAB_0070ebd3:
0070EBD3  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070EBD6  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0070EBD9  3B C7                     CMP EAX,EDI
0070EBDB  0F 8E FA 00 00 00         JLE 0x0070ecdb
LAB_0070ebe1:
0070EBE1  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070EBE4  57                        PUSH EDI
0070EBE5  E8 B6 63 FA FF            CALL 0x006b4fa0
0070EBEA  33 C9                     XOR ECX,ECX
0070EBEC  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070EBEF  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070EBF3  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070EBF7  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0070EBFA  83 C1 1F                  ADD ECX,0x1f
0070EBFD  C1 E9 03                  SHR ECX,0x3
0070EC00  2B D7                     SUB EDX,EDI
0070EC02  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070EC08  4A                        DEC EDX
0070EC09  0F AF CA                  IMUL ECX,EDX
0070EC0C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0070EC0F  03 D0                     ADD EDX,EAX
0070EC11  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070EC15  75 20                     JNZ 0x0070ec37
0070EC17  66 8B 4D E4               MOV CX,word ptr [EBP + -0x1c]
0070EC1B  0F BF C3                  MOVSX EAX,BX
0070EC1E  43                        INC EBX
0070EC1F  66 81 FB 00 01            CMP BX,0x100
0070EC24  66 89 8C 45 44 FB FF FF   MOV word ptr [EBP + EAX*0x2 + 0xfffffb44],CX
0070EC2C  0F 8C 97 00 00 00         JL 0x0070ecc9
0070EC32  E9 90 00 00 00            JMP 0x0070ecc7
LAB_0070ec37:
0070EC37  66 85 DB                  TEST BX,BX
0070EC3A  0F 8E 89 00 00 00         JLE 0x0070ecc9
0070EC40  0F BF C3                  MOVSX EAX,BX
0070EC43  85 C0                     TEST EAX,EAX
0070EC45  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070EC4C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0070EC4F  7E 76                     JLE 0x0070ecc7
0070EC51  8D 95 44 FB FF FF         LEA EDX,[EBP + 0xfffffb44]
0070EC57  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0070ec5a:
0070EC5A  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0070EC60  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070EC63  33 DB                     XOR EBX,EBX
0070EC65  57                        PUSH EDI
0070EC66  8D 41 FF                  LEA EAX,[ECX + -0x1]
0070EC69  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0070EC6D  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0070EC71  99                        CDQ
0070EC72  F7 7D F4                  IDIV dword ptr [EBP + -0xc]
0070EC75  03 C1                     ADD EAX,ECX
0070EC77  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070EC7D  8A 5C 08 02               MOV BL,byte ptr [EAX + ECX*0x1 + 0x2]
0070EC81  E8 1A 63 FA FF            CALL 0x006b4fa0
0070EC86  33 D2                     XOR EDX,EDX
0070EC88  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0070EC8B  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0070EC8F  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
0070EC93  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0070EC96  83 C2 1F                  ADD EDX,0x1f
0070EC99  C1 EA 03                  SHR EDX,0x3
0070EC9C  2B CF                     SUB ECX,EDI
0070EC9E  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070ECA4  49                        DEC ECX
0070ECA5  0F AF D1                  IMUL EDX,ECX
0070ECA8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070ECAB  03 C2                     ADD EAX,EDX
0070ECAD  0F BF 11                  MOVSX EDX,word ptr [ECX]
0070ECB0  83 C1 02                  ADD ECX,0x2
0070ECB3  88 1C 10                  MOV byte ptr [EAX + EDX*0x1],BL
0070ECB6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070ECB9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0070ECBC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070ECBF  40                        INC EAX
0070ECC0  3B C1                     CMP EAX,ECX
0070ECC2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070ECC5  7C 93                     JL 0x0070ec5a
LAB_0070ecc7:
0070ECC7  33 DB                     XOR EBX,EBX
LAB_0070ecc9:
0070ECC9  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0070ECCC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0070ECCF  40                        INC EAX
0070ECD0  3B C1                     CMP EAX,ECX
0070ECD2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0070ECD5  0F 8C 06 FF FF FF         JL 0x0070ebe1
LAB_0070ecdb:
0070ECDB  66 85 DB                  TEST BX,BX
0070ECDE  0F 8E 89 00 00 00         JLE 0x0070ed6d
0070ECE4  0F BF C3                  MOVSX EAX,BX
0070ECE7  85 C0                     TEST EAX,EAX
0070ECE9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070ECF0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0070ECF3  7E 76                     JLE 0x0070ed6b
0070ECF5  8D 85 44 FB FF FF         LEA EAX,[EBP + 0xfffffb44]
0070ECFB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0070ecfe:
0070ECFE  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0070ED04  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070ED07  33 DB                     XOR EBX,EBX
0070ED09  57                        PUSH EDI
0070ED0A  8D 41 FF                  LEA EAX,[ECX + -0x1]
0070ED0D  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0070ED11  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0070ED15  99                        CDQ
0070ED16  F7 7D F4                  IDIV dword ptr [EBP + -0xc]
0070ED19  03 C1                     ADD EAX,ECX
0070ED1B  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070ED21  8A 5C 08 02               MOV BL,byte ptr [EAX + ECX*0x1 + 0x2]
0070ED25  E8 76 62 FA FF            CALL 0x006b4fa0
0070ED2A  33 D2                     XOR EDX,EDX
0070ED2C  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0070ED2F  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0070ED33  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
0070ED37  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0070ED3A  83 C2 1F                  ADD EDX,0x1f
0070ED3D  C1 EA 03                  SHR EDX,0x3
0070ED40  2B CF                     SUB ECX,EDI
0070ED42  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070ED48  49                        DEC ECX
0070ED49  0F AF D1                  IMUL EDX,ECX
0070ED4C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070ED4F  03 C2                     ADD EAX,EDX
0070ED51  0F BF 11                  MOVSX EDX,word ptr [ECX]
0070ED54  83 C1 02                  ADD ECX,0x2
0070ED57  88 1C 10                  MOV byte ptr [EAX + EDX*0x1],BL
0070ED5A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070ED5D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0070ED60  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070ED63  40                        INC EAX
0070ED64  3B C1                     CMP EAX,ECX
0070ED66  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070ED69  7C 93                     JL 0x0070ecfe
LAB_0070ed6b:
0070ED6B  33 DB                     XOR EBX,EBX
LAB_0070ed6d:
0070ED6D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070ED70  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070ED76  40                        INC EAX
0070ED77  3B C1                     CMP EAX,ECX
0070ED79  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070ED7C  0F 8C 4F FE FF FF         JL 0x0070ebd1
0070ED82  E9 8B 01 00 00            JMP 0x0070ef12
LAB_0070ed87:
0070ED87  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070ED8A  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070ED8D  3B C7                     CMP EAX,EDI
0070ED8F  0F 8E 7D 01 00 00         JLE 0x0070ef12
LAB_0070ed95:
0070ED95  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0070ED9B  33 DB                     XOR EBX,EBX
0070ED9D  8D 41 FF                  LEA EAX,[ECX + -0x1]
0070EDA0  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0070EDA4  0F AF C7                  IMUL EAX,EDI
0070EDA7  99                        CDQ
0070EDA8  F7 7D E8                  IDIV dword ptr [EBP + -0x18]
0070EDAB  03 C1                     ADD EAX,ECX
0070EDAD  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070EDB3  8A 54 08 02               MOV DL,byte ptr [EAX + ECX*0x1 + 0x2]
0070EDB7  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070EDBD  85 C0                     TEST EAX,EAX
0070EDBF  88 55 EF                  MOV byte ptr [EBP + -0x11],DL
0070EDC2  7E 74                     JLE 0x0070ee38
LAB_0070edc4:
0070EDC4  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070EDC7  57                        PUSH EDI
0070EDC8  E8 D3 61 FA FF            CALL 0x006b4fa0
0070EDCD  33 C9                     XOR ECX,ECX
0070EDCF  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070EDD2  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070EDD6  2B D3                     SUB EDX,EBX
0070EDD8  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070EDDC  83 C1 1F                  ADD ECX,0x1f
0070EDDF  C1 E9 03                  SHR ECX,0x3
0070EDE2  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070EDE8  4A                        DEC EDX
0070EDE9  0F AF CA                  IMUL ECX,EDX
0070EDEC  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0070EDEF  03 D0                     ADD EDX,EAX
0070EDF1  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070EDF5  75 33                     JNZ 0x0070ee2a
0070EDF7  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070EDFA  57                        PUSH EDI
0070EDFB  E8 A0 61 FA FF            CALL 0x006b4fa0
0070EE00  33 C9                     XOR ECX,ECX
0070EE02  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070EE05  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070EE09  2B D3                     SUB EDX,EBX
0070EE0B  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070EE0F  83 C1 1F                  ADD ECX,0x1f
0070EE12  C1 E9 03                  SHR ECX,0x3
0070EE15  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070EE1B  4A                        DEC EDX
0070EE1C  0F AF CA                  IMUL ECX,EDX
0070EE1F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0070EE22  03 D0                     ADD EDX,EAX
0070EE24  8A 45 EF                  MOV AL,byte ptr [EBP + -0x11]
0070EE27  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
LAB_0070ee2a:
0070EE2A  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070EE30  43                        INC EBX
0070EE31  3B D8                     CMP EBX,EAX
0070EE33  7C 8F                     JL 0x0070edc4
0070EE35  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0070ee38:
0070EE38  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070EE3B  47                        INC EDI
0070EE3C  3B F8                     CMP EDI,EAX
0070EE3E  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070EE41  0F 8C 4E FF FF FF         JL 0x0070ed95
0070EE47  E9 C6 00 00 00            JMP 0x0070ef12
LAB_0070ee4c:
0070EE4C  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070EE52  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0070EE55  3B C7                     CMP EAX,EDI
0070EE57  0F 8E B5 00 00 00         JLE 0x0070ef12
LAB_0070ee5d:
0070EE5D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070EE60  33 DB                     XOR EBX,EBX
0070EE62  85 C0                     TEST EAX,EAX
0070EE64  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070EE67  0F 8E 90 00 00 00         JLE 0x0070eefd
LAB_0070ee6d:
0070EE6D  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070EE70  57                        PUSH EDI
0070EE71  E8 2A 61 FA FF            CALL 0x006b4fa0
0070EE76  33 C9                     XOR ECX,ECX
0070EE78  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0070EE7B  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
0070EE7F  0F AF 4F 04               IMUL ECX,dword ptr [EDI + 0x4]
0070EE83  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0070EE86  83 C1 1F                  ADD ECX,0x1f
0070EE89  C1 E9 03                  SHR ECX,0x3
0070EE8C  2B D7                     SUB EDX,EDI
0070EE8E  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070EE94  4A                        DEC EDX
0070EE95  0F AF CA                  IMUL ECX,EDX
0070EE98  8B D3                     MOV EDX,EBX
0070EE9A  03 D0                     ADD EDX,EAX
0070EE9C  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070EEA0  75 4C                     JNZ 0x0070eeee
0070EEA2  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0070EEA5  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070EEAB  0F AF 86 89 01 00 00      IMUL EAX,dword ptr [ESI + 0x189]
0070EEB2  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0070EEB5  33 DB                     XOR EBX,EBX
0070EEB7  8A 5C 08 02               MOV BL,byte ptr [EAX + ECX*0x1 + 0x2]
0070EEBB  57                        PUSH EDI
0070EEBC  E8 DF 60 FA FF            CALL 0x006b4fa0
0070EEC1  33 D2                     XOR EDX,EDX
0070EEC3  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0070EEC6  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0070EECA  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
0070EECE  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0070EED1  83 C2 1F                  ADD EDX,0x1f
0070EED4  C1 EA 03                  SHR EDX,0x3
0070EED7  2B CF                     SUB ECX,EDI
0070EED9  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070EEDF  49                        DEC ECX
0070EEE0  0F AF D1                  IMUL EDX,ECX
0070EEE3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070EEE6  03 C8                     ADD ECX,EAX
0070EEE8  88 1C 0A                  MOV byte ptr [EDX + ECX*0x1],BL
0070EEEB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0070eeee:
0070EEEE  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070EEF1  43                        INC EBX
0070EEF2  3B D8                     CMP EBX,EAX
0070EEF4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070EEF7  0F 8C 70 FF FF FF         JL 0x0070ee6d
LAB_0070eefd:
0070EEFD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0070EF00  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070EF06  40                        INC EAX
0070EF07  3B C1                     CMP EAX,ECX
0070EF09  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0070EF0C  0F 8C 4B FF FF FF         JL 0x0070ee5d
LAB_0070ef12:
0070EF12  8B 8E 59 01 00 00         MOV ECX,dword ptr [ESI + 0x159]
0070EF18  85 C9                     TEST ECX,ECX
0070EF1A  75 0A                     JNZ 0x0070ef26
0070EF1C  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070EF22  85 C0                     TEST EAX,EAX
0070EF24  74 29                     JZ 0x0070ef4f
LAB_0070ef26:
0070EF26  8B 86 71 01 00 00         MOV EAX,dword ptr [ESI + 0x171]
0070EF2C  3D 00 00 80 00            CMP EAX,0x800000
0070EF31  0F 87 23 0E 00 00         JA 0x0070fd5a
0070EF37  0F 84 28 0E 00 00         JZ 0x0070fd65
0070EF3D  3D 00 00 20 00            CMP EAX,0x200000
0070EF42  74 56                     JZ 0x0070ef9a
0070EF44  3D 00 00 40 00            CMP EAX,0x400000
0070EF49  0F 84 16 0E 00 00         JZ 0x0070fd65
LAB_0070ef4f:
0070EF4F  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0070EF52  85 C0                     TEST EAX,EAX
0070EF54  0F 84 CF 13 00 00         JZ 0x00710329
0070EF5A  8B 8E 75 01 00 00         MOV ECX,dword ptr [ESI + 0x175]
0070EF60  83 F9 10                  CMP ECX,0x10
0070EF63  74 09                     JZ 0x0070ef6e
0070EF65  83 F9 20                  CMP ECX,0x20
0070EF68  0F 85 BB 13 00 00         JNZ 0x00710329
LAB_0070ef6e:
0070EF6E  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0070EF71  83 CA FF                  OR EDX,0xffffffff
0070EF74  83 C8 FF                  OR EAX,0xffffffff
0070EF77  83 F9 20                  CMP ECX,0x20
0070EF7A  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0070EF7D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070EF80  74 03                     JZ 0x0070ef85
0070EF82  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
LAB_0070ef85:
0070EF85  83 F9 20                  CMP ECX,0x20
0070EF88  0F 85 C8 12 00 00         JNZ 0x00710256
0070EF8E  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070EF95  E9 C9 12 00 00            JMP 0x00710263
LAB_0070ef9a:
0070EF9A  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070EFA0  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070EFA3  3A 02                     CMP AL,byte ptr [EDX]
0070EFA5  74 A8                     JZ 0x0070ef4f
0070EFA7  85 C9                     TEST ECX,ECX
0070EFA9  0F 8E 8D 04 00 00         JLE 0x0070f43c
0070EFAF  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070EFB5  85 C0                     TEST EAX,EAX
0070EFB7  0F 8E 7D 04 00 00         JLE 0x0070f43a
0070EFBD  33 D2                     XOR EDX,EDX
0070EFBF  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_0070efc2:
0070EFC2  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070EFC8  8B 8E 5D 01 00 00         MOV ECX,dword ptr [ESI + 0x15d]
0070EFCE  3B C1                     CMP EAX,ECX
0070EFD0  7E 02                     JLE 0x0070efd4
0070EFD2  8B C8                     MOV ECX,EAX
LAB_0070efd4:
0070EFD4  3B D1                     CMP EDX,ECX
0070EFD6  0F 8D 73 FF FF FF         JGE 0x0070ef4f
0070EFDC  3B D0                     CMP EDX,EAX
0070EFDE  0F 8D 26 02 00 00         JGE 0x0070f20a
0070EFE4  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070EFEA  33 DB                     XOR EBX,EBX
0070EFEC  85 C0                     TEST EAX,EAX
0070EFEE  0F 8E 16 02 00 00         JLE 0x0070f20a
LAB_0070eff4:
0070EFF4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070EFF7  33 FF                     XOR EDI,EDI
0070EFF9  85 C0                     TEST EAX,EAX
0070EFFB  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070F002  0F 8E F3 01 00 00         JLE 0x0070f1fb
LAB_0070f008:
0070F008  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070F00B  85 C0                     TEST EAX,EAX
0070F00D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F010  0F 84 18 01 00 00         JZ 0x0070f12e
0070F016  85 C0                     TEST EAX,EAX
0070F018  75 38                     JNZ 0x0070f052
0070F01A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F01D  50                        PUSH EAX
0070F01E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F021  E8 7A 5F FA FF            CALL 0x006b4fa0
0070F026  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F029  33 D2                     XOR EDX,EDX
0070F02B  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F02F  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F033  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F036  83 C2 1F                  ADD EDX,0x1f
0070F039  C1 EA 03                  SHR EDX,0x3
0070F03C  2B CB                     SUB ECX,EBX
0070F03E  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F044  49                        DEC ECX
0070F045  0F AF D1                  IMUL EDX,ECX
0070F048  8B CF                     MOV ECX,EDI
0070F04A  03 C8                     ADD ECX,EAX
0070F04C  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
0070F050  74 4E                     JZ 0x0070f0a0
LAB_0070f052:
0070F052  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F055  85 C0                     TEST EAX,EAX
0070F057  0F 84 92 01 00 00         JZ 0x0070f1ef
0070F05D  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F060  50                        PUSH EAX
0070F061  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F064  E8 37 5F FA FF            CALL 0x006b4fa0
0070F069  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F06C  33 D2                     XOR EDX,EDX
0070F06E  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F072  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F076  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F079  83 C2 1F                  ADD EDX,0x1f
0070F07C  C1 EA 03                  SHR EDX,0x3
0070F07F  2B CB                     SUB ECX,EBX
0070F081  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F087  49                        DEC ECX
0070F088  0F AF D1                  IMUL EDX,ECX
0070F08B  8B CF                     MOV ECX,EDI
0070F08D  03 C8                     ADD ECX,EAX
0070F08F  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0070F092  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070F098  3A 02                     CMP AL,byte ptr [EDX]
0070F09A  0F 84 4F 01 00 00         JZ 0x0070f1ef
LAB_0070f0a0:
0070F0A0  8D 47 FF                  LEA EAX,[EDI + -0x1]
0070F0A3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070F0AA  85 C0                     TEST EAX,EAX
0070F0AC  0F 8C 3D 01 00 00         JL 0x0070f1ef
0070F0B2  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F0B5  50                        PUSH EAX
0070F0B6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F0B9  E8 E2 5E FA FF            CALL 0x006b4fa0
0070F0BE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F0C1  33 D2                     XOR EDX,EDX
0070F0C3  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F0C7  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F0CB  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F0CE  83 C2 1F                  ADD EDX,0x1f
0070F0D1  C1 EA 03                  SHR EDX,0x3
0070F0D4  2B CB                     SUB ECX,EBX
0070F0D6  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F0DC  49                        DEC ECX
0070F0DD  0F AF D1                  IMUL EDX,ECX
0070F0E0  8B CF                     MOV ECX,EDI
0070F0E2  03 C8                     ADD ECX,EAX
0070F0E4  8A 44 0A FF               MOV AL,byte ptr [EDX + ECX*0x1 + -0x1]
0070F0E8  84 C0                     TEST AL,AL
0070F0EA  0F 85 FF 00 00 00         JNZ 0x0070f1ef
0070F0F0  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F0F3  50                        PUSH EAX
0070F0F4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F0F7  E8 A4 5E FA FF            CALL 0x006b4fa0
0070F0FC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F0FF  33 D2                     XOR EDX,EDX
0070F101  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F105  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F109  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F10C  83 C2 1F                  ADD EDX,0x1f
0070F10F  C1 EA 03                  SHR EDX,0x3
0070F112  2B CB                     SUB ECX,EBX
0070F114  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F11A  49                        DEC ECX
0070F11B  0F AF D1                  IMUL EDX,ECX
0070F11E  8B CF                     MOV ECX,EDI
0070F120  03 C8                     ADD ECX,EAX
0070F122  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F125  88 44 0A FF               MOV byte ptr [EDX + ECX*0x1 + -0x1],AL
0070F129  E9 C1 00 00 00            JMP 0x0070f1ef
LAB_0070f12e:
0070F12E  85 C0                     TEST EAX,EAX
0070F130  75 38                     JNZ 0x0070f16a
0070F132  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F135  50                        PUSH EAX
0070F136  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F139  E8 62 5E FA FF            CALL 0x006b4fa0
0070F13E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F141  33 D2                     XOR EDX,EDX
0070F143  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F147  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F14B  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F14E  83 C2 1F                  ADD EDX,0x1f
0070F151  C1 EA 03                  SHR EDX,0x3
0070F154  2B CB                     SUB ECX,EBX
0070F156  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F15C  49                        DEC ECX
0070F15D  0F AF D1                  IMUL EDX,ECX
0070F160  8B CF                     MOV ECX,EDI
0070F162  03 C8                     ADD ECX,EAX
0070F164  80 3C 0A 00               CMP byte ptr [EDX + ECX*0x1],0x0
0070F168  74 46                     JZ 0x0070f1b0
LAB_0070f16a:
0070F16A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F16D  85 C0                     TEST EAX,EAX
0070F16F  74 7E                     JZ 0x0070f1ef
0070F171  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F174  50                        PUSH EAX
0070F175  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F178  E8 23 5E FA FF            CALL 0x006b4fa0
0070F17D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F180  33 D2                     XOR EDX,EDX
0070F182  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F186  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F18A  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F18D  83 C2 1F                  ADD EDX,0x1f
0070F190  C1 EA 03                  SHR EDX,0x3
0070F193  2B CB                     SUB ECX,EBX
0070F195  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F19B  49                        DEC ECX
0070F19C  0F AF D1                  IMUL EDX,ECX
0070F19F  8B CF                     MOV ECX,EDI
0070F1A1  03 C8                     ADD ECX,EAX
0070F1A3  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0070F1A6  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070F1AC  3A 02                     CMP AL,byte ptr [EDX]
0070F1AE  75 3F                     JNZ 0x0070f1ef
LAB_0070f1b0:
0070F1B0  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F1B3  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070F1BA  50                        PUSH EAX
0070F1BB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F1BE  E8 DD 5D FA FF            CALL 0x006b4fa0
0070F1C3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F1C6  33 D2                     XOR EDX,EDX
0070F1C8  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F1CC  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F1D0  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F1D3  83 C2 1F                  ADD EDX,0x1f
0070F1D6  C1 EA 03                  SHR EDX,0x3
0070F1D9  2B CB                     SUB ECX,EBX
0070F1DB  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F1E1  49                        DEC ECX
0070F1E2  0F AF D1                  IMUL EDX,ECX
0070F1E5  8B CF                     MOV ECX,EDI
0070F1E7  03 C8                     ADD ECX,EAX
0070F1E9  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F1EC  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
LAB_0070f1ef:
0070F1EF  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070F1F2  47                        INC EDI
0070F1F3  3B F8                     CMP EDI,EAX
0070F1F5  0F 8C 0D FE FF FF         JL 0x0070f008
LAB_0070f1fb:
0070F1FB  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070F201  43                        INC EBX
0070F202  3B D8                     CMP EBX,EAX
0070F204  0F 8C EA FD FF FF         JL 0x0070eff4
LAB_0070f20a:
0070F20A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F20D  8B 8E 5D 01 00 00         MOV ECX,dword ptr [ESI + 0x15d]
0070F213  3B C1                     CMP EAX,ECX
0070F215  0F 8D 14 02 00 00         JGE 0x0070f42f
0070F21B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0070F21E  33 DB                     XOR EBX,EBX
0070F220  85 C9                     TEST ECX,ECX
0070F222  0F 8E 07 02 00 00         JLE 0x0070f42f
LAB_0070f228:
0070F228  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070F22E  33 FF                     XOR EDI,EDI
0070F230  85 C9                     TEST ECX,ECX
0070F232  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070F239  0F 8E E4 01 00 00         JLE 0x0070f423
LAB_0070f23f:
0070F23F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F242  85 C9                     TEST ECX,ECX
0070F244  0F 84 06 01 00 00         JZ 0x0070f350
0070F24A  85 C0                     TEST EAX,EAX
0070F24C  75 38                     JNZ 0x0070f286
0070F24E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F251  50                        PUSH EAX
0070F252  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F255  E8 46 5D FA FF            CALL 0x006b4fa0
0070F25A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F25D  33 D2                     XOR EDX,EDX
0070F25F  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F263  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F267  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F26A  83 C2 1F                  ADD EDX,0x1f
0070F26D  C1 EA 03                  SHR EDX,0x3
0070F270  2B CF                     SUB ECX,EDI
0070F272  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F278  49                        DEC ECX
0070F279  0F AF D1                  IMUL EDX,ECX
0070F27C  8B CB                     MOV ECX,EBX
0070F27E  03 C8                     ADD ECX,EAX
0070F280  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
0070F284  74 4E                     JZ 0x0070f2d4
LAB_0070f286:
0070F286  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F289  85 C0                     TEST EAX,EAX
0070F28B  0F 84 80 01 00 00         JZ 0x0070f411
0070F291  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F294  50                        PUSH EAX
0070F295  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F298  E8 03 5D FA FF            CALL 0x006b4fa0
0070F29D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F2A0  33 D2                     XOR EDX,EDX
0070F2A2  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F2A6  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F2AA  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F2AD  83 C2 1F                  ADD EDX,0x1f
0070F2B0  C1 EA 03                  SHR EDX,0x3
0070F2B3  2B CF                     SUB ECX,EDI
0070F2B5  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F2BB  49                        DEC ECX
0070F2BC  0F AF D1                  IMUL EDX,ECX
0070F2BF  8B CB                     MOV ECX,EBX
0070F2C1  03 C8                     ADD ECX,EAX
0070F2C3  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0070F2C6  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070F2CC  3A 02                     CMP AL,byte ptr [EDX]
0070F2CE  0F 84 3D 01 00 00         JZ 0x0070f411
LAB_0070f2d4:
0070F2D4  8D 47 FF                  LEA EAX,[EDI + -0x1]
0070F2D7  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070F2DE  85 C0                     TEST EAX,EAX
0070F2E0  0F 8C 2B 01 00 00         JL 0x0070f411
0070F2E6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F2E9  50                        PUSH EAX
0070F2EA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F2ED  E8 AE 5C FA FF            CALL 0x006b4fa0
0070F2F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F2F5  33 D2                     XOR EDX,EDX
0070F2F7  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F2FB  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F2FF  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F302  83 C2 1F                  ADD EDX,0x1f
0070F305  C1 EA 03                  SHR EDX,0x3
0070F308  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F30E  2B CF                     SUB ECX,EDI
0070F310  0F AF D1                  IMUL EDX,ECX
0070F313  8B CB                     MOV ECX,EBX
0070F315  03 C8                     ADD ECX,EAX
0070F317  80 3C 0A 00               CMP byte ptr [EDX + ECX*0x1],0x0
0070F31B  0F 85 F0 00 00 00         JNZ 0x0070f411
0070F321  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F324  50                        PUSH EAX
0070F325  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F328  E8 73 5C FA FF            CALL 0x006b4fa0
0070F32D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F330  33 D2                     XOR EDX,EDX
0070F332  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F336  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F33A  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F33D  83 C2 1F                  ADD EDX,0x1f
0070F340  C1 EA 03                  SHR EDX,0x3
0070F343  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F349  2B CF                     SUB ECX,EDI
0070F34B  E9 B4 00 00 00            JMP 0x0070f404
LAB_0070f350:
0070F350  85 C0                     TEST EAX,EAX
0070F352  75 38                     JNZ 0x0070f38c
0070F354  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F357  50                        PUSH EAX
0070F358  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F35B  E8 40 5C FA FF            CALL 0x006b4fa0
0070F360  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F363  33 D2                     XOR EDX,EDX
0070F365  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F369  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F36D  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F370  83 C2 1F                  ADD EDX,0x1f
0070F373  C1 EA 03                  SHR EDX,0x3
0070F376  2B CF                     SUB ECX,EDI
0070F378  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F37E  49                        DEC ECX
0070F37F  0F AF D1                  IMUL EDX,ECX
0070F382  8B CB                     MOV ECX,EBX
0070F384  03 C8                     ADD ECX,EAX
0070F386  80 3C 0A 00               CMP byte ptr [EDX + ECX*0x1],0x0
0070F38A  74 46                     JZ 0x0070f3d2
LAB_0070f38c:
0070F38C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F38F  85 C0                     TEST EAX,EAX
0070F391  74 7E                     JZ 0x0070f411
0070F393  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F396  50                        PUSH EAX
0070F397  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F39A  E8 01 5C FA FF            CALL 0x006b4fa0
0070F39F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F3A2  33 D2                     XOR EDX,EDX
0070F3A4  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F3A8  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F3AC  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F3AF  83 C2 1F                  ADD EDX,0x1f
0070F3B2  C1 EA 03                  SHR EDX,0x3
0070F3B5  2B CF                     SUB ECX,EDI
0070F3B7  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F3BD  49                        DEC ECX
0070F3BE  0F AF D1                  IMUL EDX,ECX
0070F3C1  8B CB                     MOV ECX,EBX
0070F3C3  03 C8                     ADD ECX,EAX
0070F3C5  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0070F3C8  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070F3CE  3A 02                     CMP AL,byte ptr [EDX]
0070F3D0  75 3F                     JNZ 0x0070f411
LAB_0070f3d2:
0070F3D2  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F3D5  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070F3DC  50                        PUSH EAX
0070F3DD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F3E0  E8 BB 5B FA FF            CALL 0x006b4fa0
0070F3E5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F3E8  33 D2                     XOR EDX,EDX
0070F3EA  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F3EE  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F3F2  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F3F5  83 C2 1F                  ADD EDX,0x1f
0070F3F8  C1 EA 03                  SHR EDX,0x3
0070F3FB  2B CF                     SUB ECX,EDI
0070F3FD  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F403  49                        DEC ECX
LAB_0070f404:
0070F404  0F AF D1                  IMUL EDX,ECX
0070F407  8B CB                     MOV ECX,EBX
0070F409  03 C8                     ADD ECX,EAX
0070F40B  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F40E  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
LAB_0070f411:
0070F411  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070F417  47                        INC EDI
0070F418  3B F8                     CMP EDI,EAX
0070F41A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F41D  0F 8C 1C FE FF FF         JL 0x0070f23f
LAB_0070f423:
0070F423  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0070F426  43                        INC EBX
0070F427  3B D9                     CMP EBX,ECX
0070F429  0F 8C F9 FD FF FF         JL 0x0070f228
LAB_0070f42f:
0070F42F  40                        INC EAX
0070F430  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070F433  8B D0                     MOV EDX,EAX
0070F435  E9 88 FB FF FF            JMP 0x0070efc2
LAB_0070f43a:
0070F43A  85 C9                     TEST ECX,ECX
LAB_0070f43c:
0070F43C  0F 84 FA 02 00 00         JZ 0x0070f73c
0070F442  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070F448  33 FF                     XOR EDI,EDI
0070F44A  85 C0                     TEST EAX,EAX
0070F44C  0F 8E EA 02 00 00         JLE 0x0070f73c
LAB_0070f452:
0070F452  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070F458  33 DB                     XOR EBX,EBX
0070F45A  3B C3                     CMP EAX,EBX
0070F45C  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0070F463  0F 8E 21 02 00 00         JLE 0x0070f68a
0070F469  39 5D E8                  CMP dword ptr [EBP + -0x18],EBX
0070F46C  0F 8E BB 02 00 00         JLE 0x0070f72d
LAB_0070f472:
0070F472  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F475  85 C0                     TEST EAX,EAX
0070F477  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F47A  0F 84 08 01 00 00         JZ 0x0070f588
0070F480  50                        PUSH EAX
0070F481  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F484  E8 17 5B FA FF            CALL 0x006b4fa0
0070F489  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F48C  33 D2                     XOR EDX,EDX
0070F48E  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F492  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F496  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F499  83 C2 1F                  ADD EDX,0x1f
0070F49C  C1 EA 03                  SHR EDX,0x3
0070F49F  2B CF                     SUB ECX,EDI
0070F4A1  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F4A7  49                        DEC ECX
0070F4A8  0F AF D1                  IMUL EDX,ECX
0070F4AB  8B CB                     MOV ECX,EBX
0070F4AD  03 C8                     ADD ECX,EAX
0070F4AF  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
0070F4B3  0F 85 C0 01 00 00         JNZ 0x0070f679
0070F4B9  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070F4BF  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0070F4C6  99                        CDQ
0070F4C7  33 C2                     XOR EAX,EDX
0070F4C9  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0070F4D0  2B C2                     SUB EAX,EDX
0070F4D2  83 F8 01                  CMP EAX,0x1
0070F4D5  0F 8C 9E 01 00 00         JL 0x0070f679
0070F4DB  8D 53 FF                  LEA EDX,[EBX + -0x1]
0070F4DE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0070f4e1:
0070F4E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070F4E4  85 C0                     TEST EAX,EAX
0070F4E6  7C 7A                     JL 0x0070f562
0070F4E8  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F4EB  50                        PUSH EAX
0070F4EC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F4EF  E8 AC 5A FA FF            CALL 0x006b4fa0
0070F4F4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F4F7  33 D2                     XOR EDX,EDX
0070F4F9  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F4FD  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F501  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F504  83 C2 1F                  ADD EDX,0x1f
0070F507  C1 EA 03                  SHR EDX,0x3
0070F50A  2B CF                     SUB ECX,EDI
0070F50C  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F512  49                        DEC ECX
0070F513  0F AF D1                  IMUL EDX,ECX
0070F516  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070F519  2B D1                     SUB EDX,ECX
0070F51B  8B CB                     MOV ECX,EBX
0070F51D  03 C8                     ADD ECX,EAX
0070F51F  80 3C 0A 00               CMP byte ptr [EDX + ECX*0x1],0x0
0070F523  75 3D                     JNZ 0x0070f562
0070F525  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F528  50                        PUSH EAX
0070F529  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F52C  E8 6F 5A FA FF            CALL 0x006b4fa0
0070F531  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F534  33 D2                     XOR EDX,EDX
0070F536  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F53A  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F53E  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F541  83 C2 1F                  ADD EDX,0x1f
0070F544  C1 EA 03                  SHR EDX,0x3
0070F547  2B CF                     SUB ECX,EDI
0070F549  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F54F  49                        DEC ECX
0070F550  0F AF D1                  IMUL EDX,ECX
0070F553  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070F556  2B D1                     SUB EDX,ECX
0070F558  8B CB                     MOV ECX,EBX
0070F55A  03 C8                     ADD ECX,EAX
0070F55C  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F55F  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
LAB_0070f562:
0070F562  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070F565  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070F568  41                        INC ECX
0070F569  48                        DEC EAX
0070F56A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F56D  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070F573  99                        CDQ
0070F574  33 C2                     XOR EAX,EDX
0070F576  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0070F579  2B C2                     SUB EAX,EDX
0070F57B  3B C8                     CMP ECX,EAX
0070F57D  0F 8E 5E FF FF FF         JLE 0x0070f4e1
0070F583  E9 F1 00 00 00            JMP 0x0070f679
LAB_0070f588:
0070F588  50                        PUSH EAX
0070F589  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F58C  E8 0F 5A FA FF            CALL 0x006b4fa0
0070F591  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F594  33 D2                     XOR EDX,EDX
0070F596  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F59A  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F59E  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F5A1  83 C2 1F                  ADD EDX,0x1f
0070F5A4  C1 EA 03                  SHR EDX,0x3
0070F5A7  2B CF                     SUB ECX,EDI
0070F5A9  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F5AF  49                        DEC ECX
0070F5B0  0F AF D1                  IMUL EDX,ECX
0070F5B3  8B CB                     MOV ECX,EBX
0070F5B5  03 C8                     ADD ECX,EAX
0070F5B7  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
0070F5BB  0F 84 B8 00 00 00         JZ 0x0070f679
0070F5C1  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070F5C7  33 C9                     XOR ECX,ECX
0070F5C9  99                        CDQ
0070F5CA  33 C2                     XOR EAX,EDX
0070F5CC  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0070F5D3  2B C2                     SUB EAX,EDX
0070F5D5  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0070F5D8  85 C0                     TEST EAX,EAX
0070F5DA  0F 8E 99 00 00 00         JLE 0x0070f679
LAB_0070f5e0:
0070F5E0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070F5E3  03 CB                     ADD ECX,EBX
0070F5E5  3B C8                     CMP ECX,EAX
0070F5E7  7D 76                     JGE 0x0070f65f
0070F5E9  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F5EC  50                        PUSH EAX
0070F5ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F5F0  E8 AB 59 FA FF            CALL 0x006b4fa0
0070F5F5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F5F8  33 D2                     XOR EDX,EDX
0070F5FA  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F5FE  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F602  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F605  83 C2 1F                  ADD EDX,0x1f
0070F608  C1 EA 03                  SHR EDX,0x3
0070F60B  2B CF                     SUB ECX,EDI
0070F60D  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F613  49                        DEC ECX
0070F614  0F AF D1                  IMUL EDX,ECX
0070F617  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070F61A  03 C8                     ADD ECX,EAX
0070F61C  03 D1                     ADD EDX,ECX
0070F61E  80 3C 1A 00               CMP byte ptr [EDX + EBX*0x1],0x0
0070F622  75 3B                     JNZ 0x0070f65f
0070F624  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F627  50                        PUSH EAX
0070F628  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F62B  E8 70 59 FA FF            CALL 0x006b4fa0
0070F630  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F633  33 D2                     XOR EDX,EDX
0070F635  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F639  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F63D  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F640  83 C2 1F                  ADD EDX,0x1f
0070F643  C1 EA 03                  SHR EDX,0x3
0070F646  2B CF                     SUB ECX,EDI
0070F648  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F64E  49                        DEC ECX
0070F64F  0F AF D1                  IMUL EDX,ECX
0070F652  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070F655  03 C8                     ADD ECX,EAX
0070F657  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F65A  03 D1                     ADD EDX,ECX
0070F65C  88 04 1A                  MOV byte ptr [EDX + EBX*0x1],AL
LAB_0070f65f:
0070F65F  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070F665  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070F668  99                        CDQ
0070F669  33 C2                     XOR EAX,EDX
0070F66B  41                        INC ECX
0070F66C  2B C2                     SUB EAX,EDX
0070F66E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0070F671  3B C8                     CMP ECX,EAX
0070F673  0F 8C 67 FF FF FF         JL 0x0070f5e0
LAB_0070f679:
0070F679  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070F67C  43                        INC EBX
0070F67D  3B D8                     CMP EBX,EAX
0070F67F  0F 8C ED FD FF FF         JL 0x0070f472
0070F685  E9 A3 00 00 00            JMP 0x0070f72d
LAB_0070f68a:
0070F68A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070F68D  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0070F690  3B C3                     CMP EAX,EBX
0070F692  0F 8E 95 00 00 00         JLE 0x0070f72d
LAB_0070f698:
0070F698  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070F69B  85 C0                     TEST EAX,EAX
0070F69D  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F6A0  0F 84 E9 01 00 00         JZ 0x0070f88f
0070F6A6  50                        PUSH EAX
0070F6A7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F6AA  E8 F1 58 FA FF            CALL 0x006b4fa0
0070F6AF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F6B2  33 D2                     XOR EDX,EDX
0070F6B4  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F6B8  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F6BC  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F6BF  83 C2 1F                  ADD EDX,0x1f
0070F6C2  C1 EA 03                  SHR EDX,0x3
0070F6C5  2B CF                     SUB ECX,EDI
0070F6C7  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F6CD  49                        DEC ECX
0070F6CE  0F AF D1                  IMUL EDX,ECX
0070F6D1  8B CB                     MOV ECX,EBX
0070F6D3  03 C8                     ADD ECX,EAX
0070F6D5  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
0070F6D9  75 46                     JNZ 0x0070f721
0070F6DB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F6DE  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0070F6E5  50                        PUSH EAX
0070F6E6  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0070F6ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F6F0  E8 AB 58 FA FF            CALL 0x006b4fa0
0070F6F5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F6F8  33 D2                     XOR EDX,EDX
0070F6FA  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F6FE  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F702  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F705  83 C2 1F                  ADD EDX,0x1f
0070F708  C1 EA 03                  SHR EDX,0x3
0070F70B  2B CF                     SUB ECX,EDI
0070F70D  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F713  49                        DEC ECX
0070F714  0F AF D1                  IMUL EDX,ECX
0070F717  8B CB                     MOV ECX,EBX
0070F719  03 C8                     ADD ECX,EAX
0070F71B  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F71E  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
LAB_0070f721:
0070F721  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070F724  43                        INC EBX
0070F725  3B D8                     CMP EBX,EAX
0070F727  0F 8C 6B FF FF FF         JL 0x0070f698
LAB_0070f72d:
0070F72D  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070F733  47                        INC EDI
0070F734  3B F8                     CMP EDI,EAX
0070F736  0F 8C 16 FD FF FF         JL 0x0070f452
LAB_0070f73c:
0070F73C  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070F742  85 C0                     TEST EAX,EAX
0070F744  0F 84 05 F8 FF FF         JZ 0x0070ef4f
0070F74A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070F74D  33 FF                     XOR EDI,EDI
0070F74F  85 C0                     TEST EAX,EAX
0070F751  0F 8E F8 F7 FF FF         JLE 0x0070ef4f
LAB_0070f757:
0070F757  8B 8E 5D 01 00 00         MOV ECX,dword ptr [ESI + 0x15d]
0070F75D  33 C0                     XOR EAX,EAX
0070F75F  3B C8                     CMP ECX,EAX
0070F761  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0070F768  0F 8E AC 03 00 00         JLE 0x0070fb1a
0070F76E  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070F774  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070F777  3B C8                     CMP ECX,EAX
0070F779  0F 8E 47 04 00 00         JLE 0x0070fbc6
LAB_0070f77f:
0070F77F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070F782  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0070F785  85 C0                     TEST EAX,EAX
0070F787  53                        PUSH EBX
0070F788  0F 84 81 02 00 00         JZ 0x0070fa0f
0070F78E  E8 0D 58 FA FF            CALL 0x006b4fa0
0070F793  33 C9                     XOR ECX,ECX
0070F795  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0070F798  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070F79C  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
0070F7A0  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070F7A3  83 C1 1F                  ADD ECX,0x1f
0070F7A6  C1 E9 03                  SHR ECX,0x3
0070F7A9  2B D3                     SUB EDX,EBX
0070F7AB  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070F7B1  4A                        DEC EDX
0070F7B2  0F AF CA                  IMUL ECX,EDX
0070F7B5  8B D7                     MOV EDX,EDI
0070F7B7  03 D0                     ADD EDX,EAX
0070F7B9  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070F7BD  0F 85 3D 03 00 00         JNZ 0x0070fb00
0070F7C3  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070F7C9  B9 01 00 00 00            MOV ECX,0x1
0070F7CE  99                        CDQ
0070F7CF  33 C2                     XOR EAX,EDX
0070F7D1  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070F7D8  2B C2                     SUB EAX,EDX
0070F7DA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070F7DD  3B C1                     CMP EAX,ECX
0070F7DF  0F 8C 1B 03 00 00         JL 0x0070fb00
0070F7E5  8B C3                     MOV EAX,EBX
0070F7E7  48                        DEC EAX
0070F7E8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0070f7eb:
0070F7EB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070F7EE  85 C0                     TEST EAX,EAX
0070F7F0  7C 7A                     JL 0x0070f86c
0070F7F2  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0070F7F5  53                        PUSH EBX
0070F7F6  E8 A5 57 FA FF            CALL 0x006b4fa0
0070F7FB  33 C9                     XOR ECX,ECX
0070F7FD  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070F801  8B D1                     MOV EDX,ECX
0070F803  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0070F806  0F AF 53 04               IMUL EDX,dword ptr [EBX + 0x4]
0070F80A  8B 5B 08                  MOV EBX,dword ptr [EBX + 0x8]
0070F80D  83 C2 1F                  ADD EDX,0x1f
0070F810  2B D9                     SUB EBX,ECX
0070F812  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F815  C1 EA 03                  SHR EDX,0x3
0070F818  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F81E  8D 5C 0B FF               LEA EBX,[EBX + ECX*0x1 + -0x1]
0070F822  0F AF D3                  IMUL EDX,EBX
0070F825  8B DF                     MOV EBX,EDI
0070F827  03 D8                     ADD EBX,EAX
0070F829  80 3C 1A 00               CMP byte ptr [EDX + EBX*0x1],0x0
0070F82D  75 3D                     JNZ 0x0070f86c
0070F82F  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0070F832  53                        PUSH EBX
0070F833  E8 68 57 FA FF            CALL 0x006b4fa0
0070F838  33 C9                     XOR ECX,ECX
0070F83A  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070F83E  8B D1                     MOV EDX,ECX
0070F840  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0070F843  0F AF 53 04               IMUL EDX,dword ptr [EBX + 0x4]
0070F847  8B 5B 08                  MOV EBX,dword ptr [EBX + 0x8]
0070F84A  83 C2 1F                  ADD EDX,0x1f
0070F84D  2B D9                     SUB EBX,ECX
0070F84F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F852  C1 EA 03                  SHR EDX,0x3
0070F855  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F85B  8D 5C 0B FF               LEA EBX,[EBX + ECX*0x1 + -0x1]
0070F85F  0F AF D3                  IMUL EDX,EBX
0070F862  8B DF                     MOV EBX,EDI
0070F864  03 D8                     ADD EBX,EAX
0070F866  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F869  88 04 1A                  MOV byte ptr [EDX + EBX*0x1],AL
LAB_0070f86c:
0070F86C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070F86F  41                        INC ECX
0070F870  48                        DEC EAX
0070F871  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070F874  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F877  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070F87D  99                        CDQ
0070F87E  33 C2                     XOR EAX,EDX
0070F880  2B C2                     SUB EAX,EDX
0070F882  3B C8                     CMP ECX,EAX
0070F884  0F 8E 61 FF FF FF         JLE 0x0070f7eb
0070F88A  E9 71 02 00 00            JMP 0x0070fb00
LAB_0070f88f:
0070F88F  50                        PUSH EAX
0070F890  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F893  E8 08 57 FA FF            CALL 0x006b4fa0
0070F898  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F89B  33 D2                     XOR EDX,EDX
0070F89D  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F8A1  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F8A5  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F8A8  83 C2 1F                  ADD EDX,0x1f
0070F8AB  C1 EA 03                  SHR EDX,0x3
0070F8AE  2B CF                     SUB ECX,EDI
0070F8B0  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F8B6  49                        DEC ECX
0070F8B7  0F AF D1                  IMUL EDX,ECX
0070F8BA  8B CB                     MOV ECX,EBX
0070F8BC  03 C8                     ADD ECX,EAX
0070F8BE  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0070F8C1  3C FF                     CMP AL,0xff
0070F8C3  88 45 EF                  MOV byte ptr [EBP + -0x11],AL
0070F8C6  75 62                     JNZ 0x0070f92a
0070F8C8  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0070F8CB  4A                        DEC EDX
0070F8CC  3B DA                     CMP EBX,EDX
0070F8CE  74 5A                     JZ 0x0070f92a
0070F8D0  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070F8D6  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070F8D9  99                        CDQ
0070F8DA  33 C2                     XOR EAX,EDX
0070F8DC  2B C2                     SUB EAX,EDX
0070F8DE  3B C8                     CMP ECX,EAX
0070F8E0  0F 8D 3B FE FF FF         JGE 0x0070f721
0070F8E6  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F8E9  50                        PUSH EAX
0070F8EA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070F8ED  E8 AE 56 FA FF            CALL 0x006b4fa0
0070F8F2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070F8F5  33 D2                     XOR EDX,EDX
0070F8F7  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F8FB  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F8FF  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F902  83 C2 1F                  ADD EDX,0x1f
0070F905  C1 EA 03                  SHR EDX,0x3
0070F908  2B CF                     SUB ECX,EDI
0070F90A  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F910  49                        DEC ECX
0070F911  0F AF D1                  IMUL EDX,ECX
0070F914  8B CB                     MOV ECX,EBX
0070F916  03 C8                     ADD ECX,EAX
0070F918  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F91B  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
0070F91E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0070F921  40                        INC EAX
0070F922  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0070F925  E9 F7 FD FF FF            JMP 0x0070f721
LAB_0070f92a:
0070F92A  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0070F92D  B9 01 00 00 00            MOV ECX,0x1
0070F932  4A                        DEC EDX
0070F933  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0070F936  3B DA                     CMP EBX,EDX
0070F938  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0070F93B  75 06                     JNZ 0x0070f943
0070F93D  3C FF                     CMP AL,0xff
0070F93F  75 02                     JNZ 0x0070f943
0070F941  33 C9                     XOR ECX,ECX
LAB_0070f943:
0070F943  8B C3                     MOV EAX,EBX
0070F945  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070F948  2B C1                     SUB EAX,ECX
0070F94A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0070f94d:
0070F94D  3B DA                     CMP EBX,EDX
0070F94F  75 0D                     JNZ 0x0070f95e
0070F951  80 7D EF FF               CMP byte ptr [EBP + -0x11],0xff
0070F955  75 07                     JNZ 0x0070f95e
0070F957  B9 01 00 00 00            MOV ECX,0x1
0070F95C  EB 02                     JMP 0x0070f960
LAB_0070f95e:
0070F95E  33 C9                     XOR ECX,ECX
LAB_0070f960:
0070F960  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070F966  99                        CDQ
0070F967  33 C2                     XOR EAX,EDX
0070F969  2B C2                     SUB EAX,EDX
0070F96B  2B C1                     SUB EAX,ECX
0070F96D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070F970  3B C8                     CMP ECX,EAX
0070F972  0F 8F A9 FD FF FF         JG 0x0070f721
0070F978  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070F97B  85 C0                     TEST EAX,EAX
0070F97D  7C 7A                     JL 0x0070f9f9
0070F97F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0070F982  50                        PUSH EAX
0070F983  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F986  E8 15 56 FA FF            CALL 0x006b4fa0
0070F98B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F98E  33 D2                     XOR EDX,EDX
0070F990  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F994  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F998  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F99B  83 C2 1F                  ADD EDX,0x1f
0070F99E  C1 EA 03                  SHR EDX,0x3
0070F9A1  2B CF                     SUB ECX,EDI
0070F9A3  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F9A9  49                        DEC ECX
0070F9AA  0F AF D1                  IMUL EDX,ECX
0070F9AD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070F9B0  2B D1                     SUB EDX,ECX
0070F9B2  8B CB                     MOV ECX,EBX
0070F9B4  03 C8                     ADD ECX,EAX
0070F9B6  80 3C 0A FF               CMP byte ptr [EDX + ECX*0x1],0xff
0070F9BA  75 3D                     JNZ 0x0070f9f9
0070F9BC  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070F9BF  50                        PUSH EAX
0070F9C0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070F9C3  E8 D8 55 FA FF            CALL 0x006b4fa0
0070F9C8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070F9CB  33 D2                     XOR EDX,EDX
0070F9CD  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070F9D1  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070F9D5  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070F9D8  83 C2 1F                  ADD EDX,0x1f
0070F9DB  C1 EA 03                  SHR EDX,0x3
0070F9DE  2B CF                     SUB ECX,EDI
0070F9E0  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070F9E6  49                        DEC ECX
0070F9E7  0F AF D1                  IMUL EDX,ECX
0070F9EA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070F9ED  2B D1                     SUB EDX,ECX
0070F9EF  8B CB                     MOV ECX,EBX
0070F9F1  03 C8                     ADD ECX,EAX
0070F9F3  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070F9F6  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
LAB_0070f9f9:
0070F9F9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070F9FC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070F9FF  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0070FA02  41                        INC ECX
0070FA03  48                        DEC EAX
0070FA04  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070FA07  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070FA0A  E9 3E FF FF FF            JMP 0x0070f94d
LAB_0070fa0f:
0070FA0F  E8 8C 55 FA FF            CALL 0x006b4fa0
0070FA14  33 C9                     XOR ECX,ECX
0070FA16  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0070FA19  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070FA1D  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
0070FA21  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070FA24  83 C1 1F                  ADD ECX,0x1f
0070FA27  C1 E9 03                  SHR ECX,0x3
0070FA2A  2B D3                     SUB EDX,EBX
0070FA2C  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070FA32  4A                        DEC EDX
0070FA33  0F AF CA                  IMUL ECX,EDX
0070FA36  8B D7                     MOV EDX,EDI
0070FA38  03 D0                     ADD EDX,EAX
0070FA3A  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070FA3E  0F 84 BC 00 00 00         JZ 0x0070fb00
0070FA44  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070FA4A  33 C9                     XOR ECX,ECX
0070FA4C  99                        CDQ
0070FA4D  33 C2                     XOR EAX,EDX
0070FA4F  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0070FA56  2B C2                     SUB EAX,EDX
0070FA58  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0070FA5B  85 C0                     TEST EAX,EAX
0070FA5D  0F 8E 9D 00 00 00         JLE 0x0070fb00
LAB_0070fa63:
0070FA63  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070FA66  03 C8                     ADD ECX,EAX
0070FA68  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0070FA6E  3B C8                     CMP ECX,EAX
0070FA70  7D 74                     JGE 0x0070fae6
0070FA72  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0070FA75  53                        PUSH EBX
0070FA76  E8 25 55 FA FF            CALL 0x006b4fa0
0070FA7B  33 C9                     XOR ECX,ECX
0070FA7D  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0070FA80  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070FA84  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
0070FA88  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0070FA8B  83 C1 1F                  ADD ECX,0x1f
0070FA8E  2B D3                     SUB EDX,EBX
0070FA90  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070FA93  C1 E9 03                  SHR ECX,0x3
0070FA96  2B D3                     SUB EDX,EBX
0070FA98  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070FA9E  4A                        DEC EDX
0070FA9F  0F AF CA                  IMUL ECX,EDX
0070FAA2  8B D7                     MOV EDX,EDI
0070FAA4  03 D0                     ADD EDX,EAX
0070FAA6  80 3C 11 00               CMP byte ptr [ECX + EDX*0x1],0x0
0070FAAA  75 3A                     JNZ 0x0070fae6
0070FAAC  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0070FAAF  53                        PUSH EBX
0070FAB0  E8 EB 54 FA FF            CALL 0x006b4fa0
0070FAB5  33 C9                     XOR ECX,ECX
0070FAB7  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0070FABA  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070FABE  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
0070FAC2  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0070FAC5  83 C1 1F                  ADD ECX,0x1f
0070FAC8  2B D3                     SUB EDX,EBX
0070FACA  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070FACD  C1 E9 03                  SHR ECX,0x3
0070FAD0  2B D3                     SUB EDX,EBX
0070FAD2  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070FAD8  4A                        DEC EDX
0070FAD9  0F AF CA                  IMUL ECX,EDX
0070FADC  8B D7                     MOV EDX,EDI
0070FADE  03 D0                     ADD EDX,EAX
0070FAE0  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070FAE3  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
LAB_0070fae6:
0070FAE6  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070FAEC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070FAEF  99                        CDQ
0070FAF0  33 C2                     XOR EAX,EDX
0070FAF2  41                        INC ECX
0070FAF3  2B C2                     SUB EAX,EDX
0070FAF5  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0070FAF8  3B C8                     CMP ECX,EAX
0070FAFA  0F 8C 63 FF FF FF         JL 0x0070fa63
LAB_0070fb00:
0070FB00  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070FB03  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FB09  40                        INC EAX
0070FB0A  3B C1                     CMP EAX,ECX
0070FB0C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070FB0F  0F 8C 6A FC FF FF         JL 0x0070f77f
0070FB15  E9 AC 00 00 00            JMP 0x0070fbc6
LAB_0070fb1a:
0070FB1A  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FB20  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0070FB23  3B C8                     CMP ECX,EAX
0070FB25  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070FB28  0F 8E 98 00 00 00         JLE 0x0070fbc6
LAB_0070fb2e:
0070FB2E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070FB31  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0070FB34  85 C0                     TEST EAX,EAX
0070FB36  53                        PUSH EBX
0070FB37  0F 84 9A 00 00 00         JZ 0x0070fbd7
0070FB3D  E8 5E 54 FA FF            CALL 0x006b4fa0
0070FB42  33 C9                     XOR ECX,ECX
0070FB44  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0070FB47  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070FB4B  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
0070FB4F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070FB52  83 C1 1F                  ADD ECX,0x1f
0070FB55  C1 E9 03                  SHR ECX,0x3
0070FB58  2B D3                     SUB EDX,EBX
0070FB5A  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070FB60  4A                        DEC EDX
0070FB61  0F AF CA                  IMUL ECX,EDX
0070FB64  8B D7                     MOV EDX,EDI
0070FB66  03 D0                     ADD EDX,EAX
0070FB68  80 3C 11 FF               CMP byte ptr [ECX + EDX*0x1],0xff
0070FB6C  75 43                     JNZ 0x0070fbb1
0070FB6E  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0070FB71  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070FB78  53                        PUSH EBX
0070FB79  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
0070FB80  E8 1B 54 FA FF            CALL 0x006b4fa0
0070FB85  33 C9                     XOR ECX,ECX
0070FB87  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0070FB8A  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070FB8E  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
0070FB92  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070FB95  83 C1 1F                  ADD ECX,0x1f
0070FB98  C1 E9 03                  SHR ECX,0x3
0070FB9B  2B D3                     SUB EDX,EBX
0070FB9D  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070FBA3  4A                        DEC EDX
0070FBA4  0F AF CA                  IMUL ECX,EDX
0070FBA7  8B D7                     MOV EDX,EDI
0070FBA9  03 D0                     ADD EDX,EAX
0070FBAB  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070FBAE  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
LAB_0070fbb1:
0070FBB1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070FBB4  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FBBA  40                        INC EAX
0070FBBB  3B C1                     CMP EAX,ECX
0070FBBD  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070FBC0  0F 8C 68 FF FF FF         JL 0x0070fb2e
LAB_0070fbc6:
0070FBC6  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070FBC9  47                        INC EDI
0070FBCA  3B F8                     CMP EDI,EAX
0070FBCC  0F 8C 85 FB FF FF         JL 0x0070f757
0070FBD2  E9 78 F3 FF FF            JMP 0x0070ef4f
LAB_0070fbd7:
0070FBD7  E8 C4 53 FA FF            CALL 0x006b4fa0
0070FBDC  33 C9                     XOR ECX,ECX
0070FBDE  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0070FBE1  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070FBE5  0F AF 4B 04               IMUL ECX,dword ptr [EBX + 0x4]
0070FBE9  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070FBEC  83 C1 1F                  ADD ECX,0x1f
0070FBEF  C1 E9 03                  SHR ECX,0x3
0070FBF2  2B D3                     SUB EDX,EBX
0070FBF4  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0070FBFA  4A                        DEC EDX
0070FBFB  0F AF CA                  IMUL ECX,EDX
0070FBFE  8B D7                     MOV EDX,EDI
0070FC00  03 D0                     ADD EDX,EAX
0070FC02  8A 1C 11                  MOV BL,byte ptr [ECX + EDX*0x1]
0070FC05  80 FB FF                  CMP BL,0xff
0070FC08  88 5D EF                  MOV byte ptr [EBP + -0x11],BL
0070FC0B  75 61                     JNZ 0x0070fc6e
0070FC0D  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FC13  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070FC16  49                        DEC ECX
0070FC17  3B C1                     CMP EAX,ECX
0070FC19  74 56                     JZ 0x0070fc71
0070FC1B  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070FC21  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0070FC24  99                        CDQ
0070FC25  33 C2                     XOR EAX,EDX
0070FC27  2B C2                     SUB EAX,EDX
0070FC29  3B C8                     CMP ECX,EAX
0070FC2B  7D 84                     JGE 0x0070fbb1
0070FC2D  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0070FC30  53                        PUSH EBX
0070FC31  E8 6A 53 FA FF            CALL 0x006b4fa0
0070FC36  33 D2                     XOR EDX,EDX
0070FC38  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0070FC3B  66 8B 53 0E               MOV DX,word ptr [EBX + 0xe]
0070FC3F  0F AF 53 04               IMUL EDX,dword ptr [EBX + 0x4]
0070FC43  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0070FC46  83 C2 1F                  ADD EDX,0x1f
0070FC49  C1 EA 03                  SHR EDX,0x3
0070FC4C  2B CB                     SUB ECX,EBX
0070FC4E  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070FC54  49                        DEC ECX
0070FC55  0F AF D1                  IMUL EDX,ECX
0070FC58  8B CF                     MOV ECX,EDI
0070FC5A  03 C8                     ADD ECX,EAX
0070FC5C  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070FC5F  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
0070FC62  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0070FC65  40                        INC EAX
0070FC66  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0070FC69  E9 43 FF FF FF            JMP 0x0070fbb1
LAB_0070fc6e:
0070FC6E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_0070fc71:
0070FC71  8B 96 61 01 00 00         MOV EDX,dword ptr [ESI + 0x161]
0070FC77  B9 01 00 00 00            MOV ECX,0x1
0070FC7C  4A                        DEC EDX
0070FC7D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070FC80  3B C2                     CMP EAX,EDX
0070FC82  75 07                     JNZ 0x0070fc8b
0070FC84  80 FB FF                  CMP BL,0xff
0070FC87  75 02                     JNZ 0x0070fc8b
0070FC89  33 C9                     XOR ECX,ECX
LAB_0070fc8b:
0070FC8B  8B D0                     MOV EDX,EAX
0070FC8D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0070FC90  2B D1                     SUB EDX,ECX
0070FC92  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0070fc95:
0070FC95  8B 96 61 01 00 00         MOV EDX,dword ptr [ESI + 0x161]
0070FC9B  4A                        DEC EDX
0070FC9C  3B C2                     CMP EAX,EDX
0070FC9E  75 0C                     JNZ 0x0070fcac
0070FCA0  80 FB FF                  CMP BL,0xff
0070FCA3  75 07                     JNZ 0x0070fcac
0070FCA5  BB 01 00 00 00            MOV EBX,0x1
0070FCAA  EB 02                     JMP 0x0070fcae
LAB_0070fcac:
0070FCAC  33 DB                     XOR EBX,EBX
LAB_0070fcae:
0070FCAE  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070FCB4  99                        CDQ
0070FCB5  33 C2                     XOR EAX,EDX
0070FCB7  2B C2                     SUB EAX,EDX
0070FCB9  2B C3                     SUB EAX,EBX
0070FCBB  3B C8                     CMP ECX,EAX
0070FCBD  0F 8F EE FE FF FF         JG 0x0070fbb1
0070FCC3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070FCC6  85 C0                     TEST EAX,EAX
0070FCC8  7C 7A                     JL 0x0070fd44
0070FCCA  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0070FCCD  53                        PUSH EBX
0070FCCE  E8 CD 52 FA FF            CALL 0x006b4fa0
0070FCD3  33 C9                     XOR ECX,ECX
0070FCD5  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070FCD9  8B D1                     MOV EDX,ECX
0070FCDB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0070FCDE  0F AF 53 04               IMUL EDX,dword ptr [EBX + 0x4]
0070FCE2  8B 5B 08                  MOV EBX,dword ptr [EBX + 0x8]
0070FCE5  83 C2 1F                  ADD EDX,0x1f
0070FCE8  2B D9                     SUB EBX,ECX
0070FCEA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070FCED  C1 EA 03                  SHR EDX,0x3
0070FCF0  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070FCF6  8D 5C 0B FF               LEA EBX,[EBX + ECX*0x1 + -0x1]
0070FCFA  0F AF D3                  IMUL EDX,EBX
0070FCFD  8B DF                     MOV EBX,EDI
0070FCFF  03 D8                     ADD EBX,EAX
0070FD01  80 3C 1A FF               CMP byte ptr [EDX + EBX*0x1],0xff
0070FD05  75 3D                     JNZ 0x0070fd44
0070FD07  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0070FD0A  53                        PUSH EBX
0070FD0B  E8 90 52 FA FF            CALL 0x006b4fa0
0070FD10  33 C9                     XOR ECX,ECX
0070FD12  66 8B 4B 0E               MOV CX,word ptr [EBX + 0xe]
0070FD16  8B D1                     MOV EDX,ECX
0070FD18  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0070FD1B  0F AF 53 04               IMUL EDX,dword ptr [EBX + 0x4]
0070FD1F  8B 5B 08                  MOV EBX,dword ptr [EBX + 0x8]
0070FD22  83 C2 1F                  ADD EDX,0x1f
0070FD25  2B D9                     SUB EBX,ECX
0070FD27  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070FD2A  C1 EA 03                  SHR EDX,0x3
0070FD2D  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070FD33  8D 5C 0B FF               LEA EBX,[EBX + ECX*0x1 + -0x1]
0070FD37  0F AF D3                  IMUL EDX,EBX
0070FD3A  8B DF                     MOV EBX,EDI
0070FD3C  03 D8                     ADD EBX,EAX
0070FD3E  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
0070FD41  88 04 1A                  MOV byte ptr [EDX + EBX*0x1],AL
LAB_0070fd44:
0070FD44  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070FD47  8A 5D EF                  MOV BL,byte ptr [EBP + -0x11]
0070FD4A  41                        INC ECX
0070FD4B  48                        DEC EAX
0070FD4C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070FD4F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070FD52  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0070FD55  E9 3B FF FF FF            JMP 0x0070fc95
LAB_0070fd5a:
0070FD5A  3D 00 00 00 01            CMP EAX,0x1000000
0070FD5F  0F 85 EA F1 FF FF         JNZ 0x0070ef4f
LAB_0070fd65:
0070FD65  85 C9                     TEST ECX,ECX
0070FD67  7F 0E                     JG 0x0070fd77
0070FD69  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0070FD6F  85 C0                     TEST EAX,EAX
0070FD71  0F 8E D8 F1 FF FF         JLE 0x0070ef4f
LAB_0070fd77:
0070FD77  33 FF                     XOR EDI,EDI
0070FD79  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0070fd7c:
0070FD7C  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0070FD82  8B 8E 5D 01 00 00         MOV ECX,dword ptr [ESI + 0x15d]
0070FD88  3B C1                     CMP EAX,ECX
0070FD8A  7F 02                     JG 0x0070fd8e
0070FD8C  8B C1                     MOV EAX,ECX
LAB_0070fd8e:
0070FD8E  3B F8                     CMP EDI,EAX
0070FD90  0F 8D B9 F1 FF FF         JGE 0x0070ef4f
0070FD96  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FD9C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0070FD9F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070FDA2  51                        PUSH ECX
0070FDA3  52                        PUSH EDX
0070FDA4  6A 00                     PUSH 0x0
0070FDA6  6A 00                     PUSH 0x0
0070FDA8  6A 00                     PUSH 0x0
0070FDAA  50                        PUSH EAX
0070FDAB  6A 00                     PUSH 0x0
0070FDAD  6A 00                     PUSH 0x0
0070FDAF  6A 00                     PUSH 0x0
0070FDB1  6A 00                     PUSH 0x0
0070FDB3  E8 38 58 FA FF            CALL 0x006b55f0
0070FDB8  8B 8E 59 01 00 00         MOV ECX,dword ptr [ESI + 0x159]
0070FDBE  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0070FDC1  85 C9                     TEST ECX,ECX
0070FDC3  0F 8E 35 02 00 00         JLE 0x0070fffe
0070FDC9  3B F9                     CMP EDI,ECX
0070FDCB  0F 8D 2D 02 00 00         JGE 0x0070fffe
0070FDD1  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FDD7  33 DB                     XOR EBX,EBX
0070FDD9  85 C9                     TEST ECX,ECX
0070FDDB  0F 8E 1D 02 00 00         JLE 0x0070fffe
LAB_0070fde1:
0070FDE1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0070FDE4  33 FF                     XOR EDI,EDI
0070FDE6  85 C9                     TEST ECX,ECX
0070FDE8  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070FDEF  0F 8E FA 01 00 00         JLE 0x0070ffef
LAB_0070fdf5:
0070FDF5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070FDF8  85 C9                     TEST ECX,ECX
0070FDFA  0F 84 1E 01 00 00         JZ 0x0070ff1e
0070FE00  50                        PUSH EAX
0070FE01  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0070FE04  E8 97 51 FA FF            CALL 0x006b4fa0
0070FE09  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0070FE0C  33 D2                     XOR EDX,EDX
0070FE0E  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070FE12  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070FE16  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070FE19  83 C2 1F                  ADD EDX,0x1f
0070FE1C  C1 EA 03                  SHR EDX,0x3
0070FE1F  2B CB                     SUB ECX,EBX
0070FE21  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070FE27  49                        DEC ECX
0070FE28  0F AF D1                  IMUL EDX,ECX
0070FE2B  8B CF                     MOV ECX,EDI
0070FE2D  03 C8                     ADD ECX,EAX
0070FE2F  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0070FE32  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070FE38  3A 02                     CMP AL,byte ptr [EDX]
0070FE3A  0F 84 A0 01 00 00         JZ 0x0070ffe0
0070FE40  8D 47 FF                  LEA EAX,[EDI + -0x1]
0070FE43  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070FE4A  85 C0                     TEST EAX,EAX
0070FE4C  0F 8C 8E 01 00 00         JL 0x0070ffe0
0070FE52  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0070FE55  50                        PUSH EAX
0070FE56  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0070FE59  E8 42 51 FA FF            CALL 0x006b4fa0
0070FE5E  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0070FE61  33 D2                     XOR EDX,EDX
0070FE63  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070FE67  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070FE6B  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070FE6E  83 C2 1F                  ADD EDX,0x1f
0070FE71  C1 EA 03                  SHR EDX,0x3
0070FE74  2B CB                     SUB ECX,EBX
0070FE76  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070FE7C  49                        DEC ECX
0070FE7D  0F AF D1                  IMUL EDX,ECX
0070FE80  8B CF                     MOV ECX,EDI
0070FE82  03 C8                     ADD ECX,EAX
0070FE84  8A 4C 0A FF               MOV CL,byte ptr [EDX + ECX*0x1 + -0x1]
0070FE88  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070FE8E  8A 02                     MOV AL,byte ptr [EDX]
0070FE90  3A C8                     CMP CL,AL
0070FE92  0F 85 48 01 00 00         JNZ 0x0070ffe0
0070FE98  8B 8E 99 01 00 00         MOV ECX,dword ptr [ESI + 0x199]
0070FE9E  8B 96 71 01 00 00         MOV EDX,dword ptr [ESI + 0x171]
0070FEA4  51                        PUSH ECX
0070FEA5  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
0070FEAB  52                        PUSH EDX
0070FEAC  8B 96 2D 01 00 00         MOV EDX,dword ptr [ESI + 0x12d]
0070FEB2  51                        PUSH ECX
0070FEB3  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FEB9  52                        PUSH EDX
0070FEBA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0070FEBD  50                        PUSH EAX
0070FEBE  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0070FEC1  50                        PUSH EAX
0070FEC2  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0070FEC5  51                        PUSH ECX
0070FEC6  52                        PUSH EDX
0070FEC7  50                        PUSH EAX
0070FEC8  8D 47 FF                  LEA EAX,[EDI + -0x1]
0070FECB  53                        PUSH EBX
0070FECC  50                        PUSH EAX
0070FECD  E8 4E CC FF FF            CALL 0x0070cb20
0070FED2  83 C4 2C                  ADD ESP,0x2c
0070FED5  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0070FED8  85 C0                     TEST EAX,EAX
0070FEDA  0F 8C 00 01 00 00         JL 0x0070ffe0
0070FEE0  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070FEE3  50                        PUSH EAX
0070FEE4  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0070FEE7  E8 B4 50 FA FF            CALL 0x006b4fa0
0070FEEC  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0070FEEF  33 D2                     XOR EDX,EDX
0070FEF1  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070FEF5  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070FEF9  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070FEFC  83 C2 1F                  ADD EDX,0x1f
0070FEFF  C1 EA 03                  SHR EDX,0x3
0070FF02  2B CB                     SUB ECX,EBX
0070FF04  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070FF0A  49                        DEC ECX
0070FF0B  0F AF D1                  IMUL EDX,ECX
0070FF0E  8B CF                     MOV ECX,EDI
0070FF10  03 C8                     ADD ECX,EAX
0070FF12  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
0070FF15  88 44 0A FF               MOV byte ptr [EDX + ECX*0x1 + -0x1],AL
0070FF19  E9 C2 00 00 00            JMP 0x0070ffe0
LAB_0070ff1e:
0070FF1E  50                        PUSH EAX
0070FF1F  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0070FF22  E8 79 50 FA FF            CALL 0x006b4fa0
0070FF27  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0070FF2A  33 D2                     XOR EDX,EDX
0070FF2C  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070FF30  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070FF34  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070FF37  83 C2 1F                  ADD EDX,0x1f
0070FF3A  C1 EA 03                  SHR EDX,0x3
0070FF3D  2B CB                     SUB ECX,EBX
0070FF3F  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070FF45  49                        DEC ECX
0070FF46  0F AF D1                  IMUL EDX,ECX
0070FF49  8B CF                     MOV ECX,EDI
0070FF4B  03 C8                     ADD ECX,EAX
0070FF4D  8A 0C 0A                  MOV CL,byte ptr [EDX + ECX*0x1]
0070FF50  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0070FF56  8A 02                     MOV AL,byte ptr [EDX]
0070FF58  3A C8                     CMP CL,AL
0070FF5A  0F 85 80 00 00 00         JNZ 0x0070ffe0
0070FF60  8B 8E 99 01 00 00         MOV ECX,dword ptr [ESI + 0x199]
0070FF66  8B 96 71 01 00 00         MOV EDX,dword ptr [ESI + 0x171]
0070FF6C  51                        PUSH ECX
0070FF6D  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
0070FF73  52                        PUSH EDX
0070FF74  8B 96 2D 01 00 00         MOV EDX,dword ptr [ESI + 0x12d]
0070FF7A  51                        PUSH ECX
0070FF7B  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FF81  52                        PUSH EDX
0070FF82  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0070FF85  50                        PUSH EAX
0070FF86  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0070FF89  50                        PUSH EAX
0070FF8A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0070FF8D  51                        PUSH ECX
0070FF8E  52                        PUSH EDX
0070FF8F  50                        PUSH EAX
0070FF90  53                        PUSH EBX
0070FF91  57                        PUSH EDI
0070FF92  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070FF99  E8 82 CB FF FF            CALL 0x0070cb20
0070FF9E  83 C4 2C                  ADD ESP,0x2c
0070FFA1  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0070FFA4  85 C0                     TEST EAX,EAX
0070FFA6  7C 38                     JL 0x0070ffe0
0070FFA8  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0070FFAB  50                        PUSH EAX
0070FFAC  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0070FFAF  E8 EC 4F FA FF            CALL 0x006b4fa0
0070FFB4  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0070FFB7  33 D2                     XOR EDX,EDX
0070FFB9  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0070FFBD  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0070FFC1  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0070FFC4  83 C2 1F                  ADD EDX,0x1f
0070FFC7  C1 EA 03                  SHR EDX,0x3
0070FFCA  2B CB                     SUB ECX,EBX
0070FFCC  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0070FFD2  49                        DEC ECX
0070FFD3  0F AF D1                  IMUL EDX,ECX
0070FFD6  8B CF                     MOV ECX,EDI
0070FFD8  03 C8                     ADD ECX,EAX
0070FFDA  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
0070FFDD  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
LAB_0070ffe0:
0070FFE0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0070FFE3  47                        INC EDI
0070FFE4  3B F8                     CMP EDI,EAX
0070FFE6  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0070FFE9  0F 8C 06 FE FF FF         JL 0x0070fdf5
LAB_0070ffef:
0070FFEF  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
0070FFF5  43                        INC EBX
0070FFF6  3B D9                     CMP EBX,ECX
0070FFF8  0F 8C E3 FD FF FF         JL 0x0070fde1
LAB_0070fffe:
0070FFFE  8B 8E 5D 01 00 00         MOV ECX,dword ptr [ESI + 0x15d]
00710004  85 C9                     TEST ECX,ECX
00710006  0F 8E 2F 02 00 00         JLE 0x0071023b
0071000C  39 4D F8                  CMP dword ptr [EBP + -0x8],ECX
0071000F  0F 8D 26 02 00 00         JGE 0x0071023b
00710015  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00710018  33 DB                     XOR EBX,EBX
0071001A  85 C9                     TEST ECX,ECX
0071001C  0F 8E 19 02 00 00         JLE 0x0071023b
LAB_00710022:
00710022  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
00710028  33 FF                     XOR EDI,EDI
0071002A  85 C9                     TEST ECX,ECX
0071002C  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00710033  0F 8E F6 01 00 00         JLE 0x0071022f
LAB_00710039:
00710039  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071003C  85 C9                     TEST ECX,ECX
0071003E  0F 84 17 01 00 00         JZ 0x0071015b
00710044  50                        PUSH EAX
00710045  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00710048  E8 53 4F FA FF            CALL 0x006b4fa0
0071004D  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00710050  33 D2                     XOR EDX,EDX
00710052  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
00710056  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0071005A  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0071005D  83 C2 1F                  ADD EDX,0x1f
00710060  C1 EA 03                  SHR EDX,0x3
00710063  2B CF                     SUB ECX,EDI
00710065  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0071006B  49                        DEC ECX
0071006C  0F AF D1                  IMUL EDX,ECX
0071006F  8B CB                     MOV ECX,EBX
00710071  03 C8                     ADD ECX,EAX
00710073  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
00710076  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0071007C  3A 02                     CMP AL,byte ptr [EDX]
0071007E  0F 84 99 01 00 00         JZ 0x0071021d
00710084  8D 47 FF                  LEA EAX,[EDI + -0x1]
00710087  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071008E  85 C0                     TEST EAX,EAX
00710090  0F 8C 87 01 00 00         JL 0x0071021d
00710096  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00710099  50                        PUSH EAX
0071009A  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0071009D  E8 FE 4E FA FF            CALL 0x006b4fa0
007100A2  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
007100A5  33 D2                     XOR EDX,EDX
007100A7  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
007100AB  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
007100AF  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
007100B2  83 C2 1F                  ADD EDX,0x1f
007100B5  C1 EA 03                  SHR EDX,0x3
007100B8  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
007100BE  2B CF                     SUB ECX,EDI
007100C0  0F AF D1                  IMUL EDX,ECX
007100C3  8B CB                     MOV ECX,EBX
007100C5  03 C8                     ADD ECX,EAX
007100C7  8A 0C 0A                  MOV CL,byte ptr [EDX + ECX*0x1]
007100CA  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
007100D0  8A 02                     MOV AL,byte ptr [EDX]
007100D2  3A C8                     CMP CL,AL
007100D4  0F 85 43 01 00 00         JNZ 0x0071021d
007100DA  8B 8E 99 01 00 00         MOV ECX,dword ptr [ESI + 0x199]
007100E0  8B 96 71 01 00 00         MOV EDX,dword ptr [ESI + 0x171]
007100E6  51                        PUSH ECX
007100E7  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
007100ED  52                        PUSH EDX
007100EE  8B 96 2D 01 00 00         MOV EDX,dword ptr [ESI + 0x12d]
007100F4  51                        PUSH ECX
007100F5  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
007100FB  52                        PUSH EDX
007100FC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007100FF  50                        PUSH EAX
00710100  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00710103  50                        PUSH EAX
00710104  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00710107  51                        PUSH ECX
00710108  52                        PUSH EDX
00710109  50                        PUSH EAX
0071010A  8D 47 FF                  LEA EAX,[EDI + -0x1]
0071010D  50                        PUSH EAX
0071010E  53                        PUSH EBX
0071010F  E8 0C CA FF FF            CALL 0x0070cb20
00710114  83 C4 2C                  ADD ESP,0x2c
00710117  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0071011A  85 C0                     TEST EAX,EAX
0071011C  0F 8C FB 00 00 00         JL 0x0071021d
00710122  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00710125  50                        PUSH EAX
00710126  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00710129  E8 72 4E FA FF            CALL 0x006b4fa0
0071012E  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00710131  33 D2                     XOR EDX,EDX
00710133  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
00710137  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
0071013B  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0071013E  83 C2 1F                  ADD EDX,0x1f
00710141  C1 EA 03                  SHR EDX,0x3
00710144  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0071014A  2B CF                     SUB ECX,EDI
0071014C  0F AF D1                  IMUL EDX,ECX
0071014F  8B CB                     MOV ECX,EBX
00710151  03 C8                     ADD ECX,EAX
00710153  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
00710156  E9 BF 00 00 00            JMP 0x0071021a
LAB_0071015b:
0071015B  50                        PUSH EAX
0071015C  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0071015F  E8 3C 4E FA FF            CALL 0x006b4fa0
00710164  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00710167  33 D2                     XOR EDX,EDX
00710169  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
0071016D  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
00710171  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00710174  83 C2 1F                  ADD EDX,0x1f
00710177  C1 EA 03                  SHR EDX,0x3
0071017A  2B CF                     SUB ECX,EDI
0071017C  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
00710182  49                        DEC ECX
00710183  0F AF D1                  IMUL EDX,ECX
00710186  8B CB                     MOV ECX,EBX
00710188  03 C8                     ADD ECX,EAX
0071018A  8A 0C 0A                  MOV CL,byte ptr [EDX + ECX*0x1]
0071018D  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
00710193  8A 02                     MOV AL,byte ptr [EDX]
00710195  3A C8                     CMP CL,AL
00710197  0F 85 80 00 00 00         JNZ 0x0071021d
0071019D  8B 8E 99 01 00 00         MOV ECX,dword ptr [ESI + 0x199]
007101A3  8B 96 71 01 00 00         MOV EDX,dword ptr [ESI + 0x171]
007101A9  51                        PUSH ECX
007101AA  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
007101B0  52                        PUSH EDX
007101B1  8B 96 2D 01 00 00         MOV EDX,dword ptr [ESI + 0x12d]
007101B7  51                        PUSH ECX
007101B8  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
007101BE  52                        PUSH EDX
007101BF  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007101C2  50                        PUSH EAX
007101C3  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
007101C6  50                        PUSH EAX
007101C7  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
007101CA  51                        PUSH ECX
007101CB  52                        PUSH EDX
007101CC  50                        PUSH EAX
007101CD  57                        PUSH EDI
007101CE  53                        PUSH EBX
007101CF  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
007101D6  E8 45 C9 FF FF            CALL 0x0070cb20
007101DB  83 C4 2C                  ADD ESP,0x2c
007101DE  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
007101E1  85 C0                     TEST EAX,EAX
007101E3  7C 38                     JL 0x0071021d
007101E5  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
007101E8  50                        PUSH EAX
007101E9  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
007101EC  E8 AF 4D FA FF            CALL 0x006b4fa0
007101F1  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
007101F4  33 D2                     XOR EDX,EDX
007101F6  66 8B 51 0E               MOV DX,word ptr [ECX + 0xe]
007101FA  0F AF 51 04               IMUL EDX,dword ptr [ECX + 0x4]
007101FE  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
00710201  83 C2 1F                  ADD EDX,0x1f
00710204  C1 EA 03                  SHR EDX,0x3
00710207  2B CF                     SUB ECX,EDI
00710209  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0071020F  49                        DEC ECX
00710210  0F AF D1                  IMUL EDX,ECX
00710213  8B CB                     MOV ECX,EBX
00710215  03 C8                     ADD ECX,EAX
00710217  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
LAB_0071021a:
0071021A  88 04 0A                  MOV byte ptr [EDX + ECX*0x1],AL
LAB_0071021d:
0071021D  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
00710223  47                        INC EDI
00710224  3B F8                     CMP EDI,EAX
00710226  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00710229  0F 8C 0A FE FF FF         JL 0x00710039
LAB_0071022f:
0071022F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00710232  43                        INC EBX
00710233  3B D9                     CMP EBX,ECX
00710235  0F 8C E7 FD FF FF         JL 0x00710022
LAB_0071023b:
0071023B  85 C0                     TEST EAX,EAX
0071023D  74 09                     JZ 0x00710248
0071023F  8D 4D D4                  LEA ECX,[EBP + -0x2c]
00710242  51                        PUSH ECX
00710243  E8 18 AE F9 FF            CALL 0x006ab060
LAB_00710248:
00710248  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071024B  40                        INC EAX
0071024C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071024F  8B F8                     MOV EDI,EAX
00710251  E9 26 FB FF FF            JMP 0x0070fd7c
LAB_00710256:
00710256  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0071025C  33 DB                     XOR EBX,EBX
0071025E  8A 19                     MOV BL,byte ptr [ECX]
00710260  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_00710263:
00710263  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00710266  33 DB                     XOR EBX,EBX
00710268  85 C9                     TEST ECX,ECX
0071026A  7E 75                     JLE 0x007102e1
LAB_0071026c:
0071026C  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
00710272  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00710279  85 C0                     TEST EAX,EAX
0071027B  7E 56                     JLE 0x007102d3
LAB_0071027d:
0071027D  57                        PUSH EDI
0071027E  E8 1D 4D FA FF            CALL 0x006b4fa0
00710283  33 D2                     XOR EDX,EDX
00710285  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00710288  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
0071028C  2B 4D FC                  SUB ECX,dword ptr [EBP + -0x4]
0071028F  0F AF 57 04               IMUL EDX,dword ptr [EDI + 0x4]
00710293  83 C2 1F                  ADD EDX,0x1f
00710296  C1 EA 03                  SHR EDX,0x3
00710299  81 E2 FC FF FF 1F         AND EDX,0x1ffffffc
0071029F  49                        DEC ECX
007102A0  0F AF D1                  IMUL EDX,ECX
007102A3  8B CB                     MOV ECX,EBX
007102A5  03 C8                     ADD ECX,EAX
007102A7  33 C0                     XOR EAX,EAX
007102A9  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
007102AC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007102AF  3B C1                     CMP EAX,ECX
007102B1  75 13                     JNZ 0x007102c6
007102B3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007102B6  8B 8E 61 01 00 00         MOV ECX,dword ptr [ESI + 0x161]
007102BC  40                        INC EAX
007102BD  3B C1                     CMP EAX,ECX
007102BF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007102C2  7C B9                     JL 0x0071027d
007102C4  EB 0D                     JMP 0x007102d3
LAB_007102c6:
007102C6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007102C9  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007102CC  85 C0                     TEST EAX,EAX
007102CE  7D 03                     JGE 0x007102d3
007102D0  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
LAB_007102d3:
007102D3  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007102D6  43                        INC EBX
007102D7  3B D8                     CMP EBX,EAX
007102D9  7C 91                     JL 0x0071026c
007102DB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007102DE  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
LAB_007102e1:
007102E1  85 D2                     TEST EDX,EDX
007102E3  7C 10                     JL 0x007102f5
007102E5  2B C2                     SUB EAX,EDX
007102E7  40                        INC EAX
007102E8  8B C8                     MOV ECX,EAX
007102EA  8B 86 7D 01 00 00         MOV EAX,dword ptr [ESI + 0x17d]
007102F0  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
007102F3  EB 0B                     JMP 0x00710300
LAB_007102f5:
007102F5  8B 86 7D 01 00 00         MOV EAX,dword ptr [ESI + 0x17d]
007102FB  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007102FE  8B F8                     MOV EDI,EAX
LAB_00710300:
00710300  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00710303  85 D2                     TEST EDX,EDX
00710305  75 08                     JNZ 0x0071030f
00710307  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0071030A  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
0071030D  EB 1A                     JMP 0x00710329
LAB_0071030f:
0071030F  39 4D B8                  CMP dword ptr [EBP + -0x48],ECX
00710312  75 05                     JNZ 0x00710319
00710314  39 7D BC                  CMP dword ptr [EBP + -0x44],EDI
00710317  74 10                     JZ 0x00710329
LAB_00710319:
00710319  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0071031C  C7 45 A0 00 00 00 00      MOV dword ptr [EBP + -0x60],0x0
00710323  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00710326  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_00710329:
00710329  8B 96 61 01 00 00         MOV EDX,dword ptr [ESI + 0x161]
0071032F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00710332  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00710335  8B 7D 9C                  MOV EDI,dword ptr [EBP + -0x64]
00710338  52                        PUSH EDX
00710339  8B 96 81 01 00 00         MOV EDX,dword ptr [ESI + 0x181]
0071033F  50                        PUSH EAX
00710340  8B 86 7D 01 00 00         MOV EAX,dword ptr [ESI + 0x17d]
00710346  6A 00                     PUSH 0x0
00710348  6A 00                     PUSH 0x0
0071034A  6A 00                     PUSH 0x0
0071034C  51                        PUSH ECX
0071034D  8B 0C BE                  MOV ECX,dword ptr [ESI + EDI*0x4]
00710350  52                        PUSH EDX
00710351  50                        PUSH EAX
00710352  6A 00                     PUSH 0x0
00710354  51                        PUSH ECX
00710355  E8 96 52 FA FF            CALL 0x006b55f0
0071035A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0071035D  85 C0                     TEST EAX,EAX
0071035F  74 09                     JZ 0x0071036a
00710361  8D 55 E0                  LEA EDX,[EBP + -0x20]
00710364  52                        PUSH EDX
00710365  E8 F6 AC F9 FF            CALL 0x006ab060
LAB_0071036a:
0071036A  8B 86 9A 00 00 00         MOV EAX,dword ptr [ESI + 0x9a]
00710370  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
00710373  0F BF 08                  MOVSX ECX,word ptr [EAX]
00710376  3B F9                     CMP EDI,ECX
00710378  0F 8C F1 DF FF FF         JL 0x0070e36f
LAB_0071037e:
0071037E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00710381  85 C0                     TEST EAX,EAX
00710383  74 09                     JZ 0x0071038e
00710385  8D 55 DC                  LEA EDX,[EBP + -0x24]
00710388  52                        PUSH EDX
00710389  E8 D2 AC F9 FF            CALL 0x006ab060
LAB_0071038e:
0071038E  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
00710394  8B 86 79 01 00 00         MOV EAX,dword ptr [ESI + 0x179]
0071039A  33 D2                     XOR EDX,EDX
0071039C  66 8B 51 64               MOV DX,word ptr [ECX + 0x64]
007103A0  3B D0                     CMP EDX,EAX
007103A2  7C 22                     JL 0x007103c6
007103A4  8B 96 3D 01 00 00         MOV EDX,dword ptr [ESI + 0x13d]
007103AA  03 C2                     ADD EAX,EDX
007103AC  89 86 79 01 00 00         MOV dword ptr [ESI + 0x179],EAX
007103B2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
007103B5  8D 54 00 70               LEA EDX,[EAX + EAX*0x1 + 0x70]
007103B9  52                        PUSH EDX
007103BA  51                        PUSH ECX
007103BB  E8 90 CB F9 FF            CALL 0x006acf50
007103C0  89 86 9A 00 00 00         MOV dword ptr [ESI + 0x9a],EAX
LAB_007103c6:
007103C6  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
007103CC  33 C0                     XOR EAX,EAX
007103CE  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
007103D2  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
007103D6  83 C0 0B                  ADD EAX,0xb
007103D9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
007103DC  66 89 14 41               MOV word ptr [ECX + EAX*0x2],DX
007103E0  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
007103E6  66 8B 55 BC               MOV DX,word ptr [EBP + -0x44]
007103EA  33 C0                     XOR EAX,EAX
007103EC  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
007103F0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
007103F3  66 89 54 41 66            MOV word ptr [ECX + EAX*0x2 + 0x66],DX
007103F8  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
007103FE  66 8B 96 81 01 00 00      MOV DX,word ptr [ESI + 0x181]
00710405  33 C0                     XOR EAX,EAX
00710407  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
0071040B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0071040E  66 89 54 41 68            MOV word ptr [ECX + EAX*0x2 + 0x68],DX
00710413  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
00710419  66 8B 55 B8               MOV DX,word ptr [EBP + -0x48]
0071041D  33 C0                     XOR EAX,EAX
0071041F  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
00710423  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00710426  66 89 54 41 6A            MOV word ptr [ECX + EAX*0x2 + 0x6a],DX
0071042B  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
00710431  66 8B 96 61 01 00 00      MOV DX,word ptr [ESI + 0x161]
00710438  33 C0                     XOR EAX,EAX
0071043A  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
0071043E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00710441  66 89 54 41 6C            MOV word ptr [ECX + EAX*0x2 + 0x6c],DX
00710446  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
0071044C  33 C0                     XOR EAX,EAX
0071044E  8B 96 86 00 00 00         MOV EDX,dword ptr [ESI + 0x86]
00710454  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
00710458  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0071045B  0F BF 44 41 6A            MOVSX EAX,word ptr [ECX + EAX*0x2 + 0x6a]
00710460  3B C2                     CMP EAX,EDX
00710462  7E 06                     JLE 0x0071046a
00710464  89 86 86 00 00 00         MOV dword ptr [ESI + 0x86],EAX
LAB_0071046a:
0071046A  33 C0                     XOR EAX,EAX
0071046C  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
00710470  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00710473  0F BF 44 51 6C            MOVSX EAX,word ptr [ECX + EDX*0x2 + 0x6c]
00710478  3B 86 8A 00 00 00         CMP EAX,dword ptr [ESI + 0x8a]
0071047E  7E 06                     JLE 0x00710486
00710480  89 86 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EAX
LAB_00710486:
00710486  33 C0                     XOR EAX,EAX
00710488  8B 96 8E 00 00 00         MOV EDX,dword ptr [ESI + 0x8e]
0071048E  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
00710492  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00710495  0F BF 44 41 6A            MOVSX EAX,word ptr [ECX + EAX*0x2 + 0x6a]
0071049A  3B C2                     CMP EAX,EDX
0071049C  7D 06                     JGE 0x007104a4
0071049E  89 86 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EAX
LAB_007104a4:
007104A4  33 C0                     XOR EAX,EAX
007104A6  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
007104AA  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
007104AD  0F BF 44 51 6C            MOVSX EAX,word ptr [ECX + EDX*0x2 + 0x6c]
007104B2  3B 86 92 00 00 00         CMP EAX,dword ptr [ESI + 0x92]
007104B8  7D 06                     JGE 0x007104c0
007104BA  89 86 92 00 00 00         MOV dword ptr [ESI + 0x92],EAX
LAB_007104c0:
007104C0  33 C0                     XOR EAX,EAX
007104C2  66 8B 41 64               MOV AX,word ptr [ECX + 0x64]
007104C6  89 86 95 01 00 00         MOV dword ptr [ESI + 0x195],EAX
007104CC  66 FF 41 64               INC word ptr [ECX + 0x64]
007104D0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007104D3  8B 96 7D 01 00 00         MOV EDX,dword ptr [ESI + 0x17d]
007104D9  03 D1                     ADD EDX,ECX
007104DB  8B 8E AC 00 00 00         MOV ECX,dword ptr [ESI + 0xac]
007104E1  89 96 7D 01 00 00         MOV dword ptr [ESI + 0x17d],EDX
007104E7  8B 95 44 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff44]
007104ED  41                        INC ECX
007104EE  89 8E AC 00 00 00         MOV dword ptr [ESI + 0xac],ECX
007104F4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007104FA  5F                        POP EDI
007104FB  5E                        POP ESI
007104FC  5B                        POP EBX
007104FD  8B E5                     MOV ESP,EBP
007104FF  5D                        POP EBP
00710500  C3                        RET
LAB_00710501:
00710501  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
00710507  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071050C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0071050F  3B C3                     CMP EAX,EBX
00710511  74 09                     JZ 0x0071051c
00710513  8D 4D DC                  LEA ECX,[EBP + -0x24]
00710516  51                        PUSH ECX
00710517  E8 44 AB F9 FF            CALL 0x006ab060
LAB_0071051c:
0071051C  39 5D C0                  CMP dword ptr [EBP + -0x40],EBX
0071051F  74 09                     JZ 0x0071052a
00710521  8D 55 C0                  LEA EDX,[EBP + -0x40]
00710524  52                        PUSH EDX
00710525  E8 36 AB F9 FF            CALL 0x006ab060
LAB_0071052a:
0071052A  39 5D E0                  CMP dword ptr [EBP + -0x20],EBX
0071052D  74 09                     JZ 0x00710538
0071052F  8D 45 E0                  LEA EAX,[EBP + -0x20]
00710532  50                        PUSH EAX
00710533  E8 28 AB F9 FF            CALL 0x006ab060
LAB_00710538:
00710538  39 5D D4                  CMP dword ptr [EBP + -0x2c],EBX
0071053B  74 09                     JZ 0x00710546
0071053D  8D 4D D4                  LEA ECX,[EBP + -0x2c]
00710540  51                        PUSH ECX
00710541  E8 1A AB F9 FF            CALL 0x006ab060
LAB_00710546:
00710546  3B F3                     CMP ESI,EBX
00710548  7D 09                     JGE 0x00710553
0071054A  8B C6                     MOV EAX,ESI
0071054C  5F                        POP EDI
0071054D  5E                        POP ESI
0071054E  5B                        POP EBX
0071054F  8B E5                     MOV ESP,EBP
00710551  5D                        POP EBP
00710552  C3                        RET
LAB_00710553:
00710553  5F                        POP EDI
00710554  5E                        POP ESI
00710555  83 C8 FF                  OR EAX,0xffffffff
00710558  5B                        POP EBX
00710559  8B E5                     MOV ESP,EBP
0071055B  5D                        POP EBP
0071055C  C3                        RET
