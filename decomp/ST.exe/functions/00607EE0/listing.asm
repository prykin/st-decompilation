FUN_00607ee0:
00607EE0  55                        PUSH EBP
00607EE1  8B EC                     MOV EBP,ESP
00607EE3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00607EE6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00607EE9  56                        PUSH ESI
00607EEA  33 C0                     XOR EAX,EAX
00607EEC  8D 72 FF                  LEA ESI,[EDX + -0x1]
00607EEF  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
00607EF5  81 FE FD 00 00 00         CMP ESI,0xfd
00607EFB  0F 87 EA 07 00 00         JA 0x006086eb
00607F01  33 D2                     XOR EDX,EDX
00607F03  8A 96 C4 87 60 00         MOV DL,byte ptr [ESI + 0x6087c4]
switchD_00607f09::switchD:
00607F09  FF 24 95 20 87 60 00      JMP dword ptr [EDX*0x4 + 0x608720]
switchD_00607f09::caseD_1:
00607F10  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00607F13  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00607F16  5E                        POP ESI
00607F17  C7 00 70 EE 7C 00         MOV dword ptr [EAX],0x7cee70
00607F1D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00607F20  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00607F26  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00607F29  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00607F2F  B8 50 00 00 00            MOV EAX,0x50
00607F34  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00607F3A  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00607F40  5D                        POP EBP
00607F41  C2 18 00                  RET 0x18
switchD_00607f09::caseD_2:
00607F44  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00607F47  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00607F4A  5E                        POP ESI
00607F4B  C7 00 06 00 00 00         MOV dword ptr [EAX],0x6
00607F51  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00607F54  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00607F5A  C7 00 04 00 00 00         MOV dword ptr [EAX],0x4
00607F60  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00607F66  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00607F69  B8 78 00 00 00            MOV EAX,0x78
00607F6E  C7 01 98 EE 7C 00         MOV dword ptr [ECX],0x7cee98
00607F74  5D                        POP EBP
00607F75  C2 18 00                  RET 0x18
switchD_00607f09::caseD_3:
00607F78  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00607F7B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00607F7E  5E                        POP ESI
00607F7F  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00607F85  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00607F88  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00607F8E  B8 D2 00 00 00            MOV EAX,0xd2
00607F93  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00607F99  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00607F9F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00607FA2  C7 01 C0 EE 7C 00         MOV dword ptr [ECX],0x7ceec0
00607FA8  5D                        POP EBP
00607FA9  C2 18 00                  RET 0x18
switchD_00607f09::caseD_4:
00607FAC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00607FAF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00607FB2  5E                        POP ESI
00607FB3  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00607FB9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00607FBC  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00607FC2  B8 D2 00 00 00            MOV EAX,0xd2
00607FC7  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00607FCD  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00607FD3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00607FD6  C7 01 E8 EE 7C 00         MOV dword ptr [ECX],0x7ceee8
00607FDC  5D                        POP EBP
00607FDD  C2 18 00                  RET 0x18
switchD_00607f09::caseD_5:
00607FE0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00607FE3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00607FE6  5E                        POP ESI
00607FE7  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00607FED  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00607FF0  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00607FF6  B8 B4 00 00 00            MOV EAX,0xb4
00607FFB  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00608001  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00608007  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060800A  C7 01 10 EF 7C 00         MOV dword ptr [ECX],0x7cef10
00608010  5D                        POP EBP
00608011  C2 18 00                  RET 0x18
switchD_00607f09::caseD_6:
00608014  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608017  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060801A  5E                        POP ESI
0060801B  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00608021  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608024  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0060802A  B8 D2 00 00 00            MOV EAX,0xd2
0060802F  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00608035  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
0060803B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060803E  C7 01 38 EF 7C 00         MOV dword ptr [ECX],0x7cef38
00608044  5D                        POP EBP
00608045  C2 18 00                  RET 0x18
switchD_00607f09::caseD_7:
00608048  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060804B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060804E  5E                        POP ESI
0060804F  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00608055  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608058  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0060805E  B8 D2 00 00 00            MOV EAX,0xd2
00608063  C7 02 06 00 00 00         MOV dword ptr [EDX],0x6
00608069  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
0060806F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608072  C7 01 60 EF 7C 00         MOV dword ptr [ECX],0x7cef60
00608078  5D                        POP EBP
00608079  C2 18 00                  RET 0x18
switchD_00607f09::caseD_8:
0060807C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060807F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608082  5E                        POP ESI
00608083  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00608089  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0060808C  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00608092  B8 D2 00 00 00            MOV EAX,0xd2
00608097  C7 02 06 00 00 00         MOV dword ptr [EDX],0x6
0060809D  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
006080A3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006080A6  C7 01 88 EF 7C 00         MOV dword ptr [ECX],0x7cef88
006080AC  5D                        POP EBP
006080AD  C2 18 00                  RET 0x18
switchD_00607f09::caseD_9:
006080B0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006080B3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006080B6  5E                        POP ESI
006080B7  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
006080BD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006080C0  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
006080C6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006080C9  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
006080CF  C7 01 B0 EF 7C 00         MOV dword ptr [ECX],0x7cefb0
006080D5  5D                        POP EBP
006080D6  C2 18 00                  RET 0x18
switchD_00607f09::caseD_a:
006080D9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006080DC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006080DF  5E                        POP ESI
006080E0  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
006080E6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006080E9  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
006080EF  B8 B4 00 00 00            MOV EAX,0xb4
006080F4  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006080FA  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00608100  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608103  C7 01 D8 EF 7C 00         MOV dword ptr [ECX],0x7cefd8
00608109  5D                        POP EBP
0060810A  C2 18 00                  RET 0x18
switchD_00607f09::caseD_b:
0060810D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608110  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608113  5E                        POP ESI
00608114  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
0060811A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0060811D  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00608123  B8 B4 00 00 00            MOV EAX,0xb4
00608128  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
0060812E  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00608134  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608137  C7 01 00 F0 7C 00         MOV dword ptr [ECX],0x7cf000
0060813D  5D                        POP EBP
0060813E  C2 18 00                  RET 0x18
switchD_00607f09::caseD_c:
00608141  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608144  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608147  5E                        POP ESI
00608148  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
0060814E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608151  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00608157  B8 D2 00 00 00            MOV EAX,0xd2
0060815C  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00608162  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00608168  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060816B  C7 01 28 F0 7C 00         MOV dword ptr [ECX],0x7cf028
00608171  5D                        POP EBP
00608172  C2 18 00                  RET 0x18
switchD_00607f09::caseD_d:
00608175  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608178  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060817B  5E                        POP ESI
0060817C  C7 02 06 00 00 00         MOV dword ptr [EDX],0x6
00608182  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608185  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
0060818B  B8 78 00 00 00            MOV EAX,0x78
00608190  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00608196  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
0060819C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060819F  C7 01 50 F0 7C 00         MOV dword ptr [ECX],0x7cf050
006081A5  5D                        POP EBP
006081A6  C2 18 00                  RET 0x18
switchD_00607f09::caseD_e:
006081A9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006081AC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006081AF  5E                        POP ESI
006081B0  C7 02 06 00 00 00         MOV dword ptr [EDX],0x6
006081B6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006081B9  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006081BF  B8 78 00 00 00            MOV EAX,0x78
006081C4  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
006081CA  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
006081D0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006081D3  C7 01 78 F0 7C 00         MOV dword ptr [ECX],0x7cf078
006081D9  5D                        POP EBP
006081DA  C2 18 00                  RET 0x18
switchD_00607f09::caseD_f:
006081DD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006081E0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006081E3  5E                        POP ESI
006081E4  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
006081EA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006081ED  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
006081F3  B8 D2 00 00 00            MOV EAX,0xd2
006081F8  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
006081FE  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00608204  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608207  C7 01 A0 F0 7C 00         MOV dword ptr [ECX],0x7cf0a0
0060820D  5D                        POP EBP
0060820E  C2 18 00                  RET 0x18
switchD_00607f09::caseD_10:
00608211  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608214  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608217  5E                        POP ESI
00608218  C7 02 06 00 00 00         MOV dword ptr [EDX],0x6
0060821E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608221  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00608227  B8 B4 00 00 00            MOV EAX,0xb4
0060822C  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00608232  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00608238  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060823B  C7 01 C8 F0 7C 00         MOV dword ptr [ECX],0x7cf0c8
00608241  5D                        POP EBP
00608242  C2 18 00                  RET 0x18
switchD_00607f09::caseD_11:
00608245  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608248  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060824B  5E                        POP ESI
0060824C  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00608252  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608255  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0060825B  B8 D2 00 00 00            MOV EAX,0xd2
00608260  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00608266  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
0060826C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060826F  C7 01 F0 F0 7C 00         MOV dword ptr [ECX],0x7cf0f0
00608275  5D                        POP EBP
00608276  C2 18 00                  RET 0x18
switchD_00607f09::caseD_12:
00608279  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060827C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060827F  5E                        POP ESI
00608280  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00608286  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608289  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0060828F  B8 D2 00 00 00            MOV EAX,0xd2
00608294  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
0060829A  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
006082A0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006082A3  C7 01 18 F1 7C 00         MOV dword ptr [ECX],0x7cf118
006082A9  5D                        POP EBP
006082AA  C2 18 00                  RET 0x18
switchD_00607f09::caseD_13:
006082AD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006082B0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006082B3  5E                        POP ESI
006082B4  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
006082BA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006082BD  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
006082C3  B8 D2 00 00 00            MOV EAX,0xd2
006082C8  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
006082CE  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
006082D4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006082D7  C7 01 40 F1 7C 00         MOV dword ptr [ECX],0x7cf140
006082DD  5D                        POP EBP
006082DE  C2 18 00                  RET 0x18
switchD_00607f09::caseD_14:
006082E1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006082E4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006082E7  5E                        POP ESI
006082E8  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
006082EE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006082F1  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
006082F7  B8 D2 00 00 00            MOV EAX,0xd2
006082FC  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00608302  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00608308  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060830B  C7 01 68 F1 7C 00         MOV dword ptr [ECX],0x7cf168
00608311  5D                        POP EBP
00608312  C2 18 00                  RET 0x18
switchD_00607f09::caseD_15:
00608315  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608318  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060831B  5E                        POP ESI
0060831C  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00608322  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608325  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0060832B  B8 D2 00 00 00            MOV EAX,0xd2
00608330  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00608336  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
0060833C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060833F  C7 01 90 F1 7C 00         MOV dword ptr [ECX],0x7cf190
00608345  5D                        POP EBP
00608346  C2 18 00                  RET 0x18
switchD_00607f09::caseD_16:
00608349  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060834C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060834F  5E                        POP ESI
00608350  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00608356  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608359  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0060835F  B8 D2 00 00 00            MOV EAX,0xd2
00608364  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
0060836A  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00608370  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608373  C7 01 B8 F1 7C 00         MOV dword ptr [ECX],0x7cf1b8
00608379  5D                        POP EBP
0060837A  C2 18 00                  RET 0x18
switchD_00607f09::caseD_17:
0060837D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608380  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608383  5E                        POP ESI
00608384  C7 02 06 00 00 00         MOV dword ptr [EDX],0x6
0060838A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0060838D  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00608393  B8 B4 00 00 00            MOV EAX,0xb4
00608398  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
0060839E  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
006083A4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006083A7  C7 01 E0 F1 7C 00         MOV dword ptr [ECX],0x7cf1e0
006083AD  5D                        POP EBP
006083AE  C2 18 00                  RET 0x18
switchD_00607f09::caseD_18:
006083B1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006083B4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006083B7  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
006083BD  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
006083C3  E9 35 03 00 00            JMP 0x006086fd
switchD_00607f09::caseD_19:
006083C8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006083CB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006083CE  5E                        POP ESI
006083CF  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006083D5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006083D8  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
006083DE  B8 B4 00 00 00            MOV EAX,0xb4
006083E3  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
006083E9  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
006083EF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006083F2  C7 01 30 F2 7C 00         MOV dword ptr [ECX],0x7cf230
006083F8  5D                        POP EBP
006083F9  C2 18 00                  RET 0x18
switchD_00607f09::caseD_1a:
006083FC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006083FF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608402  5E                        POP ESI
00608403  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00608409  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0060840C  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
00608412  B8 AA 00 00 00            MOV EAX,0xaa
00608417  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
0060841D  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00608423  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608426  C7 01 58 F2 7C 00         MOV dword ptr [ECX],0x7cf258
0060842C  5D                        POP EBP
0060842D  C2 18 00                  RET 0x18
switchD_00607f09::caseD_1b:
00608430  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608433  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608436  5E                        POP ESI
00608437  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
0060843D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608440  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
00608446  B8 D2 00 00 00            MOV EAX,0xd2
0060844B  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00608451  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00608457  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060845A  C7 01 80 F2 7C 00         MOV dword ptr [ECX],0x7cf280
00608460  5D                        POP EBP
00608461  C2 18 00                  RET 0x18
switchD_00607f09::caseD_1c:
00608464  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608467  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060846A  5E                        POP ESI
0060846B  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00608471  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608474  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0060847A  B8 96 00 00 00            MOV EAX,0x96
0060847F  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00608485  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
0060848B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060848E  C7 01 A8 F2 7C 00         MOV dword ptr [ECX],0x7cf2a8
00608494  5D                        POP EBP
00608495  C2 18 00                  RET 0x18
switchD_00607f09::caseD_1d:
00608498  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060849B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060849E  5E                        POP ESI
0060849F  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
006084A5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006084A8  C7 00 04 00 00 00         MOV dword ptr [EAX],0x4
006084AE  B8 C8 00 00 00            MOV EAX,0xc8
006084B3  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006084B9  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
006084BF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006084C2  C7 01 D0 F2 7C 00         MOV dword ptr [ECX],0x7cf2d0
006084C8  5D                        POP EBP
006084C9  C2 18 00                  RET 0x18
switchD_00607f09::caseD_1e:
006084CC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006084CF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006084D2  5E                        POP ESI
006084D3  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006084D9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006084DC  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006084E2  B8 8C 00 00 00            MOV EAX,0x8c
006084E7  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
006084ED  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
006084F3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006084F6  C7 01 F8 F2 7C 00         MOV dword ptr [ECX],0x7cf2f8
006084FC  5D                        POP EBP
006084FD  C2 18 00                  RET 0x18
switchD_00607f09::caseD_1f:
00608500  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608503  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608506  5E                        POP ESI
00608507  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
0060850D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608510  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
00608516  B8 D2 00 00 00            MOV EAX,0xd2
0060851B  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00608521  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00608527  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060852A  C7 01 20 F3 7C 00         MOV dword ptr [ECX],0x7cf320
00608530  5D                        POP EBP
00608531  C2 18 00                  RET 0x18
switchD_00607f09::caseD_20:
00608534  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608537  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060853A  5E                        POP ESI
0060853B  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00608541  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608544  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
0060854A  B8 AF 00 00 00            MOV EAX,0xaf
0060854F  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00608555  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
0060855B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060855E  C7 01 48 F3 7C 00         MOV dword ptr [ECX],0x7cf348
00608564  5D                        POP EBP
00608565  C2 18 00                  RET 0x18
switchD_00607f09::caseD_21:
00608568  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060856B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060856E  5E                        POP ESI
0060856F  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00608575  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608578  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0060857E  B8 C8 00 00 00            MOV EAX,0xc8
00608583  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
00608589  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
0060858F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608592  C7 01 70 F3 7C 00         MOV dword ptr [ECX],0x7cf370
00608598  5D                        POP EBP
00608599  C2 18 00                  RET 0x18
switchD_00607f09::caseD_22:
0060859C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060859F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006085A2  5E                        POP ESI
006085A3  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006085A9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006085AC  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
006085B2  B8 AA 00 00 00            MOV EAX,0xaa
006085B7  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006085BD  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
006085C3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006085C6  C7 01 98 F3 7C 00         MOV dword ptr [ECX],0x7cf398
006085CC  5D                        POP EBP
006085CD  C2 18 00                  RET 0x18
switchD_00607f09::caseD_23:
006085D0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006085D3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006085D6  5E                        POP ESI
006085D7  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006085DD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006085E0  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
006085E6  B8 AF 00 00 00            MOV EAX,0xaf
006085EB  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
006085F1  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
006085F7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006085FA  C7 01 C0 F3 7C 00         MOV dword ptr [ECX],0x7cf3c0
00608600  5D                        POP EBP
00608601  C2 18 00                  RET 0x18
switchD_00607f09::caseD_24:
00608604  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608607  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060860A  5E                        POP ESI
0060860B  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00608611  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608614  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0060861A  B8 8C 00 00 00            MOV EAX,0x8c
0060861F  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00608625  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
0060862B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060862E  C7 01 E8 F3 7C 00         MOV dword ptr [ECX],0x7cf3e8
00608634  5D                        POP EBP
00608635  C2 18 00                  RET 0x18
switchD_00607f09::caseD_fd:
00608638  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060863B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060863E  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00608644  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0060864A  E9 AE 00 00 00            JMP 0x006086fd
switchD_00607f09::caseD_26:
0060864F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608652  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608655  5E                        POP ESI
00608656  C7 02 09 00 00 00         MOV dword ptr [EDX],0x9
0060865C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0060865F  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00608665  B8 D2 00 00 00            MOV EAX,0xd2
0060866A  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
00608670  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00608676  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608679  C7 01 70 EE 7C 00         MOV dword ptr [ECX],0x7cee70
0060867F  5D                        POP EBP
00608680  C2 18 00                  RET 0x18
switchD_00607f09::caseD_27:
00608683  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00608686  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00608689  5E                        POP ESI
0060868A  C7 02 09 00 00 00         MOV dword ptr [EDX],0x9
00608690  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608693  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00608699  B8 D2 00 00 00            MOV EAX,0xd2
0060869E  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
006086A4  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
006086AA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006086AD  C7 01 50 F0 7C 00         MOV dword ptr [ECX],0x7cf050
006086B3  5D                        POP EBP
006086B4  C2 18 00                  RET 0x18
switchD_00607f09::caseD_28:
006086B7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006086BA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006086BD  5E                        POP ESI
006086BE  C7 02 09 00 00 00         MOV dword ptr [EDX],0x9
006086C4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006086C7  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006086CD  B8 D2 00 00 00            MOV EAX,0xd2
006086D2  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
006086D8  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
006086DE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006086E1  C7 01 C0 F3 7C 00         MOV dword ptr [ECX],0x7cf3c0
006086E7  5D                        POP EBP
006086E8  C2 18 00                  RET 0x18
switchD_00607f09::caseD_25:
006086EB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006086EE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006086F1  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
006086F7  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
LAB_006086fd:
006086FD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00608700  B8 D2 00 00 00            MOV EAX,0xd2
00608705  5E                        POP ESI
00608706  C7 02 05 00 00 00         MOV dword ptr [EDX],0x5
0060870C  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00608712  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00608715  C7 01 08 F2 7C 00         MOV dword ptr [ECX],0x7cf208
0060871B  5D                        POP EBP
0060871C  C2 18 00                  RET 0x18
