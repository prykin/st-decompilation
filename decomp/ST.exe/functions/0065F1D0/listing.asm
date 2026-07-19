AiFltClassTy::AppendZone:
0065F1D0  55                        PUSH EBP
0065F1D1  8B EC                     MOV EBP,ESP
0065F1D3  83 EC 70                  SUB ESP,0x70
0065F1D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065F1DB  53                        PUSH EBX
0065F1DC  56                        PUSH ESI
0065F1DD  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0065F1E0  57                        PUSH EDI
0065F1E1  8D 55 94                  LEA EDX,[EBP + -0x6c]
0065F1E4  8D 4D 90                  LEA ECX,[EBP + -0x70]
0065F1E7  6A 00                     PUSH 0x0
0065F1E9  52                        PUSH EDX
0065F1EA  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0065F1F1  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0065F1F4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065F1FA  E8 F1 E5 0C 00            CALL 0x0072d7f0
0065F1FF  8B F0                     MOV ESI,EAX
0065F201  83 C4 08                  ADD ESP,0x8
0065F204  85 F6                     TEST ESI,ESI
0065F206  0F 85 91 02 00 00         JNZ 0x0065f49d
0065F20C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0065F20F  33 DB                     XOR EBX,EBX
0065F211  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0065F214  8B 88 2F 02 00 00         MOV ECX,dword ptr [EAX + 0x22f]
0065F21A  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0065F21D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0065F220  85 C0                     TEST EAX,EAX
0065F222  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0065F225  0F 8E 44 02 00 00         JLE 0x0065f46f
0065F22B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065F22E  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0065F232  0F BF 38                  MOVSX EDI,word ptr [EAX]
0065F235  0F BF 70 06               MOVSX ESI,word ptr [EAX + 0x6]
0065F239  0F BF 40 08               MOVSX EAX,word ptr [EAX + 0x8]
0065F23D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0065F240  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0065F243  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0065F246  EB 09                     JMP 0x0065f251
LAB_0065f248:
0065F248  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0065F24B  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0065F24E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0065f251:
0065F251  3B 5D E0                  CMP EBX,dword ptr [EBP + -0x20]
0065F254  73 0D                     JNC 0x0065f263
0065F256  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0065F259  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
0065F25C  0F AF F3                  IMUL ESI,EBX
0065F25F  03 F0                     ADD ESI,EAX
0065F261  EB 02                     JMP 0x0065f265
LAB_0065f263:
0065F263  33 F6                     XOR ESI,ESI
LAB_0065f265:
0065F265  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0065F268  0F BF 0E                  MOVSX ECX,word ptr [ESI]
0065F26B  8D 44 10 FF               LEA EAX,[EAX + EDX*0x1 + -0x1]
0065F26F  3B F9                     CMP EDI,ECX
0065F271  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0065F274  0F BF 46 06               MOVSX EAX,word ptr [ESI + 0x6]
0065F278  0F BF 5E 02               MOVSX EBX,word ptr [ESI + 0x2]
0065F27C  8D 44 08 FF               LEA EAX,[EAX + ECX*0x1 + -0x1]
0065F280  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0065F283  0F BF 46 08               MOVSX EAX,word ptr [ESI + 0x8]
0065F287  8D 44 18 FF               LEA EAX,[EAX + EBX*0x1 + -0x1]
0065F28B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0065F28E  7C 45                     JL 0x0065f2d5
0065F290  3B 7D E4                  CMP EDI,dword ptr [EBP + -0x1c]
0065F293  7F 40                     JG 0x0065f2d5
0065F295  3B D3                     CMP EDX,EBX
0065F297  7C 3C                     JL 0x0065f2d5
0065F299  3B 55 D8                  CMP EDX,dword ptr [EBP + -0x28]
0065F29C  7F 37                     JG 0x0065f2d5
0065F29E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065F2A1  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
0065F2A5  3B C1                     CMP EAX,ECX
0065F2A7  7C 2C                     JL 0x0065f2d5
0065F2A9  0F BF 56 06               MOVSX EDX,word ptr [ESI + 0x6]
0065F2AD  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
0065F2B1  3B C2                     CMP EAX,EDX
0065F2B3  7F 1D                     JG 0x0065f2d2
0065F2B5  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0065F2B8  3B D3                     CMP EDX,EBX
0065F2BA  7C 16                     JL 0x0065f2d2
0065F2BC  0F BF 46 08               MOVSX EAX,word ptr [ESI + 0x8]
0065F2C0  8D 44 18 FF               LEA EAX,[EAX + EBX*0x1 + -0x1]
0065F2C4  3B D0                     CMP EDX,EAX
0065F2C6  7F 0A                     JG 0x0065f2d2
0065F2C8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065F2CB  B8 01 00 00 00            MOV EAX,0x1
0065F2D0  EB 05                     JMP 0x0065f2d7
LAB_0065f2d2:
0065F2D2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0065f2d5:
0065F2D5  33 C0                     XOR EAX,EAX
LAB_0065f2d7:
0065F2D7  85 C0                     TEST EAX,EAX
0065F2D9  0F 85 89 01 00 00         JNZ 0x0065f468
0065F2DF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0065F2E2  3B CF                     CMP ECX,EDI
0065F2E4  8D 44 10 FF               LEA EAX,[EAX + EDX*0x1 + -0x1]
0065F2E8  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0065F2EB  7C 3F                     JL 0x0065f32c
0065F2ED  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065F2F0  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
0065F2F4  3B C8                     CMP ECX,EAX
0065F2F6  7F 34                     JG 0x0065f32c
0065F2F8  3B DA                     CMP EBX,EDX
0065F2FA  7C 30                     JL 0x0065f32c
0065F2FC  3B 5D E4                  CMP EBX,dword ptr [EBP + -0x1c]
0065F2FF  7F 2B                     JG 0x0065f32c
0065F301  0F BF 56 06               MOVSX EDX,word ptr [ESI + 0x6]
0065F305  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
0065F309  3B D7                     CMP EDX,EDI
0065F30B  7C 1F                     JL 0x0065f32c
0065F30D  3B D0                     CMP EDX,EAX
0065F30F  7F 1B                     JG 0x0065f32c
0065F311  0F BF 46 08               MOVSX EAX,word ptr [ESI + 0x8]
0065F315  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065F318  8D 44 18 FF               LEA EAX,[EAX + EBX*0x1 + -0x1]
0065F31C  3B C2                     CMP EAX,EDX
0065F31E  7C 0C                     JL 0x0065f32c
0065F320  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
0065F323  7F 07                     JG 0x0065f32c
0065F325  B8 01 00 00 00            MOV EAX,0x1
0065F32A  EB 02                     JMP 0x0065f32e
LAB_0065f32c:
0065F32C  33 C0                     XOR EAX,EAX
LAB_0065f32e:
0065F32E  85 C0                     TEST EAX,EAX
0065F330  0F 85 AA 00 00 00         JNZ 0x0065f3e0
0065F336  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0065F339  0F BF 82 70 01 00 00      MOVSX EAX,word ptr [EDX + 0x170]
0065F340  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
0065F343  0F 8C 80 00 00 00         JL 0x0065f3c9
0065F349  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065F34C  99                        CDQ
0065F34D  2B C2                     SUB EAX,EDX
0065F34F  D1 F8                     SAR EAX,0x1
0065F351  03 C7                     ADD EAX,EDI
0065F353  3B C1                     CMP EAX,ECX
0065F355  7C 2C                     JL 0x0065f383
0065F357  0F BF 56 06               MOVSX EDX,word ptr [ESI + 0x6]
0065F35B  03 D1                     ADD EDX,ECX
0065F35D  3B C2                     CMP EAX,EDX
0065F35F  7D 22                     JGE 0x0065f383
0065F361  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0065F364  99                        CDQ
0065F365  2B C2                     SUB EAX,EDX
0065F367  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065F36A  D1 F8                     SAR EAX,0x1
0065F36C  03 C2                     ADD EAX,EDX
0065F36E  3B C3                     CMP EAX,EBX
0065F370  7C 11                     JL 0x0065f383
0065F372  0F BF 56 08               MOVSX EDX,word ptr [ESI + 0x8]
0065F376  03 D3                     ADD EDX,EBX
0065F378  3B C2                     CMP EAX,EDX
0065F37A  7D 07                     JGE 0x0065f383
0065F37C  B8 01 00 00 00            MOV EAX,0x1
0065F381  EB 02                     JMP 0x0065f385
LAB_0065f383:
0065F383  33 C0                     XOR EAX,EAX
LAB_0065f385:
0065F385  85 C0                     TEST EAX,EAX
0065F387  75 6A                     JNZ 0x0065f3f3
0065F389  0F BF 46 06               MOVSX EAX,word ptr [ESI + 0x6]
0065F38D  99                        CDQ
0065F38E  2B C2                     SUB EAX,EDX
0065F390  D1 F8                     SAR EAX,0x1
0065F392  03 C8                     ADD ECX,EAX
0065F394  3B CF                     CMP ECX,EDI
0065F396  7C 2B                     JL 0x0065f3c3
0065F398  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065F39B  03 C7                     ADD EAX,EDI
0065F39D  3B C8                     CMP ECX,EAX
0065F39F  7D 22                     JGE 0x0065f3c3
0065F3A1  0F BF 46 08               MOVSX EAX,word ptr [ESI + 0x8]
0065F3A5  99                        CDQ
0065F3A6  2B C2                     SUB EAX,EDX
0065F3A8  D1 F8                     SAR EAX,0x1
0065F3AA  03 D8                     ADD EBX,EAX
0065F3AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065F3AF  3B D8                     CMP EBX,EAX
0065F3B1  7C 10                     JL 0x0065f3c3
0065F3B3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0065F3B6  03 C8                     ADD ECX,EAX
0065F3B8  3B D9                     CMP EBX,ECX
0065F3BA  7D 07                     JGE 0x0065f3c3
0065F3BC  B8 01 00 00 00            MOV EAX,0x1
0065F3C1  EB 02                     JMP 0x0065f3c5
LAB_0065f3c3:
0065F3C3  33 C0                     XOR EAX,EAX
LAB_0065f3c5:
0065F3C5  85 C0                     TEST EAX,EAX
0065F3C7  75 2A                     JNZ 0x0065f3f3
LAB_0065f3c9:
0065F3C9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065F3CC  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0065F3CF  40                        INC EAX
0065F3D0  3B C1                     CMP EAX,ECX
0065F3D2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065F3D5  0F 8C 6D FE FF FF         JL 0x0065f248
0065F3DB  E9 8F 00 00 00            JMP 0x0065f46f
LAB_0065f3e0:
0065F3E0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0065F3E3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065F3E6  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0065F3E9  52                        PUSH EDX
0065F3EA  50                        PUSH EAX
0065F3EB  51                        PUSH ECX
0065F3EC  E8 4F ED 04 00            CALL 0x006ae140
0065F3F1  EB 75                     JMP 0x0065f468
LAB_0065f3f3:
0065F3F3  0F BF 06                  MOVSX EAX,word ptr [ESI]
0065F3F6  0F BF 56 06               MOVSX EDX,word ptr [ESI + 0x6]
0065F3FA  0F BF 5E 08               MOVSX EBX,word ptr [ESI + 0x8]
0065F3FE  8D 4C 02 FF               LEA ECX,[EDX + EAX*0x1 + -0x1]
0065F402  3B F8                     CMP EDI,EAX
0065F404  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
0065F408  8D 54 1A FF               LEA EDX,[EDX + EBX*0x1 + -0x1]
0065F40C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0065F40F  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0065F412  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0065F415  8D 54 3A FF               LEA EDX,[EDX + EDI*0x1 + -0x1]
0065F419  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0065F41C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0065F41F  8D 54 1A FF               LEA EDX,[EDX + EBX*0x1 + -0x1]
0065F423  7D 03                     JGE 0x0065f428
0065F425  66 89 3E                  MOV word ptr [ESI],DI
LAB_0065f428:
0065F428  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
0065F42C  3B D8                     CMP EBX,EAX
0065F42E  7D 04                     JGE 0x0065f434
0065F430  66 89 5E 02               MOV word ptr [ESI + 0x2],BX
LAB_0065f434:
0065F434  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0065F437  3B C1                     CMP EAX,ECX
0065F439  7E 0A                     JLE 0x0065f445
0065F43B  66 2B 06                  SUB AX,word ptr [ESI]
0065F43E  40                        INC EAX
0065F43F  66 89 46 06               MOV word ptr [ESI + 0x6],AX
0065F443  EB 08                     JMP 0x0065f44d
LAB_0065f445:
0065F445  66 2B 0E                  SUB CX,word ptr [ESI]
0065F448  41                        INC ECX
0065F449  66 89 4E 06               MOV word ptr [ESI + 0x6],CX
LAB_0065f44d:
0065F44D  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0065F450  3B D0                     CMP EDX,EAX
0065F452  7E 0B                     JLE 0x0065f45f
0065F454  66 2B 56 02               SUB DX,word ptr [ESI + 0x2]
0065F458  42                        INC EDX
0065F459  66 89 56 08               MOV word ptr [ESI + 0x8],DX
0065F45D  EB 09                     JMP 0x0065f468
LAB_0065f45f:
0065F45F  66 2B 46 02               SUB AX,word ptr [ESI + 0x2]
0065F463  40                        INC EAX
0065F464  66 89 46 08               MOV word ptr [ESI + 0x8],AX
AiFltClassTy::AppendZone::cf_common_exit_0065F468:
0065F468  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0065f46f:
0065F46F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0065F472  85 C0                     TEST EAX,EAX
0065F474  74 13                     JZ 0x0065f489
0065F476  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0065F479  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065F47C  51                        PUSH ECX
0065F47D  8B 82 2F 02 00 00         MOV EAX,dword ptr [EDX + 0x22f]
0065F483  50                        PUSH EAX
0065F484  E8 37 ED 04 00            CALL 0x006ae1c0
LAB_0065f489:
0065F489  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0065F48C  33 C0                     XOR EAX,EAX
0065F48E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065F494  5F                        POP EDI
0065F495  5E                        POP ESI
0065F496  5B                        POP EBX
0065F497  8B E5                     MOV ESP,EBP
0065F499  5D                        POP EBP
0065F49A  C2 04 00                  RET 0x4
LAB_0065f49d:
0065F49D  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0065F4A0  68 00 2C 7D 00            PUSH 0x7d2c00
0065F4A5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0065F4AA  56                        PUSH ESI
0065F4AB  6A 00                     PUSH 0x0
0065F4AD  68 DF 02 00 00            PUSH 0x2df
0065F4B2  68 80 2B 7D 00            PUSH 0x7d2b80
0065F4B7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065F4BD  E8 0E E0 04 00            CALL 0x006ad4d0
0065F4C2  83 C4 18                  ADD ESP,0x18
0065F4C5  85 C0                     TEST EAX,EAX
0065F4C7  74 01                     JZ 0x0065f4ca
0065F4C9  CC                        INT3
LAB_0065f4ca:
0065F4CA  68 E0 02 00 00            PUSH 0x2e0
0065F4CF  68 80 2B 7D 00            PUSH 0x7d2b80
0065F4D4  6A 00                     PUSH 0x0
0065F4D6  56                        PUSH ESI
0065F4D7  E8 64 69 04 00            CALL 0x006a5e40
0065F4DC  8B C6                     MOV EAX,ESI
0065F4DE  5F                        POP EDI
0065F4DF  5E                        POP ESI
0065F4E0  5B                        POP EBX
0065F4E1  8B E5                     MOV ESP,EBP
0065F4E3  5D                        POP EBP
0065F4E4  C2 04 00                  RET 0x4
