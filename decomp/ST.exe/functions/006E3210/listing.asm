FUN_006e3210:
006E3210  55                        PUSH EBP
006E3211  8B EC                     MOV EBP,ESP
006E3213  83 EC 08                  SUB ESP,0x8
006E3216  53                        PUSH EBX
006E3217  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E321A  56                        PUSH ESI
006E321B  57                        PUSH EDI
006E321C  85 DB                     TEST EBX,EBX
006E321E  0F 8C A6 00 00 00         JL 0x006e32ca
006E3224  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E3227  85 C0                     TEST EAX,EAX
006E3229  0F 8C 9B 00 00 00         JL 0x006e32ca
006E322F  8B 81 80 03 00 00         MOV EAX,dword ptr [ECX + 0x380]
006E3235  8D 3C 00                  LEA EDI,[EAX + EAX*0x1]
006E3238  8B C3                     MOV EAX,EBX
006E323A  99                        CDQ
006E323B  F7 FF                     IDIV EDI
006E323D  8B F0                     MOV ESI,EAX
006E323F  8B C3                     MOV EAX,EBX
006E3241  99                        CDQ
006E3242  F7 FF                     IDIV EDI
006E3244  85 F6                     TEST ESI,ESI
006E3246  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E3249  7C 7F                     JL 0x006e32ca
006E324B  8B 99 84 02 00 00         MOV EBX,dword ptr [ECX + 0x284]
006E3251  3B F3                     CMP ESI,EBX
006E3253  7D 75                     JGE 0x006e32ca
006E3255  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E3258  99                        CDQ
006E3259  F7 FF                     IDIV EDI
006E325B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006E325E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E3261  99                        CDQ
006E3262  F7 FF                     IDIV EDI
006E3264  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E3267  85 C0                     TEST EAX,EAX
006E3269  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E326C  7C 5C                     JL 0x006e32ca
006E326E  3B C3                     CMP EAX,EBX
006E3270  7D 58                     JGE 0x006e32ca
006E3272  8B B9 88 02 00 00         MOV EDI,dword ptr [ECX + 0x288]
006E3278  0F AF D8                  IMUL EBX,EAX
006E327B  8B 91 80 02 00 00         MOV EDX,dword ptr [ECX + 0x280]
006E3281  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
006E3284  03 F3                     ADD ESI,EBX
006E3286  C7 45 0C 05 00 00 00      MOV dword ptr [EBP + 0xc],0x5
006E328D  03 C6                     ADD EAX,ESI
006E328F  8D B4 82 59 04 00 00      LEA ESI,[EDX + EAX*0x4 + 0x459]
LAB_006e3296:
006E3296  8B 06                     MOV EAX,dword ptr [ESI]
006E3298  85 C0                     TEST EAX,EAX
006E329A  74 1C                     JZ 0x006e32b8
006E329C  8B 91 80 03 00 00         MOV EDX,dword ptr [ECX + 0x380]
006E32A2  8B 40 40                  MOV EAX,dword ptr [EAX + 0x40]
006E32A5  0F AF 55 FC               IMUL EDX,dword ptr [EBP + -0x4]
006E32A9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006E32AC  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006E32AF  33 C0                     XOR EAX,EAX
006E32B1  8A 04 1A                  MOV AL,byte ptr [EDX + EBX*0x1]
006E32B4  85 C0                     TEST EAX,EAX
006E32B6  75 21                     JNZ 0x006e32d9
LAB_006e32b8:
006E32B8  8B C7                     MOV EAX,EDI
006E32BA  F7 D8                     NEG EAX
006E32BC  8D 34 86                  LEA ESI,[ESI + EAX*0x4]
006E32BF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E32C2  48                        DEC EAX
006E32C3  85 C0                     TEST EAX,EAX
006E32C5  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E32C8  7F CC                     JG 0x006e3296
LAB_006e32ca:
006E32CA  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
006E32D0  5F                        POP EDI
006E32D1  5E                        POP ESI
006E32D2  5B                        POP EBX
006E32D3  8B E5                     MOV ESP,EBP
006E32D5  5D                        POP EBP
006E32D6  C2 08 00                  RET 0x8
LAB_006e32d9:
006E32D9  8B 36                     MOV ESI,dword ptr [ESI]
006E32DB  33 D2                     XOR EDX,EDX
006E32DD  5F                        POP EDI
006E32DE  8A 56 48                  MOV DL,byte ptr [ESI + 0x48]
006E32E1  0F BF 76 08               MOVSX ESI,word ptr [ESI + 0x8]
006E32E5  2B F2                     SUB ESI,EDX
006E32E7  0F AF B1 84 03 00 00      IMUL ESI,dword ptr [ECX + 0x384]
006E32EE  03 F0                     ADD ESI,EAX
006E32F0  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
006E32F3  5E                        POP ESI
006E32F4  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006E32F7  5B                        POP EBX
006E32F8  DC 89 A4 03 00 00         FMUL double ptr [ECX + 0x3a4]
006E32FE  DC 0D A8 DF 79 00         FMUL double ptr [0x0079dfa8]
006E3304  DC 81 94 03 00 00         FADD double ptr [ECX + 0x394]
006E330A  8B E5                     MOV ESP,EBP
006E330C  5D                        POP EBP
006E330D  C2 08 00                  RET 0x8
