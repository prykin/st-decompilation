CreateBossData:
00649B90  55                        PUSH EBP
00649B91  8B EC                     MOV EBP,ESP
00649B93  81 EC 90 04 00 00         SUB ESP,0x490
00649B99  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00649B9E  56                        PUSH ESI
00649B9F  57                        PUSH EDI
00649BA0  8D 55 90                  LEA EDX,[EBP + -0x70]
00649BA3  8D 4D 8C                  LEA ECX,[EBP + -0x74]
00649BA6  6A 00                     PUSH 0x0
00649BA8  52                        PUSH EDX
00649BA9  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00649BB0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00649BB7  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00649BBE  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00649BC1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00649BC7  E8 24 3C 0E 00            CALL 0x0072d7f0
00649BCC  8B F0                     MOV ESI,EAX
00649BCE  83 C4 08                  ADD ESP,0x8
00649BD1  85 F6                     TEST ESI,ESI
00649BD3  0F 85 CB 01 00 00         JNZ 0x00649da4
00649BD9  B9 06 00 00 00            MOV ECX,0x6
00649BDE  8D 7D D0                  LEA EDI,[EBP + -0x30]
00649BE1  F3 AB                     STOSD.REP ES:EDI
00649BE3  B9 C6 00 00 00            MOV ECX,0xc6
00649BE8  8D BD 70 FB FF FF         LEA EDI,[EBP + 0xfffffb70]
00649BEE  F3 AB                     STOSD.REP ES:EDI
00649BF0  83 C9 FF                  OR ECX,0xffffffff
00649BF3  BF 80 76 80 00            MOV EDI,0x807680
00649BF8  F2 AE                     SCASB.REPNE ES:EDI
00649BFA  F7 D1                     NOT ECX
00649BFC  2B F9                     SUB EDI,ECX
00649BFE  8D 95 74 FC FF FF         LEA EDX,[EBP + 0xfffffc74]
00649C04  8B C1                     MOV EAX,ECX
00649C06  8B F7                     MOV ESI,EDI
00649C08  8B FA                     MOV EDI,EDX
00649C0A  8D 95 74 FC FF FF         LEA EDX,[EBP + 0xfffffc74]
00649C10  C1 E9 02                  SHR ECX,0x2
00649C13  F3 A5                     MOVSD.REP ES:EDI,ESI
00649C15  8B C8                     MOV ECX,EAX
00649C17  33 C0                     XOR EAX,EAX
00649C19  83 E1 03                  AND ECX,0x3
00649C1C  F3 A4                     MOVSB.REP ES:EDI,ESI
00649C1E  8B 3D 5C D6 79 00         MOV EDI,dword ptr [0x0079d65c]
00649C24  83 C9 FF                  OR ECX,0xffffffff
00649C27  F2 AE                     SCASB.REPNE ES:EDI
00649C29  F7 D1                     NOT ECX
00649C2B  2B F9                     SUB EDI,ECX
00649C2D  8B F7                     MOV ESI,EDI
00649C2F  8B FA                     MOV EDI,EDX
00649C31  8B D1                     MOV EDX,ECX
00649C33  83 C9 FF                  OR ECX,0xffffffff
00649C36  F2 AE                     SCASB.REPNE ES:EDI
00649C38  8B CA                     MOV ECX,EDX
00649C3A  4F                        DEC EDI
00649C3B  C1 E9 02                  SHR ECX,0x2
00649C3E  F3 A5                     MOVSD.REP ES:EDI,ESI
00649C40  8B CA                     MOV ECX,EDX
00649C42  8D 95 70 FB FF FF         LEA EDX,[EBP + 0xfffffb70]
00649C48  83 E1 03                  AND ECX,0x3
00649C4B  F3 A4                     MOVSB.REP ES:EDI,ESI
00649C4D  BF 80 76 80 00            MOV EDI,0x807680
00649C52  83 C9 FF                  OR ECX,0xffffffff
00649C55  F2 AE                     SCASB.REPNE ES:EDI
00649C57  F7 D1                     NOT ECX
00649C59  2B F9                     SUB EDI,ECX
00649C5B  8B C1                     MOV EAX,ECX
00649C5D  8B F7                     MOV ESI,EDI
00649C5F  8B FA                     MOV EDI,EDX
00649C61  8D 95 70 FB FF FF         LEA EDX,[EBP + 0xfffffb70]
00649C67  C1 E9 02                  SHR ECX,0x2
00649C6A  F3 A5                     MOVSD.REP ES:EDI,ESI
00649C6C  8B C8                     MOV ECX,EAX
00649C6E  83 E1 03                  AND ECX,0x3
00649C71  F3 A4                     MOVSB.REP ES:EDI,ESI
00649C73  8D 8D 70 FB FF FF         LEA ECX,[EBP + 0xfffffb70]
00649C79  51                        PUSH ECX
00649C7A  52                        PUSH EDX
00649C7B  E8 40 DC 06 00            CALL 0x006b78c0
00649C80  BF 80 76 80 00            MOV EDI,0x807680
00649C85  83 C9 FF                  OR ECX,0xffffffff
00649C88  33 C0                     XOR EAX,EAX
00649C8A  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
00649C90  F2 AE                     SCASB.REPNE ES:EDI
00649C92  F7 D1                     NOT ECX
00649C94  2B F9                     SUB EDI,ECX
00649C96  8B C1                     MOV EAX,ECX
00649C98  8B F7                     MOV ESI,EDI
00649C9A  8B FA                     MOV EDI,EDX
00649C9C  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
00649CA2  C1 E9 02                  SHR ECX,0x2
00649CA5  F3 A5                     MOVSD.REP ES:EDI,ESI
00649CA7  8B C8                     MOV ECX,EAX
00649CA9  33 C0                     XOR EAX,EAX
00649CAB  83 E1 03                  AND ECX,0x3
00649CAE  F3 A4                     MOVSB.REP ES:EDI,ESI
00649CB0  8B 3D 5C D6 79 00         MOV EDI,dword ptr [0x0079d65c]
00649CB6  83 C9 FF                  OR ECX,0xffffffff
00649CB9  F2 AE                     SCASB.REPNE ES:EDI
00649CBB  F7 D1                     NOT ECX
00649CBD  2B F9                     SUB EDI,ECX
00649CBF  8B F7                     MOV ESI,EDI
00649CC1  8B FA                     MOV EDI,EDX
00649CC3  8B D1                     MOV EDX,ECX
00649CC5  83 C9 FF                  OR ECX,0xffffffff
00649CC8  50                        PUSH EAX
00649CC9  F2 AE                     SCASB.REPNE ES:EDI
00649CCB  8B CA                     MOV ECX,EDX
00649CCD  4F                        DEC EDI
00649CCE  C1 E9 02                  SHR ECX,0x2
00649CD1  F3 A5                     MOVSD.REP ES:EDI,ESI
00649CD3  8B CA                     MOV ECX,EDX
00649CD5  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
00649CDB  83 E1 03                  AND ECX,0x3
00649CDE  F3 A4                     MOVSB.REP ES:EDI,ESI
00649CE0  BF 54 29 7D 00            MOV EDI,0x7d2954
00649CE5  83 C9 FF                  OR ECX,0xffffffff
00649CE8  F2 AE                     SCASB.REPNE ES:EDI
00649CEA  F7 D1                     NOT ECX
00649CEC  2B F9                     SUB EDI,ECX
00649CEE  8B F7                     MOV ESI,EDI
00649CF0  8B FA                     MOV EDI,EDX
00649CF2  8B D1                     MOV EDX,ECX
00649CF4  83 C9 FF                  OR ECX,0xffffffff
00649CF7  F2 AE                     SCASB.REPNE ES:EDI
00649CF9  8B CA                     MOV ECX,EDX
00649CFB  4F                        DEC EDI
00649CFC  C1 E9 02                  SHR ECX,0x2
00649CFF  F3 A5                     MOVSD.REP ES:EDI,ESI
00649D01  8B CA                     MOV ECX,EDX
00649D03  8D 45 D0                  LEA EAX,[EBP + -0x30]
00649D06  83 E1 03                  AND ECX,0x3
00649D09  50                        PUSH EAX
00649D0A  F3 A4                     MOVSB.REP ES:EDI,ESI
00649D0C  8D 4D E8                  LEA ECX,[EBP + -0x18]
00649D0F  8D 95 70 FB FF FF         LEA EDX,[EBP + 0xfffffb70]
00649D15  51                        PUSH ECX
00649D16  8D 85 88 FE FF FF         LEA EAX,[EBP + 0xfffffe88]
00649D1C  52                        PUSH EDX
00649D1D  50                        PUSH EAX
00649D1E  E8 E0 A6 DB FF            CALL 0x00404403
00649D23  83 C4 14                  ADD ESP,0x14
00649D26  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00649D29  85 C0                     TEST EAX,EAX
00649D2B  74 4C                     JZ 0x00649d79
00649D2D  8B 50 4E                  MOV EDX,dword ptr [EAX + 0x4e]
00649D30  8D 4D F0                  LEA ECX,[EBP + -0x10]
00649D33  51                        PUSH ECX
00649D34  52                        PUSH EDX
00649D35  E8 85 81 DB FF            CALL 0x00401ebf
00649D3A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00649D3D  8D 4D EC                  LEA ECX,[EBP + -0x14]
00649D40  51                        PUSH ECX
00649D41  52                        PUSH EDX
00649D42  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00649D45  50                        PUSH EAX
00649D46  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00649D49  50                        PUSH EAX
00649D4A  E8 D5 BC DB FF            CALL 0x00405a24
00649D4F  8D 4D F4                  LEA ECX,[EBP + -0xc]
00649D52  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00649D55  51                        PUSH ECX
00649D56  E8 DC 77 DB FF            CALL 0x00401537
00649D5B  8D 55 FC                  LEA EDX,[EBP + -0x4]
00649D5E  52                        PUSH EDX
00649D5F  E8 40 83 DB FF            CALL 0x004020a4
00649D64  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00649D67  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00649D6A  83 C4 20                  ADD ESP,0x20
00649D6D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00649D73  5F                        POP EDI
00649D74  5E                        POP ESI
00649D75  8B E5                     MOV ESP,EBP
00649D77  5D                        POP EBP
00649D78  C3                        RET
LAB_00649d79:
00649D79  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00649D7E  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00649D81  68 A1 01 00 00            PUSH 0x1a1
00649D86  68 80 28 7D 00            PUSH 0x7d2880
00649D8B  50                        PUSH EAX
00649D8C  51                        PUSH ECX
00649D8D  E8 AE C0 05 00            CALL 0x006a5e40
00649D92  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00649D95  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00649D98  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00649D9E  5F                        POP EDI
00649D9F  5E                        POP ESI
00649DA0  8B E5                     MOV ESP,EBP
00649DA2  5D                        POP EBP
00649DA3  C3                        RET
LAB_00649da4:
00649DA4  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00649DA7  8D 4D F4                  LEA ECX,[EBP + -0xc]
00649DAA  51                        PUSH ECX
00649DAB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00649DB0  E8 82 77 DB FF            CALL 0x00401537
00649DB5  8D 55 FC                  LEA EDX,[EBP + -0x4]
00649DB8  52                        PUSH EDX
00649DB9  E8 E6 82 DB FF            CALL 0x004020a4
00649DBE  8D 45 F8                  LEA EAX,[EBP + -0x8]
00649DC1  50                        PUSH EAX
00649DC2  E8 DD 82 DB FF            CALL 0x004020a4
00649DC7  68 40 29 7D 00            PUSH 0x7d2940
00649DCC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00649DD1  56                        PUSH ESI
00649DD2  6A 00                     PUSH 0x0
00649DD4  68 A7 01 00 00            PUSH 0x1a7
00649DD9  68 80 28 7D 00            PUSH 0x7d2880
00649DDE  E8 ED 36 06 00            CALL 0x006ad4d0
00649DE3  83 C4 24                  ADD ESP,0x24
00649DE6  85 C0                     TEST EAX,EAX
00649DE8  74 01                     JZ 0x00649deb
00649DEA  CC                        INT3
LAB_00649deb:
00649DEB  68 A8 01 00 00            PUSH 0x1a8
00649DF0  68 80 28 7D 00            PUSH 0x7d2880
00649DF5  6A 00                     PUSH 0x0
00649DF7  56                        PUSH ESI
00649DF8  E8 43 C0 05 00            CALL 0x006a5e40
00649DFD  5F                        POP EDI
00649DFE  33 C0                     XOR EAX,EAX
00649E00  5E                        POP ESI
00649E01  8B E5                     MOV ESP,EBP
00649E03  5D                        POP EBP
00649E04  C3                        RET
