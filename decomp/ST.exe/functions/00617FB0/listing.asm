FUN_00617fb0:
00617FB0  55                        PUSH EBP
00617FB1  8B EC                     MOV EBP,ESP
00617FB3  83 EC 14                  SUB ESP,0x14
00617FB6  53                        PUSH EBX
00617FB7  56                        PUSH ESI
00617FB8  8B F1                     MOV ESI,ECX
00617FBA  57                        PUSH EDI
00617FBB  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00617FBE  8B 46 5E                  MOV EAX,dword ptr [ESI + 0x5e]
00617FC1  85 C0                     TEST EAX,EAX
00617FC3  74 0C                     JZ 0x00617fd1
00617FC5  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00617FC8  0F AF 50 08               IMUL EDX,dword ptr [EAX + 0x8]
00617FCC  83 C2 1C                  ADD EDX,0x1c
00617FCF  EB 02                     JMP 0x00617fd3
LAB_00617fd1:
00617FD1  33 D2                     XOR EDX,EDX
LAB_00617fd3:
00617FD3  8B 46 62                  MOV EAX,dword ptr [ESI + 0x62]
00617FD6  85 C0                     TEST EAX,EAX
00617FD8  74 0C                     JZ 0x00617fe6
00617FDA  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00617FDD  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
00617FE1  83 C1 1C                  ADD ECX,0x1c
00617FE4  EB 02                     JMP 0x00617fe8
LAB_00617fe6:
00617FE6  33 C9                     XOR ECX,ECX
LAB_00617fe8:
00617FE8  8B 7E 66                  MOV EDI,dword ptr [ESI + 0x66]
00617FEB  85 FF                     TEST EDI,EDI
00617FED  74 0C                     JZ 0x00617ffb
00617FEF  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00617FF2  0F AF 47 08               IMUL EAX,dword ptr [EDI + 0x8]
00617FF6  83 C0 1C                  ADD EAX,0x1c
00617FF9  EB 02                     JMP 0x00617ffd
LAB_00617ffb:
00617FFB  33 C0                     XOR EAX,EAX
LAB_00617ffd:
00617FFD  03 C1                     ADD EAX,ECX
00617FFF  8D 44 10 5E               LEA EAX,[EAX + EDX*0x1 + 0x5e]
00618003  50                        PUSH EAX
00618004  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00618007  E8 64 2C 09 00            CALL 0x006aac70
0061800C  B9 14 00 00 00            MOV ECX,0x14
00618011  83 C6 1C                  ADD ESI,0x1c
00618014  8B F8                     MOV EDI,EAX
00618016  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00618019  F3 A5                     MOVSD.REP ES:EDI,ESI
0061801B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061801E  8D 58 52                  LEA EBX,[EAX + 0x52]
00618021  66 A5                     MOVSW ES:EDI,ESI
00618023  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
0061802A  8B 49 5E                  MOV ECX,dword ptr [ECX + 0x5e]
0061802D  85 C9                     TEST ECX,ECX
0061802F  74 3A                     JZ 0x0061806b
00618031  8D 55 FC                  LEA EDX,[EBP + -0x4]
00618034  52                        PUSH EDX
00618035  51                        PUSH ECX
00618036  E8 E5 7F 09 00            CALL 0x006b0020
0061803B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061803E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00618041  89 03                     MOV dword ptr [EBX],EAX
00618043  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00618046  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00618049  83 C3 04                  ADD EBX,0x4
0061804C  8B D1                     MOV EDX,ECX
0061804E  8B FB                     MOV EDI,EBX
00618050  C1 E9 02                  SHR ECX,0x2
00618053  F3 A5                     MOVSD.REP ES:EDI,ESI
00618055  8B CA                     MOV ECX,EDX
00618057  8D 45 F8                  LEA EAX,[EBP + -0x8]
0061805A  83 E1 03                  AND ECX,0x3
0061805D  50                        PUSH EAX
0061805E  F3 A4                     MOVSB.REP ES:EDI,ESI
00618060  03 5D FC                  ADD EBX,dword ptr [EBP + -0x4]
00618063  E8 F8 2F 09 00            CALL 0x006ab060
00618068  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_0061806b:
0061806B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061806E  8B 49 62                  MOV ECX,dword ptr [ECX + 0x62]
00618071  85 C9                     TEST ECX,ECX
00618073  74 3A                     JZ 0x006180af
00618075  8D 55 FC                  LEA EDX,[EBP + -0x4]
00618078  52                        PUSH EDX
00618079  51                        PUSH ECX
0061807A  E8 A1 7F 09 00            CALL 0x006b0020
0061807F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00618082  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00618085  89 03                     MOV dword ptr [EBX],EAX
00618087  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061808A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0061808D  83 C3 04                  ADD EBX,0x4
00618090  8B D1                     MOV EDX,ECX
00618092  8B FB                     MOV EDI,EBX
00618094  C1 E9 02                  SHR ECX,0x2
00618097  F3 A5                     MOVSD.REP ES:EDI,ESI
00618099  8B CA                     MOV ECX,EDX
0061809B  8D 45 F8                  LEA EAX,[EBP + -0x8]
0061809E  83 E1 03                  AND ECX,0x3
006180A1  50                        PUSH EAX
006180A2  F3 A4                     MOVSB.REP ES:EDI,ESI
006180A4  03 5D FC                  ADD EBX,dword ptr [EBP + -0x4]
006180A7  E8 B4 2F 09 00            CALL 0x006ab060
006180AC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_006180af:
006180AF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006180B2  8B 49 66                  MOV ECX,dword ptr [ECX + 0x66]
006180B5  85 C9                     TEST ECX,ECX
006180B7  74 46                     JZ 0x006180ff
006180B9  8D 55 FC                  LEA EDX,[EBP + -0x4]
006180BC  52                        PUSH EDX
006180BD  51                        PUSH ECX
006180BE  E8 5D 7F 09 00            CALL 0x006b0020
006180C3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006180C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006180C9  89 03                     MOV dword ptr [EBX],EAX
006180CB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006180CE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006180D1  8B D1                     MOV EDX,ECX
006180D3  8D 7B 04                  LEA EDI,[EBX + 0x4]
006180D6  8D 45 F8                  LEA EAX,[EBP + -0x8]
006180D9  C1 E9 02                  SHR ECX,0x2
006180DC  F3 A5                     MOVSD.REP ES:EDI,ESI
006180DE  8B CA                     MOV ECX,EDX
006180E0  50                        PUSH EAX
006180E1  83 E1 03                  AND ECX,0x3
006180E4  F3 A4                     MOVSB.REP ES:EDI,ESI
006180E6  E8 75 2F 09 00            CALL 0x006ab060
006180EB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006180EE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006180F1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006180F4  5F                        POP EDI
006180F5  5E                        POP ESI
006180F6  89 11                     MOV dword ptr [ECX],EDX
006180F8  5B                        POP EBX
006180F9  8B E5                     MOV ESP,EBP
006180FB  5D                        POP EBP
006180FC  C2 04 00                  RET 0x4
LAB_006180ff:
006180FF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00618102  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00618105  5F                        POP EDI
00618106  5E                        POP ESI
00618107  89 11                     MOV dword ptr [ECX],EDX
00618109  5B                        POP EBX
0061810A  8B E5                     MOV ESP,EBP
0061810C  5D                        POP EBP
0061810D  C2 04 00                  RET 0x4
