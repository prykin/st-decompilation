FUN_0075f3f0:
0075F3F0  55                        PUSH EBP
0075F3F1  8B EC                     MOV EBP,ESP
0075F3F3  51                        PUSH ECX
0075F3F4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075F3F7  53                        PUSH EBX
0075F3F8  56                        PUSH ESI
0075F3F9  57                        PUSH EDI
0075F3FA  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075F3FD  3B F8                     CMP EDI,EAX
0075F3FF  0F 8D 0D 01 00 00         JGE 0x0075f512
0075F405  8D 0C 3F                  LEA ECX,[EDI + EDI*0x1]
0075F408  8B D7                     MOV EDX,EDI
0075F40A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075F40D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075F410  C1 E2 05                  SHL EDX,0x5
0075F413  8D 74 0A 0C               LEA ESI,[EDX + ECX*0x1 + 0xc]
0075F417  EB 03                     JMP 0x0075f41c
LAB_0075f419:
0075F419  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_0075f41c:
0075F41C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075F41F  57                        PUSH EDI
0075F420  3B D0                     CMP EDX,EAX
0075F422  51                        PUSH ECX
0075F423  7F 07                     JG 0x0075f42c
0075F425  E8 F6 00 00 00            CALL 0x0075f520
0075F42A  EB 05                     JMP 0x0075f431
LAB_0075f42c:
0075F42C  E8 2F 01 00 00            CALL 0x0075f560
LAB_0075f431:
0075F431  8B C8                     MOV ECX,EAX
0075F433  85 C9                     TEST ECX,ECX
0075F435  0F 84 D7 00 00 00         JZ 0x0075f512
0075F43B  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0075F43E  89 46 F8                  MOV dword ptr [ESI + -0x8],EAX
0075F441  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0075F444  89 16                     MOV dword ptr [ESI],EDX
0075F446  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0075F449  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0075F44C  8B 11                     MOV EDX,dword ptr [ECX]
0075F44E  89 56 F4                  MOV dword ptr [ESI + -0xc],EDX
0075F451  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0075F454  89 46 FC                  MOV dword ptr [ESI + -0x4],EAX
0075F457  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0075F45A  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
0075F45D  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0075F460  8B 39                     MOV EDI,dword ptr [ECX]
0075F462  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0075F465  8B 59 10                  MOV EBX,dword ptr [ECX + 0x10]
0075F468  2B D7                     SUB EDX,EDI
0075F46A  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
0075F46D  2B C3                     SUB EAX,EBX
0075F46F  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
0075F472  2B FB                     SUB EDI,EBX
0075F474  BB 01 00 00 00            MOV EBX,0x1
0075F479  C1 E0 04                  SHL EAX,0x4
0075F47C  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
0075F47F  C1 E7 02                  SHL EDI,0x2
0075F482  C1 E2 03                  SHL EDX,0x3
0075F485  3B C7                     CMP EAX,EDI
0075F487  7E 07                     JLE 0x0075f490
0075F489  8B F8                     MOV EDI,EAX
0075F48B  BB 02 00 00 00            MOV EBX,0x2
LAB_0075f490:
0075F490  3B D7                     CMP EDX,EDI
0075F492  7E 02                     JLE 0x0075f496
0075F494  33 DB                     XOR EBX,EBX
LAB_0075f496:
0075F496  83 EB 00                  SUB EBX,0x0
0075F499  74 32                     JZ 0x0075f4cd
0075F49B  4B                        DEC EBX
0075F49C  74 19                     JZ 0x0075f4b7
0075F49E  4B                        DEC EBX
0075F49F  75 3F                     JNZ 0x0075f4e0
0075F4A1  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0075F4A4  8B 59 14                  MOV EBX,dword ptr [ECX + 0x14]
0075F4A7  03 C3                     ADD EAX,EBX
0075F4A9  99                        CDQ
0075F4AA  2B C2                     SUB EAX,EDX
0075F4AC  D1 F8                     SAR EAX,0x1
0075F4AE  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
0075F4B1  40                        INC EAX
0075F4B2  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
0075F4B5  EB 29                     JMP 0x0075f4e0
LAB_0075f4b7:
0075F4B7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0075F4BA  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
0075F4BD  03 C3                     ADD EAX,EBX
0075F4BF  99                        CDQ
0075F4C0  2B C2                     SUB EAX,EDX
0075F4C2  D1 F8                     SAR EAX,0x1
0075F4C4  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0075F4C7  40                        INC EAX
0075F4C8  89 46 FC                  MOV dword ptr [ESI + -0x4],EAX
0075F4CB  EB 13                     JMP 0x0075f4e0
LAB_0075f4cd:
0075F4CD  8B 01                     MOV EAX,dword ptr [ECX]
0075F4CF  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
0075F4D2  03 C3                     ADD EAX,EBX
0075F4D4  99                        CDQ
0075F4D5  2B C2                     SUB EAX,EDX
0075F4D7  D1 F8                     SAR EAX,0x1
0075F4D9  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0075F4DC  40                        INC EAX
0075F4DD  89 46 F4                  MOV dword ptr [ESI + -0xc],EAX
LAB_0075f4e0:
0075F4E0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075F4E3  51                        PUSH ECX
0075F4E4  57                        PUSH EDI
0075F4E5  E8 F6 FA FF FF            CALL 0x0075efe0
0075F4EA  8D 46 F4                  LEA EAX,[ESI + -0xc]
0075F4ED  50                        PUSH EAX
0075F4EE  57                        PUSH EDI
0075F4EF  E8 EC FA FF FF            CALL 0x0075efe0
0075F4F4  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075F4F7  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075F4FA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075F4FD  47                        INC EDI
0075F4FE  83 C3 02                  ADD EBX,0x2
0075F501  83 C6 20                  ADD ESI,0x20
0075F504  3B F8                     CMP EDI,EAX
0075F506  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0075F509  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075F50C  0F 8C 07 FF FF FF         JL 0x0075f419
LAB_0075f512:
0075F512  8B C7                     MOV EAX,EDI
0075F514  5F                        POP EDI
0075F515  5E                        POP ESI
0075F516  5B                        POP EBX
0075F517  8B E5                     MOV ESP,EBP
0075F519  5D                        POP EBP
0075F51A  C2 10 00                  RET 0x10
