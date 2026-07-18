FUN_0075a490:
0075A490  55                        PUSH EBP
0075A491  8B EC                     MOV EBP,ESP
0075A493  83 EC 24                  SUB ESP,0x24
0075A496  53                        PUSH EBX
0075A497  56                        PUSH ESI
0075A498  57                        PUSH EDI
0075A499  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075A49C  33 C9                     XOR ECX,ECX
0075A49E  8B 87 2A 01 00 00         MOV EAX,dword ptr [EDI + 0x12a]
0075A4A4  8B B7 96 01 00 00         MOV ESI,dword ptr [EDI + 0x196]
0075A4AA  8B 9F D0 00 00 00         MOV EBX,dword ptr [EDI + 0xd0]
0075A4B0  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0075A4B3  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0075A4B6  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0075A4B9  85 C0                     TEST EAX,EAX
0075A4BB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0075A4BE  0F 8E BC 00 00 00         JLE 0x0075a580
0075A4C4  83 C3 0C                  ADD EBX,0xc
0075A4C7  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0075A4CA  EB 03                     JMP 0x0075a4cf
LAB_0075a4cc:
0075A4CC  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_0075a4cf:
0075A4CF  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0075A4D2  0F AF 03                  IMUL EAX,dword ptr [EBX]
0075A4D5  99                        CDQ
0075A4D6  F7 BF 2A 01 00 00         IDIV dword ptr [EDI + 0x12a]
0075A4DC  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0075A4DF  8B 76 3C                  MOV ESI,dword ptr [ESI + 0x3c]
0075A4E2  8B 14 8A                  MOV EDX,dword ptr [EDX + ECX*0x4]
0075A4E5  8B 34 8E                  MOV ESI,dword ptr [ESI + ECX*0x4]
0075A4E8  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0075A4EB  85 C0                     TEST EAX,EAX
0075A4ED  7E 7C                     JLE 0x0075a56b
0075A4EF  8D 3C 85 00 00 00 00      LEA EDI,[EAX*0x4 + 0x0]
0075A4F6  33 C9                     XOR ECX,ECX
0075A4F8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075A4FB  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0075A4FE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075A501  8D 5F 02                  LEA EBX,[EDI + 0x2]
0075A504  0F AF D8                  IMUL EBX,EAX
0075A507  47                        INC EDI
0075A508  0F AF F8                  IMUL EDI,EAX
0075A50B  8D 1C 9E                  LEA EBX,[ESI + EBX*0x4]
0075A50E  2B D6                     SUB EDX,ESI
0075A510  8D 3C BE                  LEA EDI,[ESI + EDI*0x4]
0075A513  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075A516  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0075a519:
0075A519  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075A51C  8B 3C 3A                  MOV EDI,dword ptr [EDX + EDI*0x1]
0075A51F  8B C1                     MOV EAX,ECX
0075A521  2B C3                     SUB EAX,EBX
0075A523  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0075A526  89 3C 18                  MOV dword ptr [EAX + EBX*0x1],EDI
0075A529  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0075A52C  8B C1                     MOV EAX,ECX
0075A52E  2B C7                     SUB EAX,EDI
0075A530  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0075A533  8B 1F                     MOV EBX,dword ptr [EDI]
0075A535  83 C7 04                  ADD EDI,0x4
0075A538  89 1C 30                  MOV dword ptr [EAX + ESI*0x1],EBX
0075A53B  8D 04 31                  LEA EAX,[ECX + ESI*0x1]
0075A53E  83 C1 04                  ADD ECX,0x4
0075A541  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0075A544  8B 1C 02                  MOV EBX,dword ptr [EDX + EAX*0x1]
0075A547  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075A54A  89 1C 02                  MOV dword ptr [EDX + EAX*0x1],EBX
0075A54D  8B 5C 31 FC               MOV EBX,dword ptr [ECX + ESI*0x1 + -0x4]
0075A551  89 18                     MOV dword ptr [EAX],EBX
0075A553  83 C0 04                  ADD EAX,0x4
0075A556  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075A559  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0075A55C  48                        DEC EAX
0075A55D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075A560  75 B7                     JNZ 0x0075a519
0075A562  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0075A565  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075A568  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_0075a56b:
0075A56B  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0075A56E  41                        INC ECX
0075A56F  83 C3 54                  ADD EBX,0x54
0075A572  3B C8                     CMP ECX,EAX
0075A574  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0075A577  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0075A57A  0F 8C 4C FF FF FF         JL 0x0075a4cc
LAB_0075a580:
0075A580  5F                        POP EDI
0075A581  5E                        POP ESI
0075A582  5B                        POP EBX
0075A583  8B E5                     MOV ESP,EBP
0075A585  5D                        POP EBP
0075A586  C2 04 00                  RET 0x4
