FUN_005fe360:
005FE360  55                        PUSH EBP
005FE361  8B EC                     MOV EBP,ESP
005FE363  66 8B 55 14               MOV DX,word ptr [EBP + 0x14]
005FE367  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FE36A  53                        PUSH EBX
005FE36B  56                        PUSH ESI
005FE36C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005FE36F  57                        PUSH EDI
005FE370  66 8B 7D 1C               MOV DI,word ptr [EBP + 0x1c]
005FE374  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005FE377  66 89 7E 0E               MOV word ptr [ESI + 0xe],DI
005FE37B  66 8B 7D 20               MOV DI,word ptr [EBP + 0x20]
005FE37F  66 89 56 04               MOV word ptr [ESI + 0x4],DX
005FE383  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005FE386  66 89 7E 10               MOV word ptr [ESI + 0x10],DI
005FE38A  66 89 06                  MOV word ptr [ESI],AX
005FE38D  0F BF FA                  MOVSX EDI,DX
005FE390  0F BF D8                  MOVSX EBX,AX
005FE393  2B FB                     SUB EDI,EBX
005FE395  66 89 4E 02               MOV word ptr [ESI + 0x2],CX
005FE399  89 7E 18                  MOV dword ptr [ESI + 0x18],EDI
005FE39C  66 89 56 0C               MOV word ptr [ESI + 0xc],DX
005FE3A0  0F BF 7D 1C               MOVSX EDI,word ptr [EBP + 0x1c]
005FE3A4  0F BF D9                  MOVSX EBX,CX
005FE3A7  2B FB                     SUB EDI,EBX
005FE3A9  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
005FE3AC  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
005FE3AF  57                        PUSH EDI
005FE3B0  52                        PUSH EDX
005FE3B1  51                        PUSH ECX
005FE3B2  50                        PUSH EAX
005FE3B3  E8 20 EB 0A 00            CALL 0x006aced8
005FE3B8  83 C4 10                  ADD ESP,0x10
005FE3BB  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
005FE3BE  85 C0                     TEST EAX,EAX
005FE3C0  C7 46 24 11 00 00 00      MOV dword ptr [ESI + 0x24],0x11
005FE3C7  75 07                     JNZ 0x005fe3d0
005FE3C9  5F                        POP EDI
005FE3CA  5E                        POP ESI
005FE3CB  5B                        POP EBX
005FE3CC  5D                        POP EBP
005FE3CD  C2 1C 00                  RET 0x1c
LAB_005fe3d0:
005FE3D0  66 8B 16                  MOV DX,word ptr [ESI]
005FE3D3  66 8B 7E 02               MOV DI,word ptr [ESI + 0x2]
005FE3D7  66 89 56 06               MOV word ptr [ESI + 0x6],DX
005FE3DB  66 89 56 12               MOV word ptr [ESI + 0x12],DX
005FE3DF  8D 50 9C                  LEA EDX,[EAX + -0x64]
005FE3E2  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FE3E7  F7 EA                     IMUL EDX
005FE3E9  8B C2                     MOV EAX,EDX
005FE3EB  66 8B 4E 04               MOV CX,word ptr [ESI + 0x4]
005FE3EF  C1 F8 04                  SAR EAX,0x4
005FE3F2  8B D0                     MOV EDX,EAX
005FE3F4  66 89 7E 08               MOV word ptr [ESI + 0x8],DI
005FE3F8  C1 EA 1F                  SHR EDX,0x1f
005FE3FB  03 C2                     ADD EAX,EDX
005FE3FD  66 89 4E 0A               MOV word ptr [ESI + 0xa],CX
005FE401  83 F8 1E                  CMP EAX,0x1e
005FE404  66 89 7E 14               MOV word ptr [ESI + 0x14],DI
005FE408  66 89 4E 16               MOV word ptr [ESI + 0x16],CX
005FE40C  7C 05                     JL 0x005fe413
005FE40E  B8 0F 00 00 00            MOV EAX,0xf
LAB_005fe413:
005FE413  0F BF 56 10               MOVSX EDX,word ptr [ESI + 0x10]
005FE417  0F BF C9                  MOVSX ECX,CX
005FE41A  2B CA                     SUB ECX,EDX
005FE41C  C7 46 2D 07 00 00 00      MOV dword ptr [ESI + 0x2d],0x7
005FE423  81 F9 20 03 00 00         CMP ECX,0x320
005FE429  C7 46 31 C8 00 00 00      MOV dword ptr [ESI + 0x31],0xc8
005FE430  7E 56                     JLE 0x005fe488
005FE432  81 F9 B6 03 00 00         CMP ECX,0x3b6
005FE438  7D 44                     JGE 0x005fe47e
005FE43A  8B 3C 85 48 E9 7C 00      MOV EDI,dword ptr [EAX*0x4 + 0x7ce948]
005FE441  8B 1C 85 C8 E9 7C 00      MOV EBX,dword ptr [EAX*0x4 + 0x7ce9c8]
005FE448  8B D7                     MOV EDX,EDI
005FE44A  81 C1 E0 FC FF FF         ADD ECX,0xfffffce0
005FE450  2B D3                     SUB EDX,EBX
005FE452  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FE457  0F AF D1                  IMUL EDX,ECX
005FE45A  F7 EA                     IMUL EDX
005FE45C  C1 FA 06                  SAR EDX,0x6
005FE45F  8B C2                     MOV EAX,EDX
005FE461  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
005FE468  C1 E8 1F                  SHR EAX,0x1f
005FE46B  03 D0                     ADD EDX,EAX
005FE46D  B8 01 00 00 00            MOV EAX,0x1
005FE472  2B FA                     SUB EDI,EDX
005FE474  89 7E 29                  MOV dword ptr [ESI + 0x29],EDI
005FE477  5F                        POP EDI
005FE478  5E                        POP ESI
005FE479  5B                        POP EBX
005FE47A  5D                        POP EBP
005FE47B  C2 1C 00                  RET 0x1c
LAB_005fe47e:
005FE47E  5F                        POP EDI
005FE47F  5E                        POP ESI
005FE480  83 C8 FF                  OR EAX,0xffffffff
005FE483  5B                        POP EBX
005FE484  5D                        POP EBP
005FE485  C2 1C 00                  RET 0x1c
LAB_005fe488:
005FE488  81 F9 58 02 00 00         CMP ECX,0x258
005FE48E  7C 2E                     JL 0x005fe4be
005FE490  8B 3C 85 C8 E9 7C 00      MOV EDI,dword ptr [EAX*0x4 + 0x7ce9c8]
005FE497  8B 14 85 48 E9 7C 00      MOV EDX,dword ptr [EAX*0x4 + 0x7ce948]
005FE49E  2B D7                     SUB EDX,EDI
005FE4A0  81 C1 A8 FD FF FF         ADD ECX,0xfffffda8
005FE4A6  0F AF D1                  IMUL EDX,ECX
005FE4A9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FE4AE  F7 EA                     IMUL EDX
005FE4B0  C1 FA 06                  SAR EDX,0x6
005FE4B3  8B CA                     MOV ECX,EDX
005FE4B5  C1 E9 1F                  SHR ECX,0x1f
005FE4B8  03 D1                     ADD EDX,ECX
005FE4BA  03 D7                     ADD EDX,EDI
005FE4BC  EB 73                     JMP 0x005fe531
LAB_005fe4be:
005FE4BE  81 F9 90 01 00 00         CMP ECX,0x190
005FE4C4  7C 2E                     JL 0x005fe4f4
005FE4C6  8B 3C 85 48 EA 7C 00      MOV EDI,dword ptr [EAX*0x4 + 0x7cea48]
005FE4CD  8B 14 85 C8 E9 7C 00      MOV EDX,dword ptr [EAX*0x4 + 0x7ce9c8]
005FE4D4  2B D7                     SUB EDX,EDI
005FE4D6  81 C1 70 FE FF FF         ADD ECX,0xfffffe70
005FE4DC  0F AF D1                  IMUL EDX,ECX
005FE4DF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FE4E4  F7 EA                     IMUL EDX
005FE4E6  C1 FA 06                  SAR EDX,0x6
005FE4E9  8B C2                     MOV EAX,EDX
005FE4EB  C1 E8 1F                  SHR EAX,0x1f
005FE4EE  03 D0                     ADD EDX,EAX
005FE4F0  03 D7                     ADD EDX,EDI
005FE4F2  EB 3D                     JMP 0x005fe531
LAB_005fe4f4:
005FE4F4  81 F9 C8 00 00 00         CMP ECX,0xc8
005FE4FA  7C 2E                     JL 0x005fe52a
005FE4FC  8B 3C 85 C8 EA 7C 00      MOV EDI,dword ptr [EAX*0x4 + 0x7ceac8]
005FE503  8B 14 85 48 EA 7C 00      MOV EDX,dword ptr [EAX*0x4 + 0x7cea48]
005FE50A  2B D7                     SUB EDX,EDI
005FE50C  81 C1 70 FE FF FF         ADD ECX,0xfffffe70
005FE512  0F AF D1                  IMUL EDX,ECX
005FE515  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FE51A  F7 EA                     IMUL EDX
005FE51C  C1 FA 06                  SAR EDX,0x6
005FE51F  8B CA                     MOV ECX,EDX
005FE521  C1 E9 1F                  SHR ECX,0x1f
005FE524  03 D1                     ADD EDX,ECX
005FE526  03 D7                     ADD EDX,EDI
005FE528  EB 07                     JMP 0x005fe531
LAB_005fe52a:
005FE52A  8B 14 85 C8 EA 7C 00      MOV EDX,dword ptr [EAX*0x4 + 0x7ceac8]
LAB_005fe531:
005FE531  89 56 29                  MOV dword ptr [ESI + 0x29],EDX
005FE534  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
005FE53B  5F                        POP EDI
005FE53C  5E                        POP ESI
005FE53D  B8 01 00 00 00            MOV EAX,0x1
005FE542  5B                        POP EBX
005FE543  5D                        POP EBP
005FE544  C2 1C 00                  RET 0x1c
