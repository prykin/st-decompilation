FUN_00493340:
00493340  55                        PUSH EBP
00493341  8B EC                     MOV EBP,ESP
00493343  83 EC 18                  SUB ESP,0x18
00493346  53                        PUSH EBX
00493347  56                        PUSH ESI
00493348  8B F1                     MOV ESI,ECX
0049334A  57                        PUSH EDI
0049334B  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0049334E  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00493351  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00493354  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00493357  C1 E0 04                  SHL EAX,0x4
0049335A  03 C1                     ADD EAX,ECX
0049335C  D1 E0                     SHL EAX,0x1
0049335E  8B B8 07 51 7F 00         MOV EDI,dword ptr [EAX + 0x7f5107]
00493364  8B 80 29 4E 7F 00         MOV EAX,dword ptr [EAX + 0x7f4e29]
0049336A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0049336D  33 C0                     XOR EAX,EAX
0049336F  85 FF                     TEST EDI,EDI
00493371  0F 84 DA 00 00 00         JZ 0x00493451
00493377  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0049337A  33 DB                     XOR EBX,EBX
0049337C  85 C9                     TEST ECX,ECX
0049337E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00493381  0F 8E CA 00 00 00         JLE 0x00493451
LAB_00493387:
00493387  8D 4D F0                  LEA ECX,[EBP + -0x10]
0049338A  8B D3                     MOV EDX,EBX
0049338C  51                        PUSH ECX
0049338D  8B CF                     MOV ECX,EDI
0049338F  E8 DC 98 21 00            CALL 0x006acc70
00493394  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00493397  66 81 FA FF FF            CMP DX,0xffff
0049339C  0F 84 95 00 00 00         JZ 0x00493437
004933A2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004933A5  8D 45 F4                  LEA EAX,[EBP + -0xc]
004933A8  50                        PUSH EAX
004933A9  81 E2 FF FF 00 00         AND EDX,0xffff
004933AF  E8 BC 98 21 00            CALL 0x006acc70
004933B4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004933B7  85 C0                     TEST EAX,EAX
004933B9  75 40                     JNZ 0x004933fb
004933BB  68 F4 BB 7A 00            PUSH 0x7abbf4
004933C0  68 CC 4C 7A 00            PUSH 0x7a4ccc
004933C5  6A 00                     PUSH 0x0
004933C7  6A 00                     PUSH 0x0
004933C9  68 21 52 00 00            PUSH 0x5221
004933CE  68 3C 9D 7A 00            PUSH 0x7a9d3c
004933D3  E8 F8 A0 21 00            CALL 0x006ad4d0
004933D8  83 C4 18                  ADD ESP,0x18
004933DB  85 C0                     TEST EAX,EAX
004933DD  74 01                     JZ 0x004933e0
004933DF  CC                        INT3
LAB_004933e0:
004933E0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004933E6  68 22 52 00 00            PUSH 0x5222
004933EB  68 3C 9D 7A 00            PUSH 0x7a9d3c
004933F0  51                        PUSH ECX
004933F1  68 04 00 FE AF            PUSH 0xaffe0004
004933F6  E8 45 2A 21 00            CALL 0x006a5e40
LAB_004933fb:
004933FB  8D 55 FE                  LEA EDX,[EBP + -0x2]
004933FE  8D 45 FC                  LEA EAX,[EBP + -0x4]
00493401  52                        PUSH EDX
00493402  8D 4D FA                  LEA ECX,[EBP + -0x6]
00493405  50                        PUSH EAX
00493406  51                        PUSH ECX
00493407  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0049340A  E8 B6 E4 F6 FF            CALL 0x004018c5
0049340F  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
00493413  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
00493417  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
0049341B  52                        PUSH EDX
0049341C  50                        PUSH EAX
0049341D  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00493421  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00493425  51                        PUSH ECX
00493426  52                        PUSH EDX
00493427  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0049342B  50                        PUSH EAX
0049342C  51                        PUSH ECX
0049342D  E8 9E 79 21 00            CALL 0x006aadd0
00493432  83 F8 06                  CMP EAX,0x6
00493435  7E 15                     JLE 0x0049344c
LAB_00493437:
00493437  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049343A  43                        INC EBX
0049343B  3B D8                     CMP EBX,EAX
0049343D  0F 8C 44 FF FF FF         JL 0x00493387
00493443  5F                        POP EDI
00493444  5E                        POP ESI
00493445  33 C0                     XOR EAX,EAX
00493447  5B                        POP EBX
00493448  8B E5                     MOV ESP,EBP
0049344A  5D                        POP EBP
0049344B  C3                        RET
LAB_0049344c:
0049344C  B8 01 00 00 00            MOV EAX,0x1
LAB_00493451:
00493451  5F                        POP EDI
00493452  5E                        POP ESI
00493453  5B                        POP EBX
00493454  8B E5                     MOV ESP,EBP
00493456  5D                        POP EBP
00493457  C3                        RET
