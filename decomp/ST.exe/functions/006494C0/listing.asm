FUN_006494c0:
006494C0  55                        PUSH EBP
006494C1  8B EC                     MOV EBP,ESP
006494C3  81 EC 90 04 00 00         SUB ESP,0x490
006494C9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006494CE  53                        PUSH EBX
006494CF  56                        PUSH ESI
006494D0  57                        PUSH EDI
006494D1  33 FF                     XOR EDI,EDI
006494D3  8D 55 90                  LEA EDX,[EBP + -0x70]
006494D6  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006494D9  57                        PUSH EDI
006494DA  52                        PUSH EDX
006494DB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006494DE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006494E1  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006494E4  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
006494E7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006494ED  E8 FE 42 0E 00            CALL 0x0072d7f0
006494F2  8B F0                     MOV ESI,EAX
006494F4  83 C4 08                  ADD ESP,0x8
006494F7  3B F7                     CMP ESI,EDI
006494F9  0F 85 95 01 00 00         JNZ 0x00649694
006494FF  B9 06 00 00 00            MOV ECX,0x6
00649504  33 C0                     XOR EAX,EAX
00649506  8D 7D D0                  LEA EDI,[EBP + -0x30]
00649509  8D 95 74 FC FF FF         LEA EDX,[EBP + 0xfffffc74]
0064950F  F3 AB                     STOSD.REP ES:EDI
00649511  B9 C6 00 00 00            MOV ECX,0xc6
00649516  8D BD 70 FB FF FF         LEA EDI,[EBP + 0xfffffb70]
0064951C  F3 AB                     STOSD.REP ES:EDI
0064951E  83 C9 FF                  OR ECX,0xffffffff
00649521  BF 80 76 80 00            MOV EDI,0x807680
00649526  F2 AE                     SCASB.REPNE ES:EDI
00649528  F7 D1                     NOT ECX
0064952A  2B F9                     SUB EDI,ECX
0064952C  8D 9D 74 FC FF FF         LEA EBX,[EBP + 0xfffffc74]
00649532  8B C1                     MOV EAX,ECX
00649534  8B F7                     MOV ESI,EDI
00649536  C1 E9 02                  SHR ECX,0x2
00649539  8B FA                     MOV EDI,EDX
0064953B  8B 15 5C D6 79 00         MOV EDX,dword ptr [0x0079d65c]
00649541  F3 A5                     MOVSD.REP ES:EDI,ESI
00649543  8B C8                     MOV ECX,EAX
00649545  33 C0                     XOR EAX,EAX
00649547  83 E1 03                  AND ECX,0x3
0064954A  F3 A4                     MOVSB.REP ES:EDI,ESI
0064954C  83 C9 FF                  OR ECX,0xffffffff
0064954F  8B FA                     MOV EDI,EDX
00649551  F2 AE                     SCASB.REPNE ES:EDI
00649553  F7 D1                     NOT ECX
00649555  2B F9                     SUB EDI,ECX
00649557  8B F7                     MOV ESI,EDI
00649559  8B FB                     MOV EDI,EBX
0064955B  8B D9                     MOV EBX,ECX
0064955D  83 C9 FF                  OR ECX,0xffffffff
00649560  F2 AE                     SCASB.REPNE ES:EDI
00649562  8B CB                     MOV ECX,EBX
00649564  4F                        DEC EDI
00649565  C1 E9 02                  SHR ECX,0x2
00649568  F3 A5                     MOVSD.REP ES:EDI,ESI
0064956A  8B CB                     MOV ECX,EBX
0064956C  8D 9D 88 FE FF FF         LEA EBX,[EBP + 0xfffffe88]
00649572  83 E1 03                  AND ECX,0x3
00649575  F3 A4                     MOVSB.REP ES:EDI,ESI
00649577  BF 80 76 80 00            MOV EDI,0x807680
0064957C  83 C9 FF                  OR ECX,0xffffffff
0064957F  F2 AE                     SCASB.REPNE ES:EDI
00649581  F7 D1                     NOT ECX
00649583  2B F9                     SUB EDI,ECX
00649585  8B C1                     MOV EAX,ECX
00649587  8B F7                     MOV ESI,EDI
00649589  8B FB                     MOV EDI,EBX
0064958B  8D 9D 88 FE FF FF         LEA EBX,[EBP + 0xfffffe88]
00649591  C1 E9 02                  SHR ECX,0x2
00649594  F3 A5                     MOVSD.REP ES:EDI,ESI
00649596  8B C8                     MOV ECX,EAX
00649598  33 C0                     XOR EAX,EAX
0064959A  83 E1 03                  AND ECX,0x3
0064959D  F3 A4                     MOVSB.REP ES:EDI,ESI
0064959F  8B FA                     MOV EDI,EDX
006495A1  83 C9 FF                  OR ECX,0xffffffff
006495A4  F2 AE                     SCASB.REPNE ES:EDI
006495A6  F7 D1                     NOT ECX
006495A8  2B F9                     SUB EDI,ECX
006495AA  8B F7                     MOV ESI,EDI
006495AC  8B D1                     MOV EDX,ECX
006495AE  8B FB                     MOV EDI,EBX
006495B0  83 C9 FF                  OR ECX,0xffffffff
006495B3  F2 AE                     SCASB.REPNE ES:EDI
006495B5  8B CA                     MOV ECX,EDX
006495B7  4F                        DEC EDI
006495B8  C1 E9 02                  SHR ECX,0x2
006495BB  F3 A5                     MOVSD.REP ES:EDI,ESI
006495BD  8B CA                     MOV ECX,EDX
006495BF  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
006495C5  83 E1 03                  AND ECX,0x3
006495C8  F3 A4                     MOVSB.REP ES:EDI,ESI
006495CA  BF E8 28 7D 00            MOV EDI,0x7d28e8
006495CF  83 C9 FF                  OR ECX,0xffffffff
006495D2  F2 AE                     SCASB.REPNE ES:EDI
006495D4  F7 D1                     NOT ECX
006495D6  2B F9                     SUB EDI,ECX
006495D8  8B F7                     MOV ESI,EDI
006495DA  8B D9                     MOV EBX,ECX
006495DC  8B FA                     MOV EDI,EDX
006495DE  83 C9 FF                  OR ECX,0xffffffff
006495E1  50                        PUSH EAX
006495E2  F2 AE                     SCASB.REPNE ES:EDI
006495E4  8B CB                     MOV ECX,EBX
006495E6  4F                        DEC EDI
006495E7  C1 E9 02                  SHR ECX,0x2
006495EA  F3 A5                     MOVSD.REP ES:EDI,ESI
006495EC  8B CB                     MOV ECX,EBX
006495EE  8D 45 D0                  LEA EAX,[EBP + -0x30]
006495F1  83 E1 03                  AND ECX,0x3
006495F4  50                        PUSH EAX
006495F5  F3 A4                     MOVSB.REP ES:EDI,ESI
006495F7  8D 4D E8                  LEA ECX,[EBP + -0x18]
006495FA  8D 95 70 FB FF FF         LEA EDX,[EBP + 0xfffffb70]
00649600  51                        PUSH ECX
00649601  8D 85 88 FE FF FF         LEA EAX,[EBP + 0xfffffe88]
00649607  52                        PUSH EDX
00649608  50                        PUSH EAX
00649609  E8 F5 AD DB FF            CALL 0x00404403
0064960E  83 C4 14                  ADD ESP,0x14
00649611  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00649614  85 C0                     TEST EAX,EAX
00649616  74 50                     JZ 0x00649668
00649618  8B 90 06 01 00 00         MOV EDX,dword ptr [EAX + 0x106]
0064961E  8D 4D F0                  LEA ECX,[EBP + -0x10]
00649621  51                        PUSH ECX
00649622  52                        PUSH EDX
00649623  E8 97 88 DB FF            CALL 0x00401ebf
00649628  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0064962B  8D 4D EC                  LEA ECX,[EBP + -0x14]
0064962E  51                        PUSH ECX
0064962F  52                        PUSH EDX
00649630  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00649633  50                        PUSH EAX
00649634  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00649637  50                        PUSH EAX
00649638  E8 C7 BB DB FF            CALL 0x00405204
0064963D  8D 4D F4                  LEA ECX,[EBP + -0xc]
00649640  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00649643  51                        PUSH ECX
00649644  E8 EE 7E DB FF            CALL 0x00401537
00649649  8D 55 FC                  LEA EDX,[EBP + -0x4]
0064964C  52                        PUSH EDX
0064964D  E8 B3 97 DB FF            CALL 0x00402e05
00649652  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00649655  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00649658  83 C4 20                  ADD ESP,0x20
0064965B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00649661  5F                        POP EDI
00649662  5E                        POP ESI
00649663  5B                        POP EBX
00649664  8B E5                     MOV ESP,EBP
00649666  5D                        POP EBP
00649667  C3                        RET
LAB_00649668:
00649668  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064966D  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00649670  68 33 01 00 00            PUSH 0x133
00649675  68 80 28 7D 00            PUSH 0x7d2880
0064967A  50                        PUSH EAX
0064967B  51                        PUSH ECX
0064967C  E8 BF C7 05 00            CALL 0x006a5e40
00649681  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00649684  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00649687  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064968D  5F                        POP EDI
0064968E  5E                        POP ESI
0064968F  5B                        POP EBX
00649690  8B E5                     MOV ESP,EBP
00649692  5D                        POP EBP
00649693  C3                        RET
LAB_00649694:
00649694  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00649697  8D 4D F4                  LEA ECX,[EBP + -0xc]
0064969A  51                        PUSH ECX
0064969B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006496A0  E8 92 7E DB FF            CALL 0x00401537
006496A5  8D 55 FC                  LEA EDX,[EBP + -0x4]
006496A8  52                        PUSH EDX
006496A9  E8 57 97 DB FF            CALL 0x00402e05
006496AE  8D 45 F8                  LEA EAX,[EBP + -0x8]
006496B1  50                        PUSH EAX
006496B2  E8 4E 97 DB FF            CALL 0x00402e05
006496B7  68 D0 28 7D 00            PUSH 0x7d28d0
006496BC  68 CC 4C 7A 00            PUSH 0x7a4ccc
006496C1  56                        PUSH ESI
006496C2  57                        PUSH EDI
006496C3  68 39 01 00 00            PUSH 0x139
006496C8  68 80 28 7D 00            PUSH 0x7d2880
006496CD  E8 FE 3D 06 00            CALL 0x006ad4d0
006496D2  83 C4 24                  ADD ESP,0x24
006496D5  85 C0                     TEST EAX,EAX
006496D7  74 01                     JZ 0x006496da
006496D9  CC                        INT3
LAB_006496da:
006496DA  68 3A 01 00 00            PUSH 0x13a
006496DF  68 80 28 7D 00            PUSH 0x7d2880
006496E4  57                        PUSH EDI
006496E5  56                        PUSH ESI
006496E6  E8 55 C7 05 00            CALL 0x006a5e40
006496EB  5F                        POP EDI
006496EC  5E                        POP ESI
006496ED  33 C0                     XOR EAX,EAX
006496EF  5B                        POP EBX
006496F0  8B E5                     MOV ESP,EBP
006496F2  5D                        POP EBP
006496F3  C3                        RET
