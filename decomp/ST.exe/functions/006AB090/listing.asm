FUN_006ab090:
006AB090  55                        PUSH EBP
006AB091  8B EC                     MOV EBP,ESP
006AB093  83 EC 5C                  SUB ESP,0x5c
006AB096  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB099  53                        PUSH EBX
006AB09A  8B C2                     MOV EAX,EDX
006AB09C  56                        PUSH ESI
006AB09D  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006AB0A1  8B C8                     MOV ECX,EAX
006AB0A3  8B F2                     MOV ESI,EDX
006AB0A5  0F AF 4D 20               IMUL ECX,dword ptr [EBP + 0x20]
006AB0A9  0F AF 75 1C               IMUL ESI,dword ptr [EBP + 0x1c]
006AB0AD  57                        PUSH EDI
006AB0AE  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006AB0B1  03 F9                     ADD EDI,ECX
006AB0B3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AB0B6  03 F7                     ADD ESI,EDI
006AB0B8  33 DB                     XOR EBX,EBX
006AB0BA  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
006AB0BD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006AB0C0  66 C7 04 71 01 00         MOV word ptr [ECX + ESI*0x2],0x1
006AB0C6  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006AB0C9  39 75 18                  CMP dword ptr [EBP + 0x18],ESI
006AB0CC  75 1F                     JNZ 0x006ab0ed
006AB0CE  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AB0D1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006AB0D4  3B F9                     CMP EDI,ECX
006AB0D6  75 15                     JNZ 0x006ab0ed
006AB0D8  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006AB0DB  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006AB0DE  3B F9                     CMP EDI,ECX
006AB0E0  75 0B                     JNZ 0x006ab0ed
006AB0E2  5F                        POP EDI
006AB0E3  5E                        POP ESI
006AB0E4  33 C0                     XOR EAX,EAX
006AB0E6  5B                        POP EBX
006AB0E7  8B E5                     MOV ESP,EBP
006AB0E9  5D                        POP EBP
006AB0EA  C2 28 00                  RET 0x28
LAB_006ab0ed:
006AB0ED  3B F3                     CMP ESI,EBX
006AB0EF  89 5D A4                  MOV dword ptr [EBP + -0x5c],EBX
006AB0F2  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
006AB0F5  0F 8C A7 00 00 00         JL 0x006ab1a2
006AB0FB  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006AB0FE  3B FB                     CMP EDI,EBX
006AB100  0F 8C 9C 00 00 00         JL 0x006ab1a2
006AB106  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006AB109  3B CB                     CMP ECX,EBX
006AB10B  0F 8C 91 00 00 00         JL 0x006ab1a2
006AB111  8B D8                     MOV EBX,EAX
006AB113  0F AF D9                  IMUL EBX,ECX
006AB116  8B CA                     MOV ECX,EDX
006AB118  0F AF CF                  IMUL ECX,EDI
006AB11B  8B FE                     MOV EDI,ESI
006AB11D  03 FB                     ADD EDI,EBX
006AB11F  33 DB                     XOR EBX,EBX
006AB121  03 CF                     ADD ECX,EDI
006AB123  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006AB126  8D 0C 4F                  LEA ECX,[EDI + ECX*0x2]
006AB129  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006AB12C  0F BF 39                  MOVSX EDI,word ptr [ECX]
006AB12F  3B FB                     CMP EDI,EBX
006AB131  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
006AB134  74 6F                     JZ 0x006ab1a5
006AB136  3B F3                     CMP ESI,EBX
006AB138  66 89 19                  MOV word ptr [ECX],BX
006AB13B  7E 06                     JLE 0x006ab143
006AB13D  66 39 59 FE               CMP word ptr [ECX + -0x2],BX
006AB141  74 51                     JZ 0x006ab194
LAB_006ab143:
006AB143  8D 7A FF                  LEA EDI,[EDX + -0x1]
006AB146  3B F7                     CMP ESI,EDI
006AB148  7D 06                     JGE 0x006ab150
006AB14A  66 39 59 02               CMP word ptr [ECX + 0x2],BX
006AB14E  74 44                     JZ 0x006ab194
LAB_006ab150:
006AB150  39 5D 28                  CMP dword ptr [EBP + 0x28],EBX
006AB153  7E 0C                     JLE 0x006ab161
006AB155  8D 34 12                  LEA ESI,[EDX + EDX*0x1]
006AB158  8B F9                     MOV EDI,ECX
006AB15A  2B FE                     SUB EDI,ESI
006AB15C  66 39 1F                  CMP word ptr [EDI],BX
006AB15F  74 33                     JZ 0x006ab194
LAB_006ab161:
006AB161  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006AB164  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006AB167  4E                        DEC ESI
006AB168  3B FE                     CMP EDI,ESI
006AB16A  7D 06                     JGE 0x006ab172
006AB16C  66 39 1C 51               CMP word ptr [ECX + EDX*0x2],BX
006AB170  74 22                     JZ 0x006ab194
LAB_006ab172:
006AB172  39 5D 2C                  CMP dword ptr [EBP + 0x2c],EBX
006AB175  7E 0C                     JLE 0x006ab183
006AB177  8D 34 00                  LEA ESI,[EAX + EAX*0x1]
006AB17A  8B F9                     MOV EDI,ECX
006AB17C  2B FE                     SUB EDI,ESI
006AB17E  66 39 1F                  CMP word ptr [EDI],BX
006AB181  74 11                     JZ 0x006ab194
LAB_006ab183:
006AB183  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006AB186  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006AB189  4E                        DEC ESI
006AB18A  3B FE                     CMP EDI,ESI
006AB18C  7D 0B                     JGE 0x006ab199
006AB18E  66 39 1C 41               CMP word ptr [ECX + EAX*0x2],BX
006AB192  75 05                     JNZ 0x006ab199
LAB_006ab194:
006AB194  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
006AB197  EB 0C                     JMP 0x006ab1a5
LAB_006ab199:
006AB199  C7 45 C8 01 00 00 00      MOV dword ptr [EBP + -0x38],0x1
006AB1A0  EB 03                     JMP 0x006ab1a5
LAB_006ab1a2:
006AB1A2  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
LAB_006ab1a5:
006AB1A5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AB1A8  8D 34 02                  LEA ESI,[EDX + EAX*0x1]
006AB1AB  0F AF 75 14               IMUL ESI,dword ptr [EBP + 0x14]
006AB1AF  D1 E6                     SHL ESI,0x1
006AB1B1  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
006AB1B4  8D 0C F5 00 00 00 00      LEA ECX,[ESI*0x8 + 0x0]
006AB1BB  51                        PUSH ECX
006AB1BC  E8 AF 49 01 00            CALL 0x006bfb70
006AB1C1  3B C3                     CMP EAX,EBX
006AB1C3  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006AB1C6  0F 84 74 1A 00 00         JZ 0x006acc40
006AB1CC  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
006AB1CF  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AB1D2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006AB1D5  8D 04 B0                  LEA EAX,[EAX + ESI*0x4]
006AB1D8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006AB1DB  C7 45 C0 01 00 00 00      MOV dword ptr [EBP + -0x40],0x1
006AB1E2  88 10                     MOV byte ptr [EAX],DL
006AB1E4  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB1E7  88 48 01                  MOV byte ptr [EAX + 0x1],CL
006AB1EA  88 50 02                  MOV byte ptr [EAX + 0x2],DL
006AB1ED  89 5D AC                  MOV dword ptr [EBP + -0x54],EBX
006AB1F0  C7 45 A8 02 00 00 00      MOV dword ptr [EBP + -0x58],0x2
LAB_006ab1f7:
006AB1F7  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006AB1FA  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006AB1FD  3B C3                     CMP EAX,EBX
006AB1FF  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
006AB202  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
006AB205  0F 8E 3C 1A 00 00         JLE 0x006acc47
LAB_006ab20b:
006AB20B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006AB20E  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
006AB211  33 DB                     XOR EBX,EBX
006AB213  33 C9                     XOR ECX,ECX
006AB215  8A 1C BA                  MOV BL,byte ptr [EDX + EDI*0x4]
006AB218  8A 4C BA 01               MOV CL,byte ptr [EDX + EDI*0x4 + 0x1]
006AB21C  33 C0                     XOR EAX,EAX
006AB21E  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006AB221  8A 44 BA 02               MOV AL,byte ptr [EDX + EDI*0x4 + 0x2]
006AB225  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AB228  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006AB22B  0F AF D0                  IMUL EDX,EAX
006AB22E  8B C1                     MOV EAX,ECX
006AB230  8B FB                     MOV EDI,EBX
006AB232  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006AB236  03 FA                     ADD EDI,EDX
006AB238  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006AB23B  03 C7                     ADD EAX,EDI
006AB23D  0F BF 3C 42               MOVSX EDI,word ptr [EDX + EAX*0x2]
006AB241  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006AB244  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AB247  83 C2 1A                  ADD EDX,0x1a
006AB24A  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006AB24D  3B 55 D0                  CMP EDX,dword ptr [EBP + -0x30]
006AB250  0F 8E 8A 00 00 00         JLE 0x006ab2e0
006AB256  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006AB259  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006AB25C  05 80 00 00 00            ADD EAX,0x80
006AB261  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006AB264  C1 E0 03                  SHL EAX,0x3
006AB267  50                        PUSH EAX
006AB268  51                        PUSH ECX
006AB269  E8 E2 48 01 00            CALL 0x006bfb50
006AB26E  85 C0                     TEST EAX,EAX
006AB270  0F 84 CA 19 00 00         JZ 0x006acc40
006AB276  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AB279  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006AB27C  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006AB27F  2B CA                     SUB ECX,EDX
006AB281  2B F2                     SUB ESI,EDX
006AB283  C1 F9 02                  SAR ECX,0x2
006AB286  C1 FE 02                  SAR ESI,0x2
006AB289  8D 0C 88                  LEA ECX,[EAX + ECX*0x4]
006AB28C  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
006AB28F  3B C8                     CMP ECX,EAX
006AB291  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006AB294  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006AB297  75 0D                     JNZ 0x006ab2a6
006AB299  8B CA                     MOV ECX,EDX
006AB29B  81 C1 00 02 00 00         ADD ECX,0x200
006AB2A1  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006AB2A4  EB 09                     JMP 0x006ab2af
LAB_006ab2a6:
006AB2A6  81 C1 00 02 00 00         ADD ECX,0x200
006AB2AC  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_006ab2af:
006AB2AF  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AB2B2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AB2B5  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006AB2B8  8D 34 91                  LEA ESI,[ECX + EDX*0x4]
006AB2BB  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AB2BE  8D 14 8D 00 FE FF FF      LEA EDX,[ECX*0x4 + 0xfffffe00]
006AB2C5  52                        PUSH EDX
006AB2C6  8D 94 88 00 FE FF FF      LEA EDX,[EAX + ECX*0x4 + 0xfffffe00]
006AB2CD  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
006AB2D0  52                        PUSH EDX
006AB2D1  50                        PUSH EAX
006AB2D2  E8 99 27 08 00            CALL 0x0072da70
006AB2D7  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006AB2DA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AB2DD  83 C4 0C                  ADD ESP,0xc
LAB_006ab2e0:
006AB2E0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB2E3  C7 45 F0 FF 00 00 00      MOV dword ptr [EBP + -0x10],0xff
006AB2EA  4A                        DEC EDX
006AB2EB  3B DA                     CMP EBX,EDX
006AB2ED  7D 07                     JGE 0x006ab2f6
006AB2EF  C7 45 F0 FE 00 00 00      MOV dword ptr [EBP + -0x10],0xfe
LAB_006ab2f6:
006AB2F6  85 DB                     TEST EBX,EBX
006AB2F8  7E 04                     JLE 0x006ab2fe
006AB2FA  83 65 F0 EF               AND dword ptr [EBP + -0x10],0xffffffef
LAB_006ab2fe:
006AB2FE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AB301  4A                        DEC EDX
006AB302  3B CA                     CMP ECX,EDX
006AB304  7D 04                     JGE 0x006ab30a
006AB306  83 65 F0 FD               AND dword ptr [EBP + -0x10],0xfffffffd
LAB_006ab30a:
006AB30A  85 C9                     TEST ECX,ECX
006AB30C  7E 04                     JLE 0x006ab312
006AB30E  83 65 F0 DF               AND dword ptr [EBP + -0x10],0xffffffdf
LAB_006ab312:
006AB312  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006AB315  8D 51 FF                  LEA EDX,[ECX + -0x1]
006AB318  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AB31B  3B CA                     CMP ECX,EDX
006AB31D  7D 04                     JGE 0x006ab323
006AB31F  83 65 F0 FB               AND dword ptr [EBP + -0x10],0xfffffffb
LAB_006ab323:
006AB323  85 C9                     TEST ECX,ECX
006AB325  7E 04                     JLE 0x006ab32b
006AB327  83 65 F0 BF               AND dword ptr [EBP + -0x10],0xffffffbf
LAB_006ab32b:
006AB32B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AB32E  F6 C1 33                  TEST CL,0x33
006AB331  0F 85 AB 0B 00 00         JNZ 0x006abee2
006AB337  66 8B 48 FE               MOV CX,word ptr [EAX + -0x2]
006AB33B  66 85 C9                  TEST CX,CX
006AB33E  74 0A                     JZ 0x006ab34a
006AB340  0F BF D1                  MOVSX EDX,CX
006AB343  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AB346  3B D1                     CMP EDX,ECX
006AB348  7E 23                     JLE 0x006ab36d
LAB_006ab34a:
006AB34A  8A D3                     MOV DL,BL
006AB34C  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AB34F  FE CA                     DEC DL
006AB351  66 89 48 FE               MOV word ptr [EAX + -0x2],CX
006AB355  88 16                     MOV byte ptr [ESI],DL
006AB357  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB35A  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006AB35D  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB360  88 56 02                  MOV byte ptr [ESI + 0x2],DL
006AB363  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AB366  83 C6 04                  ADD ESI,0x4
006AB369  42                        INC EDX
006AB36A  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ab36d:
006AB36D  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AB371  66 85 D2                  TEST DX,DX
006AB374  74 07                     JZ 0x006ab37d
006AB376  0F BF D2                  MOVSX EDX,DX
006AB379  3B D1                     CMP EDX,ECX
006AB37B  7E 20                     JLE 0x006ab39d
LAB_006ab37d:
006AB37D  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB380  66 89 48 02               MOV word ptr [EAX + 0x2],CX
006AB384  8A CB                     MOV CL,BL
006AB386  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006AB389  FE C1                     INC CL
006AB38B  88 0E                     MOV byte ptr [ESI],CL
006AB38D  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AB390  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006AB393  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB396  83 C6 04                  ADD ESI,0x4
006AB399  41                        INC ECX
006AB39A  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab39d:
006AB39D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB3A0  8B C8                     MOV ECX,EAX
006AB3A2  03 D2                     ADD EDX,EDX
006AB3A4  2B CA                     SUB ECX,EDX
006AB3A6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006AB3A9  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006AB3AC  66 8B 11                  MOV DX,word ptr [ECX]
006AB3AF  66 85 D2                  TEST DX,DX
006AB3B2  74 0D                     JZ 0x006ab3c1
006AB3B4  0F BF D2                  MOVSX EDX,DX
006AB3B7  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AB3BA  3B D1                     CMP EDX,ECX
006AB3BC  7E 24                     JLE 0x006ab3e2
006AB3BE  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_006ab3c1:
006AB3C1  8D 57 03                  LEA EDX,[EDI + 0x3]
006AB3C4  83 C6 04                  ADD ESI,0x4
006AB3C7  66 89 11                  MOV word ptr [ECX],DX
006AB3CA  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AB3CD  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB3D0  FE C9                     DEC CL
006AB3D2  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AB3D5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB3D8  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AB3DB  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB3DE  41                        INC ECX
006AB3DF  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab3e2:
006AB3E2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AB3E5  66 8B 0C 01               MOV CX,word ptr [ECX + EAX*0x1]
006AB3E9  66 85 C9                  TEST CX,CX
006AB3EC  74 0A                     JZ 0x006ab3f8
006AB3EE  0F BF D1                  MOVSX EDX,CX
006AB3F1  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AB3F4  3B D1                     CMP EDX,ECX
006AB3F6  7E 25                     JLE 0x006ab41d
LAB_006ab3f8:
006AB3F8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AB3FB  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AB3FE  83 C6 04                  ADD ESI,0x4
006AB401  66 89 0C 02               MOV word ptr [EDX + EAX*0x1],CX
006AB405  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AB408  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB40B  FE C1                     INC CL
006AB40D  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AB410  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB413  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AB416  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB419  41                        INC ECX
006AB41A  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab41d:
006AB41D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AB420  83 E1 40                  AND ECX,0x40
006AB423  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006AB426  75 43                     JNZ 0x006ab46b
006AB428  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AB42B  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006AB42E  8B C8                     MOV ECX,EAX
006AB430  2B CA                     SUB ECX,EDX
006AB432  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006AB435  66 8B 11                  MOV DX,word ptr [ECX]
006AB438  66 85 D2                  TEST DX,DX
006AB43B  74 0D                     JZ 0x006ab44a
006AB43D  0F BF D2                  MOVSX EDX,DX
006AB440  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AB443  3B D1                     CMP EDX,ECX
006AB445  7E 24                     JLE 0x006ab46b
006AB447  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006ab44a:
006AB44A  8D 57 03                  LEA EDX,[EDI + 0x3]
006AB44D  83 C6 04                  ADD ESI,0x4
006AB450  66 89 11                  MOV word ptr [ECX],DX
006AB453  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB456  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AB459  FE CA                     DEC DL
006AB45B  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AB45E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB461  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AB464  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB467  41                        INC ECX
006AB468  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab46b:
006AB46B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AB46E  83 E1 04                  AND ECX,0x4
006AB471  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006AB474  75 3B                     JNZ 0x006ab4b1
006AB476  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AB479  66 8B 0C 48               MOV CX,word ptr [EAX + ECX*0x2]
006AB47D  66 85 C9                  TEST CX,CX
006AB480  74 0A                     JZ 0x006ab48c
006AB482  0F BF D1                  MOVSX EDX,CX
006AB485  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AB488  3B D1                     CMP EDX,ECX
006AB48A  7E 25                     JLE 0x006ab4b1
LAB_006ab48c:
006AB48C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AB48F  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AB492  83 C6 04                  ADD ESI,0x4
006AB495  66 89 0C 50               MOV word ptr [EAX + EDX*0x2],CX
006AB499  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB49C  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AB49F  FE C2                     INC DL
006AB4A1  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AB4A4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB4A7  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AB4AA  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB4AD  41                        INC ECX
006AB4AE  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab4b1:
006AB4B1  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006AB4B4  85 C9                     TEST ECX,ECX
006AB4B6  0F 85 5E 01 00 00         JNZ 0x006ab61a
006AB4BC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AB4BF  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
006AB4C4  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
006AB4C7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006AB4CA  0F 8C 4A 01 00 00         JL 0x006ab61a
006AB4D0  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006AB4D4  66 85 D2                  TEST DX,DX
006AB4D7  74 0D                     JZ 0x006ab4e6
006AB4D9  0F BF D2                  MOVSX EDX,DX
006AB4DC  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB4DF  3B D1                     CMP EDX,ECX
006AB4E1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AB4E4  7E 38                     JLE 0x006ab51e
LAB_006ab4e6:
006AB4E6  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AB4EA  81 E2 00 C0 00 00         AND EDX,0xc000
006AB4F0  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB4F6  74 26                     JZ 0x006ab51e
006AB4F8  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB4FB  83 C6 04                  ADD ESI,0x4
006AB4FE  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
006AB502  8A D3                     MOV DL,BL
006AB504  FE CA                     DEC DL
006AB506  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AB509  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB50C  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AB50F  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB512  FE C2                     INC DL
006AB514  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB517  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AB51A  42                        INC EDX
006AB51B  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ab51e:
006AB51E  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AB522  66 85 D2                  TEST DX,DX
006AB525  74 0D                     JZ 0x006ab534
006AB527  0F BF D2                  MOVSX EDX,DX
006AB52A  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB52D  3B D1                     CMP EDX,ECX
006AB52F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AB532  7E 38                     JLE 0x006ab56c
LAB_006ab534:
006AB534  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AB538  81 E2 00 C0 00 00         AND EDX,0xc000
006AB53E  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB544  74 26                     JZ 0x006ab56c
006AB546  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB549  83 C6 04                  ADD ESI,0x4
006AB54C  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006AB550  8A D3                     MOV DL,BL
006AB552  FE C2                     INC DL
006AB554  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AB557  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB55A  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AB55D  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB560  FE C2                     INC DL
006AB562  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB565  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AB568  42                        INC EDX
006AB569  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ab56c:
006AB56C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB56F  03 D2                     ADD EDX,EDX
006AB571  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006AB574  66 8B 0C 0A               MOV CX,word ptr [EDX + ECX*0x1]
006AB578  66 85 C9                  TEST CX,CX
006AB57B  74 0D                     JZ 0x006ab58a
006AB57D  0F BF C9                  MOVSX ECX,CX
006AB580  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB583  3B CA                     CMP ECX,EDX
006AB585  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AB588  7E 3C                     JLE 0x006ab5c6
LAB_006ab58a:
006AB58A  66 8B 0C 02               MOV CX,word ptr [EDX + EAX*0x1]
006AB58E  81 E1 00 C0 00 00         AND ECX,0xc000
006AB594  81 F9 00 C0 00 00         CMP ECX,0xc000
006AB59A  74 2A                     JZ 0x006ab5c6
006AB59C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AB59F  8D 47 04                  LEA EAX,[EDI + 0x4]
006AB5A2  83 C6 04                  ADD ESI,0x4
006AB5A5  66 89 04 0A               MOV word ptr [EDX + ECX*0x1],AX
006AB5A9  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
006AB5AC  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AB5AF  FE C0                     INC AL
006AB5B1  FE C1                     INC CL
006AB5B3  88 46 FD                  MOV byte ptr [ESI + -0x3],AL
006AB5B6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AB5B9  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AB5BC  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AB5BF  40                        INC EAX
006AB5C0  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006AB5C3  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_006ab5c6:
006AB5C6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AB5C9  2B CA                     SUB ECX,EDX
006AB5CB  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AB5CE  66 8B 11                  MOV DX,word ptr [ECX]
006AB5D1  66 85 D2                  TEST DX,DX
006AB5D4  74 0D                     JZ 0x006ab5e3
006AB5D6  0F BF D2                  MOVSX EDX,DX
006AB5D9  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB5DC  3B D1                     CMP EDX,ECX
006AB5DE  7E 3A                     JLE 0x006ab61a
006AB5E0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_006ab5e3:
006AB5E3  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AB5E6  66 8B 12                  MOV DX,word ptr [EDX]
006AB5E9  81 E2 00 C0 00 00         AND EDX,0xc000
006AB5EF  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB5F5  74 23                     JZ 0x006ab61a
006AB5F7  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB5FA  83 C6 04                  ADD ESI,0x4
006AB5FD  66 89 11                  MOV word ptr [ECX],DX
006AB600  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AB603  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB606  FE C9                     DEC CL
006AB608  FE C2                     INC DL
006AB60A  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AB60D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB610  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AB613  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB616  41                        INC ECX
006AB617  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab61a:
006AB61A  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006AB61D  85 C9                     TEST ECX,ECX
006AB61F  0F 85 66 01 00 00         JNZ 0x006ab78b
006AB625  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AB628  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006AB62B  8B C8                     MOV ECX,EAX
006AB62D  2B CA                     SUB ECX,EDX
006AB62F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006AB632  66 83 39 00               CMP word ptr [ECX],0x0
006AB636  0F 8C 4F 01 00 00         JL 0x006ab78b
006AB63C  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006AB640  66 85 D2                  TEST DX,DX
006AB643  74 0D                     JZ 0x006ab652
006AB645  0F BF D2                  MOVSX EDX,DX
006AB648  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB64B  3B D1                     CMP EDX,ECX
006AB64D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AB650  7E 38                     JLE 0x006ab68a
LAB_006ab652:
006AB652  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AB656  81 E2 00 C0 00 00         AND EDX,0xc000
006AB65C  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB662  74 26                     JZ 0x006ab68a
006AB664  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB667  83 C6 04                  ADD ESI,0x4
006AB66A  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
006AB66E  8A D3                     MOV DL,BL
006AB670  FE CA                     DEC DL
006AB672  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AB675  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB678  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AB67B  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB67E  FE CA                     DEC DL
006AB680  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB683  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AB686  42                        INC EDX
006AB687  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ab68a:
006AB68A  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AB68E  66 85 D2                  TEST DX,DX
006AB691  74 0D                     JZ 0x006ab6a0
006AB693  0F BF D2                  MOVSX EDX,DX
006AB696  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB699  3B D1                     CMP EDX,ECX
006AB69B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AB69E  7E 38                     JLE 0x006ab6d8
LAB_006ab6a0:
006AB6A0  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AB6A4  81 E2 00 C0 00 00         AND EDX,0xc000
006AB6AA  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB6B0  74 26                     JZ 0x006ab6d8
006AB6B2  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB6B5  83 C6 04                  ADD ESI,0x4
006AB6B8  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006AB6BC  8A D3                     MOV DL,BL
006AB6BE  FE C2                     INC DL
006AB6C0  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AB6C3  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB6C6  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AB6C9  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB6CC  FE CA                     DEC DL
006AB6CE  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB6D1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AB6D4  42                        INC EDX
006AB6D5  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ab6d8:
006AB6D8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB6DB  03 D2                     ADD EDX,EDX
006AB6DD  2B CA                     SUB ECX,EDX
006AB6DF  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AB6E2  66 8B 11                  MOV DX,word ptr [ECX]
006AB6E5  66 85 D2                  TEST DX,DX
006AB6E8  74 0D                     JZ 0x006ab6f7
006AB6EA  0F BF D2                  MOVSX EDX,DX
006AB6ED  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB6F0  3B D1                     CMP EDX,ECX
006AB6F2  7E 3A                     JLE 0x006ab72e
006AB6F4  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_006ab6f7:
006AB6F7  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AB6FA  66 8B 12                  MOV DX,word ptr [EDX]
006AB6FD  81 E2 00 C0 00 00         AND EDX,0xc000
006AB703  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB709  74 23                     JZ 0x006ab72e
006AB70B  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB70E  83 C6 04                  ADD ESI,0x4
006AB711  66 89 11                  MOV word ptr [ECX],DX
006AB714  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AB717  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB71A  FE C9                     DEC CL
006AB71C  FE CA                     DEC DL
006AB71E  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AB721  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB724  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AB727  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB72A  41                        INC ECX
006AB72B  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab72e:
006AB72E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AB731  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AB734  03 C9                     ADD ECX,ECX
006AB736  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006AB73A  66 85 C9                  TEST CX,CX
006AB73D  74 0A                     JZ 0x006ab749
006AB73F  0F BF C9                  MOVSX ECX,CX
006AB742  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB745  3B CA                     CMP ECX,EDX
006AB747  7E 42                     JLE 0x006ab78b
LAB_006ab749:
006AB749  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB74C  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006AB74F  66 8B 14 01               MOV DX,word ptr [ECX + EAX*0x1]
006AB753  81 E2 00 C0 00 00         AND EDX,0xc000
006AB759  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB75F  74 2A                     JZ 0x006ab78b
006AB761  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AB764  8D 47 04                  LEA EAX,[EDI + 0x4]
006AB767  83 C6 04                  ADD ESI,0x4
006AB76A  66 89 04 11               MOV word ptr [ECX + EDX*0x1],AX
006AB76E  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
006AB771  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AB774  FE C0                     INC AL
006AB776  FE C9                     DEC CL
006AB778  88 46 FD                  MOV byte ptr [ESI + -0x3],AL
006AB77B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AB77E  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AB781  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AB784  40                        INC EAX
006AB785  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006AB788  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_006ab78b:
006AB78B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB78E  8B C8                     MOV ECX,EAX
006AB790  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006AB794  2B CA                     SUB ECX,EDX
006AB796  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006AB799  66 8B 11                  MOV DX,word ptr [ECX]
006AB79C  66 85 D2                  TEST DX,DX
006AB79F  74 0D                     JZ 0x006ab7ae
006AB7A1  0F BF D2                  MOVSX EDX,DX
006AB7A4  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB7A7  3B D1                     CMP EDX,ECX
006AB7A9  7E 4E                     JLE 0x006ab7f9
006AB7AB  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
LAB_006ab7ae:
006AB7AE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AB7B1  66 8B 12                  MOV DX,word ptr [EDX]
006AB7B4  81 E2 00 C0 00 00         AND EDX,0xc000
006AB7BA  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB7C0  74 37                     JZ 0x006ab7f9
006AB7C2  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AB7C6  81 E2 00 C0 00 00         AND EDX,0xc000
006AB7CC  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB7D2  74 25                     JZ 0x006ab7f9
006AB7D4  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB7D7  83 C6 04                  ADD ESI,0x4
006AB7DA  66 89 11                  MOV word ptr [ECX],DX
006AB7DD  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB7E0  8A CB                     MOV CL,BL
006AB7E2  FE C9                     DEC CL
006AB7E4  FE CA                     DEC DL
006AB7E6  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AB7E9  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AB7EC  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AB7EF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB7F2  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AB7F5  41                        INC ECX
006AB7F6  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab7f9:
006AB7F9  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AB7FC  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006AB800  66 85 C9                  TEST CX,CX
006AB803  74 0A                     JZ 0x006ab80f
006AB805  0F BF C9                  MOVSX ECX,CX
006AB808  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB80B  3B CA                     CMP ECX,EDX
006AB80D  7E 4C                     JLE 0x006ab85b
LAB_006ab80f:
006AB80F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AB812  66 8B 11                  MOV DX,word ptr [ECX]
006AB815  81 E2 00 C0 00 00         AND EDX,0xc000
006AB81B  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB821  74 38                     JZ 0x006ab85b
006AB823  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AB827  81 E2 00 C0 00 00         AND EDX,0xc000
006AB82D  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB833  74 26                     JZ 0x006ab85b
006AB835  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB838  83 C6 04                  ADD ESI,0x4
006AB83B  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006AB83F  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB842  8A CB                     MOV CL,BL
006AB844  FE C1                     INC CL
006AB846  FE CA                     DEC DL
006AB848  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AB84B  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AB84E  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AB851  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB854  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AB857  41                        INC ECX
006AB858  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab85b:
006AB85B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB85E  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006AB861  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006AB864  66 8B 54 01 FE            MOV DX,word ptr [ECX + EAX*0x1 + -0x2]
006AB869  66 85 D2                  TEST DX,DX
006AB86C  74 0D                     JZ 0x006ab87b
006AB86E  0F BF D2                  MOVSX EDX,DX
006AB871  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB874  3B D1                     CMP EDX,ECX
006AB876  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AB879  7E 4B                     JLE 0x006ab8c6
LAB_006ab87b:
006AB87B  66 8B 14 01               MOV DX,word ptr [ECX + EAX*0x1]
006AB87F  81 E2 00 C0 00 00         AND EDX,0xc000
006AB885  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB88B  74 39                     JZ 0x006ab8c6
006AB88D  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AB891  81 E2 00 C0 00 00         AND EDX,0xc000
006AB897  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB89D  74 27                     JZ 0x006ab8c6
006AB89F  8D 57 04                  LEA EDX,[EDI + 0x4]
006AB8A2  83 C6 04                  ADD ESI,0x4
006AB8A5  66 89 54 01 FE            MOV word ptr [ECX + EAX*0x1 + -0x2],DX
006AB8AA  8A D3                     MOV DL,BL
006AB8AC  FE CA                     DEC DL
006AB8AE  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AB8B1  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB8B4  FE C2                     INC DL
006AB8B6  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AB8B9  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AB8BC  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AB8BF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AB8C2  42                        INC EDX
006AB8C3  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ab8c6:
006AB8C6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AB8C9  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006AB8CD  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006AB8D0  66 8B 14 02               MOV DX,word ptr [EDX + EAX*0x1]
006AB8D4  66 85 D2                  TEST DX,DX
006AB8D7  74 0D                     JZ 0x006ab8e6
006AB8D9  0F BF D2                  MOVSX EDX,DX
006AB8DC  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB8DF  3B D1                     CMP EDX,ECX
006AB8E1  7E 50                     JLE 0x006ab933
006AB8E3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_006ab8e6:
006AB8E6  66 8B 0C 01               MOV CX,word ptr [ECX + EAX*0x1]
006AB8EA  81 E1 00 C0 00 00         AND ECX,0xc000
006AB8F0  81 F9 00 C0 00 00         CMP ECX,0xc000
006AB8F6  74 3B                     JZ 0x006ab933
006AB8F8  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AB8FC  81 E2 00 C0 00 00         AND EDX,0xc000
006AB902  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB908  74 29                     JZ 0x006ab933
006AB90A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AB90D  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AB910  83 C6 04                  ADD ESI,0x4
006AB913  66 89 0C 02               MOV word ptr [EDX + EAX*0x1],CX
006AB917  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB91A  8A CB                     MOV CL,BL
006AB91C  FE C1                     INC CL
006AB91E  FE C2                     INC DL
006AB920  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AB923  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AB926  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AB929  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AB92C  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AB92F  41                        INC ECX
006AB930  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ab933:
006AB933  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006AB936  83 C7 05                  ADD EDI,0x5
006AB939  85 C9                     TEST ECX,ECX
006AB93B  0F 85 D4 02 00 00         JNZ 0x006abc15
006AB941  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AB944  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006AB947  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AB94B  81 E2 00 C0 00 00         AND EDX,0xc000
006AB951  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB957  0F 84 B8 02 00 00         JZ 0x006abc15
006AB95D  2B 4D F0                  SUB ECX,dword ptr [EBP + -0x10]
006AB960  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AB963  66 8B 09                  MOV CX,word ptr [ECX]
006AB966  66 85 C9                  TEST CX,CX
006AB969  74 0B                     JZ 0x006ab976
006AB96B  0F BF C9                  MOVSX ECX,CX
006AB96E  3B CF                     CMP ECX,EDI
006AB970  0F 8E 9A 00 00 00         JLE 0x006aba10
LAB_006ab976:
006AB976  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AB979  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006AB97C  8B D1                     MOV EDX,ECX
006AB97E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AB981  03 C9                     ADD ECX,ECX
006AB983  2B D1                     SUB EDX,ECX
006AB985  66 8B 12                  MOV DX,word ptr [EDX]
006AB988  81 E2 00 C0 00 00         AND EDX,0xc000
006AB98E  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB994  74 7A                     JZ 0x006aba10
006AB996  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AB999  66 8B 54 48 FE            MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
006AB99E  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
006AB9A1  81 E2 00 C0 00 00         AND EDX,0xc000
006AB9A7  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB9AD  74 61                     JZ 0x006aba10
006AB9AF  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AB9B2  66 8B 11                  MOV DX,word ptr [ECX]
006AB9B5  81 E2 00 C0 00 00         AND EDX,0xc000
006AB9BB  81 FA 00 C0 00 00         CMP EDX,0xc000
006AB9C1  74 4D                     JZ 0x006aba10
006AB9C3  66 8B 48 FE               MOV CX,word ptr [EAX + -0x2]
006AB9C7  81 E1 00 C0 00 00         AND ECX,0xc000
006AB9CD  81 F9 00 C0 00 00         CMP ECX,0xc000
006AB9D3  74 3B                     JZ 0x006aba10
006AB9D5  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006AB9D8  66 8B 0A                  MOV CX,word ptr [EDX]
006AB9DB  81 E1 00 C0 00 00         AND ECX,0xc000
006AB9E1  81 F9 00 C0 00 00         CMP ECX,0xc000
006AB9E7  74 27                     JZ 0x006aba10
006AB9E9  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006AB9EC  8A CB                     MOV CL,BL
006AB9EE  FE C9                     DEC CL
006AB9F0  83 C6 04                  ADD ESI,0x4
006AB9F3  66 89 3A                  MOV word ptr [EDX],DI
006AB9F6  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AB9F9  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AB9FC  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AB9FF  FE CA                     DEC DL
006ABA01  FE C1                     INC CL
006ABA03  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006ABA06  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ABA09  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ABA0C  41                        INC ECX
006ABA0D  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006aba10:
006ABA10  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006ABA13  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006ABA16  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABA19  03 D2                     ADD EDX,EDX
006ABA1B  2B CA                     SUB ECX,EDX
006ABA1D  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006ABA20  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006ABA24  66 85 D2                  TEST DX,DX
006ABA27  74 0B                     JZ 0x006aba34
006ABA29  0F BF D2                  MOVSX EDX,DX
006ABA2C  3B D7                     CMP EDX,EDI
006ABA2E  0F 8E 89 00 00 00         JLE 0x006ababd
LAB_006aba34:
006ABA34  66 8B 11                  MOV DX,word ptr [ECX]
006ABA37  81 E2 00 C0 00 00         AND EDX,0xc000
006ABA3D  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABA43  74 78                     JZ 0x006ababd
006ABA45  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006ABA48  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006ABA4B  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006ABA4F  81 E2 00 C0 00 00         AND EDX,0xc000
006ABA55  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABA5B  74 60                     JZ 0x006ababd
006ABA5D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006ABA60  66 8B 12                  MOV DX,word ptr [EDX]
006ABA63  81 E2 00 C0 00 00         AND EDX,0xc000
006ABA69  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABA6F  74 4C                     JZ 0x006ababd
006ABA71  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006ABA75  81 E2 00 C0 00 00         AND EDX,0xc000
006ABA7B  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABA81  74 3A                     JZ 0x006ababd
006ABA83  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006ABA86  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006ABA8A  81 E2 00 C0 00 00         AND EDX,0xc000
006ABA90  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABA96  74 25                     JZ 0x006ababd
006ABA98  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ABA9B  66 89 79 02               MOV word ptr [ECX + 0x2],DI
006ABA9F  8A CB                     MOV CL,BL
006ABAA1  83 C6 04                  ADD ESI,0x4
006ABAA4  FE C1                     INC CL
006ABAA6  FE CA                     DEC DL
006ABAA8  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006ABAAB  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006ABAAE  FE C1                     INC CL
006ABAB0  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ABAB3  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006ABAB6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ABAB9  41                        INC ECX
006ABABA  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ababd:
006ABABD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006ABAC0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006ABAC3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006ABAC6  66 8B 54 0A FE            MOV DX,word ptr [EDX + ECX*0x1 + -0x2]
006ABACB  66 85 D2                  TEST DX,DX
006ABACE  74 0B                     JZ 0x006abadb
006ABAD0  0F BF D2                  MOVSX EDX,DX
006ABAD3  3B D7                     CMP EDX,EDI
006ABAD5  0F 8E 94 00 00 00         JLE 0x006abb6f
LAB_006abadb:
006ABADB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABADE  03 D2                     ADD EDX,EDX
006ABAE0  66 8B 14 0A               MOV DX,word ptr [EDX + ECX*0x1]
006ABAE4  81 E2 00 C0 00 00         AND EDX,0xc000
006ABAEA  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABAF0  74 7D                     JZ 0x006abb6f
006ABAF2  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006ABAF6  81 E2 00 C0 00 00         AND EDX,0xc000
006ABAFC  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABB02  74 6B                     JZ 0x006abb6f
006ABB04  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABB07  03 D2                     ADD EDX,EDX
006ABB09  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006ABB0C  66 8B 14 02               MOV DX,word ptr [EDX + EAX*0x1]
006ABB10  81 E2 00 C0 00 00         AND EDX,0xc000
006ABB16  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABB1C  74 51                     JZ 0x006abb6f
006ABB1E  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006ABB22  81 E2 00 C0 00 00         AND EDX,0xc000
006ABB28  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABB2E  74 3F                     JZ 0x006abb6f
006ABB30  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006ABB33  66 8B 54 02 FE            MOV DX,word ptr [EDX + EAX*0x1 + -0x2]
006ABB38  81 E2 00 C0 00 00         AND EDX,0xc000
006ABB3E  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABB44  74 29                     JZ 0x006abb6f
006ABB46  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006ABB49  83 C6 04                  ADD ESI,0x4
006ABB4C  66 89 7C 0A FE            MOV word ptr [EDX + ECX*0x1 + -0x2],DI
006ABB51  8A D3                     MOV DL,BL
006ABB53  FE CA                     DEC DL
006ABB55  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006ABB58  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ABB5B  FE C2                     INC DL
006ABB5D  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ABB60  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006ABB63  FE C2                     INC DL
006ABB65  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006ABB68  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006ABB6B  42                        INC EDX
006ABB6C  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006abb6f:
006ABB6F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006ABB72  66 8B 14 0A               MOV DX,word ptr [EDX + ECX*0x1]
006ABB76  66 85 D2                  TEST DX,DX
006ABB79  74 0B                     JZ 0x006abb86
006ABB7B  0F BF D2                  MOVSX EDX,DX
006ABB7E  3B D7                     CMP EDX,EDI
006ABB80  0F 8E 8F 00 00 00         JLE 0x006abc15
LAB_006abb86:
006ABB86  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABB89  03 D2                     ADD EDX,EDX
006ABB8B  66 8B 14 0A               MOV DX,word ptr [EDX + ECX*0x1]
006ABB8F  81 E2 00 C0 00 00         AND EDX,0xc000
006ABB95  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABB9B  74 78                     JZ 0x006abc15
006ABB9D  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006ABBA1  81 E2 00 C0 00 00         AND EDX,0xc000
006ABBA7  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABBAD  74 66                     JZ 0x006abc15
006ABBAF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABBB2  03 D2                     ADD EDX,EDX
006ABBB4  66 8B 14 02               MOV DX,word ptr [EDX + EAX*0x1]
006ABBB8  81 E2 00 C0 00 00         AND EDX,0xc000
006ABBBE  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABBC4  74 4F                     JZ 0x006abc15
006ABBC6  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006ABBCA  81 E2 00 C0 00 00         AND EDX,0xc000
006ABBD0  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABBD6  74 3D                     JZ 0x006abc15
006ABBD8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006ABBDB  66 8B 14 02               MOV DX,word ptr [EDX + EAX*0x1]
006ABBDF  81 E2 00 C0 00 00         AND EDX,0xc000
006ABBE5  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABBEB  74 28                     JZ 0x006abc15
006ABBED  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006ABBF0  83 C6 04                  ADD ESI,0x4
006ABBF3  66 89 3C 0A               MOV word ptr [EDX + ECX*0x1],DI
006ABBF7  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ABBFA  8A CB                     MOV CL,BL
006ABBFC  FE C1                     INC CL
006ABBFE  FE C2                     INC DL
006ABC00  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006ABC03  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006ABC06  FE C1                     INC CL
006ABC08  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ABC0B  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006ABC0E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ABC11  41                        INC ECX
006ABC12  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006abc15:
006ABC15  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006ABC18  85 C9                     TEST ECX,ECX
006ABC1A  0F 85 8E 0F 00 00         JNZ 0x006acbae
006ABC20  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006ABC23  8B C8                     MOV ECX,EAX
006ABC25  03 D2                     ADD EDX,EDX
006ABC27  2B CA                     SUB ECX,EDX
006ABC29  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006ABC2C  66 8B 11                  MOV DX,word ptr [ECX]
006ABC2F  81 E2 00 C0 00 00         AND EDX,0xc000
006ABC35  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABC3B  0F 84 6D 0F 00 00         JZ 0x006acbae
006ABC41  2B 4D F0                  SUB ECX,dword ptr [EBP + -0x10]
006ABC44  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006ABC47  66 8B 09                  MOV CX,word ptr [ECX]
006ABC4A  66 85 C9                  TEST CX,CX
006ABC4D  74 0B                     JZ 0x006abc5a
006ABC4F  0F BF C9                  MOVSX ECX,CX
006ABC52  3B CF                     CMP ECX,EDI
006ABC54  0F 8E 91 00 00 00         JLE 0x006abceb
LAB_006abc5a:
006ABC5A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006ABC5D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006ABC60  03 C9                     ADD ECX,ECX
006ABC62  2B D1                     SUB EDX,ECX
006ABC64  66 8B 12                  MOV DX,word ptr [EDX]
006ABC67  81 E2 00 C0 00 00         AND EDX,0xc000
006ABC6D  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABC73  74 76                     JZ 0x006abceb
006ABC75  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006ABC78  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006ABC7C  81 E2 00 C0 00 00         AND EDX,0xc000
006ABC82  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABC88  74 61                     JZ 0x006abceb
006ABC8A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006ABC8D  66 8B 11                  MOV DX,word ptr [ECX]
006ABC90  81 E2 00 C0 00 00         AND EDX,0xc000
006ABC96  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABC9C  74 4D                     JZ 0x006abceb
006ABC9E  66 8B 48 FE               MOV CX,word ptr [EAX + -0x2]
006ABCA2  81 E1 00 C0 00 00         AND ECX,0xc000
006ABCA8  81 F9 00 C0 00 00         CMP ECX,0xc000
006ABCAE  74 3B                     JZ 0x006abceb
006ABCB0  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006ABCB3  66 8B 0A                  MOV CX,word ptr [EDX]
006ABCB6  81 E1 00 C0 00 00         AND ECX,0xc000
006ABCBC  81 F9 00 C0 00 00         CMP ECX,0xc000
006ABCC2  74 27                     JZ 0x006abceb
006ABCC4  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006ABCC7  8A CB                     MOV CL,BL
006ABCC9  FE C9                     DEC CL
006ABCCB  83 C6 04                  ADD ESI,0x4
006ABCCE  66 89 3A                  MOV word ptr [EDX],DI
006ABCD1  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ABCD4  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006ABCD7  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006ABCDA  FE CA                     DEC DL
006ABCDC  FE C9                     DEC CL
006ABCDE  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006ABCE1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ABCE4  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ABCE7  41                        INC ECX
006ABCE8  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006abceb:
006ABCEB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABCEE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006ABCF1  03 D2                     ADD EDX,EDX
006ABCF3  2B CA                     SUB ECX,EDX
006ABCF5  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006ABCF8  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006ABCFB  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006ABCFF  66 85 D2                  TEST DX,DX
006ABD02  74 0B                     JZ 0x006abd0f
006ABD04  0F BF D2                  MOVSX EDX,DX
006ABD07  3B D7                     CMP EDX,EDI
006ABD09  0F 8E 8B 00 00 00         JLE 0x006abd9a
LAB_006abd0f:
006ABD0F  66 8B 09                  MOV CX,word ptr [ECX]
006ABD12  81 E1 00 C0 00 00         AND ECX,0xc000
006ABD18  81 F9 00 C0 00 00         CMP ECX,0xc000
006ABD1E  74 7A                     JZ 0x006abd9a
006ABD20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006ABD23  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006ABD27  81 E2 00 C0 00 00         AND EDX,0xc000
006ABD2D  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABD33  74 68                     JZ 0x006abd9d
006ABD35  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006ABD38  66 8B 12                  MOV DX,word ptr [EDX]
006ABD3B  81 E2 00 C0 00 00         AND EDX,0xc000
006ABD41  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABD47  74 54                     JZ 0x006abd9d
006ABD49  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006ABD4D  81 E2 00 C0 00 00         AND EDX,0xc000
006ABD53  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABD59  74 42                     JZ 0x006abd9d
006ABD5B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006ABD5E  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006ABD62  81 E2 00 C0 00 00         AND EDX,0xc000
006ABD68  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABD6E  74 2D                     JZ 0x006abd9d
006ABD70  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006ABD73  83 C6 04                  ADD ESI,0x4
006ABD76  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006ABD7A  8A D3                     MOV DL,BL
006ABD7C  FE C2                     INC DL
006ABD7E  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006ABD81  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ABD84  FE CA                     DEC DL
006ABD86  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ABD89  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006ABD8C  FE CA                     DEC DL
006ABD8E  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006ABD91  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006ABD94  42                        INC EDX
006ABD95  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006ABD98  EB 03                     JMP 0x006abd9d
LAB_006abd9a:
006ABD9A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006abd9d:
006ABD9D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006ABDA0  66 8B 54 0A FE            MOV DX,word ptr [EDX + ECX*0x1 + -0x2]
006ABDA5  66 85 D2                  TEST DX,DX
006ABDA8  74 0B                     JZ 0x006abdb5
006ABDAA  0F BF D2                  MOVSX EDX,DX
006ABDAD  3B D7                     CMP EDX,EDI
006ABDAF  0F 8E 94 00 00 00         JLE 0x006abe49
LAB_006abdb5:
006ABDB5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABDB8  03 D2                     ADD EDX,EDX
006ABDBA  66 8B 14 0A               MOV DX,word ptr [EDX + ECX*0x1]
006ABDBE  81 E2 00 C0 00 00         AND EDX,0xc000
006ABDC4  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABDCA  74 7D                     JZ 0x006abe49
006ABDCC  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006ABDD0  81 E2 00 C0 00 00         AND EDX,0xc000
006ABDD6  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABDDC  74 6B                     JZ 0x006abe49
006ABDDE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABDE1  03 D2                     ADD EDX,EDX
006ABDE3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006ABDE6  66 8B 14 02               MOV DX,word ptr [EDX + EAX*0x1]
006ABDEA  81 E2 00 C0 00 00         AND EDX,0xc000
006ABDF0  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABDF6  74 51                     JZ 0x006abe49
006ABDF8  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006ABDFC  81 E2 00 C0 00 00         AND EDX,0xc000
006ABE02  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABE08  74 3F                     JZ 0x006abe49
006ABE0A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006ABE0D  66 8B 54 02 FE            MOV DX,word ptr [EDX + EAX*0x1 + -0x2]
006ABE12  81 E2 00 C0 00 00         AND EDX,0xc000
006ABE18  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABE1E  74 29                     JZ 0x006abe49
006ABE20  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006ABE23  83 C6 04                  ADD ESI,0x4
006ABE26  66 89 7C 0A FE            MOV word ptr [EDX + ECX*0x1 + -0x2],DI
006ABE2B  8A D3                     MOV DL,BL
006ABE2D  FE CA                     DEC DL
006ABE2F  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006ABE32  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ABE35  FE C2                     INC DL
006ABE37  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ABE3A  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006ABE3D  FE CA                     DEC DL
006ABE3F  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006ABE42  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006ABE45  42                        INC EDX
006ABE46  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006abe49:
006ABE49  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006ABE4C  66 8B 14 0A               MOV DX,word ptr [EDX + ECX*0x1]
006ABE50  66 85 D2                  TEST DX,DX
006ABE53  74 0B                     JZ 0x006abe60
006ABE55  0F BF D2                  MOVSX EDX,DX
006ABE58  3B D7                     CMP EDX,EDI
006ABE5A  0F 8E 4E 0D 00 00         JLE 0x006acbae
LAB_006abe60:
006ABE60  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABE63  03 D2                     ADD EDX,EDX
006ABE65  66 8B 14 0A               MOV DX,word ptr [EDX + ECX*0x1]
006ABE69  81 E2 00 C0 00 00         AND EDX,0xc000
006ABE6F  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABE75  0F 84 33 0D 00 00         JZ 0x006acbae
006ABE7B  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006ABE7F  81 E2 00 C0 00 00         AND EDX,0xc000
006ABE85  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABE8B  0F 84 1D 0D 00 00         JZ 0x006acbae
006ABE91  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABE94  03 D2                     ADD EDX,EDX
006ABE96  66 8B 14 02               MOV DX,word ptr [EDX + EAX*0x1]
006ABE9A  81 E2 00 C0 00 00         AND EDX,0xc000
006ABEA0  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABEA6  0F 84 02 0D 00 00         JZ 0x006acbae
006ABEAC  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006ABEB0  81 E2 00 C0 00 00         AND EDX,0xc000
006ABEB6  81 FA 00 C0 00 00         CMP EDX,0xc000
006ABEBC  0F 84 EC 0C 00 00         JZ 0x006acbae
006ABEC2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006ABEC5  66 8B 04 02               MOV AX,word ptr [EDX + EAX*0x1]
006ABEC9  25 00 C0 00 00            AND EAX,0xc000
006ABECE  3D 00 C0 00 00            CMP EAX,0xc000
006ABED3  0F 84 D5 0C 00 00         JZ 0x006acbae
006ABED9  66 89 3C 0A               MOV word ptr [EDX + ECX*0x1],DI
006ABEDD  E9 AF 0C 00 00            JMP 0x006acb91
LAB_006abee2:
006ABEE2  83 E1 10                  AND ECX,0x10
006ABEE5  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006ABEE8  75 36                     JNZ 0x006abf20
006ABEEA  66 8B 48 FE               MOV CX,word ptr [EAX + -0x2]
006ABEEE  66 85 C9                  TEST CX,CX
006ABEF1  74 0A                     JZ 0x006abefd
006ABEF3  0F BF D1                  MOVSX EDX,CX
006ABEF6  8D 4F 03                  LEA ECX,[EDI + 0x3]
006ABEF9  3B D1                     CMP EDX,ECX
006ABEFB  7E 23                     JLE 0x006abf20
LAB_006abefd:
006ABEFD  8D 4F 03                  LEA ECX,[EDI + 0x3]
006ABF00  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ABF03  66 89 48 FE               MOV word ptr [EAX + -0x2],CX
006ABF07  8A CB                     MOV CL,BL
006ABF09  FE C9                     DEC CL
006ABF0B  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006ABF0E  88 0E                     MOV byte ptr [ESI],CL
006ABF10  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006ABF13  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006ABF16  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ABF19  83 C6 04                  ADD ESI,0x4
006ABF1C  41                        INC ECX
006ABF1D  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006abf20:
006ABF20  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006ABF23  83 E1 01                  AND ECX,0x1
006ABF26  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006ABF29  75 36                     JNZ 0x006abf61
006ABF2B  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
006ABF2F  66 85 C9                  TEST CX,CX
006ABF32  74 0A                     JZ 0x006abf3e
006ABF34  0F BF D1                  MOVSX EDX,CX
006ABF37  8D 4F 03                  LEA ECX,[EDI + 0x3]
006ABF3A  3B D1                     CMP EDX,ECX
006ABF3C  7E 23                     JLE 0x006abf61
LAB_006abf3e:
006ABF3E  8D 4F 03                  LEA ECX,[EDI + 0x3]
006ABF41  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ABF44  66 89 48 02               MOV word ptr [EAX + 0x2],CX
006ABF48  8A CB                     MOV CL,BL
006ABF4A  FE C1                     INC CL
006ABF4C  88 56 01                  MOV byte ptr [ESI + 0x1],DL
006ABF4F  88 0E                     MOV byte ptr [ESI],CL
006ABF51  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006ABF54  88 4E 02                  MOV byte ptr [ESI + 0x2],CL
006ABF57  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ABF5A  83 C6 04                  ADD ESI,0x4
006ABF5D  41                        INC ECX
006ABF5E  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006abf61:
006ABF61  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006ABF64  83 E1 20                  AND ECX,0x20
006ABF67  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006ABF6A  75 42                     JNZ 0x006abfae
006ABF6C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABF6F  8B C8                     MOV ECX,EAX
006ABF71  03 D2                     ADD EDX,EDX
006ABF73  2B CA                     SUB ECX,EDX
006ABF75  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006ABF78  66 8B 11                  MOV DX,word ptr [ECX]
006ABF7B  66 85 D2                  TEST DX,DX
006ABF7E  74 0D                     JZ 0x006abf8d
006ABF80  0F BF D2                  MOVSX EDX,DX
006ABF83  8D 4F 03                  LEA ECX,[EDI + 0x3]
006ABF86  3B D1                     CMP EDX,ECX
006ABF88  7E 24                     JLE 0x006abfae
006ABF8A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_006abf8d:
006ABF8D  8D 57 03                  LEA EDX,[EDI + 0x3]
006ABF90  83 C6 04                  ADD ESI,0x4
006ABF93  66 89 11                  MOV word ptr [ECX],DX
006ABF96  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006ABF99  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006ABF9C  FE C9                     DEC CL
006ABF9E  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006ABFA1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ABFA4  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006ABFA7  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006ABFAA  41                        INC ECX
006ABFAB  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006abfae:
006ABFAE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006ABFB1  83 E1 02                  AND ECX,0x2
006ABFB4  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006ABFB7  75 3B                     JNZ 0x006abff4
006ABFB9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006ABFBC  66 8B 0C 48               MOV CX,word ptr [EAX + ECX*0x2]
006ABFC0  66 85 C9                  TEST CX,CX
006ABFC3  74 0A                     JZ 0x006abfcf
006ABFC5  0F BF D1                  MOVSX EDX,CX
006ABFC8  8D 4F 03                  LEA ECX,[EDI + 0x3]
006ABFCB  3B D1                     CMP EDX,ECX
006ABFCD  7E 25                     JLE 0x006abff4
LAB_006abfcf:
006ABFCF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ABFD2  8D 4F 03                  LEA ECX,[EDI + 0x3]
006ABFD5  83 C6 04                  ADD ESI,0x4
006ABFD8  66 89 0C 50               MOV word ptr [EAX + EDX*0x2],CX
006ABFDC  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006ABFDF  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006ABFE2  FE C1                     INC CL
006ABFE4  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006ABFE7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ABFEA  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006ABFED  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006ABFF0  41                        INC ECX
006ABFF1  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006abff4:
006ABFF4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006ABFF7  83 E1 40                  AND ECX,0x40
006ABFFA  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006ABFFD  75 43                     JNZ 0x006ac042
006ABFFF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AC002  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006AC005  8B C8                     MOV ECX,EAX
006AC007  2B CA                     SUB ECX,EDX
006AC009  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006AC00C  66 8B 11                  MOV DX,word ptr [ECX]
006AC00F  66 85 D2                  TEST DX,DX
006AC012  74 0D                     JZ 0x006ac021
006AC014  0F BF D2                  MOVSX EDX,DX
006AC017  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AC01A  3B D1                     CMP EDX,ECX
006AC01C  7E 24                     JLE 0x006ac042
006AC01E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006ac021:
006AC021  8D 57 03                  LEA EDX,[EDI + 0x3]
006AC024  83 C6 04                  ADD ESI,0x4
006AC027  66 89 11                  MOV word ptr [ECX],DX
006AC02A  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC02D  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AC030  FE CA                     DEC DL
006AC032  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AC035  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC038  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AC03B  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC03E  41                        INC ECX
006AC03F  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac042:
006AC042  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AC045  83 E1 04                  AND ECX,0x4
006AC048  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006AC04B  75 3B                     JNZ 0x006ac088
006AC04D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AC050  66 8B 0C 48               MOV CX,word ptr [EAX + ECX*0x2]
006AC054  66 85 C9                  TEST CX,CX
006AC057  74 0A                     JZ 0x006ac063
006AC059  0F BF D1                  MOVSX EDX,CX
006AC05C  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AC05F  3B D1                     CMP EDX,ECX
006AC061  7E 25                     JLE 0x006ac088
LAB_006ac063:
006AC063  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AC066  8D 4F 03                  LEA ECX,[EDI + 0x3]
006AC069  83 C6 04                  ADD ESI,0x4
006AC06C  66 89 0C 50               MOV word ptr [EAX + EDX*0x2],CX
006AC070  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC073  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AC076  FE C2                     INC DL
006AC078  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AC07B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC07E  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AC081  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC084  41                        INC ECX
006AC085  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac088:
006AC088  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006AC08B  85 C9                     TEST ECX,ECX
006AC08D  0F 85 80 01 00 00         JNZ 0x006ac213
006AC093  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AC096  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
006AC09B  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
006AC09E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006AC0A1  0F 8C 6C 01 00 00         JL 0x006ac213
006AC0A7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AC0AA  85 D2                     TEST EDX,EDX
006AC0AC  75 4E                     JNZ 0x006ac0fc
006AC0AE  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006AC0B2  66 85 D2                  TEST DX,DX
006AC0B5  74 0D                     JZ 0x006ac0c4
006AC0B7  0F BF D2                  MOVSX EDX,DX
006AC0BA  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC0BD  3B D1                     CMP EDX,ECX
006AC0BF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AC0C2  7E 38                     JLE 0x006ac0fc
LAB_006ac0c4:
006AC0C4  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AC0C8  81 E2 00 C0 00 00         AND EDX,0xc000
006AC0CE  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC0D4  74 26                     JZ 0x006ac0fc
006AC0D6  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC0D9  83 C6 04                  ADD ESI,0x4
006AC0DC  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
006AC0E0  8A D3                     MOV DL,BL
006AC0E2  FE CA                     DEC DL
006AC0E4  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AC0E7  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC0EA  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC0ED  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC0F0  FE C2                     INC DL
006AC0F2  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC0F5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AC0F8  42                        INC EDX
006AC0F9  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ac0fc:
006AC0FC  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006AC0FF  85 D2                     TEST EDX,EDX
006AC101  75 4E                     JNZ 0x006ac151
006AC103  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AC107  66 85 D2                  TEST DX,DX
006AC10A  74 0D                     JZ 0x006ac119
006AC10C  0F BF D2                  MOVSX EDX,DX
006AC10F  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC112  3B D1                     CMP EDX,ECX
006AC114  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AC117  7E 38                     JLE 0x006ac151
LAB_006ac119:
006AC119  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AC11D  81 E2 00 C0 00 00         AND EDX,0xc000
006AC123  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC129  74 26                     JZ 0x006ac151
006AC12B  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC12E  83 C6 04                  ADD ESI,0x4
006AC131  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006AC135  8A D3                     MOV DL,BL
006AC137  FE C2                     INC DL
006AC139  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AC13C  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC13F  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC142  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC145  FE C2                     INC DL
006AC147  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC14A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AC14D  42                        INC EDX
006AC14E  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ac151:
006AC151  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AC154  85 D2                     TEST EDX,EDX
006AC156  75 58                     JNZ 0x006ac1b0
006AC158  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC15B  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006AC15F  66 85 D2                  TEST DX,DX
006AC162  74 0D                     JZ 0x006ac171
006AC164  0F BF D2                  MOVSX EDX,DX
006AC167  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC16A  3B D1                     CMP EDX,ECX
006AC16C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AC16F  7E 3F                     JLE 0x006ac1b0
LAB_006ac171:
006AC171  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC174  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AC178  81 E2 00 C0 00 00         AND EDX,0xc000
006AC17E  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC184  74 2A                     JZ 0x006ac1b0
006AC186  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC189  8D 47 04                  LEA EAX,[EDI + 0x4]
006AC18C  83 C6 04                  ADD ESI,0x4
006AC18F  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
006AC193  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
006AC196  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC199  FE C0                     INC AL
006AC19B  FE C2                     INC DL
006AC19D  88 46 FD                  MOV byte ptr [ESI + -0x3],AL
006AC1A0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AC1A3  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AC1A6  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC1A9  40                        INC EAX
006AC1AA  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006AC1AD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_006ac1b0:
006AC1B0  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006AC1B3  85 D2                     TEST EDX,EDX
006AC1B5  75 5C                     JNZ 0x006ac213
006AC1B7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC1BA  03 D2                     ADD EDX,EDX
006AC1BC  2B CA                     SUB ECX,EDX
006AC1BE  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AC1C1  66 8B 09                  MOV CX,word ptr [ECX]
006AC1C4  66 85 C9                  TEST CX,CX
006AC1C7  74 0A                     JZ 0x006ac1d3
006AC1C9  0F BF C9                  MOVSX ECX,CX
006AC1CC  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC1CF  3B CA                     CMP ECX,EDX
006AC1D1  7E 40                     JLE 0x006ac213
LAB_006ac1d3:
006AC1D3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AC1D6  8B D0                     MOV EDX,EAX
006AC1D8  03 C9                     ADD ECX,ECX
006AC1DA  2B D1                     SUB EDX,ECX
006AC1DC  66 8B 12                  MOV DX,word ptr [EDX]
006AC1DF  81 E2 00 C0 00 00         AND EDX,0xc000
006AC1E5  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC1EB  74 26                     JZ 0x006ac213
006AC1ED  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006AC1F0  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC1F3  83 C6 04                  ADD ESI,0x4
006AC1F6  66 89 0A                  MOV word ptr [EDX],CX
006AC1F9  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AC1FC  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC1FF  FE C9                     DEC CL
006AC201  FE C2                     INC DL
006AC203  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AC206  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC209  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AC20C  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC20F  41                        INC ECX
006AC210  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac213:
006AC213  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006AC216  85 C9                     TEST ECX,ECX
006AC218  0F 85 86 01 00 00         JNZ 0x006ac3a4
006AC21E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AC221  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006AC224  8B C8                     MOV ECX,EAX
006AC226  2B CA                     SUB ECX,EDX
006AC228  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006AC22B  66 83 39 00               CMP word ptr [ECX],0x0
006AC22F  0F 8C 6F 01 00 00         JL 0x006ac3a4
006AC235  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AC238  85 D2                     TEST EDX,EDX
006AC23A  75 4E                     JNZ 0x006ac28a
006AC23C  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006AC240  66 85 D2                  TEST DX,DX
006AC243  74 0D                     JZ 0x006ac252
006AC245  0F BF D2                  MOVSX EDX,DX
006AC248  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC24B  3B D1                     CMP EDX,ECX
006AC24D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AC250  7E 38                     JLE 0x006ac28a
LAB_006ac252:
006AC252  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AC256  81 E2 00 C0 00 00         AND EDX,0xc000
006AC25C  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC262  74 26                     JZ 0x006ac28a
006AC264  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC267  83 C6 04                  ADD ESI,0x4
006AC26A  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
006AC26E  8A D3                     MOV DL,BL
006AC270  FE CA                     DEC DL
006AC272  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AC275  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC278  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC27B  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC27E  FE CA                     DEC DL
006AC280  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC283  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AC286  42                        INC EDX
006AC287  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ac28a:
006AC28A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006AC28D  85 D2                     TEST EDX,EDX
006AC28F  75 4E                     JNZ 0x006ac2df
006AC291  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AC295  66 85 D2                  TEST DX,DX
006AC298  74 0D                     JZ 0x006ac2a7
006AC29A  0F BF D2                  MOVSX EDX,DX
006AC29D  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC2A0  3B D1                     CMP EDX,ECX
006AC2A2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AC2A5  7E 38                     JLE 0x006ac2df
LAB_006ac2a7:
006AC2A7  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AC2AB  81 E2 00 C0 00 00         AND EDX,0xc000
006AC2B1  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC2B7  74 26                     JZ 0x006ac2df
006AC2B9  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC2BC  83 C6 04                  ADD ESI,0x4
006AC2BF  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006AC2C3  8A D3                     MOV DL,BL
006AC2C5  FE C2                     INC DL
006AC2C7  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AC2CA  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC2CD  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC2D0  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC2D3  FE CA                     DEC DL
006AC2D5  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC2D8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AC2DB  42                        INC EDX
006AC2DC  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006ac2df:
006AC2DF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006AC2E2  85 D2                     TEST EDX,EDX
006AC2E4  75 5F                     JNZ 0x006ac345
006AC2E6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC2E9  03 D2                     ADD EDX,EDX
006AC2EB  2B CA                     SUB ECX,EDX
006AC2ED  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AC2F0  66 8B 09                  MOV CX,word ptr [ECX]
006AC2F3  66 85 C9                  TEST CX,CX
006AC2F6  74 0A                     JZ 0x006ac302
006AC2F8  0F BF C9                  MOVSX ECX,CX
006AC2FB  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC2FE  3B CA                     CMP ECX,EDX
006AC300  7E 40                     JLE 0x006ac342
LAB_006ac302:
006AC302  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AC305  8B D0                     MOV EDX,EAX
006AC307  03 C9                     ADD ECX,ECX
006AC309  2B D1                     SUB EDX,ECX
006AC30B  66 8B 12                  MOV DX,word ptr [EDX]
006AC30E  81 E2 00 C0 00 00         AND EDX,0xc000
006AC314  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC31A  74 26                     JZ 0x006ac342
006AC31C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006AC31F  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC322  83 C6 04                  ADD ESI,0x4
006AC325  66 89 0A                  MOV word ptr [EDX],CX
006AC328  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AC32B  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC32E  FE C9                     DEC CL
006AC330  FE CA                     DEC DL
006AC332  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AC335  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC338  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AC33B  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC33E  41                        INC ECX
006AC33F  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac342:
006AC342  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006ac345:
006AC345  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006AC348  85 D2                     TEST EDX,EDX
006AC34A  75 58                     JNZ 0x006ac3a4
006AC34C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC34F  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006AC353  66 85 D2                  TEST DX,DX
006AC356  74 0D                     JZ 0x006ac365
006AC358  0F BF D2                  MOVSX EDX,DX
006AC35B  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC35E  3B D1                     CMP EDX,ECX
006AC360  7E 42                     JLE 0x006ac3a4
006AC362  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006ac365:
006AC365  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC368  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AC36C  81 E2 00 C0 00 00         AND EDX,0xc000
006AC372  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC378  74 2A                     JZ 0x006ac3a4
006AC37A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC37D  8D 47 04                  LEA EAX,[EDI + 0x4]
006AC380  83 C6 04                  ADD ESI,0x4
006AC383  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
006AC387  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
006AC38A  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AC38D  FE C0                     INC AL
006AC38F  FE C9                     DEC CL
006AC391  88 46 FD                  MOV byte ptr [ESI + -0x3],AL
006AC394  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AC397  88 5E FC                  MOV byte ptr [ESI + -0x4],BL
006AC39A  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AC39D  40                        INC EAX
006AC39E  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006AC3A1  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_006ac3a4:
006AC3A4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AC3A7  83 E1 30                  AND ECX,0x30
006AC3AA  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006AC3AD  75 75                     JNZ 0x006ac424
006AC3AF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC3B2  8B C8                     MOV ECX,EAX
006AC3B4  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006AC3B8  2B CA                     SUB ECX,EDX
006AC3BA  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006AC3BD  66 8B 09                  MOV CX,word ptr [ECX]
006AC3C0  66 85 C9                  TEST CX,CX
006AC3C3  74 0A                     JZ 0x006ac3cf
006AC3C5  0F BF C9                  MOVSX ECX,CX
006AC3C8  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC3CB  3B CA                     CMP ECX,EDX
006AC3CD  7E 55                     JLE 0x006ac424
LAB_006ac3cf:
006AC3CF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC3D2  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006AC3D5  8B D0                     MOV EDX,EAX
006AC3D7  2B D1                     SUB EDX,ECX
006AC3D9  66 8B 0A                  MOV CX,word ptr [EDX]
006AC3DC  81 E1 00 C0 00 00         AND ECX,0xc000
006AC3E2  81 F9 00 C0 00 00         CMP ECX,0xc000
006AC3E8  74 3A                     JZ 0x006ac424
006AC3EA  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AC3EE  81 E2 00 C0 00 00         AND EDX,0xc000
006AC3F4  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC3FA  74 28                     JZ 0x006ac424
006AC3FC  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006AC3FF  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC402  83 C6 04                  ADD ESI,0x4
006AC405  66 89 0A                  MOV word ptr [EDX],CX
006AC408  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC40B  8A CB                     MOV CL,BL
006AC40D  FE C9                     DEC CL
006AC40F  FE CA                     DEC DL
006AC411  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AC414  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AC417  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AC41A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC41D  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC420  41                        INC ECX
006AC421  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac424:
006AC424  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AC427  83 E1 21                  AND ECX,0x21
006AC42A  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006AC42D  75 6B                     JNZ 0x006ac49a
006AC42F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC432  8B C8                     MOV ECX,EAX
006AC434  03 D2                     ADD EDX,EDX
006AC436  2B CA                     SUB ECX,EDX
006AC438  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006AC43B  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AC43F  66 85 D2                  TEST DX,DX
006AC442  74 0D                     JZ 0x006ac451
006AC444  0F BF D2                  MOVSX EDX,DX
006AC447  8D 4F 04                  LEA ECX,[EDI + 0x4]
006AC44A  3B D1                     CMP EDX,ECX
006AC44C  7E 4C                     JLE 0x006ac49a
006AC44E  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_006ac451:
006AC451  66 8B 11                  MOV DX,word ptr [ECX]
006AC454  81 E2 00 C0 00 00         AND EDX,0xc000
006AC45A  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC460  74 38                     JZ 0x006ac49a
006AC462  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AC466  81 E2 00 C0 00 00         AND EDX,0xc000
006AC46C  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC472  74 26                     JZ 0x006ac49a
006AC474  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC477  83 C6 04                  ADD ESI,0x4
006AC47A  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006AC47E  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC481  8A CB                     MOV CL,BL
006AC483  FE C1                     INC CL
006AC485  FE CA                     DEC DL
006AC487  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AC48A  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AC48D  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AC490  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC493  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC496  41                        INC ECX
006AC497  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac49a:
006AC49A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AC49D  83 E1 12                  AND ECX,0x12
006AC4A0  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006AC4A3  75 65                     JNZ 0x006ac50a
006AC4A5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC4A8  66 8B 4C 50 FE            MOV CX,word ptr [EAX + EDX*0x2 + -0x2]
006AC4AD  66 85 C9                  TEST CX,CX
006AC4B0  74 0A                     JZ 0x006ac4bc
006AC4B2  0F BF C9                  MOVSX ECX,CX
006AC4B5  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC4B8  3B CA                     CMP ECX,EDX
006AC4BA  7E 4E                     JLE 0x006ac50a
LAB_006ac4bc:
006AC4BC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AC4BF  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
006AC4C3  81 E2 00 C0 00 00         AND EDX,0xc000
006AC4C9  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC4CF  74 39                     JZ 0x006ac50a
006AC4D1  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AC4D5  81 E2 00 C0 00 00         AND EDX,0xc000
006AC4DB  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC4E1  74 27                     JZ 0x006ac50a
006AC4E3  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC4E6  83 C6 04                  ADD ESI,0x4
006AC4E9  66 89 54 48 FE            MOV word ptr [EAX + ECX*0x2 + -0x2],DX
006AC4EE  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC4F1  8A CB                     MOV CL,BL
006AC4F3  FE C9                     DEC CL
006AC4F5  FE C2                     INC DL
006AC4F7  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AC4FA  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AC4FD  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AC500  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC503  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC506  41                        INC ECX
006AC507  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac50a:
006AC50A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AC50D  83 E1 03                  AND ECX,0x3
006AC510  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006AC513  75 65                     JNZ 0x006ac57a
006AC515  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC518  66 8B 4C 50 02            MOV CX,word ptr [EAX + EDX*0x2 + 0x2]
006AC51D  66 85 C9                  TEST CX,CX
006AC520  74 0A                     JZ 0x006ac52c
006AC522  0F BF C9                  MOVSX ECX,CX
006AC525  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC528  3B CA                     CMP ECX,EDX
006AC52A  7E 4E                     JLE 0x006ac57a
LAB_006ac52c:
006AC52C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AC52F  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
006AC533  81 E2 00 C0 00 00         AND EDX,0xc000
006AC539  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC53F  74 39                     JZ 0x006ac57a
006AC541  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AC545  81 E2 00 C0 00 00         AND EDX,0xc000
006AC54B  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC551  74 27                     JZ 0x006ac57a
006AC553  8D 57 04                  LEA EDX,[EDI + 0x4]
006AC556  83 C6 04                  ADD ESI,0x4
006AC559  66 89 54 48 02            MOV word ptr [EAX + ECX*0x2 + 0x2],DX
006AC55E  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC561  8A CB                     MOV CL,BL
006AC563  FE C1                     INC CL
006AC565  FE C2                     INC DL
006AC567  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AC56A  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AC56D  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AC570  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC573  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC576  41                        INC ECX
006AC577  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac57a:
006AC57A  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006AC57D  83 C7 05                  ADD EDI,0x5
006AC580  85 C9                     TEST ECX,ECX
006AC582  0F 85 18 03 00 00         JNZ 0x006ac8a0
006AC588  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AC58B  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006AC58E  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AC592  81 E2 00 C0 00 00         AND EDX,0xc000
006AC598  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC59E  0F 84 FC 02 00 00         JZ 0x006ac8a0
006AC5A4  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006AC5A7  85 D2                     TEST EDX,EDX
006AC5A9  0F 85 C4 00 00 00         JNZ 0x006ac673
006AC5AF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC5B2  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006AC5B6  2B CA                     SUB ECX,EDX
006AC5B8  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AC5BB  66 8B 09                  MOV CX,word ptr [ECX]
006AC5BE  66 85 C9                  TEST CX,CX
006AC5C1  74 0B                     JZ 0x006ac5ce
006AC5C3  0F BF C9                  MOVSX ECX,CX
006AC5C6  3B CF                     CMP ECX,EDI
006AC5C8  0F 8E A5 00 00 00         JLE 0x006ac673
LAB_006ac5ce:
006AC5CE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC5D1  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006AC5D4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AC5D7  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006AC5DA  2B D1                     SUB EDX,ECX
006AC5DC  66 8B 12                  MOV DX,word ptr [EDX]
006AC5DF  81 E2 00 C0 00 00         AND EDX,0xc000
006AC5E5  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC5EB  0F 84 82 00 00 00         JZ 0x006ac673
006AC5F1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AC5F4  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006AC5F7  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006AC5FB  81 E2 00 C0 00 00         AND EDX,0xc000
006AC601  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC607  74 6A                     JZ 0x006ac673
006AC609  8B D0                     MOV EDX,EAX
006AC60B  2B D1                     SUB EDX,ECX
006AC60D  66 8B 0A                  MOV CX,word ptr [EDX]
006AC610  81 E1 00 C0 00 00         AND ECX,0xc000
006AC616  81 F9 00 C0 00 00         CMP ECX,0xc000
006AC61C  74 55                     JZ 0x006ac673
006AC61E  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AC622  81 E2 00 C0 00 00         AND EDX,0xc000
006AC628  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC62E  74 43                     JZ 0x006ac673
006AC630  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AC633  8B D0                     MOV EDX,EAX
006AC635  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006AC639  2B D1                     SUB EDX,ECX
006AC63B  66 8B 12                  MOV DX,word ptr [EDX]
006AC63E  81 E2 00 C0 00 00         AND EDX,0xc000
006AC644  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC64A  74 27                     JZ 0x006ac673
006AC64C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006AC64F  8A D3                     MOV DL,BL
006AC651  FE CA                     DEC DL
006AC653  83 C6 04                  ADD ESI,0x4
006AC656  66 89 39                  MOV word ptr [ECX],DI
006AC659  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AC65C  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AC65F  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC662  FE C9                     DEC CL
006AC664  FE C2                     INC DL
006AC666  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AC669  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC66C  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC66F  41                        INC ECX
006AC670  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac673:
006AC673  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006AC676  85 C9                     TEST ECX,ECX
006AC678  0F 85 B6 00 00 00         JNZ 0x006ac734
006AC67E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AC681  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006AC684  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AC687  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006AC68A  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
006AC68D  2B CA                     SUB ECX,EDX
006AC68F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AC692  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AC696  66 85 D2                  TEST DX,DX
006AC699  74 0B                     JZ 0x006ac6a6
006AC69B  0F BF D2                  MOVSX EDX,DX
006AC69E  3B D7                     CMP EDX,EDI
006AC6A0  0F 8E 8E 00 00 00         JLE 0x006ac734
LAB_006ac6a6:
006AC6A6  66 8B 09                  MOV CX,word ptr [ECX]
006AC6A9  81 E1 00 C0 00 00         AND ECX,0xc000
006AC6AF  81 F9 00 C0 00 00         CMP ECX,0xc000
006AC6B5  74 7D                     JZ 0x006ac734
006AC6B7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AC6BA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006AC6BD  66 8B 4C 50 02            MOV CX,word ptr [EAX + EDX*0x2 + 0x2]
006AC6C2  81 E1 00 C0 00 00         AND ECX,0xc000
006AC6C8  81 F9 00 C0 00 00         CMP ECX,0xc000
006AC6CE  74 64                     JZ 0x006ac734
006AC6D0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AC6D3  8B C8                     MOV ECX,EAX
006AC6D5  2B CA                     SUB ECX,EDX
006AC6D7  66 8B 11                  MOV DX,word ptr [ECX]
006AC6DA  81 E2 00 C0 00 00         AND EDX,0xc000
006AC6E0  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC6E6  74 4C                     JZ 0x006ac734
006AC6E8  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AC6EC  81 E2 00 C0 00 00         AND EDX,0xc000
006AC6F2  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC6F8  74 3A                     JZ 0x006ac734
006AC6FA  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006AC6FE  81 E1 00 C0 00 00         AND ECX,0xc000
006AC704  81 F9 00 C0 00 00         CMP ECX,0xc000
006AC70A  74 28                     JZ 0x006ac734
006AC70C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006AC70F  8A CB                     MOV CL,BL
006AC711  FE C1                     INC CL
006AC713  83 C6 04                  ADD ESI,0x4
006AC716  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006AC71A  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC71D  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AC720  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AC723  FE CA                     DEC DL
006AC725  FE C1                     INC CL
006AC727  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AC72A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC72D  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC730  41                        INC ECX
006AC731  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac734:
006AC734  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006AC737  85 C9                     TEST ECX,ECX
006AC739  0F 85 AB 00 00 00         JNZ 0x006ac7ea
006AC73F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AC742  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006AC745  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC748  66 8B 54 51 FE            MOV DX,word ptr [ECX + EDX*0x2 + -0x2]
006AC74D  66 85 D2                  TEST DX,DX
006AC750  74 0B                     JZ 0x006ac75d
006AC752  0F BF D2                  MOVSX EDX,DX
006AC755  3B D7                     CMP EDX,EDI
006AC757  0F 8E 8D 00 00 00         JLE 0x006ac7ea
LAB_006ac75d:
006AC75D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC760  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006AC764  81 E2 00 C0 00 00         AND EDX,0xc000
006AC76A  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC770  74 78                     JZ 0x006ac7ea
006AC772  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006AC776  81 E2 00 C0 00 00         AND EDX,0xc000
006AC77C  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC782  74 66                     JZ 0x006ac7ea
006AC784  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC787  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AC78B  81 E2 00 C0 00 00         AND EDX,0xc000
006AC791  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC797  74 51                     JZ 0x006ac7ea
006AC799  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006AC79D  81 E2 00 C0 00 00         AND EDX,0xc000
006AC7A3  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC7A9  74 3F                     JZ 0x006ac7ea
006AC7AB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC7AE  66 8B 54 50 FE            MOV DX,word ptr [EAX + EDX*0x2 + -0x2]
006AC7B3  81 E2 00 C0 00 00         AND EDX,0xc000
006AC7B9  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC7BF  74 29                     JZ 0x006ac7ea
006AC7C1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC7C4  83 C6 04                  ADD ESI,0x4
006AC7C7  66 89 7C 51 FE            MOV word ptr [ECX + EDX*0x2 + -0x2],DI
006AC7CC  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC7CF  8A CB                     MOV CL,BL
006AC7D1  FE C9                     DEC CL
006AC7D3  FE C2                     INC DL
006AC7D5  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AC7D8  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AC7DB  FE C1                     INC CL
006AC7DD  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC7E0  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AC7E3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC7E6  41                        INC ECX
006AC7E7  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac7ea:
006AC7EA  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AC7ED  85 C9                     TEST ECX,ECX
006AC7EF  0F 85 AB 00 00 00         JNZ 0x006ac8a0
006AC7F5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AC7F8  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006AC7FB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC7FE  66 8B 54 51 02            MOV DX,word ptr [ECX + EDX*0x2 + 0x2]
006AC803  66 85 D2                  TEST DX,DX
006AC806  74 0B                     JZ 0x006ac813
006AC808  0F BF D2                  MOVSX EDX,DX
006AC80B  3B D7                     CMP EDX,EDI
006AC80D  0F 8E 8D 00 00 00         JLE 0x006ac8a0
LAB_006ac813:
006AC813  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC816  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006AC81A  81 E2 00 C0 00 00         AND EDX,0xc000
006AC820  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC826  74 78                     JZ 0x006ac8a0
006AC828  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AC82C  81 E2 00 C0 00 00         AND EDX,0xc000
006AC832  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC838  74 66                     JZ 0x006ac8a0
006AC83A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC83D  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AC841  81 E2 00 C0 00 00         AND EDX,0xc000
006AC847  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC84D  74 51                     JZ 0x006ac8a0
006AC84F  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006AC853  81 E2 00 C0 00 00         AND EDX,0xc000
006AC859  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC85F  74 3F                     JZ 0x006ac8a0
006AC861  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC864  66 8B 54 50 02            MOV DX,word ptr [EAX + EDX*0x2 + 0x2]
006AC869  81 E2 00 C0 00 00         AND EDX,0xc000
006AC86F  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC875  74 29                     JZ 0x006ac8a0
006AC877  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC87A  83 C6 04                  ADD ESI,0x4
006AC87D  66 89 7C 51 02            MOV word ptr [ECX + EDX*0x2 + 0x2],DI
006AC882  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006AC885  8A CB                     MOV CL,BL
006AC887  FE C1                     INC CL
006AC889  FE C2                     INC DL
006AC88B  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006AC88E  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006AC891  FE C1                     INC CL
006AC893  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006AC896  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006AC899  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC89C  41                        INC ECX
006AC89D  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac8a0:
006AC8A0  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006AC8A3  85 C9                     TEST ECX,ECX
006AC8A5  0F 85 03 03 00 00         JNZ 0x006acbae
006AC8AB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AC8AE  8B C8                     MOV ECX,EAX
006AC8B0  03 D2                     ADD EDX,EDX
006AC8B2  2B CA                     SUB ECX,EDX
006AC8B4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006AC8B7  66 8B 11                  MOV DX,word ptr [ECX]
006AC8BA  81 E2 00 C0 00 00         AND EDX,0xc000
006AC8C0  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC8C6  0F 84 E2 02 00 00         JZ 0x006acbae
006AC8CC  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006AC8CF  85 D2                     TEST EDX,EDX
006AC8D1  0F 85 C7 00 00 00         JNZ 0x006ac99e
006AC8D7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC8DA  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006AC8DE  2B CA                     SUB ECX,EDX
006AC8E0  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AC8E3  66 8B 09                  MOV CX,word ptr [ECX]
006AC8E6  66 85 C9                  TEST CX,CX
006AC8E9  74 0B                     JZ 0x006ac8f6
006AC8EB  0F BF C9                  MOVSX ECX,CX
006AC8EE  3B CF                     CMP ECX,EDI
006AC8F0  0F 8E A5 00 00 00         JLE 0x006ac99b
LAB_006ac8f6:
006AC8F6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC8F9  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006AC8FC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AC8FF  2B D1                     SUB EDX,ECX
006AC901  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006AC904  66 8B 0A                  MOV CX,word ptr [EDX]
006AC907  81 E1 00 C0 00 00         AND ECX,0xc000
006AC90D  81 F9 00 C0 00 00         CMP ECX,0xc000
006AC913  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AC916  0F 84 82 00 00 00         JZ 0x006ac99e
006AC91C  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006AC920  81 E2 00 C0 00 00         AND EDX,0xc000
006AC926  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC92C  74 70                     JZ 0x006ac99e
006AC92E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AC931  8B C8                     MOV ECX,EAX
006AC933  2B CA                     SUB ECX,EDX
006AC935  66 8B 11                  MOV DX,word ptr [ECX]
006AC938  81 E2 00 C0 00 00         AND EDX,0xc000
006AC93E  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC944  74 55                     JZ 0x006ac99b
006AC946  66 8B 48 FE               MOV CX,word ptr [EAX + -0x2]
006AC94A  81 E1 00 C0 00 00         AND ECX,0xc000
006AC950  81 F9 00 C0 00 00         CMP ECX,0xc000
006AC956  74 43                     JZ 0x006ac99b
006AC958  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AC95B  8B D0                     MOV EDX,EAX
006AC95D  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006AC961  2B D1                     SUB EDX,ECX
006AC963  66 8B 12                  MOV DX,word ptr [EDX]
006AC966  81 E2 00 C0 00 00         AND EDX,0xc000
006AC96C  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC972  74 27                     JZ 0x006ac99b
006AC974  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006AC977  8A D3                     MOV DL,BL
006AC979  FE CA                     DEC DL
006AC97B  83 C6 04                  ADD ESI,0x4
006AC97E  66 89 39                  MOV word ptr [ECX],DI
006AC981  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
006AC984  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006AC987  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006AC98A  FE C9                     DEC CL
006AC98C  FE CA                     DEC DL
006AC98E  88 4E FD                  MOV byte ptr [ESI + -0x3],CL
006AC991  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AC994  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006AC997  41                        INC ECX
006AC998  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006ac99b:
006AC99B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006ac99e:
006AC99E  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006AC9A1  85 D2                     TEST EDX,EDX
006AC9A3  0F 85 AE 00 00 00         JNZ 0x006aca57
006AC9A9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006AC9AC  03 D2                     ADD EDX,EDX
006AC9AE  2B CA                     SUB ECX,EDX
006AC9B0  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006AC9B3  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AC9B6  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AC9BA  66 85 D2                  TEST DX,DX
006AC9BD  74 0B                     JZ 0x006ac9ca
006AC9BF  0F BF D2                  MOVSX EDX,DX
006AC9C2  3B D7                     CMP EDX,EDI
006AC9C4  0F 8E 8A 00 00 00         JLE 0x006aca54
LAB_006ac9ca:
006AC9CA  66 8B 09                  MOV CX,word ptr [ECX]
006AC9CD  81 E1 00 C0 00 00         AND ECX,0xc000
006AC9D3  81 F9 00 C0 00 00         CMP ECX,0xc000
006AC9D9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AC9DC  74 79                     JZ 0x006aca57
006AC9DE  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006AC9E2  81 E2 00 C0 00 00         AND EDX,0xc000
006AC9E8  81 FA 00 C0 00 00         CMP EDX,0xc000
006AC9EE  74 67                     JZ 0x006aca57
006AC9F0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AC9F3  8B C8                     MOV ECX,EAX
006AC9F5  2B CA                     SUB ECX,EDX
006AC9F7  66 8B 11                  MOV DX,word ptr [ECX]
006AC9FA  81 E2 00 C0 00 00         AND EDX,0xc000
006ACA00  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACA06  74 4C                     JZ 0x006aca54
006ACA08  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006ACA0C  81 E2 00 C0 00 00         AND EDX,0xc000
006ACA12  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACA18  74 3A                     JZ 0x006aca54
006ACA1A  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006ACA1E  81 E1 00 C0 00 00         AND ECX,0xc000
006ACA24  81 F9 00 C0 00 00         CMP ECX,0xc000
006ACA2A  74 28                     JZ 0x006aca54
006ACA2C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006ACA2F  8A CB                     MOV CL,BL
006ACA31  FE C1                     INC CL
006ACA33  83 C6 04                  ADD ESI,0x4
006ACA36  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006ACA3A  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ACA3D  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006ACA40  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006ACA43  FE CA                     DEC DL
006ACA45  FE C9                     DEC CL
006ACA47  88 4E FE                  MOV byte ptr [ESI + -0x2],CL
006ACA4A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006ACA4D  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ACA50  41                        INC ECX
006ACA51  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006aca54:
006ACA54  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006aca57:
006ACA57  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006ACA5A  85 D2                     TEST EDX,EDX
006ACA5C  0F 85 A5 00 00 00         JNZ 0x006acb07
006ACA62  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACA65  66 8B 54 51 FE            MOV DX,word ptr [ECX + EDX*0x2 + -0x2]
006ACA6A  66 85 D2                  TEST DX,DX
006ACA6D  74 0B                     JZ 0x006aca7a
006ACA6F  0F BF D2                  MOVSX EDX,DX
006ACA72  3B D7                     CMP EDX,EDI
006ACA74  0F 8E 8D 00 00 00         JLE 0x006acb07
LAB_006aca7a:
006ACA7A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACA7D  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006ACA81  81 E2 00 C0 00 00         AND EDX,0xc000
006ACA87  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACA8D  74 78                     JZ 0x006acb07
006ACA8F  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006ACA93  81 E2 00 C0 00 00         AND EDX,0xc000
006ACA99  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACA9F  74 66                     JZ 0x006acb07
006ACAA1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACAA4  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006ACAA8  81 E2 00 C0 00 00         AND EDX,0xc000
006ACAAE  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACAB4  74 51                     JZ 0x006acb07
006ACAB6  66 8B 50 FE               MOV DX,word ptr [EAX + -0x2]
006ACABA  81 E2 00 C0 00 00         AND EDX,0xc000
006ACAC0  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACAC6  74 3F                     JZ 0x006acb07
006ACAC8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACACB  66 8B 54 50 FE            MOV DX,word ptr [EAX + EDX*0x2 + -0x2]
006ACAD0  81 E2 00 C0 00 00         AND EDX,0xc000
006ACAD6  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACADC  74 29                     JZ 0x006acb07
006ACADE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACAE1  83 C6 04                  ADD ESI,0x4
006ACAE4  66 89 7C 51 FE            MOV word ptr [ECX + EDX*0x2 + -0x2],DI
006ACAE9  8A D3                     MOV DL,BL
006ACAEB  FE CA                     DEC DL
006ACAED  88 56 FC                  MOV byte ptr [ESI + -0x4],DL
006ACAF0  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ACAF3  FE C2                     INC DL
006ACAF5  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ACAF8  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006ACAFB  FE CA                     DEC DL
006ACAFD  88 56 FE                  MOV byte ptr [ESI + -0x2],DL
006ACB00  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006ACB03  42                        INC EDX
006ACB04  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006acb07:
006ACB07  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006ACB0A  85 D2                     TEST EDX,EDX
006ACB0C  0F 85 9C 00 00 00         JNZ 0x006acbae
006ACB12  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACB15  66 8B 54 51 02            MOV DX,word ptr [ECX + EDX*0x2 + 0x2]
006ACB1A  66 85 D2                  TEST DX,DX
006ACB1D  74 0B                     JZ 0x006acb2a
006ACB1F  0F BF D2                  MOVSX EDX,DX
006ACB22  3B D7                     CMP EDX,EDI
006ACB24  0F 8E 84 00 00 00         JLE 0x006acbae
LAB_006acb2a:
006ACB2A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACB2D  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006ACB31  81 E2 00 C0 00 00         AND EDX,0xc000
006ACB37  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACB3D  74 6F                     JZ 0x006acbae
006ACB3F  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006ACB43  81 E2 00 C0 00 00         AND EDX,0xc000
006ACB49  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACB4F  74 5D                     JZ 0x006acbae
006ACB51  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACB54  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006ACB58  81 E2 00 C0 00 00         AND EDX,0xc000
006ACB5E  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACB64  74 48                     JZ 0x006acbae
006ACB66  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
006ACB6A  81 E2 00 C0 00 00         AND EDX,0xc000
006ACB70  81 FA 00 C0 00 00         CMP EDX,0xc000
006ACB76  74 36                     JZ 0x006acbae
006ACB78  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006ACB7B  66 8B 44 50 02            MOV AX,word ptr [EAX + EDX*0x2 + 0x2]
006ACB80  25 00 C0 00 00            AND EAX,0xc000
006ACB85  3D 00 C0 00 00            CMP EAX,0xc000
006ACB8A  74 22                     JZ 0x006acbae
006ACB8C  66 89 7C 51 02            MOV word ptr [ECX + EDX*0x2 + 0x2],DI
LAB_006acb91:
006ACB91  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006ACB94  8A 45 20                  MOV AL,byte ptr [EBP + 0x20]
006ACB97  8A CB                     MOV CL,BL
006ACB99  83 C6 04                  ADD ESI,0x4
006ACB9C  FE C1                     INC CL
006ACB9E  FE C2                     INC DL
006ACBA0  88 4E FC                  MOV byte ptr [ESI + -0x4],CL
006ACBA3  FE C8                     DEC AL
006ACBA5  88 56 FD                  MOV byte ptr [ESI + -0x3],DL
006ACBA8  88 46 FE                  MOV byte ptr [ESI + -0x2],AL
006ACBAB  FF 45 18                  INC dword ptr [EBP + 0x18]
LAB_006acbae:
006ACBAE  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006ACBB1  85 C0                     TEST EAX,EAX
006ACBB3  74 4B                     JZ 0x006acc00
006ACBB5  66 83 38 00               CMP word ptr [EAX],0x0
006ACBB9  0F 8F 88 00 00 00         JG 0x006acc47
006ACBBF  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006ACBC2  85 C0                     TEST EAX,EAX
006ACBC4  74 3A                     JZ 0x006acc00
006ACBC6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006ACBC9  8D 4B FF                  LEA ECX,[EBX + -0x1]
006ACBCC  3B C1                     CMP EAX,ECX
006ACBCE  7C 30                     JL 0x006acc00
006ACBD0  43                        INC EBX
006ACBD1  3B C3                     CMP EAX,EBX
006ACBD3  7F 2B                     JG 0x006acc00
006ACBD5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006ACBD8  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006ACBDB  8D 51 FF                  LEA EDX,[ECX + -0x1]
006ACBDE  3B C2                     CMP EAX,EDX
006ACBE0  7C 1E                     JL 0x006acc00
006ACBE2  41                        INC ECX
006ACBE3  3B C1                     CMP EAX,ECX
006ACBE5  7F 19                     JG 0x006acc00
006ACBE7  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006ACBEA  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006ACBED  8D 51 FF                  LEA EDX,[ECX + -0x1]
006ACBF0  3B C2                     CMP EAX,EDX
006ACBF2  7C 0C                     JL 0x006acc00
006ACBF4  41                        INC ECX
006ACBF5  3B C1                     CMP EAX,ECX
006ACBF7  7F 07                     JG 0x006acc00
006ACBF9  C7 45 AC 01 00 00 00      MOV dword ptr [EBP + -0x54],0x1
LAB_006acc00:
006ACC00  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006ACC03  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006ACC06  40                        INC EAX
006ACC07  3B C1                     CMP EAX,ECX
006ACC09  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006ACC0C  0F 8C F9 E5 FF FF         JL 0x006ab20b
006ACC12  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006ACC15  85 C0                     TEST EAX,EAX
006ACC17  75 2E                     JNZ 0x006acc47
006ACC19  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006ACC1C  85 C0                     TEST EAX,EAX
006ACC1E  74 27                     JZ 0x006acc47
006ACC20  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006ACC23  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006ACC26  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006ACC29  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006ACC2C  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006ACC2F  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006ACC32  40                        INC EAX
006ACC33  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006ACC36  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006ACC39  33 DB                     XOR EBX,EBX
006ACC3B  E9 B7 E5 FF FF            JMP 0x006ab1f7
LAB_006acc40:
006ACC40  C7 45 B8 FE FF FF FF      MOV dword ptr [EBP + -0x48],0xfffffffe
LAB_006acc47:
006ACC47  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006ACC4A  85 C0                     TEST EAX,EAX
006ACC4C  7D 06                     JGE 0x006acc54
006ACC4E  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006ACC51  66 89 01                  MOV word ptr [ECX],AX
LAB_006acc54:
006ACC54  8D 55 CC                  LEA EDX,[EBP + -0x34]
006ACC57  52                        PUSH EDX
006ACC58  E8 03 E4 FF FF            CALL 0x006ab060
006ACC5D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006ACC60  5F                        POP EDI
006ACC61  5E                        POP ESI
006ACC62  5B                        POP EBX
006ACC63  8B E5                     MOV ESP,EBP
006ACC65  5D                        POP EBP
006ACC66  C2 28 00                  RET 0x28
