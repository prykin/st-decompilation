FUN_00524fe0:
00524FE0  55                        PUSH EBP
00524FE1  8B EC                     MOV EBP,ESP
00524FE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00524FE6  33 C0                     XOR EAX,EAX
00524FE8  81 E1 FF FF 00 00         AND ECX,0xffff
00524FEE  81 C1 6A FF FF FF         ADD ECX,0xffffff6a
00524FF4  83 F9 48                  CMP ECX,0x48
00524FF7  0F 87 17 01 00 00         JA 0x00525114
00524FFD  33 D2                     XOR EDX,EDX
00524FFF  8A 91 B4 51 52 00         MOV DL,byte ptr [ECX + 0x5251b4]
switchD_00525005::switchD:
00525005  FF 24 95 18 51 52 00      JMP dword ptr [EDX*0x4 + 0x525118]
switchD_00525005::caseD_96:
0052500C  B8 38 31 00 00            MOV EAX,0x3138
00525011  5D                        POP EBP
00525012  C3                        RET
switchD_00525005::caseD_97:
00525013  B8 39 31 00 00            MOV EAX,0x3139
00525018  5D                        POP EBP
00525019  C3                        RET
switchD_00525005::caseD_98:
0052501A  B8 3A 31 00 00            MOV EAX,0x313a
0052501F  5D                        POP EBP
00525020  C3                        RET
switchD_00525005::caseD_99:
00525021  B8 3B 31 00 00            MOV EAX,0x313b
00525026  5D                        POP EBP
00525027  C3                        RET
switchD_00525005::caseD_ac:
00525028  B8 3C 31 00 00            MOV EAX,0x313c
0052502D  5D                        POP EBP
0052502E  C3                        RET
switchD_00525005::caseD_9a:
0052502F  B8 3D 31 00 00            MOV EAX,0x313d
00525034  5D                        POP EBP
00525035  C3                        RET
switchD_00525005::caseD_9c:
00525036  B8 3E 31 00 00            MOV EAX,0x313e
0052503B  5D                        POP EBP
0052503C  C3                        RET
switchD_00525005::caseD_9d:
0052503D  B8 3F 31 00 00            MOV EAX,0x313f
00525042  5D                        POP EBP
00525043  C3                        RET
switchD_00525005::caseD_9e:
00525044  B8 40 31 00 00            MOV EAX,0x3140
00525049  5D                        POP EBP
0052504A  C3                        RET
switchD_00525005::caseD_ab:
0052504B  B8 42 31 00 00            MOV EAX,0x3142
00525050  5D                        POP EBP
00525051  C3                        RET
switchD_00525005::caseD_a6:
00525052  B8 43 31 00 00            MOV EAX,0x3143
00525057  5D                        POP EBP
00525058  C3                        RET
switchD_00525005::caseD_a7:
00525059  B8 44 31 00 00            MOV EAX,0x3144
0052505E  5D                        POP EBP
0052505F  C3                        RET
switchD_00525005::caseD_a8:
00525060  B8 45 31 00 00            MOV EAX,0x3145
00525065  5D                        POP EBP
00525066  C3                        RET
switchD_00525005::caseD_a9:
00525067  B8 46 31 00 00            MOV EAX,0x3146
0052506C  5D                        POP EBP
0052506D  C3                        RET
switchD_00525005::caseD_a3:
0052506E  B8 47 31 00 00            MOV EAX,0x3147
00525073  5D                        POP EBP
00525074  C3                        RET
switchD_00525005::caseD_a4:
00525075  B8 48 31 00 00            MOV EAX,0x3148
0052507A  5D                        POP EBP
0052507B  C3                        RET
switchD_00525005::caseD_af:
0052507C  B8 49 31 00 00            MOV EAX,0x3149
00525081  5D                        POP EBP
00525082  C3                        RET
switchD_00525005::caseD_b6:
00525083  B8 4A 31 00 00            MOV EAX,0x314a
00525088  5D                        POP EBP
00525089  C3                        RET
switchD_00525005::caseD_b7:
0052508A  B8 4B 31 00 00            MOV EAX,0x314b
0052508F  5D                        POP EBP
00525090  C3                        RET
switchD_00525005::caseD_ba:
00525091  B8 4C 31 00 00            MOV EAX,0x314c
00525096  5D                        POP EBP
00525097  C3                        RET
switchD_00525005::caseD_bf:
00525098  B8 4D 31 00 00            MOV EAX,0x314d
0052509D  5D                        POP EBP
0052509E  C3                        RET
switchD_00525005::caseD_b0:
0052509F  B8 4E 31 00 00            MOV EAX,0x314e
005250A4  5D                        POP EBP
005250A5  C3                        RET
switchD_00525005::caseD_bd:
005250A6  B8 4F 31 00 00            MOV EAX,0x314f
005250AB  5D                        POP EBP
005250AC  C3                        RET
switchD_00525005::caseD_bc:
005250AD  B8 50 31 00 00            MOV EAX,0x3150
005250B2  5D                        POP EBP
005250B3  C3                        RET
switchD_00525005::caseD_b3:
005250B4  B8 51 31 00 00            MOV EAX,0x3151
005250B9  5D                        POP EBP
005250BA  C3                        RET
switchD_00525005::caseD_b5:
005250BB  B8 52 31 00 00            MOV EAX,0x3152
005250C0  5D                        POP EBP
005250C1  C3                        RET
switchD_00525005::caseD_ad:
005250C2  B8 53 31 00 00            MOV EAX,0x3153
005250C7  5D                        POP EBP
005250C8  C3                        RET
switchD_00525005::caseD_b8:
005250C9  B8 54 31 00 00            MOV EAX,0x3154
005250CE  5D                        POP EBP
005250CF  C3                        RET
switchD_00525005::caseD_ae:
005250D0  B8 55 31 00 00            MOV EAX,0x3155
005250D5  5D                        POP EBP
005250D6  C3                        RET
switchD_00525005::caseD_be:
005250D7  B8 56 31 00 00            MOV EAX,0x3156
005250DC  5D                        POP EBP
005250DD  C3                        RET
switchD_00525005::caseD_dd:
005250DE  B8 1D 27 00 00            MOV EAX,0x271d
005250E3  5D                        POP EBP
005250E4  C3                        RET
switchD_00525005::caseD_de:
005250E5  B8 1E 27 00 00            MOV EAX,0x271e
005250EA  5D                        POP EBP
005250EB  C3                        RET
switchD_00525005::caseD_9f:
005250EC  B8 57 31 00 00            MOV EAX,0x3157
005250F1  5D                        POP EBP
005250F2  C3                        RET
switchD_00525005::caseD_a0:
005250F3  B8 58 31 00 00            MOV EAX,0x3158
005250F8  5D                        POP EBP
005250F9  C3                        RET
switchD_00525005::caseD_c0:
005250FA  B8 59 31 00 00            MOV EAX,0x3159
005250FF  5D                        POP EBP
00525100  C3                        RET
switchD_00525005::caseD_a1:
00525101  B8 5A 31 00 00            MOV EAX,0x315a
00525106  5D                        POP EBP
00525107  C3                        RET
switchD_00525005::caseD_c1:
00525108  B8 5B 31 00 00            MOV EAX,0x315b
0052510D  5D                        POP EBP
0052510E  C3                        RET
switchD_00525005::caseD_b2:
0052510F  B8 5C 31 00 00            MOV EAX,0x315c
switchD_00525005::caseD_9b:
00525114  5D                        POP EBP
00525115  C3                        RET
