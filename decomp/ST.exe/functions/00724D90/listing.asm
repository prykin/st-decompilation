FUN_00724d90:
00724D90  55                        PUSH EBP
00724D91  8B EC                     MOV EBP,ESP
00724D93  83 EC 0C                  SUB ESP,0xc
00724D96  56                        PUSH ESI
00724D97  8B F1                     MOV ESI,ECX
00724D99  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00724D9C  83 FA 01                  CMP EDX,0x1
00724D9F  75 05                     JNZ 0x00724da6
00724DA1  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
00724DA4  EB 03                     JMP 0x00724da9
LAB_00724da6:
00724DA6  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
LAB_00724da9:
00724DA9  2B 86 3C 01 00 00         SUB EAX,dword ptr [ESI + 0x13c]
00724DAF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00724DB2  8B 86 90 01 00 00         MOV EAX,dword ptr [ESI + 0x190]
00724DB8  85 C0                     TEST EAX,EAX
00724DBA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00724DBD  75 08                     JNZ 0x00724dc7
00724DBF  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
00724DC5  EB 1F                     JMP 0x00724de6
LAB_00724dc7:
00724DC7  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00724DCD  DB 45 FC                  FILD dword ptr [EBP + -0x4]
00724DD0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00724DD3  49                        DEC ECX
00724DD4  3B C1                     CMP EAX,ECX
00724DD6  74 0E                     JZ 0x00724de6
00724DD8  DA 75 F8                  FIDIV dword ptr [EBP + -0x8]
00724DDB  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00724DDE  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
00724DE4  DE C9                     FMULP
LAB_00724de6:
00724DE6  83 FA 01                  CMP EDX,0x1
00724DE9  75 1A                     JNZ 0x00724e05
00724DEB  C7 86 94 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x194],0x0
00724DF5  E8 8E 94 00 00            CALL 0x0072e288
00724DFA  89 86 98 01 00 00         MOV dword ptr [ESI + 0x198],EAX
00724E00  5E                        POP ESI
00724E01  8B E5                     MOV ESP,EBP
00724E03  5D                        POP EBP
00724E04  C3                        RET
LAB_00724e05:
00724E05  E8 7E 94 00 00            CALL 0x0072e288
00724E0A  89 86 94 01 00 00         MOV dword ptr [ESI + 0x194],EAX
00724E10  C7 86 98 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x198],0x0
00724E1A  5E                        POP ESI
00724E1B  8B E5                     MOV ESP,EBP
00724E1D  5D                        POP EBP
00724E1E  C3                        RET
