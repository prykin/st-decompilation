FUN_006c6290:
006C6290  55                        PUSH EBP
006C6291  8B EC                     MOV EBP,ESP
006C6293  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C6296  53                        PUSH EBX
006C6297  56                        PUSH ESI
006C6298  57                        PUSH EDI
006C6299  F6 80 9C 04 00 00 01      TEST byte ptr [EAX + 0x49c],0x1
006C62A0  8B 88 98 04 00 00         MOV ECX,dword ptr [EAX + 0x498]
006C62A6  0F 85 91 00 00 00         JNZ 0x006c633d
006C62AC  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006C62AF  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C62B2  83 F9 07                  CMP ECX,0x7
006C62B5  75 43                     JNZ 0x006c62fa
006C62B7  3B F0                     CMP ESI,EAX
006C62B9  0F 8F 46 01 00 00         JG 0x006c6405
006C62BF  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C62C2  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C62C5  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C62C8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c62cb:
006C62CB  3B 7D 20                  CMP EDI,dword ptr [EBP + 0x20]
006C62CE  0F 8F 31 01 00 00         JG 0x006c6405
006C62D4  8A 5D 38                  MOV BL,byte ptr [EBP + 0x38]
006C62D7  30 18                     XOR byte ptr [EAX],BL
006C62D9  85 C9                     TEST ECX,ECX
006C62DB  7C 07                     JL 0x006c62e4
006C62DD  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C62E0  40                        INC EAX
006C62E1  2B CB                     SUB ECX,EBX
006C62E3  46                        INC ESI
LAB_006c62e4:
006C62E4  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C62E7  03 CA                     ADD ECX,EDX
006C62E9  03 C3                     ADD EAX,EBX
006C62EB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C62EE  47                        INC EDI
006C62EF  3B F3                     CMP ESI,EBX
006C62F1  7E D8                     JLE 0x006c62cb
006C62F3  5F                        POP EDI
006C62F4  5E                        POP ESI
006C62F5  5B                        POP EBX
006C62F6  5D                        POP EBP
006C62F7  C2 38 00                  RET 0x38
LAB_006c62fa:
006C62FA  3B F0                     CMP ESI,EAX
006C62FC  0F 8F 03 01 00 00         JG 0x006c6405
006C6302  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C6305  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C6308  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C630B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c630e:
006C630E  3B 7D 20                  CMP EDI,dword ptr [EBP + 0x20]
006C6311  0F 8F EE 00 00 00         JG 0x006c6405
006C6317  8A 5D 38                  MOV BL,byte ptr [EBP + 0x38]
006C631A  85 C9                     TEST ECX,ECX
006C631C  88 18                     MOV byte ptr [EAX],BL
006C631E  7C 07                     JL 0x006c6327
006C6320  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C6323  40                        INC EAX
006C6324  2B CB                     SUB ECX,EBX
006C6326  46                        INC ESI
LAB_006c6327:
006C6327  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C632A  03 CA                     ADD ECX,EDX
006C632C  03 C3                     ADD EAX,EBX
006C632E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C6331  47                        INC EDI
006C6332  3B F3                     CMP ESI,EBX
006C6334  7E D8                     JLE 0x006c630e
006C6336  5F                        POP EDI
006C6337  5E                        POP ESI
006C6338  5B                        POP EBX
006C6339  5D                        POP EBP
006C633A  C2 38 00                  RET 0x38
LAB_006c633d:
006C633D  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006C6340  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C6343  83 F9 07                  CMP ECX,0x7
006C6346  75 66                     JNZ 0x006c63ae
006C6348  3B F0                     CMP ESI,EAX
006C634A  0F 8F B5 00 00 00         JG 0x006c6405
006C6350  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C6353  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C6356  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C6359  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c635c:
006C635C  3B 7D 20                  CMP EDI,dword ptr [EBP + 0x20]
006C635F  0F 8F A0 00 00 00         JG 0x006c6405
006C6365  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C6368  85 5D 30                  TEST dword ptr [EBP + 0x30],EBX
006C636B  74 05                     JZ 0x006c6372
006C636D  8A 5D 38                  MOV BL,byte ptr [EBP + 0x38]
006C6370  EB 08                     JMP 0x006c637a
LAB_006c6372:
006C6372  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006C6375  83 FB FF                  CMP EBX,-0x1
006C6378  74 02                     JZ 0x006c637c
LAB_006c637a:
006C637A  30 18                     XOR byte ptr [EAX],BL
LAB_006c637c:
006C637C  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C637F  D1 EB                     SHR EBX,0x1
006C6381  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006C6384  75 07                     JNZ 0x006c638d
006C6386  C7 45 34 00 00 00 80      MOV dword ptr [EBP + 0x34],0x80000000
LAB_006c638d:
006C638D  85 C9                     TEST ECX,ECX
006C638F  7C 07                     JL 0x006c6398
006C6391  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C6394  40                        INC EAX
006C6395  2B CB                     SUB ECX,EBX
006C6397  46                        INC ESI
LAB_006c6398:
006C6398  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C639B  03 CA                     ADD ECX,EDX
006C639D  03 C3                     ADD EAX,EBX
006C639F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C63A2  47                        INC EDI
006C63A3  3B F3                     CMP ESI,EBX
006C63A5  7E B5                     JLE 0x006c635c
006C63A7  5F                        POP EDI
006C63A8  5E                        POP ESI
006C63A9  5B                        POP EBX
006C63AA  5D                        POP EBP
006C63AB  C2 38 00                  RET 0x38
LAB_006c63ae:
006C63AE  3B F0                     CMP ESI,EAX
006C63B0  7F 53                     JG 0x006c6405
006C63B2  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C63B5  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C63B8  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C63BB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c63be:
006C63BE  3B 7D 20                  CMP EDI,dword ptr [EBP + 0x20]
006C63C1  7F 42                     JG 0x006c6405
006C63C3  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C63C6  85 5D 30                  TEST dword ptr [EBP + 0x30],EBX
006C63C9  74 05                     JZ 0x006c63d0
006C63CB  8A 5D 38                  MOV BL,byte ptr [EBP + 0x38]
006C63CE  EB 08                     JMP 0x006c63d8
LAB_006c63d0:
006C63D0  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006C63D3  83 FB FF                  CMP EBX,-0x1
006C63D6  74 02                     JZ 0x006c63da
LAB_006c63d8:
006C63D8  88 18                     MOV byte ptr [EAX],BL
LAB_006c63da:
006C63DA  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C63DD  D1 EB                     SHR EBX,0x1
006C63DF  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006C63E2  75 07                     JNZ 0x006c63eb
006C63E4  C7 45 34 00 00 00 80      MOV dword ptr [EBP + 0x34],0x80000000
LAB_006c63eb:
006C63EB  85 C9                     TEST ECX,ECX
006C63ED  7C 07                     JL 0x006c63f6
006C63EF  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C63F2  40                        INC EAX
006C63F3  2B CB                     SUB ECX,EBX
006C63F5  46                        INC ESI
LAB_006c63f6:
006C63F6  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C63F9  03 CA                     ADD ECX,EDX
006C63FB  03 C3                     ADD EAX,EBX
006C63FD  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C6400  47                        INC EDI
006C6401  3B F3                     CMP ESI,EBX
006C6403  7E B9                     JLE 0x006c63be
LAB_006c6405:
006C6405  5F                        POP EDI
006C6406  5E                        POP ESI
006C6407  5B                        POP EBX
006C6408  5D                        POP EBP
006C6409  C2 38 00                  RET 0x38
