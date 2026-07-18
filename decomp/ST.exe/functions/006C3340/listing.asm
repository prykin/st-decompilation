FUN_006c3340:
006C3340  55                        PUSH EBP
006C3341  8B EC                     MOV EBP,ESP
006C3343  83 EC 14                  SUB ESP,0x14
006C3346  53                        PUSH EBX
006C3347  56                        PUSH ESI
006C3348  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C334B  8D 45 EC                  LEA EAX,[EBP + -0x14]
006C334E  57                        PUSH EDI
006C334F  50                        PUSH EAX
006C3350  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C3353  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006C3356  52                        PUSH EDX
006C3357  FF 15 58 BE 85 00         CALL dword ptr [0x0085be58]
006C335D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C3360  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006C3363  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C3366  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
006C3369  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006C336C  3B F9                     CMP EDI,ECX
006C336E  7E 02                     JLE 0x006c3372
006C3370  8B F9                     MOV EDI,ECX
LAB_006c3372:
006C3372  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
006C3375  3B D0                     CMP EDX,EAX
006C3377  7E 03                     JLE 0x006c337c
006C3379  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006c337c:
006C337C  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
006C337F  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
006C3382  33 C0                     XOR EAX,EAX
006C3384  8B D3                     MOV EDX,EBX
006C3386  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006C3389  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006C338C  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006C338F  81 E2 00 00 00 04         AND EDX,0x4000000
006C3395  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
006C3398  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
006C339B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006C339E  74 08                     JZ 0x006c33a8
006C33A0  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
006C33A3  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006C33A6  EB 10                     JMP 0x006c33b8
LAB_006c33a8:
006C33A8  F6 C3 04                  TEST BL,0x4
006C33AB  74 09                     JZ 0x006c33b6
006C33AD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C33B0  8B DF                     MOV EBX,EDI
006C33B2  8B CA                     MOV ECX,EDX
006C33B4  EB 05                     JMP 0x006c33bb
LAB_006c33b6:
006C33B6  8B D8                     MOV EBX,EAX
LAB_006c33b8:
006C33B8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_006c33bb:
006C33BB  33 C0                     XOR EAX,EAX
006C33BD  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
006C33C0  75 0E                     JNZ 0x006c33d0
006C33C2  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006C33C5  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006C33C8  89 7E 14                  MOV dword ptr [ESI + 0x14],EDI
006C33CB  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
006C33CE  EB 37                     JMP 0x006c3407
LAB_006c33d0:
006C33D0  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006C33D3  3B C7                     CMP EAX,EDI
006C33D5  7E 14                     JLE 0x006c33eb
006C33D7  2B C7                     SUB EAX,EDI
006C33D9  89 7E 14                  MOV dword ptr [ESI + 0x14],EDI
006C33DC  99                        CDQ
006C33DD  2B C2                     SUB EAX,EDX
006C33DF  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006C33E2  D1 F8                     SAR EAX,0x1
006C33E4  03 D0                     ADD EDX,EAX
006C33E6  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
006C33E9  EB 1C                     JMP 0x006c3407
LAB_006c33eb:
006C33EB  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006C33EE  3B C2                     CMP EAX,EDX
006C33F0  7E 15                     JLE 0x006c3407
006C33F2  2B C2                     SUB EAX,EDX
006C33F4  99                        CDQ
006C33F5  2B C2                     SUB EAX,EDX
006C33F7  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006C33FA  D1 F8                     SAR EAX,0x1
006C33FC  03 D0                     ADD EDX,EAX
006C33FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C3401  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
006C3404  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
LAB_006c3407:
006C3407  8B 7E 14                  MOV EDI,dword ptr [ESI + 0x14]
006C340A  3B DF                     CMP EBX,EDI
006C340C  7E 0F                     JLE 0x006c341d
006C340E  8B C3                     MOV EAX,EBX
006C3410  89 7E 24                  MOV dword ptr [ESI + 0x24],EDI
006C3413  2B C7                     SUB EAX,EDI
006C3415  99                        CDQ
006C3416  2B C2                     SUB EAX,EDX
006C3418  D1 F8                     SAR EAX,0x1
006C341A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
LAB_006c341d:
006C341D  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
006C3420  3B CF                     CMP ECX,EDI
006C3422  7E 0F                     JLE 0x006c3433
006C3424  8B C1                     MOV EAX,ECX
006C3426  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
006C3429  2B C7                     SUB EAX,EDI
006C342B  99                        CDQ
006C342C  2B C2                     SUB EAX,EDX
006C342E  D1 F8                     SAR EAX,0x1
006C3430  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
LAB_006c3433:
006C3433  F6 46 08 04               TEST byte ptr [ESI + 0x8],0x4
006C3437  75 32                     JNZ 0x006c346b
006C3439  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006C343C  3B C3                     CMP EAX,EBX
006C343E  7E 12                     JLE 0x006c3452
006C3440  2B C3                     SUB EAX,EBX
006C3442  89 5E 24                  MOV dword ptr [ESI + 0x24],EBX
006C3445  99                        CDQ
006C3446  2B C2                     SUB EAX,EDX
006C3448  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006C344B  D1 F8                     SAR EAX,0x1
006C344D  03 D0                     ADD EDX,EAX
006C344F  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
LAB_006c3452:
006C3452  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C3455  3B C1                     CMP EAX,ECX
006C3457  7E 12                     JLE 0x006c346b
006C3459  2B C1                     SUB EAX,ECX
006C345B  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
006C345E  99                        CDQ
006C345F  2B C2                     SUB EAX,EDX
006C3461  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
006C3464  D1 F8                     SAR EAX,0x1
006C3466  03 D0                     ADD EDX,EAX
006C3468  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
LAB_006c346b:
006C346B  5F                        POP EDI
006C346C  5E                        POP ESI
006C346D  5B                        POP EBX
006C346E  8B E5                     MOV ESP,EBP
006C3470  5D                        POP EBP
006C3471  C2 04 00                  RET 0x4
