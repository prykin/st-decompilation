FUN_00676260:
00676260  55                        PUSH EBP
00676261  8B EC                     MOV EBP,ESP
00676263  83 EC 4C                  SUB ESP,0x4c
00676266  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067626B  53                        PUSH EBX
0067626C  56                        PUSH ESI
0067626D  33 DB                     XOR EBX,EBX
0067626F  57                        PUSH EDI
00676270  8D 55 B8                  LEA EDX,[EBP + -0x48]
00676273  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00676276  53                        PUSH EBX
00676277  52                        PUSH EDX
00676278  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0067627B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0067627E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00676281  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00676287  E8 64 75 0B 00            CALL 0x0072d7f0
0067628C  8B F0                     MOV ESI,EAX
0067628E  83 C4 08                  ADD ESP,0x8
00676291  3B F3                     CMP ESI,EBX
00676293  0F 85 AD 00 00 00         JNZ 0x00676346
00676299  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067629F  3B CB                     CMP ECX,EBX
006762A1  74 0C                     JZ 0x006762af
006762A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006762A6  53                        PUSH EBX
006762A7  50                        PUSH EAX
006762A8  E8 4C FA D8 FF            CALL 0x00405cf9
006762AD  EB 02                     JMP 0x006762b1
LAB_006762af:
006762AF  33 C0                     XOR EAX,EAX
LAB_006762b1:
006762B1  3B C3                     CMP EAX,EBX
006762B3  74 0E                     JZ 0x006762c3
006762B5  8B C8                     MOV ECX,EAX
006762B7  E8 F9 CA D8 FF            CALL 0x00402db5
006762BC  8B F8                     MOV EDI,EAX
006762BE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006762C1  EB 03                     JMP 0x006762c6
LAB_006762c3:
006762C3  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006762c6:
006762C6  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006762C9  85 C0                     TEST EAX,EAX
006762CB  76 5C                     JBE 0x00676329
006762CD  33 C9                     XOR ECX,ECX
006762CF  3B C8                     CMP ECX,EAX
006762D1  73 0B                     JNC 0x006762de
LAB_006762d3:
006762D3  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006762D6  0F AF C1                  IMUL EAX,ECX
006762D9  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
006762DC  EB 02                     JMP 0x006762e0
LAB_006762de:
006762DE  33 C0                     XOR EAX,EAX
LAB_006762e0:
006762E0  66 8B 08                  MOV CX,word ptr [EAX]
006762E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006762E6  6A 01                     PUSH 0x1
006762E8  51                        PUSH ECX
006762E9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006762EF  52                        PUSH EDX
006762F0  E8 C5 C5 D8 FF            CALL 0x004028ba
006762F5  8B F0                     MOV ESI,EAX
006762F7  85 F6                     TEST ESI,ESI
006762F9  74 1E                     JZ 0x00676319
006762FB  8B 06                     MOV EAX,dword ptr [ESI]
006762FD  8B CE                     MOV ECX,ESI
006762FF  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00676302  83 F8 78                  CMP EAX,0x78
00676305  75 08                     JNZ 0x0067630f
00676307  8B B6 59 02 00 00         MOV ESI,dword ptr [ESI + 0x259]
0067630D  EB 02                     JMP 0x00676311
LAB_0067630f:
0067630F  33 F6                     XOR ESI,ESI
LAB_00676311:
00676311  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
00676314  75 03                     JNZ 0x00676319
00676316  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_00676319:
00676319  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0067631C  43                        INC EBX
0067631D  8B CB                     MOV ECX,EBX
0067631F  81 E1 FF FF 00 00         AND ECX,0xffff
00676325  3B C8                     CMP ECX,EAX
00676327  72 AA                     JC 0x006762d3
LAB_00676329:
00676329  85 FF                     TEST EDI,EDI
0067632B  74 06                     JZ 0x00676333
0067632D  57                        PUSH EDI
0067632E  E8 DD 7D 03 00            CALL 0x006ae110
LAB_00676333:
00676333  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00676336  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00676339  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067633F  5F                        POP EDI
00676340  5E                        POP ESI
00676341  5B                        POP EBX
00676342  8B E5                     MOV ESP,EBP
00676344  5D                        POP EBP
00676345  C3                        RET
LAB_00676346:
00676346  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00676349  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0067634C  3B C3                     CMP EAX,EBX
0067634E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00676354  74 06                     JZ 0x0067635c
00676356  50                        PUSH EAX
00676357  E8 B4 7D 03 00            CALL 0x006ae110
LAB_0067635c:
0067635C  68 B4 2D 7D 00            PUSH 0x7d2db4
00676361  68 CC 4C 7A 00            PUSH 0x7a4ccc
00676366  56                        PUSH ESI
00676367  53                        PUSH EBX
00676368  68 3A 01 00 00            PUSH 0x13a
0067636D  68 58 2D 7D 00            PUSH 0x7d2d58
00676372  E8 59 71 03 00            CALL 0x006ad4d0
00676377  83 C4 18                  ADD ESP,0x18
0067637A  85 C0                     TEST EAX,EAX
0067637C  74 01                     JZ 0x0067637f
0067637E  CC                        INT3
LAB_0067637f:
0067637F  68 3B 01 00 00            PUSH 0x13b
00676384  68 58 2D 7D 00            PUSH 0x7d2d58
00676389  53                        PUSH EBX
0067638A  56                        PUSH ESI
0067638B  E8 B0 FA 02 00            CALL 0x006a5e40
00676390  8B C6                     MOV EAX,ESI
00676392  5F                        POP EDI
00676393  5E                        POP ESI
00676394  5B                        POP EBX
00676395  8B E5                     MOV ESP,EBP
00676397  5D                        POP EBP
00676398  C3                        RET
