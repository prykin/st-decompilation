FUN_00645880:
00645880  55                        PUSH EBP
00645881  8B EC                     MOV EBP,ESP
00645883  81 EC C0 00 00 00         SUB ESP,0xc0
00645889  53                        PUSH EBX
0064588A  56                        PUSH ESI
0064588B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064588E  57                        PUSH EDI
0064588F  B9 16 00 00 00            MOV ECX,0x16
00645894  33 C0                     XOR EAX,EAX
00645896  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00645899  8D 7D A8                  LEA EDI,[EBP + -0x58]
0064589C  F3 AB                     STOSD.REP ES:EDI
0064589E  8D 82 6A FF FF FF         LEA EAX,[EDX + 0xffffff6a]
006458A4  83 F8 29                  CMP EAX,0x29
006458A7  0F 87 3E 03 00 00         JA 0x00645beb
006458AD  33 C9                     XOR ECX,ECX
006458AF  8A 88 08 5C 64 00         MOV CL,byte ptr [EAX + 0x645c08]
switchD_006458b5::switchD:
006458B5  FF 24 8D F4 5B 64 00      JMP dword ptr [ECX*0x4 + 0x645bf4]
switchD_006458b5::caseD_96:
006458BC  8A 16                     MOV DL,byte ptr [ESI]
006458BE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006458C4  52                        PUSH EDX
006458C5  E8 ED F0 DB FF            CALL 0x004049b7
006458CA  25 FF 00 00 00            AND EAX,0xff
006458CF  BB 01 00 00 00            MOV EBX,0x1
006458D4  48                        DEC EAX
006458D5  74 4E                     JZ 0x00645925
006458D7  48                        DEC EAX
006458D8  74 1E                     JZ 0x006458f8
006458DA  48                        DEC EAX
006458DB  75 76                     JNZ 0x00645953
006458DD  8B 06                     MOV EAX,dword ptr [ESI]
006458DF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006458E5  6A 4B                     PUSH 0x4b
006458E7  50                        PUSH EAX
006458E8  E8 7E BF DB FF            CALL 0x0040186b
006458ED  85 C0                     TEST EAX,EAX
006458EF  7F 5F                     JG 0x00645950
006458F1  8B 0E                     MOV ECX,dword ptr [ESI]
006458F3  6A 4C                     PUSH 0x4c
006458F5  51                        PUSH ECX
006458F6  EB 1C                     JMP 0x00645914
LAB_006458f8:
006458F8  8B 16                     MOV EDX,dword ptr [ESI]
006458FA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645900  68 91 00 00 00            PUSH 0x91
00645905  52                        PUSH EDX
00645906  E8 60 BF DB FF            CALL 0x0040186b
0064590B  85 C0                     TEST EAX,EAX
0064590D  7F 41                     JG 0x00645950
0064590F  8B 06                     MOV EAX,dword ptr [ESI]
00645911  6A 41                     PUSH 0x41
00645913  50                        PUSH EAX
LAB_00645914:
00645914  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064591A  E8 4C BF DB FF            CALL 0x0040186b
0064591F  85 C0                     TEST EAX,EAX
00645921  7E 30                     JLE 0x00645953
00645923  EB 2B                     JMP 0x00645950
LAB_00645925:
00645925  8B 0E                     MOV ECX,dword ptr [ESI]
00645927  6A 3C                     PUSH 0x3c
00645929  51                        PUSH ECX
0064592A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645930  E8 36 BF DB FF            CALL 0x0040186b
00645935  85 C0                     TEST EAX,EAX
00645937  7F 17                     JG 0x00645950
00645939  8B 16                     MOV EDX,dword ptr [ESI]
0064593B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00645941  68 9A 00 00 00            PUSH 0x9a
00645946  52                        PUSH EDX
00645947  E8 1F BF DB FF            CALL 0x0040186b
0064594C  85 C0                     TEST EAX,EAX
0064594E  7E 03                     JLE 0x00645953
LAB_00645950:
00645950  88 5D FE                  MOV byte ptr [EBP + -0x2],BL
LAB_00645953:
00645953  66 8B 4E 08               MOV CX,word ptr [ESI + 0x8]
00645957  66 8B 56 0A               MOV DX,word ptr [ESI + 0xa]
0064595B  66 89 4D BC               MOV word ptr [EBP + -0x44],CX
0064595F  66 8B 4E 0C               MOV CX,word ptr [ESI + 0xc]
00645963  8B 06                     MOV EAX,dword ptr [ESI]
00645965  66 89 4D C0               MOV word ptr [EBP + -0x40],CX
00645969  66 8B 4E 10               MOV CX,word ptr [ESI + 0x10]
0064596D  66 89 55 BE               MOV word ptr [EBP + -0x42],DX
00645971  66 8B 56 0E               MOV DX,word ptr [ESI + 0xe]
00645975  66 89 4D C4               MOV word ptr [EBP + -0x3c],CX
00645979  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
0064597D  66 89 55 C2               MOV word ptr [EBP + -0x3e],DX
00645981  66 8B 56 12               MOV DX,word ptr [ESI + 0x12]
00645985  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
00645989  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
0064598D  66 89 55 C6               MOV word ptr [EBP + -0x3a],DX
00645991  66 8B 56 16               MOV DX,word ptr [ESI + 0x16]
00645995  66 89 4D CC               MOV word ptr [EBP + -0x34],CX
00645999  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064599F  50                        PUSH EAX
006459A0  C7 45 A8 28 00 00 00      MOV dword ptr [EBP + -0x58],0x28
006459A7  89 5D B4                  MOV dword ptr [EBP + -0x4c],EBX
006459AA  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
006459AD  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006459B0  66 89 55 CA               MOV word ptr [EBP + -0x36],DX
006459B4  E8 FE EF DB FF            CALL 0x004049b7
006459B9  25 FF 00 00 00            AND EAX,0xff
006459BE  48                        DEC EAX
006459BF  74 0C                     JZ 0x006459cd
006459C1  48                        DEC EAX
006459C2  75 1B                     JNZ 0x006459df
006459C4  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006459C7  8B 06                     MOV EAX,dword ptr [ESI]
006459C9  52                        PUSH EDX
006459CA  50                        PUSH EAX
006459CB  EB 07                     JMP 0x006459d4
LAB_006459cd:
006459CD  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006459D0  8B 16                     MOV EDX,dword ptr [ESI]
006459D2  51                        PUSH ECX
006459D3  52                        PUSH EDX
LAB_006459d4:
006459D4  E8 51 C3 DB FF            CALL 0x00401d2a
006459D9  83 C4 08                  ADD ESP,0x8
006459DC  88 45 D4                  MOV byte ptr [EBP + -0x2c],AL
LAB_006459df:
006459DF  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006459E2  66 8B 4E 20               MOV CX,word ptr [ESI + 0x20]
006459E6  8B 56 22                  MOV EDX,dword ptr [ESI + 0x22]
006459E9  89 45 D5                  MOV dword ptr [EBP + -0x2b],EAX
006459EC  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006459EF  66 89 4D D9               MOV word ptr [EBP + -0x27],CX
006459F3  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
006459F7  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006459FA  66 89 4D CE               MOV word ptr [EBP + -0x32],CX
006459FE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00645A04  8D 45 A8                  LEA EAX,[EBP + -0x58]
00645A07  6A 00                     PUSH 0x0
00645A09  50                        PUSH EAX
00645A0A  89 55 DB                  MOV dword ptr [EBP + -0x25],EDX
00645A0D  8B 11                     MOV EDX,dword ptr [ECX]
00645A0F  6A 00                     PUSH 0x0
00645A11  6A 00                     PUSH 0x0
00645A13  68 06 01 00 00            PUSH 0x106
00645A18  FF 52 08                  CALL dword ptr [EDX + 0x8]
00645A1B  5F                        POP EDI
00645A1C  5E                        POP ESI
00645A1D  5B                        POP EBX
00645A1E  8B E5                     MOV ESP,EBP
00645A20  5D                        POP EBP
00645A21  C3                        RET
switchD_006458b5::caseD_a9:
00645A22  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
00645A26  8B 0E                     MOV ECX,dword ptr [ESI]
00645A28  66 8B 56 14               MOV DX,word ptr [ESI + 0x14]
00645A2C  66 89 85 56 FF FF FF      MOV word ptr [EBP + 0xffffff56],AX
00645A33  66 8B 46 20               MOV AX,word ptr [ESI + 0x20]
00645A37  89 8D 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],ECX
00645A3D  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
00645A41  66 89 85 5E FF FF FF      MOV word ptr [EBP + 0xffffff5e],AX
00645A48  66 89 95 54 FF FF FF      MOV word ptr [EBP + 0xffffff54],DX
00645A4F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00645A52  66 89 8D 58 FF FF FF      MOV word ptr [EBP + 0xffffff58],CX
00645A59  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00645A5F  8D 85 40 FF FF FF         LEA EAX,[EBP + 0xffffff40]
00645A65  BB 01 00 00 00            MOV EBX,0x1
00645A6A  6A 00                     PUSH 0x0
00645A6C  50                        PUSH EAX
00645A6D  C7 85 40 FF FF FF 82 00 00 00  MOV dword ptr [EBP + 0xffffff40],0x82
00645A77  89 9D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EBX
00645A7D  89 9D 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EBX
00645A83  89 95 5A FF FF FF         MOV dword ptr [EBP + 0xffffff5a],EDX
00645A89  C7 85 60 FF FF FF 05 00 00 00  MOV dword ptr [EBP + 0xffffff60],0x5
00645A93  C7 85 64 FF FF FF 32 00 00 00  MOV dword ptr [EBP + 0xffffff64],0x32
00645A9D  8B 11                     MOV EDX,dword ptr [ECX]
00645A9F  6A 00                     PUSH 0x0
00645AA1  6A 00                     PUSH 0x0
00645AA3  68 0A 01 00 00            PUSH 0x10a
00645AA8  FF 52 08                  CALL dword ptr [EDX + 0x8]
00645AAB  5F                        POP EDI
00645AAC  5E                        POP ESI
00645AAD  5B                        POP EBX
00645AAE  8B E5                     MOV ESP,EBP
00645AB0  5D                        POP EBP
00645AB1  C3                        RET
switchD_006458b5::caseD_b0:
00645AB2  B9 16 00 00 00            MOV ECX,0x16
00645AB7  33 C0                     XOR EAX,EAX
00645AB9  8D 7D A8                  LEA EDI,[EBP + -0x58]
00645ABC  BB 01 00 00 00            MOV EBX,0x1
00645AC1  F3 AB                     STOSD.REP ES:EDI
00645AC3  8B 0E                     MOV ECX,dword ptr [ESI]
00645AC5  66 8B 46 08               MOV AX,word ptr [ESI + 0x8]
00645AC9  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
00645ACC  66 8B 4E 0A               MOV CX,word ptr [ESI + 0xa]
00645AD0  66 89 4D BE               MOV word ptr [EBP + -0x42],CX
00645AD4  66 8B 4E 0E               MOV CX,word ptr [ESI + 0xe]
00645AD8  66 89 4D C2               MOV word ptr [EBP + -0x3e],CX
00645ADC  66 8B 4E 12               MOV CX,word ptr [ESI + 0x12]
00645AE0  66 89 45 BC               MOV word ptr [EBP + -0x44],AX
00645AE4  66 8B 46 0C               MOV AX,word ptr [ESI + 0xc]
00645AE8  66 89 4D C6               MOV word ptr [EBP + -0x3a],CX
00645AEC  66 8B 4E 16               MOV CX,word ptr [ESI + 0x16]
00645AF0  66 89 45 C0               MOV word ptr [EBP + -0x40],AX
00645AF4  66 8B 46 10               MOV AX,word ptr [ESI + 0x10]
00645AF8  66 89 4D CA               MOV word ptr [EBP + -0x36],CX
00645AFC  33 C9                     XOR ECX,ECX
00645AFE  81 FA B0 00 00 00         CMP EDX,0xb0
00645B04  66 8B 56 1A               MOV DX,word ptr [ESI + 0x1a]
00645B08  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
00645B0C  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
00645B10  0F 95 C1                  SETNZ CL
00645B13  66 89 55 CE               MOV word ptr [EBP + -0x32],DX
00645B17  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
00645B1B  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
00645B1F  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00645B22  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00645B28  8D 55 A8                  LEA EDX,[EBP + -0x58]
00645B2B  6A 00                     PUSH 0x0
00645B2D  52                        PUSH EDX
00645B2E  C7 45 A8 5E 01 00 00      MOV dword ptr [EBP + -0x58],0x15e
00645B35  89 5D B4                  MOV dword ptr [EBP + -0x4c],EBX
00645B38  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
00645B3B  66 89 45 CC               MOV word ptr [EBP + -0x34],AX
00645B3F  8B 01                     MOV EAX,dword ptr [ECX]
00645B41  6A 00                     PUSH 0x0
00645B43  6A 00                     PUSH 0x0
00645B45  68 47 01 00 00            PUSH 0x147
00645B4A  FF 50 08                  CALL dword ptr [EAX + 0x8]
00645B4D  5F                        POP EDI
00645B4E  5E                        POP ESI
00645B4F  5B                        POP EBX
00645B50  8B E5                     MOV ESP,EBP
00645B52  5D                        POP EBP
00645B53  C3                        RET
switchD_006458b5::caseD_b5:
00645B54  B9 0E 00 00 00            MOV ECX,0xe
00645B59  33 C0                     XOR EAX,EAX
00645B5B  8D BD 6C FF FF FF         LEA EDI,[EBP + 0xffffff6c]
00645B61  66 8B 56 20               MOV DX,word ptr [ESI + 0x20]
00645B65  F3 AB                     STOSD.REP ES:EDI
00645B67  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00645B6A  BB 01 00 00 00            MOV EBX,0x1
00645B6F  66 AB                     STOSW ES:EDI
00645B71  8B 06                     MOV EAX,dword ptr [ESI]
00645B73  66 89 55 A4               MOV word ptr [EBP + -0x5c],DX
00645B77  0F BF 56 12               MOVSX EDX,word ptr [ESI + 0x12]
00645B7B  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00645B7E  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
00645B84  0F BF 4E 10               MOVSX ECX,word ptr [ESI + 0x10]
00645B88  0F BF 46 0E               MOVSX EAX,word ptr [ESI + 0xe]
00645B8C  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
00645B8F  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
00645B92  0F BF 56 18               MOVSX EDX,word ptr [ESI + 0x18]
00645B96  0F BF 4E 16               MOVSX ECX,word ptr [ESI + 0x16]
00645B9A  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
00645B9D  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
00645BA0  0F BF 46 14               MOVSX EAX,word ptr [ESI + 0x14]
00645BA4  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
00645BA7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00645BAD  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
00645BB3  6A 00                     PUSH 0x0
00645BB5  52                        PUSH EDX
00645BB6  C7 85 6C FF FF FF 7C 01 00 00  MOV dword ptr [EBP + 0xffffff6c],0x17c
00645BC0  89 9D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EBX
00645BC6  89 9D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EBX
00645BCC  C7 45 9C 2C 01 00 00      MOV dword ptr [EBP + -0x64],0x12c
00645BD3  C7 45 98 04 00 00 00      MOV dword ptr [EBP + -0x68],0x4
00645BDA  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00645BDD  8B 01                     MOV EAX,dword ptr [ECX]
00645BDF  6A 00                     PUSH 0x0
00645BE1  6A 00                     PUSH 0x0
00645BE3  68 50 01 00 00            PUSH 0x150
00645BE8  FF 50 08                  CALL dword ptr [EAX + 0x8]
switchD_006458b5::caseD_a5:
00645BEB  5F                        POP EDI
00645BEC  5E                        POP ESI
00645BED  5B                        POP EBX
00645BEE  8B E5                     MOV ESP,EBP
00645BF0  5D                        POP EBP
00645BF1  C3                        RET
