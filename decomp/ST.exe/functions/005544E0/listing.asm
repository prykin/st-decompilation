cLoadingTy::delete:
005544E0  55                        PUSH EBP
005544E1  8B EC                     MOV EBP,ESP
005544E3  83 EC 44                  SUB ESP,0x44
005544E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005544EB  56                        PUSH ESI
005544EC  8D 55 C0                  LEA EDX,[EBP + -0x40]
005544EF  8D 4D BC                  LEA ECX,[EBP + -0x44]
005544F2  6A 00                     PUSH 0x0
005544F4  52                        PUSH EDX
005544F5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005544F8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005544FE  E8 ED 92 1D 00            CALL 0x0072d7f0
00554503  8B F0                     MOV ESI,EAX
00554505  83 C4 08                  ADD ESP,0x8
00554508  85 F6                     TEST ESI,ESI
0055450A  75 3D                     JNZ 0x00554549
0055450C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055450F  85 F6                     TEST ESI,ESI
00554511  74 29                     JZ 0x0055453c
00554513  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
00554519  56                        PUSH ESI
0055451A  E8 C1 DB 19 00            CALL 0x006f20e0
0055451F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00554522  85 C0                     TEST EAX,EAX
00554524  74 09                     JZ 0x0055452f
00554526  50                        PUSH EAX
00554527  E8 34 C0 1B 00            CALL 0x00710560
0055452C  83 C4 04                  ADD ESP,0x4
LAB_0055452f:
0055452F  8B CE                     MOV ECX,ESI
00554531  E8 51 DF EA FF            CALL 0x00402487
00554536  56                        PUSH ESI
00554537  E8 54 19 15 00            CALL 0x006a5e90
LAB_0055453c:
0055453C  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0055453F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00554544  5E                        POP ESI
00554545  8B E5                     MOV ESP,EBP
00554547  5D                        POP EBP
00554548  C3                        RET
LAB_00554549:
00554549  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0055454C  68 30 8F 7C 00            PUSH 0x7c8f30
00554551  68 CC 4C 7A 00            PUSH 0x7a4ccc
00554556  56                        PUSH ESI
00554557  6A 00                     PUSH 0x0
00554559  6A 52                     PUSH 0x52
0055455B  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554560  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554566  E8 65 8F 15 00            CALL 0x006ad4d0
0055456B  83 C4 18                  ADD ESP,0x18
0055456E  85 C0                     TEST EAX,EAX
00554570  74 01                     JZ 0x00554573
00554572  CC                        INT3
LAB_00554573:
00554573  6A 53                     PUSH 0x53
00554575  68 0C 8F 7C 00            PUSH 0x7c8f0c
0055457A  6A 00                     PUSH 0x0
0055457C  56                        PUSH ESI
0055457D  E8 BE 18 15 00            CALL 0x006a5e40
00554582  5E                        POP ESI
00554583  8B E5                     MOV ESP,EBP
00554585  5D                        POP EBP
00554586  C3                        RET
