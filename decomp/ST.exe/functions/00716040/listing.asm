FUN_00716040:
00716040  55                        PUSH EBP
00716041  8B EC                     MOV EBP,ESP
00716043  83 EC 4C                  SUB ESP,0x4c
00716046  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00716049  53                        PUSH EBX
0071604A  56                        PUSH ESI
0071604B  57                        PUSH EDI
0071604C  33 FF                     XOR EDI,EDI
0071604E  83 F8 FF                  CMP EAX,-0x1
00716051  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00716054  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00716057  75 0B                     JNZ 0x00716064
00716059  33 C0                     XOR EAX,EAX
0071605B  5F                        POP EDI
0071605C  5E                        POP ESI
0071605D  5B                        POP EBX
0071605E  8B E5                     MOV ESP,EBP
00716060  5D                        POP EBP
00716061  C2 18 00                  RET 0x18
LAB_00716064:
00716064  80 79 4C 80               CMP byte ptr [ECX + 0x4c],0x80
00716068  75 0B                     JNZ 0x00716075
0071606A  33 C0                     XOR EAX,EAX
0071606C  5F                        POP EDI
0071606D  5E                        POP ESI
0071606E  5B                        POP EBX
0071606F  8B E5                     MOV ESP,EBP
00716071  5D                        POP EBP
00716072  C2 18 00                  RET 0x18
LAB_00716075:
00716075  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071607A  8D 55 B8                  LEA EDX,[EBP + -0x48]
0071607D  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00716080  57                        PUSH EDI
00716081  52                        PUSH EDX
00716082  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00716085  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071608B  E8 60 77 01 00            CALL 0x0072d7f0
00716090  8B F0                     MOV ESI,EAX
00716092  83 C4 08                  ADD ESP,0x8
00716095  3B F7                     CMP ESI,EDI
00716097  0F 85 6C 02 00 00         JNZ 0x00716309
0071609D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007160A0  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
007160A3  89 7B 4D                  MOV dword ptr [EBX + 0x4d],EDI
007160A6  3B C7                     CMP EAX,EDI
007160A8  75 53                     JNZ 0x007160fd
007160AA  33 C0                     XOR EAX,EAX
007160AC  8A 43 4C                  MOV AL,byte ptr [EBX + 0x4c]
007160AF  83 C0 F9                  ADD EAX,-0x7
007160B2  83 F8 7A                  CMP EAX,0x7a
007160B5  77 46                     JA 0x007160fd
007160B7  33 C9                     XOR ECX,ECX
007160B9  8A 88 74 63 71 00         MOV CL,byte ptr [EAX + 0x716374]
switchD_007160bf::switchD:
007160BF  FF 24 8D 64 63 71 00      JMP dword ptr [ECX*0x4 + 0x716364]
switchD_007160bf::caseD_7:
007160C6  8B 4B 51                  MOV ECX,dword ptr [EBX + 0x51]
007160C9  8D 43 51                  LEA EAX,[EBX + 0x51]
007160CC  3B CF                     CMP ECX,EDI
007160CE  74 2D                     JZ 0x007160fd
007160D0  50                        PUSH EAX
007160D1  E8 5A FD 00 00            CALL 0x00725e30
007160D6  EB 22                     JMP 0x007160fa
switchD_007160bf::caseD_8:
007160D8  8B 4B 59                  MOV ECX,dword ptr [EBX + 0x59]
007160DB  8D 43 59                  LEA EAX,[EBX + 0x59]
007160DE  3B CF                     CMP ECX,EDI
007160E0  74 1B                     JZ 0x007160fd
007160E2  50                        PUSH EAX
007160E3  E8 78 01 01 00            CALL 0x00726260
007160E8  EB 10                     JMP 0x007160fa
switchD_007160bf::caseD_1e:
007160EA  8B 4B 55                  MOV ECX,dword ptr [EBX + 0x55]
007160ED  8D 43 55                  LEA EAX,[EBX + 0x55]
007160F0  3B CF                     CMP ECX,EDI
007160F2  74 09                     JZ 0x007160fd
007160F4  50                        PUSH EAX
007160F5  E8 D6 0A 01 00            CALL 0x00726bd0
LAB_007160fa:
007160FA  83 C4 04                  ADD ESP,0x4
switchD_007160bf::caseD_9:
007160FD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00716100  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00716103  81 E2 FF 00 00 00         AND EDX,0xff
00716109  8D 42 F9                  LEA EAX,[EDX + -0x7]
0071610C  83 F8 7A                  CMP EAX,0x7a
0071610F  0F 87 85 01 00 00         JA 0x0071629a
00716115  33 C9                     XOR ECX,ECX
00716117  8A 88 00 64 71 00         MOV CL,byte ptr [EAX + 0x716400]
switchD_0071611d::switchD:
0071611D  FF 24 8D F0 63 71 00      JMP dword ptr [ECX*0x4 + 0x7163f0]
switchD_0071611d::caseD_7:
00716124  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00716127  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071612A  52                        PUSH EDX
0071612B  6A 00                     PUSH 0x0
0071612D  57                        PUSH EDI
0071612E  50                        PUSH EAX
0071612F  E8 2C FB 00 00            CALL 0x00725c60
00716134  83 C4 10                  ADD ESP,0x10
00716137  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
0071613A  85 C0                     TEST EAX,EAX
0071613C  75 17                     JNZ 0x00716155
0071613E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00716144  68 E4 00 00 00            PUSH 0xe4
00716149  68 54 04 7F 00            PUSH 0x7f0454
0071614E  51                        PUSH ECX
0071614F  50                        PUSH EAX
00716150  E8 EB FC F8 FF            CALL 0x006a5e40
LAB_00716155:
00716155  8B 43 51                  MOV EAX,dword ptr [EBX + 0x51]
00716158  6A 00                     PUSH 0x0
0071615A  0F BF 50 2B               MOVSX EDX,word ptr [EAX + 0x2b]
0071615E  0F BF 48 29               MOVSX ECX,word ptr [EAX + 0x29]
00716162  52                        PUSH EDX
00716163  8D 50 2D                  LEA EDX,[EAX + 0x2d]
00716166  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
0071616A  51                        PUSH ECX
0071616B  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
0071616E  68 00 00 00 08            PUSH 0x8000000
00716173  52                        PUSH EDX
00716174  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00716177  50                        PUSH EAX
00716178  6A 00                     PUSH 0x0
0071617A  51                        PUSH ECX
0071617B  52                        PUSH EDX
0071617C  E8 AF C7 F9 FF            CALL 0x006b2930
00716181  8B 43 51                  MOV EAX,dword ptr [EBX + 0x51]
00716184  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
00716188  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
0071618B  0F BF 50 29               MOVSX EDX,word ptr [EAX + 0x29]
0071618F  89 53 24                  MOV dword ptr [EBX + 0x24],EDX
00716192  0F BF 40 2B               MOVSX EAX,word ptr [EAX + 0x2b]
00716196  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
00716199  E9 FC 00 00 00            JMP 0x0071629a
switchD_0071611d::caseD_1e:
0071619E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007161A1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007161A4  51                        PUSH ECX
007161A5  6A 00                     PUSH 0x0
007161A7  57                        PUSH EDI
007161A8  52                        PUSH EDX
007161A9  E8 D2 08 01 00            CALL 0x00726a80
007161AE  83 C4 10                  ADD ESP,0x10
007161B1  89 43 55                  MOV dword ptr [EBX + 0x55],EAX
007161B4  85 C0                     TEST EAX,EAX
007161B6  75 17                     JNZ 0x007161cf
007161B8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007161BD  68 EE 00 00 00            PUSH 0xee
007161C2  68 54 04 7F 00            PUSH 0x7f0454
007161C7  50                        PUSH EAX
007161C8  6A 00                     PUSH 0x0
007161CA  E8 71 FC F8 FF            CALL 0x006a5e40
LAB_007161cf:
007161CF  8B 43 55                  MOV EAX,dword ptr [EBX + 0x55]
007161D2  6A 00                     PUSH 0x0
007161D4  0F BF 48 08               MOVSX ECX,word ptr [EAX + 0x8]
007161D8  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
007161DC  51                        PUSH ECX
007161DD  52                        PUSH EDX
007161DE  0F BF 10                  MOVSX EDX,word ptr [EAX]
007161E1  8D 48 0A                  LEA ECX,[EAX + 0xa]
007161E4  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
007161E7  68 00 00 00 08            PUSH 0x8000000
007161EC  51                        PUSH ECX
007161ED  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
007161F0  52                        PUSH EDX
007161F1  6A 00                     PUSH 0x0
007161F3  50                        PUSH EAX
007161F4  51                        PUSH ECX
007161F5  E8 36 C7 F9 FF            CALL 0x006b2930
007161FA  8B 43 55                  MOV EAX,dword ptr [EBX + 0x55]
007161FD  0F BF 10                  MOVSX EDX,word ptr [EAX]
00716200  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
00716203  0F BF 48 06               MOVSX ECX,word ptr [EAX + 0x6]
00716207  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
0071620A  0F BF 50 08               MOVSX EDX,word ptr [EAX + 0x8]
0071620E  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
00716211  E9 84 00 00 00            JMP 0x0071629a
switchD_0071611d::caseD_8:
00716216  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00716219  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0071621C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071621F  50                        PUSH EAX
00716220  6A 00                     PUSH 0x0
00716222  56                        PUSH ESI
00716223  57                        PUSH EDI
00716224  51                        PUSH ECX
00716225  E8 26 FD 00 00            CALL 0x00725f50
0071622A  83 C4 14                  ADD ESP,0x14
0071622D  89 43 59                  MOV dword ptr [EBX + 0x59],EAX
00716230  85 C0                     TEST EAX,EAX
00716232  75 17                     JNZ 0x0071624b
00716234  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071623A  68 F8 00 00 00            PUSH 0xf8
0071623F  68 54 04 7F 00            PUSH 0x7f0454
00716244  52                        PUSH EDX
00716245  50                        PUSH EAX
00716246  E8 F5 FB F8 FF            CALL 0x006a5e40
LAB_0071624b:
0071624B  8B 43 59                  MOV EAX,dword ptr [EBX + 0x59]
0071624E  6A 00                     PUSH 0x0
00716250  0F BF 48 06               MOVSX ECX,word ptr [EAX + 0x6]
00716254  0F BF 50 04               MOVSX EDX,word ptr [EAX + 0x4]
00716258  51                        PUSH ECX
00716259  52                        PUSH EDX
0071625A  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0071625E  8D 48 0C                  LEA ECX,[EAX + 0xc]
00716261  68 00 00 00 04            PUSH 0x4000000
00716266  0F BF 00                  MOVSX EAX,word ptr [EAX]
00716269  51                        PUSH ECX
0071626A  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
0071626D  52                        PUSH EDX
0071626E  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00716271  50                        PUSH EAX
00716272  51                        PUSH ECX
00716273  52                        PUSH EDX
00716274  E8 B7 C6 F9 FF            CALL 0x006b2930
00716279  8B 43 59                  MOV EAX,dword ptr [EBX + 0x59]
0071627C  0F BF 48 02               MOVSX ECX,word ptr [EAX + 0x2]
00716280  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
00716283  0F BF 10                  MOVSX EDX,word ptr [EAX]
00716286  89 53 18                  MOV dword ptr [EBX + 0x18],EDX
00716289  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
0071628D  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
00716290  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
00716294  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
00716297  89 73 4D                  MOV dword ptr [EBX + 0x4d],ESI
switchD_0071611d::caseD_9:
0071629A  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
0071629D  88 43 4C                  MOV byte ptr [EBX + 0x4c],AL
007162A0  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
007162A3  85 C0                     TEST EAX,EAX
007162A5  7F 05                     JG 0x007162ac
007162A7  8D 48 FF                  LEA ECX,[EAX + -0x1]
007162AA  EB 02                     JMP 0x007162ae
LAB_007162ac:
007162AC  33 C9                     XOR ECX,ECX
LAB_007162ae:
007162AE  48                        DEC EAX
007162AF  89 4B 10                  MOV dword ptr [EBX + 0x10],ECX
007162B2  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
007162B5  83 C9 FF                  OR ECX,0xffffffff
007162B8  33 C0                     XOR EAX,EAX
007162BA  8D 53 65                  LEA EDX,[EBX + 0x65]
007162BD  F2 AE                     SCASB.REPNE ES:EDI
007162BF  F7 D1                     NOT ECX
007162C1  2B F9                     SUB EDI,ECX
007162C3  8B C1                     MOV EAX,ECX
007162C5  8B F7                     MOV ESI,EDI
007162C7  8B FA                     MOV EDI,EDX
007162C9  C1 E9 02                  SHR ECX,0x2
007162CC  F3 A5                     MOVSD.REP ES:EDI,ESI
007162CE  8B C8                     MOV ECX,EAX
007162D0  83 E1 03                  AND ECX,0x3
007162D3  F3 A4                     MOVSB.REP ES:EDI,ESI
007162D5  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
007162D8  83 FE FF                  CMP ESI,-0x1
007162DB  74 11                     JZ 0x007162ee
007162DD  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
007162E0  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
007162E3  56                        PUSH ESI
007162E4  51                        PUSH ECX
007162E5  52                        PUSH EDX
007162E6  E8 35 CD F9 FF            CALL 0x006b3020
007162EB  89 73 5D                  MOV dword ptr [EBX + 0x5d],ESI
LAB_007162ee:
007162EE  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
007162F1  C7 43 61 00 00 00 00      MOV dword ptr [EBX + 0x61],0x0
007162F8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_007162fd:
007162FD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00716300  5F                        POP EDI
00716301  5E                        POP ESI
00716302  5B                        POP EBX
00716303  8B E5                     MOV ESP,EBP
00716305  5D                        POP EBP
00716306  C2 18 00                  RET 0x18
LAB_00716309:
00716309  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0071630C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0071630F  3B C7                     CMP EAX,EDI
00716311  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00716317  C7 45 FC FC FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffc
0071631E  74 DD                     JZ 0x007162fd
00716320  68 C0 04 7F 00            PUSH 0x7f04c0
00716325  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071632A  56                        PUSH ESI
0071632B  57                        PUSH EDI
0071632C  68 15 01 00 00            PUSH 0x115
00716331  68 54 04 7F 00            PUSH 0x7f0454
00716336  E8 95 71 F9 FF            CALL 0x006ad4d0
0071633B  83 C4 18                  ADD ESP,0x18
0071633E  85 C0                     TEST EAX,EAX
00716340  74 01                     JZ 0x00716343
00716342  CC                        INT3
LAB_00716343:
00716343  68 17 01 00 00            PUSH 0x117
00716348  68 54 04 7F 00            PUSH 0x7f0454
0071634D  57                        PUSH EDI
0071634E  56                        PUSH ESI
0071634F  E8 EC FA F8 FF            CALL 0x006a5e40
00716354  5F                        POP EDI
00716355  5E                        POP ESI
00716356  B8 FC FF FF FF            MOV EAX,0xfffffffc
0071635B  5B                        POP EBX
0071635C  8B E5                     MOV ESP,EBP
0071635E  5D                        POP EBP
0071635F  C2 18 00                  RET 0x18
