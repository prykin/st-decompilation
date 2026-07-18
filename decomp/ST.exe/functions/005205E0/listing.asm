FUN_005205e0:
005205E0  55                        PUSH EBP
005205E1  8B EC                     MOV EBP,ESP
005205E3  83 EC 48                  SUB ESP,0x48
005205E6  56                        PUSH ESI
005205E7  8B F1                     MOV ESI,ECX
005205E9  57                        PUSH EDI
005205EA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005205ED  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
005205F0  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005205F3  3B F8                     CMP EDI,EAX
005205F5  0F 84 A4 00 00 00         JZ 0x0052069f
005205FB  57                        PUSH EDI
005205FC  E8 35 47 EE FF            CALL 0x00404d36
00520601  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
00520607  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
0052060E  85 FF                     TEST EDI,EDI
00520610  74 02                     JZ 0x00520614
00520612  F7 D8                     NEG EAX
LAB_00520614:
00520614  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
00520618  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052061D  8D 55 BC                  LEA EDX,[EBP + -0x44]
00520620  8D 4D B8                  LEA ECX,[EBP + -0x48]
00520623  6A 00                     PUSH 0x0
00520625  52                        PUSH EDX
00520626  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00520629  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052062F  E8 BC D1 20 00            CALL 0x0072d7f0
00520634  8B F0                     MOV ESI,EAX
00520636  83 C4 08                  ADD ESP,0x8
00520639  85 F6                     TEST ESI,ESI
0052063B  75 29                     JNZ 0x00520666
0052063D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00520640  8B 81 D0 03 00 00         MOV EAX,dword ptr [ECX + 0x3d0]
00520646  85 C0                     TEST EAX,EAX
00520648  74 0C                     JZ 0x00520656
0052064A  8D 51 18                  LEA EDX,[ECX + 0x18]
0052064D  52                        PUSH EDX
0052064E  50                        PUSH EAX
0052064F  6A 02                     PUSH 0x2
00520651  E8 2A 5A 1C 00            CALL 0x006e6080
LAB_00520656:
00520656  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00520659  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052065E  5F                        POP EDI
0052065F  5E                        POP ESI
00520660  8B E5                     MOV ESP,EBP
00520662  5D                        POP EBP
00520663  C2 04 00                  RET 0x4
LAB_00520666:
00520666  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00520669  68 50 3F 7C 00            PUSH 0x7c3f50
0052066E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00520673  56                        PUSH ESI
00520674  6A 00                     PUSH 0x0
00520676  6A 5C                     PUSH 0x5c
00520678  68 B0 3E 7C 00            PUSH 0x7c3eb0
0052067D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00520683  E8 48 CE 18 00            CALL 0x006ad4d0
00520688  83 C4 18                  ADD ESP,0x18
0052068B  85 C0                     TEST EAX,EAX
0052068D  74 01                     JZ 0x00520690
0052068F  CC                        INT3
LAB_00520690:
00520690  6A 5C                     PUSH 0x5c
00520692  68 B0 3E 7C 00            PUSH 0x7c3eb0
00520697  6A 00                     PUSH 0x0
00520699  56                        PUSH ESI
0052069A  E8 A1 57 18 00            CALL 0x006a5e40
LAB_0052069f:
0052069F  5F                        POP EDI
005206A0  5E                        POP ESI
005206A1  8B E5                     MOV ESP,EBP
005206A3  5D                        POP EBP
005206A4  C2 04 00                  RET 0x4
