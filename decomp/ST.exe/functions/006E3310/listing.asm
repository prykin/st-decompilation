FUN_006e3310:
006E3310  55                        PUSH EBP
006E3311  8B EC                     MOV EBP,ESP
006E3313  83 EC 0C                  SUB ESP,0xc
006E3316  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E3319  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006E331C  85 C0                     TEST EAX,EAX
006E331E  74 06                     JZ 0x006e3326
006E3320  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_006e3326:
006E3326  53                        PUSH EBX
006E3327  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E332A  56                        PUSH ESI
006E332B  57                        PUSH EDI
006E332C  85 DB                     TEST EBX,EBX
006E332E  0F 8C BE 00 00 00         JL 0x006e33f2
006E3334  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E3337  85 C0                     TEST EAX,EAX
006E3339  0F 8C B3 00 00 00         JL 0x006e33f2
006E333F  8B 81 80 03 00 00         MOV EAX,dword ptr [ECX + 0x380]
006E3345  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006E3348  8D 3C 00                  LEA EDI,[EAX + EAX*0x1]
006E334B  8B C3                     MOV EAX,EBX
006E334D  99                        CDQ
006E334E  F7 FF                     IDIV EDI
006E3350  8B F0                     MOV ESI,EAX
006E3352  8B C3                     MOV EAX,EBX
006E3354  99                        CDQ
006E3355  F7 FF                     IDIV EDI
006E3357  85 F6                     TEST ESI,ESI
006E3359  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E335C  0F 8C 90 00 00 00         JL 0x006e33f2
006E3362  8B 99 84 02 00 00         MOV EBX,dword ptr [ECX + 0x284]
006E3368  3B F3                     CMP ESI,EBX
006E336A  0F 8D 82 00 00 00         JGE 0x006e33f2
006E3370  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E3373  99                        CDQ
006E3374  F7 FF                     IDIV EDI
006E3376  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006E3379  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E337C  99                        CDQ
006E337D  F7 FF                     IDIV EDI
006E337F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E3382  85 C0                     TEST EAX,EAX
006E3384  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006E3387  7C 69                     JL 0x006e33f2
006E3389  3B C3                     CMP EAX,EBX
006E338B  7D 65                     JGE 0x006e33f2
006E338D  8B 91 88 02 00 00         MOV EDX,dword ptr [ECX + 0x288]
006E3393  0F AF D8                  IMUL EBX,EAX
006E3396  8B 89 80 02 00 00         MOV ECX,dword ptr [ECX + 0x280]
006E339C  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
006E339F  03 F3                     ADD ESI,EBX
006E33A1  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006E33A4  03 C6                     ADD EAX,ESI
006E33A6  BE 05 00 00 00            MOV ESI,0x5
006E33AB  8D 9C 81 59 04 00 00      LEA EBX,[ECX + EAX*0x4 + 0x459]
LAB_006e33b2:
006E33B2  8B 03                     MOV EAX,dword ptr [EBX]
006E33B4  85 C0                     TEST EAX,EAX
006E33B6  74 2E                     JZ 0x006e33e6
006E33B8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E33BB  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006E33BE  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006E33C2  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006E33C5  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006E33C8  33 C9                     XOR ECX,ECX
006E33CA  8A 0C 3A                  MOV CL,byte ptr [EDX + EDI*0x1]
006E33CD  8B F9                     MOV EDI,ECX
006E33CF  85 FF                     TEST EDI,EDI
006E33D1  74 10                     JZ 0x006e33e3
006E33D3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E33D6  33 D2                     XOR EDX,EDX
006E33D8  8A 50 48                  MOV DL,byte ptr [EAX + 0x48]
006E33DB  8B C6                     MOV EAX,ESI
006E33DD  2B C2                     SUB EAX,EDX
006E33DF  3B C8                     CMP ECX,EAX
006E33E1  7D 1E                     JGE 0x006e3401
LAB_006e33e3:
006E33E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_006e33e6:
006E33E6  8B CA                     MOV ECX,EDX
006E33E8  F7 D9                     NEG ECX
006E33EA  4E                        DEC ESI
006E33EB  85 F6                     TEST ESI,ESI
006E33ED  8D 1C 8B                  LEA EBX,[EBX + ECX*0x4]
006E33F0  7F C0                     JG 0x006e33b2
LAB_006e33f2:
006E33F2  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
006E33F8  5F                        POP EDI
006E33F9  5E                        POP ESI
006E33FA  5B                        POP EBX
006E33FB  8B E5                     MOV ESP,EBP
006E33FD  5D                        POP EBP
006E33FE  C2 10 00                  RET 0x10
LAB_006e3401:
006E3401  85 F6                     TEST ESI,ESI
006E3403  7E ED                     JLE 0x006e33f2
006E3405  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E3408  85 C0                     TEST EAX,EAX
006E340A  74 02                     JZ 0x006e340e
006E340C  89 30                     MOV dword ptr [EAX],ESI
LAB_006e340e:
006E340E  8B 1B                     MOV EBX,dword ptr [EBX]
006E3410  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006E3413  33 D2                     XOR EDX,EDX
006E3415  0F BF 4B 08               MOVSX ECX,word ptr [EBX + 0x8]
006E3419  8A 53 48                  MOV DL,byte ptr [EBX + 0x48]
006E341C  2B CA                     SUB ECX,EDX
006E341E  0F AF 88 84 03 00 00      IMUL ECX,dword ptr [EAX + 0x384]
006E3425  03 CF                     ADD ECX,EDI
006E3427  5F                        POP EDI
006E3428  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006E342B  5E                        POP ESI
006E342C  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E342F  5B                        POP EBX
006E3430  DC 88 A4 03 00 00         FMUL double ptr [EAX + 0x3a4]
006E3436  DC 0D A8 DF 79 00         FMUL double ptr [0x0079dfa8]
006E343C  DC 80 94 03 00 00         FADD double ptr [EAX + 0x394]
006E3442  8B E5                     MOV ESP,EBP
006E3444  5D                        POP EBP
006E3445  C2 10 00                  RET 0x10
