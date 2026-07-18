FUN_005ee3f0:
005EE3F0  55                        PUSH EBP
005EE3F1  8B EC                     MOV EBP,ESP
005EE3F3  83 EC 30                  SUB ESP,0x30
005EE3F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EE3F9  56                        PUSH ESI
005EE3FA  48                        DEC EAX
005EE3FB  8B F1                     MOV ESI,ECX
005EE3FD  0F 88 C2 01 00 00         JS 0x005ee5c5
005EE403  83 F8 05                  CMP EAX,0x5
005EE406  0F 8D B9 01 00 00         JGE 0x005ee5c5
005EE40C  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005EE40F  53                        PUSH EBX
005EE410  57                        PUSH EDI
005EE411  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005EE414  66 8B 94 4E EA 02 00 00   MOV DX,word ptr [ESI + ECX*0x2 + 0x2ea]
005EE41C  8D 0C 4E                  LEA ECX,[ESI + ECX*0x2]
005EE41F  66 89 17                  MOV word ptr [EDI],DX
005EE422  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005EE425  66 8B 89 EC 02 00 00      MOV CX,word ptr [ECX + 0x2ec]
005EE42C  8D 84 40 77 01 00 00      LEA EAX,[EAX + EAX*0x2 + 0x177]
005EE433  66 89 0A                  MOV word ptr [EDX],CX
005EE436  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005EE439  66 8B 0C 46               MOV CX,word ptr [ESI + EAX*0x2]
005EE43D  8D 45 F4                  LEA EAX,[EBP + -0xc]
005EE440  66 89 0A                  MOV word ptr [EDX],CX
005EE443  8D 4D FC                  LEA ECX,[EBP + -0x4]
005EE446  50                        PUSH EAX
005EE447  8D 55 08                  LEA EDX,[EBP + 0x8]
005EE44A  51                        PUSH ECX
005EE44B  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005EE451  52                        PUSH EDX
005EE452  E8 D9 F0 0E 00            CALL 0x006dd530
005EE457  D9 45 08                  FLD float ptr [EBP + 0x8]
005EE45A  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
005EE460  E8 23 FE 13 00            CALL 0x0072e288
005EE465  D9 45 FC                  FLD float ptr [EBP + -0x4]
005EE468  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
005EE46E  0F BF C0                  MOVSX EAX,AX
005EE471  99                        CDQ
005EE472  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005EE475  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005EE478  E8 0B FE 13 00            CALL 0x0072e288
005EE47D  D9 45 F4                  FLD float ptr [EBP + -0xc]
005EE480  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
005EE486  0F BF C0                  MOVSX EAX,AX
005EE489  99                        CDQ
005EE48A  8B D8                     MOV EBX,EAX
005EE48C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005EE48F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005EE492  E8 F1 FD 13 00            CALL 0x0072e288
005EE497  0F BF C0                  MOVSX EAX,AX
005EE49A  99                        CDQ
005EE49B  8B C8                     MOV ECX,EAX
005EE49D  8B 86 7F 02 00 00         MOV EAX,dword ptr [ESI + 0x27f]
005EE4A3  8B FA                     MOV EDI,EDX
005EE4A5  99                        CDQ
005EE4A6  2B C1                     SUB EAX,ECX
005EE4A8  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
005EE4AB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
005EE4AE  8B 86 7B 02 00 00         MOV EAX,dword ptr [ESI + 0x27b]
005EE4B4  1B D7                     SBB EDX,EDI
005EE4B6  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005EE4B9  99                        CDQ
005EE4BA  8B F8                     MOV EDI,EAX
005EE4BC  8B 86 77 02 00 00         MOV EAX,dword ptr [ESI + 0x277]
005EE4C2  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005EE4C5  2B FB                     SUB EDI,EBX
005EE4C7  8B DA                     MOV EBX,EDX
005EE4C9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005EE4CC  1B DA                     SBB EBX,EDX
005EE4CE  99                        CDQ
005EE4CF  2B C6                     SUB EAX,ESI
005EE4D1  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005EE4D4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005EE4D7  1B D0                     SBB EDX,EAX
005EE4D9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005EE4DC  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005EE4DF  0F BF 00                  MOVSX EAX,word ptr [EAX]
005EE4E2  99                        CDQ
005EE4E3  2B C6                     SUB EAX,ESI
005EE4E5  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005EE4E8  1B D6                     SBB EDX,ESI
005EE4EA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005EE4ED  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005EE4F0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005EE4F3  0F BF 02                  MOVSX EAX,word ptr [EDX]
005EE4F6  99                        CDQ
005EE4F7  8B F0                     MOV ESI,EAX
005EE4F9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005EE4FC  2B F0                     SUB ESI,EAX
005EE4FE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EE501  1B D0                     SBB EDX,EAX
005EE503  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005EE506  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005EE509  0F BF 00                  MOVSX EAX,word ptr [EAX]
005EE50C  99                        CDQ
005EE50D  2B C1                     SUB EAX,ECX
005EE50F  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005EE512  1B D1                     SBB EDX,ECX
005EE514  52                        PUSH EDX
005EE515  50                        PUSH EAX
005EE516  52                        PUSH EDX
005EE517  50                        PUSH EAX
005EE518  E8 D3 FF 13 00            CALL 0x0072e4f0
005EE51D  8B C8                     MOV ECX,EAX
005EE51F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EE522  50                        PUSH EAX
005EE523  56                        PUSH ESI
005EE524  50                        PUSH EAX
005EE525  56                        PUSH ESI
005EE526  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005EE529  8B F1                     MOV ESI,ECX
005EE52B  E8 C0 FF 13 00            CALL 0x0072e4f0
005EE530  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005EE533  03 F0                     ADD ESI,EAX
005EE535  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005EE538  13 CA                     ADC ECX,EDX
005EE53A  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005EE53D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005EE540  51                        PUSH ECX
005EE541  50                        PUSH EAX
005EE542  51                        PUSH ECX
005EE543  50                        PUSH EAX
005EE544  E8 A7 FF 13 00            CALL 0x0072e4f0
005EE549  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005EE54C  03 F0                     ADD ESI,EAX
005EE54E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005EE551  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
005EE554  13 CA                     ADC ECX,EDX
005EE556  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005EE559  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005EE55C  51                        PUSH ECX
005EE55D  50                        PUSH EAX
005EE55E  51                        PUSH ECX
005EE55F  50                        PUSH EAX
005EE560  E8 8B FF 13 00            CALL 0x0072e4f0
005EE565  53                        PUSH EBX
005EE566  57                        PUSH EDI
005EE567  53                        PUSH EBX
005EE568  57                        PUSH EDI
005EE569  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005EE56C  8B F2                     MOV ESI,EDX
005EE56E  E8 7D FF 13 00            CALL 0x0072e4f0
005EE573  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
005EE576  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005EE579  03 F8                     ADD EDI,EAX
005EE57B  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005EE57E  51                        PUSH ECX
005EE57F  50                        PUSH EAX
005EE580  51                        PUSH ECX
005EE581  50                        PUSH EAX
005EE582  13 F2                     ADC ESI,EDX
005EE584  E8 67 FF 13 00            CALL 0x0072e4f0
005EE589  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005EE58C  03 F8                     ADD EDI,EAX
005EE58E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005EE591  13 F2                     ADC ESI,EDX
005EE593  3B F1                     CMP ESI,ECX
005EE595  7C 1A                     JL 0x005ee5b1
005EE597  7F 04                     JG 0x005ee59d
005EE599  3B F8                     CMP EDI,EAX
005EE59B  76 14                     JBE 0x005ee5b1
LAB_005ee59d:
005EE59D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005EE5A0  5F                        POP EDI
005EE5A1  5B                        POP EBX
005EE5A2  33 C0                     XOR EAX,EAX
005EE5A4  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
005EE5AA  5E                        POP ESI
005EE5AB  8B E5                     MOV ESP,EBP
005EE5AD  5D                        POP EBP
005EE5AE  C2 14 00                  RET 0x14
LAB_005ee5b1:
005EE5B1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005EE5B4  5F                        POP EDI
005EE5B5  5B                        POP EBX
005EE5B6  5E                        POP ESI
005EE5B7  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
005EE5BD  33 C0                     XOR EAX,EAX
005EE5BF  8B E5                     MOV ESP,EBP
005EE5C1  5D                        POP EBP
005EE5C2  C2 14 00                  RET 0x14
LAB_005ee5c5:
005EE5C5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005EE5C8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005EE5CB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005EE5CE  5E                        POP ESI
005EE5CF  66 C7 01 00 00            MOV word ptr [ECX],0x0
005EE5D4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005EE5D7  66 C7 02 00 00            MOV word ptr [EDX],0x0
005EE5DC  66 C7 00 00 00            MOV word ptr [EAX],0x0
005EE5E1  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
005EE5E7  83 C8 FF                  OR EAX,0xffffffff
005EE5EA  8B E5                     MOV ESP,EBP
005EE5EC  5D                        POP EBP
005EE5ED  C2 14 00                  RET 0x14
