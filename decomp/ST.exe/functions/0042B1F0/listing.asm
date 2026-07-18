FUN_0042b1f0:
0042B1F0  55                        PUSH EBP
0042B1F1  8B EC                     MOV EBP,ESP
0042B1F3  83 EC 6C                  SUB ESP,0x6c
0042B1F6  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
0042B1FA  0F BF 4D 18               MOVSX ECX,word ptr [EBP + 0x18]
0042B1FE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0042B201  53                        PUSH EBX
0042B202  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
0042B206  56                        PUSH ESI
0042B207  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0042B20B  0F BF 4D 1C               MOVSX ECX,word ptr [EBP + 0x1c]
0042B20F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0042B212  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042B215  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
0042B219  57                        PUSH EDI
0042B21A  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
0042B21E  0F BF 4D 20               MOVSX ECX,word ptr [EBP + 0x20]
0042B222  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0042B225  33 FF                     XOR EDI,EDI
0042B227  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
0042B22B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0042B22E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042B233  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0042B236  8D 55 98                  LEA EDX,[EBP + -0x68]
0042B239  8D 4D 94                  LEA ECX,[EBP + -0x6c]
0042B23C  57                        PUSH EDI
0042B23D  52                        PUSH EDX
0042B23E  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0042B241  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042B247  E8 A4 25 30 00            CALL 0x0072d7f0
0042B24C  8B F0                     MOV ESI,EAX
0042B24E  83 C4 08                  ADD ESP,0x8
0042B251  3B F7                     CMP ESI,EDI
0042B253  0F 85 48 02 00 00         JNZ 0x0042b4a1
0042B259  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0042B25C  7D 03                     JGE 0x0042b261
0042B25E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0042b261:
0042B261  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0042B268  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0042B26B  8D 42 FF                  LEA EAX,[EDX + -0x1]
0042B26E  3B C8                     CMP ECX,EAX
0042B270  7E 03                     JLE 0x0042b275
0042B272  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0042b275:
0042B275  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
0042B278  7D 03                     JGE 0x0042b27d
0042B27A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0042b27d:
0042B27D  0F BF 35 42 B2 7F 00      MOVSX ESI,word ptr [0x007fb242]
0042B284  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042B287  8D 46 FF                  LEA EAX,[ESI + -0x1]
0042B28A  3B C8                     CMP ECX,EAX
0042B28C  7E 03                     JLE 0x0042b291
0042B28E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0042b291:
0042B291  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0042B294  3B DF                     CMP EBX,EDI
0042B296  7D 05                     JGE 0x0042b29d
0042B298  33 DB                     XOR EBX,EBX
0042B29A  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
LAB_0042b29d:
0042B29D  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
0042B2A4  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0042B2A7  8D 41 FF                  LEA EAX,[ECX + -0x1]
0042B2AA  3B F8                     CMP EDI,EAX
0042B2AC  7E 05                     JLE 0x0042b2b3
0042B2AE  8B F8                     MOV EDI,EAX
0042B2B0  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
LAB_0042b2b3:
0042B2B3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042B2B6  3B C2                     CMP EAX,EDX
0042B2B8  7F 19                     JG 0x0042b2d3
0042B2BA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042B2BD  3B D6                     CMP EDX,ESI
0042B2BF  7F 12                     JG 0x0042b2d3
0042B2C1  3B D9                     CMP EBX,ECX
0042B2C3  7F 0E                     JG 0x0042b2d3
0042B2C5  39 45 F0                  CMP dword ptr [EBP + -0x10],EAX
0042B2C8  7C 09                     JL 0x0042b2d3
0042B2CA  39 55 F4                  CMP dword ptr [EBP + -0xc],EDX
0042B2CD  7C 04                     JL 0x0042b2d3
0042B2CF  3B FB                     CMP EDI,EBX
0042B2D1  7D 1A                     JGE 0x0042b2ed
LAB_0042b2d3:
0042B2D3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042B2D8  68 33 01 00 00            PUSH 0x133
0042B2DD  68 04 60 7A 00            PUSH 0x7a6004
0042B2E2  50                        PUSH EAX
0042B2E3  68 09 00 FE AF            PUSH 0xaffe0009
0042B2E8  E8 53 AB 27 00            CALL 0x006a5e40
LAB_0042b2ed:
0042B2ED  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
0042B2F0  85 F6                     TEST ESI,ESI
0042B2F2  75 34                     JNZ 0x0042b328
0042B2F4  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0042B2F7  85 C0                     TEST EAX,EAX
0042B2F9  75 29                     JNZ 0x0042b324
0042B2FB  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0042B2FE  85 C0                     TEST EAX,EAX
0042B300  75 22                     JNZ 0x0042b324
0042B302  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
0042B305  85 C0                     TEST EAX,EAX
0042B307  75 1B                     JNZ 0x0042b324
0042B309  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0042B30F  68 35 01 00 00            PUSH 0x135
0042B314  68 04 60 7A 00            PUSH 0x7a6004
0042B319  51                        PUSH ECX
0042B31A  68 09 00 FE AF            PUSH 0xaffe0009
0042B31F  E8 1C AB 27 00            CALL 0x006a5e40
LAB_0042b324:
0042B324  85 F6                     TEST ESI,ESI
0042B326  74 14                     JZ 0x0042b33c
LAB_0042b328:
0042B328  83 3E 00                  CMP dword ptr [ESI],0x0
0042B32B  75 0F                     JNZ 0x0042b33c
0042B32D  6A 05                     PUSH 0x5
0042B32F  6A 02                     PUSH 0x2
0042B331  6A 07                     PUSH 0x7
0042B333  6A 00                     PUSH 0x0
0042B335  E8 56 2F 28 00            CALL 0x006ae290
0042B33A  89 06                     MOV dword ptr [ESI],EAX
LAB_0042b33c:
0042B33C  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0042B33F  85 C0                     TEST EAX,EAX
0042B341  74 17                     JZ 0x0042b35a
0042B343  83 38 00                  CMP dword ptr [EAX],0x0
0042B346  75 12                     JNZ 0x0042b35a
0042B348  6A 05                     PUSH 0x5
0042B34A  6A 02                     PUSH 0x2
0042B34C  6A 07                     PUSH 0x7
0042B34E  6A 00                     PUSH 0x0
0042B350  E8 3B 2F 28 00            CALL 0x006ae290
0042B355  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0042B358  89 02                     MOV dword ptr [EDX],EAX
LAB_0042b35a:
0042B35A  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0042B35D  85 C0                     TEST EAX,EAX
0042B35F  74 06                     JZ 0x0042b367
0042B361  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_0042b367:
0042B367  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
0042B36A  85 C0                     TEST EAX,EAX
0042B36C  74 06                     JZ 0x0042b374
0042B36E  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_0042b374:
0042B374  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0042B37B  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
0042B382  8D 43 FF                  LEA EAX,[EBX + -0x1]
0042B385  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042B388  0F AF C1                  IMUL EAX,ECX
0042B38B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042B38E  03 D0                     ADD EDX,EAX
0042B390  0F AF F1                  IMUL ESI,ECX
0042B393  03 F2                     ADD ESI,EDX
0042B395  3B DF                     CMP EBX,EDI
0042B397  0F 8F F2 00 00 00         JG 0x0042b48f
0042B39D  2B FB                     SUB EDI,EBX
0042B39F  47                        INC EDI
0042B3A0  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
LAB_0042b3a3:
0042B3A3  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0042B3AA  03 F0                     ADD ESI,EAX
0042B3AC  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0042B3B3  8B D6                     MOV EDX,ESI
0042B3B5  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0042B3B8  2B D0                     SUB EDX,EAX
0042B3BA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042B3BD  3B C8                     CMP ECX,EAX
0042B3BF  0F 8F BD 00 00 00         JG 0x0042b482
0042B3C5  8B F8                     MOV EDI,EAX
0042B3C7  2B F9                     SUB EDI,ECX
0042B3C9  47                        INC EDI
0042B3CA  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
LAB_0042b3cd:
0042B3CD  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0042B3D4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042B3D7  03 D1                     ADD EDX,ECX
0042B3D9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042B3DC  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0042B3DF  3B C8                     CMP ECX,EAX
0042B3E1  0F 8F 8E 00 00 00         JG 0x0042b475
0042B3E7  8B D8                     MOV EBX,EAX
0042B3E9  8D 3C D5 F8 FF FF FF      LEA EDI,[EDX*0x8 + 0xfffffff8]
0042B3F0  2B D9                     SUB EBX,ECX
0042B3F2  43                        INC EBX
LAB_0042b3f3:
0042B3F3  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0042B3F9  83 C7 08                  ADD EDI,0x8
0042B3FC  8B 34 17                  MOV ESI,dword ptr [EDI + EDX*0x1]
0042B3FF  85 F6                     TEST ESI,ESI
0042B401  74 66                     JZ 0x0042b469
0042B403  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042B407  39 46 24                  CMP dword ptr [ESI + 0x24],EAX
0042B40A  75 5D                     JNZ 0x0042b469
0042B40C  8B 16                     MOV EDX,dword ptr [ESI]
0042B40E  8B CE                     MOV ECX,ESI
0042B410  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0042B416  83 F8 01                  CMP EAX,0x1
0042B419  75 4E                     JNZ 0x0042b469
0042B41B  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0042B41E  83 F8 14                  CMP EAX,0x14
0042B421  75 1C                     JNZ 0x0042b43f
0042B423  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0042B426  85 C0                     TEST EAX,EAX
0042B428  74 0C                     JZ 0x0042b436
0042B42A  8B 00                     MOV EAX,dword ptr [EAX]
0042B42C  83 C6 32                  ADD ESI,0x32
0042B42F  56                        PUSH ESI
0042B430  50                        PUSH EAX
0042B431  E8 8A 2D 28 00            CALL 0x006ae1c0
LAB_0042b436:
0042B436  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0042B439  85 C0                     TEST EAX,EAX
0042B43B  74 2C                     JZ 0x0042b469
0042B43D  EB 28                     JMP 0x0042b467
LAB_0042b43f:
0042B43F  3D E8 03 00 00            CMP EAX,0x3e8
0042B444  74 07                     JZ 0x0042b44d
0042B446  3D E9 03 00 00            CMP EAX,0x3e9
0042B44B  75 1C                     JNZ 0x0042b469
LAB_0042b44d:
0042B44D  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0042B450  85 C0                     TEST EAX,EAX
0042B452  74 0C                     JZ 0x0042b460
0042B454  8B 08                     MOV ECX,dword ptr [EAX]
0042B456  83 C6 32                  ADD ESI,0x32
0042B459  56                        PUSH ESI
0042B45A  51                        PUSH ECX
0042B45B  E8 60 2D 28 00            CALL 0x006ae1c0
LAB_0042b460:
0042B460  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
0042B463  85 C0                     TEST EAX,EAX
0042B465  74 02                     JZ 0x0042b469
LAB_0042b467:
0042B467  FF 00                     INC dword ptr [EAX]
LAB_0042b469:
0042B469  4B                        DEC EBX
0042B46A  75 87                     JNZ 0x0042b3f3
0042B46C  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
0042B46F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0042B472  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
LAB_0042b475:
0042B475  4F                        DEC EDI
0042B476  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0042B479  0F 85 4E FF FF FF         JNZ 0x0042b3cd
0042B47F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0042b482:
0042B482  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0042B485  48                        DEC EAX
0042B486  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0042B489  0F 85 14 FF FF FF         JNZ 0x0042b3a3
LAB_0042b48f:
0042B48F  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0042B492  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042B498  5F                        POP EDI
0042B499  5E                        POP ESI
0042B49A  5B                        POP EBX
0042B49B  8B E5                     MOV ESP,EBP
0042B49D  5D                        POP EBP
0042B49E  C2 2C 00                  RET 0x2c
LAB_0042b4a1:
0042B4A1  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0042B4A4  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0042B4AA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0042B4AF  74 34                     JZ 0x0042b4e5
0042B4B1  68 78 60 7A 00            PUSH 0x7a6078
0042B4B6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042B4BB  56                        PUSH ESI
0042B4BC  57                        PUSH EDI
0042B4BD  68 55 01 00 00            PUSH 0x155
0042B4C2  68 04 60 7A 00            PUSH 0x7a6004
0042B4C7  E8 04 20 28 00            CALL 0x006ad4d0
0042B4CC  83 C4 18                  ADD ESP,0x18
0042B4CF  85 C0                     TEST EAX,EAX
0042B4D1  74 01                     JZ 0x0042b4d4
0042B4D3  CC                        INT3
LAB_0042b4d4:
0042B4D4  68 56 01 00 00            PUSH 0x156
0042B4D9  68 04 60 7A 00            PUSH 0x7a6004
0042B4DE  57                        PUSH EDI
0042B4DF  56                        PUSH ESI
0042B4E0  E8 5B A9 27 00            CALL 0x006a5e40
LAB_0042b4e5:
0042B4E5  5F                        POP EDI
0042B4E6  5E                        POP ESI
0042B4E7  5B                        POP EBX
0042B4E8  8B E5                     MOV ESP,EBP
0042B4EA  5D                        POP EBP
0042B4EB  C2 2C 00                  RET 0x2c
