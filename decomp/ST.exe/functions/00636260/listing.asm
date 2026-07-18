FUN_00636260:
00636260  55                        PUSH EBP
00636261  8B EC                     MOV EBP,ESP
00636263  83 EC 4C                  SUB ESP,0x4c
00636266  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00636269  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0063626C  53                        PUSH EBX
0063626D  56                        PUSH ESI
0063626E  8B F1                     MOV ESI,ECX
00636270  57                        PUSH EDI
00636271  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00636274  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00636277  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0063627A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0063627D  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
00636280  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
00636283  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
00636286  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00636289  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0063628E  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00636294  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
00636297  8B CE                     MOV ECX,ESI
00636299  E8 C4 BE DC FF            CALL 0x00402162
0063629E  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
006362A1  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006362A4  33 DB                     XOR EBX,EBX
006362A6  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006362A9  2B C3                     SUB EAX,EBX
006362AB  74 11                     JZ 0x006362be
006362AD  48                        DEC EAX
006362AE  74 05                     JZ 0x006362b5
006362B0  48                        DEC EAX
006362B1  74 0B                     JZ 0x006362be
006362B3  EB 10                     JMP 0x006362c5
LAB_006362b5:
006362B5  C7 46 20 11 00 00 00      MOV dword ptr [ESI + 0x20],0x11
006362BC  EB 07                     JMP 0x006362c5
LAB_006362be:
006362BE  C7 46 20 16 00 00 00      MOV dword ptr [ESI + 0x20],0x16
LAB_006362c5:
006362C5  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006362C8  6A 0A                     PUSH 0xa
006362CA  8B C7                     MOV EAX,EDI
006362CC  6A 32                     PUSH 0x32
006362CE  0F AF 45 1C               IMUL EAX,dword ptr [EBP + 0x1c]
006362D2  50                        PUSH EAX
006362D3  53                        PUSH EBX
006362D4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006362D7  E8 B4 7F 07 00            CALL 0x006ae290
006362DC  8B D0                     MOV EDX,EAX
006362DE  3B D3                     CMP EDX,EBX
006362E0  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
006362E3  0F 84 3A 01 00 00         JZ 0x00636423
006362E9  39 5D 14                  CMP dword ptr [EBP + 0x14],EBX
006362EC  0F 8E 31 01 00 00         JLE 0x00636423
006362F2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006362F5  89 3E                     MOV dword ptr [ESI],EDI
006362F7  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006362FA  B9 0C 00 00 00            MOV ECX,0xc
006362FF  33 C0                     XOR EAX,EAX
00636301  8D 7D B4                  LEA EDI,[EBP + -0x4c]
00636304  F3 AB                     STOSD.REP ES:EDI
00636306  66 AB                     STOSW ES:EDI
00636308  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063630B  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0063630E  48                        DEC EAX
0063630F  51                        PUSH ECX
00636310  50                        PUSH EAX
00636311  52                        PUSH EDX
00636312  E8 29 7E 07 00            CALL 0x006ae140
00636317  DB 45 18                  FILD dword ptr [EBP + 0x18]
0063631A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0063631D  33 FF                     XOR EDI,EDI
0063631F  3B C3                     CMP EAX,EBX
00636321  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
00636324  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
0063632A  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0063632D  0F 8E F0 00 00 00         JLE 0x00636423
00636333  DB 45 14                  FILD dword ptr [EBP + 0x14]
00636336  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
LAB_00636339:
00636339  DB 45 08                  FILD dword ptr [EBP + 0x8]
0063633C  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0063633F  D9 C0                     FLD ST0
00636341  D9 FF                     FCOS
00636343  D9 5D 14                  FSTP float ptr [EBP + 0x14]
00636346  D9 FE                     FSIN
00636348  D9 45 14                  FLD float ptr [EBP + 0x14]
0063634B  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
00636351  E8 32 7F 0F 00            CALL 0x0072e288
00636356  D9 C0                     FLD ST0
00636358  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
0063635E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00636361  E8 22 7F 0F 00            CALL 0x0072e288
00636366  D9 45 0C                  FLD float ptr [EBP + 0xc]
00636369  D8 4D 14                  FMUL float ptr [EBP + 0x14]
0063636C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0063636F  E8 14 7F 0F 00            CALL 0x0072e288
00636374  D9 45 0C                  FLD float ptr [EBP + 0xc]
00636377  D8 C9                     FMUL ST1
00636379  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063637C  E8 07 7F 0F 00            CALL 0x0072e288
00636381  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00636384  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00636387  3B C3                     CMP EAX,EBX
00636389  DD D8                     FSTP ST0
0063638B  0F 8E 83 00 00 00         JLE 0x00636414
00636391  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_00636394:
00636394  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00636397  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0063639A  73 0D                     JNC 0x006363a9
0063639C  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0063639F  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006363A2  0F AF F7                  IMUL ESI,EDI
006363A5  03 F1                     ADD ESI,ECX
006363A7  EB 02                     JMP 0x006363ab
LAB_006363a9:
006363A9  33 F6                     XOR ESI,ESI
LAB_006363ab:
006363AB  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006363AE  89 0E                     MOV dword ptr [ESI],ECX
006363B0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006363B3  39 59 28                  CMP dword ptr [ECX + 0x28],EBX
006363B6  74 0E                     JZ 0x006363c6
006363B8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006363BB  52                        PUSH EDX
006363BC  E8 61 C6 DC FF            CALL 0x00402a22
006363C1  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006363C4  EB 07                     JMP 0x006363cd
LAB_006363c6:
006363C6  C7 46 04 FF FF FF FF      MOV dword ptr [ESI + 0x4],0xffffffff
LAB_006363cd:
006363CD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006363D0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006363D3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006363D6  89 4E 12                  MOV dword ptr [ESI + 0x12],ECX
006363D9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006363DC  89 46 0E                  MOV dword ptr [ESI + 0xe],EAX
006363DF  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006363E2  89 4E 26                  MOV dword ptr [ESI + 0x26],ECX
006363E5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006363E8  89 46 22                  MOV dword ptr [ESI + 0x22],EAX
006363EB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006363EE  89 56 16                  MOV dword ptr [ESI + 0x16],EDX
006363F1  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006363F4  03 F9                     ADD EDI,ECX
006363F6  48                        DEC EAX
006363F7  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
006363FA  88 5E 0D                  MOV byte ptr [ESI + 0xd],BL
006363FD  89 5E 1A                  MOV dword ptr [ESI + 0x1a],EBX
00636400  89 5E 1E                  MOV dword ptr [ESI + 0x1e],EBX
00636403  89 56 2A                  MOV dword ptr [ESI + 0x2a],EDX
00636406  89 5E 2E                  MOV dword ptr [ESI + 0x2e],EBX
00636409  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0063640C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0063640F  75 83                     JNZ 0x00636394
00636411  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00636414:
00636414  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00636417  47                        INC EDI
00636418  3B F8                     CMP EDI,EAX
0063641A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0063641D  0F 8C 16 FF FF FF         JL 0x00636339
LAB_00636423:
00636423  5F                        POP EDI
00636424  5E                        POP ESI
00636425  33 C0                     XOR EAX,EAX
00636427  5B                        POP EBX
00636428  8B E5                     MOV ESP,EBP
0063642A  5D                        POP EBP
0063642B  C2 1C 00                  RET 0x1c
