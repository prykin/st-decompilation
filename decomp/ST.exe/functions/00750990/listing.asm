FUN_00750990:
00750990  55                        PUSH EBP
00750991  8B EC                     MOV EBP,ESP
00750993  81 EC 58 05 00 00         SUB ESP,0x558
00750999  53                        PUSH EBX
0075099A  56                        PUSH ESI
0075099B  57                        PUSH EDI
0075099C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075099F  57                        PUSH EDI
007509A0  57                        PUSH EDI
007509A1  E8 3A 6E F6 FF            CALL 0x006b77e0
007509A6  8D 85 A8 FC FF FF         LEA EAX,[EBP + 0xfffffca8]
007509AC  8D 8D A8 FB FF FF         LEA ECX,[EBP + 0xfffffba8]
007509B2  50                        PUSH EAX
007509B3  8D 95 A8 FA FF FF         LEA EDX,[EBP + 0xfffffaa8]
007509B9  51                        PUSH ECX
007509BA  8D 45 FC                  LEA EAX,[EBP + -0x4]
007509BD  52                        PUSH EDX
007509BE  50                        PUSH EAX
007509BF  57                        PUSH EDI
007509C0  E8 6B DD FD FF            CALL 0x0072e730
007509C5  8D 8D A8 FC FF FF         LEA ECX,[EBP + 0xfffffca8]
007509CB  68 78 70 7C 00            PUSH 0x7c7078
007509D0  51                        PUSH ECX
007509D1  E8 4A DC FD FF            CALL 0x0072e620
007509D6  83 C4 1C                  ADD ESP,0x1c
007509D9  85 C0                     TEST EAX,EAX
007509DB  74 6D                     JZ 0x00750a4a
007509DD  8D 95 A8 FC FF FF         LEA EDX,[EBP + 0xfffffca8]
007509E3  68 80 70 7C 00            PUSH 0x7c7080
007509E8  52                        PUSH EDX
007509E9  E8 32 DC FD FF            CALL 0x0072e620
007509EE  83 C4 08                  ADD ESP,0x8
007509F1  85 C0                     TEST EAX,EAX
007509F3  74 55                     JZ 0x00750a4a
007509F5  83 C9 FF                  OR ECX,0xffffffff
007509F8  33 C0                     XOR EAX,EAX
007509FA  F2 AE                     SCASB.REPNE ES:EDI
007509FC  F7 D1                     NOT ECX
007509FE  2B F9                     SUB EDI,ECX
00750A00  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
00750A06  8B C1                     MOV EAX,ECX
00750A08  8B F7                     MOV ESI,EDI
00750A0A  8B FA                     MOV EDI,EDX
00750A0C  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
00750A12  C1 E9 02                  SHR ECX,0x2
00750A15  F3 A5                     MOVSD.REP ES:EDI,ESI
00750A17  8B C8                     MOV ECX,EAX
00750A19  33 C0                     XOR EAX,EAX
00750A1B  83 E1 03                  AND ECX,0x3
00750A1E  F3 A4                     MOVSB.REP ES:EDI,ESI
00750A20  BF 78 70 7C 00            MOV EDI,0x7c7078
00750A25  83 C9 FF                  OR ECX,0xffffffff
00750A28  F2 AE                     SCASB.REPNE ES:EDI
00750A2A  F7 D1                     NOT ECX
00750A2C  2B F9                     SUB EDI,ECX
00750A2E  8B F7                     MOV ESI,EDI
00750A30  8B D9                     MOV EBX,ECX
00750A32  8B FA                     MOV EDI,EDX
00750A34  83 C9 FF                  OR ECX,0xffffffff
00750A37  F2 AE                     SCASB.REPNE ES:EDI
00750A39  8B CB                     MOV ECX,EBX
00750A3B  4F                        DEC EDI
00750A3C  C1 E9 02                  SHR ECX,0x2
00750A3F  F3 A5                     MOVSD.REP ES:EDI,ESI
00750A41  8B CB                     MOV ECX,EBX
00750A43  83 E1 03                  AND ECX,0x3
00750A46  F3 A4                     MOVSB.REP ES:EDI,ESI
00750A48  EB 26                     JMP 0x00750a70
LAB_00750a4a:
00750A4A  8D 85 A8 FB FF FF         LEA EAX,[EBP + 0xfffffba8]
00750A50  68 78 70 7C 00            PUSH 0x7c7078
00750A55  8D 8D A8 FA FF FF         LEA ECX,[EBP + 0xfffffaa8]
00750A5B  50                        PUSH EAX
00750A5C  8D 55 FC                  LEA EDX,[EBP + -0x4]
00750A5F  51                        PUSH ECX
00750A60  8D 85 AC FE FF FF         LEA EAX,[EBP + 0xfffffeac]
00750A66  52                        PUSH EDX
00750A67  50                        PUSH EAX
00750A68  E8 A3 E6 FD FF            CALL 0x0072f110
00750A6D  83 C4 14                  ADD ESP,0x14
LAB_00750a70:
00750A70  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00750A73  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
00750A79  51                        PUSH ECX
00750A7A  52                        PUSH EDX
00750A7B  E8 60 30 00 00            CALL 0x00753ae0
00750A80  85 C0                     TEST EAX,EAX
00750A82  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00750A85  75 0E                     JNZ 0x00750a95
00750A87  B8 F6 FF FF FF            MOV EAX,0xfffffff6
00750A8C  5F                        POP EDI
00750A8D  5E                        POP ESI
00750A8E  5B                        POP EBX
00750A8F  8B E5                     MOV ESP,EBP
00750A91  5D                        POP EBP
00750A92  C2 08 00                  RET 0x8
LAB_00750a95:
00750A95  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00750A9A  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00750A9D  8D 4D B0                  LEA ECX,[EBP + -0x50]
00750AA0  6A 00                     PUSH 0x0
00750AA2  52                        PUSH EDX
00750AA3  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00750AAA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00750AAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00750AB3  E8 38 CD FD FF            CALL 0x0072d7f0
00750AB8  8B F0                     MOV ESI,EAX
00750ABA  83 C4 08                  ADD ESP,0x8
00750ABD  85 F6                     TEST ESI,ESI
00750ABF  0F 85 90 00 00 00         JNZ 0x00750b55
00750AC5  8D 85 A8 FB FF FF         LEA EAX,[EBP + 0xfffffba8]
00750ACB  68 E4 2A 7F 00            PUSH 0x7f2ae4
00750AD0  8D 8D A8 FA FF FF         LEA ECX,[EBP + 0xfffffaa8]
00750AD6  50                        PUSH EAX
00750AD7  8D 55 FC                  LEA EDX,[EBP + -0x4]
00750ADA  51                        PUSH ECX
00750ADB  8D 85 A8 FD FF FF         LEA EAX,[EBP + 0xfffffda8]
00750AE1  52                        PUSH EDX
00750AE2  50                        PUSH EAX
00750AE3  E8 28 E6 FD FF            CALL 0x0072f110
00750AE8  83 C4 14                  ADD ESP,0x14
00750AEB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00750AEE  56                        PUSH ESI
00750AEF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00750AF2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750AF5  0F BF 51 2E               MOVSX EDX,word ptr [ECX + 0x2e]
00750AF9  52                        PUSH EDX
00750AFA  8D 8D A8 FD FF FF         LEA ECX,[EBP + 0xfffffda8]
00750B00  50                        PUSH EAX
00750B01  51                        PUSH ECX
00750B02  E8 B9 2C 00 00            CALL 0x007537c0
00750B07  8B F8                     MOV EDI,EAX
00750B09  56                        PUSH ESI
00750B0A  57                        PUSH EDI
00750B0B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00750B0E  E8 8D 00 00 00            CALL 0x00750ba0
00750B13  56                        PUSH ESI
00750B14  E8 87 27 00 00            CALL 0x007532a0
00750B19  57                        PUSH EDI
00750B1A  E8 81 27 00 00            CALL 0x007532a0
00750B1F  8D 95 AC FE FF FF         LEA EDX,[EBP + 0xfffffeac]
00750B25  52                        PUSH EDX
00750B26  E8 85 0E 01 00            CALL 0x007619b0
00750B2B  8D 85 AC FE FF FF         LEA EAX,[EBP + 0xfffffeac]
00750B31  8D 8D A8 FD FF FF         LEA ECX,[EBP + 0xfffffda8]
00750B37  50                        PUSH EAX
00750B38  51                        PUSH ECX
00750B39  E8 22 0E 01 00            CALL 0x00761960
00750B3E  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00750B41  83 C4 0C                  ADD ESP,0xc
00750B44  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00750B4A  33 C0                     XOR EAX,EAX
00750B4C  5F                        POP EDI
00750B4D  5E                        POP ESI
00750B4E  5B                        POP EBX
00750B4F  8B E5                     MOV ESP,EBP
00750B51  5D                        POP EBP
00750B52  C2 08 00                  RET 0x8
LAB_00750b55:
00750B55  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00750B58  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00750B5B  51                        PUSH ECX
00750B5C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00750B61  E8 3A 27 00 00            CALL 0x007532a0
00750B66  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00750B69  85 C0                     TEST EAX,EAX
00750B6B  74 06                     JZ 0x00750b73
00750B6D  50                        PUSH EAX
00750B6E  E8 2D 27 00 00            CALL 0x007532a0
LAB_00750b73:
00750B73  8D 95 A8 FD FF FF         LEA EDX,[EBP + 0xfffffda8]
00750B79  52                        PUSH EDX
00750B7A  E8 31 0E 01 00            CALL 0x007619b0
00750B7F  83 C4 04                  ADD ESP,0x4
00750B82  68 BB 00 00 00            PUSH 0xbb
00750B87  68 CC 2A 7F 00            PUSH 0x7f2acc
00750B8C  6A 00                     PUSH 0x0
00750B8E  56                        PUSH ESI
00750B8F  E8 AC 52 F5 FF            CALL 0x006a5e40
00750B94  8B C6                     MOV EAX,ESI
00750B96  5F                        POP EDI
00750B97  5E                        POP ESI
00750B98  5B                        POP EBX
00750B99  8B E5                     MOV ESP,EBP
00750B9B  5D                        POP EBP
00750B9C  C2 08 00                  RET 0x8
