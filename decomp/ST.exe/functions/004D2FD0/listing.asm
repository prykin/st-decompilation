FUN_004d2fd0:
004D2FD0  55                        PUSH EBP
004D2FD1  8B EC                     MOV EBP,ESP
004D2FD3  81 EC 78 01 00 00         SUB ESP,0x178
004D2FD9  53                        PUSH EBX
004D2FDA  8B D9                     MOV EBX,ECX
004D2FDC  33 C0                     XOR EAX,EAX
004D2FDE  56                        PUSH ESI
004D2FDF  3B D8                     CMP EBX,EAX
004D2FE1  57                        PUSH EDI
004D2FE2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004D2FE5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004D2FE8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004D2FEB  74 08                     JZ 0x004d2ff5
004D2FED  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
004D2FF3  EB 02                     JMP 0x004d2ff7
LAB_004d2ff5:
004D2FF5  33 F6                     XOR ESI,ESI
LAB_004d2ff7:
004D2FF7  B9 1B 00 00 00            MOV ECX,0x1b
004D2FFC  8D BD 88 FE FF FF         LEA EDI,[EBP + 0xfffffe88]
004D3002  F3 A5                     MOVSD.REP ES:EDI,ESI
004D3004  66 A5                     MOVSW ES:EDI,ESI
004D3006  A4                        MOVSB ES:EDI,ESI
004D3007  3B D8                     CMP EBX,EAX
004D3009  C7 85 94 FE FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffe94],0x2
004D3013  74 08                     JZ 0x004d301d
004D3015  8D B3 A0 02 00 00         LEA ESI,[EBX + 0x2a0]
004D301B  EB 02                     JMP 0x004d301f
LAB_004d301d:
004D301D  33 F6                     XOR ESI,ESI
LAB_004d301f:
004D301F  B9 2C 00 00 00            MOV ECX,0x2c
004D3024  8D BD F7 FE FF FF         LEA EDI,[EBP + 0xfffffef7]
004D302A  F3 A5                     MOVSD.REP ES:EDI,ESI
004D302C  8D 45 A7                  LEA EAX,[EBP + -0x59]
004D302F  8B CB                     MOV ECX,EBX
004D3031  50                        PUSH EAX
004D3032  E8 63 E1 F2 FF            CALL 0x0040119a
004D3037  8D 4D AF                  LEA ECX,[EBP + -0x51]
004D303A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004D303D  51                        PUSH ECX
004D303E  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004D3044  C7 45 AB 4F 01 00 00      MOV dword ptr [EBP + -0x55],0x14f
004D304B  E8 84 E8 F2 FF            CALL 0x004018d4
004D3050  8B 55 AB                  MOV EDX,dword ptr [EBP + -0x55]
004D3053  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004D3056  8B 45 A7                  MOV EAX,dword ptr [EBP + -0x59]
004D3059  8D 4D B7                  LEA ECX,[EBP + -0x49]
004D305C  03 C2                     ADD EAX,EDX
004D305E  51                        PUSH ECX
004D305F  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D3065  89 45 B3                  MOV dword ptr [EBP + -0x4d],EAX
004D3068  E8 67 E8 F2 FF            CALL 0x004018d4
004D306D  8B 55 B3                  MOV EDX,dword ptr [EBP + -0x4d]
004D3070  8B 4D B7                  MOV ECX,dword ptr [EBP + -0x49]
004D3073  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004D3076  8B 45 AF                  MOV EAX,dword ptr [EBP + -0x51]
004D3079  03 C2                     ADD EAX,EDX
004D307B  33 F6                     XOR ESI,ESI
004D307D  89 45 BB                  MOV dword ptr [EBP + -0x45],EAX
004D3080  03 C8                     ADD ECX,EAX
004D3082  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004D3088  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004D308B  3B C6                     CMP EAX,ESI
004D308D  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004D3090  75 43                     JNZ 0x004d30d5
004D3092  8D 93 50 03 00 00         LEA EDX,[EBX + 0x350]
004D3098  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_004d309b:
004D309B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004D309E  8D 7C 35 BF               LEA EDI,[EBP + ESI*0x1 + -0x41]
004D30A2  57                        PUSH EDI
004D30A3  8B 08                     MOV ECX,dword ptr [EAX]
004D30A5  E8 2A E8 F2 FF            CALL 0x004018d4
004D30AA  89 44 35 D8               MOV dword ptr [EBP + ESI*0x1 + -0x28],EAX
004D30AE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004D30B1  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004D30B4  89 44 35 CB               MOV dword ptr [EBP + ESI*0x1 + -0x35],EAX
004D30B8  8B 3F                     MOV EDI,dword ptr [EDI]
004D30BA  83 C6 04                  ADD ESI,0x4
004D30BD  03 C7                     ADD EAX,EDI
004D30BF  83 C2 04                  ADD EDX,0x4
004D30C2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004D30C5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004D30C8  03 C7                     ADD EAX,EDI
004D30CA  83 FE 0C                  CMP ESI,0xc
004D30CD  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004D30D0  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004D30D3  7C C6                     JL 0x004d309b
LAB_004d30d5:
004D30D5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004D30D8  8B 55 B7                  MOV EDX,dword ptr [EBP + -0x49]
004D30DB  8B 45 A7                  MOV EAX,dword ptr [EBP + -0x59]
004D30DE  03 CA                     ADD ECX,EDX
004D30E0  03 4D AF                  ADD ECX,dword ptr [EBP + -0x51]
004D30E3  8D 84 01 4F 01 00 00      LEA EAX,[ECX + EAX*0x1 + 0x14f]
004D30EA  50                        PUSH EAX
004D30EB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004D30EE  E8 7D 7B 1D 00            CALL 0x006aac70
004D30F3  B9 53 00 00 00            MOV ECX,0x53
004D30F8  8D B5 88 FE FF FF         LEA ESI,[EBP + 0xfffffe88]
004D30FE  8B F8                     MOV EDI,EAX
004D3100  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D3103  F3 A5                     MOVSD.REP ES:EDI,ESI
004D3105  66 A5                     MOVSW ES:EDI,ESI
004D3107  A4                        MOVSB ES:EDI,ESI
004D3108  8B 55 AB                  MOV EDX,dword ptr [EBP + -0x55]
004D310B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D310E  8B 4D A7                  MOV ECX,dword ptr [EBP + -0x59]
004D3111  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004D3114  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004D3117  8B D1                     MOV EDX,ECX
004D3119  C1 E9 02                  SHR ECX,0x2
004D311C  F3 A5                     MOVSD.REP ES:EDI,ESI
004D311E  8B CA                     MOV ECX,EDX
004D3120  83 E1 03                  AND ECX,0x3
004D3123  F3 A4                     MOVSB.REP ES:EDI,ESI
004D3125  8B 45 B3                  MOV EAX,dword ptr [EBP + -0x4d]
004D3128  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D312B  8B 4D AF                  MOV ECX,dword ptr [EBP + -0x51]
004D312E  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004D3131  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
004D3134  8B C1                     MOV EAX,ECX
004D3136  C1 E9 02                  SHR ECX,0x2
004D3139  F3 A5                     MOVSD.REP ES:EDI,ESI
004D313B  8B C8                     MOV ECX,EAX
004D313D  83 E1 03                  AND ECX,0x3
004D3140  F3 A4                     MOVSB.REP ES:EDI,ESI
004D3142  8B 55 BB                  MOV EDX,dword ptr [EBP + -0x45]
004D3145  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D3148  8B 4D B7                  MOV ECX,dword ptr [EBP + -0x49]
004D314B  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004D314E  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004D3151  8B D1                     MOV EDX,ECX
004D3153  C1 E9 02                  SHR ECX,0x2
004D3156  F3 A5                     MOVSD.REP ES:EDI,ESI
004D3158  8B CA                     MOV ECX,EDX
004D315A  83 E1 03                  AND ECX,0x3
004D315D  F3 A4                     MOVSB.REP ES:EDI,ESI
004D315F  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004D3165  85 C0                     TEST EAX,EAX
004D3167  75 29                     JNZ 0x004d3192
004D3169  33 C0                     XOR EAX,EAX
LAB_004d316b:
004D316B  8B 7C 05 CB               MOV EDI,dword ptr [EBP + EAX*0x1 + -0x35]
004D316F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D3172  8B 4C 05 BF               MOV ECX,dword ptr [EBP + EAX*0x1 + -0x41]
004D3176  8B 74 05 D8               MOV ESI,dword ptr [EBP + EAX*0x1 + -0x28]
004D317A  03 FA                     ADD EDI,EDX
004D317C  8B D1                     MOV EDX,ECX
004D317E  C1 E9 02                  SHR ECX,0x2
004D3181  F3 A5                     MOVSD.REP ES:EDI,ESI
004D3183  8B CA                     MOV ECX,EDX
004D3185  83 C0 04                  ADD EAX,0x4
004D3188  83 E1 03                  AND ECX,0x3
004D318B  83 F8 0C                  CMP EAX,0xc
004D318E  F3 A4                     MOVSB.REP ES:EDI,ESI
004D3190  7C D9                     JL 0x004d316b
LAB_004d3192:
004D3192  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004D3195  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D3198  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004D319B  50                        PUSH EAX
004D319C  51                        PUSH ECX
004D319D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D31A3  52                        PUSH EDX
004D31A4  E8 50 F4 F2 FF            CALL 0x004025f9
004D31A9  8D 45 FC                  LEA EAX,[EBP + -0x4]
004D31AC  50                        PUSH EAX
004D31AD  E8 AE 7E 1D 00            CALL 0x006ab060
004D31B2  8D 4D E4                  LEA ECX,[EBP + -0x1c]
004D31B5  51                        PUSH ECX
004D31B6  E8 A5 7E 1D 00            CALL 0x006ab060
004D31BB  8D 55 F4                  LEA EDX,[EBP + -0xc]
004D31BE  52                        PUSH EDX
004D31BF  E8 9C 7E 1D 00            CALL 0x006ab060
004D31C4  8D 45 F0                  LEA EAX,[EBP + -0x10]
004D31C7  50                        PUSH EAX
004D31C8  E8 93 7E 1D 00            CALL 0x006ab060
004D31CD  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004D31D3  85 C0                     TEST EAX,EAX
004D31D5  75 14                     JNZ 0x004d31eb
004D31D7  8D 75 D8                  LEA ESI,[EBP + -0x28]
004D31DA  BF 03 00 00 00            MOV EDI,0x3
LAB_004d31df:
004D31DF  56                        PUSH ESI
004D31E0  E8 7B 7E 1D 00            CALL 0x006ab060
004D31E5  83 C6 04                  ADD ESI,0x4
004D31E8  4F                        DEC EDI
004D31E9  75 F4                     JNZ 0x004d31df
LAB_004d31eb:
004D31EB  5F                        POP EDI
004D31EC  5E                        POP ESI
004D31ED  33 C0                     XOR EAX,EAX
004D31EF  5B                        POP EBX
004D31F0  8B E5                     MOV ESP,EBP
004D31F2  5D                        POP EBP
004D31F3  C3                        RET
