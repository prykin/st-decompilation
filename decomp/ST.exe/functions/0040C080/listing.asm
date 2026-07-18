FUN_0040c080:
0040C080  55                        PUSH EBP
0040C081  8B EC                     MOV EBP,ESP
0040C083  6A FF                     PUSH -0x1
0040C085  68 20 00 79 00            PUSH 0x790020
0040C08A  68 64 D9 72 00            PUSH 0x72d964
0040C08F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0040C095  50                        PUSH EAX
0040C096  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0040C09D  81 EC AC 00 00 00         SUB ESP,0xac
0040C0A3  53                        PUSH EBX
0040C0A4  56                        PUSH ESI
0040C0A5  57                        PUSH EDI
0040C0A6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040C0A9  8B F9                     MOV EDI,ECX
0040C0AB  89 BD 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EDI
0040C0B1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040C0B4  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
0040C0B7  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
0040C0BA  85 F6                     TEST ESI,ESI
0040C0BC  75 12                     JNZ 0x0040c0d0
0040C0BE  6A 04                     PUSH 0x4
0040C0C0  E8 AB EB 29 00            CALL 0x006aac70
0040C0C5  C7 00 FC FF FF FF         MOV dword ptr [EAX],0xfffffffc
0040C0CB  E9 1A 09 00 00            JMP 0x0040c9ea
LAB_0040c0d0:
0040C0D0  8D 0C B5 00 00 00 00      LEA ECX,[ESI*0x4 + 0x0]
0040C0D7  51                        PUSH ECX
0040C0D8  E8 93 EB 29 00            CALL 0x006aac70
0040C0DD  8B D8                     MOV EBX,EAX
0040C0DF  89 9D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EBX
0040C0E5  85 DB                     TEST EBX,EBX
0040C0E7  0F 84 FD 08 00 00         JZ 0x0040c9ea
0040C0ED  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040C0F0  52                        PUSH EDX
0040C0F1  8B CF                     MOV ECX,EDI
0040C0F3  E8 77 67 FF FF            CALL 0x0040286f
0040C0F8  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0040C0FE  85 C0                     TEST EAX,EAX
0040C100  0F 84 D3 08 00 00         JZ 0x0040c9d9
0040C106  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0040C10D  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
0040C110  C1 E0 02                  SHL EAX,0x2
0040C113  83 C0 03                  ADD EAX,0x3
0040C116  24 FC                     AND AL,0xfc
0040C118  E8 23 19 32 00            CALL 0x0072da40
0040C11D  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040C120  8B C4                     MOV EAX,ESP
0040C122  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0040C128  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0040C12F  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0040C135  0F BF 70 47               MOVSX ESI,word ptr [EAX + 0x47]
0040C139  89 75 90                  MOV dword ptr [EBP + -0x70],ESI
0040C13C  0F BF 48 49               MOVSX ECX,word ptr [EAX + 0x49]
0040C140  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
0040C146  0F BF 58 4B               MOVSX EBX,word ptr [EAX + 0x4b]
0040C14A  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
0040C150  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
0040C153  33 D2                     XOR EDX,EDX
0040C155  33 FF                     XOR EDI,EDI
0040C157  39 55 84                  CMP dword ptr [EBP + -0x7c],EDX
0040C15A  0F 8E 9A 00 00 00         JLE 0x0040c1fa
LAB_0040c160:
0040C160  8D 85 74 FF FF FF         LEA EAX,[EBP + 0xffffff74]
0040C166  50                        PUSH EAX
0040C167  8B D7                     MOV EDX,EDI
0040C169  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040C16C  E8 FF 0A 2A 00            CALL 0x006acc70
0040C171  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0040C174  51                        PUSH ECX
0040C175  8D 55 B8                  LEA EDX,[EBP + -0x48]
0040C178  52                        PUSH EDX
0040C179  8D 45 E0                  LEA EAX,[EBP + -0x20]
0040C17C  50                        PUSH EAX
0040C17D  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
0040C183  E8 83 9D FF FF            CALL 0x00405f0b
0040C188  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
0040C18C  39 4D 90                  CMP dword ptr [EBP + -0x70],ECX
0040C18F  7E 03                     JLE 0x0040c194
0040C191  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
LAB_0040c194:
0040C194  3B F1                     CMP ESI,ECX
0040C196  7D 02                     JGE 0x0040c19a
0040C198  8B F1                     MOV ESI,ECX
LAB_0040c19a:
0040C19A  0F BF 45 B8               MOVSX EAX,word ptr [EBP + -0x48]
0040C19E  39 85 68 FF FF FF         CMP dword ptr [EBP + 0xffffff68],EAX
0040C1A4  7E 06                     JLE 0x0040c1ac
0040C1A6  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
LAB_0040c1ac:
0040C1AC  39 85 5C FF FF FF         CMP dword ptr [EBP + 0xffffff5c],EAX
0040C1B2  7D 06                     JGE 0x0040c1ba
0040C1B4  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
LAB_0040c1ba:
0040C1BA  0F BF 45 8C               MOVSX EAX,word ptr [EBP + -0x74]
0040C1BE  3B D8                     CMP EBX,EAX
0040C1C0  7E 02                     JLE 0x0040c1c4
0040C1C2  8B D8                     MOV EBX,EAX
LAB_0040c1c4:
0040C1C4  39 45 D4                  CMP dword ptr [EBP + -0x2c],EAX
0040C1C7  7D 03                     JGE 0x0040c1cc
0040C1C9  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_0040c1cc:
0040C1CC  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
0040C1CF  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0040C1D5  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
0040C1D8  89 08                     MOV dword ptr [EAX],ECX
0040C1DA  0F BF 4D B8               MOVSX ECX,word ptr [EBP + -0x48]
0040C1DE  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0040C1E1  0F BF 55 8C               MOVSX EDX,word ptr [EBP + -0x74]
0040C1E5  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0040C1E8  47                        INC EDI
0040C1E9  3B 7D 84                  CMP EDI,dword ptr [EBP + -0x7c]
0040C1EC  0F 8C 6E FF FF FF         JL 0x0040c160
0040C1F2  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0040C1F8  33 D2                     XOR EDX,EDX
LAB_0040c1fa:
0040C1FA  B9 02 00 00 00            MOV ECX,0x2
0040C1FF  29 4D 90                  SUB dword ptr [EBP + -0x70],ECX
0040C202  79 03                     JNS 0x0040c207
0040C204  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
LAB_0040c207:
0040C207  29 8D 68 FF FF FF         SUB dword ptr [EBP + 0xffffff68],ECX
0040C20D  79 06                     JNS 0x0040c215
0040C20F  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
LAB_0040c215:
0040C215  2B D9                     SUB EBX,ECX
0040C217  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0040C21A  79 05                     JNS 0x0040c221
0040C21C  33 DB                     XOR EBX,EBX
0040C21E  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
LAB_0040c221:
0040C221  03 F1                     ADD ESI,ECX
0040C223  89 75 80                  MOV dword ptr [EBP + -0x80],ESI
0040C226  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
0040C22D  3B F1                     CMP ESI,ECX
0040C22F  7C 06                     JL 0x0040c237
0040C231  8D 71 FF                  LEA ESI,[ECX + -0x1]
0040C234  89 75 80                  MOV dword ptr [EBP + -0x80],ESI
LAB_0040c237:
0040C237  8B BD 5C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff5c]
0040C23D  83 C7 02                  ADD EDI,0x2
0040C240  89 BD 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDI
0040C246  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
0040C24D  3B F9                     CMP EDI,ECX
0040C24F  7C 07                     JL 0x0040c258
0040C251  49                        DEC ECX
0040C252  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
LAB_0040c258:
0040C258  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0040C25B  83 C7 02                  ADD EDI,0x2
0040C25E  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0040C261  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0040C268  3B F9                     CMP EDI,ECX
0040C26A  7C 04                     JL 0x0040c270
0040C26C  49                        DEC ECX
0040C26D  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_0040c270:
0040C270  0F BF 78 47               MOVSX EDI,word ptr [EAX + 0x47]
0040C274  8D 4F FE                  LEA ECX,[EDI + -0x2]
0040C277  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
0040C27D  3B CA                     CMP ECX,EDX
0040C27F  7D 06                     JGE 0x0040c287
0040C281  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
LAB_0040c287:
0040C287  0F BF 50 49               MOVSX EDX,word ptr [EAX + 0x49]
0040C28B  8D 4A FE                  LEA ECX,[EDX + -0x2]
0040C28E  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0040C291  85 C9                     TEST ECX,ECX
0040C293  7D 07                     JGE 0x0040c29c
0040C295  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
LAB_0040c29c:
0040C29C  0F BF 48 4B               MOVSX ECX,word ptr [EAX + 0x4b]
0040C2A0  8D 41 FE                  LEA EAX,[ECX + -0x2]
0040C2A3  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0040C2A6  85 C0                     TEST EAX,EAX
0040C2A8  7D 07                     JGE 0x0040c2b1
0040C2AA  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
LAB_0040c2b1:
0040C2B1  8D 47 02                  LEA EAX,[EDI + 0x2]
0040C2B4  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
0040C2BA  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0040C2C1  3B C7                     CMP EAX,EDI
0040C2C3  7C 07                     JL 0x0040c2cc
0040C2C5  4F                        DEC EDI
0040C2C6  89 BD 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDI
LAB_0040c2cc:
0040C2CC  8D 42 02                  LEA EAX,[EDX + 0x2]
0040C2CF  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0040C2D2  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0040C2D9  3B C2                     CMP EAX,EDX
0040C2DB  7C 04                     JL 0x0040c2e1
0040C2DD  4A                        DEC EDX
0040C2DE  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
LAB_0040c2e1:
0040C2E1  8D 41 02                  LEA EAX,[ECX + 0x2]
0040C2E4  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0040C2E7  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0040C2EE  3B C1                     CMP EAX,ECX
0040C2F0  7C 04                     JL 0x0040c2f6
0040C2F2  49                        DEC ECX
0040C2F3  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
LAB_0040c2f6:
0040C2F6  8B C6                     MOV EAX,ESI
0040C2F8  2B 45 90                  SUB EAX,dword ptr [EBP + -0x70]
0040C2FB  40                        INC EAX
0040C2FC  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0040C2FF  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0040C305  2B 8D 68 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff68]
0040C30B  41                        INC ECX
0040C30C  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0040C30F  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0040C312  2B D3                     SUB EDX,EBX
0040C314  42                        INC EDX
0040C315  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
0040C318  0F AF C8                  IMUL ECX,EAX
0040C31B  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
0040C31E  0F AF CA                  IMUL ECX,EDX
0040C321  D1 E1                     SHL ECX,0x1
0040C323  51                        PUSH ECX
0040C324  E8 47 E9 29 00            CALL 0x006aac70
0040C329  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0040C32C  89 9D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EBX
0040C332  3B 5D A8                  CMP EBX,dword ptr [EBP + -0x58]
0040C335  0F 8D 9C 00 00 00         JGE 0x0040c3d7
LAB_0040c33b:
0040C33B  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
0040C342  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
0040C348  0F AF CF                  IMUL ECX,EDI
0040C34B  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040C352  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
0040C358  0F AF D0                  IMUL EDX,EAX
0040C35B  03 CA                     ADD ECX,EDX
0040C35D  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040C363  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
0040C366  8B D7                     MOV EDX,EDI
0040C368  2B 55 E4                  SUB EDX,dword ptr [EBP + -0x1c]
0040C36B  0F AF 55 A0               IMUL EDX,dword ptr [EBP + -0x60]
0040C36F  8B 5D B0                  MOV EBX,dword ptr [EBP + -0x50]
0040C372  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
0040C375  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0040C37B  3B 85 5C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff5c]
0040C381  7F 44                     JG 0x0040c3c7
LAB_0040c383:
0040C383  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0040C386  3B C6                     CMP EAX,ESI
0040C388  7F 12                     JG 0x0040c39c
LAB_0040c38a:
0040C38A  8B F8                     MOV EDI,EAX
0040C38C  2B 7D 90                  SUB EDI,dword ptr [EBP + -0x70]
0040C38F  66 8B 1C 41               MOV BX,word ptr [ECX + EAX*0x2]
0040C393  66 89 1C 7A               MOV word ptr [EDX + EDI*0x2],BX
0040C397  40                        INC EAX
0040C398  3B C6                     CMP EAX,ESI
0040C39A  7E EE                     JLE 0x0040c38a
LAB_0040c39c:
0040C39C  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040C3A3  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
0040C3A6  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0040C3A9  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
0040C3AC  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0040C3B2  40                        INC EAX
0040C3B3  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0040C3B9  3B 85 5C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff5c]
0040C3BF  7E C2                     JLE 0x0040c383
0040C3C1  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
LAB_0040c3c7:
0040C3C7  47                        INC EDI
0040C3C8  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
0040C3CE  3B 7D A8                  CMP EDI,dword ptr [EBP + -0x58]
0040C3D1  0F 8C 64 FF FF FF         JL 0x0040c33b
LAB_0040c3d7:
0040C3D7  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
0040C3DD  3B 7D 98                  CMP EDI,dword ptr [EBP + -0x68]
0040C3E0  0F 8F A2 01 00 00         JG 0x0040c588
LAB_0040c3e6:
0040C3E6  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
0040C3ED  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0040C3F3  0F AF D0                  IMUL EDX,EAX
0040C3F6  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0040C3FD  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
0040C403  0F AF F9                  IMUL EDI,ECX
0040C406  03 D7                     ADD EDX,EDI
0040C408  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
0040C40E  8D 1C 57                  LEA EBX,[EDI + EDX*0x2]
0040C411  2B 45 E4                  SUB EAX,dword ptr [EBP + -0x1c]
0040C414  0F AF 45 A0               IMUL EAX,dword ptr [EBP + -0x60]
0040C418  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0040C41B  8D 3C 42                  LEA EDI,[EDX + EAX*0x2]
0040C41E  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0040C424  3B 4D CC                  CMP ECX,dword ptr [EBP + -0x34]
0040C427  7D 3B                     JGE 0x0040c464
LAB_0040c429:
0040C429  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0040C42C  3B C6                     CMP EAX,ESI
0040C42E  7F 18                     JG 0x0040c448
LAB_0040c430:
0040C430  8B C8                     MOV ECX,EAX
0040C432  2B 4D 90                  SUB ECX,dword ptr [EBP + -0x70]
0040C435  66 8B 14 43               MOV DX,word ptr [EBX + EAX*0x2]
0040C439  66 89 14 4F               MOV word ptr [EDI + ECX*0x2],DX
0040C43D  40                        INC EAX
0040C43E  3B C6                     CMP EAX,ESI
0040C440  7E EE                     JLE 0x0040c430
0040C442  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
LAB_0040c448:
0040C448  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040C44F  8D 1C 43                  LEA EBX,[EBX + EAX*0x2]
0040C452  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0040C455  8D 3C 57                  LEA EDI,[EDI + EDX*0x2]
0040C458  41                        INC ECX
0040C459  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0040C45F  3B 4D CC                  CMP ECX,dword ptr [EBP + -0x34]
0040C462  7C C5                     JL 0x0040c429
LAB_0040c464:
0040C464  3B 4D C4                  CMP ECX,dword ptr [EBP + -0x3c]
0040C467  0F 8F BD 00 00 00         JG 0x0040c52a
LAB_0040c46d:
0040C46D  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0040C470  8B F0                     MOV ESI,EAX
0040C472  3B 85 58 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff58]
0040C478  7D 15                     JGE 0x0040c48f
LAB_0040c47a:
0040C47A  8B CE                     MOV ECX,ESI
0040C47C  2B C8                     SUB ECX,EAX
0040C47E  66 8B 14 73               MOV DX,word ptr [EBX + ESI*0x2]
0040C482  66 89 14 4F               MOV word ptr [EDI + ECX*0x2],DX
0040C486  46                        INC ESI
0040C487  3B B5 58 FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff58]
0040C48D  7C EB                     JL 0x0040c47a
LAB_0040c48f:
0040C48F  3B B5 4C FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff4c]
0040C495  7F 4F                     JG 0x0040c4e6
LAB_0040c497:
0040C497  66 83 3C 73 00            CMP word ptr [EBX + ESI*0x2],0x0
0040C49C  75 32                     JNZ 0x0040c4d0
0040C49E  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0040C4A4  50                        PUSH EAX
0040C4A5  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
0040C4AB  51                        PUSH ECX
0040C4AC  56                        PUSH ESI
0040C4AD  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0040C4B3  52                        PUSH EDX
0040C4B4  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
0040C4BA  E8 EE 7F FF FF            CALL 0x004044ad
0040C4BF  85 C0                     TEST EAX,EAX
0040C4C1  75 0D                     JNZ 0x0040c4d0
0040C4C3  8B C6                     MOV EAX,ESI
0040C4C5  2B 45 90                  SUB EAX,dword ptr [EBP + -0x70]
0040C4C8  66 C7 04 47 FD FF         MOV word ptr [EDI + EAX*0x2],0xfffd
0040C4CE  EB 0D                     JMP 0x0040c4dd
LAB_0040c4d0:
0040C4D0  8B CE                     MOV ECX,ESI
0040C4D2  2B 4D 90                  SUB ECX,dword ptr [EBP + -0x70]
0040C4D5  66 8B 14 73               MOV DX,word ptr [EBX + ESI*0x2]
0040C4D9  66 89 14 4F               MOV word ptr [EDI + ECX*0x2],DX
LAB_0040c4dd:
0040C4DD  46                        INC ESI
0040C4DE  3B B5 4C FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff4c]
0040C4E4  7E B1                     JLE 0x0040c497
LAB_0040c4e6:
0040C4E6  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0040C4E9  3B F0                     CMP ESI,EAX
0040C4EB  7F 12                     JG 0x0040c4ff
LAB_0040c4ed:
0040C4ED  8B CE                     MOV ECX,ESI
0040C4EF  2B 4D 90                  SUB ECX,dword ptr [EBP + -0x70]
0040C4F2  66 8B 14 73               MOV DX,word ptr [EBX + ESI*0x2]
0040C4F6  66 89 14 4F               MOV word ptr [EDI + ECX*0x2],DX
0040C4FA  46                        INC ESI
0040C4FB  3B F0                     CMP ESI,EAX
0040C4FD  7E EE                     JLE 0x0040c4ed
LAB_0040c4ff:
0040C4FF  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040C506  8D 1C 43                  LEA EBX,[EBX + EAX*0x2]
0040C509  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0040C50C  8D 3C 4F                  LEA EDI,[EDI + ECX*0x2]
0040C50F  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0040C515  40                        INC EAX
0040C516  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0040C51C  3B 45 C4                  CMP EAX,dword ptr [EBP + -0x3c]
0040C51F  0F 8E 48 FF FF FF         JLE 0x0040c46d
0040C525  8B 75 80                  MOV ESI,dword ptr [EBP + -0x80]
0040C528  8B C8                     MOV ECX,EAX
LAB_0040c52a:
0040C52A  3B 8D 5C FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff5c]
0040C530  7F 3E                     JG 0x0040c570
LAB_0040c532:
0040C532  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0040C535  3B C6                     CMP EAX,ESI
0040C537  7F 18                     JG 0x0040c551
LAB_0040c539:
0040C539  8B D0                     MOV EDX,EAX
0040C53B  2B 55 90                  SUB EDX,dword ptr [EBP + -0x70]
0040C53E  66 8B 0C 43               MOV CX,word ptr [EBX + EAX*0x2]
0040C542  66 89 0C 57               MOV word ptr [EDI + EDX*0x2],CX
0040C546  40                        INC EAX
0040C547  3B C6                     CMP EAX,ESI
0040C549  7E EE                     JLE 0x0040c539
0040C54B  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
LAB_0040c551:
0040C551  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040C558  8D 1C 53                  LEA EBX,[EBX + EDX*0x2]
0040C55B  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0040C55E  8D 3C 47                  LEA EDI,[EDI + EAX*0x2]
0040C561  41                        INC ECX
0040C562  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0040C568  3B 8D 5C FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff5c]
0040C56E  7E C2                     JLE 0x0040c532
LAB_0040c570:
0040C570  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0040C576  40                        INC EAX
0040C577  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
0040C57D  3B 45 98                  CMP EAX,dword ptr [EBP + -0x68]
0040C580  0F 8E 60 FE FF FF         JLE 0x0040c3e6
0040C586  8B F8                     MOV EDI,EAX
LAB_0040c588:
0040C588  3B 7D D4                  CMP EDI,dword ptr [EBP + -0x2c]
0040C58B  0F 8F 9C 00 00 00         JG 0x0040c62d
LAB_0040c591:
0040C591  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
0040C598  0F AF CF                  IMUL ECX,EDI
0040C59B  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040C5A2  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
0040C5A8  0F AF D0                  IMUL EDX,EAX
0040C5AB  03 CA                     ADD ECX,EDX
0040C5AD  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0040C5B3  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
0040C5B6  8B D7                     MOV EDX,EDI
0040C5B8  2B 55 E4                  SUB EDX,dword ptr [EBP + -0x1c]
0040C5BB  0F AF 55 A0               IMUL EDX,dword ptr [EBP + -0x60]
0040C5BF  8B 5D B0                  MOV EBX,dword ptr [EBP + -0x50]
0040C5C2  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
0040C5C5  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0040C5CB  3B 85 5C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff5c]
0040C5D1  7F 4A                     JG 0x0040c61d
LAB_0040c5d3:
0040C5D3  8B 5D 90                  MOV EBX,dword ptr [EBP + -0x70]
0040C5D6  8B C3                     MOV EAX,EBX
0040C5D8  3B DE                     CMP EBX,ESI
0040C5DA  7F 1C                     JG 0x0040c5f8
0040C5DC  EB 03                     JMP 0x0040c5e1
LAB_0040c5de:
0040C5DE  8B 5D 90                  MOV EBX,dword ptr [EBP + -0x70]
LAB_0040c5e1:
0040C5E1  8B F8                     MOV EDI,EAX
0040C5E3  2B FB                     SUB EDI,EBX
0040C5E5  66 8B 1C 41               MOV BX,word ptr [ECX + EAX*0x2]
0040C5E9  66 89 1C 7A               MOV word ptr [EDX + EDI*0x2],BX
0040C5ED  40                        INC EAX
0040C5EE  3B C6                     CMP EAX,ESI
0040C5F0  7E EC                     JLE 0x0040c5de
0040C5F2  8B BD 78 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff78]
LAB_0040c5f8:
0040C5F8  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040C5FF  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
0040C602  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0040C605  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
0040C608  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0040C60E  40                        INC EAX
0040C60F  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0040C615  3B 85 5C FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff5c]
0040C61B  7E B6                     JLE 0x0040c5d3
LAB_0040c61d:
0040C61D  47                        INC EDI
0040C61E  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
0040C624  3B 7D D4                  CMP EDI,dword ptr [EBP + -0x2c]
0040C627  0F 8E 64 FF FF FF         JLE 0x0040c591
LAB_0040c62d:
0040C62D  6A FF                     PUSH -0x1
0040C62F  6A FF                     PUSH -0x1
0040C631  6A FF                     PUSH -0x1
0040C633  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0040C639  0F BF 48 4B               MOVSX ECX,word ptr [EAX + 0x4b]
0040C63D  2B 4D E4                  SUB ECX,dword ptr [EBP + -0x1c]
0040C640  51                        PUSH ECX
0040C641  0F BF 50 49               MOVSX EDX,word ptr [EAX + 0x49]
0040C645  2B 95 68 FF FF FF         SUB EDX,dword ptr [EBP + 0xffffff68]
0040C64B  52                        PUSH EDX
0040C64C  0F BF 40 47               MOVSX EAX,word ptr [EAX + 0x47]
0040C650  2B 45 90                  SUB EAX,dword ptr [EBP + -0x70]
0040C653  50                        PUSH EAX
0040C654  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0040C657  51                        PUSH ECX
0040C658  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0040C65B  52                        PUSH EDX
0040C65C  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0040C65F  50                        PUSH EAX
0040C660  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
0040C663  57                        PUSH EDI
0040C664  E8 27 EA 29 00            CALL 0x006ab090
0040C669  85 C0                     TEST EAX,EAX
0040C66B  74 31                     JZ 0x0040c69e
0040C66D  57                        PUSH EDI
0040C66E  E8 1D 98 29 00            CALL 0x006a5e90
0040C673  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0040C679  51                        PUSH ECX
0040C67A  E8 11 98 29 00            CALL 0x006a5e90
0040C67F  68 33 02 00 00            PUSH 0x233
0040C684  68 A8 4C 7A 00            PUSH 0x7a4ca8
0040C689  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0040C68F  52                        PUSH EDX
0040C690  6A FE                     PUSH -0x2
0040C692  E8 A9 97 29 00            CALL 0x006a5e40
0040C697  33 C0                     XOR EAX,EAX
0040C699  E9 4C 03 00 00            JMP 0x0040c9ea
LAB_0040c69e:
0040C69E  33 F6                     XOR ESI,ESI
0040C6A0  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
0040C6A3  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0040C6A6  85 C0                     TEST EAX,EAX
0040C6A8  0F 8E F1 02 00 00         JLE 0x0040c99f
LAB_0040c6ae:
0040C6AE  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
0040C6B1  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
0040C6B7  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0040C6BA  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
0040C6BD  2B 5D E4                  SUB EBX,dword ptr [EBP + -0x1c]
0040C6C0  89 9D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EBX
0040C6C6  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
0040C6C9  2B B5 68 FF FF FF         SUB ESI,dword ptr [EBP + 0xffffff68]
0040C6CF  89 B5 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ESI
0040C6D5  8B 10                     MOV EDX,dword ptr [EAX]
0040C6D7  2B 55 90                  SUB EDX,dword ptr [EBP + -0x70]
0040C6DA  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
0040C6DD  8B C6                     MOV EAX,ESI
0040C6DF  0F AF 45 D8               IMUL EAX,dword ptr [EBP + -0x28]
0040C6E3  8B CB                     MOV ECX,EBX
0040C6E5  0F AF 4D A0               IMUL ECX,dword ptr [EBP + -0x60]
0040C6E9  8B FA                     MOV EDI,EDX
0040C6EB  03 F8                     ADD EDI,EAX
0040C6ED  03 CF                     ADD ECX,EDI
0040C6EF  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0040C6F2  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
0040C6F5  0F BF 08                  MOVSX ECX,word ptr [EAX]
0040C6F8  85 C9                     TEST ECX,ECX
0040C6FA  0F 8D 61 02 00 00         JGE 0x0040c961
0040C700  C7 85 70 FF FF FF 30 75 00 00  MOV dword ptr [EBP + 0xffffff70],0x7530
0040C70A  C7 85 60 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff60],0x0
0040C714  EB 0F                     JMP 0x0040c725
LAB_0040c716:
0040C716  8B 9D 78 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff78]
0040C71C  8B B5 7C FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff7c]
0040C722  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
LAB_0040c725:
0040C725  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0040C72B  0F BF 0C CD 70 D5 7E 00   MOVSX ECX,word ptr [ECX*0x8 + 0x7ed570]
0040C733  03 CA                     ADD ECX,EDX
0040C735  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0040C738  85 C9                     TEST ECX,ECX
0040C73A  0F 8C 05 02 00 00         JL 0x0040c945
0040C740  3B 4D D8                  CMP ECX,dword ptr [EBP + -0x28]
0040C743  0F 8D FC 01 00 00         JGE 0x0040c945
0040C749  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0040C74F  0F BF 0C D5 72 D5 7E 00   MOVSX ECX,word ptr [EDX*0x8 + 0x7ed572]
0040C757  8D 3C 31                  LEA EDI,[ECX + ESI*0x1]
0040C75A  85 FF                     TEST EDI,EDI
0040C75C  0F 8C E3 01 00 00         JL 0x0040c945
0040C762  3B 7D 94                  CMP EDI,dword ptr [EBP + -0x6c]
0040C765  0F 8D DA 01 00 00         JGE 0x0040c945
0040C76B  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0040C771  0F BF 34 D5 74 D5 7E 00   MOVSX ESI,word ptr [EDX*0x8 + 0x7ed574]
0040C779  8D 14 1E                  LEA EDX,[ESI + EBX*0x1]
0040C77C  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
0040C77F  85 D2                     TEST EDX,EDX
0040C781  0F 8C BE 01 00 00         JL 0x0040c945
0040C787  3B 55 9C                  CMP EDX,dword ptr [EBP + -0x64]
0040C78A  0F 8D B5 01 00 00         JGE 0x0040c945
0040C790  8B 9D 60 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff60]
0040C796  66 8B 14 DD 76 D5 7E 00   MOV DX,word ptr [EBX*0x8 + 0x7ed576]
0040C79E  F6 C2 01                  TEST DL,0x1
0040C7A1  0F 84 FD 00 00 00         JZ 0x0040c8a4
0040C7A7  0F BF 34 DD 70 D5 7E 00   MOVSX ESI,word ptr [EBX*0x8 + 0x7ed570]
0040C7AF  66 8B 1C 70               MOV BX,word ptr [EAX + ESI*0x2]
0040C7B3  81 E3 00 C0 00 00         AND EBX,0xc000
0040C7B9  81 FB 00 C0 00 00         CMP EBX,0xc000
0040C7BF  0F 84 80 01 00 00         JZ 0x0040c945
0040C7C5  0F AF 4D D8               IMUL ECX,dword ptr [EBP + -0x28]
0040C7C9  66 8B 1C 48               MOV BX,word ptr [EAX + ECX*0x2]
0040C7CD  81 E3 00 C0 00 00         AND EBX,0xc000
0040C7D3  81 FB 00 C0 00 00         CMP EBX,0xc000
0040C7D9  0F 84 66 01 00 00         JZ 0x0040c945
0040C7DF  8B DA                     MOV EBX,EDX
0040C7E1  81 E3 00 40 00 00         AND EBX,0x4000
0040C7E7  66 85 DB                  TEST BX,BX
0040C7EA  74 41                     JZ 0x0040c82d
0040C7EC  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0040C7EF  03 D2                     ADD EDX,EDX
0040C7F1  8B D8                     MOV EBX,EAX
0040C7F3  2B DA                     SUB EBX,EDX
0040C7F5  66 8B 13                  MOV DX,word ptr [EBX]
0040C7F8  81 E2 00 C0 00 00         AND EDX,0xc000
0040C7FE  81 FA 00 C0 00 00         CMP EDX,0xc000
0040C804  0F 84 3B 01 00 00         JZ 0x0040c945
0040C80A  8B D6                     MOV EDX,ESI
0040C80C  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
0040C80F  2B D3                     SUB EDX,EBX
0040C811  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
0040C815  81 E2 00 C0 00 00         AND EDX,0xc000
0040C81B  81 FA 00 C0 00 00         CMP EDX,0xc000
0040C821  0F 84 1E 01 00 00         JZ 0x0040c945
0040C827  8B D1                     MOV EDX,ECX
0040C829  2B D3                     SUB EDX,EBX
0040C82B  EB 48                     JMP 0x0040c875
LAB_0040c82d:
0040C82D  81 E2 00 20 00 00         AND EDX,0x2000
0040C833  66 85 D2                  TEST DX,DX
0040C836  0F 84 D1 00 00 00         JZ 0x0040c90d
0040C83C  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0040C83F  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
0040C843  81 E2 00 C0 00 00         AND EDX,0xc000
0040C849  81 FA 00 C0 00 00         CMP EDX,0xc000
0040C84F  0F 84 F0 00 00 00         JZ 0x0040c945
0040C855  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0040C858  03 D6                     ADD EDX,ESI
0040C85A  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
0040C85E  81 E2 00 C0 00 00         AND EDX,0xc000
0040C864  81 FA 00 C0 00 00         CMP EDX,0xc000
0040C86A  0F 84 D5 00 00 00         JZ 0x0040c945
0040C870  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0040C873  03 D1                     ADD EDX,ECX
LAB_0040c875:
0040C875  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
0040C879  81 E2 00 C0 00 00         AND EDX,0xc000
0040C87F  81 FA 00 C0 00 00         CMP EDX,0xc000
0040C885  0F 84 BA 00 00 00         JZ 0x0040c945
0040C88B  03 F1                     ADD ESI,ECX
0040C88D  66 8B 0C 70               MOV CX,word ptr [EAX + ESI*0x2]
0040C891  81 E1 00 C0 00 00         AND ECX,0xc000
0040C897  81 F9 00 C0 00 00         CMP ECX,0xc000
0040C89D  75 6E                     JNZ 0x0040c90d
0040C89F  E9 A1 00 00 00            JMP 0x0040c945
LAB_0040c8a4:
0040C8A4  8B DA                     MOV EBX,EDX
0040C8A6  81 E3 00 60 00 00         AND EBX,0x6000
0040C8AC  66 85 DB                  TEST BX,BX
0040C8AF  74 5C                     JZ 0x0040c90d
0040C8B1  80 E6 9F                  AND DH,0x9f
0040C8B4  66 81 FA FE 0F            CMP DX,0xffe
0040C8B9  74 52                     JZ 0x0040c90d
0040C8BB  0F AF 75 A0               IMUL ESI,dword ptr [EBP + -0x60]
0040C8BF  66 8B 14 70               MOV DX,word ptr [EAX + ESI*0x2]
0040C8C3  81 E2 00 C0 00 00         AND EDX,0xc000
0040C8C9  81 FA 00 C0 00 00         CMP EDX,0xc000
0040C8CF  74 74                     JZ 0x0040c945
0040C8D1  85 C9                     TEST ECX,ECX
0040C8D3  75 22                     JNZ 0x0040c8f7
0040C8D5  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0040C8DB  0F BF 0C CD 70 D5 7E 00   MOVSX ECX,word ptr [ECX*0x8 + 0x7ed570]
0040C8E3  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
0040C8E7  81 E2 00 C0 00 00         AND EDX,0xc000
0040C8ED  81 FA 00 C0 00 00         CMP EDX,0xc000
0040C8F3  74 50                     JZ 0x0040c945
0040C8F5  EB 16                     JMP 0x0040c90d
LAB_0040c8f7:
0040C8F7  0F AF 4D D8               IMUL ECX,dword ptr [EBP + -0x28]
0040C8FB  66 8B 0C 48               MOV CX,word ptr [EAX + ECX*0x2]
0040C8FF  81 E1 00 C0 00 00         AND ECX,0xc000
0040C905  81 F9 00 C0 00 00         CMP ECX,0xc000
0040C90B  74 38                     JZ 0x0040c945
LAB_0040c90d:
0040C90D  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0040C910  0F AF 55 A0               IMUL EDX,dword ptr [EBP + -0x60]
0040C914  0F AF 7D D8               IMUL EDI,dword ptr [EBP + -0x28]
0040C918  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0040C91B  03 CA                     ADD ECX,EDX
0040C91D  03 F9                     ADD EDI,ECX
0040C91F  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0040C922  0F BF 0C 7A               MOVSX ECX,word ptr [EDX + EDI*0x2]
0040C926  85 C9                     TEST ECX,ECX
0040C928  7E 1B                     JLE 0x0040c945
0040C92A  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0040C930  03 0C 95 40 D6 7E 00      ADD ECX,dword ptr [EDX*0x4 + 0x7ed640]
0040C937  3B 8D 70 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff70]
0040C93D  7D 06                     JGE 0x0040c945
0040C93F  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
LAB_0040c945:
0040C945  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0040C94B  41                        INC ECX
0040C94C  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0040C952  83 F9 1A                  CMP ECX,0x1a
0040C955  0F 8C BB FD FF FF         JL 0x0040c716
0040C95B  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
LAB_0040c961:
0040C961  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
0040C964  85 C9                     TEST ECX,ECX
0040C966  7E 19                     JLE 0x0040c981
0040C968  81 F9 30 75 00 00         CMP ECX,0x7530
0040C96E  7D 11                     JGE 0x0040c981
0040C970  49                        DEC ECX
0040C971  B8 56 55 55 55            MOV EAX,0x55555556
0040C976  F7 E9                     IMUL ECX
0040C978  8B C2                     MOV EAX,EDX
0040C97A  C1 E8 1F                  SHR EAX,0x1f
0040C97D  03 D0                     ADD EDX,EAX
0040C97F  EB 05                     JMP 0x0040c986
LAB_0040c981:
0040C981  BA FC FF FF FF            MOV EDX,0xfffffffc
LAB_0040c986:
0040C986  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0040C98C  89 14 B1                  MOV dword ptr [ECX + ESI*0x4],EDX
0040C98F  46                        INC ESI
0040C990  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
0040C993  3B 75 84                  CMP ESI,dword ptr [EBP + -0x7c]
0040C996  0F 8C 12 FD FF FF         JL 0x0040c6ae
0040C99C  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
LAB_0040c99f:
0040C99F  57                        PUSH EDI
0040C9A0  E8 EB 94 29 00            CALL 0x006a5e90
0040C9A5  8B 9D 50 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff50]
0040C9AB  EB 3B                     JMP 0x0040c9e8
LAB_0040c9d9:
0040C9D9  85 F6                     TEST ESI,ESI
0040C9DB  7E 0B                     JLE 0x0040c9e8
0040C9DD  8B CE                     MOV ECX,ESI
0040C9DF  B8 FC FF FF FF            MOV EAX,0xfffffffc
0040C9E4  8B FB                     MOV EDI,EBX
0040C9E6  F3 AB                     STOSD.REP ES:EDI
LAB_0040c9e8:
0040C9E8  8B C3                     MOV EAX,EBX
LAB_0040c9ea:
0040C9EA  8D A5 38 FF FF FF         LEA ESP,[EBP + 0xffffff38]
0040C9F0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040C9F3  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0040C9FA  5F                        POP EDI
0040C9FB  5E                        POP ESI
0040C9FC  5B                        POP EBX
0040C9FD  8B E5                     MOV ESP,EBP
0040C9FF  5D                        POP EBP
0040CA00  C2 08 00                  RET 0x8
