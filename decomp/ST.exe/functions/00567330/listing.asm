FUN_00567330:
00567330  55                        PUSH EBP
00567331  8B EC                     MOV EBP,ESP
00567333  81 EC 4C 01 00 00         SUB ESP,0x14c
00567339  8B 81 EF 0D 00 00         MOV EAX,dword ptr [ECX + 0xdef]
0056733F  53                        PUSH EBX
00567340  56                        PUSH ESI
00567341  57                        PUSH EDI
00567342  85 C0                     TEST EAX,EAX
00567344  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00567347  74 0E                     JZ 0x00567357
00567349  8B 81 F3 0D 00 00         MOV EAX,dword ptr [ECX + 0xdf3]
0056734F  85 C0                     TEST EAX,EAX
00567351  0F 85 D8 00 00 00         JNZ 0x0056742f
LAB_00567357:
00567357  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056735C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0056735F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00567362  6A 00                     PUSH 0x0
00567364  52                        PUSH EDX
00567365  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00567368  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056736E  E8 7D 64 1C 00            CALL 0x0072d7f0
00567373  83 C4 08                  ADD ESP,0x8
00567376  85 C0                     TEST EAX,EAX
00567378  0F 85 9B 00 00 00         JNZ 0x00567419
0056737E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00567381  83 C9 FF                  OR ECX,0xffffffff
00567384  8D 95 B4 FE FF FF         LEA EDX,[EBP + 0xfffffeb4]
0056738A  8D BB 30 02 00 00         LEA EDI,[EBX + 0x230]
00567390  F2 AE                     SCASB.REPNE ES:EDI
00567392  F7 D1                     NOT ECX
00567394  2B F9                     SUB EDI,ECX
00567396  8B C1                     MOV EAX,ECX
00567398  8B F7                     MOV ESI,EDI
0056739A  8B FA                     MOV EDI,EDX
0056739C  8D 95 B4 FE FF FF         LEA EDX,[EBP + 0xfffffeb4]
005673A2  C1 E9 02                  SHR ECX,0x2
005673A5  F3 A5                     MOVSD.REP ES:EDI,ESI
005673A7  8B C8                     MOV ECX,EAX
005673A9  33 C0                     XOR EAX,EAX
005673AB  83 E1 03                  AND ECX,0x3
005673AE  50                        PUSH EAX
005673AF  F3 A4                     MOVSB.REP ES:EDI,ESI
005673B1  8B 3D 28 B0 79 00         MOV EDI,dword ptr [0x0079b028]
005673B7  83 C9 FF                  OR ECX,0xffffffff
005673BA  F2 AE                     SCASB.REPNE ES:EDI
005673BC  F7 D1                     NOT ECX
005673BE  2B F9                     SUB EDI,ECX
005673C0  50                        PUSH EAX
005673C1  8B F7                     MOV ESI,EDI
005673C3  8B FA                     MOV EDI,EDX
005673C5  8B D1                     MOV EDX,ECX
005673C7  83 C9 FF                  OR ECX,0xffffffff
005673CA  F2 AE                     SCASB.REPNE ES:EDI
005673CC  8B CA                     MOV ECX,EDX
005673CE  4F                        DEC EDI
005673CF  C1 E9 02                  SHR ECX,0x2
005673D2  F3 A5                     MOVSD.REP ES:EDI,ESI
005673D4  8B CA                     MOV ECX,EDX
005673D6  50                        PUSH EAX
005673D7  8D 85 B4 FE FF FF         LEA EAX,[EBP + 0xfffffeb4]
005673DD  83 E1 03                  AND ECX,0x3
005673E0  50                        PUSH EAX
005673E1  68 45 03 00 00            PUSH 0x345
005673E6  F3 A4                     MOVSB.REP ES:EDI,ESI
005673E8  E8 D3 9A 18 00            CALL 0x006f0ec0
005673ED  6A 00                     PUSH 0x0
005673EF  68 F0 97 7C 00            PUSH 0x7c97f0
005673F4  50                        PUSH EAX
005673F5  89 83 EF 0D 00 00         MOV dword ptr [EBX + 0xdef],EAX
005673FB  E8 E0 31 1B 00            CALL 0x0071a5e0
00567400  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00567403  89 83 F3 0D 00 00         MOV dword ptr [EBX + 0xdf3],EAX
00567409  83 C4 20                  ADD ESP,0x20
0056740C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00567412  5F                        POP EDI
00567413  5E                        POP ESI
00567414  5B                        POP EBX
00567415  8B E5                     MOV ESP,EBP
00567417  5D                        POP EBP
00567418  C3                        RET
LAB_00567419:
00567419  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0056741C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056741F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00567425  C7 80 8B 0F 00 00 00 00 00 00  MOV dword ptr [EAX + 0xf8b],0x0
LAB_0056742f:
0056742F  5F                        POP EDI
00567430  5E                        POP ESI
00567431  5B                        POP EBX
00567432  8B E5                     MOV ESP,EBP
00567434  5D                        POP EBP
00567435  C3                        RET
