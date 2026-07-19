CPanelTy::Update4PanelWB:
00507F60  55                        PUSH EBP
00507F61  8B EC                     MOV EBP,ESP
00507F63  81 EC 00 01 00 00         SUB ESP,0x100
00507F69  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00507F6E  53                        PUSH EBX
00507F6F  56                        PUSH ESI
00507F70  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
00507F73  57                        PUSH EDI
00507F74  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
00507F7A  8D 8D 40 FF FF FF         LEA ECX,[EBP + 0xffffff40]
00507F80  6A 00                     PUSH 0x0
00507F82  52                        PUSH EDX
00507F83  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
00507F89  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00507F8F  E8 5C 58 22 00            CALL 0x0072d7f0
00507F94  8B F0                     MOV ESI,EAX
00507F96  83 C4 08                  ADD ESP,0x8
00507F99  85 F6                     TEST ESI,ESI
00507F9B  0F 85 44 12 00 00         JNZ 0x005091e5
00507FA1  8B 5D 84                  MOV EBX,dword ptr [EBP + -0x7c]
00507FA4  B9 17 00 00 00            MOV ECX,0x17
00507FA9  8D 7D 88                  LEA EDI,[EBP + -0x78]
00507FAC  8D 93 F5 0B 00 00         LEA EDX,[EBX + 0xbf5]
00507FB2  8B F2                     MOV ESI,EDX
00507FB4  52                        PUSH EDX
00507FB5  F3 A5                     MOVSD.REP ES:EDI,ESI
00507FB7  B9 17 00 00 00            MOV ECX,0x17
00507FBC  8B FA                     MOV EDI,EDX
00507FBE  F3 AB                     STOSD.REP ES:EDI
00507FC0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00507FC6  6A 04                     PUSH 0x4
00507FC8  E8 EF B5 EF FF            CALL 0x004035bc
00507FCD  8A 83 FA 0B 00 00         MOV AL,byte ptr [EBX + 0xbfa]
00507FD3  8A 4D 8D                  MOV CL,byte ptr [EBP + -0x73]
00507FD6  3A C8                     CMP CL,AL
00507FD8  0F 85 DB 11 00 00         JNZ 0x005091b9
00507FDE  8A 8B FB 0B 00 00         MOV CL,byte ptr [EBX + 0xbfb]
00507FE4  8A 55 8E                  MOV DL,byte ptr [EBP + -0x72]
00507FE7  3A D1                     CMP DL,CL
00507FE9  0F 85 CA 11 00 00         JNZ 0x005091b9
00507FEF  80 F9 02                  CMP CL,0x2
00507FF2  0F 85 15 03 00 00         JNZ 0x0050830d
00507FF8  3C 01                     CMP AL,0x1
00507FFA  0F 85 0D 03 00 00         JNZ 0x0050830d
00508000  32 C9                     XOR CL,CL
00508002  32 D2                     XOR DL,DL
00508004  33 C0                     XOR EAX,EAX
LAB_00508006:
00508006  80 BC 03 FE 0B 00 00 00   CMP byte ptr [EBX + EAX*0x1 + 0xbfe],0x0
0050800E  74 02                     JZ 0x00508012
00508010  FE C2                     INC DL
LAB_00508012:
00508012  40                        INC EAX
00508013  83 F8 06                  CMP EAX,0x6
00508016  7C EE                     JL 0x00508006
00508018  33 C0                     XOR EAX,EAX
LAB_0050801a:
0050801A  80 7C 05 91 00            CMP byte ptr [EBP + EAX*0x1 + -0x6f],0x0
0050801F  74 02                     JZ 0x00508023
00508021  FE C1                     INC CL
LAB_00508023:
00508023  40                        INC EAX
00508024  83 F8 06                  CMP EAX,0x6
00508027  7C F1                     JL 0x0050801a
00508029  3A D1                     CMP DL,CL
0050802B  74 0E                     JZ 0x0050803b
0050802D  6A 01                     PUSH 0x1
0050802F  8B CB                     MOV ECX,EBX
00508031  E8 4D AD EF FF            CALL 0x00402d83
00508036  E9 BB 00 00 00            JMP 0x005080f6
LAB_0050803b:
0050803B  B9 03 00 00 00            MOV ECX,0x3
00508040  8D 7D 91                  LEA EDI,[EBP + -0x6f]
00508043  8D B3 FE 0B 00 00         LEA ESI,[EBX + 0xbfe]
00508049  33 C0                     XOR EAX,EAX
0050804B  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
0050804E  74 5A                     JZ 0x005080aa
00508050  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
00508057  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
0050805D  8D 4B 18                  LEA ECX,[EBX + 0x18]
00508060  51                        PUSH ECX
00508061  52                        PUSH EDX
00508062  6A 02                     PUSH 0x2
00508064  8B CB                     MOV ECX,EBX
00508066  E8 15 E0 1D 00            CALL 0x006e6080
0050806B  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0050806F  8D B3 FE 0B 00 00         LEA ESI,[EBX + 0xbfe]
LAB_00508075:
00508075  80 3E 00                  CMP byte ptr [ESI],0x0
00508078  74 0D                     JZ 0x00508087
0050807A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050807D  8B CB                     MOV ECX,EBX
0050807F  50                        PUSH EAX
00508080  6A 00                     PUSH 0x0
00508082  E8 B7 B0 EF FF            CALL 0x0040313e
LAB_00508087:
00508087  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
0050808A  FE C0                     INC AL
0050808C  46                        INC ESI
0050808D  3C 06                     CMP AL,0x6
0050808F  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00508092  72 E1                     JC 0x00508075
00508094  6A 00                     PUSH 0x0
00508096  8B CB                     MOV ECX,EBX
00508098  E8 04 CB EF FF            CALL 0x00404ba1
0050809D  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005080A3  E8 54 C0 EF FF            CALL 0x004040fc
005080A8  EB 16                     JMP 0x005080c0
LAB_005080aa:
005080AA  8A 8B FD 0B 00 00         MOV CL,byte ptr [EBX + 0xbfd]
005080B0  8A 45 90                  MOV AL,byte ptr [EBP + -0x70]
005080B3  3A C8                     CMP CL,AL
005080B5  74 09                     JZ 0x005080c0
005080B7  6A 00                     PUSH 0x0
005080B9  8B CB                     MOV ECX,EBX
005080BB  E8 E1 CA EF FF            CALL 0x00404ba1
LAB_005080c0:
005080C0  B9 03 00 00 00            MOV ECX,0x3
005080C5  8D 7D 97                  LEA EDI,[EBP + -0x69]
005080C8  8D B3 04 0C 00 00         LEA ESI,[EBX + 0xc04]
005080CE  33 D2                     XOR EDX,EDX
005080D0  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
005080D3  75 0D                     JNZ 0x005080e2
005080D5  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
005080DB  8A 4D 8F                  MOV CL,byte ptr [EBP + -0x71]
005080DE  3A C1                     CMP AL,CL
005080E0  74 14                     JZ 0x005080f6
LAB_005080e2:
005080E2  8D 4D 88                  LEA ECX,[EBP + -0x78]
005080E5  8D 83 F5 0B 00 00         LEA EAX,[EBX + 0xbf5]
005080EB  51                        PUSH ECX
005080EC  50                        PUSH EAX
005080ED  6A 00                     PUSH 0x0
005080EF  8B CB                     MOV ECX,EBX
005080F1  E8 93 CE EF FF            CALL 0x00404f89
LAB_005080f6:
005080F6  8A 93 0A 0C 00 00         MOV DL,byte ptr [EBX + 0xc0a]
005080FC  8A 45 9D                  MOV AL,byte ptr [EBP + -0x63]
005080FF  3A D0                     CMP DL,AL
00508101  75 0D                     JNZ 0x00508110
00508103  8A 45 8F                  MOV AL,byte ptr [EBP + -0x71]
00508106  8A 8B FC 0B 00 00         MOV CL,byte ptr [EBX + 0xbfc]
0050810C  3A C8                     CMP CL,AL
0050810E  74 3E                     JZ 0x0050814e
LAB_00508110:
00508110  8B 83 C4 09 00 00         MOV EAX,dword ptr [EBX + 0x9c4]
00508116  85 C0                     TEST EAX,EAX
00508118  74 34                     JZ 0x0050814e
0050811A  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00508121  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
00508127  84 C0                     TEST AL,AL
00508129  74 0A                     JZ 0x00508135
0050812B  33 C0                     XOR EAX,EAX
0050812D  8A 83 0A 0C 00 00         MOV AL,byte ptr [EBX + 0xc0a]
00508133  EB 02                     JMP 0x00508137
LAB_00508135:
00508135  33 C0                     XOR EAX,EAX
LAB_00508137:
00508137  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0050813A  8B 93 C4 09 00 00         MOV EDX,dword ptr [EBX + 0x9c4]
00508140  8D 4B 18                  LEA ECX,[EBX + 0x18]
00508143  51                        PUSH ECX
00508144  52                        PUSH EDX
00508145  6A 02                     PUSH 0x2
00508147  8B CB                     MOV ECX,EBX
00508149  E8 32 DF 1D 00            CALL 0x006e6080
LAB_0050814e:
0050814E  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
00508154  8B 4D A5                  MOV ECX,dword ptr [EBP + -0x5b]
00508157  3B C1                     CMP EAX,ECX
00508159  74 1E                     JZ 0x00508179
0050815B  6A 01                     PUSH 0x1
0050815D  8B CB                     MOV ECX,EBX
0050815F  E8 5B C5 EF FF            CALL 0x004046bf
00508164  6A 00                     PUSH 0x0
00508166  8B CB                     MOV ECX,EBX
00508168  E8 16 AC EF FF            CALL 0x00402d83
0050816D  8B CB                     MOV ECX,EBX
0050816F  E8 2C DA EF FF            CALL 0x00405ba0
00508174  E9 69 01 00 00            JMP 0x005082e2
LAB_00508179:
00508179  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050817F  8B 93 ED 09 00 00         MOV EDX,dword ptr [EBX + 0x9ed]
00508185  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00508188  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
0050818B  2B C7                     SUB EAX,EDI
0050818D  99                        CDQ
0050818E  2B C2                     SUB EAX,EDX
00508190  8A 55 B7                  MOV DL,byte ptr [EBP + -0x49]
00508193  8B F0                     MOV ESI,EAX
00508195  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
0050819B  D1 FE                     SAR ESI,0x1
0050819D  3A C2                     CMP AL,DL
0050819F  0F 84 3D 01 00 00         JZ 0x005082e2
005081A5  6A 00                     PUSH 0x0
005081A7  6A 21                     PUSH 0x21
005081A9  6A 07                     PUSH 0x7
005081AB  8D 56 36                  LEA EDX,[ESI + 0x36]
005081AE  6A 5D                     PUSH 0x5d
005081B0  52                        PUSH EDX
005081B1  6A 00                     PUSH 0x0
005081B3  51                        PUSH ECX
005081B4  E8 B7 BF 1A 00            CALL 0x006b4170
005081B9  8A 8B 24 0C 00 00         MOV CL,byte ptr [EBX + 0xc24]
005081BF  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005081C2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005081C5  25 FF 00 00 00            AND EAX,0xff
005081CA  8B D0                     MOV EDX,EAX
005081CC  C1 E2 05                  SHL EDX,0x5
005081CF  03 D0                     ADD EDX,EAX
005081D1  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005081D6  F7 E2                     MUL EDX
005081D8  C1 EA 05                  SHR EDX,0x5
005081DB  84 C9                     TEST CL,CL
005081DD  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
005081E0  76 08                     JBE 0x005081ea
005081E2  84 D2                     TEST DL,DL
005081E4  75 04                     JNZ 0x005081ea
005081E6  C6 45 F4 01               MOV byte ptr [EBP + -0xc],0x1
LAB_005081ea:
005081EA  80 F9 46                  CMP CL,0x46
005081ED  72 04                     JC 0x005081f3
005081EF  33 D2                     XOR EDX,EDX
005081F1  EB 0B                     JMP 0x005081fe
LAB_005081f3:
005081F3  80 F9 14                  CMP CL,0x14
005081F6  1B D2                     SBB EDX,EDX
005081F8  83 E2 05                  AND EDX,0x5
005081FB  83 C2 05                  ADD EDX,0x5
LAB_005081fe:
005081FE  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
00508204  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00508207  25 FF 00 00 00            AND EAX,0xff
0050820C  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0050820F  50                        PUSH EAX
00508210  2B F8                     SUB EDI,EAX
00508212  6A 05                     PUSH 0x5
00508214  57                        PUSH EDI
00508215  52                        PUSH EDX
00508216  6A 00                     PUSH 0x0
00508218  51                        PUSH ECX
00508219  B9 7E 00 00 00            MOV ECX,0x7e
0050821E  8D 56 37                  LEA EDX,[ESI + 0x37]
00508221  2B C8                     SUB ECX,EAX
00508223  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00508229  51                        PUSH ECX
0050822A  52                        PUSH EDX
0050822B  6A 00                     PUSH 0x0
0050822D  50                        PUSH EAX
0050822E  E8 BD D3 1A 00            CALL 0x006b55f0
00508233  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00508239  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050823F  6A 11                     PUSH 0x11
00508241  6A 75                     PUSH 0x75
00508243  6A 0C                     PUSH 0xc
00508245  6A 3F                     PUSH 0x3f
00508247  6A 00                     PUSH 0x0
00508249  8D 7E 3F                  LEA EDI,[ESI + 0x3f]
0050824C  51                        PUSH ECX
0050824D  6A 5C                     PUSH 0x5c
0050824F  57                        PUSH EDI
00508250  6A 00                     PUSH 0x0
00508252  52                        PUSH EDX
00508253  E8 98 D3 1A 00            CALL 0x006b55f0
00508258  8B 83 ED 09 00 00         MOV EAX,dword ptr [EBX + 0x9ed]
0050825E  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00508264  6A 13                     PUSH 0x13
00508266  6A 44                     PUSH 0x44
00508268  6A 1C                     PUSH 0x1c
0050826A  6A 3F                     PUSH 0x3f
0050826C  6A 00                     PUSH 0x0
0050826E  50                        PUSH EAX
0050826F  6A 6C                     PUSH 0x6c
00508271  57                        PUSH EDI
00508272  6A 00                     PUSH 0x0
00508274  51                        PUSH ECX
00508275  E8 76 D3 1A 00            CALL 0x006b55f0
0050827A  8A 93 24 0C 00 00         MOV DL,byte ptr [EBX + 0xc24]
00508280  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00508286  68 14 27 00 00            PUSH 0x2714
0050828B  83 C6 41                  ADD ESI,0x41
0050828E  52                        PUSH EDX
0050828F  6A 5D                     PUSH 0x5d
00508291  56                        PUSH ESI
00508292  50                        PUSH EAX
00508293  8B CB                     MOV ECX,EBX
00508295  E8 E3 C9 EF FF            CALL 0x00404c7d
0050829A  66 8B 8B 20 0C 00 00      MOV CX,word ptr [EBX + 0xc20]
005082A1  66 8B 93 1C 0C 00 00      MOV DX,word ptr [EBX + 0xc1c]
005082A8  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005082AE  6A 02                     PUSH 0x2
005082B0  6A 04                     PUSH 0x4
005082B2  51                        PUSH ECX
005082B3  52                        PUSH EDX
005082B4  6A 68                     PUSH 0x68
005082B6  56                        PUSH ESI
005082B7  50                        PUSH EAX
005082B8  8B CB                     MOV ECX,EBX
005082BA  E8 CE D7 EF FF            CALL 0x00405a8d
005082BF  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
005082C5  85 C0                     TEST EAX,EAX
005082C7  7C 19                     JL 0x005082e2
005082C9  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
005082CF  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
005082D2  51                        PUSH ECX
005082D3  52                        PUSH EDX
005082D4  6A FF                     PUSH -0x1
005082D6  50                        PUSH EAX
005082D7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005082DC  50                        PUSH EAX
005082DD  E8 5E B3 1A 00            CALL 0x006b3640
LAB_005082e2:
005082E2  8B 8B 4D 0C 00 00         MOV ECX,dword ptr [EBX + 0xc4d]
005082E8  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005082EB  3B C8                     CMP ECX,EAX
005082ED  0F 84 DF 0E 00 00         JZ 0x005091d2
005082F3  8B CB                     MOV ECX,EBX
005082F5  E8 BB 96 EF FF            CALL 0x004019b5
005082FA  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
00508300  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00508306  5F                        POP EDI
00508307  5E                        POP ESI
00508308  5B                        POP EBX
00508309  8B E5                     MOV ESP,EBP
0050830B  5D                        POP EBP
0050830C  C3                        RET
LAB_0050830d:
0050830D  25 FF 00 00 00            AND EAX,0xff
00508312  48                        DEC EAX
00508313  0F 84 8B 00 00 00         JZ 0x005083a4
00508319  83 E8 03                  SUB EAX,0x3
0050831C  0F 85 B0 0E 00 00         JNZ 0x005091d2
00508322  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
00508328  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0050832B  3B C8                     CMP ECX,EAX
0050832D  0F 85 86 0E 00 00         JNZ 0x005091b9
00508333  05 23 FF FF FF            ADD EAX,0xffffff23
00508338  83 F8 21                  CMP EAX,0x21
0050833B  0F 87 91 0E 00 00         JA 0x005091d2
00508341  33 D2                     XOR EDX,EDX
00508343  8A 90 38 92 50 00         MOV DL,byte ptr [EAX + 0x509238]
switchD_00508349::switchD:
00508349  FF 24 95 30 92 50 00      JMP dword ptr [EDX*0x4 + 0x509230]
switchD_00508349::caseD_dd:
00508350  6A 01                     PUSH 0x1
00508352  8B CB                     MOV ECX,EBX
00508354  E8 66 C3 EF FF            CALL 0x004046bf
00508359  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
0050835F  85 D2                     TEST EDX,EDX
00508361  0F 84 6B 0E 00 00         JZ 0x005091d2
00508367  B9 08 00 00 00            MOV ECX,0x8
0050836C  33 C0                     XOR EAX,EAX
0050836E  8D BD 00 FF FF FF         LEA EDI,[EBP + 0xffffff00]
00508374  F3 AB                     STOSD.REP ES:EDI
00508376  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
0050837C  8B CB                     MOV ECX,EBX
0050837E  50                        PUSH EAX
0050837F  52                        PUSH EDX
00508380  6A 02                     PUSH 0x2
00508382  C7 85 10 FF FF FF 05 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x5
0050838C  E8 EF DC 1D 00            CALL 0x006e6080
00508391  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
00508397  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050839D  5F                        POP EDI
0050839E  5E                        POP ESI
0050839F  5B                        POP EBX
005083A0  8B E5                     MOV ESP,EBP
005083A2  5D                        POP EBP
005083A3  C3                        RET
LAB_005083a4:
005083A4  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
005083A7  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
005083AD  3B C8                     CMP ECX,EAX
005083AF  0F 85 04 0E 00 00         JNZ 0x005091b9
005083B5  8A 55 8C                  MOV DL,byte ptr [EBP + -0x74]
005083B8  8A 83 F9 0B 00 00         MOV AL,byte ptr [EBX + 0xbf9]
005083BE  3A D0                     CMP DL,AL
005083C0  0F 85 F3 0D 00 00         JNZ 0x005091b9
005083C6  32 C9                     XOR CL,CL
005083C8  32 D2                     XOR DL,DL
005083CA  33 C0                     XOR EAX,EAX
LAB_005083cc:
005083CC  80 BC 03 FE 0B 00 00 00   CMP byte ptr [EBX + EAX*0x1 + 0xbfe],0x0
005083D4  74 02                     JZ 0x005083d8
005083D6  FE C2                     INC DL
LAB_005083d8:
005083D8  40                        INC EAX
005083D9  83 F8 06                  CMP EAX,0x6
005083DC  7C EE                     JL 0x005083cc
005083DE  33 C0                     XOR EAX,EAX
LAB_005083e0:
005083E0  80 7C 05 91 00            CMP byte ptr [EBP + EAX*0x1 + -0x6f],0x0
005083E5  74 02                     JZ 0x005083e9
005083E7  FE C1                     INC CL
LAB_005083e9:
005083E9  40                        INC EAX
005083EA  83 F8 06                  CMP EAX,0x6
005083ED  7C F1                     JL 0x005083e0
005083EF  3A D1                     CMP DL,CL
005083F1  74 0E                     JZ 0x00508401
005083F3  6A 01                     PUSH 0x1
005083F5  8B CB                     MOV ECX,EBX
005083F7  E8 87 A9 EF FF            CALL 0x00402d83
005083FC  E9 BB 00 00 00            JMP 0x005084bc
LAB_00508401:
00508401  B9 03 00 00 00            MOV ECX,0x3
00508406  8D 7D 91                  LEA EDI,[EBP + -0x6f]
00508409  8D B3 FE 0B 00 00         LEA ESI,[EBX + 0xbfe]
0050840F  33 C0                     XOR EAX,EAX
00508411  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
00508414  74 5A                     JZ 0x00508470
00508416  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
0050841D  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
00508423  8D 4B 18                  LEA ECX,[EBX + 0x18]
00508426  51                        PUSH ECX
00508427  52                        PUSH EDX
00508428  6A 02                     PUSH 0x2
0050842A  8B CB                     MOV ECX,EBX
0050842C  E8 4F DC 1D 00            CALL 0x006e6080
00508431  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
00508435  8D B3 FE 0B 00 00         LEA ESI,[EBX + 0xbfe]
LAB_0050843b:
0050843B  80 3E 00                  CMP byte ptr [ESI],0x0
0050843E  74 0D                     JZ 0x0050844d
00508440  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00508443  8B CB                     MOV ECX,EBX
00508445  50                        PUSH EAX
00508446  6A 00                     PUSH 0x0
00508448  E8 F1 AC EF FF            CALL 0x0040313e
LAB_0050844d:
0050844D  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00508450  FE C0                     INC AL
00508452  46                        INC ESI
00508453  3C 06                     CMP AL,0x6
00508455  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00508458  72 E1                     JC 0x0050843b
0050845A  6A 00                     PUSH 0x0
0050845C  8B CB                     MOV ECX,EBX
0050845E  E8 3E C7 EF FF            CALL 0x00404ba1
00508463  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00508469  E8 8E BC EF FF            CALL 0x004040fc
0050846E  EB 16                     JMP 0x00508486
LAB_00508470:
00508470  8A 8B FD 0B 00 00         MOV CL,byte ptr [EBX + 0xbfd]
00508476  8A 45 90                  MOV AL,byte ptr [EBP + -0x70]
00508479  3A C8                     CMP CL,AL
0050847B  74 09                     JZ 0x00508486
0050847D  6A 00                     PUSH 0x0
0050847F  8B CB                     MOV ECX,EBX
00508481  E8 1B C7 EF FF            CALL 0x00404ba1
LAB_00508486:
00508486  B9 03 00 00 00            MOV ECX,0x3
0050848B  8D 7D 97                  LEA EDI,[EBP + -0x69]
0050848E  8D B3 04 0C 00 00         LEA ESI,[EBX + 0xc04]
00508494  33 D2                     XOR EDX,EDX
00508496  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
00508499  75 0D                     JNZ 0x005084a8
0050849B  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
005084A1  8A 4D 8F                  MOV CL,byte ptr [EBP + -0x71]
005084A4  3A C1                     CMP AL,CL
005084A6  74 14                     JZ 0x005084bc
LAB_005084a8:
005084A8  8D 4D 88                  LEA ECX,[EBP + -0x78]
005084AB  8D 83 F5 0B 00 00         LEA EAX,[EBX + 0xbf5]
005084B1  51                        PUSH ECX
005084B2  50                        PUSH EAX
005084B3  6A 00                     PUSH 0x0
005084B5  8B CB                     MOV ECX,EBX
005084B7  E8 CD CA EF FF            CALL 0x00404f89
LAB_005084bc:
005084BC  8A 93 0A 0C 00 00         MOV DL,byte ptr [EBX + 0xc0a]
005084C2  8A 45 9D                  MOV AL,byte ptr [EBP + -0x63]
005084C5  3A D0                     CMP DL,AL
005084C7  75 0D                     JNZ 0x005084d6
005084C9  8A 45 8F                  MOV AL,byte ptr [EBP + -0x71]
005084CC  8A 8B FC 0B 00 00         MOV CL,byte ptr [EBX + 0xbfc]
005084D2  3A C8                     CMP CL,AL
005084D4  74 3E                     JZ 0x00508514
LAB_005084d6:
005084D6  8B 83 C4 09 00 00         MOV EAX,dword ptr [EBX + 0x9c4]
005084DC  85 C0                     TEST EAX,EAX
005084DE  74 34                     JZ 0x00508514
005084E0  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
005084E7  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
005084ED  84 C0                     TEST AL,AL
005084EF  74 0A                     JZ 0x005084fb
005084F1  33 C0                     XOR EAX,EAX
005084F3  8A 83 0A 0C 00 00         MOV AL,byte ptr [EBX + 0xc0a]
005084F9  EB 02                     JMP 0x005084fd
LAB_005084fb:
005084FB  33 C0                     XOR EAX,EAX
LAB_005084fd:
005084FD  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
00508500  8B 93 C4 09 00 00         MOV EDX,dword ptr [EBX + 0x9c4]
00508506  8D 4B 18                  LEA ECX,[EBX + 0x18]
00508509  51                        PUSH ECX
0050850A  52                        PUSH EDX
0050850B  6A 02                     PUSH 0x2
0050850D  8B CB                     MOV ECX,EBX
0050850F  E8 6C DB 1D 00            CALL 0x006e6080
LAB_00508514:
00508514  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
0050851A  83 F8 43                  CMP EAX,0x43
0050851D  74 05                     JZ 0x00508524
0050851F  83 F8 4C                  CMP EAX,0x4c
00508522  75 4E                     JNZ 0x00508572
LAB_00508524:
00508524  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050852A  8A 4D A4                  MOV CL,byte ptr [EBP + -0x5c]
0050852D  3A C1                     CMP AL,CL
0050852F  75 0D                     JNZ 0x0050853e
00508531  8A 4D 8F                  MOV CL,byte ptr [EBP + -0x71]
00508534  8A 93 FC 0B 00 00         MOV DL,byte ptr [EBX + 0xbfc]
0050853A  3A D1                     CMP DL,CL
0050853C  74 34                     JZ 0x00508572
LAB_0050853e:
0050853E  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00508545  8A 8B FC 0B 00 00         MOV CL,byte ptr [EBX + 0xbfc]
0050854B  84 C9                     TEST CL,CL
0050854D  74 0A                     JZ 0x00508559
0050854F  F6 D8                     NEG AL
00508551  1B C0                     SBB EAX,EAX
00508553  83 E0 02                  AND EAX,0x2
00508556  40                        INC EAX
00508557  EB 02                     JMP 0x0050855b
LAB_00508559:
00508559  33 C0                     XOR EAX,EAX
LAB_0050855b:
0050855B  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0050855E  8B 83 0C 03 00 00         MOV EAX,dword ptr [EBX + 0x30c]
00508564  8D 53 18                  LEA EDX,[EBX + 0x18]
00508567  8B CB                     MOV ECX,EBX
00508569  52                        PUSH EDX
0050856A  50                        PUSH EAX
0050856B  6A 02                     PUSH 0x2
0050856D  E8 0E DB 1D 00            CALL 0x006e6080
LAB_00508572:
00508572  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
00508578  83 C0 CE                  ADD EAX,-0x32
0050857B  83 F8 3D                  CMP EAX,0x3d
0050857E  0F 87 0E 0C 00 00         JA 0x00509192
00508584  33 C9                     XOR ECX,ECX
00508586  8A 88 84 92 50 00         MOV CL,byte ptr [EAX + 0x509284]
switchD_0050858c::switchD:
0050858C  FF 24 8D 5C 92 50 00      JMP dword ptr [ECX*0x4 + 0x50925c]
switchD_0050858c::caseD_36:
00508593  8A 8B 29 0C 00 00         MOV CL,byte ptr [EBX + 0xc29]
00508599  8A 45 BC                  MOV AL,byte ptr [EBP + -0x44]
0050859C  3A C8                     CMP CL,AL
0050859E  0F 84 EE 0B 00 00         JZ 0x00509192
005085A4  8B 93 F5 09 00 00         MOV EDX,dword ptr [EBX + 0x9f5]
005085AA  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005085B0  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005085B3  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
005085B6  2B C7                     SUB EAX,EDI
005085B8  99                        CDQ
005085B9  2B C2                     SUB EAX,EDX
005085BB  8B F0                     MOV ESI,EAX
005085BD  D1 FE                     SAR ESI,0x1
005085BF  80 F9 FF                  CMP CL,0xff
005085C2  75 07                     JNZ 0x005085cb
005085C4  C6 83 29 0C 00 00 00      MOV byte ptr [EBX + 0xc29],0x0
LAB_005085cb:
005085CB  80 BB 29 0C 00 00 28      CMP byte ptr [EBX + 0xc29],0x28
005085D2  76 07                     JBE 0x005085db
005085D4  C6 83 29 0C 00 00 28      MOV byte ptr [EBX + 0xc29],0x28
LAB_005085db:
005085DB  8A 83 29 0C 00 00         MOV AL,byte ptr [EBX + 0xc29]
005085E1  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005085E5  84 C0                     TEST AL,AL
005085E7  76 42                     JBE 0x0050862b
LAB_005085e9:
005085E9  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
005085EF  6A 03                     PUSH 0x3
005085F1  51                        PUSH ECX
005085F2  E8 A9 2D 20 00            CALL 0x0070b3a0
005085F7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005085FA  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00508600  81 E2 FF 00 00 00         AND EDX,0xff
00508606  50                        PUSH EAX
00508607  6A 01                     PUSH 0x1
00508609  6A 75                     PUSH 0x75
0050860B  8D 44 96 06               LEA EAX,[ESI + EDX*0x4 + 0x6]
0050860F  50                        PUSH EAX
00508610  51                        PUSH ECX
00508611  E8 13 AC EF FF            CALL 0x00403229
00508616  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00508619  8A 8B 29 0C 00 00         MOV CL,byte ptr [EBX + 0xc29]
0050861F  83 C4 1C                  ADD ESP,0x1c
00508622  FE C0                     INC AL
00508624  3A C1                     CMP AL,CL
00508626  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00508629  72 BE                     JC 0x005085e9
LAB_0050862b:
0050862B  80 7D FC 28               CMP byte ptr [EBP + -0x4],0x28
0050862F  73 3C                     JNC 0x0050866d
00508631  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00508634  BF 28 00 00 00            MOV EDI,0x28
00508639  25 FF 00 00 00            AND EAX,0xff
0050863E  2B F8                     SUB EDI,EAX
00508640  8D 74 86 06               LEA ESI,[ESI + EAX*0x4 + 0x6]
LAB_00508644:
00508644  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050864A  6A 00                     PUSH 0x0
0050864C  52                        PUSH EDX
0050864D  E8 4E 2D 20 00            CALL 0x0070b3a0
00508652  50                        PUSH EAX
00508653  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00508659  6A 01                     PUSH 0x1
0050865B  6A 75                     PUSH 0x75
0050865D  56                        PUSH ESI
0050865E  50                        PUSH EAX
0050865F  E8 C5 AB EF FF            CALL 0x00403229
00508664  83 C4 1C                  ADD ESP,0x1c
00508667  83 C6 04                  ADD ESI,0x4
0050866A  4F                        DEC EDI
0050866B  75 D7                     JNZ 0x00508644
LAB_0050866d:
0050866D  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00508673  85 C0                     TEST EAX,EAX
00508675  0F 8C 17 0B 00 00         JL 0x00509192
0050867B  E9 F9 0A 00 00            JMP 0x00509179
switchD_0050858c::caseD_33:
00508680  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
00508686  8B 45 A5                  MOV EAX,dword ptr [EBP + -0x5b]
00508689  3B C8                     CMP ECX,EAX
0050868B  0F 85 A2 04 00 00         JNZ 0x00508b33
00508691  8B 93 16 0C 00 00         MOV EDX,dword ptr [EBX + 0xc16]
00508697  8B 45 A9                  MOV EAX,dword ptr [EBP + -0x57]
0050869A  3B D0                     CMP EDX,EAX
0050869C  0F 85 91 04 00 00         JNZ 0x00508b33
005086A2  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005086A8  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
005086AE  BE 3A 00 00 00            MOV ESI,0x3a
005086B3  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
005086BA  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005086BD  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005086C0  2B C2                     SUB EAX,EDX
005086C2  8D 8B 1C 0C 00 00         LEA ECX,[EBX + 0xc1c]
005086C8  99                        CDQ
005086C9  2B C2                     SUB EAX,EDX
005086CB  8D 55 B7                  LEA EDX,[EBP + -0x49]
005086CE  8B F8                     MOV EDI,EAX
005086D0  8D 83 24 0C 00 00         LEA EAX,[EBX + 0xc24]
005086D6  D1 FF                     SAR EDI,0x1
005086D8  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005086DB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005086DE  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_005086e1:
005086E1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005086E4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005086E7  8A 02                     MOV AL,byte ptr [EDX]
005086E9  8A 11                     MOV DL,byte ptr [ECX]
005086EB  3A C2                     CMP AL,DL
005086ED  0F 84 57 01 00 00         JZ 0x0050884a
005086F3  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005086F9  6A 00                     PUSH 0x0
005086FB  6A 21                     PUSH 0x21
005086FD  6A 07                     PUSH 0x7
005086FF  8D 57 36                  LEA EDX,[EDI + 0x36]
00508702  56                        PUSH ESI
00508703  52                        PUSH EDX
00508704  6A 00                     PUSH 0x0
00508706  50                        PUSH EAX
00508707  E8 64 BA 1A 00            CALL 0x006b4170
0050870C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0050870F  8A 09                     MOV CL,byte ptr [ECX]
00508711  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
00508714  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00508717  25 FF 00 00 00            AND EAX,0xff
0050871C  8B D0                     MOV EDX,EAX
0050871E  C1 E2 05                  SHL EDX,0x5
00508721  03 D0                     ADD EDX,EAX
00508723  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00508728  F7 E2                     MUL EDX
0050872A  8A C1                     MOV AL,CL
0050872C  C1 EA 05                  SHR EDX,0x5
0050872F  84 C0                     TEST AL,AL
00508731  88 55 E4                  MOV byte ptr [EBP + -0x1c],DL
00508734  76 08                     JBE 0x0050873e
00508736  84 D2                     TEST DL,DL
00508738  75 04                     JNZ 0x0050873e
0050873A  C6 45 E4 01               MOV byte ptr [EBP + -0x1c],0x1
LAB_0050873e:
0050873E  80 F9 46                  CMP CL,0x46
00508741  72 09                     JC 0x0050874c
00508743  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0050874A  EB 0E                     JMP 0x0050875a
LAB_0050874c:
0050874C  80 F9 14                  CMP CL,0x14
0050874F  1B C0                     SBB EAX,EAX
00508751  83 E0 05                  AND EAX,0x5
00508754  83 C0 05                  ADD EAX,0x5
00508757  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0050875a:
0050875A  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
00508760  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00508763  25 FF 00 00 00            AND EAX,0xff
00508768  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0050876B  50                        PUSH EAX
0050876C  2B D0                     SUB EDX,EAX
0050876E  6A 05                     PUSH 0x5
00508770  52                        PUSH EDX
00508771  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00508774  52                        PUSH EDX
00508775  6A 00                     PUSH 0x0
00508777  51                        PUSH ECX
00508778  8B CE                     MOV ECX,ESI
0050877A  2B C8                     SUB ECX,EAX
0050877C  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00508782  83 C1 21                  ADD ECX,0x21
00508785  8D 57 37                  LEA EDX,[EDI + 0x37]
00508788  51                        PUSH ECX
00508789  52                        PUSH EDX
0050878A  6A 00                     PUSH 0x0
0050878C  50                        PUSH EAX
0050878D  E8 5E CE 1A 00            CALL 0x006b55f0
00508792  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00508798  6A 11                     PUSH 0x11
0050879A  6A 75                     PUSH 0x75
0050879C  6A 0C                     PUSH 0xc
0050879E  6A 3F                     PUSH 0x3f
005087A0  6A 00                     PUSH 0x0
005087A2  8D 56 FF                  LEA EDX,[ESI + -0x1]
005087A5  8D 47 3F                  LEA EAX,[EDI + 0x3f]
005087A8  51                        PUSH ECX
005087A9  52                        PUSH EDX
005087AA  50                        PUSH EAX
005087AB  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005087B1  6A 00                     PUSH 0x0
005087B3  50                        PUSH EAX
005087B4  E8 37 CE 1A 00            CALL 0x006b55f0
005087B9  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
005087BF  6A 13                     PUSH 0x13
005087C1  6A 44                     PUSH 0x44
005087C3  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
005087C9  6A 1C                     PUSH 0x1c
005087CB  6A 3F                     PUSH 0x3f
005087CD  6A 00                     PUSH 0x0
005087CF  8D 46 0F                  LEA EAX,[ESI + 0xf]
005087D2  51                        PUSH ECX
005087D3  50                        PUSH EAX
005087D4  8D 47 3F                  LEA EAX,[EDI + 0x3f]
005087D7  50                        PUSH EAX
005087D8  6A 00                     PUSH 0x0
005087DA  52                        PUSH EDX
005087DB  E8 10 CE 1A 00            CALL 0x006b55f0
005087E0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005087E3  B1 64                     MOV CL,0x64
005087E5  68 B1 36 00 00            PUSH 0x36b1
005087EA  8D 47 41                  LEA EAX,[EDI + 0x41]
005087ED  2A 0A                     SUB CL,byte ptr [EDX]
005087EF  51                        PUSH ECX
005087F0  56                        PUSH ESI
005087F1  50                        PUSH EAX
005087F2  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005087F8  50                        PUSH EAX
005087F9  8B CB                     MOV ECX,EBX
005087FB  E8 7D C4 EF FF            CALL 0x00404c7d
00508800  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00508803  6A 02                     PUSH 0x2
00508805  6A 04                     PUSH 0x4
00508807  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0050880B  66 8B 10                  MOV DX,word ptr [EAX]
0050880E  51                        PUSH ECX
0050880F  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00508815  8D 46 0B                  LEA EAX,[ESI + 0xb]
00508818  52                        PUSH EDX
00508819  50                        PUSH EAX
0050881A  8D 47 41                  LEA EAX,[EDI + 0x41]
0050881D  50                        PUSH EAX
0050881E  51                        PUSH ECX
0050881F  8B CB                     MOV ECX,EBX
00508821  E8 67 D2 EF FF            CALL 0x00405a8d
00508826  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050882C  85 C0                     TEST EAX,EAX
0050882E  7C 1A                     JL 0x0050884a
00508830  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
00508836  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
00508839  52                        PUSH EDX
0050883A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00508840  51                        PUSH ECX
00508841  6A FF                     PUSH -0x1
00508843  50                        PUSH EAX
00508844  52                        PUSH EDX
00508845  E8 F6 AD 1A 00            CALL 0x006b3640
LAB_0050884a:
0050884A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0050884D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00508850  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00508853  83 C1 02                  ADD ECX,0x2
00508856  40                        INC EAX
00508857  42                        INC EDX
00508858  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0050885B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0050885E  83 C6 23                  ADD ESI,0x23
00508861  48                        DEC EAX
00508862  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00508865  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00508868  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0050886B  0F 85 70 FE FF FF         JNZ 0x005086e1
00508871  E9 1C 09 00 00            JMP 0x00509192
switchD_0050858c::caseD_32:
00508876  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050887C  8B 4D A5                  MOV ECX,dword ptr [EBP + -0x5b]
0050887F  3B C1                     CMP EAX,ECX
00508881  0F 85 4C 02 00 00         JNZ 0x00508ad3
00508887  8A 8B 26 0C 00 00         MOV CL,byte ptr [EBX + 0xc26]
0050888D  8A 45 B9                  MOV AL,byte ptr [EBP + -0x47]
00508890  3A C8                     CMP CL,AL
00508892  0F 85 3B 02 00 00         JNZ 0x00508ad3
00508898  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050889E  8B 93 ED 09 00 00         MOV EDX,dword ptr [EBX + 0x9ed]
005088A4  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005088A7  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
005088AA  2B C7                     SUB EAX,EDI
005088AC  99                        CDQ
005088AD  2B C2                     SUB EAX,EDX
005088AF  8A 55 B7                  MOV DL,byte ptr [EBP + -0x49]
005088B2  8B F0                     MOV ESI,EAX
005088B4  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
005088BA  D1 FE                     SAR ESI,0x1
005088BC  3A C2                     CMP AL,DL
005088BE  0F 84 3D 01 00 00         JZ 0x00508a01
005088C4  6A 00                     PUSH 0x0
005088C6  6A 21                     PUSH 0x21
005088C8  6A 07                     PUSH 0x7
005088CA  8D 56 36                  LEA EDX,[ESI + 0x36]
005088CD  6A 5D                     PUSH 0x5d
005088CF  52                        PUSH EDX
005088D0  6A 00                     PUSH 0x0
005088D2  51                        PUSH ECX
005088D3  E8 98 B8 1A 00            CALL 0x006b4170
005088D8  8A 8B 24 0C 00 00         MOV CL,byte ptr [EBX + 0xc24]
005088DE  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005088E1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005088E4  25 FF 00 00 00            AND EAX,0xff
005088E9  8B D0                     MOV EDX,EAX
005088EB  C1 E2 05                  SHL EDX,0x5
005088EE  03 D0                     ADD EDX,EAX
005088F0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005088F5  F7 E2                     MUL EDX
005088F7  C1 EA 05                  SHR EDX,0x5
005088FA  84 C9                     TEST CL,CL
005088FC  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
005088FF  76 08                     JBE 0x00508909
00508901  84 D2                     TEST DL,DL
00508903  75 04                     JNZ 0x00508909
00508905  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
LAB_00508909:
00508909  80 F9 46                  CMP CL,0x46
0050890C  72 04                     JC 0x00508912
0050890E  33 D2                     XOR EDX,EDX
00508910  EB 0B                     JMP 0x0050891d
LAB_00508912:
00508912  80 F9 14                  CMP CL,0x14
00508915  1B D2                     SBB EDX,EDX
00508917  83 E2 05                  AND EDX,0x5
0050891A  83 C2 05                  ADD EDX,0x5
LAB_0050891d:
0050891D  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
00508923  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00508926  25 FF 00 00 00            AND EAX,0xff
0050892B  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0050892E  50                        PUSH EAX
0050892F  2B F8                     SUB EDI,EAX
00508931  6A 05                     PUSH 0x5
00508933  57                        PUSH EDI
00508934  52                        PUSH EDX
00508935  6A 00                     PUSH 0x0
00508937  51                        PUSH ECX
00508938  B9 7E 00 00 00            MOV ECX,0x7e
0050893D  8D 56 37                  LEA EDX,[ESI + 0x37]
00508940  2B C8                     SUB ECX,EAX
00508942  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00508948  51                        PUSH ECX
00508949  52                        PUSH EDX
0050894A  6A 00                     PUSH 0x0
0050894C  50                        PUSH EAX
0050894D  E8 9E CC 1A 00            CALL 0x006b55f0
00508952  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00508958  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050895E  6A 11                     PUSH 0x11
00508960  6A 75                     PUSH 0x75
00508962  6A 0C                     PUSH 0xc
00508964  6A 3F                     PUSH 0x3f
00508966  6A 00                     PUSH 0x0
00508968  8D 7E 3F                  LEA EDI,[ESI + 0x3f]
0050896B  51                        PUSH ECX
0050896C  6A 5C                     PUSH 0x5c
0050896E  57                        PUSH EDI
0050896F  6A 00                     PUSH 0x0
00508971  52                        PUSH EDX
00508972  E8 79 CC 1A 00            CALL 0x006b55f0
00508977  8B 83 ED 09 00 00         MOV EAX,dword ptr [EBX + 0x9ed]
0050897D  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00508983  6A 13                     PUSH 0x13
00508985  6A 44                     PUSH 0x44
00508987  6A 1C                     PUSH 0x1c
00508989  6A 3F                     PUSH 0x3f
0050898B  6A 00                     PUSH 0x0
0050898D  50                        PUSH EAX
0050898E  6A 6C                     PUSH 0x6c
00508990  57                        PUSH EDI
00508991  6A 00                     PUSH 0x0
00508993  51                        PUSH ECX
00508994  E8 57 CC 1A 00            CALL 0x006b55f0
00508999  8A 93 24 0C 00 00         MOV DL,byte ptr [EBX + 0xc24]
0050899F  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005089A5  68 14 27 00 00            PUSH 0x2714
005089AA  83 C6 41                  ADD ESI,0x41
005089AD  52                        PUSH EDX
005089AE  6A 5D                     PUSH 0x5d
005089B0  56                        PUSH ESI
005089B1  50                        PUSH EAX
005089B2  8B CB                     MOV ECX,EBX
005089B4  E8 C4 C2 EF FF            CALL 0x00404c7d
005089B9  66 8B 8B 20 0C 00 00      MOV CX,word ptr [EBX + 0xc20]
005089C0  66 8B 93 1C 0C 00 00      MOV DX,word ptr [EBX + 0xc1c]
005089C7  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005089CD  6A 02                     PUSH 0x2
005089CF  6A 04                     PUSH 0x4
005089D1  51                        PUSH ECX
005089D2  52                        PUSH EDX
005089D3  6A 68                     PUSH 0x68
005089D5  56                        PUSH ESI
005089D6  50                        PUSH EAX
005089D7  8B CB                     MOV ECX,EBX
005089D9  E8 AF D0 EF FF            CALL 0x00405a8d
005089DE  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
005089E4  85 C0                     TEST EAX,EAX
005089E6  7C 19                     JL 0x00508a01
005089E8  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
005089EE  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
005089F1  51                        PUSH ECX
005089F2  52                        PUSH EDX
005089F3  6A FF                     PUSH -0x1
005089F5  50                        PUSH EAX
005089F6  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005089FB  50                        PUSH EAX
005089FC  E8 3F AC 1A 00            CALL 0x006b3640
LAB_00508a01:
00508A01  83 BB F5 0B 00 00 44      CMP dword ptr [EBX + 0xbf5],0x44
00508A08  0F 85 84 07 00 00         JNZ 0x00509192
00508A0E  66 8B 8B 34 0C 00 00      MOV CX,word ptr [EBX + 0xc34]
00508A15  66 3B 4D C7               CMP CX,word ptr [EBP + -0x39]
00508A19  0F 84 73 07 00 00         JZ 0x00509192
00508A1F  8B 8B 01 0A 00 00         MOV ECX,dword ptr [EBX + 0xa01]
00508A25  8B B3 94 01 00 00         MOV ESI,dword ptr [EBX + 0x194]
00508A2B  51                        PUSH ECX
00508A2C  6A 01                     PUSH 0x1
00508A2E  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00508A31  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00508A34  2B C2                     SUB EAX,EDX
00508A36  6A 37                     PUSH 0x37
00508A38  99                        CDQ
00508A39  2B C2                     SUB EAX,EDX
00508A3B  D1 F8                     SAR EAX,0x1
00508A3D  50                        PUSH EAX
00508A3E  56                        PUSH ESI
00508A3F  E8 E5 A7 EF FF            CALL 0x00403229
00508A44  A1 18 76 80 00            MOV EAX,[0x00807618]
00508A49  33 D2                     XOR EDX,EDX
00508A4B  66 8B 93 34 0C 00 00      MOV DX,word ptr [EBX + 0xc34]
00508A52  83 C4 14                  ADD ESP,0x14
00508A55  52                        PUSH EDX
00508A56  50                        PUSH EAX
00508A57  68 25 27 00 00            PUSH 0x2725
00508A5C  E8 DF 76 1A 00            CALL 0x006b0140
00508A61  50                        PUSH EAX
00508A62  68 6C 28 7C 00            PUSH 0x7c286c
00508A67  68 3A F3 80 00            PUSH 0x80f33a
00508A6C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00508A72  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00508A78  83 C4 10                  ADD ESP,0x10
00508A7B  6A 15                     PUSH 0x15
00508A7D  6A 6D                     PUSH 0x6d
00508A7F  6A 39                     PUSH 0x39
00508A81  6A 56                     PUSH 0x56
00508A83  6A 00                     PUSH 0x0
00508A85  51                        PUSH ECX
00508A86  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00508A8C  E8 FF 7F 20 00            CALL 0x00710a90
00508A91  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00508A97  6A FF                     PUSH -0x1
00508A99  6A FF                     PUSH -0x1
00508A9B  6A 00                     PUSH 0x0
00508A9D  6A FF                     PUSH -0x1
00508A9F  6A FE                     PUSH -0x2
00508AA1  68 3A F3 80 00            PUSH 0x80f33a
00508AA6  E8 C5 90 20 00            CALL 0x00711b70
00508AAB  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00508AB1  85 C0                     TEST EAX,EAX
00508AB3  0F 8C D9 06 00 00         JL 0x00509192
00508AB9  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
00508ABF  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
00508AC2  52                        PUSH EDX
00508AC3  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00508AC9  51                        PUSH ECX
00508ACA  6A FF                     PUSH -0x1
00508ACC  50                        PUSH EAX
00508ACD  52                        PUSH EDX
00508ACE  E9 BA 06 00 00            JMP 0x0050918d
LAB_00508ad3:
00508AD3  6A 00                     PUSH 0x0
00508AD5  EB 5E                     JMP 0x00508b35
switchD_0050858c::caseD_38:
00508AD7  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00508ADD  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00508AE3  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00508AE6  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00508AE9  2B C2                     SUB EAX,EDX
00508AEB  8B CB                     MOV ECX,EBX
00508AED  99                        CDQ
00508AEE  2B C2                     SUB EAX,EDX
00508AF0  D1 F8                     SAR EAX,0x1
00508AF2  50                        PUSH EAX
00508AF3  E8 57 B3 EF FF            CALL 0x00403e4f
00508AF8  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00508AFE  85 C0                     TEST EAX,EAX
00508B00  0F 8C 8C 06 00 00         JL 0x00509192
00508B06  E9 6E 06 00 00            JMP 0x00509179
switchD_0050858c::caseD_35:
00508B0B  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00508B11  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
00508B17  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00508B1A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00508B1D  2B C2                     SUB EAX,EDX
00508B1F  99                        CDQ
00508B20  2B C2                     SUB EAX,EDX
00508B22  8A 55 C4                  MOV DL,byte ptr [EBP + -0x3c]
00508B25  8B F0                     MOV ESI,EAX
00508B27  8A 83 31 0C 00 00         MOV AL,byte ptr [EBX + 0xc31]
00508B2D  D1 FE                     SAR ESI,0x1
00508B2F  3A C2                     CMP AL,DL
00508B31  74 1E                     JZ 0x00508b51
LAB_00508b33:
00508B33  6A 01                     PUSH 0x1
LAB_00508b35:
00508B35  8B CB                     MOV ECX,EBX
00508B37  E8 83 BB EF FF            CALL 0x004046bf
00508B3C  6A 00                     PUSH 0x0
00508B3E  8B CB                     MOV ECX,EBX
00508B40  E8 3E A2 EF FF            CALL 0x00402d83
00508B45  8B CB                     MOV ECX,EBX
00508B47  E8 54 D0 EF FF            CALL 0x00405ba0
00508B4C  E9 41 06 00 00            JMP 0x00509192
LAB_00508b51:
00508B51  84 C0                     TEST AL,AL
00508B53  74 45                     JZ 0x00508b9a
00508B55  8A 93 33 0C 00 00         MOV DL,byte ptr [EBX + 0xc33]
00508B5B  8A 45 C6                  MOV AL,byte ptr [EBP + -0x3a]
00508B5E  3A D0                     CMP DL,AL
00508B60  0F 84 2C 06 00 00         JZ 0x00509192
00508B66  6A 1B                     PUSH 0x1b
00508B68  6A 4C                     PUSH 0x4c
00508B6A  6A 15                     PUSH 0x15
00508B6C  6A 39                     PUSH 0x39
00508B6E  6A 00                     PUSH 0x0
00508B70  51                        PUSH ECX
00508B71  8D 46 39                  LEA EAX,[ESI + 0x39]
00508B74  6A 65                     PUSH 0x65
00508B76  50                        PUSH EAX
00508B77  6A 00                     PUSH 0x0
00508B79  57                        PUSH EDI
00508B7A  E8 71 CA 1A 00            CALL 0x006b55f0
00508B7F  56                        PUSH ESI
00508B80  8B CB                     MOV ECX,EBX
00508B82  E8 DB CC EF FF            CALL 0x00405862
00508B87  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00508B8D  85 C0                     TEST EAX,EAX
00508B8F  0F 8C FD 05 00 00         JL 0x00509192
00508B95  E9 DF 05 00 00            JMP 0x00509179
LAB_00508b9a:
00508B9A  66 8B 8B 2F 0C 00 00      MOV CX,word ptr [EBX + 0xc2f]
00508BA1  66 3B 4D C2               CMP CX,word ptr [EBP + -0x3e]
00508BA5  0F 84 E7 05 00 00         JZ 0x00509192
00508BAB  6A 01                     PUSH 0x1
00508BAD  8B CB                     MOV ECX,EBX
00508BAF  E8 0B BB EF FF            CALL 0x004046bf
00508BB4  8B 93 02 03 00 00         MOV EDX,dword ptr [EBX + 0x302]
00508BBA  85 D2                     TEST EDX,EDX
00508BBC  0F 84 D0 05 00 00         JZ 0x00509192
00508BC2  B9 08 00 00 00            MOV ECX,0x8
00508BC7  33 C0                     XOR EAX,EAX
00508BC9  8D BD 20 FF FF FF         LEA EDI,[EBP + 0xffffff20]
00508BCF  F3 AB                     STOSD.REP ES:EDI
00508BD1  8D 85 20 FF FF FF         LEA EAX,[EBP + 0xffffff20]
00508BD7  8B CB                     MOV ECX,EBX
00508BD9  50                        PUSH EAX
00508BDA  52                        PUSH EDX
00508BDB  6A 02                     PUSH 0x2
00508BDD  C7 85 30 FF FF FF 05 00 00 00  MOV dword ptr [EBP + 0xffffff30],0x5
00508BE7  E8 94 D4 1D 00            CALL 0x006e6080
00508BEC  E9 A1 05 00 00            JMP 0x00509192
switchD_0050858c::caseD_3a:
00508BF1  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00508BF7  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00508BFD  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00508C00  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00508C03  2B C7                     SUB EAX,EDI
00508C05  8A 4D CD                  MOV CL,byte ptr [EBP + -0x33]
00508C08  99                        CDQ
00508C09  2B C2                     SUB EAX,EDX
00508C0B  8B F8                     MOV EDI,EAX
00508C0D  8A 83 3A 0C 00 00         MOV AL,byte ptr [EBX + 0xc3a]
00508C13  D1 FF                     SAR EDI,0x1
00508C15  3A C1                     CMP AL,CL
00508C17  0F 84 B8 00 00 00         JZ 0x00508cd5
00508C1D  84 C0                     TEST AL,AL
00508C1F  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
00508C23  76 42                     JBE 0x00508c67
LAB_00508c25:
00508C25  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
00508C2B  6A 03                     PUSH 0x3
00508C2D  50                        PUSH EAX
00508C2E  E8 6D 27 20 00            CALL 0x0070b3a0
00508C33  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00508C36  50                        PUSH EAX
00508C37  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00508C3D  81 E1 FF 00 00 00         AND ECX,0xff
00508C43  6A 01                     PUSH 0x1
00508C45  6A 54                     PUSH 0x54
00508C47  8D 54 8F 70               LEA EDX,[EDI + ECX*0x4 + 0x70]
00508C4B  52                        PUSH EDX
00508C4C  50                        PUSH EAX
00508C4D  E8 D7 A5 EF FF            CALL 0x00403229
00508C52  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00508C55  8A 8B 3A 0C 00 00         MOV CL,byte ptr [EBX + 0xc3a]
00508C5B  83 C4 1C                  ADD ESP,0x1c
00508C5E  FE C0                     INC AL
00508C60  3A C1                     CMP AL,CL
00508C62  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00508C65  72 BE                     JC 0x00508c25
LAB_00508c67:
00508C67  80 7D FC 0F               CMP byte ptr [EBP + -0x4],0xf
00508C6B  73 45                     JNC 0x00508cb2
00508C6D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00508C70  B9 0F 00 00 00            MOV ECX,0xf
00508C75  25 FF 00 00 00            AND EAX,0xff
00508C7A  2B C8                     SUB ECX,EAX
00508C7C  8D 74 87 70               LEA ESI,[EDI + EAX*0x4 + 0x70]
00508C80  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00508c83:
00508C83  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
00508C89  6A 00                     PUSH 0x0
00508C8B  51                        PUSH ECX
00508C8C  E8 0F 27 20 00            CALL 0x0070b3a0
00508C91  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00508C97  50                        PUSH EAX
00508C98  6A 01                     PUSH 0x1
00508C9A  6A 54                     PUSH 0x54
00508C9C  56                        PUSH ESI
00508C9D  52                        PUSH EDX
00508C9E  E8 86 A5 EF FF            CALL 0x00403229
00508CA3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00508CA6  83 C4 1C                  ADD ESP,0x1c
00508CA9  83 C6 04                  ADD ESI,0x4
00508CAC  48                        DEC EAX
00508CAD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00508CB0  75 D1                     JNZ 0x00508c83
LAB_00508cb2:
00508CB2  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00508CB8  85 C0                     TEST EAX,EAX
00508CBA  7C 19                     JL 0x00508cd5
00508CBC  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
00508CC2  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
00508CC5  51                        PUSH ECX
00508CC6  52                        PUSH EDX
00508CC7  6A FF                     PUSH -0x1
00508CC9  50                        PUSH EAX
00508CCA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00508CCF  50                        PUSH EAX
00508CD0  E8 6B A9 1A 00            CALL 0x006b3640
LAB_00508cd5:
00508CD5  8A 83 3B 0C 00 00         MOV AL,byte ptr [EBX + 0xc3b]
00508CDB  8A 4D CE                  MOV CL,byte ptr [EBP + -0x32]
00508CDE  3A C1                     CMP AL,CL
00508CE0  0F 84 B8 00 00 00         JZ 0x00508d9e
00508CE6  84 C0                     TEST AL,AL
00508CE8  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
00508CEC  76 42                     JBE 0x00508d30
LAB_00508cee:
00508CEE  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
00508CF4  6A 03                     PUSH 0x3
00508CF6  51                        PUSH ECX
00508CF7  E8 A4 26 20 00            CALL 0x0070b3a0
00508CFC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00508CFF  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00508D05  81 E2 FF 00 00 00         AND EDX,0xff
00508D0B  50                        PUSH EAX
00508D0C  6A 01                     PUSH 0x1
00508D0E  6A 5F                     PUSH 0x5f
00508D10  8D 44 97 70               LEA EAX,[EDI + EDX*0x4 + 0x70]
00508D14  50                        PUSH EAX
00508D15  51                        PUSH ECX
00508D16  E8 0E A5 EF FF            CALL 0x00403229
00508D1B  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00508D1E  8A 8B 3B 0C 00 00         MOV CL,byte ptr [EBX + 0xc3b]
00508D24  83 C4 1C                  ADD ESP,0x1c
00508D27  FE C0                     INC AL
00508D29  3A C1                     CMP AL,CL
00508D2B  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00508D2E  72 BE                     JC 0x00508cee
LAB_00508d30:
00508D30  80 7D FC 0F               CMP byte ptr [EBP + -0x4],0xf
00508D34  73 45                     JNC 0x00508d7b
00508D36  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00508D39  B9 0F 00 00 00            MOV ECX,0xf
00508D3E  25 FF 00 00 00            AND EAX,0xff
00508D43  2B C8                     SUB ECX,EAX
00508D45  8D 74 87 70               LEA ESI,[EDI + EAX*0x4 + 0x70]
00508D49  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00508d4c:
00508D4C  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
00508D52  6A 00                     PUSH 0x0
00508D54  52                        PUSH EDX
00508D55  E8 46 26 20 00            CALL 0x0070b3a0
00508D5A  50                        PUSH EAX
00508D5B  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00508D61  6A 01                     PUSH 0x1
00508D63  6A 5F                     PUSH 0x5f
00508D65  56                        PUSH ESI
00508D66  50                        PUSH EAX
00508D67  E8 BD A4 EF FF            CALL 0x00403229
00508D6C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00508D6F  83 C4 1C                  ADD ESP,0x1c
00508D72  83 C6 04                  ADD ESI,0x4
00508D75  48                        DEC EAX
00508D76  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00508D79  75 D1                     JNZ 0x00508d4c
LAB_00508d7b:
00508D7B  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00508D81  85 C0                     TEST EAX,EAX
00508D83  7C 19                     JL 0x00508d9e
00508D85  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
00508D8B  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
00508D8E  51                        PUSH ECX
00508D8F  52                        PUSH EDX
00508D90  6A FF                     PUSH -0x1
00508D92  50                        PUSH EAX
00508D93  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00508D98  50                        PUSH EAX
00508D99  E8 A2 A8 1A 00            CALL 0x006b3640
LAB_00508d9e:
00508D9E  66 8B 83 34 0C 00 00      MOV AX,word ptr [EBX + 0xc34]
00508DA5  66 3B 45 C7               CMP AX,word ptr [EBP + -0x39]
00508DA9  0F 84 E3 03 00 00         JZ 0x00509192
00508DAF  25 FF FF 00 00            AND EAX,0xffff
00508DB4  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
00508DB8  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00508DBB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00508DC0  C1 E1 03                  SHL ECX,0x3
00508DC3  F7 E1                     MUL ECX
00508DC5  C1 EA 07                  SHR EDX,0x7
00508DC8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00508DCB  74 41                     JZ 0x00508e0e
00508DCD  33 F6                     XOR ESI,ESI
LAB_00508dcf:
00508DCF  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
00508DD5  6A 02                     PUSH 0x2
00508DD7  52                        PUSH EDX
00508DD8  E8 C3 25 20 00            CALL 0x0070b3a0
00508DDD  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00508DE3  50                        PUSH EAX
00508DE4  6A 01                     PUSH 0x1
00508DE6  8D 44 B7 0B               LEA EAX,[EDI + ESI*0x4 + 0xb]
00508DEA  6A 76                     PUSH 0x76
00508DEC  50                        PUSH EAX
00508DED  51                        PUSH ECX
00508DEE  E8 36 A4 EF FF            CALL 0x00403229
00508DF3  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
00508DF6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00508DF9  83 C4 1C                  ADD ESP,0x1c
00508DFC  FE C2                     INC DL
00508DFE  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
00508E01  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00508E04  81 E6 FF 00 00 00         AND ESI,0xff
00508E0A  3B F0                     CMP ESI,EAX
00508E0C  72 C1                     JC 0x00508dcf
LAB_00508e0e:
00508E0E  80 7D FC 28               CMP byte ptr [EBP + -0x4],0x28
00508E12  73 3C                     JNC 0x00508e50
00508E14  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00508E17  25 FF 00 00 00            AND EAX,0xff
00508E1C  8D 74 87 0B               LEA ESI,[EDI + EAX*0x4 + 0xb]
00508E20  BF 28 00 00 00            MOV EDI,0x28
00508E25  2B F8                     SUB EDI,EAX
LAB_00508e27:
00508E27  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
00508E2D  6A 00                     PUSH 0x0
00508E2F  52                        PUSH EDX
00508E30  E8 6B 25 20 00            CALL 0x0070b3a0
00508E35  50                        PUSH EAX
00508E36  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00508E3C  6A 01                     PUSH 0x1
00508E3E  6A 76                     PUSH 0x76
00508E40  56                        PUSH ESI
00508E41  50                        PUSH EAX
00508E42  E8 E2 A3 EF FF            CALL 0x00403229
00508E47  83 C4 1C                  ADD ESP,0x1c
00508E4A  83 C6 04                  ADD ESI,0x4
00508E4D  4F                        DEC EDI
00508E4E  75 D7                     JNZ 0x00508e27
LAB_00508e50:
00508E50  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00508E56  85 C0                     TEST EAX,EAX
00508E58  0F 8C 34 03 00 00         JL 0x00509192
00508E5E  E9 16 03 00 00            JMP 0x00509179
switchD_0050858c::caseD_34:
00508E63  8B 8B F9 09 00 00         MOV ECX,dword ptr [EBX + 0x9f9]
00508E69  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00508E6F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00508E72  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00508E75  2B C7                     SUB EAX,EDI
00508E77  8B CB                     MOV ECX,EBX
00508E79  99                        CDQ
00508E7A  2B C2                     SUB EAX,EDX
00508E7C  D1 F8                     SAR EAX,0x1
00508E7E  50                        PUSH EAX
00508E7F  E8 A2 A6 EF FF            CALL 0x00403526
00508E84  8D 83 2E 0A 00 00         LEA EAX,[EBX + 0xa2e]
00508E8A  33 FF                     XOR EDI,EDI
00508E8C  8D B3 15 0A 00 00         LEA ESI,[EBX + 0xa15]
00508E92  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00508e95:
00508E95  83 3E 00                  CMP dword ptr [ESI],0x0
00508E98  74 7A                     JZ 0x00508f14
00508E9A  80 3D 4E 87 80 00 01      CMP byte ptr [0x0080874e],0x1
00508EA1  75 11                     JNZ 0x00508eb4
00508EA3  8A 93 D4 09 00 00         MOV DL,byte ptr [EBX + 0x9d4]
00508EA9  33 C0                     XOR EAX,EAX
00508EAB  80 FA 01                  CMP DL,0x1
00508EAE  0F 95 C0                  SETNZ AL
00508EB1  40                        INC EAX
00508EB2  EB 0F                     JMP 0x00508ec3
LAB_00508eb4:
00508EB4  8A 83 D4 09 00 00         MOV AL,byte ptr [EBX + 0x9d4]
00508EBA  FE C8                     DEC AL
00508EBC  F6 D8                     NEG AL
00508EBE  1B C0                     SBB EAX,EAX
00508EC0  83 C0 02                  ADD EAX,0x2
LAB_00508ec3:
00508EC3  57                        PUSH EDI
00508EC4  50                        PUSH EAX
00508EC5  E8 F3 A5 EF FF            CALL 0x004034bd
00508ECA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00508ECD  83 C4 08                  ADD ESP,0x8
00508ED0  89 01                     MOV dword ptr [ECX],EAX
00508ED2  8A 93 FC 0B 00 00         MOV DL,byte ptr [EBX + 0xbfc]
00508ED8  3A 55 8F                  CMP DL,byte ptr [EBP + -0x71]
00508EDB  74 20                     JZ 0x00508efd
00508EDD  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00508EE4  8A 8B FC 0B 00 00         MOV CL,byte ptr [EBX + 0xbfc]
00508EEA  33 C0                     XOR EAX,EAX
00508EEC  84 C9                     TEST CL,CL
00508EEE  0F 95 C0                  SETNZ AL
00508EF1  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
00508EF4  8B 16                     MOV EDX,dword ptr [ESI]
00508EF6  8D 4B 18                  LEA ECX,[EBX + 0x18]
00508EF9  51                        PUSH ECX
00508EFA  52                        PUSH EDX
00508EFB  EB 0E                     JMP 0x00508f0b
LAB_00508efd:
00508EFD  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
00508F04  8B 0E                     MOV ECX,dword ptr [ESI]
00508F06  8D 43 18                  LEA EAX,[EBX + 0x18]
00508F09  50                        PUSH EAX
00508F0A  51                        PUSH ECX
LAB_00508f0b:
00508F0B  6A 02                     PUSH 0x2
00508F0D  8B CB                     MOV ECX,EBX
00508F0F  E8 6C D1 1D 00            CALL 0x006e6080
LAB_00508f14:
00508F14  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00508F17  47                        INC EDI
00508F18  83 C2 27                  ADD EDX,0x27
00508F1B  83 C6 04                  ADD ESI,0x4
00508F1E  83 FF 06                  CMP EDI,0x6
00508F21  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00508F24  0F 8C 6B FF FF FF         JL 0x00508e95
00508F2A  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00508F30  85 C0                     TEST EAX,EAX
00508F32  0F 8C 5A 02 00 00         JL 0x00509192
00508F38  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
00508F3E  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
00508F41  52                        PUSH EDX
00508F42  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00508F48  51                        PUSH ECX
00508F49  6A FF                     PUSH -0x1
00508F4B  50                        PUSH EAX
00508F4C  52                        PUSH EDX
00508F4D  E9 3B 02 00 00            JMP 0x0050918d
switchD_0050858c::caseD_50:
00508F52  B9 03 00 00 00            MOV ECX,0x3
00508F57  8D 7D A4                  LEA EDI,[EBP + -0x5c]
00508F5A  8D B3 11 0C 00 00         LEA ESI,[EBX + 0xc11]
00508F60  33 C0                     XOR EAX,EAX
00508F62  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
00508F65  0F 84 27 02 00 00         JZ 0x00509192
00508F6B  8D B3 15 0A 00 00         LEA ESI,[EBX + 0xa15]
00508F71  BF 06 00 00 00            MOV EDI,0x6
LAB_00508f76:
00508F76  83 3E 00                  CMP dword ptr [ESI],0x0
00508F79  74 44                     JZ 0x00508fbf
00508F7B  8A 4D 8F                  MOV CL,byte ptr [EBP + -0x71]
00508F7E  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
00508F84  3A C1                     CMP AL,CL
00508F86  74 20                     JZ 0x00508fa8
00508F88  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00508F8F  8A 83 FC 0B 00 00         MOV AL,byte ptr [EBX + 0xbfc]
00508F95  33 D2                     XOR EDX,EDX
00508F97  84 C0                     TEST AL,AL
00508F99  0F 95 C2                  SETNZ DL
00508F9C  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
00508F9F  8B 0E                     MOV ECX,dword ptr [ESI]
00508FA1  8D 43 18                  LEA EAX,[EBX + 0x18]
00508FA4  50                        PUSH EAX
00508FA5  51                        PUSH ECX
00508FA6  EB 0E                     JMP 0x00508fb6
LAB_00508fa8:
00508FA8  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
00508FAF  8B 06                     MOV EAX,dword ptr [ESI]
00508FB1  8D 53 18                  LEA EDX,[EBX + 0x18]
00508FB4  52                        PUSH EDX
00508FB5  50                        PUSH EAX
LAB_00508fb6:
00508FB6  6A 02                     PUSH 0x2
00508FB8  8B CB                     MOV ECX,EBX
00508FBA  E8 C1 D0 1D 00            CALL 0x006e6080
LAB_00508fbf:
00508FBF  83 C6 04                  ADD ESI,0x4
00508FC2  4F                        DEC EDI
00508FC3  75 B1                     JNZ 0x00508f76
00508FC5  E9 C8 01 00 00            JMP 0x00509192
switchD_0050858c::caseD_3c:
00508FCA  8A 83 3C 0C 00 00         MOV AL,byte ptr [EBX + 0xc3c]
00508FD0  8A 4D CF                  MOV CL,byte ptr [EBP + -0x31]
00508FD3  3A C8                     CMP CL,AL
00508FD5  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00508FD8  74 1E                     JZ 0x00508ff8
00508FDA  6A 01                     PUSH 0x1
00508FDC  8B CB                     MOV ECX,EBX
00508FDE  E8 DC B6 EF FF            CALL 0x004046bf
00508FE3  6A 01                     PUSH 0x1
00508FE5  8B CB                     MOV ECX,EBX
00508FE7  E8 97 9D EF FF            CALL 0x00402d83
00508FEC  8B CB                     MOV ECX,EBX
00508FEE  E8 AD CB EF FF            CALL 0x00405ba0
00508FF3  E9 9A 01 00 00            JMP 0x00509192
LAB_00508ff8:
00508FF8  8B BB ED 09 00 00         MOV EDI,dword ptr [EBX + 0x9ed]
00508FFE  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00509004  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00509007  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0050900A  2B C2                     SUB EAX,EDX
0050900C  99                        CDQ
0050900D  2B C2                     SUB EAX,EDX
0050900F  8B F0                     MOV ESI,EAX
00509011  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00509014  25 FF 00 00 00            AND EAX,0xff
00509019  D1 FE                     SAR ESI,0x1
0050901B  48                        DEC EAX
0050901C  0F 84 81 00 00 00         JZ 0x005090a3
00509022  48                        DEC EAX
00509023  0F 85 46 01 00 00         JNZ 0x0050916f
00509029  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0050902C  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0050902F  83 EA 21                  SUB EDX,0x21
00509032  52                        PUSH EDX
00509033  50                        PUSH EAX
00509034  6A 21                     PUSH 0x21
00509036  6A 00                     PUSH 0x0
00509038  6A 00                     PUSH 0x0
0050903A  57                        PUSH EDI
0050903B  6A 71                     PUSH 0x71
0050903D  56                        PUSH ESI
0050903E  6A 00                     PUSH 0x0
00509040  51                        PUSH ECX
00509041  E8 AA C5 1A 00            CALL 0x006b55f0
00509046  8B 83 3D 0C 00 00         MOV EAX,dword ptr [EBX + 0xc3d]
0050904C  50                        PUSH EAX
0050904D  68 E4 1A 7C 00            PUSH 0x7c1ae4
00509052  68 3A F3 80 00            PUSH 0x80f33a
00509057  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050905D  8B 83 ED 09 00 00         MOV EAX,dword ptr [EBX + 0x9ed]
00509063  83 C4 0C                  ADD ESP,0xc
00509066  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00509069  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0050906C  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00509072  83 E9 21                  SUB ECX,0x21
00509075  51                        PUSH ECX
00509076  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
0050907C  52                        PUSH EDX
0050907D  6A 71                     PUSH 0x71
0050907F  56                        PUSH ESI
00509080  6A 00                     PUSH 0x0
00509082  50                        PUSH EAX
00509083  E8 08 7A 20 00            CALL 0x00710a90
00509088  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
0050908E  6A 00                     PUSH 0x0
00509090  6A FF                     PUSH -0x1
00509092  6A FF                     PUSH -0x1
00509094  68 3A F3 80 00            PUSH 0x80f33a
00509099  E8 22 89 20 00            CALL 0x007119c0
0050909E  E9 CC 00 00 00            JMP 0x0050916f
LAB_005090a3:
005090A3  6A 1B                     PUSH 0x1b
005090A5  6A 4C                     PUSH 0x4c
005090A7  6A 15                     PUSH 0x15
005090A9  6A 39                     PUSH 0x39
005090AB  6A 00                     PUSH 0x0
005090AD  8D 46 39                  LEA EAX,[ESI + 0x39]
005090B0  57                        PUSH EDI
005090B1  6A 65                     PUSH 0x65
005090B3  50                        PUSH EAX
005090B4  6A 00                     PUSH 0x0
005090B6  51                        PUSH ECX
005090B7  E8 34 C5 1A 00            CALL 0x006b55f0
005090BC  8A 8B 3D 0C 00 00         MOV CL,byte ptr [EBX + 0xc3d]
005090C2  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
005090C8  68 14 27 00 00            PUSH 0x2714
005090CD  51                        PUSH ECX
005090CE  8D 46 39                  LEA EAX,[ESI + 0x39]
005090D1  6A 65                     PUSH 0x65
005090D3  50                        PUSH EAX
005090D4  52                        PUSH EDX
005090D5  8B CB                     MOV ECX,EBX
005090D7  E8 A1 BB EF FF            CALL 0x00404c7d
005090DC  8B 83 3D 0C 00 00         MOV EAX,dword ptr [EBX + 0xc3d]
005090E2  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
005090E9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005090EC  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005090F1  C1 E1 03                  SHL ECX,0x3
005090F4  F7 E1                     MUL ECX
005090F6  C1 EA 05                  SHR EDX,0x5
005090F9  74 38                     JZ 0x00509133
005090FB  8D 7E 0B                  LEA EDI,[ESI + 0xb]
005090FE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00509101  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_00509104:
00509104  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050910A  6A 03                     PUSH 0x3
0050910C  52                        PUSH EDX
0050910D  E8 8E 22 20 00            CALL 0x0070b3a0
00509112  50                        PUSH EAX
00509113  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00509119  6A 01                     PUSH 0x1
0050911B  6A 5C                     PUSH 0x5c
0050911D  57                        PUSH EDI
0050911E  50                        PUSH EAX
0050911F  E8 05 A1 EF FF            CALL 0x00403229
00509124  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00509127  83 C4 1C                  ADD ESP,0x1c
0050912A  83 C7 04                  ADD EDI,0x4
0050912D  48                        DEC EAX
0050912E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00509131  75 D1                     JNZ 0x00509104
LAB_00509133:
00509133  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00509136  83 F8 28                  CMP EAX,0x28
00509139  73 34                     JNC 0x0050916f
0050913B  BF 28 00 00 00            MOV EDI,0x28
00509140  8D 74 86 0B               LEA ESI,[ESI + EAX*0x4 + 0xb]
00509144  2B F8                     SUB EDI,EAX
LAB_00509146:
00509146  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050914C  6A 00                     PUSH 0x0
0050914E  51                        PUSH ECX
0050914F  E8 4C 22 20 00            CALL 0x0070b3a0
00509154  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050915A  50                        PUSH EAX
0050915B  6A 01                     PUSH 0x1
0050915D  6A 5C                     PUSH 0x5c
0050915F  56                        PUSH ESI
00509160  52                        PUSH EDX
00509161  E8 C3 A0 EF FF            CALL 0x00403229
00509166  83 C4 1C                  ADD ESP,0x1c
00509169  83 C6 04                  ADD ESI,0x4
0050916C  4F                        DEC EDI
0050916D  75 D7                     JNZ 0x00509146
LAB_0050916f:
0050916F  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
00509175  85 C0                     TEST EAX,EAX
00509177  7C 19                     JL 0x00509192
LAB_00509179:
00509179  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050917F  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
00509182  51                        PUSH ECX
00509183  52                        PUSH EDX
00509184  6A FF                     PUSH -0x1
00509186  50                        PUSH EAX
00509187  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050918C  50                        PUSH EAX
CPanelTy::Update4PanelWB::cf_common_exit_0050918D:
0050918D  E8 AE A4 1A 00            CALL 0x006b3640
CPanelTy::Update4PanelWB::cf_common_exit_00509192:
00509192  8B 8B 4D 0C 00 00         MOV ECX,dword ptr [EBX + 0xc4d]
00509198  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0050919B  3B C8                     CMP ECX,EAX
0050919D  74 33                     JZ 0x005091d2
0050919F  8B CB                     MOV ECX,EBX
005091A1  E8 0F 88 EF FF            CALL 0x004019b5
005091A6  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
005091AC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005091B2  5F                        POP EDI
005091B3  5E                        POP ESI
005091B4  5B                        POP EBX
005091B5  8B E5                     MOV ESP,EBP
005091B7  5D                        POP EBP
005091B8  C3                        RET
CPanelTy::Update4PanelWB::cf_common_exit_005091B9:
005091B9  6A 01                     PUSH 0x1
005091BB  8B CB                     MOV ECX,EBX
005091BD  E8 FD B4 EF FF            CALL 0x004046bf
005091C2  6A 01                     PUSH 0x1
005091C4  8B CB                     MOV ECX,EBX
005091C6  E8 B8 9B EF FF            CALL 0x00402d83
005091CB  8B CB                     MOV ECX,EBX
005091CD  E8 CE C9 EF FF            CALL 0x00405ba0
switchD_00508349::caseD_df:
005091D2  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
005091D8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005091DE  5F                        POP EDI
005091DF  5E                        POP ESI
005091E0  5B                        POP EBX
005091E1  8B E5                     MOV ESP,EBP
005091E3  5D                        POP EBP
005091E4  C3                        RET
LAB_005091e5:
005091E5  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
005091EB  68 78 28 7C 00            PUSH 0x7c2878
005091F0  68 CC 4C 7A 00            PUSH 0x7a4ccc
005091F5  56                        PUSH ESI
005091F6  6A 00                     PUSH 0x0
005091F8  68 97 04 00 00            PUSH 0x497
005091FD  68 00 27 7C 00            PUSH 0x7c2700
00509202  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00509207  E8 C4 42 1A 00            CALL 0x006ad4d0
0050920C  83 C4 18                  ADD ESP,0x18
0050920F  85 C0                     TEST EAX,EAX
00509211  74 01                     JZ 0x00509214
00509213  CC                        INT3
LAB_00509214:
00509214  68 97 04 00 00            PUSH 0x497
00509219  68 00 27 7C 00            PUSH 0x7c2700
0050921E  6A 00                     PUSH 0x0
00509220  56                        PUSH ESI
00509221  E8 1A CC 19 00            CALL 0x006a5e40
00509226  5F                        POP EDI
00509227  5E                        POP ESI
00509228  5B                        POP EBX
00509229  8B E5                     MOV ESP,EBP
0050922B  5D                        POP EBP
0050922C  C3                        RET
