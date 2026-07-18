FUN_0060d940:
0060D940  55                        PUSH EBP
0060D941  8B EC                     MOV EBP,ESP
0060D943  83 EC 10                  SUB ESP,0x10
0060D946  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
0060D94C  56                        PUSH ESI
0060D94D  8B F1                     MOV ESI,ECX
0060D94F  33 C0                     XOR EAX,EAX
0060D951  8B 8E 44 02 00 00         MOV ECX,dword ptr [ESI + 0x244]
0060D957  85 C9                     TEST ECX,ECX
0060D959  0F 84 F4 00 00 00         JZ 0x0060da53
0060D95F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0060D962  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060D969  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060D96C  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0060D96F  85 C0                     TEST EAX,EAX
0060D971  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
0060D977  D9 5D F4                  FSTP float ptr [EBP + -0xc]
0060D97A  0F 8E C7 00 00 00         JLE 0x0060da47
0060D980  53                        PUSH EBX
0060D981  57                        PUSH EDI
LAB_0060d982:
0060D982  D8 45 F4                  FADD float ptr [EBP + -0xc]
0060D985  DB 86 FD 01 00 00         FILD dword ptr [ESI + 0x1fd]
0060D98B  D9 C1                     FLD ST1
0060D98D  D9 FF                     FCOS
0060D98F  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
0060D992  8B D9                     MOV EBX,ECX
0060D994  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0060D997  0F AF 5D FC               IMUL EBX,dword ptr [EBP + -0x4]
0060D99B  D8 C9                     FMUL ST1
0060D99D  E8 E6 08 12 00            CALL 0x0072e288
0060D9A2  D9 C1                     FLD ST1
0060D9A4  D9 FE                     FSIN
0060D9A6  8B F8                     MOV EDI,EAX
0060D9A8  8B 86 E9 01 00 00         MOV EAX,dword ptr [ESI + 0x1e9]
0060D9AE  03 F8                     ADD EDI,EAX
0060D9B0  D8 C9                     FMUL ST1
0060D9B2  E8 D1 08 12 00            CALL 0x0072e288
0060D9B7  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
0060D9BD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0060D9C0  03 C2                     ADD EAX,EDX
0060D9C2  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0060D9C9  85 C9                     TEST ECX,ECX
0060D9CB  DD D8                     FSTP ST0
0060D9CD  7E 5E                     JLE 0x0060da2d
0060D9CF  8B D3                     MOV EDX,EBX
LAB_0060d9d1:
0060D9D1  8B 9E 34 02 00 00         MOV EBX,dword ptr [ESI + 0x234]
0060D9D7  3B 53 0C                  CMP EDX,dword ptr [EBX + 0xc]
0060D9DA  73 3E                     JNC 0x0060da1a
0060D9DC  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0060D9DF  0F AF CA                  IMUL ECX,EDX
0060D9E2  03 4B 1C                  ADD ECX,dword ptr [EBX + 0x1c]
0060D9E5  85 C9                     TEST ECX,ECX
0060D9E7  74 31                     JZ 0x0060da1a
0060D9E9  89 79 18                  MOV dword ptr [ECX + 0x18],EDI
0060D9EC  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0060D9EF  8B 9E F1 01 00 00         MOV EBX,dword ptr [ESI + 0x1f1]
0060D9F5  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
0060D9F8  D9 51 2C                  FST float ptr [ECX + 0x2c]
0060D9FB  89 59 20                  MOV dword ptr [ECX + 0x20],EBX
0060D9FE  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
0060DA01  89 59 14                  MOV dword ptr [ECX + 0x14],EBX
0060DA04  C7 41 28 14 00 00 00      MOV dword ptr [ECX + 0x28],0x14
0060DA0B  C7 41 24 00 00 00 00      MOV dword ptr [ECX + 0x24],0x0
0060DA12  8B 9E 11 02 00 00         MOV EBX,dword ptr [ESI + 0x211]
0060DA18  89 19                     MOV dword ptr [ECX],EBX
LAB_0060da1a:
0060DA1A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0060DA1D  8B 9E 44 02 00 00         MOV EBX,dword ptr [ESI + 0x244]
0060DA23  41                        INC ECX
0060DA24  42                        INC EDX
0060DA25  3B 4B 10                  CMP ECX,dword ptr [EBX + 0x10]
0060DA28  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0060DA2B  7C A4                     JL 0x0060d9d1
LAB_0060da2d:
0060DA2D  8B 8E 44 02 00 00         MOV ECX,dword ptr [ESI + 0x244]
0060DA33  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060DA36  40                        INC EAX
0060DA37  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0060DA3A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060DA3D  3B C2                     CMP EAX,EDX
0060DA3F  0F 8C 3D FF FF FF         JL 0x0060d982
0060DA45  5F                        POP EDI
0060DA46  5B                        POP EBX
LAB_0060da47:
0060DA47  DD D8                     FSTP ST0
0060DA49  B8 01 00 00 00            MOV EAX,0x1
0060DA4E  5E                        POP ESI
0060DA4F  8B E5                     MOV ESP,EBP
0060DA51  5D                        POP EBP
0060DA52  C3                        RET
LAB_0060da53:
0060DA53  DD D8                     FSTP ST0
0060DA55  5E                        POP ESI
0060DA56  8B E5                     MOV ESP,EBP
0060DA58  5D                        POP EBP
0060DA59  C3                        RET
