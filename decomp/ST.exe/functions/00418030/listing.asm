FUN_00418030:
00418030  55                        PUSH EBP
00418031  8B EC                     MOV EBP,ESP
00418033  81 EC 98 00 00 00         SUB ESP,0x98
00418039  53                        PUSH EBX
0041803A  56                        PUSH ESI
0041803B  8B F1                     MOV ESI,ECX
0041803D  57                        PUSH EDI
0041803E  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
00418041  E8 0C D9 FE FF            CALL 0x00405952
00418046  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0041804A  66 3B 46 47               CMP AX,word ptr [ESI + 0x47]
0041804E  75 22                     JNZ 0x00418072
00418050  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00418054  66 3B 4E 49               CMP CX,word ptr [ESI + 0x49]
00418058  75 18                     JNZ 0x00418072
0041805A  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0041805E  66 3B 56 4B               CMP DX,word ptr [ESI + 0x4b]
00418062  75 0E                     JNZ 0x00418072
00418064  B8 01 00 00 00            MOV EAX,0x1
00418069  5F                        POP EDI
0041806A  5E                        POP ESI
0041806B  5B                        POP EBX
0041806C  8B E5                     MOV ESP,EBP
0041806E  5D                        POP EBP
0041806F  C2 0C 00                  RET 0xc
LAB_00418072:
00418072  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00418077  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
0041807D  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
00418083  6A 00                     PUSH 0x0
00418085  52                        PUSH EDX
00418086  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
0041808C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00418092  E8 59 57 31 00            CALL 0x0072d7f0
00418097  83 C4 08                  ADD ESP,0x8
0041809A  85 C0                     TEST EAX,EAX
0041809C  0F 85 EE 06 00 00         JNZ 0x00418790
004180A2  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
004180A5  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
004180A9  0F BF 4B 5B               MOVSX ECX,word ptr [EBX + 0x5b]
004180AD  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004180B0  2B C1                     SUB EAX,ECX
004180B2  99                        CDQ
004180B3  33 C2                     XOR EAX,EDX
004180B5  2B C2                     SUB EAX,EDX
004180B7  83 F8 02                  CMP EAX,0x2
004180BA  0F 8D 03 01 00 00         JGE 0x004181c3
004180C0  0F BF 7D 0C               MOVSX EDI,word ptr [EBP + 0xc]
004180C4  0F BF 53 5D               MOVSX EDX,word ptr [EBX + 0x5d]
004180C8  8B C7                     MOV EAX,EDI
004180CA  2B C2                     SUB EAX,EDX
004180CC  99                        CDQ
004180CD  33 C2                     XOR EAX,EDX
004180CF  2B C2                     SUB EAX,EDX
004180D1  83 F8 02                  CMP EAX,0x2
004180D4  0F 8D E9 00 00 00         JGE 0x004181c3
004180DA  0F BF 75 10               MOVSX ESI,word ptr [EBP + 0x10]
004180DE  0F BF 4B 5F               MOVSX ECX,word ptr [EBX + 0x5f]
004180E2  8B C6                     MOV EAX,ESI
004180E4  2B C1                     SUB EAX,ECX
004180E6  99                        CDQ
004180E7  33 C2                     XOR EAX,EDX
004180E9  2B C2                     SUB EAX,EDX
004180EB  83 F8 02                  CMP EAX,0x2
004180EE  0F 8D CF 00 00 00         JGE 0x004181c3
004180F4  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
004180F8  66 85 C9                  TEST CX,CX
004180FB  7C 5C                     JL 0x00418159
004180FD  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
00418103  66 3B C8                  CMP CX,AX
00418106  7D 51                     JGE 0x00418159
00418108  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0041810C  66 85 C9                  TEST CX,CX
0041810F  7C 48                     JL 0x00418159
00418111  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00418118  7D 3F                     JGE 0x00418159
0041811A  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0041811E  66 85 C9                  TEST CX,CX
00418121  7C 36                     JL 0x00418159
00418123  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0041812A  7D 2D                     JGE 0x00418159
0041812C  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00418133  0F BF C0                  MOVSX EAX,AX
00418136  0F AF D6                  IMUL EDX,ESI
00418139  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0041813C  0F AF C7                  IMUL EAX,EDI
0041813F  03 CA                     ADD ECX,EDX
00418141  03 C1                     ADD EAX,ECX
00418143  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00418149  33 D2                     XOR EDX,EDX
0041814B  8A 93 8E 00 00 00         MOV DL,byte ptr [EBX + 0x8e]
00418151  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00418154  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
00418157  EB 02                     JMP 0x0041815b
LAB_00418159:
00418159  33 C0                     XOR EAX,EAX
LAB_0041815b:
0041815B  85 C0                     TEST EAX,EAX
0041815D  75 64                     JNZ 0x004181c3
0041815F  6A 10                     PUSH 0x10
00418161  C7 83 9B 00 00 00 02 00 00 00  MOV dword ptr [EBX + 0x9b],0x2
0041816B  E8 A0 2A 29 00            CALL 0x006aac10
00418170  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
00418174  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00418178  89 83 97 00 00 00         MOV dword ptr [EBX + 0x97],EAX
0041817E  66 89 50 08               MOV word ptr [EAX + 0x8],DX
00418182  8B 83 97 00 00 00         MOV EAX,dword ptr [EBX + 0x97]
00418188  56                        PUSH ESI
00418189  57                        PUSH EDI
0041818A  66 89 48 0A               MOV word ptr [EAX + 0xa],CX
0041818E  8B 93 97 00 00 00         MOV EDX,dword ptr [EBX + 0x97]
00418194  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
00418198  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0041819B  66 89 42 0C               MOV word ptr [EDX + 0xc],AX
0041819F  51                        PUSH ECX
004181A0  0F BF 53 5F               MOVSX EDX,word ptr [EBX + 0x5f]
004181A4  0F BF 43 5D               MOVSX EAX,word ptr [EBX + 0x5d]
004181A8  0F BF 4B 5B               MOVSX ECX,word ptr [EBX + 0x5b]
004181AC  52                        PUSH EDX
004181AD  50                        PUSH EAX
004181AE  51                        PUSH ECX
004181AF  E8 FC DC 28 00            CALL 0x006a5eb0
004181B4  8B 93 97 00 00 00         MOV EDX,dword ptr [EBX + 0x97]
004181BA  66 89 42 0E               MOV word ptr [EDX + 0xe],AX
004181BE  E9 68 04 00 00            JMP 0x0041862b
LAB_004181c3:
004181C3  68 AE 02 00 00            PUSH 0x2ae
004181C8  C7 45 C0 03 00 00 00      MOV dword ptr [EBP + -0x40],0x3
004181CF  E8 3C 2A 29 00            CALL 0x006aac10
004181D4  66 8B 4B 47               MOV CX,word ptr [EBX + 0x47]
004181D8  BA 02 00 00 00            MOV EDX,0x2
004181DD  8D B0 56 01 00 00         LEA ESI,[EAX + 0x156]
004181E3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004181E6  66 3B CA                  CMP CX,DX
004181E9  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
004181EC  8B C2                     MOV EAX,EDX
004181EE  7D 03                     JGE 0x004181f3
004181F0  0F BF C1                  MOVSX EAX,CX
LAB_004181f3:
004181F3  F7 D8                     NEG EAX
004181F5  0F BF C9                  MOVSX ECX,CX
004181F8  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
004181FB  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00418202  8D 79 02                  LEA EDI,[ECX + 0x2]
00418205  3B F8                     CMP EDI,EAX
00418207  7D 05                     JGE 0x0041820e
00418209  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0041820C  EB 06                     JMP 0x00418214
LAB_0041820e:
0041820E  2B C1                     SUB EAX,ECX
00418210  48                        DEC EAX
00418211  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_00418214:
00418214  66 8B 4B 49               MOV CX,word ptr [EBX + 0x49]
00418218  8B C2                     MOV EAX,EDX
0041821A  66 3B CA                  CMP CX,DX
0041821D  7D 03                     JGE 0x00418222
0041821F  0F BF C1                  MOVSX EAX,CX
LAB_00418222:
00418222  F7 D8                     NEG EAX
00418224  0F BF C9                  MOVSX ECX,CX
00418227  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0041822A  0F BF 05 7A B2 7F 00      MOVSX EAX,word ptr [0x007fb27a]
00418231  8D 79 02                  LEA EDI,[ECX + 0x2]
00418234  3B F8                     CMP EDI,EAX
00418236  7D 05                     JGE 0x0041823d
00418238  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0041823B  EB 06                     JMP 0x00418243
LAB_0041823d:
0041823D  2B C1                     SUB EAX,ECX
0041823F  48                        DEC EAX
00418240  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_00418243:
00418243  66 8B 43 4B               MOV AX,word ptr [EBX + 0x4b]
00418247  8B CA                     MOV ECX,EDX
00418249  66 3B C2                  CMP AX,DX
0041824C  7D 03                     JGE 0x00418251
0041824E  0F BF C8                  MOVSX ECX,AX
LAB_00418251:
00418251  0F BF D0                  MOVSX EDX,AX
00418254  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
0041825B  8D 7A 02                  LEA EDI,[EDX + 0x2]
0041825E  F7 D9                     NEG ECX
00418260  3B F8                     CMP EDI,EAX
00418262  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00418265  7D 09                     JGE 0x00418270
00418267  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
0041826E  EB 06                     JMP 0x00418276
LAB_00418270:
00418270  2B C2                     SUB EAX,EDX
00418272  48                        DEC EAX
00418273  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00418276:
00418276  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00418279  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00418280  3B C8                     CMP ECX,EAX
00418282  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00418285  0F 8F C1 01 00 00         JG 0x0041844c
0041828B  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
00418292  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
00418295  2B C1                     SUB EAX,ECX
00418297  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0041829A  03 C1                     ADD EAX,ECX
0041829C  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
004182A3  2B D0                     SUB EDX,EAX
004182A5  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004182A8  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004182AB  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
LAB_004182ae:
004182AE  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004182B1  3B C8                     CMP ECX,EAX
004182B3  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
004182B6  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
004182B9  0F 8F 72 01 00 00         JG 0x00418431
LAB_004182bf:
004182BF  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004182C2  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004182C5  3B F9                     CMP EDI,ECX
004182C7  0F 8F 49 01 00 00         JG 0x00418416
004182CD  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004182D0  8D 0C 78                  LEA ECX,[EAX + EDI*0x2]
004182D3  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
LAB_004182d6:
004182D6  66 8B 53 4B               MOV DX,word ptr [EBX + 0x4b]
004182DA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004182DD  66 8B 73 49               MOV SI,word ptr [EBX + 0x49]
004182E1  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004182E4  03 D0                     ADD EDX,EAX
004182E6  66 8B 43 47               MOV AX,word ptr [EBX + 0x47]
004182EA  03 C7                     ADD EAX,EDI
004182EC  03 F1                     ADD ESI,ECX
004182EE  66 85 C0                  TEST AX,AX
004182F1  89 75 B4                  MOV dword ptr [EBP + -0x4c],ESI
004182F4  7C 57                     JL 0x0041834d
004182F6  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004182FD  7D 4E                     JGE 0x0041834d
004182FF  66 85 F6                  TEST SI,SI
00418302  7C 49                     JL 0x0041834d
00418304  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
0041830B  7D 40                     JGE 0x0041834d
0041830D  66 85 D2                  TEST DX,DX
00418310  7C 3B                     JL 0x0041834d
00418312  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00418319  7D 32                     JGE 0x0041834d
0041831B  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00418322  0F BF CA                  MOVSX ECX,DX
00418325  0F AF CF                  IMUL ECX,EDI
00418328  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0041832F  0F BF F6                  MOVSX ESI,SI
00418332  0F AF F7                  IMUL ESI,EDI
00418335  03 CE                     ADD ECX,ESI
00418337  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0041833A  0F BF F0                  MOVSX ESI,AX
0041833D  03 CE                     ADD ECX,ESI
0041833F  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
00418345  8B 0C CE                  MOV ECX,dword ptr [ESI + ECX*0x8]
00418348  8B 75 B4                  MOV ESI,dword ptr [EBP + -0x4c]
0041834B  EB 02                     JMP 0x0041834f
LAB_0041834d:
0041834D  33 C9                     XOR ECX,ECX
LAB_0041834f:
0041834F  85 C9                     TEST ECX,ECX
00418351  75 65                     JNZ 0x004183b8
00418353  38 8B 8E 00 00 00         CMP byte ptr [EBX + 0x8e],CL
00418359  74 59                     JZ 0x004183b4
0041835B  66 85 C0                  TEST AX,AX
0041835E  7C 52                     JL 0x004183b2
00418360  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00418367  7D 49                     JGE 0x004183b2
00418369  66 85 F6                  TEST SI,SI
0041836C  7C 44                     JL 0x004183b2
0041836E  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
00418375  7D 3B                     JGE 0x004183b2
00418377  66 85 D2                  TEST DX,DX
0041837A  7C 36                     JL 0x004183b2
0041837C  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00418383  7D 2D                     JGE 0x004183b2
00418385  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0041838C  0F BF D2                  MOVSX EDX,DX
0041838F  0F AF D1                  IMUL EDX,ECX
00418392  0F BF CE                  MOVSX ECX,SI
00418395  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
0041839C  0F AF CE                  IMUL ECX,ESI
0041839F  0F BF C0                  MOVSX EAX,AX
004183A2  03 D1                     ADD EDX,ECX
004183A4  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004183AA  03 D0                     ADD EDX,EAX
004183AC  8B 4C D1 04               MOV ECX,dword ptr [ECX + EDX*0x8 + 0x4]
004183B0  EB 02                     JMP 0x004183b4
LAB_004183b2:
004183B2  33 C9                     XOR ECX,ECX
LAB_004183b4:
004183B4  85 C9                     TEST ECX,ECX
004183B6  74 40                     JZ 0x004183f8
LAB_004183b8:
004183B8  3B CB                     CMP ECX,EBX
004183BA  74 3C                     JZ 0x004183f8
004183BC  0F BF 53 4B               MOVSX EDX,word ptr [EBX + 0x4b]
004183C0  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004183C3  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
004183C7  03 D6                     ADD EDX,ESI
004183C9  3B D0                     CMP EDX,EAX
004183CB  75 1C                     JNZ 0x004183e9
004183CD  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
004183D1  03 4D D4                  ADD ECX,dword ptr [EBP + -0x2c]
004183D4  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
004183D8  3B CA                     CMP ECX,EDX
004183DA  75 0D                     JNZ 0x004183e9
004183DC  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
004183E0  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004183E3  03 C7                     ADD EAX,EDI
004183E5  3B C1                     CMP EAX,ECX
004183E7  74 0F                     JZ 0x004183f8
LAB_004183e9:
004183E9  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004183EC  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004183F3  66 C7 01 FD FF            MOV word ptr [ECX],0xfffd
LAB_004183f8:
004183F8  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004183FB  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004183FE  47                        INC EDI
004183FF  83 C1 02                  ADD ECX,0x2
00418402  3B F8                     CMP EDI,EAX
00418404  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00418407  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0041840A  0F 8E C6 FE FF FF         JLE 0x004182d6
00418410  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
00418413  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
LAB_00418416:
00418416  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00418419  83 C1 0E                  ADD ECX,0xe
0041841C  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0041841F  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00418422  41                        INC ECX
00418423  3B C8                     CMP ECX,EAX
00418425  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00418428  0F 8E 91 FE FF FF         JLE 0x004182bf
0041842E  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_00418431:
00418431  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00418434  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00418437  83 C6 62                  ADD ESI,0x62
0041843A  42                        INC EDX
0041843B  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0041843E  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
00418441  3B D6                     CMP EDX,ESI
00418443  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00418446  0F 8E 62 FE FF FF         JLE 0x004182ae
LAB_0041844c:
0041844C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0041844F  85 C0                     TEST EAX,EAX
00418451  75 0D                     JNZ 0x00418460
00418453  8D 55 F0                  LEA EDX,[EBP + -0x10]
00418456  52                        PUSH EDX
00418457  E8 04 2C 29 00            CALL 0x006ab060
0041845C  33 F6                     XOR ESI,ESI
0041845E  EB 03                     JMP 0x00418463
LAB_00418460:
00418460  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
LAB_00418463:
00418463  0F BF 4D 10               MOVSX ECX,word ptr [EBP + 0x10]
00418467  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
0041846B  56                        PUSH ESI
0041846C  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0041846F  8D 83 9B 00 00 00         LEA EAX,[EBX + 0x9b]
00418475  56                        PUSH ESI
00418476  50                        PUSH EAX
00418477  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0041847A  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0041847D  51                        PUSH ECX
0041847E  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
00418482  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00418485  52                        PUSH EDX
00418486  0F BF 53 49               MOVSX EDX,word ptr [EBX + 0x49]
0041848A  50                        PUSH EAX
0041848B  51                        PUSH ECX
0041848C  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
00418490  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
00418497  52                        PUSH EDX
00418498  50                        PUSH EAX
00418499  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
004184A0  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
004184A7  51                        PUSH ECX
004184A8  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
004184AE  52                        PUSH EDX
004184AF  50                        PUSH EAX
004184B0  51                        PUSH ECX
004184B1  E8 1A 63 29 00            CALL 0x006ae7d0
004184B6  85 C0                     TEST EAX,EAX
004184B8  89 83 97 00 00 00         MOV dword ptr [EBX + 0x97],EAX
004184BE  0F 85 5E 01 00 00         JNZ 0x00418622
004184C4  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
004184CB  0F BF 15 7C B2 7F 00      MOVSX EDX,word ptr [0x007fb27c]
004184D2  0F AF CA                  IMUL ECX,EDX
004184D5  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
004184DB  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
004184E1  D1 E1                     SHL ECX,0x1
004184E3  8B C1                     MOV EAX,ECX
004184E5  C1 E9 02                  SHR ECX,0x2
004184E8  F3 A5                     MOVSD.REP ES:EDI,ESI
004184EA  8B C8                     MOV ECX,EAX
004184EC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004184EF  83 E1 03                  AND ECX,0x3
004184F2  85 C0                     TEST EAX,EAX
004184F4  F3 A4                     MOVSB.REP ES:EDI,ESI
004184F6  0F 84 D8 00 00 00         JZ 0x004185d4
004184FC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004184FF  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00418502  8B F1                     MOV ESI,ECX
00418504  3B C8                     CMP ECX,EAX
00418506  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00418509  0F 8F C5 00 00 00         JG 0x004185d4
0041850F  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
00418516  2B C1                     SUB EAX,ECX
00418518  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0041851B  03 C1                     ADD EAX,ECX
0041851D  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
00418524  2B D0                     SUB EDX,EAX
00418526  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00418529  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0041852C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0041852F  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
LAB_00418532:
00418532  0F BF 43 4B               MOVSX EAX,word ptr [EBX + 0x4b]
00418536  03 C6                     ADD EAX,ESI
00418538  0F BF 35 7E B2 7F 00      MOVSX ESI,word ptr [0x007fb27e]
0041853F  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
00418546  0F AF C6                  IMUL EAX,ESI
00418549  0F BF 73 49               MOVSX ESI,word ptr [EBX + 0x49]
0041854D  03 F1                     ADD ESI,ECX
0041854F  0F AF F7                  IMUL ESI,EDI
00418552  03 C6                     ADD EAX,ESI
00418554  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00418557  0F BF 73 47               MOVSX ESI,word ptr [EBX + 0x47]
0041855B  03 C6                     ADD EAX,ESI
0041855D  8B 35 38 B2 7F 00         MOV ESI,dword ptr [0x007fb238]
00418563  8D 34 46                  LEA ESI,[ESI + EAX*0x2]
00418566  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00418569  3B C8                     CMP ECX,EAX
0041856B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0041856E  7F 49                     JG 0x004185b9
00418570  2B C1                     SUB EAX,ECX
00418572  40                        INC EAX
00418573  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_00418576:
00418576  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00418579  3B D1                     CMP EDX,ECX
0041857B  7F 23                     JG 0x004185a0
0041857D  2B CA                     SUB ECX,EDX
0041857F  2B F7                     SUB ESI,EDI
00418581  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
00418584  41                        INC ECX
LAB_00418585:
00418585  66 8B 10                  MOV DX,word ptr [EAX]
00418588  66 85 D2                  TEST DX,DX
0041858B  7D 04                     JGE 0x00418591
0041858D  66 89 14 06               MOV word ptr [ESI + EAX*0x1],DX
LAB_00418591:
00418591  83 C0 02                  ADD EAX,0x2
00418594  49                        DEC ECX
00418595  75 EE                     JNZ 0x00418585
00418597  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0041859A  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0041859D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_004185a0:
004185A0  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
004185A7  83 C7 0E                  ADD EDI,0xe
004185AA  48                        DEC EAX
004185AB  8D 34 4E                  LEA ESI,[ESI + ECX*0x2]
004185AE  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004185B1  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004185B4  75 C0                     JNZ 0x00418576
004185B6  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
LAB_004185b9:
004185B9  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004185BC  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004185BF  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004185C2  46                        INC ESI
004185C3  83 C7 62                  ADD EDI,0x62
004185C6  3B F0                     CMP ESI,EAX
004185C8  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004185CB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004185CE  0F 8E 5E FF FF FF         JLE 0x00418532
LAB_004185d4:
004185D4  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
004185D7  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004185DA  8D 83 9B 00 00 00         LEA EAX,[EBX + 0x9b]
004185E0  6A 00                     PUSH 0x0
004185E2  50                        PUSH EAX
004185E3  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004185E6  52                        PUSH EDX
004185E7  50                        PUSH EAX
004185E8  0F BF 53 4B               MOVSX EDX,word ptr [EBX + 0x4b]
004185EC  0F BF 43 49               MOVSX EAX,word ptr [EBX + 0x49]
004185F0  51                        PUSH ECX
004185F1  52                        PUSH EDX
004185F2  0F BF 4B 47               MOVSX ECX,word ptr [EBX + 0x47]
004185F6  0F BF 15 34 B2 7F 00      MOVSX EDX,word ptr [0x007fb234]
004185FD  50                        PUSH EAX
004185FE  51                        PUSH ECX
004185FF  0F BF 05 32 B2 7F 00      MOVSX EAX,word ptr [0x007fb232]
00418606  0F BF 0D 30 B2 7F 00      MOVSX ECX,word ptr [0x007fb230]
0041860D  52                        PUSH EDX
0041860E  8B 15 38 B2 7F 00         MOV EDX,dword ptr [0x007fb238]
00418614  50                        PUSH EAX
00418615  51                        PUSH ECX
00418616  52                        PUSH EDX
00418617  E8 84 75 29 00            CALL 0x006afba0
0041861C  89 83 97 00 00 00         MOV dword ptr [EBX + 0x97],EAX
LAB_00418622:
00418622  8D 45 F0                  LEA EAX,[EBP + -0x10]
00418625  50                        PUSH EAX
00418626  E8 35 2A 29 00            CALL 0x006ab060
LAB_0041862b:
0041862B  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
00418631  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00418637  8B 83 97 00 00 00         MOV EAX,dword ptr [EBX + 0x97]
0041863D  85 C0                     TEST EAX,EAX
0041863F  75 0E                     JNZ 0x0041864f
00418641  B8 02 00 00 00            MOV EAX,0x2
00418646  5F                        POP EDI
00418647  5E                        POP ESI
00418648  5B                        POP EBX
00418649  8B E5                     MOV ESP,EBP
0041864B  5D                        POP EBP
0041864C  C2 0C 00                  RET 0xc
LAB_0041864f:
0041864F  C6 83 E3 00 00 00 01      MOV byte ptr [EBX + 0xe3],0x1
00418656  C7 83 D3 00 00 00 01 00 00 00  MOV dword ptr [EBX + 0xd3],0x1
00418660  66 8B 70 08               MOV SI,word ptr [EAX + 0x8]
00418664  66 8B 78 0A               MOV DI,word ptr [EAX + 0xa]
00418668  66 69 F6 C9 00            IMUL SI,SI,0xc9
0041866D  66 69 FF C9 00            IMUL DI,DI,0xc9
00418672  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
00418676  83 C6 64                  ADD ESI,0x64
00418679  0F BF 53 41               MOVSX EDX,word ptr [EBX + 0x41]
0041867D  66 69 C9 C8 00            IMUL CX,CX,0xc8
00418682  0F BF C6                  MOVSX EAX,SI
00418685  2B C2                     SUB EAX,EDX
00418687  83 C7 64                  ADD EDI,0x64
0041868A  99                        CDQ
0041868B  33 C2                     XOR EAX,EDX
0041868D  83 C1 64                  ADD ECX,0x64
00418690  2B C2                     SUB EAX,EDX
00418692  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00418695  0F BF 53 43               MOVSX EDX,word ptr [EBX + 0x43]
00418699  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0041869C  C6 45 EF 00               MOV byte ptr [EBP + -0x11],0x0
004186A0  0F BF C7                  MOVSX EAX,DI
004186A3  2B C2                     SUB EAX,EDX
004186A5  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
004186A9  99                        CDQ
004186AA  33 C2                     XOR EAX,EDX
004186AC  2B C2                     SUB EAX,EDX
004186AE  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
004186B2  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004186B5  0F BF C1                  MOVSX EAX,CX
004186B8  2B C2                     SUB EAX,EDX
004186BA  99                        CDQ
004186BB  33 C2                     XOR EAX,EDX
004186BD  2B C2                     SUB EAX,EDX
004186BF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004186C2  74 4C                     JZ 0x00418710
004186C4  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004186C7  85 C9                     TEST ECX,ECX
004186C9  74 22                     JZ 0x004186ed
004186CB  99                        CDQ
004186CC  F7 F9                     IDIV ECX
004186CE  83 F8 03                  CMP EAX,0x3
004186D1  7C 04                     JL 0x004186d7
004186D3  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_004186d7:
004186D7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_004186da:
004186DA  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004186DD  85 C9                     TEST ECX,ECX
004186DF  74 08                     JZ 0x004186e9
004186E1  99                        CDQ
004186E2  F7 F9                     IDIV ECX
004186E4  83 F8 03                  CMP EAX,0x3
004186E7  7C 0A                     JL 0x004186f3
LAB_004186e9:
004186E9  B0 01                     MOV AL,0x1
004186EB  EB 09                     JMP 0x004186f6
LAB_004186ed:
004186ED  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
004186F1  EB E7                     JMP 0x004186da
LAB_004186f3:
004186F3  8A 45 EF                  MOV AL,byte ptr [EBP + -0x11]
LAB_004186f6:
004186F6  80 7D FF 01               CMP byte ptr [EBP + -0x1],0x1
004186FA  75 0C                     JNZ 0x00418708
004186FC  3C 01                     CMP AL,0x1
004186FE  75 08                     JNZ 0x00418708
00418700  8A 43 62                  MOV AL,byte ptr [EBX + 0x62]
00418703  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
00418706  EB 0E                     JMP 0x00418716
LAB_00418708:
00418708  8A 4B 61                  MOV CL,byte ptr [EBX + 0x61]
0041870B  88 4D F0                  MOV byte ptr [EBP + -0x10],CL
0041870E  EB 06                     JMP 0x00418716
LAB_00418710:
00418710  8A 53 61                  MOV DL,byte ptr [EBX + 0x61]
00418713  88 55 F0                  MOV byte ptr [EBP + -0x10],DL
LAB_00418716:
00418716  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00418719  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0041871C  50                        PUSH EAX
0041871D  66 8B 43 45               MOV AX,word ptr [EBX + 0x45]
00418721  51                        PUSH ECX
00418722  57                        PUSH EDI
00418723  56                        PUSH ESI
00418724  50                        PUSH EAX
00418725  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
00418729  8B CB                     MOV ECX,EBX
0041872B  50                        PUSH EAX
0041872C  66 8B 43 41               MOV AX,word ptr [EBX + 0x41]
00418730  50                        PUSH EAX
00418731  E8 1F 9D FE FF            CALL 0x00402455
00418736  85 C0                     TEST EAX,EAX
00418738  75 62                     JNZ 0x0041879c
0041873A  66 83 BB 8C 00 00 00 01   CMP word ptr [EBX + 0x8c],0x1
00418742  74 41                     JZ 0x00418785
00418744  66 8B 43 41               MOV AX,word ptr [EBX + 0x41]
00418748  66 3B C6                  CMP AX,SI
0041874B  75 06                     JNZ 0x00418753
0041874D  66 39 7B 43               CMP word ptr [EBX + 0x43],DI
00418751  74 32                     JZ 0x00418785
LAB_00418753:
00418753  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00418756  8B 13                     MOV EDX,dword ptr [EBX]
00418758  51                        PUSH ECX
00418759  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
0041875D  57                        PUSH EDI
0041875E  56                        PUSH ESI
0041875F  51                        PUSH ECX
00418760  66 8B 4B 43               MOV CX,word ptr [EBX + 0x43]
00418764  51                        PUSH ECX
00418765  50                        PUSH EAX
00418766  8B CB                     MOV ECX,EBX
00418768  FF 52 10                  CALL dword ptr [EDX + 0x10]
0041876B  50                        PUSH EAX
0041876C  8B CB                     MOV ECX,EBX
0041876E  E8 3F A9 FE FF            CALL 0x004030b2
00418773  66 8B 4B 6C               MOV CX,word ptr [EBX + 0x6c]
00418777  66 3B C1                  CMP AX,CX
0041877A  74 09                     JZ 0x00418785
0041877C  50                        PUSH EAX
0041877D  51                        PUSH ECX
0041877E  8B CB                     MOV ECX,EBX
00418780  E8 64 9A FE FF            CALL 0x004021e9
LAB_00418785:
00418785  33 C0                     XOR EAX,EAX
00418787  5F                        POP EDI
00418788  5E                        POP ESI
00418789  5B                        POP EBX
0041878A  8B E5                     MOV ESP,EBP
0041878C  5D                        POP EBP
0041878D  C2 0C 00                  RET 0xc
LAB_00418790:
00418790  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
00418796  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0041879c:
0041879C  5F                        POP EDI
0041879D  5E                        POP ESI
0041879E  83 C8 FF                  OR EAX,0xffffffff
004187A1  5B                        POP EBX
004187A2  8B E5                     MOV ESP,EBP
004187A4  5D                        POP EBP
004187A5  C2 0C 00                  RET 0xc
