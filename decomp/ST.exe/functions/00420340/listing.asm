FUN_00420340:
00420340  55                        PUSH EBP
00420341  8B EC                     MOV EBP,ESP
00420343  83 EC 20                  SUB ESP,0x20
00420346  53                        PUSH EBX
00420347  56                        PUSH ESI
00420348  8B D9                     MOV EBX,ECX
0042034A  57                        PUSH EDI
0042034B  BF 00 50 7A 00            MOV EDI,0x7a5000
00420350  83 C9 FF                  OR ECX,0xffffffff
00420353  33 C0                     XOR EAX,EAX
00420355  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420358  F2 AE                     SCASB.REPNE ES:EDI
0042035A  F7 D1                     NOT ECX
0042035C  2B F9                     SUB EDI,ECX
0042035E  C6 45 E0 00               MOV byte ptr [EBP + -0x20],0x0
00420362  8B F7                     MOV ESI,EDI
00420364  8B FA                     MOV EDI,EDX
00420366  8B D1                     MOV EDX,ECX
00420368  83 C9 FF                  OR ECX,0xffffffff
0042036B  F2 AE                     SCASB.REPNE ES:EDI
0042036D  8B CA                     MOV ECX,EDX
0042036F  4F                        DEC EDI
00420370  C1 E9 02                  SHR ECX,0x2
00420373  F3 A5                     MOVSD.REP ES:EDI,ESI
00420375  8B CA                     MOV ECX,EDX
00420377  8D 55 E0                  LEA EDX,[EBP + -0x20]
0042037A  83 E1 03                  AND ECX,0x3
0042037D  6A 0A                     PUSH 0xa
0042037F  F3 A4                     MOVSB.REP ES:EDI,ESI
00420381  BF FC 4F 7A 00            MOV EDI,0x7a4ffc
00420386  83 C9 FF                  OR ECX,0xffffffff
00420389  F2 AE                     SCASB.REPNE ES:EDI
0042038B  F7 D1                     NOT ECX
0042038D  2B F9                     SUB EDI,ECX
0042038F  8B F7                     MOV ESI,EDI
00420391  8B FA                     MOV EDI,EDX
00420393  8B D1                     MOV EDX,ECX
00420395  83 C9 FF                  OR ECX,0xffffffff
00420398  F2 AE                     SCASB.REPNE ES:EDI
0042039A  8B CA                     MOV ECX,EDX
0042039C  4F                        DEC EDI
0042039D  C1 E9 02                  SHR ECX,0x2
004203A0  F3 A5                     MOVSD.REP ES:EDI,ESI
004203A2  8B CA                     MOV ECX,EDX
004203A4  8D 45 F4                  LEA EAX,[EBP + -0xc]
004203A7  83 E1 03                  AND ECX,0x3
004203AA  50                        PUSH EAX
004203AB  F3 A4                     MOVSB.REP ES:EDI,ESI
004203AD  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004203B3  E8 81 0F FE FF            CALL 0x00401339
004203B8  25 FF 00 00 00            AND EAX,0xff
004203BD  50                        PUSH EAX
004203BE  E8 9D DA 30 00            CALL 0x0072de60
004203C3  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004203C6  83 C4 0C                  ADD ESP,0xc
004203C9  3D AE 01 00 00            CMP EAX,0x1ae
004203CE  0F 84 5F 01 00 00         JZ 0x00420533
004203D4  3D 72 01 00 00            CMP EAX,0x172
004203D9  0F 84 54 01 00 00         JZ 0x00420533
004203DF  83 F8 5A                  CMP EAX,0x5a
004203E2  0F 84 4B 01 00 00         JZ 0x00420533
004203E8  3D A4 01 00 00            CMP EAX,0x1a4
004203ED  0F 84 40 01 00 00         JZ 0x00420533
004203F3  3D B8 01 00 00            CMP EAX,0x1b8
004203F8  0F 84 35 01 00 00         JZ 0x00420533
004203FE  83 F8 14                  CMP EAX,0x14
00420401  74 1A                     JZ 0x0042041d
00420403  3D E8 03 00 00            CMP EAX,0x3e8
00420408  74 13                     JZ 0x0042041d
0042040A  3D E9 03 00 00            CMP EAX,0x3e9
0042040F  0F 85 3A 04 00 00         JNZ 0x0042084f
00420415  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
0042041B  EB 07                     JMP 0x00420424
LAB_0042041d:
0042041D  8B 13                     MOV EDX,dword ptr [EBX]
0042041F  8B CB                     MOV ECX,EBX
00420421  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
LAB_00420424:
00420424  48                        DEC EAX
00420425  83 F8 72                  CMP EAX,0x72
00420428  0F 87 D5 00 00 00         JA 0x00420503
0042042E  33 C9                     XOR ECX,ECX
00420430  8A 88 70 08 42 00         MOV CL,byte ptr [EAX + 0x420870]
switchD_00420436::switchD:
00420436  FF 24 8D 58 08 42 00      JMP dword ptr [ECX*0x4 + 0x420858]
switchD_00420436::caseD_3b:
0042043D  BF F8 4F 7A 00            MOV EDI,0x7a4ff8
00420442  83 C9 FF                  OR ECX,0xffffffff
00420445  33 C0                     XOR EAX,EAX
00420447  8D 55 E0                  LEA EDX,[EBP + -0x20]
0042044A  F2 AE                     SCASB.REPNE ES:EDI
0042044C  F7 D1                     NOT ECX
0042044E  2B F9                     SUB EDI,ECX
00420450  8B F7                     MOV ESI,EDI
00420452  8B FA                     MOV EDI,EDX
00420454  8B D1                     MOV EDX,ECX
00420456  83 C9 FF                  OR ECX,0xffffffff
00420459  F2 AE                     SCASB.REPNE ES:EDI
0042045B  8B CA                     MOV ECX,EDX
0042045D  4F                        DEC EDI
0042045E  C1 E9 02                  SHR ECX,0x2
00420461  F3 A5                     MOVSD.REP ES:EDI,ESI
00420463  8B CA                     MOV ECX,EDX
00420465  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420468  83 E1 03                  AND ECX,0x3
0042046B  F3 A4                     MOVSB.REP ES:EDI,ESI
0042046D  8D 7D F4                  LEA EDI,[EBP + -0xc]
00420470  83 C9 FF                  OR ECX,0xffffffff
00420473  F2 AE                     SCASB.REPNE ES:EDI
00420475  F7 D1                     NOT ECX
00420477  2B F9                     SUB EDI,ECX
00420479  8B F7                     MOV ESI,EDI
0042047B  8B FA                     MOV EDI,EDX
0042047D  8B D1                     MOV EDX,ECX
0042047F  83 C9 FF                  OR ECX,0xffffffff
00420482  F2 AE                     SCASB.REPNE ES:EDI
00420484  8B CA                     MOV ECX,EDX
00420486  4F                        DEC EDI
00420487  C1 E9 02                  SHR ECX,0x2
0042048A  F3 A5                     MOVSD.REP ES:EDI,ESI
0042048C  8B CA                     MOV ECX,EDX
0042048E  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420491  83 E1 03                  AND ECX,0x3
00420494  F3 A4                     MOVSB.REP ES:EDI,ESI
00420496  BF F4 4F 7A 00            MOV EDI,0x7a4ff4
0042049B  E9 D8 01 00 00            JMP 0x00420678
switchD_00420436::caseD_32:
004204A0  BF F8 4F 7A 00            MOV EDI,0x7a4ff8
004204A5  83 C9 FF                  OR ECX,0xffffffff
004204A8  33 C0                     XOR EAX,EAX
004204AA  8D 55 E0                  LEA EDX,[EBP + -0x20]
004204AD  F2 AE                     SCASB.REPNE ES:EDI
004204AF  F7 D1                     NOT ECX
004204B1  2B F9                     SUB EDI,ECX
004204B3  8B F7                     MOV ESI,EDI
004204B5  8B FA                     MOV EDI,EDX
004204B7  8B D1                     MOV EDX,ECX
004204B9  83 C9 FF                  OR ECX,0xffffffff
004204BC  F2 AE                     SCASB.REPNE ES:EDI
004204BE  8B CA                     MOV ECX,EDX
004204C0  4F                        DEC EDI
004204C1  C1 E9 02                  SHR ECX,0x2
004204C4  F3 A5                     MOVSD.REP ES:EDI,ESI
004204C6  8B CA                     MOV ECX,EDX
004204C8  8D 55 E0                  LEA EDX,[EBP + -0x20]
004204CB  83 E1 03                  AND ECX,0x3
004204CE  F3 A4                     MOVSB.REP ES:EDI,ESI
004204D0  8D 7D F4                  LEA EDI,[EBP + -0xc]
004204D3  83 C9 FF                  OR ECX,0xffffffff
004204D6  F2 AE                     SCASB.REPNE ES:EDI
004204D8  F7 D1                     NOT ECX
004204DA  2B F9                     SUB EDI,ECX
004204DC  8B F7                     MOV ESI,EDI
004204DE  8B FA                     MOV EDI,EDX
004204E0  8B D1                     MOV EDX,ECX
004204E2  83 C9 FF                  OR ECX,0xffffffff
004204E5  F2 AE                     SCASB.REPNE ES:EDI
004204E7  8B CA                     MOV ECX,EDX
004204E9  4F                        DEC EDI
004204EA  C1 E9 02                  SHR ECX,0x2
004204ED  F3 A5                     MOVSD.REP ES:EDI,ESI
004204EF  8B CA                     MOV ECX,EDX
004204F1  8D 55 E0                  LEA EDX,[EBP + -0x20]
004204F4  83 E1 03                  AND ECX,0x3
004204F7  F3 A4                     MOVSB.REP ES:EDI,ESI
004204F9  BF F8 4F 7A 00            MOV EDI,0x7a4ff8
004204FE  E9 75 01 00 00            JMP 0x00420678
switchD_00420436::caseD_29:
00420503  68 B8 4F 7A 00            PUSH 0x7a4fb8
00420508  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042050D  6A 00                     PUSH 0x0
0042050F  6A 00                     PUSH 0x0
00420511  68 45 0C 00 00            PUSH 0xc45
00420516  68 0C 4E 7A 00            PUSH 0x7a4e0c
0042051B  E8 B0 CF 28 00            CALL 0x006ad4d0
00420520  83 C4 18                  ADD ESP,0x18
00420523  85 C0                     TEST EAX,EAX
00420525  0F 84 24 03 00 00         JZ 0x0042084f
0042052B  CC                        INT3
LAB_00420533:
00420533  8B 03                     MOV EAX,dword ptr [EBX]
00420535  8B CB                     MOV ECX,EBX
00420537  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042053A  05 5A FF FF FF            ADD EAX,0xffffff5a
0042053F  83 F8 58                  CMP EAX,0x58
00420542  0F 87 E2 02 00 00         JA 0x0042082a
00420548  33 C9                     XOR ECX,ECX
0042054A  8A 88 F4 08 42 00         MOV CL,byte ptr [EAX + 0x4208f4]
switchD_00420550::switchD:
00420550  FF 24 8D E4 08 42 00      JMP dword ptr [ECX*0x4 + 0x4208e4]
switchD_00420436::caseD_1:
00420557  BF B4 4F 7A 00            MOV EDI,0x7a4fb4
0042055C  83 C9 FF                  OR ECX,0xffffffff
0042055F  33 C0                     XOR EAX,EAX
00420561  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420564  F2 AE                     SCASB.REPNE ES:EDI
00420566  F7 D1                     NOT ECX
00420568  2B F9                     SUB EDI,ECX
0042056A  8B F7                     MOV ESI,EDI
0042056C  8B FA                     MOV EDI,EDX
0042056E  8B D1                     MOV EDX,ECX
00420570  83 C9 FF                  OR ECX,0xffffffff
00420573  F2 AE                     SCASB.REPNE ES:EDI
00420575  8B CA                     MOV ECX,EDX
00420577  4F                        DEC EDI
00420578  C1 E9 02                  SHR ECX,0x2
0042057B  F3 A5                     MOVSD.REP ES:EDI,ESI
0042057D  8B CA                     MOV ECX,EDX
0042057F  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420582  83 E1 03                  AND ECX,0x3
00420585  F3 A4                     MOVSB.REP ES:EDI,ESI
00420587  8D 7D F4                  LEA EDI,[EBP + -0xc]
0042058A  83 C9 FF                  OR ECX,0xffffffff
0042058D  F2 AE                     SCASB.REPNE ES:EDI
0042058F  F7 D1                     NOT ECX
00420591  2B F9                     SUB EDI,ECX
00420593  8B F7                     MOV ESI,EDI
00420595  8B FA                     MOV EDI,EDX
00420597  8B D1                     MOV EDX,ECX
00420599  83 C9 FF                  OR ECX,0xffffffff
0042059C  F2 AE                     SCASB.REPNE ES:EDI
0042059E  8B CA                     MOV ECX,EDX
004205A0  4F                        DEC EDI
004205A1  C1 E9 02                  SHR ECX,0x2
004205A4  F3 A5                     MOVSD.REP ES:EDI,ESI
004205A6  8B CA                     MOV ECX,EDX
004205A8  8D 55 E0                  LEA EDX,[EBP + -0x20]
004205AB  83 E1 03                  AND ECX,0x3
004205AE  F3 A4                     MOVSB.REP ES:EDI,ESI
004205B0  BF B0 4F 7A 00            MOV EDI,0x7a4fb0
004205B5  E9 BE 00 00 00            JMP 0x00420678
switchD_00420436::caseD_2:
004205BA  BF B4 4F 7A 00            MOV EDI,0x7a4fb4
004205BF  83 C9 FF                  OR ECX,0xffffffff
004205C2  33 C0                     XOR EAX,EAX
004205C4  8D 55 E0                  LEA EDX,[EBP + -0x20]
004205C7  F2 AE                     SCASB.REPNE ES:EDI
004205C9  F7 D1                     NOT ECX
004205CB  2B F9                     SUB EDI,ECX
004205CD  8B F7                     MOV ESI,EDI
004205CF  8B FA                     MOV EDI,EDX
004205D1  8B D1                     MOV EDX,ECX
004205D3  83 C9 FF                  OR ECX,0xffffffff
004205D6  F2 AE                     SCASB.REPNE ES:EDI
004205D8  8B CA                     MOV ECX,EDX
004205DA  4F                        DEC EDI
004205DB  C1 E9 02                  SHR ECX,0x2
004205DE  F3 A5                     MOVSD.REP ES:EDI,ESI
004205E0  8B CA                     MOV ECX,EDX
004205E2  8D 55 E0                  LEA EDX,[EBP + -0x20]
004205E5  83 E1 03                  AND ECX,0x3
004205E8  F3 A4                     MOVSB.REP ES:EDI,ESI
004205EA  8D 7D F4                  LEA EDI,[EBP + -0xc]
004205ED  83 C9 FF                  OR ECX,0xffffffff
004205F0  F2 AE                     SCASB.REPNE ES:EDI
004205F2  F7 D1                     NOT ECX
004205F4  2B F9                     SUB EDI,ECX
004205F6  8B F7                     MOV ESI,EDI
004205F8  8B FA                     MOV EDI,EDX
004205FA  8B D1                     MOV EDX,ECX
004205FC  83 C9 FF                  OR ECX,0xffffffff
004205FF  F2 AE                     SCASB.REPNE ES:EDI
00420601  8B CA                     MOV ECX,EDX
00420603  4F                        DEC EDI
00420604  C1 E9 02                  SHR ECX,0x2
00420607  F3 A5                     MOVSD.REP ES:EDI,ESI
00420609  8B CA                     MOV ECX,EDX
0042060B  8D 55 E0                  LEA EDX,[EBP + -0x20]
0042060E  83 E1 03                  AND ECX,0x3
00420611  F3 A4                     MOVSB.REP ES:EDI,ESI
00420613  BF B4 4F 7A 00            MOV EDI,0x7a4fb4
00420618  EB 5E                     JMP 0x00420678
switchD_00420436::caseD_7:
0042061A  BF B4 4F 7A 00            MOV EDI,0x7a4fb4
0042061F  83 C9 FF                  OR ECX,0xffffffff
00420622  33 C0                     XOR EAX,EAX
00420624  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420627  F2 AE                     SCASB.REPNE ES:EDI
00420629  F7 D1                     NOT ECX
0042062B  2B F9                     SUB EDI,ECX
0042062D  8B F7                     MOV ESI,EDI
0042062F  8B FA                     MOV EDI,EDX
00420631  8B D1                     MOV EDX,ECX
00420633  83 C9 FF                  OR ECX,0xffffffff
00420636  F2 AE                     SCASB.REPNE ES:EDI
00420638  8B CA                     MOV ECX,EDX
0042063A  4F                        DEC EDI
0042063B  C1 E9 02                  SHR ECX,0x2
0042063E  F3 A5                     MOVSD.REP ES:EDI,ESI
00420640  8B CA                     MOV ECX,EDX
00420642  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420645  83 E1 03                  AND ECX,0x3
00420648  F3 A4                     MOVSB.REP ES:EDI,ESI
0042064A  8D 7D F4                  LEA EDI,[EBP + -0xc]
0042064D  83 C9 FF                  OR ECX,0xffffffff
00420650  F2 AE                     SCASB.REPNE ES:EDI
00420652  F7 D1                     NOT ECX
00420654  2B F9                     SUB EDI,ECX
00420656  8B F7                     MOV ESI,EDI
00420658  8B FA                     MOV EDI,EDX
0042065A  8B D1                     MOV EDX,ECX
0042065C  83 C9 FF                  OR ECX,0xffffffff
0042065F  F2 AE                     SCASB.REPNE ES:EDI
00420661  8B CA                     MOV ECX,EDX
00420663  4F                        DEC EDI
00420664  C1 E9 02                  SHR ECX,0x2
00420667  F3 A5                     MOVSD.REP ES:EDI,ESI
00420669  8B CA                     MOV ECX,EDX
0042066B  8D 55 E0                  LEA EDX,[EBP + -0x20]
0042066E  83 E1 03                  AND ECX,0x3
00420671  F3 A4                     MOVSB.REP ES:EDI,ESI
00420673  BF AC 4F 7A 00            MOV EDI,0x7a4fac
LAB_00420678:
00420678  83 C9 FF                  OR ECX,0xffffffff
0042067B  33 C0                     XOR EAX,EAX
0042067D  F2 AE                     SCASB.REPNE ES:EDI
0042067F  F7 D1                     NOT ECX
00420681  2B F9                     SUB EDI,ECX
00420683  6A 1D                     PUSH 0x1d
00420685  8B F7                     MOV ESI,EDI
00420687  8B FA                     MOV EDI,EDX
00420689  8B D1                     MOV EDX,ECX
0042068B  83 C9 FF                  OR ECX,0xffffffff
0042068E  F2 AE                     SCASB.REPNE ES:EDI
00420690  8B CA                     MOV ECX,EDX
00420692  4F                        DEC EDI
00420693  C1 E9 02                  SHR ECX,0x2
00420696  F3 A5                     MOVSD.REP ES:EDI,ESI
00420698  8B CA                     MOV ECX,EDX
0042069A  8D 45 E0                  LEA EAX,[EBP + -0x20]
0042069D  83 E1 03                  AND ECX,0x3
004206A0  50                        PUSH EAX
004206A1  F3 A4                     MOVSB.REP ES:EDI,ESI
004206A3  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004206A9  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
004206AF  51                        PUSH ECX
004206B0  6A 0F                     PUSH 0xf
004206B2  8B CE                     MOV ECX,ESI
004206B4  E8 CA 3A FE FF            CALL 0x00404183
004206B9  85 C0                     TEST EAX,EAX
004206BB  74 1B                     JZ 0x004206d8
004206BD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004206C3  68 4A 0C 00 00            PUSH 0xc4a
004206C8  68 0C 4E 7A 00            PUSH 0x7a4e0c
004206CD  52                        PUSH EDX
004206CE  68 08 00 FE AF            PUSH 0xaffe0008
004206D3  E8 68 57 28 00            CALL 0x006a5e40
LAB_004206d8:
004206D8  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004206DE  8D 45 E0                  LEA EAX,[EBP + -0x20]
004206E1  6A 1D                     PUSH 0x1d
004206E3  50                        PUSH EAX
004206E4  51                        PUSH ECX
004206E5  6A 00                     PUSH 0x0
004206E7  8B CE                     MOV ECX,ESI
004206E9  E8 95 3A FE FF            CALL 0x00404183
004206EE  85 C0                     TEST EAX,EAX
004206F0  74 1B                     JZ 0x0042070d
004206F2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004206F8  68 4B 0C 00 00            PUSH 0xc4b
004206FD  68 0C 4E 7A 00            PUSH 0x7a4e0c
00420702  52                        PUSH EDX
00420703  68 08 00 FE AF            PUSH 0xaffe0008
00420708  E8 33 57 28 00            CALL 0x006a5e40
LAB_0042070d:
0042070D  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
00420713  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00420719  6A 00                     PUSH 0x0
0042071B  6A 0F                     PUSH 0xf
0042071D  50                        PUSH EAX
0042071E  E8 BD 9E 2C 00            CALL 0x006ea5e0
00420723  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
00420729  6A 00                     PUSH 0x0
0042072B  6A 00                     PUSH 0x0
0042072D  51                        PUSH ECX
0042072E  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00420734  E8 A7 9E 2C 00            CALL 0x006ea5e0
00420739  83 3D 2C 73 80 00 01      CMP dword ptr [0x0080732c],0x1
00420740  0F 85 82 00 00 00         JNZ 0x004207c8
00420746  6A 00                     PUSH 0x0
00420748  6A 13                     PUSH 0x13
0042074A  6A 00                     PUSH 0x0
0042074C  6A 00                     PUSH 0x0
0042074E  8B CE                     MOV ECX,ESI
00420750  E8 65 17 FE FF            CALL 0x00401eba
00420755  6A 00                     PUSH 0x0
00420757  6A 27                     PUSH 0x27
00420759  6A 14                     PUSH 0x14
0042075B  6A 0F                     PUSH 0xf
0042075D  8B CE                     MOV ECX,ESI
0042075F  E8 56 17 FE FF            CALL 0x00401eba
00420764  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0042076A  8B CE                     MOV ECX,ESI
0042076C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00420772  83 E0 01                  AND EAX,0x1
00420775  50                        PUSH EAX
00420776  6A 00                     PUSH 0x0
00420778  E8 28 27 FE FF            CALL 0x00402ea5
0042077D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00420783  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00420789  8B CE                     MOV ECX,ESI
0042078B  83 E2 01                  AND EDX,0x1
0042078E  52                        PUSH EDX
0042078F  6A 0F                     PUSH 0xf
00420791  E8 0F 27 FE FF            CALL 0x00402ea5
00420796  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0042079B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004207A1  51                        PUSH ECX
004207A2  6A 00                     PUSH 0x0
004207A4  8B CE                     MOV ECX,ESI
004207A6  E8 95 4A FE FF            CALL 0x00405240
004207AB  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004207B1  8B CE                     MOV ECX,ESI
004207B3  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004207B9  50                        PUSH EAX
004207BA  6A 0F                     PUSH 0xf
004207BC  E8 7F 4A FE FF            CALL 0x00405240
004207C1  5F                        POP EDI
004207C2  5E                        POP ESI
004207C3  5B                        POP EBX
004207C4  8B E5                     MOV ESP,EBP
004207C6  5D                        POP EBP
004207C7  C3                        RET
LAB_004207c8:
004207C8  6A 0F                     PUSH 0xf
004207CA  8B CE                     MOV ECX,ESI
004207CC  E8 93 3A FE FF            CALL 0x00404264
004207D1  6A 00                     PUSH 0x0
004207D3  8B CE                     MOV ECX,ESI
004207D5  E8 8A 3A FE FF            CALL 0x00404264
004207DA  6A 00                     PUSH 0x0
004207DC  6A 00                     PUSH 0x0
004207DE  6A 00                     PUSH 0x0
004207E0  6A 00                     PUSH 0x0
004207E2  8B CE                     MOV ECX,ESI
004207E4  E8 D1 16 FE FF            CALL 0x00401eba
004207E9  6A 00                     PUSH 0x0
004207EB  6A 14                     PUSH 0x14
004207ED  6A 14                     PUSH 0x14
004207EF  6A 0F                     PUSH 0xf
004207F1  8B CE                     MOV ECX,ESI
004207F3  E8 C2 16 FE FF            CALL 0x00401eba
004207F8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004207FE  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00420804  8B CE                     MOV ECX,ESI
00420806  52                        PUSH EDX
00420807  6A 00                     PUSH 0x0
00420809  E8 32 4A FE FF            CALL 0x00405240
0042080E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00420813  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00420819  51                        PUSH ECX
0042081A  6A 0F                     PUSH 0xf
0042081C  8B CE                     MOV ECX,ESI
0042081E  E8 1D 4A FE FF            CALL 0x00405240
00420823  5F                        POP EDI
00420824  5E                        POP ESI
00420825  5B                        POP EBX
00420826  8B E5                     MOV ESP,EBP
00420828  5D                        POP EBP
00420829  C3                        RET
switchD_00420550::caseD_a8:
0042082A  68 70 4F 7A 00            PUSH 0x7a4f70
0042082F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00420834  6A 00                     PUSH 0x0
00420836  6A 00                     PUSH 0x0
00420838  68 C0 0B 00 00            PUSH 0xbc0
0042083D  68 0C 4E 7A 00            PUSH 0x7a4e0c
00420842  E8 89 CC 28 00            CALL 0x006ad4d0
00420847  83 C4 18                  ADD ESP,0x18
0042084A  85 C0                     TEST EAX,EAX
0042084C  74 01                     JZ 0x0042084f
0042084E  CC                        INT3
LAB_0042084f:
0042084F  5F                        POP EDI
00420850  5E                        POP ESI
00420851  5B                        POP EBX
00420852  8B E5                     MOV ESP,EBP
00420854  5D                        POP EBP
00420855  C3                        RET
