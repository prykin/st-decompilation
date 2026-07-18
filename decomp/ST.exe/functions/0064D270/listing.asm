FUN_0064d270:
0064D270  55                        PUSH EBP
0064D271  8B EC                     MOV EBP,ESP
0064D273  81 EC E4 00 00 00         SUB ESP,0xe4
0064D279  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064D27E  53                        PUSH EBX
0064D27F  56                        PUSH ESI
0064D280  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0064D283  57                        PUSH EDI
0064D284  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
0064D28A  8D 8D 1C FF FF FF         LEA ECX,[EBP + 0xffffff1c]
0064D290  6A 00                     PUSH 0x0
0064D292  52                        PUSH EDX
0064D293  C7 45 F0 FF FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffff
0064D29A  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
0064D2A0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064D2A6  E8 45 05 0E 00            CALL 0x0072d7f0
0064D2AB  8B F0                     MOV ESI,EAX
0064D2AD  83 C4 08                  ADD ESP,0x8
0064D2B0  85 F6                     TEST ESI,ESI
0064D2B2  0F 85 43 04 00 00         JNZ 0x0064d6fb
0064D2B8  66 8B 7D 0C               MOV DI,word ptr [EBP + 0xc]
0064D2BC  66 83 FF 01               CMP DI,0x1
0064D2C0  7C 0D                     JL 0x0064d2cf
0064D2C2  66 83 FF 29               CMP DI,0x29
0064D2C6  7D 07                     JGE 0x0064d2cf
0064D2C8  B8 01 00 00 00            MOV EAX,0x1
0064D2CD  EB 02                     JMP 0x0064d2d1
LAB_0064d2cf:
0064D2CF  33 C0                     XOR EAX,EAX
LAB_0064d2d1:
0064D2D1  85 C0                     TEST EAX,EAX
0064D2D3  0F 84 D9 02 00 00         JZ 0x0064d5b2
0064D2D9  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0064D2DE  85 C0                     TEST EAX,EAX
0064D2E0  0F 84 CC 02 00 00         JZ 0x0064d5b2
0064D2E6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0064D2E9  66 85 D2                  TEST DX,DX
0064D2EC  0F 8C 91 00 00 00         JL 0x0064d383
0064D2F2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0064D2F5  66 85 C9                  TEST CX,CX
0064D2F8  0F 8C 85 00 00 00         JL 0x0064d383
0064D2FE  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0064D301  66 85 C0                  TEST AX,AX
0064D304  7C 7D                     JL 0x0064d383
0064D306  50                        PUSH EAX
0064D307  51                        PUSH ECX
0064D308  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0064D30E  52                        PUSH EDX
0064D30F  E8 27 7A DB FF            CALL 0x00404d3b
0064D314  85 C0                     TEST EAX,EAX
0064D316  75 42                     JNZ 0x0064d35a
0064D318  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064D31B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0064D31E  48                        DEC EAX
0064D31F  49                        DEC ECX
0064D320  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0064D323  8D 55 D0                  LEA EDX,[EBP + -0x30]
0064D326  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0064D329  8D 45 EC                  LEA EAX,[EBP + -0x14]
0064D32C  52                        PUSH EDX
0064D32D  8D 4D E0                  LEA ECX,[EBP + -0x20]
0064D330  50                        PUSH EAX
0064D331  8D 55 D8                  LEA EDX,[EBP + -0x28]
0064D334  51                        PUSH ECX
0064D335  52                        PUSH EDX
0064D336  C7 45 EC 03 00 00 00      MOV dword ptr [EBP + -0x14],0x3
0064D33D  C7 45 D0 03 00 00 00      MOV dword ptr [EBP + -0x30],0x3
0064D344  E8 BD 45 DB FF            CALL 0x00401906
0064D349  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0064D34C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0064D34F  83 C4 10                  ADD ESP,0x10
0064D352  40                        INC EAX
0064D353  41                        INC ECX
0064D354  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0064D357  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_0064d35a:
0064D35A  0F BF C7                  MOVSX EAX,DI
0064D35D  50                        PUSH EAX
0064D35E  8D 55 18                  LEA EDX,[EBP + 0x18]
0064D361  8D 45 14                  LEA EAX,[EBP + 0x14]
0064D364  52                        PUSH EDX
0064D365  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0064D368  8D 4D 10                  LEA ECX,[EBP + 0x10]
0064D36B  50                        PUSH EAX
0064D36C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064D36F  51                        PUSH ECX
0064D370  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064D373  52                        PUSH EDX
0064D374  50                        PUSH EAX
0064D375  51                        PUSH ECX
0064D376  E8 22 4A DB FF            CALL 0x00401d9d
0064D37B  83 C4 1C                  ADD ESP,0x1c
0064D37E  E9 D9 00 00 00            JMP 0x0064d45c
LAB_0064d383:
0064D383  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064D386  B9 07 00 00 00            MOV ECX,0x7
0064D38B  25 FF FF 00 00            AND EAX,0xffff
0064D390  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0064D393  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0064D396  8D 4D E8                  LEA ECX,[EBP + -0x18]
0064D399  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0064D39C  51                        PUSH ECX
0064D39D  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0064D3A0  66 8B 94 C0 EB 87 80 00   MOV DX,word ptr [EAX + EAX*0x8 + 0x8087eb]
0064D3A8  66 8B 84 C0 EF 87 80 00   MOV AX,word ptr [EAX + EAX*0x8 + 0x8087ef]
0064D3B0  66 83 EA 03               SUB DX,0x3
0064D3B4  66 2D 03 00               SUB AX,0x3
0064D3B8  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0064D3BB  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0064D3BE  8D 55 DC                  LEA EDX,[EBP + -0x24]
0064D3C1  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0064D3C4  52                        PUSH EDX
0064D3C5  50                        PUSH EAX
0064D3C6  51                        PUSH ECX
0064D3C7  E8 3A 45 DB FF            CALL 0x00401906
0064D3CC  0F BF 7D D4               MOVSX EDI,word ptr [EBP + -0x2c]
0064D3D0  0F BF 55 E8               MOVSX EDX,word ptr [EBP + -0x18]
0064D3D4  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0064D3D7  8D 4C 3A FF               LEA ECX,[EDX + EDI*0x1 + -0x1]
0064D3DB  8B 90 88 00 00 00         MOV EDX,dword ptr [EAX + 0x88]
0064D3E1  2B CF                     SUB ECX,EDI
0064D3E3  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0064D3E9  0F BF 5D E4               MOVSX EBX,word ptr [EBP + -0x1c]
0064D3ED  81 C2 39 30 00 00         ADD EDX,0x3039
0064D3F3  89 90 88 00 00 00         MOV dword ptr [EAX + 0x88],EDX
0064D3F9  0F BF 55 DC               MOVSX EDX,word ptr [EBP + -0x24]
0064D3FD  8D 74 1A FF               LEA ESI,[EDX + EBX*0x1 + -0x1]
0064D401  8B 90 88 00 00 00         MOV EDX,dword ptr [EAX + 0x88]
0064D407  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0064D40D  81 C2 39 30 00 00         ADD EDX,0x3039
0064D413  41                        INC ECX
0064D414  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0064D417  89 90 88 00 00 00         MOV dword ptr [EAX + 0x88],EDX
0064D41D  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
0064D421  52                        PUSH EDX
0064D422  8B 80 88 00 00 00         MOV EAX,dword ptr [EAX + 0x88]
0064D428  8D 55 18                  LEA EDX,[EBP + 0x18]
0064D42B  2B F3                     SUB ESI,EBX
0064D42D  52                        PUSH EDX
0064D42E  8D 55 14                  LEA EDX,[EBP + 0x14]
0064D431  52                        PUSH EDX
0064D432  8D 55 10                  LEA EDX,[EBP + 0x10]
0064D435  52                        PUSH EDX
0064D436  33 D2                     XOR EDX,EDX
0064D438  C1 E8 10                  SHR EAX,0x10
0064D43B  F7 F1                     DIV ECX
0064D43D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0064D440  6A 01                     PUSH 0x1
0064D442  C1 E8 10                  SHR EAX,0x10
0064D445  03 D7                     ADD EDX,EDI
0064D447  46                        INC ESI
0064D448  52                        PUSH EDX
0064D449  33 D2                     XOR EDX,EDX
0064D44B  F7 F6                     DIV ESI
0064D44D  03 D3                     ADD EDX,EBX
0064D44F  52                        PUSH EDX
0064D450  E8 48 49 DB FF            CALL 0x00401d9d
0064D455  66 8B 7D 0C               MOV DI,word ptr [EBP + 0xc]
0064D459  83 C4 2C                  ADD ESP,0x2c
LAB_0064d45c:
0064D45C  85 C0                     TEST EAX,EAX
0064D45E  0F 84 4E 01 00 00         JZ 0x0064d5b2
0064D464  B9 1A 00 00 00            MOV ECX,0x1a
0064D469  33 C0                     XOR EAX,EAX
0064D46B  8D BD 60 FF FF FF         LEA EDI,[EBP + 0xffffff60]
0064D471  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0064D474  F3 AB                     STOSD.REP ES:EDI
0064D476  AA                        STOSB ES:EDI
0064D477  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064D47A  C7 85 6C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0x0
0064D484  25 FF FF 00 00            AND EAX,0xffff
0064D489  85 DB                     TEST EBX,EBX
0064D48B  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0064D491  7C 0B                     JL 0x0064d49e
0064D493  83 FB 08                  CMP EBX,0x8
0064D496  89 9D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EBX
0064D49C  7C 06                     JL 0x0064d4a4
LAB_0064d49e:
0064D49E  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
LAB_0064d4a4:
0064D4A4  66 8B 75 0C               MOV SI,word ptr [EBP + 0xc]
0064D4A8  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
0064D4AC  0F BF C6                  MOVSX EAX,SI
0064D4AF  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
0064D4B5  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
0064D4B9  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
0064D4BD  66 89 85 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],AX
0064D4C4  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
0064D4C8  66 89 8D 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],CX
0064D4CF  66 89 45 84               MOV word ptr [EBP + -0x7c],AX
0064D4D3  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0064D4D6  85 C0                     TEST EAX,EAX
0064D4D8  66 89 55 80               MOV word ptr [EBP + -0x80],DX
0064D4DC  66 C7 45 82 FF FF         MOV word ptr [EBP + -0x7e],0xffff
0064D4E2  75 05                     JNZ 0x0064d4e9
0064D4E4  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_0064d4e9:
0064D4E9  6A 0E                     PUSH 0xe
0064D4EB  8D 4D 96                  LEA ECX,[EBP + -0x6a]
0064D4EE  50                        PUSH EAX
0064D4EF  51                        PUSH ECX
0064D4F0  E8 4B 0E 0E 00            CALL 0x0072e340
0064D4F5  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0064D4F8  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0064D4FB  83 C4 0C                  ADD ESP,0xc
0064D4FE  BF 01 00 00 00            MOV EDI,0x1
0064D503  66 83 FE 08               CMP SI,0x8
0064D507  89 55 86                  MOV dword ptr [EBP + -0x7a],EDX
0064D50A  89 7D 92                  MOV dword ptr [EBP + -0x6e],EDI
0064D50D  89 45 A5                  MOV dword ptr [EBP + -0x5b],EAX
0064D510  74 10                     JZ 0x0064d522
0064D512  66 83 FE 14               CMP SI,0x14
0064D516  74 0A                     JZ 0x0064d522
0064D518  66 83 FE 1A               CMP SI,0x1a
0064D51C  74 04                     JZ 0x0064d522
0064D51E  33 C0                     XOR EAX,EAX
0064D520  EB 02                     JMP 0x0064d524
LAB_0064d522:
0064D522  8B C7                     MOV EAX,EDI
LAB_0064d524:
0064D524  85 C0                     TEST EAX,EAX
0064D526  74 1C                     JZ 0x0064d544
0064D528  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0064D52B  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0064D530  6B C9 78                  IMUL ECX,ECX,0x78
0064D533  F7 E9                     IMUL ECX
0064D535  C1 FA 05                  SAR EDX,0x5
0064D538  8B CA                     MOV ECX,EDX
0064D53A  C1 E9 1F                  SHR ECX,0x1f
0064D53D  03 D1                     ADD EDX,ECX
0064D53F  89 55 8A                  MOV dword ptr [EBP + -0x76],EDX
0064D542  EB 07                     JMP 0x0064d54b
LAB_0064d544:
0064D544  C7 45 8A 00 00 00 00      MOV dword ptr [EBP + -0x76],0x0
LAB_0064d54b:
0064D54B  66 83 FE 08               CMP SI,0x8
0064D54F  74 10                     JZ 0x0064d561
0064D551  66 83 FE 14               CMP SI,0x14
0064D555  74 0A                     JZ 0x0064d561
0064D557  66 83 FE 1A               CMP SI,0x1a
0064D55B  74 04                     JZ 0x0064d561
0064D55D  33 C0                     XOR EAX,EAX
0064D55F  EB 02                     JMP 0x0064d563
LAB_0064d561:
0064D561  8B C7                     MOV EAX,EDI
LAB_0064d563:
0064D563  85 C0                     TEST EAX,EAX
0064D565  74 22                     JZ 0x0064d589
0064D567  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0064D56A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0064D56D  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0064D572  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0064D575  C1 E1 05                  SHL ECX,0x5
0064D578  F7 E9                     IMUL ECX
0064D57A  C1 FA 05                  SAR EDX,0x5
0064D57D  8B C2                     MOV EAX,EDX
0064D57F  C1 E8 1F                  SHR EAX,0x1f
0064D582  03 D0                     ADD EDX,EAX
0064D584  89 55 8E                  MOV dword ptr [EBP + -0x72],EDX
0064D587  EB 07                     JMP 0x0064d590
LAB_0064d589:
0064D589  C7 45 8E 00 00 00 00      MOV dword ptr [EBP + -0x72],0x0
LAB_0064d590:
0064D590  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
0064D596  89 7D A9                  MOV dword ptr [EBP + -0x57],EDI
0064D599  51                        PUSH ECX
0064D59A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064D5A0  E8 F2 75 DB FF            CALL 0x00404b97
0064D5A5  66 8B 7D 0C               MOV DI,word ptr [EBP + 0xc]
0064D5A9  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0064D5B0  EB 03                     JMP 0x0064d5b5
LAB_0064d5b2:
0064D5B2  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
LAB_0064d5b5:
0064D5B5  66 83 FF 32               CMP DI,0x32
0064D5B9  7C 0D                     JL 0x0064d5c8
0064D5BB  66 83 FF 74               CMP DI,0x74
0064D5BF  7D 07                     JGE 0x0064d5c8
0064D5C1  B8 01 00 00 00            MOV EAX,0x1
0064D5C6  EB 02                     JMP 0x0064d5ca
LAB_0064d5c8:
0064D5C8  33 C0                     XOR EAX,EAX
LAB_0064d5ca:
0064D5CA  85 C0                     TEST EAX,EAX
0064D5CC  0F 84 11 01 00 00         JZ 0x0064d6e3
0064D5D2  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0064D5D7  85 C0                     TEST EAX,EAX
0064D5D9  0F 84 04 01 00 00         JZ 0x0064d6e3
0064D5DF  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0064D5E3  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
0064D5E7  0F BF 55 18               MOVSX EDX,word ptr [EBP + 0x18]
0064D5EB  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
0064D5EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064D5F1  85 F6                     TEST ESI,ESI
0064D5F3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0064D5F6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0064D5F9  0F 85 81 00 00 00         JNZ 0x0064d680
0064D5FF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064D602  BB 01 00 00 00            MOV EBX,0x1
0064D607  6A 00                     PUSH 0x0
0064D609  53                        PUSH EBX
0064D60A  0F BF FF                  MOVSX EDI,DI
0064D60D  6A 00                     PUSH 0x0
0064D60F  81 E6 FF FF 00 00         AND ESI,0xffff
0064D615  6A 00                     PUSH 0x0
0064D617  6A 00                     PUSH 0x0
0064D619  56                        PUSH ESI
0064D61A  57                        PUSH EDI
0064D61B  52                        PUSH EDX
0064D61C  51                        PUSH ECX
0064D61D  50                        PUSH EAX
0064D61E  E8 06 52 DB FF            CALL 0x00402829
0064D623  83 C4 28                  ADD ESP,0x28
0064D626  85 C0                     TEST EAX,EAX
0064D628  75 1A                     JNZ 0x0064d644
0064D62A  50                        PUSH EAX
0064D62B  50                        PUSH EAX
0064D62C  8D 55 F4                  LEA EDX,[EBP + -0xc]
0064D62F  8D 45 F8                  LEA EAX,[EBP + -0x8]
0064D632  52                        PUSH EDX
0064D633  8D 4D FC                  LEA ECX,[EBP + -0x4]
0064D636  50                        PUSH EAX
0064D637  51                        PUSH ECX
0064D638  57                        PUSH EDI
0064D639  56                        PUSH ESI
0064D63A  E8 AD 43 DB FF            CALL 0x004019ec
0064D63F  83 C4 1C                  ADD ESP,0x1c
0064D642  8B D8                     MOV EBX,EAX
LAB_0064d644:
0064D644  85 DB                     TEST EBX,EBX
0064D646  0F 84 97 00 00 00         JZ 0x0064d6e3
0064D64C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0064D64F  85 C0                     TEST EAX,EAX
0064D651  7C 05                     JL 0x0064d658
0064D653  83 F8 08                  CMP EAX,0x8
0064D656  7C 02                     JL 0x0064d65a
LAB_0064d658:
0064D658  8B C6                     MOV EAX,ESI
LAB_0064d65a:
0064D65A  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
0064D65D  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0064D660  52                        PUSH EDX
0064D661  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0064D664  51                        PUSH ECX
0064D665  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064D668  52                        PUSH EDX
0064D669  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0064D66C  50                        PUSH EAX
0064D66D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0064D670  50                        PUSH EAX
0064D671  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064D674  51                        PUSH ECX
0064D675  52                        PUSH EDX
0064D676  50                        PUSH EAX
0064D677  57                        PUSH EDI
0064D678  56                        PUSH ESI
0064D679  E8 CC 71 DB FF            CALL 0x0040484a
0064D67E  EB 59                     JMP 0x0064d6d9
LAB_0064d680:
0064D680  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064D683  6A 00                     PUSH 0x0
0064D685  8D 4D F4                  LEA ECX,[EBP + -0xc]
0064D688  6A 00                     PUSH 0x0
0064D68A  0F BF FF                  MOVSX EDI,DI
0064D68D  8D 55 F8                  LEA EDX,[EBP + -0x8]
0064D690  51                        PUSH ECX
0064D691  8D 45 FC                  LEA EAX,[EBP + -0x4]
0064D694  52                        PUSH EDX
0064D695  81 E6 FF FF 00 00         AND ESI,0xffff
0064D69B  50                        PUSH EAX
0064D69C  57                        PUSH EDI
0064D69D  56                        PUSH ESI
0064D69E  E8 49 43 DB FF            CALL 0x004019ec
0064D6A3  83 C4 1C                  ADD ESP,0x1c
0064D6A6  85 C0                     TEST EAX,EAX
0064D6A8  74 32                     JZ 0x0064d6dc
0064D6AA  85 DB                     TEST EBX,EBX
0064D6AC  7C 07                     JL 0x0064d6b5
0064D6AE  83 FB 08                  CMP EBX,0x8
0064D6B1  8B C3                     MOV EAX,EBX
0064D6B3  7C 02                     JL 0x0064d6b7
LAB_0064d6b5:
0064D6B5  8B C6                     MOV EAX,ESI
LAB_0064d6b7:
0064D6B7  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0064D6BA  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0064D6BD  51                        PUSH ECX
0064D6BE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0064D6C1  6A 00                     PUSH 0x0
0064D6C3  52                        PUSH EDX
0064D6C4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0064D6C7  50                        PUSH EAX
0064D6C8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0064D6CB  50                        PUSH EAX
0064D6CC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064D6CF  51                        PUSH ECX
0064D6D0  52                        PUSH EDX
0064D6D1  50                        PUSH EAX
0064D6D2  57                        PUSH EDI
0064D6D3  56                        PUSH ESI
0064D6D4  E8 C9 41 DB FF            CALL 0x004018a2
LAB_0064d6d9:
0064D6D9  83 C4 28                  ADD ESP,0x28
LAB_0064d6dc:
0064D6DC  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_0064d6e3:
0064D6E3  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
0064D6E9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064D6EC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064D6F2  5F                        POP EDI
0064D6F3  5E                        POP ESI
0064D6F4  5B                        POP EBX
0064D6F5  8B E5                     MOV ESP,EBP
0064D6F7  5D                        POP EBP
0064D6F8  C2 34 00                  RET 0x34
LAB_0064d6fb:
0064D6FB  8B 95 1C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff1c]
0064D701  68 9C 2A 7D 00            PUSH 0x7d2a9c
0064D706  68 CC 4C 7A 00            PUSH 0x7a4ccc
0064D70B  56                        PUSH ESI
0064D70C  6A 00                     PUSH 0x0
0064D70E  68 CB 00 00 00            PUSH 0xcb
0064D713  68 34 2A 7D 00            PUSH 0x7d2a34
0064D718  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064D71E  E8 AD FD 05 00            CALL 0x006ad4d0
0064D723  83 C4 18                  ADD ESP,0x18
0064D726  85 C0                     TEST EAX,EAX
0064D728  74 01                     JZ 0x0064d72b
0064D72A  CC                        INT3
LAB_0064d72b:
0064D72B  68 CC 00 00 00            PUSH 0xcc
0064D730  68 34 2A 7D 00            PUSH 0x7d2a34
0064D735  6A 00                     PUSH 0x0
0064D737  56                        PUSH ESI
0064D738  E8 03 87 05 00            CALL 0x006a5e40
0064D73D  8B C6                     MOV EAX,ESI
0064D73F  5F                        POP EDI
0064D740  5E                        POP ESI
0064D741  5B                        POP EBX
0064D742  8B E5                     MOV ESP,EBP
0064D744  5D                        POP EBP
0064D745  C2 34 00                  RET 0x34
