FUN_00526100:
00526100  55                        PUSH EBP
00526101  8B EC                     MOV EBP,ESP
00526103  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00526106  56                        PUSH ESI
00526107  85 C9                     TEST ECX,ECX
00526109  B8 98 4A 7C 00            MOV EAX,0x7c4a98
0052610E  75 08                     JNZ 0x00526118
00526110  B8 8C 4A 7C 00            MOV EAX,0x7c4a8c
00526115  5E                        POP ESI
00526116  5D                        POP EBP
00526117  C3                        RET
LAB_00526118:
00526118  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0052611B  85 D2                     TEST EDX,EDX
0052611D  74 08                     JZ 0x00526127
0052611F  B8 80 4A 7C 00            MOV EAX,0x7c4a80
00526124  5E                        POP ESI
00526125  5D                        POP EBP
00526126  C3                        RET
LAB_00526127:
00526127  33 D2                     XOR EDX,EDX
00526129  8A 11                     MOV DL,byte ptr [ECX]
0052612B  4A                        DEC EDX
0052612C  83 FA 03                  CMP EDX,0x3
0052612F  0F 87 6C 05 00 00         JA 0x005266a1
switchD_00526135::switchD:
00526135  FF 24 95 A4 66 52 00      JMP dword ptr [EDX*0x4 + 0x5266a4]
switchD_00526135::caseD_2:
0052613C  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
0052613F  84 D2                     TEST DL,DL
00526141  0F 84 5A 05 00 00         JZ 0x005266a1
00526147  33 D2                     XOR EDX,EDX
00526149  8A 51 07                  MOV DL,byte ptr [ECX + 0x7]
0052614C  8B CA                     MOV ECX,EDX
0052614E  49                        DEC ECX
0052614F  74 1A                     JZ 0x0052616b
00526151  49                        DEC ECX
00526152  74 0F                     JZ 0x00526163
00526154  49                        DEC ECX
00526155  0F 85 46 05 00 00         JNZ 0x005266a1
0052615B  B8 70 4A 7C 00            MOV EAX,0x7c4a70
00526160  5E                        POP ESI
00526161  5D                        POP EBP
00526162  C3                        RET
LAB_00526163:
00526163  B8 60 4A 7C 00            MOV EAX,0x7c4a60
00526168  5E                        POP ESI
00526169  5D                        POP EBP
0052616A  C3                        RET
LAB_0052616b:
0052616B  B8 50 4A 7C 00            MOV EAX,0x7c4a50
00526170  5E                        POP ESI
00526171  5D                        POP EBP
00526172  C3                        RET
switchD_00526135::caseD_1:
00526173  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
00526176  84 D2                     TEST DL,DL
00526178  0F 84 23 05 00 00         JZ 0x005266a1
0052617E  8B 51 03                  MOV EDX,dword ptr [ECX + 0x3]
00526181  8D 72 FF                  LEA ESI,[EDX + -0x1]
00526184  81 FE FD 00 00 00         CMP ESI,0xfd
0052618A  0F 87 11 05 00 00         JA 0x005266a1
00526190  33 D2                     XOR EDX,EDX
00526192  8A 96 7C 68 52 00         MOV DL,byte ptr [ESI + 0x52687c]
switchD_00526198::switchD:
00526198  FF 24 95 B4 66 52 00      JMP dword ptr [EDX*0x4 + 0x5266b4]
switchD_00526198::caseD_1:
0052619F  B8 40 4A 7C 00            MOV EAX,0x7c4a40
005261A4  5E                        POP ESI
005261A5  5D                        POP EBP
005261A6  C3                        RET
switchD_00526198::caseD_2:
005261A7  B8 34 4A 7C 00            MOV EAX,0x7c4a34
005261AC  5E                        POP ESI
005261AD  5D                        POP EBP
005261AE  C3                        RET
switchD_00526198::caseD_3:
005261AF  B8 24 4A 7C 00            MOV EAX,0x7c4a24
005261B4  5E                        POP ESI
005261B5  5D                        POP EBP
005261B6  C3                        RET
switchD_00526198::caseD_4:
005261B7  B8 14 4A 7C 00            MOV EAX,0x7c4a14
005261BC  5E                        POP ESI
005261BD  5D                        POP EBP
005261BE  C3                        RET
switchD_00526198::caseD_5:
005261BF  B8 04 4A 7C 00            MOV EAX,0x7c4a04
005261C4  5E                        POP ESI
005261C5  5D                        POP EBP
005261C6  C3                        RET
switchD_00526198::caseD_6:
005261C7  B8 F4 49 7C 00            MOV EAX,0x7c49f4
005261CC  5E                        POP ESI
005261CD  5D                        POP EBP
005261CE  C3                        RET
switchD_00526198::caseD_7:
005261CF  B8 E0 49 7C 00            MOV EAX,0x7c49e0
005261D4  5E                        POP ESI
005261D5  5D                        POP EBP
005261D6  C3                        RET
switchD_00526198::caseD_8:
005261D7  B8 D0 49 7C 00            MOV EAX,0x7c49d0
005261DC  5E                        POP ESI
005261DD  5D                        POP EBP
005261DE  C3                        RET
switchD_00526198::caseD_9:
005261DF  B8 C0 49 7C 00            MOV EAX,0x7c49c0
005261E4  5E                        POP ESI
005261E5  5D                        POP EBP
005261E6  C3                        RET
switchD_00526198::caseD_16:
005261E7  B8 B0 49 7C 00            MOV EAX,0x7c49b0
005261EC  5E                        POP ESI
005261ED  5D                        POP EBP
005261EE  C3                        RET
switchD_00526198::caseD_a:
005261EF  B8 A0 49 7C 00            MOV EAX,0x7c49a0
005261F4  5E                        POP ESI
005261F5  5D                        POP EBP
005261F6  C3                        RET
switchD_00526198::caseD_25:
005261F7  B8 8C 49 7C 00            MOV EAX,0x7c498c
005261FC  5E                        POP ESI
005261FD  5D                        POP EBP
005261FE  C3                        RET
switchD_00526198::caseD_d:
005261FF  B8 78 49 7C 00            MOV EAX,0x7c4978
00526204  5E                        POP ESI
00526205  5D                        POP EBP
00526206  C3                        RET
switchD_00526198::caseD_e:
00526207  B8 68 49 7C 00            MOV EAX,0x7c4968
0052620C  5E                        POP ESI
0052620D  5D                        POP EBP
0052620E  C3                        RET
switchD_00526198::caseD_f:
0052620F  B8 58 49 7C 00            MOV EAX,0x7c4958
00526214  5E                        POP ESI
00526215  5D                        POP EBP
00526216  C3                        RET
switchD_00526198::caseD_10:
00526217  B8 48 49 7C 00            MOV EAX,0x7c4948
0052621C  5E                        POP ESI
0052621D  5D                        POP EBP
0052621E  C3                        RET
switchD_00526198::caseD_11:
0052621F  B8 38 49 7C 00            MOV EAX,0x7c4938
00526224  5E                        POP ESI
00526225  5D                        POP EBP
00526226  C3                        RET
switchD_00526198::caseD_13:
00526227  B8 20 49 7C 00            MOV EAX,0x7c4920
0052622C  5E                        POP ESI
0052622D  5D                        POP EBP
0052622E  C3                        RET
switchD_00526198::caseD_14:
0052622F  B8 10 49 7C 00            MOV EAX,0x7c4910
00526234  5E                        POP ESI
00526235  5D                        POP EBP
00526236  C3                        RET
switchD_00526198::caseD_15:
00526237  B8 FC 48 7C 00            MOV EAX,0x7c48fc
0052623C  5E                        POP ESI
0052623D  5D                        POP EBP
0052623E  C3                        RET
switchD_00526198::caseD_b:
0052623F  B8 EC 48 7C 00            MOV EAX,0x7c48ec
00526244  5E                        POP ESI
00526245  5D                        POP EBP
00526246  C3                        RET
switchD_00526198::caseD_17:
00526247  B8 DC 48 7C 00            MOV EAX,0x7c48dc
0052624C  5E                        POP ESI
0052624D  5D                        POP EBP
0052624E  C3                        RET
switchD_00526198::caseD_fe:
0052624F  33 D2                     XOR EDX,EDX
00526251  8A 51 07                  MOV DL,byte ptr [ECX + 0x7]
00526254  8B CA                     MOV ECX,EDX
00526256  49                        DEC ECX
00526257  74 1A                     JZ 0x00526273
00526259  49                        DEC ECX
0052625A  74 0F                     JZ 0x0052626b
0052625C  49                        DEC ECX
0052625D  0F 85 3E 04 00 00         JNZ 0x005266a1
00526263  B8 CC 48 7C 00            MOV EAX,0x7c48cc
00526268  5E                        POP ESI
00526269  5D                        POP EBP
0052626A  C3                        RET
LAB_0052626b:
0052626B  B8 BC 48 7C 00            MOV EAX,0x7c48bc
00526270  5E                        POP ESI
00526271  5D                        POP EBP
00526272  C3                        RET
LAB_00526273:
00526273  B8 AC 48 7C 00            MOV EAX,0x7c48ac
00526278  5E                        POP ESI
00526279  5D                        POP EBP
0052627A  C3                        RET
switchD_00526198::caseD_c:
0052627B  B8 94 48 7C 00            MOV EAX,0x7c4894
00526280  5E                        POP ESI
00526281  5D                        POP EBP
00526282  C3                        RET
switchD_00526198::caseD_18:
00526283  B8 7C 48 7C 00            MOV EAX,0x7c487c
00526288  5E                        POP ESI
00526289  5D                        POP EBP
0052628A  C3                        RET
switchD_00526198::caseD_26:
0052628B  B8 70 48 7C 00            MOV EAX,0x7c4870
00526290  5E                        POP ESI
00526291  5D                        POP EBP
00526292  C3                        RET
switchD_00526198::caseD_12:
00526293  B8 60 48 7C 00            MOV EAX,0x7c4860
00526298  5E                        POP ESI
00526299  5D                        POP EBP
0052629A  C3                        RET
switchD_00526198::caseD_fd:
0052629B  33 C0                     XOR EAX,EAX
0052629D  8A 41 07                  MOV AL,byte ptr [ECX + 0x7]
005262A0  48                        DEC EAX
005262A1  74 13                     JZ 0x005262b6
005262A3  48                        DEC EAX
005262A4  74 08                     JZ 0x005262ae
005262A6  B8 50 48 7C 00            MOV EAX,0x7c4850
005262AB  5E                        POP ESI
005262AC  5D                        POP EBP
005262AD  C3                        RET
LAB_005262ae:
005262AE  B8 40 48 7C 00            MOV EAX,0x7c4840
005262B3  5E                        POP ESI
005262B4  5D                        POP EBP
005262B5  C3                        RET
LAB_005262b6:
005262B6  B8 30 48 7C 00            MOV EAX,0x7c4830
005262BB  5E                        POP ESI
005262BC  5D                        POP EBP
005262BD  C3                        RET
switchD_00526198::caseD_32:
005262BE  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
005262C2  75 08                     JNZ 0x005262cc
005262C4  B8 20 48 7C 00            MOV EAX,0x7c4820
005262C9  5E                        POP ESI
005262CA  5D                        POP EBP
005262CB  C3                        RET
LAB_005262cc:
005262CC  B8 10 48 7C 00            MOV EAX,0x7c4810
005262D1  5E                        POP ESI
005262D2  5D                        POP EBP
005262D3  C3                        RET
switchD_00526198::caseD_33:
005262D4  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
005262D8  75 08                     JNZ 0x005262e2
005262DA  B8 00 48 7C 00            MOV EAX,0x7c4800
005262DF  5E                        POP ESI
005262E0  5D                        POP EBP
005262E1  C3                        RET
LAB_005262e2:
005262E2  B8 F0 47 7C 00            MOV EAX,0x7c47f0
005262E7  5E                        POP ESI
005262E8  5D                        POP EBP
005262E9  C3                        RET
switchD_00526198::caseD_34:
005262EA  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
005262EE  75 08                     JNZ 0x005262f8
005262F0  B8 E0 47 7C 00            MOV EAX,0x7c47e0
005262F5  5E                        POP ESI
005262F6  5D                        POP EBP
005262F7  C3                        RET
LAB_005262f8:
005262F8  B8 D0 47 7C 00            MOV EAX,0x7c47d0
005262FD  5E                        POP ESI
005262FE  5D                        POP EBP
005262FF  C3                        RET
switchD_00526198::caseD_35:
00526300  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
00526304  75 08                     JNZ 0x0052630e
00526306  B8 C0 47 7C 00            MOV EAX,0x7c47c0
0052630B  5E                        POP ESI
0052630C  5D                        POP EBP
0052630D  C3                        RET
LAB_0052630e:
0052630E  B8 B0 47 7C 00            MOV EAX,0x7c47b0
00526313  5E                        POP ESI
00526314  5D                        POP EBP
00526315  C3                        RET
switchD_00526198::caseD_36:
00526316  8A 51 02                  MOV DL,byte ptr [ECX + 0x2]
00526319  B0 01                     MOV AL,0x1
0052631B  3A D0                     CMP DL,AL
0052631D  75 08                     JNZ 0x00526327
0052631F  B8 A4 47 7C 00            MOV EAX,0x7c47a4
00526324  5E                        POP ESI
00526325  5D                        POP EBP
00526326  C3                        RET
LAB_00526327:
00526327  38 41 07                  CMP byte ptr [ECX + 0x7],AL
0052632A  75 08                     JNZ 0x00526334
0052632C  B8 94 47 7C 00            MOV EAX,0x7c4794
00526331  5E                        POP ESI
00526332  5D                        POP EBP
00526333  C3                        RET
LAB_00526334:
00526334  B8 84 47 7C 00            MOV EAX,0x7c4784
00526339  5E                        POP ESI
0052633A  5D                        POP EBP
0052633B  C3                        RET
switchD_00526198::caseD_37:
0052633C  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
00526340  75 08                     JNZ 0x0052634a
00526342  B8 74 47 7C 00            MOV EAX,0x7c4774
00526347  5E                        POP ESI
00526348  5D                        POP EBP
00526349  C3                        RET
LAB_0052634a:
0052634A  B8 64 47 7C 00            MOV EAX,0x7c4764
0052634F  5E                        POP ESI
00526350  5D                        POP EBP
00526351  C3                        RET
switchD_00526198::caseD_39:
00526352  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
00526356  75 08                     JNZ 0x00526360
00526358  B8 54 47 7C 00            MOV EAX,0x7c4754
0052635D  5E                        POP ESI
0052635E  5D                        POP EBP
0052635F  C3                        RET
LAB_00526360:
00526360  B8 44 47 7C 00            MOV EAX,0x7c4744
00526365  5E                        POP ESI
00526366  5D                        POP EBP
00526367  C3                        RET
switchD_00526198::caseD_4f:
00526368  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
0052636C  75 08                     JNZ 0x00526376
0052636E  B8 34 47 7C 00            MOV EAX,0x7c4734
00526373  5E                        POP ESI
00526374  5D                        POP EBP
00526375  C3                        RET
switchD_00526198::caseD_38:
00526376  B8 24 47 7C 00            MOV EAX,0x7c4724
0052637B  5E                        POP ESI
0052637C  5D                        POP EBP
0052637D  C3                        RET
switchD_00526198::caseD_3a:
0052637E  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
00526382  75 08                     JNZ 0x0052638c
00526384  B8 10 47 7C 00            MOV EAX,0x7c4710
00526389  5E                        POP ESI
0052638A  5D                        POP EBP
0052638B  C3                        RET
LAB_0052638c:
0052638C  B8 FC 46 7C 00            MOV EAX,0x7c46fc
00526391  5E                        POP ESI
00526392  5D                        POP EBP
00526393  C3                        RET
switchD_00526198::caseD_50:
00526394  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
00526398  75 08                     JNZ 0x005263a2
0052639A  B8 EC 46 7C 00            MOV EAX,0x7c46ec
0052639F  5E                        POP ESI
005263A0  5D                        POP EBP
005263A1  C3                        RET
LAB_005263a2:
005263A2  B8 DC 46 7C 00            MOV EAX,0x7c46dc
005263A7  5E                        POP ESI
005263A8  5D                        POP EBP
005263A9  C3                        RET
switchD_00526198::caseD_3b:
005263AA  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
005263AE  75 08                     JNZ 0x005263b8
005263B0  B8 CC 46 7C 00            MOV EAX,0x7c46cc
005263B5  5E                        POP ESI
005263B6  5D                        POP EBP
005263B7  C3                        RET
LAB_005263b8:
005263B8  B8 BC 46 7C 00            MOV EAX,0x7c46bc
005263BD  5E                        POP ESI
005263BE  5D                        POP EBP
005263BF  C3                        RET
switchD_00526198::caseD_3c:
005263C0  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
005263C4  75 08                     JNZ 0x005263ce
005263C6  B8 A8 46 7C 00            MOV EAX,0x7c46a8
005263CB  5E                        POP ESI
005263CC  5D                        POP EBP
005263CD  C3                        RET
LAB_005263ce:
005263CE  B8 94 46 7C 00            MOV EAX,0x7c4694
005263D3  5E                        POP ESI
005263D4  5D                        POP EBP
005263D5  C3                        RET
switchD_00526198::caseD_3d:
005263D6  8A 51 02                  MOV DL,byte ptr [ECX + 0x2]
005263D9  B0 01                     MOV AL,0x1
005263DB  3A D0                     CMP DL,AL
005263DD  75 08                     JNZ 0x005263e7
005263DF  B8 A4 47 7C 00            MOV EAX,0x7c47a4
005263E4  5E                        POP ESI
005263E5  5D                        POP EBP
005263E6  C3                        RET
LAB_005263e7:
005263E7  38 41 07                  CMP byte ptr [ECX + 0x7],AL
005263EA  75 08                     JNZ 0x005263f4
005263EC  B8 80 46 7C 00            MOV EAX,0x7c4680
005263F1  5E                        POP ESI
005263F2  5D                        POP EBP
005263F3  C3                        RET
LAB_005263f4:
005263F4  B8 6C 46 7C 00            MOV EAX,0x7c466c
005263F9  5E                        POP ESI
005263FA  5D                        POP EBP
005263FB  C3                        RET
switchD_00526198::caseD_3e:
005263FC  80 79 02 01               CMP byte ptr [ECX + 0x2],0x1
00526400  75 08                     JNZ 0x0052640a
00526402  B8 A4 47 7C 00            MOV EAX,0x7c47a4
00526407  5E                        POP ESI
00526408  5D                        POP EBP
00526409  C3                        RET
LAB_0052640a:
0052640A  B8 5C 46 7C 00            MOV EAX,0x7c465c
0052640F  5E                        POP ESI
00526410  5D                        POP EBP
00526411  C3                        RET
switchD_00526198::caseD_3f:
00526412  80 79 02 01               CMP byte ptr [ECX + 0x2],0x1
00526416  75 08                     JNZ 0x00526420
00526418  B8 A4 47 7C 00            MOV EAX,0x7c47a4
0052641D  5E                        POP ESI
0052641E  5D                        POP EBP
0052641F  C3                        RET
LAB_00526420:
00526420  B8 50 46 7C 00            MOV EAX,0x7c4650
00526425  5E                        POP ESI
00526426  5D                        POP EBP
00526427  C3                        RET
switchD_00526198::caseD_40:
00526428  B8 40 46 7C 00            MOV EAX,0x7c4640
0052642D  5E                        POP ESI
0052642E  5D                        POP EBP
0052642F  C3                        RET
switchD_00526198::caseD_41:
00526430  B8 30 46 7C 00            MOV EAX,0x7c4630
00526435  5E                        POP ESI
00526436  5D                        POP EBP
00526437  C3                        RET
switchD_00526198::caseD_42:
00526438  B8 1C 46 7C 00            MOV EAX,0x7c461c
0052643D  5E                        POP ESI
0052643E  5D                        POP EBP
0052643F  C3                        RET
switchD_00526198::caseD_43:
00526440  B8 0C 46 7C 00            MOV EAX,0x7c460c
00526445  5E                        POP ESI
00526446  5D                        POP EBP
00526447  C3                        RET
switchD_00526198::caseD_44:
00526448  B8 FC 45 7C 00            MOV EAX,0x7c45fc
0052644D  5E                        POP ESI
0052644E  5D                        POP EBP
0052644F  C3                        RET
switchD_00526198::caseD_45:
00526450  B8 F4 45 7C 00            MOV EAX,0x7c45f4
00526455  5E                        POP ESI
00526456  5D                        POP EBP
00526457  C3                        RET
switchD_00526198::caseD_6f:
00526458  B8 E4 45 7C 00            MOV EAX,0x7c45e4
0052645D  5E                        POP ESI
0052645E  5D                        POP EBP
0052645F  C3                        RET
switchD_00526198::caseD_46:
00526460  80 79 02 01               CMP byte ptr [ECX + 0x2],0x1
00526464  75 08                     JNZ 0x0052646e
00526466  B8 D8 45 7C 00            MOV EAX,0x7c45d8
0052646B  5E                        POP ESI
0052646C  5D                        POP EBP
0052646D  C3                        RET
LAB_0052646e:
0052646E  B8 CC 45 7C 00            MOV EAX,0x7c45cc
00526473  5E                        POP ESI
00526474  5D                        POP EBP
00526475  C3                        RET
switchD_00526198::caseD_47:
00526476  80 79 02 01               CMP byte ptr [ECX + 0x2],0x1
0052647A  75 08                     JNZ 0x00526484
0052647C  B8 A4 47 7C 00            MOV EAX,0x7c47a4
00526481  5E                        POP ESI
00526482  5D                        POP EBP
00526483  C3                        RET
LAB_00526484:
00526484  B8 BC 45 7C 00            MOV EAX,0x7c45bc
00526489  5E                        POP ESI
0052648A  5D                        POP EBP
0052648B  C3                        RET
switchD_00526198::caseD_48:
0052648C  B8 AC 45 7C 00            MOV EAX,0x7c45ac
00526491  5E                        POP ESI
00526492  5D                        POP EBP
00526493  C3                        RET
switchD_00526198::caseD_49:
00526494  B8 9C 45 7C 00            MOV EAX,0x7c459c
00526499  5E                        POP ESI
0052649A  5D                        POP EBP
0052649B  C3                        RET
switchD_00526198::caseD_4a:
0052649C  80 79 02 01               CMP byte ptr [ECX + 0x2],0x1
005264A0  75 08                     JNZ 0x005264aa
005264A2  B8 A4 47 7C 00            MOV EAX,0x7c47a4
005264A7  5E                        POP ESI
005264A8  5D                        POP EBP
005264A9  C3                        RET
LAB_005264aa:
005264AA  B8 90 45 7C 00            MOV EAX,0x7c4590
005264AF  5E                        POP ESI
005264B0  5D                        POP EBP
005264B1  C3                        RET
switchD_00526198::caseD_4b:
005264B2  80 79 02 01               CMP byte ptr [ECX + 0x2],0x1
005264B6  75 08                     JNZ 0x005264c0
005264B8  B8 A4 47 7C 00            MOV EAX,0x7c47a4
005264BD  5E                        POP ESI
005264BE  5D                        POP EBP
005264BF  C3                        RET
LAB_005264c0:
005264C0  B8 88 45 7C 00            MOV EAX,0x7c4588
005264C5  5E                        POP ESI
005264C6  5D                        POP EBP
005264C7  C3                        RET
switchD_00526198::caseD_4c:
005264C8  B8 80 45 7C 00            MOV EAX,0x7c4580
005264CD  5E                        POP ESI
005264CE  5D                        POP EBP
005264CF  C3                        RET
switchD_00526198::caseD_4d:
005264D0  B8 70 45 7C 00            MOV EAX,0x7c4570
005264D5  5E                        POP ESI
005264D6  5D                        POP EBP
005264D7  C3                        RET
switchD_00526198::caseD_4e:
005264D8  B8 68 45 7C 00            MOV EAX,0x7c4568
005264DD  5E                        POP ESI
005264DE  5D                        POP EBP
005264DF  C3                        RET
switchD_00526198::caseD_51:
005264E0  80 79 02 01               CMP byte ptr [ECX + 0x2],0x1
005264E4  75 08                     JNZ 0x005264ee
005264E6  B8 A4 47 7C 00            MOV EAX,0x7c47a4
005264EB  5E                        POP ESI
005264EC  5D                        POP EBP
005264ED  C3                        RET
LAB_005264ee:
005264EE  B8 58 45 7C 00            MOV EAX,0x7c4558
005264F3  5E                        POP ESI
005264F4  5D                        POP EBP
005264F5  C3                        RET
switchD_00526198::caseD_52:
005264F6  80 79 07 01               CMP byte ptr [ECX + 0x7],0x1
005264FA  75 08                     JNZ 0x00526504
005264FC  B8 44 45 7C 00            MOV EAX,0x7c4544
00526501  5E                        POP ESI
00526502  5D                        POP EBP
00526503  C3                        RET
LAB_00526504:
00526504  B8 30 45 7C 00            MOV EAX,0x7c4530
00526509  5E                        POP ESI
0052650A  5D                        POP EBP
0052650B  C3                        RET
switchD_00526198::caseD_19:
0052650C  B8 20 45 7C 00            MOV EAX,0x7c4520
00526511  5E                        POP ESI
00526512  5D                        POP EBP
00526513  C3                        RET
switchD_00526198::caseD_1a:
00526514  B8 10 45 7C 00            MOV EAX,0x7c4510
00526519  5E                        POP ESI
0052651A  5D                        POP EBP
0052651B  C3                        RET
switchD_00526198::caseD_1e:
0052651C  B8 04 45 7C 00            MOV EAX,0x7c4504
00526521  5E                        POP ESI
00526522  5D                        POP EBP
00526523  C3                        RET
switchD_00526198::caseD_1f:
00526524  B8 F4 44 7C 00            MOV EAX,0x7c44f4
00526529  5E                        POP ESI
0052652A  5D                        POP EBP
0052652B  C3                        RET
switchD_00526198::caseD_20:
0052652C  B8 E8 44 7C 00            MOV EAX,0x7c44e8
00526531  5E                        POP ESI
00526532  5D                        POP EBP
00526533  C3                        RET
switchD_00526198::caseD_21:
00526534  B8 D8 44 7C 00            MOV EAX,0x7c44d8
00526539  5E                        POP ESI
0052653A  5D                        POP EBP
0052653B  C3                        RET
switchD_00526198::caseD_22:
0052653C  B8 C8 44 7C 00            MOV EAX,0x7c44c8
00526541  5E                        POP ESI
00526542  5D                        POP EBP
00526543  C3                        RET
switchD_00526198::caseD_1b:
00526544  B8 B8 44 7C 00            MOV EAX,0x7c44b8
00526549  5E                        POP ESI
0052654A  5D                        POP EBP
0052654B  C3                        RET
switchD_00526198::caseD_1c:
0052654C  B8 AC 44 7C 00            MOV EAX,0x7c44ac
00526551  5E                        POP ESI
00526552  5D                        POP EBP
00526553  C3                        RET
switchD_00526198::caseD_1d:
00526554  B8 98 44 7C 00            MOV EAX,0x7c4498
00526559  5E                        POP ESI
0052655A  5D                        POP EBP
0052655B  C3                        RET
switchD_00526198::caseD_24:
0052655C  B8 88 44 7C 00            MOV EAX,0x7c4488
00526561  5E                        POP ESI
00526562  5D                        POP EBP
00526563  C3                        RET
switchD_00526198::caseD_23:
00526564  B8 78 44 7C 00            MOV EAX,0x7c4478
00526569  5E                        POP ESI
0052656A  5D                        POP EBP
0052656B  C3                        RET
switchD_00526198::caseD_53:
0052656C  B8 68 44 7C 00            MOV EAX,0x7c4468
00526571  5E                        POP ESI
00526572  5D                        POP EBP
00526573  C3                        RET
switchD_00526198::caseD_54:
00526574  B8 58 44 7C 00            MOV EAX,0x7c4458
00526579  5E                        POP ESI
0052657A  5D                        POP EBP
0052657B  C3                        RET
switchD_00526198::caseD_55:
0052657C  B8 48 44 7C 00            MOV EAX,0x7c4448
00526581  5E                        POP ESI
00526582  5D                        POP EBP
00526583  C3                        RET
switchD_00526198::caseD_56:
00526584  B8 38 44 7C 00            MOV EAX,0x7c4438
00526589  5E                        POP ESI
0052658A  5D                        POP EBP
0052658B  C3                        RET
switchD_00526198::caseD_57:
0052658C  B8 24 44 7C 00            MOV EAX,0x7c4424
00526591  5E                        POP ESI
00526592  5D                        POP EBP
00526593  C3                        RET
switchD_00526198::caseD_58:
00526594  B8 14 44 7C 00            MOV EAX,0x7c4414
00526599  5E                        POP ESI
0052659A  5D                        POP EBP
0052659B  C3                        RET
switchD_00526198::caseD_59:
0052659C  B8 00 44 7C 00            MOV EAX,0x7c4400
005265A1  5E                        POP ESI
005265A2  5D                        POP EBP
005265A3  C3                        RET
switchD_00526198::caseD_5a:
005265A4  B8 EC 43 7C 00            MOV EAX,0x7c43ec
005265A9  5E                        POP ESI
005265AA  5D                        POP EBP
005265AB  C3                        RET
switchD_00526198::caseD_5b:
005265AC  B8 DC 43 7C 00            MOV EAX,0x7c43dc
005265B1  5E                        POP ESI
005265B2  5D                        POP EBP
005265B3  C3                        RET
switchD_00526198::caseD_5c:
005265B4  B8 C4 43 7C 00            MOV EAX,0x7c43c4
005265B9  5E                        POP ESI
005265BA  5D                        POP EBP
005265BB  C3                        RET
switchD_00526198::caseD_5d:
005265BC  B8 B4 43 7C 00            MOV EAX,0x7c43b4
005265C1  5E                        POP ESI
005265C2  5D                        POP EBP
005265C3  C3                        RET
switchD_00526198::caseD_5e:
005265C4  B8 A0 43 7C 00            MOV EAX,0x7c43a0
005265C9  5E                        POP ESI
005265CA  5D                        POP EBP
005265CB  C3                        RET
switchD_00526198::caseD_5f:
005265CC  B8 88 43 7C 00            MOV EAX,0x7c4388
005265D1  5E                        POP ESI
005265D2  5D                        POP EBP
005265D3  C3                        RET
switchD_00526198::caseD_60:
005265D4  B8 78 43 7C 00            MOV EAX,0x7c4378
005265D9  5E                        POP ESI
005265DA  5D                        POP EBP
005265DB  C3                        RET
switchD_00526198::caseD_61:
005265DC  B8 5C 43 7C 00            MOV EAX,0x7c435c
005265E1  5E                        POP ESI
005265E2  5D                        POP EBP
005265E3  C3                        RET
switchD_00526198::caseD_62:
005265E4  B8 48 43 7C 00            MOV EAX,0x7c4348
005265E9  5E                        POP ESI
005265EA  5D                        POP EBP
005265EB  C3                        RET
switchD_00526198::caseD_63:
005265EC  B8 34 43 7C 00            MOV EAX,0x7c4334
005265F1  5E                        POP ESI
005265F2  5D                        POP EBP
005265F3  C3                        RET
switchD_00526198::caseD_64:
005265F4  B8 1C 43 7C 00            MOV EAX,0x7c431c
005265F9  5E                        POP ESI
005265FA  5D                        POP EBP
005265FB  C3                        RET
switchD_00526198::caseD_65:
005265FC  B8 04 43 7C 00            MOV EAX,0x7c4304
00526601  5E                        POP ESI
00526602  5D                        POP EBP
00526603  C3                        RET
switchD_00526198::caseD_66:
00526604  B8 F4 42 7C 00            MOV EAX,0x7c42f4
00526609  5E                        POP ESI
0052660A  5D                        POP EBP
0052660B  C3                        RET
switchD_00526198::caseD_67:
0052660C  B8 E4 42 7C 00            MOV EAX,0x7c42e4
00526611  5E                        POP ESI
00526612  5D                        POP EBP
00526613  C3                        RET
switchD_00526198::caseD_68:
00526614  B8 D0 42 7C 00            MOV EAX,0x7c42d0
00526619  5E                        POP ESI
0052661A  5D                        POP EBP
0052661B  C3                        RET
switchD_00526198::caseD_69:
0052661C  B8 C0 42 7C 00            MOV EAX,0x7c42c0
00526621  5E                        POP ESI
00526622  5D                        POP EBP
00526623  C3                        RET
switchD_00526198::caseD_6a:
00526624  B8 B0 42 7C 00            MOV EAX,0x7c42b0
00526629  5E                        POP ESI
0052662A  5D                        POP EBP
0052662B  C3                        RET
switchD_00526198::caseD_6b:
0052662C  B8 9C 42 7C 00            MOV EAX,0x7c429c
00526631  5E                        POP ESI
00526632  5D                        POP EBP
00526633  C3                        RET
switchD_00526198::caseD_6c:
00526634  B8 90 42 7C 00            MOV EAX,0x7c4290
00526639  5E                        POP ESI
0052663A  5D                        POP EBP
0052663B  C3                        RET
switchD_00526198::caseD_6d:
0052663C  B8 7C 42 7C 00            MOV EAX,0x7c427c
00526641  5E                        POP ESI
00526642  5D                        POP EBP
00526643  C3                        RET
switchD_00526198::caseD_6e:
00526644  B8 68 42 7C 00            MOV EAX,0x7c4268
00526649  5E                        POP ESI
0052664A  5D                        POP EBP
0052664B  C3                        RET
switchD_00526198::caseD_70:
0052664C  B8 54 42 7C 00            MOV EAX,0x7c4254
00526651  5E                        POP ESI
00526652  5D                        POP EBP
00526653  C3                        RET
switchD_00526198::caseD_72:
00526654  B8 44 42 7C 00            MOV EAX,0x7c4244
00526659  5E                        POP ESI
0052665A  5D                        POP EBP
0052665B  C3                        RET
switchD_00526198::caseD_71:
0052665C  B8 34 42 7C 00            MOV EAX,0x7c4234
00526661  5E                        POP ESI
00526662  5D                        POP EBP
00526663  C3                        RET
switchD_00526198::caseD_73:
00526664  B8 24 42 7C 00            MOV EAX,0x7c4224
00526669  5E                        POP ESI
0052666A  5D                        POP EBP
0052666B  C3                        RET
switchD_00526198::caseD_e0:
0052666C  B8 14 42 7C 00            MOV EAX,0x7c4214
00526671  5E                        POP ESI
00526672  5D                        POP EBP
00526673  C3                        RET
switchD_00526198::caseD_dd:
00526674  B8 04 42 7C 00            MOV EAX,0x7c4204
00526679  5E                        POP ESI
0052667A  5D                        POP EBP
0052667B  C3                        RET
switchD_00526198::caseD_de:
0052667C  B8 F4 41 7C 00            MOV EAX,0x7c41f4
00526681  5E                        POP ESI
00526682  5D                        POP EBP
00526683  C3                        RET
switchD_00526198::caseD_a6:
00526684  B8 E8 41 7C 00            MOV EAX,0x7c41e8
00526689  5E                        POP ESI
0052668A  5D                        POP EBP
0052668B  C3                        RET
switchD_00526198::caseD_a7:
0052668C  B8 DC 41 7C 00            MOV EAX,0x7c41dc
00526691  5E                        POP ESI
00526692  5D                        POP EBP
00526693  C3                        RET
switchD_00526198::caseD_bd:
00526694  B8 D0 41 7C 00            MOV EAX,0x7c41d0
00526699  5E                        POP ESI
0052669A  5D                        POP EBP
0052669B  C3                        RET
switchD_00526198::caseD_af:
0052669C  B8 C4 41 7C 00            MOV EAX,0x7c41c4
switchD_00526135::default:
005266A1  5E                        POP ESI
005266A2  5D                        POP EBP
005266A3  C3                        RET
