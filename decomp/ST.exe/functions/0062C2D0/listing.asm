FUN_0062c2d0:
0062C2D0  55                        PUSH EBP
0062C2D1  8B EC                     MOV EBP,ESP
0062C2D3  83 EC 14                  SUB ESP,0x14
0062C2D6  53                        PUSH EBX
0062C2D7  56                        PUSH ESI
0062C2D8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062C2DB  57                        PUSH EDI
0062C2DC  85 F6                     TEST ESI,ESI
0062C2DE  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0062C2E5  0F 84 9A 05 00 00         JZ 0x0062c885
0062C2EB  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0062C2EE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062C2F1  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0062C2F4  8B 3E                     MOV EDI,dword ptr [ESI]
0062C2F6  2B C1                     SUB EAX,ECX
0062C2F8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062C2FB  2B CA                     SUB ECX,EDX
0062C2FD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062C300  2B D7                     SUB EDX,EDI
0062C302  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0062C305  8B DA                     MOV EBX,EDX
0062C307  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0062C30A  0F AF DA                  IMUL EBX,EDX
0062C30D  8B D1                     MOV EDX,ECX
0062C30F  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0062C316  0F AF D1                  IMUL EDX,ECX
0062C319  8B C8                     MOV ECX,EAX
0062C31B  03 DA                     ADD EBX,EDX
0062C31D  0F AF C8                  IMUL ECX,EAX
0062C320  03 D9                     ADD EBX,ECX
0062C322  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0062C325  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062C328  F7 DF                     NEG EDI
0062C32A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0062C32D  D9 FA                     FSQRT
0062C32F  DA 65 10                  FISUB dword ptr [EBP + 0x10]
0062C332  D9 5D 10                  FSTP float ptr [EBP + 0x10]
0062C335  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062C338  D8 5D 10                  FCOMP float ptr [EBP + 0x10]
0062C33B  DF E0                     FNSTSW AX
0062C33D  F6 C4 01                  TEST AH,0x1
0062C340  0F 84 3F 05 00 00         JZ 0x0062c885
0062C346  DB 46 14                  FILD dword ptr [ESI + 0x14]
0062C349  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0062C34C  D9 45 10                  FLD float ptr [EBP + 0x10]
0062C34F  E8 34 1F 10 00            CALL 0x0072e288
0062C354  D9 46 45                  FLD float ptr [ESI + 0x45]
0062C357  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0062C35A  E8 29 1F 10 00            CALL 0x0072e288
0062C35F  DB 46 41                  FILD dword ptr [ESI + 0x41]
0062C362  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0062C365  D8 46 45                  FADD float ptr [ESI + 0x45]
0062C368  D9 56 45                  FST float ptr [ESI + 0x45]
0062C36B  D8 0D 78 D0 79 00         FMUL float ptr [0x0079d078]
0062C371  DB 46 3D                  FILD dword ptr [ESI + 0x3d]
0062C374  D9 C1                     FLD ST1
0062C376  D9 FF                     FCOS
0062C378  D8 C9                     FMUL ST1
0062C37A  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0062C37D  D9 C9                     FXCH
0062C37F  D9 FE                     FSIN
0062C381  D8 C9                     FMUL ST1
0062C383  D9 C9                     FXCH
0062C385  DD D8                     FSTP ST0
0062C387  D9 C0                     FLD ST0
0062C389  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062C38C  D9 45 10                  FLD float ptr [EBP + 0x10]
0062C38F  D8 4E 49                  FMUL float ptr [ESI + 0x49]
0062C392  DE C1                     FADDP
0062C394  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C397  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062C39A  DE C1                     FADDP
0062C39C  E8 E7 1E 10 00            CALL 0x0072e288
0062C3A1  D9 C0                     FLD ST0
0062C3A3  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062C3A6  D9 45 10                  FLD float ptr [EBP + 0x10]
0062C3A9  D8 4E 4D                  FMUL float ptr [ESI + 0x4d]
0062C3AC  8B F8                     MOV EDI,EAX
0062C3AE  DE C1                     FADDP
0062C3B0  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C3B3  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062C3B6  DE C1                     FADDP
0062C3B8  E8 CB 1E 10 00            CALL 0x0072e288
0062C3BD  D9 C0                     FLD ST0
0062C3BF  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062C3C2  D9 45 10                  FLD float ptr [EBP + 0x10]
0062C3C5  D8 4E 51                  FMUL float ptr [ESI + 0x51]
0062C3C8  8B D8                     MOV EBX,EAX
0062C3CA  DE C1                     FADDP
0062C3CC  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C3CF  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062C3D2  DE C1                     FADDP
0062C3D4  E8 AF 1E 10 00            CALL 0x0072e288
0062C3D9  D9 C0                     FLD ST0
0062C3DB  D8 C9                     FMUL ST1
0062C3DD  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C3E0  D8 4D 08                  FMUL float ptr [EBP + 0x8]
0062C3E3  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062C3E6  89 7E 18                  MOV dword ptr [ESI + 0x18],EDI
0062C3E9  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0062C3EC  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0062C3EF  DE C1                     FADDP
0062C3F1  D9 FA                     FSQRT
0062C3F3  D9 5D 14                  FSTP float ptr [EBP + 0x14]
0062C3F6  D8 0D 74 D0 79 00         FMUL float ptr [0x0079d074]
0062C3FC  D8 75 14                  FDIV float ptr [EBP + 0x14]
0062C3FF  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C402  D8 0D 74 D0 79 00         FMUL float ptr [0x0079d074]
0062C408  D8 75 14                  FDIV float ptr [EBP + 0x14]
0062C40B  D9 C1                     FLD ST1
0062C40D  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062C410  D9 C1                     FLD ST1
0062C412  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062C415  DE C1                     FADDP
0062C417  D8 46 49                  FADD float ptr [ESI + 0x49]
0062C41A  E8 69 1E 10 00            CALL 0x0072e288
0062C41F  D9 C1                     FLD ST1
0062C421  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062C424  D9 C1                     FLD ST1
0062C426  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062C429  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0062C42C  DE C1                     FADDP
0062C42E  D8 46 4D                  FADD float ptr [ESI + 0x4d]
0062C431  E8 52 1E 10 00            CALL 0x0072e288
0062C436  D9 C9                     FXCH
0062C438  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062C43B  D9 C9                     FXCH
0062C43D  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062C440  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0062C443  DE C1                     FADDP
0062C445  D8 46 51                  FADD float ptr [ESI + 0x51]
0062C448  E8 3B 1E 10 00            CALL 0x0072e288
0062C44D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062C450  6A 00                     PUSH 0x0
0062C452  6A 00                     PUSH 0x0
0062C454  6A FF                     PUSH -0x1
0062C456  6A 00                     PUSH 0x0
0062C458  6A 00                     PUSH 0x0
0062C45A  6A 00                     PUSH 0x0
0062C45C  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0062C45F  50                        PUSH EAX
0062C460  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062C463  50                        PUSH EAX
0062C464  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0062C467  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
0062C46A  51                        PUSH ECX
0062C46B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0062C46E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062C471  03 C1                     ADD EAX,ECX
0062C473  89 56 28                  MOV dword ptr [ESI + 0x28],EDX
0062C476  50                        PUSH EAX
0062C477  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0062C47A  03 C3                     ADD EAX,EBX
0062C47C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062C47F  50                        PUSH EAX
0062C480  8B 06                     MOV EAX,dword ptr [ESI]
0062C482  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0062C488  03 C7                     ADD EAX,EDI
0062C48A  50                        PUSH EAX
0062C48B  6A 00                     PUSH 0x0
0062C48D  6A 01                     PUSH 0x1
0062C48F  6A 03                     PUSH 0x3
0062C491  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0062C494  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0062C49B  E8 93 4F DD FF            CALL 0x00401433
0062C4A0  D9 45 FC                  FLD float ptr [EBP + -0x4]
0062C4A3  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0062C4A9  DF E0                     FNSTSW AX
0062C4AB  F6 C4 40                  TEST AH,0x40
0062C4AE  74 0C                     JZ 0x0062c4bc
0062C4B0  5F                        POP EDI
0062C4B1  5E                        POP ESI
0062C4B2  B8 01 00 00 00            MOV EAX,0x1
0062C4B7  5B                        POP EBX
0062C4B8  8B E5                     MOV ESP,EBP
0062C4BA  5D                        POP EBP
0062C4BB  C3                        RET
LAB_0062c4bc:
0062C4BC  D9 45 10                  FLD float ptr [EBP + 0x10]
0062C4BF  D8 1D 70 D0 79 00         FCOMP float ptr [0x0079d070]
0062C4C5  DF E0                     FNSTSW AX
0062C4C7  F6 C4 41                  TEST AH,0x41
0062C4CA  75 07                     JNZ 0x0062c4d3
0062C4CC  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0062c4d3:
0062C4D3  8B 7E 3D                  MOV EDI,dword ptr [ESI + 0x3d]
0062C4D6  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0062C4D9  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0062C4DC  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0062C4DF  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0062C4E2  8B FA                     MOV EDI,EDX
0062C4E4  0F AF FA                  IMUL EDI,EDX
0062C4E7  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062C4EA  8B D1                     MOV EDX,ECX
0062C4EC  6A 00                     PUSH 0x0
0062C4EE  0F AF D1                  IMUL EDX,ECX
0062C4F1  8B C8                     MOV ECX,EAX
0062C4F3  03 FA                     ADD EDI,EDX
0062C4F5  0F AF C8                  IMUL ECX,EAX
0062C4F8  03 F9                     ADD EDI,ECX
0062C4FA  6A 00                     PUSH 0x0
0062C4FC  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
0062C4FF  6A FF                     PUSH -0x1
0062C501  DB 45 0C                  FILD dword ptr [EBP + 0xc]
0062C504  6A 00                     PUSH 0x0
0062C506  6A 00                     PUSH 0x0
0062C508  6A 00                     PUSH 0x0
0062C50A  D9 FA                     FSQRT
0062C50C  DA 45 08                  FIADD dword ptr [EBP + 0x8]
0062C50F  D8 E1                     FSUB ST0,ST1
0062C511  D8 0D 6C D0 79 00         FMUL float ptr [0x0079d06c]
0062C517  DE C1                     FADDP
0062C519  DB 45 F0                  FILD dword ptr [EBP + -0x10]
0062C51C  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
0062C51F  D9 46 45                  FLD float ptr [ESI + 0x45]
0062C522  D8 65 0C                  FSUB float ptr [EBP + 0xc]
0062C525  D8 0D 68 D0 79 00         FMUL float ptr [0x0079d068]
0062C52B  D8 45 0C                  FADD float ptr [EBP + 0xc]
0062C52E  D8 0D 78 D0 79 00         FMUL float ptr [0x0079d078]
0062C534  D9 C0                     FLD ST0
0062C536  D9 FF                     FCOS
0062C538  D9 C2                     FLD ST2
0062C53A  DE C9                     FMULP
0062C53C  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0062C53F  D9 FE                     FSIN
0062C541  D9 C9                     FXCH
0062C543  DE C9                     FMULP
0062C545  D9 45 10                  FLD float ptr [EBP + 0x10]
0062C548  D8 65 FC                  FSUB float ptr [EBP + -0x4]
0062C54B  D8 0D 68 D0 79 00         FMUL float ptr [0x0079d068]
0062C551  D8 45 FC                  FADD float ptr [EBP + -0x4]
0062C554  D9 C1                     FLD ST1
0062C556  D8 0D 74 D0 79 00         FMUL float ptr [0x0079d074]
0062C55C  D8 75 14                  FDIV float ptr [EBP + 0x14]
0062C55F  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C562  D8 0D 74 D0 79 00         FMUL float ptr [0x0079d074]
0062C568  D8 75 14                  FDIV float ptr [EBP + 0x14]
0062C56B  D9 C1                     FLD ST1
0062C56D  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062C570  D9 C1                     FLD ST1
0062C572  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062C575  DE C1                     FADDP
0062C577  D8 46 51                  FADD float ptr [ESI + 0x51]
0062C57A  E8 09 1D 10 00            CALL 0x0072e288
0062C57F  D9 C1                     FLD ST1
0062C581  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062C584  D9 C1                     FLD ST1
0062C586  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062C589  50                        PUSH EAX
0062C58A  DE C1                     FADDP
0062C58C  D8 46 4D                  FADD float ptr [ESI + 0x4d]
0062C58F  E8 F4 1C 10 00            CALL 0x0072e288
0062C594  D9 C9                     FXCH
0062C596  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062C599  D9 C9                     FXCH
0062C59B  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062C59E  50                        PUSH EAX
0062C59F  DE C1                     FADDP
0062C5A1  D8 46 49                  FADD float ptr [ESI + 0x49]
0062C5A4  E8 DF 1C 10 00            CALL 0x0072e288
0062C5A9  D9 C1                     FLD ST1
0062C5AB  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062C5AE  D9 C1                     FLD ST1
0062C5B0  D8 4E 51                  FMUL float ptr [ESI + 0x51]
0062C5B3  50                        PUSH EAX
0062C5B4  DE C1                     FADDP
0062C5B6  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C5B9  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062C5BC  DE C1                     FADDP
0062C5BE  E8 C5 1C 10 00            CALL 0x0072e288
0062C5C3  D9 C1                     FLD ST1
0062C5C5  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062C5C8  D9 C1                     FLD ST1
0062C5CA  D8 4E 4D                  FMUL float ptr [ESI + 0x4d]
0062C5CD  03 46 08                  ADD EAX,dword ptr [ESI + 0x8]
0062C5D0  DE C1                     FADDP
0062C5D2  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C5D5  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062C5D8  50                        PUSH EAX
0062C5D9  DE C1                     FADDP
0062C5DB  E8 A8 1C 10 00            CALL 0x0072e288
0062C5E0  D9 C9                     FXCH
0062C5E2  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062C5E5  D9 C9                     FXCH
0062C5E7  D8 4E 49                  FMUL float ptr [ESI + 0x49]
0062C5EA  03 46 04                  ADD EAX,dword ptr [ESI + 0x4]
0062C5ED  DE C1                     FADDP
0062C5EF  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C5F2  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062C5F5  50                        PUSH EAX
0062C5F6  DE C1                     FADDP
0062C5F8  E8 8B 1C 10 00            CALL 0x0072e288
0062C5FD  8B 16                     MOV EDX,dword ptr [ESI]
0062C5FF  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0062C605  03 C2                     ADD EAX,EDX
0062C607  50                        PUSH EAX
0062C608  6A 03                     PUSH 0x3
0062C60A  6A 01                     PUSH 0x1
0062C60C  6A 03                     PUSH 0x3
0062C60E  E8 20 4E DD FF            CALL 0x00401433
0062C613  8B 7E 3D                  MOV EDI,dword ptr [ESI + 0x3d]
0062C616  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0062C619  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0062C61C  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0062C61F  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0062C622  8B FA                     MOV EDI,EDX
0062C624  0F AF FA                  IMUL EDI,EDX
0062C627  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062C62A  8B D1                     MOV EDX,ECX
0062C62C  0F AF D1                  IMUL EDX,ECX
0062C62F  8B C8                     MOV ECX,EAX
0062C631  03 FA                     ADD EDI,EDX
0062C633  0F AF C8                  IMUL ECX,EAX
0062C636  03 F9                     ADD EDI,ECX
0062C638  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0062C63B  DB 45 10                  FILD dword ptr [EBP + 0x10]
0062C63E  D9 FA                     FSQRT
0062C640  DA 45 08                  FIADD dword ptr [EBP + 0x8]
0062C643  D8 E1                     FSUB ST0,ST1
0062C645  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
0062C64B  DE C1                     FADDP
0062C64D  D9 46 45                  FLD float ptr [ESI + 0x45]
0062C650  D8 65 0C                  FSUB float ptr [EBP + 0xc]
0062C653  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
0062C659  D8 45 0C                  FADD float ptr [EBP + 0xc]
0062C65C  D8 0D 78 D0 79 00         FMUL float ptr [0x0079d078]
0062C662  D9 C0                     FLD ST0
0062C664  D9 FF                     FCOS
0062C666  D9 C2                     FLD ST2
0062C668  DE C9                     FMULP
0062C66A  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0062C66D  D9 FE                     FSIN
0062C66F  D9 C9                     FXCH
0062C671  DE C9                     FMULP
0062C673  D9 45 EC                  FLD float ptr [EBP + -0x14]
0062C676  D8 65 FC                  FSUB float ptr [EBP + -0x4]
0062C679  6A 00                     PUSH 0x0
0062C67B  6A 00                     PUSH 0x0
0062C67D  6A FF                     PUSH -0x1
0062C67F  6A 00                     PUSH 0x0
0062C681  6A 00                     PUSH 0x0
0062C683  6A 00                     PUSH 0x0
0062C685  D9 55 10                  FST float ptr [EBP + 0x10]
0062C688  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
0062C68E  D8 45 FC                  FADD float ptr [EBP + -0x4]
0062C691  D9 C1                     FLD ST1
0062C693  D8 0D 74 D0 79 00         FMUL float ptr [0x0079d074]
0062C699  D8 75 14                  FDIV float ptr [EBP + 0x14]
0062C69C  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C69F  D8 0D 74 D0 79 00         FMUL float ptr [0x0079d074]
0062C6A5  D8 75 14                  FDIV float ptr [EBP + 0x14]
0062C6A8  D9 C1                     FLD ST1
0062C6AA  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062C6AD  D9 C1                     FLD ST1
0062C6AF  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062C6B2  DE C1                     FADDP
0062C6B4  D8 46 51                  FADD float ptr [ESI + 0x51]
0062C6B7  E8 CC 1B 10 00            CALL 0x0072e288
0062C6BC  D9 C1                     FLD ST1
0062C6BE  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062C6C1  D9 C1                     FLD ST1
0062C6C3  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062C6C6  50                        PUSH EAX
0062C6C7  DE C1                     FADDP
0062C6C9  D8 46 4D                  FADD float ptr [ESI + 0x4d]
0062C6CC  E8 B7 1B 10 00            CALL 0x0072e288
0062C6D1  D9 C9                     FXCH
0062C6D3  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062C6D6  D9 C9                     FXCH
0062C6D8  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062C6DB  50                        PUSH EAX
0062C6DC  DE C1                     FADDP
0062C6DE  D8 46 49                  FADD float ptr [ESI + 0x49]
0062C6E1  E8 A2 1B 10 00            CALL 0x0072e288
0062C6E6  D9 C1                     FLD ST1
0062C6E8  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062C6EB  D9 C1                     FLD ST1
0062C6ED  D8 4E 51                  FMUL float ptr [ESI + 0x51]
0062C6F0  50                        PUSH EAX
0062C6F1  DE C1                     FADDP
0062C6F3  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C6F6  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062C6F9  DE C1                     FADDP
0062C6FB  E8 88 1B 10 00            CALL 0x0072e288
0062C700  D9 C1                     FLD ST1
0062C702  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062C705  D9 C1                     FLD ST1
0062C707  D8 4E 4D                  FMUL float ptr [ESI + 0x4d]
0062C70A  03 46 08                  ADD EAX,dword ptr [ESI + 0x8]
0062C70D  DE C1                     FADDP
0062C70F  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C712  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062C715  50                        PUSH EAX
0062C716  DE C1                     FADDP
0062C718  E8 6B 1B 10 00            CALL 0x0072e288
0062C71D  D9 C9                     FXCH
0062C71F  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062C722  D9 C9                     FXCH
0062C724  D8 4E 49                  FMUL float ptr [ESI + 0x49]
0062C727  03 46 04                  ADD EAX,dword ptr [ESI + 0x4]
0062C72A  DE C1                     FADDP
0062C72C  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C72F  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062C732  50                        PUSH EAX
0062C733  DE C1                     FADDP
0062C735  E8 4E 1B 10 00            CALL 0x0072e288
0062C73A  03 06                     ADD EAX,dword ptr [ESI]
0062C73C  50                        PUSH EAX
0062C73D  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0062C743  6A 02                     PUSH 0x2
0062C745  6A 01                     PUSH 0x1
0062C747  6A 03                     PUSH 0x3
0062C749  E8 E5 4C DD FF            CALL 0x00401433
0062C74E  8B 7E 3D                  MOV EDI,dword ptr [ESI + 0x3d]
0062C751  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0062C754  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0062C757  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0062C75A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0062C75D  8B FA                     MOV EDI,EDX
0062C75F  0F AF FA                  IMUL EDI,EDX
0062C762  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062C765  8B D1                     MOV EDX,ECX
0062C767  6A 00                     PUSH 0x0
0062C769  0F AF D1                  IMUL EDX,ECX
0062C76C  8B C8                     MOV ECX,EAX
0062C76E  03 FA                     ADD EDI,EDX
0062C770  0F AF C8                  IMUL ECX,EAX
0062C773  03 F9                     ADD EDI,ECX
0062C775  6A 00                     PUSH 0x0
0062C777  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0062C77A  6A FF                     PUSH -0x1
0062C77C  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0062C77F  6A 00                     PUSH 0x0
0062C781  6A 00                     PUSH 0x0
0062C783  6A 00                     PUSH 0x0
0062C785  D9 FA                     FSQRT
0062C787  DA 45 08                  FIADD dword ptr [EBP + 0x8]
0062C78A  D8 E1                     FSUB ST0,ST1
0062C78C  D8 0D 68 D0 79 00         FMUL float ptr [0x0079d068]
0062C792  DE C1                     FADDP
0062C794  D9 46 45                  FLD float ptr [ESI + 0x45]
0062C797  D8 65 0C                  FSUB float ptr [EBP + 0xc]
0062C79A  D8 0D 6C D0 79 00         FMUL float ptr [0x0079d06c]
0062C7A0  D8 45 0C                  FADD float ptr [EBP + 0xc]
0062C7A3  D8 0D 78 D0 79 00         FMUL float ptr [0x0079d078]
0062C7A9  D9 C0                     FLD ST0
0062C7AB  D9 FF                     FCOS
0062C7AD  D9 C2                     FLD ST2
0062C7AF  DE C9                     FMULP
0062C7B1  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0062C7B4  D9 FE                     FSIN
0062C7B6  D9 C9                     FXCH
0062C7B8  DE C9                     FMULP
0062C7BA  D9 45 10                  FLD float ptr [EBP + 0x10]
0062C7BD  D8 0D 6C D0 79 00         FMUL float ptr [0x0079d06c]
0062C7C3  D8 45 FC                  FADD float ptr [EBP + -0x4]
0062C7C6  D9 C1                     FLD ST1
0062C7C8  D8 0D 74 D0 79 00         FMUL float ptr [0x0079d074]
0062C7CE  D8 75 14                  FDIV float ptr [EBP + 0x14]
0062C7D1  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C7D4  D8 0D 74 D0 79 00         FMUL float ptr [0x0079d074]
0062C7DA  D8 75 14                  FDIV float ptr [EBP + 0x14]
0062C7DD  D9 C1                     FLD ST1
0062C7DF  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062C7E2  D9 C1                     FLD ST1
0062C7E4  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062C7E7  DE C1                     FADDP
0062C7E9  D8 46 51                  FADD float ptr [ESI + 0x51]
0062C7EC  E8 97 1A 10 00            CALL 0x0072e288
0062C7F1  D9 C1                     FLD ST1
0062C7F3  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062C7F6  D9 C1                     FLD ST1
0062C7F8  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062C7FB  50                        PUSH EAX
0062C7FC  DE C1                     FADDP
0062C7FE  D8 46 4D                  FADD float ptr [ESI + 0x4d]
0062C801  E8 82 1A 10 00            CALL 0x0072e288
0062C806  D9 C9                     FXCH
0062C808  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062C80B  D9 C9                     FXCH
0062C80D  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062C810  50                        PUSH EAX
0062C811  DE C1                     FADDP
0062C813  D8 46 49                  FADD float ptr [ESI + 0x49]
0062C816  E8 6D 1A 10 00            CALL 0x0072e288
0062C81B  D9 C1                     FLD ST1
0062C81D  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062C820  D9 C1                     FLD ST1
0062C822  D8 4E 51                  FMUL float ptr [ESI + 0x51]
0062C825  50                        PUSH EAX
0062C826  DE C1                     FADDP
0062C828  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C82B  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062C82E  DE C1                     FADDP
0062C830  E8 53 1A 10 00            CALL 0x0072e288
0062C835  D9 C1                     FLD ST1
0062C837  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062C83A  D9 C1                     FLD ST1
0062C83C  D8 4E 4D                  FMUL float ptr [ESI + 0x4d]
0062C83F  03 46 08                  ADD EAX,dword ptr [ESI + 0x8]
0062C842  DE C1                     FADDP
0062C844  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C847  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062C84A  50                        PUSH EAX
0062C84B  DE C1                     FADDP
0062C84D  E8 36 1A 10 00            CALL 0x0072e288
0062C852  D9 C9                     FXCH
0062C854  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062C857  D9 C9                     FXCH
0062C859  D8 4E 49                  FMUL float ptr [ESI + 0x49]
0062C85C  03 46 04                  ADD EAX,dword ptr [ESI + 0x4]
0062C85F  DE C1                     FADDP
0062C861  D9 45 08                  FLD float ptr [EBP + 0x8]
0062C864  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062C867  50                        PUSH EAX
0062C868  DE C1                     FADDP
0062C86A  E8 19 1A 10 00            CALL 0x0072e288
0062C86F  8B 3E                     MOV EDI,dword ptr [ESI]
0062C871  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0062C877  03 C7                     ADD EAX,EDI
0062C879  50                        PUSH EAX
0062C87A  6A 01                     PUSH 0x1
0062C87C  6A 01                     PUSH 0x1
0062C87E  6A 03                     PUSH 0x3
0062C880  E8 AE 4B DD FF            CALL 0x00401433
LAB_0062c885:
0062C885  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062C888  5F                        POP EDI
0062C889  5E                        POP ESI
0062C88A  5B                        POP EBX
0062C88B  8B E5                     MOV ESP,EBP
0062C88D  5D                        POP EBP
0062C88E  C3                        RET
