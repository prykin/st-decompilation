FUN_004ed630:
004ED630  55                        PUSH EBP
004ED631  8B EC                     MOV EBP,ESP
004ED633  81 EC 90 09 00 00         SUB ESP,0x990
004ED639  53                        PUSH EBX
004ED63A  56                        PUSH ESI
004ED63B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004ED63E  57                        PUSH EDI
004ED63F  B9 14 00 00 00            MOV ECX,0x14
004ED644  33 C0                     XOR EAX,EAX
004ED646  8D 7D 9C                  LEA EDI,[EBP + -0x64]
004ED649  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
004ED64F  F3 AB                     STOSD.REP ES:EDI
004ED651  B9 3A 02 00 00            MOV ECX,0x23a
004ED656  8D BD 70 F6 FF FF         LEA EDI,[EBP + 0xfffff670]
004ED65C  F3 AB                     STOSD.REP ES:EDI
004ED65E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004ED663  8D 8D 58 FF FF FF         LEA ECX,[EBP + 0xffffff58]
004ED669  6A 00                     PUSH 0x0
004ED66B  52                        PUSH EDX
004ED66C  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
004ED672  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ED678  E8 73 01 24 00            CALL 0x0072d7f0
004ED67D  8B F0                     MOV ESI,EAX
004ED67F  83 C4 08                  ADD ESP,0x8
004ED682  85 F6                     TEST ESI,ESI
004ED684  0F 85 5D 05 00 00         JNZ 0x004edbe7
004ED68A  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004ED68D  6A 77                     PUSH 0x77
004ED68F  68 99 00 00 00            PUSH 0x99
004ED694  68 5D 4E 00 00            PUSH 0x4e5d
004ED699  6A 0B                     PUSH 0xb
004ED69B  68 84 00 00 00            PUSH 0x84
004ED6A0  6A 03                     PUSH 0x3
004ED6A2  6A 36                     PUSH 0x36
004ED6A4  50                        PUSH EAX
004ED6A5  68 04 17 7C 00            PUSH 0x7c1704
004ED6AA  89 3D 78 16 80 00         MOV dword ptr [0x00801678],EDI
004ED6B0  E8 C7 80 F1 FF            CALL 0x0040577c
004ED6B5  83 C4 08                  ADD ESP,0x8
004ED6B8  8B CF                     MOV ECX,EDI
004ED6BA  50                        PUSH EAX
004ED6BB  E8 40 61 F1 FF            CALL 0x00403800
004ED6C0  A1 94 67 80 00            MOV EAX,[0x00806794]
004ED6C5  56                        PUSH ESI
004ED6C6  56                        PUSH ESI
004ED6C7  6A 01                     PUSH 0x1
004ED6C9  56                        PUSH ESI
004ED6CA  6A FF                     PUSH -0x1
004ED6CC  68 F4 16 7C 00            PUSH 0x7c16f4
004ED6D1  6A 0B                     PUSH 0xb
004ED6D3  50                        PUSH EAX
004ED6D4  E8 17 C4 21 00            CALL 0x00709af0
004ED6D9  89 87 B8 02 00 00         MOV dword ptr [EDI + 0x2b8],EAX
004ED6DF  C6 87 AF 01 00 00 2B      MOV byte ptr [EDI + 0x1af],0x2b
004ED6E6  C6 87 B0 01 00 00 2C      MOV byte ptr [EDI + 0x1b0],0x2c
004ED6ED  C6 87 B1 01 00 00 05      MOV byte ptr [EDI + 0x1b1],0x5
004ED6F4  C6 87 B2 01 00 00 06      MOV byte ptr [EDI + 0x1b2],0x6
004ED6FB  C6 87 B3 01 00 00 4D      MOV byte ptr [EDI + 0x1b3],0x4d
004ED702  C6 87 B4 01 00 00 2D      MOV byte ptr [EDI + 0x1b4],0x2d
004ED709  A0 4E 87 80 00            MOV AL,[0x0080874e]
004ED70E  83 C4 20                  ADD ESP,0x20
004ED711  C6 45 F4 00               MOV byte ptr [EBP + -0xc],0x0
LAB_004ed715:
004ED715  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
004ED718  3C 03                     CMP AL,0x3
004ED71A  0F 85 82 00 00 00         JNZ 0x004ed7a2
004ED720  81 E3 FF 00 00 00         AND EBX,0xff
004ED726  83 FB 05                  CMP EBX,0x5
004ED729  0F 87 D5 00 00 00         JA 0x004ed804
switchD_004ed72f::switchD:
004ED72F  FF 24 9D 2C DC 4E 00      JMP dword ptr [EBX*0x4 + 0x4edc2c]
switchD_004ed72f::caseD_0:
004ED736  C7 45 F8 24 00 00 00      MOV dword ptr [EBP + -0x8],0x24
004ED73D  C7 45 FC 12 00 00 00      MOV dword ptr [EBP + -0x4],0x12
004ED744  E9 BB 00 00 00            JMP 0x004ed804
switchD_004ed72f::caseD_1:
004ED749  C7 45 F8 61 00 00 00      MOV dword ptr [EBP + -0x8],0x61
004ED750  C7 45 FC 12 00 00 00      MOV dword ptr [EBP + -0x4],0x12
004ED757  E9 A8 00 00 00            JMP 0x004ed804
switchD_004ed72f::caseD_2:
004ED75C  C7 45 F8 96 00 00 00      MOV dword ptr [EBP + -0x8],0x96
004ED763  C7 45 FC 12 00 00 00      MOV dword ptr [EBP + -0x4],0x12
004ED76A  E9 95 00 00 00            JMP 0x004ed804
switchD_004ed72f::caseD_3:
004ED76F  C7 45 F8 24 00 00 00      MOV dword ptr [EBP + -0x8],0x24
004ED776  C7 45 FC 2C 00 00 00      MOV dword ptr [EBP + -0x4],0x2c
004ED77D  E9 82 00 00 00            JMP 0x004ed804
switchD_004ed72f::caseD_4:
004ED782  C7 45 F8 61 00 00 00      MOV dword ptr [EBP + -0x8],0x61
004ED789  C7 45 FC 2C 00 00 00      MOV dword ptr [EBP + -0x4],0x2c
004ED790  EB 72                     JMP 0x004ed804
switchD_004ed72f::caseD_5:
004ED792  C7 45 F8 96 00 00 00      MOV dword ptr [EBP + -0x8],0x96
004ED799  C7 45 FC 2C 00 00 00      MOV dword ptr [EBP + -0x4],0x2c
004ED7A0  EB 62                     JMP 0x004ed804
LAB_004ed7a2:
004ED7A2  81 E3 FF 00 00 00         AND EBX,0xff
004ED7A8  83 FB 05                  CMP EBX,0x5
004ED7AB  77 57                     JA 0x004ed804
switchD_004ed7ad::switchD:
004ED7AD  FF 24 9D 44 DC 4E 00      JMP dword ptr [EBX*0x4 + 0x4edc44]
switchD_004ed7ad::caseD_0:
004ED7B4  C7 45 F8 20 00 00 00      MOV dword ptr [EBP + -0x8],0x20
004ED7BB  C7 45 FC 15 00 00 00      MOV dword ptr [EBP + -0x4],0x15
004ED7C2  EB 40                     JMP 0x004ed804
switchD_004ed7ad::caseD_1:
004ED7C4  C7 45 F8 5D 00 00 00      MOV dword ptr [EBP + -0x8],0x5d
004ED7CB  C7 45 FC 15 00 00 00      MOV dword ptr [EBP + -0x4],0x15
004ED7D2  EB 30                     JMP 0x004ed804
switchD_004ed7ad::caseD_2:
004ED7D4  C7 45 F8 9A 00 00 00      MOV dword ptr [EBP + -0x8],0x9a
004ED7DB  C7 45 FC 15 00 00 00      MOV dword ptr [EBP + -0x4],0x15
004ED7E2  EB 20                     JMP 0x004ed804
switchD_004ed7ad::caseD_3:
004ED7E4  C7 45 F8 20 00 00 00      MOV dword ptr [EBP + -0x8],0x20
004ED7EB  EB 10                     JMP 0x004ed7fd
switchD_004ed7ad::caseD_4:
004ED7ED  C7 45 F8 5D 00 00 00      MOV dword ptr [EBP + -0x8],0x5d
004ED7F4  EB 07                     JMP 0x004ed7fd
switchD_004ed7ad::caseD_5:
004ED7F6  C7 45 F8 9A 00 00 00      MOV dword ptr [EBP + -0x8],0x9a
LAB_004ed7fd:
004ED7FD  C7 45 FC 39 00 00 00      MOV dword ptr [EBP + -0x4],0x39
switchD_004ed72f::default:
004ED804  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004ED807  8B 57 3C                  MOV EDX,dword ptr [EDI + 0x3c]
004ED80A  8D 34 5B                  LEA ESI,[EBX + EBX*0x2]
004ED80D  03 CA                     ADD ECX,EDX
004ED80F  C1 E6 05                  SHL ESI,0x5
004ED812  2B F3                     SUB ESI,EBX
004ED814  C1 E6 02                  SHL ESI,0x2
004ED817  C7 84 35 70 F6 FF FF 00 00 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff670],0x0
004ED822  89 8C 35 78 F6 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff678],ECX
004ED829  8B 4F 5C                  MOV ECX,dword ptr [EDI + 0x5c]
004ED82C  85 C9                     TEST ECX,ECX
004ED82E  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
004ED834  74 03                     JZ 0x004ed839
004ED836  8B 4F 44                  MOV ECX,dword ptr [EDI + 0x44]
LAB_004ed839:
004ED839  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004ED83C  6A 00                     PUSH 0x0
004ED83E  03 CA                     ADD ECX,EDX
004ED840  6A 00                     PUSH 0x0
004ED842  89 8C 35 7C F6 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff67c],ECX
004ED849  B9 01 00 00 00            MOV ECX,0x1
004ED84E  51                        PUSH ECX
004ED84F  6A 00                     PUSH 0x0
004ED851  6A FF                     PUSH -0x1
004ED853  6A 00                     PUSH 0x0
004ED855  51                        PUSH ECX
004ED856  89 8C 35 78 F7 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff778],ECX
004ED85D  3C 03                     CMP AL,0x3
004ED85F  6A 00                     PUSH 0x0
004ED861  89 8C 35 7C F7 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff77c],ECX
004ED868  6A 00                     PUSH 0x0
004ED86A  75 2E                     JNZ 0x004ed89a
004ED86C  8A 84 3B AF 01 00 00      MOV AL,byte ptr [EBX + EDI*0x1 + 0x1af]
004ED873  50                        PUSH EAX
004ED874  E8 1A 7C F1 FF            CALL 0x00405493
004ED879  83 C4 08                  ADD ESP,0x8
004ED87C  50                        PUSH EAX
004ED87D  E8 FA 7E F1 FF            CALL 0x0040577c
004ED882  83 C4 08                  ADD ESP,0x8
004ED885  50                        PUSH EAX
004ED886  E8 75 53 20 00            CALL 0x006f2c00
004ED88B  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004ED891  83 C4 0C                  ADD ESP,0xc
004ED894  50                        PUSH EAX
004ED895  6A 06                     PUSH 0x6
004ED897  51                        PUSH ECX
004ED898  EB 2B                     JMP 0x004ed8c5
LAB_004ed89a:
004ED89A  8A 94 3B AF 01 00 00      MOV DL,byte ptr [EBX + EDI*0x1 + 0x1af]
004ED8A1  52                        PUSH EDX
004ED8A2  E8 EC 7B F1 FF            CALL 0x00405493
004ED8A7  83 C4 08                  ADD ESP,0x8
004ED8AA  50                        PUSH EAX
004ED8AB  E8 CC 7E F1 FF            CALL 0x0040577c
004ED8B0  83 C4 08                  ADD ESP,0x8
004ED8B3  50                        PUSH EAX
004ED8B4  E8 47 53 20 00            CALL 0x006f2c00
004ED8B9  83 C4 0C                  ADD ESP,0xc
004ED8BC  50                        PUSH EAX
004ED8BD  A1 94 67 80 00            MOV EAX,[0x00806794]
004ED8C2  6A 01                     PUSH 0x1
004ED8C4  50                        PUSH EAX
LAB_004ed8c5:
004ED8C5  E8 26 C2 21 00            CALL 0x00709af0
004ED8CA  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004ED8CD  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
004ED8D0  89 8C 35 80 F6 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff680],ECX
004ED8D7  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
004ED8DA  C1 E1 03                  SHL ECX,0x3
004ED8DD  2B CB                     SUB ECX,EBX
004ED8DF  89 84 35 84 F6 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff684],EAX
004ED8E6  83 C4 20                  ADD ESP,0x20
004ED8E9  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
004ED8EC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004ED8EF  05 CE 01 00 00            ADD EAX,0x1ce
004ED8F4  6A 00                     PUSH 0x0
004ED8F6  C6 00 01                  MOV byte ptr [EAX],0x1
004ED8F9  8A 94 3B AF 01 00 00      MOV DL,byte ptr [EBX + EDI*0x1 + 0x1af]
004ED900  52                        PUSH EDX
004ED901  E8 72 41 F1 FF            CALL 0x00401a78
004ED906  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004ED909  89 81 CF 01 00 00         MOV dword ptr [ECX + 0x1cf],EAX
004ED90F  8A 94 3B AF 01 00 00      MOV DL,byte ptr [EBX + EDI*0x1 + 0x1af]
004ED916  52                        PUSH EDX
004ED917  E8 03 5E F1 FF            CALL 0x0040371f
004ED91C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004ED91F  C7 84 35 F0 F6 FF FF 01 01 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff6f0],0x101
004ED92A  C7 84 35 F4 F6 FF FF 03 00 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff6f4],0x3
004ED935  C7 84 35 F8 F6 FF FF 01 42 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff6f8],0x4201
004ED940  89 81 D7 01 00 00         MOV dword ptr [ECX + 0x1d7],EAX
004ED946  BA 01 00 00 00            MOV EDX,0x1
004ED94B  66 C7 84 35 FC F6 FF FF 00 00  MOV word ptr [EBP + ESI*0x1 + 0xfffff6fc],0x0
004ED955  8D 81 CE 01 00 00         LEA EAX,[ECX + 0x1ce]
004ED95B  66 89 94 35 FE F6 FF FF   MOV word ptr [EBP + ESI*0x1 + 0xfffff6fe],DX
004ED963  89 84 35 00 F7 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff700],EAX
004ED96A  C7 84 35 08 F7 FF FF 00 00 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff708],0x0
004ED975  89 94 35 2C F7 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff72c],EDX
004ED97C  C7 84 35 14 F7 FF FF 01 01 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff714],0x101
004ED987  C6 81 DB 01 00 00 03      MOV byte ptr [ECX + 0x1db],0x3
004ED98E  8B 89 D7 01 00 00         MOV ECX,dword ptr [ECX + 0x1d7]
004ED994  C7 84 35 18 F7 FF FF 03 00 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff718],0x3
004ED99F  C7 84 35 1C F7 FF FF 02 42 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff71c],0x4202
004ED9AA  83 C4 0C                  ADD ESP,0xc
004ED9AD  66 C7 84 35 20 F7 FF FF 00 00  MOV word ptr [EBP + ESI*0x1 + 0xfffff720],0x0
004ED9B7  66 89 94 35 22 F7 FF FF   MOV word ptr [EBP + ESI*0x1 + 0xfffff722],DX
004ED9BF  85 C9                     TEST ECX,ECX
004ED9C1  89 84 35 24 F7 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff724],EAX
004ED9C8  7C 19                     JL 0x004ed9e3
004ED9CA  8B 04 8D 66 7E 80 00      MOV EAX,dword ptr [ECX*0x4 + 0x807e66]
004ED9D1  C7 84 35 9C F7 FF FF 08 00 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff79c],0x8
004ED9DC  89 84 35 A0 F7 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff7a0],EAX
LAB_004ed9e3:
004ED9E3  A0 4E 87 80 00            MOV AL,[0x0080874e]
004ED9E8  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
004ED9EB  3C 03                     CMP AL,0x3
004ED9ED  89 94 35 80 F7 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff780],EDX
004ED9F4  75 51                     JNZ 0x004eda47
004ED9F6  84 C9                     TEST CL,CL
004ED9F8  74 13                     JZ 0x004eda0d
004ED9FA  80 F9 01                  CMP CL,0x1
004ED9FD  76 48                     JBE 0x004eda47
004ED9FF  80 F9 04                  CMP CL,0x4
004EDA02  77 43                     JA 0x004eda47
004EDA04  84 C9                     TEST CL,CL
004EDA06  74 05                     JZ 0x004eda0d
004EDA08  8D 4B FF                  LEA ECX,[EBX + -0x1]
004EDA0B  EB 02                     JMP 0x004eda0f
LAB_004eda0d:
004EDA0D  33 C9                     XOR ECX,ECX
LAB_004eda0f:
004EDA0F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004EDA12  51                        PUSH ECX
004EDA13  8B 8F B8 02 00 00         MOV ECX,dword ptr [EDI + 0x2b8]
004EDA19  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
004EDA1C  51                        PUSH ECX
004EDA1D  C1 E6 05                  SHL ESI,0x5
004EDA20  2B F0                     SUB ESI,EAX
004EDA22  C1 E6 02                  SHL ESI,0x2
004EDA25  E8 76 D9 21 00            CALL 0x0070b3a0
004EDA2A  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
004EDA2D  89 84 35 94 F7 FF FF      MOV dword ptr [EBP + ESI*0x1 + 0xfffff794],EAX
004EDA34  A0 4E 87 80 00            MOV AL,[0x0080874e]
004EDA39  83 C4 08                  ADD ESP,0x8
004EDA3C  C7 84 35 98 F7 FF FF 3C 00 00 00  MOV dword ptr [EBP + ESI*0x1 + 0xfffff798],0x3c
LAB_004eda47:
004EDA47  FE C1                     INC CL
004EDA49  80 F9 06                  CMP CL,0x6
004EDA4C  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
004EDA4F  0F 82 C0 FC FF FF         JC 0x004ed715
004EDA55  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
004EDA58  2C 03                     SUB AL,0x3
004EDA5A  F6 D8                     NEG AL
004EDA5C  8D 95 70 F6 FF FF         LEA EDX,[EBP + 0xfffff670]
004EDA62  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004EDA65  1B C0                     SBB EAX,EAX
004EDA67  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004EDA6A  24 F2                     AND AL,0xf2
004EDA6C  8D 55 9C                  LEA EDX,[EBP + -0x64]
004EDA6F  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004EDA72  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
004EDA75  6A 00                     PUSH 0x0
004EDA77  BE 02 00 00 00            MOV ESI,0x2
004EDA7C  05 0E B2 00 00            ADD EAX,0xb20e
004EDA81  52                        PUSH EDX
004EDA82  8D 97 BE 01 00 00         LEA EDX,[EDI + 0x1be]
004EDA88  C7 45 9C 01 00 00 00      MOV dword ptr [EBP + -0x64],0x1
004EDA8F  C7 45 A0 FF FF FF FF      MOV dword ptr [EBP + -0x60],0xffffffff
004EDA96  C7 45 E4 06 00 00 00      MOV dword ptr [EBP + -0x1c],0x6
004EDA9D  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
004EDAA0  C7 45 B4 FF B1 00 00      MOV dword ptr [EBP + -0x4c],0xb1ff
004EDAA7  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
004EDAAA  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004EDAAD  8B 01                     MOV EAX,dword ptr [ECX]
004EDAAF  6A 00                     PUSH 0x0
004EDAB1  52                        PUSH EDX
004EDAB2  6A 09                     PUSH 0x9
004EDAB4  FF 50 08                  CALL dword ptr [EAX + 0x8]
004EDAB7  6A 01                     PUSH 0x1
004EDAB9  8B 1F                     MOV EBX,dword ptr [EDI]
004EDABB  6A 00                     PUSH 0x0
004EDABD  68 8A 4E 00 00            PUSH 0x4e8a
004EDAC2  6A 00                     PUSH 0x0
004EDAC4  56                        PUSH ESI
004EDAC5  68 AF C0 00 00            PUSH 0xc0af
004EDACA  68 9F C0 00 00            PUSH 0xc09f
004EDACF  6A 00                     PUSH 0x0
004EDAD1  68 E8 16 7C 00            PUSH 0x7c16e8
004EDAD6  E8 A1 7C F1 FF            CALL 0x0040577c
004EDADB  83 C4 08                  ADD ESP,0x8
004EDADE  50                        PUSH EAX
004EDADF  A0 4E 87 80 00            MOV AL,[0x0080874e]
004EDAE4  8A C8                     MOV CL,AL
004EDAE6  6A 01                     PUSH 0x1
004EDAE8  80 E9 03                  SUB CL,0x3
004EDAEB  6A 01                     PUSH 0x1
004EDAED  F6 D9                     NEG CL
004EDAEF  1B C9                     SBB ECX,ECX
004EDAF1  2C 03                     SUB AL,0x3
004EDAF3  83 E1 07                  AND ECX,0x7
004EDAF6  6A 00                     PUSH 0x0
004EDAF8  83 C1 5A                  ADD ECX,0x5a
004EDAFB  F6 D8                     NEG AL
004EDAFD  1B C0                     SBB EAX,EAX
004EDAFF  51                        PUSH ECX
004EDB00  23 C6                     AND EAX,ESI
004EDB02  8B CF                     MOV ECX,EDI
004EDB04  83 C0 1F                  ADD EAX,0x1f
004EDB07  50                        PUSH EAX
004EDB08  6A 00                     PUSH 0x0
004EDB0A  6A 00                     PUSH 0x0
004EDB0C  FF 53 04                  CALL dword ptr [EBX + 0x4]
004EDB0F  6A 01                     PUSH 0x1
004EDB11  8B 1F                     MOV EBX,dword ptr [EDI]
004EDB13  6A 00                     PUSH 0x0
004EDB15  68 88 4E 00 00            PUSH 0x4e88
004EDB1A  6A 00                     PUSH 0x0
004EDB1C  56                        PUSH ESI
004EDB1D  68 B0 C0 00 00            PUSH 0xc0b0
004EDB22  68 A0 C0 00 00            PUSH 0xc0a0
004EDB27  6A 00                     PUSH 0x0
004EDB29  68 E8 16 7C 00            PUSH 0x7c16e8
004EDB2E  89 87 C2 01 00 00         MOV dword ptr [EDI + 0x1c2],EAX
004EDB34  E8 43 7C F1 FF            CALL 0x0040577c
004EDB39  83 C4 08                  ADD ESP,0x8
004EDB3C  50                        PUSH EAX
004EDB3D  A0 4E 87 80 00            MOV AL,[0x0080874e]
004EDB42  6A 01                     PUSH 0x1
004EDB44  6A 01                     PUSH 0x1
004EDB46  6A 00                     PUSH 0x0
004EDB48  8A D0                     MOV DL,AL
004EDB4A  80 EA 03                  SUB DL,0x3
004EDB4D  8B CF                     MOV ECX,EDI
004EDB4F  F6 DA                     NEG DL
004EDB51  1B D2                     SBB EDX,EDX
004EDB53  2C 03                     SUB AL,0x3
004EDB55  83 E2 07                  AND EDX,0x7
004EDB58  83 C2 5A                  ADD EDX,0x5a
004EDB5B  F6 D8                     NEG AL
004EDB5D  1B C0                     SBB EAX,EAX
004EDB5F  52                        PUSH EDX
004EDB60  83 E0 06                  AND EAX,0x6
004EDB63  83 C0 45                  ADD EAX,0x45
004EDB66  50                        PUSH EAX
004EDB67  6A 00                     PUSH 0x0
004EDB69  6A 00                     PUSH 0x0
004EDB6B  FF 53 04                  CALL dword ptr [EBX + 0x4]
004EDB6E  6A 01                     PUSH 0x1
004EDB70  8B 1F                     MOV EBX,dword ptr [EDI]
004EDB72  6A 00                     PUSH 0x0
004EDB74  68 89 4E 00 00            PUSH 0x4e89
004EDB79  6A 00                     PUSH 0x0
004EDB7B  56                        PUSH ESI
004EDB7C  68 B1 C0 00 00            PUSH 0xc0b1
004EDB81  68 A1 C0 00 00            PUSH 0xc0a1
004EDB86  6A 00                     PUSH 0x0
004EDB88  68 DC 16 7C 00            PUSH 0x7c16dc
004EDB8D  89 87 C6 01 00 00         MOV dword ptr [EDI + 0x1c6],EAX
004EDB93  E8 E4 7B F1 FF            CALL 0x0040577c
004EDB98  83 C4 08                  ADD ESP,0x8
004EDB9B  50                        PUSH EAX
004EDB9C  A0 4E 87 80 00            MOV AL,[0x0080874e]
004EDBA1  8A C8                     MOV CL,AL
004EDBA3  6A 01                     PUSH 0x1
004EDBA5  80 E9 03                  SUB CL,0x3
004EDBA8  6A 01                     PUSH 0x1
004EDBAA  F6 D9                     NEG CL
004EDBAC  1B C9                     SBB ECX,ECX
004EDBAE  2C 03                     SUB AL,0x3
004EDBB0  83 E1 07                  AND ECX,0x7
004EDBB3  6A 00                     PUSH 0x0
004EDBB5  83 C1 5A                  ADD ECX,0x5a
004EDBB8  F6 D8                     NEG AL
004EDBBA  1B C0                     SBB EAX,EAX
004EDBBC  51                        PUSH ECX
004EDBBD  24 FD                     AND AL,0xfd
004EDBBF  8B CF                     MOV ECX,EDI
004EDBC1  05 B3 00 00 00            ADD EAX,0xb3
004EDBC6  50                        PUSH EAX
004EDBC7  6A 00                     PUSH 0x0
004EDBC9  6A 00                     PUSH 0x0
004EDBCB  FF 53 04                  CALL dword ptr [EBX + 0x4]
004EDBCE  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
004EDBD4  89 87 CA 01 00 00         MOV dword ptr [EDI + 0x1ca],EAX
004EDBDA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EDBE0  5F                        POP EDI
004EDBE1  5E                        POP ESI
004EDBE2  5B                        POP EBX
004EDBE3  8B E5                     MOV ESP,EBP
004EDBE5  5D                        POP EBP
004EDBE6  C3                        RET
LAB_004edbe7:
004EDBE7  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
004EDBED  68 BC 16 7C 00            PUSH 0x7c16bc
004EDBF2  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EDBF7  56                        PUSH ESI
004EDBF8  6A 00                     PUSH 0x0
004EDBFA  6A 68                     PUSH 0x68
004EDBFC  68 94 16 7C 00            PUSH 0x7c1694
004EDC01  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EDC06  E8 C5 F8 1B 00            CALL 0x006ad4d0
004EDC0B  83 C4 18                  ADD ESP,0x18
004EDC0E  85 C0                     TEST EAX,EAX
004EDC10  74 01                     JZ 0x004edc13
004EDC12  CC                        INT3
LAB_004edc13:
004EDC13  6A 68                     PUSH 0x68
004EDC15  68 94 16 7C 00            PUSH 0x7c1694
004EDC1A  6A 00                     PUSH 0x0
004EDC1C  56                        PUSH ESI
004EDC1D  E8 1E 82 1B 00            CALL 0x006a5e40
004EDC22  5F                        POP EDI
004EDC23  5E                        POP ESI
004EDC24  5B                        POP EBX
004EDC25  8B E5                     MOV ESP,EBP
004EDC27  5D                        POP EBP
004EDC28  C3                        RET
