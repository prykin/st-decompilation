FUN_007550c0:
007550C0  55                        PUSH EBP
007550C1  8B EC                     MOV EBP,ESP
007550C3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007550C6  83 F8 08                  CMP EAX,0x8
007550C9  7E 20                     JLE 0x007550eb
007550CB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007550CE  8B 10                     MOV EDX,dword ptr [EAX]
007550D0  89 51 30                  MOV dword ptr [ECX + 0x30],EDX
007550D3  66 8B 50 0C               MOV DX,word ptr [EAX + 0xc]
007550D7  66 89 51 34               MOV word ptr [ECX + 0x34],DX
007550DB  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
007550DE  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
007550E1  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
007550E4  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
007550E7  5D                        POP EBP
007550E8  C2 08 00                  RET 0x8
LAB_007550eb:
007550EB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007550EE  25 FF 00 00 00            AND EAX,0xff
007550F3  89 41 30                  MOV dword ptr [ECX + 0x30],EAX
007550F6  48                        DEC EAX
007550F7  83 F8 07                  CMP EAX,0x7
007550FA  77 51                     JA 0x0075514d
switchD_007550fc::switchD:
007550FC  FF 24 85 54 51 75 00      JMP dword ptr [EAX*0x4 + 0x755154]
switchD_007550fc::caseD_1:
00755103  66 C7 41 34 01 00         MOV word ptr [ECX + 0x34],0x1
00755109  5D                        POP EBP
0075510A  C2 08 00                  RET 0x8
switchD_007550fc::caseD_3:
0075510D  66 C7 41 34 02 00         MOV word ptr [ECX + 0x34],0x2
00755113  5D                        POP EBP
00755114  C2 08 00                  RET 0x8
switchD_007550fc::caseD_5:
00755117  66 C7 41 34 04 00         MOV word ptr [ECX + 0x34],0x4
0075511D  5D                        POP EBP
0075511E  C2 08 00                  RET 0x8
switchD_007550fc::caseD_7:
00755121  C7 41 04 28 29 40 00      MOV dword ptr [ECX + 0x4],0x402928
00755128  C7 41 08 30 74 75 00      MOV dword ptr [ECX + 0x8],0x757430
0075512F  66 C7 41 34 00 00         MOV word ptr [ECX + 0x34],0x0
00755135  5D                        POP EBP
00755136  C2 08 00                  RET 0x8
switchD_007550fc::caseD_8:
00755139  C7 41 04 2C 2F 40 00      MOV dword ptr [ECX + 0x4],0x402f2c
00755140  C7 41 08 30 74 75 00      MOV dword ptr [ECX + 0x8],0x757430
00755147  66 C7 41 34 00 00         MOV word ptr [ECX + 0x34],0x0
switchD_007550fc::default:
0075514D  5D                        POP EBP
0075514E  C2 08 00                  RET 0x8
