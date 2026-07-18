FrmPanelTy::ShiftControls:
00510370  55                        PUSH EBP
00510371  8B EC                     MOV EBP,ESP
00510373  83 EC 48                  SUB ESP,0x48
00510376  53                        PUSH EBX
00510377  56                        PUSH ESI
00510378  8B F1                     MOV ESI,ECX
0051037A  57                        PUSH EDI
0051037B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051037E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00510381  3B 7E 5C                  CMP EDI,dword ptr [ESI + 0x5c]
00510384  0F 84 D9 00 00 00         JZ 0x00510463
0051038A  57                        PUSH EDI
0051038B  E8 A6 49 EF FF            CALL 0x00404d36
00510390  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
00510396  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
0051039D  85 FF                     TEST EDI,EDI
0051039F  74 02                     JZ 0x005103a3
005103A1  F7 D8                     NEG EAX
LAB_005103a3:
005103A3  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
005103A7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005103AC  8D 55 BC                  LEA EDX,[EBP + -0x44]
005103AF  8D 4D B8                  LEA ECX,[EBP + -0x48]
005103B2  6A 00                     PUSH 0x0
005103B4  52                        PUSH EDX
005103B5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005103B8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005103BE  E8 2D D4 21 00            CALL 0x0072d7f0
005103C3  8B F0                     MOV ESI,EAX
005103C5  83 C4 08                  ADD ESP,0x8
005103C8  85 F6                     TEST ESI,ESI
005103CA  75 5E                     JNZ 0x0051042a
005103CC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005103CF  BB 08 00 00 00            MOV EBX,0x8
005103D4  8D BE B3 01 00 00         LEA EDI,[ESI + 0x1b3]
LAB_005103da:
005103DA  8B 07                     MOV EAX,dword ptr [EDI]
005103DC  85 C0                     TEST EAX,EAX
005103DE  74 0E                     JZ 0x005103ee
005103E0  8D 4E 18                  LEA ECX,[ESI + 0x18]
005103E3  51                        PUSH ECX
005103E4  50                        PUSH EAX
005103E5  6A 02                     PUSH 0x2
005103E7  8B CE                     MOV ECX,ESI
005103E9  E8 92 5C 1D 00            CALL 0x006e6080
LAB_005103ee:
005103EE  83 C7 04                  ADD EDI,0x4
005103F1  4B                        DEC EBX
005103F2  75 E6                     JNZ 0x005103da
005103F4  8D BE D3 01 00 00         LEA EDI,[ESI + 0x1d3]
005103FA  BB 04 00 00 00            MOV EBX,0x4
LAB_005103ff:
005103FF  8B 07                     MOV EAX,dword ptr [EDI]
00510401  85 C0                     TEST EAX,EAX
00510403  74 0E                     JZ 0x00510413
00510405  8D 56 18                  LEA EDX,[ESI + 0x18]
00510408  8B CE                     MOV ECX,ESI
0051040A  52                        PUSH EDX
0051040B  50                        PUSH EAX
0051040C  6A 02                     PUSH 0x2
0051040E  E8 6D 5C 1D 00            CALL 0x006e6080
LAB_00510413:
00510413  83 C7 04                  ADD EDI,0x4
00510416  4B                        DEC EBX
00510417  75 E6                     JNZ 0x005103ff
00510419  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051041C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00510421  5F                        POP EDI
00510422  5E                        POP ESI
00510423  5B                        POP EBX
00510424  8B E5                     MOV ESP,EBP
00510426  5D                        POP EBP
00510427  C2 04 00                  RET 0x4
LAB_0051042a:
0051042A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0051042D  68 8C 2A 7C 00            PUSH 0x7c2a8c
00510432  68 CC 4C 7A 00            PUSH 0x7a4ccc
00510437  56                        PUSH ESI
00510438  6A 00                     PUSH 0x0
0051043A  6A 5E                     PUSH 0x5e
0051043C  68 58 29 7C 00            PUSH 0x7c2958
00510441  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00510447  E8 84 D0 19 00            CALL 0x006ad4d0
0051044C  83 C4 18                  ADD ESP,0x18
0051044F  85 C0                     TEST EAX,EAX
00510451  74 01                     JZ 0x00510454
00510453  CC                        INT3
LAB_00510454:
00510454  6A 5E                     PUSH 0x5e
00510456  68 58 29 7C 00            PUSH 0x7c2958
0051045B  6A 00                     PUSH 0x0
0051045D  56                        PUSH ESI
0051045E  E8 DD 59 19 00            CALL 0x006a5e40
LAB_00510463:
00510463  5F                        POP EDI
00510464  5E                        POP ESI
00510465  5B                        POP EBX
00510466  8B E5                     MOV ESP,EBP
00510468  5D                        POP EBP
00510469  C2 04 00                  RET 0x4
