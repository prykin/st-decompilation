TrackbarClassTy::GetMessage:
00725020  55                        PUSH EBP
00725021  8B EC                     MOV EBP,ESP
00725023  83 EC 78                  SUB ESP,0x78
00725026  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0072502B  53                        PUSH EBX
0072502C  56                        PUSH ESI
0072502D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00725030  33 F6                     XOR ESI,ESI
00725032  57                        PUSH EDI
00725033  8D 55 8C                  LEA EDX,[EBP + -0x74]
00725036  8D 4D 88                  LEA ECX,[EBP + -0x78]
00725039  56                        PUSH ESI
0072503A  52                        PUSH EDX
0072503B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0072503E  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
00725041  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725047  E8 A4 87 00 00            CALL 0x0072d7f0
0072504C  83 C4 08                  ADD ESP,0x8
0072504F  3B C6                     CMP EAX,ESI
00725051  0F 85 E4 03 00 00         JNZ 0x0072543b
00725057  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0072505A  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0072505D  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00725060  83 C0 FE                  ADD EAX,-0x2
00725063  83 F8 26                  CMP EAX,0x26
00725066  0F 87 B3 01 00 00         JA 0x0072521f
0072506C  33 C9                     XOR ECX,ECX
0072506E  8A 88 AC 54 72 00         MOV CL,byte ptr [EAX + 0x7254ac]
switchD_00725074::switchD:
00725074  FF 24 8D 8C 54 72 00      JMP dword ptr [ECX*0x4 + 0x72548c]
switchD_00725074::caseD_2:
0072507B  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0072507E  3B C6                     CMP EAX,ESI
00725080  0F 84 87 01 00 00         JZ 0x0072520d
00725086  8B 10                     MOV EDX,dword ptr [EAX]
00725088  8D 70 28                  LEA ESI,[EAX + 0x28]
0072508B  89 53 20                  MOV dword ptr [EBX + 0x20],EDX
0072508E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00725091  89 8B 88 01 00 00         MOV dword ptr [EBX + 0x188],ECX
00725097  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0072509A  89 53 1C                  MOV dword ptr [EBX + 0x1c],EDX
0072509D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007250A0  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
007250A3  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
007250A6  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
007250A9  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
007250AC  89 4B 2C                  MOV dword ptr [EBX + 0x2c],ECX
007250AF  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
007250B2  89 53 30                  MOV dword ptr [EBX + 0x30],EDX
007250B5  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007250B8  89 8B 3C 01 00 00         MOV dword ptr [EBX + 0x13c],ECX
007250BE  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
007250C1  89 93 40 01 00 00         MOV dword ptr [EBX + 0x140],EDX
007250C7  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
007250CA  89 8B 44 01 00 00         MOV dword ptr [EBX + 0x144],ECX
007250D0  8D BB 48 01 00 00         LEA EDI,[EBX + 0x148]
007250D6  B9 08 00 00 00            MOV ECX,0x8
007250DB  F3 A5                     MOVSD.REP ES:EDI,ESI
007250DD  8D 70 48                  LEA ESI,[EAX + 0x48]
007250E0  8D BB 68 01 00 00         LEA EDI,[EBX + 0x168]
007250E6  B9 08 00 00 00            MOV ECX,0x8
007250EB  89 9B 64 01 00 00         MOV dword ptr [EBX + 0x164],EBX
007250F1  F3 A5                     MOVSD.REP ES:EDI,ESI
007250F3  8D 70 68                  LEA ESI,[EAX + 0x68]
007250F6  8D 7B 3C                  LEA EDI,[EBX + 0x3c]
007250F9  B9 08 00 00 00            MOV ECX,0x8
007250FE  89 9B 84 01 00 00         MOV dword ptr [EBX + 0x184],EBX
00725104  F3 A5                     MOVSD.REP ES:EDI,ESI
00725106  89 5B 58                  MOV dword ptr [EBX + 0x58],EBX
00725109  8B 90 88 00 00 00         MOV EDX,dword ptr [EAX + 0x88]
0072510F  89 93 8C 01 00 00         MOV dword ptr [EBX + 0x18c],EDX
00725115  8B 88 8C 00 00 00         MOV ECX,dword ptr [EAX + 0x8c]
0072511B  89 8B 90 01 00 00         MOV dword ptr [EBX + 0x190],ECX
00725121  8B B0 90 00 00 00         MOV ESI,dword ptr [EAX + 0x90]
00725127  33 D2                     XOR EDX,EDX
00725129  85 F6                     TEST ESI,ESI
0072512B  0F 94 C2                  SETZ DL
0072512E  89 53 34                  MOV dword ptr [EBX + 0x34],EDX
00725131  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
00725137  33 C9                     XOR ECX,ECX
00725139  85 D2                     TEST EDX,EDX
0072513B  0F 94 C1                  SETZ CL
0072513E  89 4B 38                  MOV dword ptr [EBX + 0x38],ECX
00725141  8B CB                     MOV ECX,EBX
00725143  E8 48 FC FF FF            CALL 0x00724d90
00725148  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0072514B  E9 CF 00 00 00            JMP 0x0072521f
switchD_00725074::caseD_8:
00725150  F7 43 1C 00 00 00 70      TEST dword ptr [EBX + 0x1c],0x70000000
00725157  0F 84 C2 00 00 00         JZ 0x0072521f
0072515D  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
00725160  8D 45 CC                  LEA EAX,[EBP + -0x34]
00725163  50                        PUSH EAX
00725164  6A 01                     PUSH 0x1
00725166  6A 03                     PUSH 0x3
00725168  8B CB                     MOV ECX,EBX
0072516A  C7 45 DC 13 00 00 00      MOV dword ptr [EBP + -0x24],0x13
00725171  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00725174  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00725177  E8 84 0E FC FF            CALL 0x006e6000
0072517C  E9 88 00 00 00            JMP 0x00725209
switchD_00725074::caseD_9:
00725181  F7 43 1C 00 00 00 70      TEST dword ptr [EBX + 0x1c],0x70000000
00725188  0F 85 91 00 00 00         JNZ 0x0072521f
0072518E  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00725191  8D 55 CC                  LEA EDX,[EBP + -0x34]
00725194  52                        PUSH EDX
00725195  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00725198  6A 01                     PUSH 0x1
0072519A  6A 03                     PUSH 0x3
0072519C  8B CB                     MOV ECX,EBX
0072519E  C7 45 DC 14 00 00 00      MOV dword ptr [EBP + -0x24],0x14
007251A5  E8 56 0E FC FF            CALL 0x006e6000
007251AA  EB 73                     JMP 0x0072521f
switchD_00725074::caseD_20:
007251AC  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
007251AF  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
007251B2  8B D0                     MOV EDX,EAX
007251B4  81 E2 FF FF FF 00         AND EDX,0xffffff
007251BA  3B D1                     CMP EDX,ECX
007251BC  74 61                     JZ 0x0072521f
007251BE  25 00 00 00 FF            AND EAX,0xff000000
007251C3  89 B3 34 01 00 00         MOV dword ptr [EBX + 0x134],ESI
007251C9  0B C1                     OR EAX,ECX
007251CB  8B CB                     MOV ECX,EBX
007251CD  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
007251D0  8B 03                     MOV EAX,dword ptr [EBX]
007251D2  FF 50 04                  CALL dword ptr [EAX + 0x4]
007251D5  EB 32                     JMP 0x00725209
switchD_00725074::caseD_28:
007251D7  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
007251DA  3B C6                     CMP EAX,ESI
007251DC  89 83 8C 01 00 00         MOV dword ptr [EBX + 0x18c],EAX
007251E2  7D 06                     JGE 0x007251ea
007251E4  89 B3 8C 01 00 00         MOV dword ptr [EBX + 0x18c],ESI
LAB_007251ea:
007251EA  89 B3 90 01 00 00         MOV dword ptr [EBX + 0x190],ESI
007251F0  EB 09                     JMP 0x007251fb
switchD_00725074::caseD_22:
007251F2  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
007251F5  89 83 90 01 00 00         MOV dword ptr [EBX + 0x190],EAX
LAB_007251fb:
007251FB  8B CB                     MOV ECX,EBX
007251FD  E8 8E FB FF FF            CALL 0x00724d90
00725202  8B 13                     MOV EDX,dword ptr [EBX]
00725204  8B CB                     MOV ECX,EBX
00725206  FF 52 04                  CALL dword ptr [EDX + 0x4]
LAB_00725209:
00725209  85 C0                     TEST EAX,EAX
0072520B  74 12                     JZ 0x0072521f
LAB_0072520d:
0072520D  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
00725214  EB 09                     JMP 0x0072521f
switchD_00725074::caseD_26:
00725216  8B 83 90 01 00 00         MOV EAX,dword ptr [EBX + 0x190]
0072521C  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
switchD_00725074::caseD_3:
0072521F  83 7B 1C 01               CMP dword ptr [EBX + 0x1c],0x1
00725223  0F 85 B9 01 00 00         JNZ 0x007253e2
00725229  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0072522C  83 C0 D5                  ADD EAX,-0x2b
0072522F  83 F8 37                  CMP EAX,0x37
00725232  0F 87 AA 01 00 00         JA 0x007253e2
00725238  33 C9                     XOR ECX,ECX
0072523A  8A 88 E8 54 72 00         MOV CL,byte ptr [EAX + 0x7254e8]
switchD_00725240::switchD:
00725240  FF 24 8D D4 54 72 00      JMP dword ptr [ECX*0x4 + 0x7254d4]
switchD_00725240::caseD_60:
00725247  33 C9                     XOR ECX,ECX
00725249  33 C0                     XOR EAX,EAX
0072524B  66 8B 4F 1A               MOV CX,word ptr [EDI + 0x1a]
0072524F  66 8B 47 18               MOV AX,word ptr [EDI + 0x18]
00725253  51                        PUSH ECX
00725254  50                        PUSH EAX
00725255  8B CB                     MOV ECX,EBX
00725257  E8 44 FD FF FF            CALL 0x00724fa0
0072525C  89 83 38 01 00 00         MOV dword ptr [EBX + 0x138],EAX
00725262  8A 47 14                  MOV AL,byte ptr [EDI + 0x14]
00725265  A8 01                     TEST AL,0x1
00725267  0F 84 75 01 00 00         JZ 0x007253e2
0072526D  8B 83 34 01 00 00         MOV EAX,dword ptr [EBX + 0x134]
00725273  85 C0                     TEST EAX,EAX
00725275  0F 84 67 01 00 00         JZ 0x007253e2
switchD_00725240::caseD_61:
0072527B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072527E  33 F6                     XOR ESI,ESI
00725280  66 8B 77 18               MOV SI,word ptr [EDI + 0x18]
00725284  33 FF                     XOR EDI,EDI
00725286  66 8B 7A 1A               MOV DI,word ptr [EDX + 0x1a]
0072528A  8B CB                     MOV ECX,EBX
0072528C  57                        PUSH EDI
0072528D  56                        PUSH ESI
0072528E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00725291  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00725294  E8 07 FD FF FF            CALL 0x00724fa0
00725299  85 C0                     TEST EAX,EAX
0072529B  75 0E                     JNZ 0x007252ab
0072529D  8B 83 34 01 00 00         MOV EAX,dword ptr [EBX + 0x134]
007252A3  85 C0                     TEST EAX,EAX
007252A5  0F 84 34 01 00 00         JZ 0x007253df
LAB_007252ab:
007252AB  8B 83 34 01 00 00         MOV EAX,dword ptr [EBX + 0x134]
007252B1  85 C0                     TEST EAX,EAX
007252B3  75 11                     JNZ 0x007252c6
007252B5  57                        PUSH EDI
007252B6  56                        PUSH ESI
007252B7  8B CB                     MOV ECX,EBX
007252B9  E8 42 FC FF FF            CALL 0x00724f00
007252BE  85 C0                     TEST EAX,EAX
007252C0  0F 85 E3 00 00 00         JNZ 0x007253a9
LAB_007252c6:
007252C6  8B 83 90 01 00 00         MOV EAX,dword ptr [EBX + 0x190]
007252CC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007252CF  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
007252D2  83 F8 01                  CMP EAX,0x1
007252D5  8B 83 3C 01 00 00         MOV EAX,dword ptr [EBX + 0x13c]
007252DB  99                        CDQ
007252DC  75 49                     JNZ 0x00725327
007252DE  2B C2                     SUB EAX,EDX
007252E0  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
007252E3  8B C8                     MOV ECX,EAX
007252E5  8B C7                     MOV EAX,EDI
007252E7  D1 F9                     SAR ECX,0x1
007252E9  2B C1                     SUB EAX,ECX
007252EB  3B C2                     CMP EAX,EDX
007252ED  7D 0C                     JGE 0x007252fb
007252EF  8B C2                     MOV EAX,EDX
007252F1  2B C2                     SUB EAX,EDX
007252F3  89 83 98 01 00 00         MOV dword ptr [EBX + 0x198],EAX
007252F9  EB 6B                     JMP 0x00725366
LAB_007252fb:
007252FB  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
007252FE  8B B3 3C 01 00 00         MOV ESI,dword ptr [EBX + 0x13c]
00725304  03 F0                     ADD ESI,EAX
00725306  8D 3C 11                  LEA EDI,[ECX + EDX*0x1]
00725309  3B F7                     CMP ESI,EDI
0072530B  7E 0A                     JLE 0x00725317
0072530D  2B 8B 3C 01 00 00         SUB ECX,dword ptr [EBX + 0x13c]
00725313  03 CA                     ADD ECX,EDX
00725315  8B C1                     MOV EAX,ECX
LAB_00725317:
00725317  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0072531A  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0072531D  2B C2                     SUB EAX,EDX
0072531F  89 83 98 01 00 00         MOV dword ptr [EBX + 0x198],EAX
00725325  EB 3F                     JMP 0x00725366
LAB_00725327:
00725327  2B C2                     SUB EAX,EDX
00725329  8B D0                     MOV EDX,EAX
0072532B  8B C6                     MOV EAX,ESI
0072532D  D1 FA                     SAR EDX,0x1
0072532F  2B C2                     SUB EAX,EDX
00725331  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00725334  3B C2                     CMP EAX,EDX
00725336  7D 04                     JGE 0x0072533c
00725338  8B C2                     MOV EAX,EDX
0072533A  EB 22                     JMP 0x0072535e
LAB_0072533c:
0072533C  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
0072533F  8B B3 3C 01 00 00         MOV ESI,dword ptr [EBX + 0x13c]
00725345  03 F0                     ADD ESI,EAX
00725347  8D 3C 11                  LEA EDI,[ECX + EDX*0x1]
0072534A  3B F7                     CMP ESI,EDI
0072534C  7E 0A                     JLE 0x00725358
0072534E  2B 8B 3C 01 00 00         SUB ECX,dword ptr [EBX + 0x13c]
00725354  03 CA                     ADD ECX,EDX
00725356  8B C1                     MOV EAX,ECX
LAB_00725358:
00725358  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0072535B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0072535e:
0072535E  2B C2                     SUB EAX,EDX
00725360  89 83 94 01 00 00         MOV dword ptr [EBX + 0x194],EAX
LAB_00725366:
00725366  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
00725369  2B F9                     SUB EDI,ECX
0072536B  8B CB                     MOV ECX,EBX
0072536D  57                        PUSH EDI
0072536E  8B 7B 24                  MOV EDI,dword ptr [EBX + 0x24]
00725371  2B F7                     SUB ESI,EDI
00725373  56                        PUSH ESI
00725374  E8 A7 FA FF FF            CALL 0x00724e20
00725379  8B 83 90 01 00 00         MOV EAX,dword ptr [EBX + 0x190]
0072537F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00725382  3B C1                     CMP EAX,ECX
00725384  74 18                     JZ 0x0072539e
00725386  89 83 5C 01 00 00         MOV dword ptr [EBX + 0x15c],EAX
0072538C  8D 83 48 01 00 00         LEA EAX,[EBX + 0x148]
00725392  50                        PUSH EAX
00725393  8B CB                     MOV ECX,EBX
00725395  E8 86 0C FC FF            CALL 0x006e6020
0072539A  85 C0                     TEST EAX,EAX
0072539C  75 3A                     JNZ 0x007253d8
LAB_0072539e:
0072539E  8B 13                     MOV EDX,dword ptr [EBX]
007253A0  8B CB                     MOV ECX,EBX
007253A2  FF 52 04                  CALL dword ptr [EDX + 0x4]
007253A5  85 C0                     TEST EAX,EAX
007253A7  75 2F                     JNZ 0x007253d8
LAB_007253a9:
007253A9  C7 83 34 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x134],0x1
007253B3  EB 2A                     JMP 0x007253df
switchD_00725240::caseD_62:
007253B5  8B 83 34 01 00 00         MOV EAX,dword ptr [EBX + 0x134]
007253BB  85 C0                     TEST EAX,EAX
007253BD  74 23                     JZ 0x007253e2
007253BF  C7 83 34 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x134],0x0
007253C9  EB 17                     JMP 0x007253e2
switchD_00725240::caseD_2b:
007253CB  66 8B 83 38 01 00 00      MOV AX,word ptr [EBX + 0x138]
007253D2  66 89 47 14               MOV word ptr [EDI + 0x14],AX
007253D6  EB 0A                     JMP 0x007253e2
LAB_007253d8:
007253D8  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
LAB_007253df:
007253DF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
switchD_00725240::caseD_2c:
007253E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007253E5  85 C0                     TEST EAX,EAX
007253E7  74 17                     JZ 0x00725400
007253E9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007253EF  68 C5 00 00 00            PUSH 0xc5
007253F4  68 20 0C 7F 00            PUSH 0x7f0c20
007253F9  51                        PUSH ECX
007253FA  50                        PUSH EAX
007253FB  E8 40 0A F8 FF            CALL 0x006a5e40
LAB_00725400:
00725400  57                        PUSH EDI
00725401  8B CB                     MOV ECX,EBX
00725403  E8 78 63 00 00            CALL 0x0072b780
00725408  8B F0                     MOV ESI,EAX
0072540A  85 F6                     TEST ESI,ESI
0072540C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0072540F  74 17                     JZ 0x00725428
00725411  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00725417  68 C7 00 00 00            PUSH 0xc7
0072541C  68 20 0C 7F 00            PUSH 0x7f0c20
00725421  52                        PUSH EDX
00725422  56                        PUSH ESI
00725423  E8 18 0A F8 FF            CALL 0x006a5e40
LAB_00725428:
00725428  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
0072542B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00725430  8B C6                     MOV EAX,ESI
00725432  5F                        POP EDI
00725433  5E                        POP ESI
00725434  5B                        POP EBX
00725435  8B E5                     MOV ESP,EBP
00725437  5D                        POP EBP
00725438  C2 04 00                  RET 0x4
LAB_0072543b:
0072543B  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0072543E  68 FC 0B 7F 00            PUSH 0x7f0bfc
00725443  68 CC 4C 7A 00            PUSH 0x7a4ccc
00725448  50                        PUSH EAX
00725449  56                        PUSH ESI
0072544A  68 C9 00 00 00            PUSH 0xc9
0072544F  68 20 0C 7F 00            PUSH 0x7f0c20
00725454  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0072545A  E8 71 80 F8 FF            CALL 0x006ad4d0
0072545F  83 C4 18                  ADD ESP,0x18
00725462  85 C0                     TEST EAX,EAX
00725464  74 01                     JZ 0x00725467
00725466  CC                        INT3
LAB_00725467:
00725467  68 CA 00 00 00            PUSH 0xca
0072546C  68 20 0C 7F 00            PUSH 0x7f0c20
00725471  56                        PUSH ESI
00725472  68 FF FF 00 00            PUSH 0xffff
00725477  E8 C4 09 F8 FF            CALL 0x006a5e40
0072547C  5F                        POP EDI
0072547D  5E                        POP ESI
0072547E  B8 FF FF 00 00            MOV EAX,0xffff
00725483  5B                        POP EBX
00725484  8B E5                     MOV ESP,EBP
00725486  5D                        POP EBP
00725487  C2 04 00                  RET 0x4
