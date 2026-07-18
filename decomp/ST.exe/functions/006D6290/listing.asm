FUN_006d6290:
006D6290  55                        PUSH EBP
006D6291  8B EC                     MOV EBP,ESP
006D6293  83 EC 0C                  SUB ESP,0xc
006D6296  53                        PUSH EBX
006D6297  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D629A  56                        PUSH ESI
006D629B  57                        PUSH EDI
006D629C  8B 73 18                  MOV ESI,dword ptr [EBX + 0x18]
006D629F  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006D62A2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D62A5  8B B8 88 02 00 00         MOV EDI,dword ptr [EAX + 0x288]
006D62AB  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006D62B2  8B 4E 6C                  MOV ECX,dword ptr [ESI + 0x6c]
006D62B5  85 C9                     TEST ECX,ECX
006D62B7  74 13                     JZ 0x006d62cc
006D62B9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D62BC  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006D62BF  5F                        POP EDI
006D62C0  5E                        POP ESI
006D62C1  89 01                     MOV dword ptr [ECX],EAX
006D62C3  33 C0                     XOR EAX,EAX
006D62C5  5B                        POP EBX
006D62C6  8B E5                     MOV ESP,EBP
006D62C8  5D                        POP EBP
006D62C9  C2 08 00                  RET 0x8
LAB_006d62cc:
006D62CC  8B 88 10 03 00 00         MOV ECX,dword ptr [EAX + 0x310]
006D62D2  85 C9                     TEST ECX,ECX
006D62D4  74 44                     JZ 0x006d631a
006D62D6  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
006D62D9  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D62E0  74 0C                     JZ 0x006d62ee
006D62E2  05 F0 04 00 00            ADD EAX,0x4f0
006D62E7  50                        PUSH EAX
006D62E8  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006d62ee:
006D62EE  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
006D62F1  8B 88 E4 04 00 00         MOV ECX,dword ptr [EAX + 0x4e4]
006D62F7  85 C9                     TEST ECX,ECX
006D62F9  74 1F                     JZ 0x006d631a
006D62FB  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
006D62FE  52                        PUSH EDX
006D62FF  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
006D6302  52                        PUSH EDX
006D6303  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
006D6306  03 57 1C                  ADD EDX,dword ptr [EDI + 0x1c]
006D6309  52                        PUSH EDX
006D630A  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006D630D  03 57 18                  ADD EDX,dword ptr [EDI + 0x18]
006D6310  8B 80 EC 04 00 00         MOV EAX,dword ptr [EAX + 0x4ec]
006D6316  52                        PUSH EDX
006D6317  50                        PUSH EAX
006D6318  FF D1                     CALL ECX
LAB_006d631a:
006D631A  83 C3 0C                  ADD EBX,0xc
006D631D  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
006D6324  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006d6327:
006D6327  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D632A  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006D632D  8D 4D F4                  LEA ECX,[EBP + -0xc]
006D6330  6A 00                     PUSH 0x0
006D6332  51                        PUSH ECX
006D6333  52                        PUSH EDX
006D6334  50                        PUSH EAX
006D6335  E8 06 5B FE FF            CALL 0x006bbe40
006D633A  8B D8                     MOV EBX,EAX
006D633C  85 DB                     TEST EBX,EBX
006D633E  74 54                     JZ 0x006d6394
006D6340  81 FB C2 01 76 88         CMP EBX,0x887601c2
006D6346  75 17                     JNZ 0x006d635f
006D6348  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006D634B  50                        PUSH EAX
006D634C  8B 08                     MOV ECX,dword ptr [EAX]
006D634E  FF 51 6C                  CALL dword ptr [ECX + 0x6c]
006D6351  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D6354  40                        INC EAX
006D6355  83 F8 02                  CMP EAX,0x2
006D6358  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D635B  7C CA                     JL 0x006d6327
006D635D  EB 04                     JMP 0x006d6363
LAB_006d635f:
006D635F  85 DB                     TEST EBX,EBX
006D6361  74 31                     JZ 0x006d6394
LAB_006d6363:
006D6363  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D6366  8B 82 10 03 00 00         MOV EAX,dword ptr [EDX + 0x310]
006D636C  85 C0                     TEST EAX,EAX
006D636E  74 19                     JZ 0x006d6389
006D6370  8B 7F 28                  MOV EDI,dword ptr [EDI + 0x28]
006D6373  F7 47 08 00 00 00 04      TEST dword ptr [EDI + 0x8],0x4000000
006D637A  74 0D                     JZ 0x006d6389
006D637C  81 C7 F0 04 00 00         ADD EDI,0x4f0
006D6382  57                        PUSH EDI
006D6383  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006d6389:
006D6389  5F                        POP EDI
006D638A  8B C3                     MOV EAX,EBX
006D638C  5E                        POP ESI
006D638D  5B                        POP EBX
006D638E  8B E5                     MOV ESP,EBP
006D6390  5D                        POP EBP
006D6391  C2 08 00                  RET 0x8
LAB_006d6394:
006D6394  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D6397  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D639A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D639D  8B 00                     MOV EAX,dword ptr [EAX]
006D639F  89 01                     MOV dword ptr [ECX],EAX
006D63A1  8B 9A 10 03 00 00         MOV EBX,dword ptr [EDX + 0x310]
006D63A7  85 DB                     TEST EBX,EBX
006D63A9  74 17                     JZ 0x006d63c2
006D63AB  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
006D63AE  8B 52 28                  MOV EDX,dword ptr [EDX + 0x28]
006D63B1  0F AF 57 18               IMUL EDX,dword ptr [EDI + 0x18]
006D63B5  8B 7F 1C                  MOV EDI,dword ptr [EDI + 0x1c]
006D63B8  03 C2                     ADD EAX,EDX
006D63BA  0F AF 7D F4               IMUL EDI,dword ptr [EBP + -0xc]
006D63BE  03 F8                     ADD EDI,EAX
006D63C0  89 39                     MOV dword ptr [ECX],EDI
LAB_006d63c2:
006D63C2  C7 46 6C 01 00 00 00      MOV dword ptr [ESI + 0x6c],0x1
006D63C9  C7 46 68 00 00 00 00      MOV dword ptr [ESI + 0x68],0x0
006D63D0  5F                        POP EDI
006D63D1  5E                        POP ESI
006D63D2  33 C0                     XOR EAX,EAX
006D63D4  5B                        POP EBX
006D63D5  8B E5                     MOV ESP,EBP
006D63D7  5D                        POP EBP
006D63D8  C2 08 00                  RET 0x8
