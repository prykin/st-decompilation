FSGSTy::PaintFSGS:
00596CC0  55                        PUSH EBP
00596CC1  8B EC                     MOV EBP,ESP
00596CC3  83 EC 4C                  SUB ESP,0x4c
00596CC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00596CCB  53                        PUSH EBX
00596CCC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00596CCF  56                        PUSH ESI
00596CD0  8D 55 B8                  LEA EDX,[EBP + -0x48]
00596CD3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00596CD6  6A 00                     PUSH 0x0
00596CD8  52                        PUSH EDX
00596CD9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00596CE0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00596CE3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00596CE9  E8 02 6B 19 00            CALL 0x0072d7f0
00596CEE  8B F0                     MOV ESI,EAX
00596CF0  83 C4 08                  ADD ESP,0x8
00596CF3  85 F6                     TEST ESI,ESI
00596CF5  0F 85 C8 02 00 00         JNZ 0x00596fc3
00596CFB  A1 34 67 80 00            MOV EAX,[0x00806734]
00596D00  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
00596D06  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00596D0C  50                        PUSH EAX
00596D0D  51                        PUSH ECX
00596D0E  56                        PUSH ESI
00596D0F  56                        PUSH ESI
00596D10  52                        PUSH EDX
00596D11  E8 6A F2 11 00            CALL 0x006b5f80
00596D16  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00596D19  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
00596D1C  50                        PUSH EAX
00596D1D  6A 01                     PUSH 0x1
00596D1F  6A 00                     PUSH 0x0
00596D21  6A 00                     PUSH 0x0
00596D23  E8 10 CA E6 FF            CALL 0x00403738
00596D28  33 C0                     XOR EAX,EAX
00596D2A  83 C4 10                  ADD ESP,0x10
00596D2D  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
00596D33  48                        DEC EAX
00596D34  83 F8 09                  CMP EAX,0x9
00596D37  0F 87 75 02 00 00         JA 0x00596fb2
switchD_00596d3d::switchD:
00596D3D  FF 24 85 0C 70 59 00      JMP dword ptr [EAX*0x4 + 0x59700c]
switchD_00596d3d::caseD_1:
00596D44  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00596D47  85 C9                     TEST ECX,ECX
00596D49  75 5D                     JNZ 0x00596da8
00596D4B  B9 63 25 00 00            MOV ECX,0x2563
00596D50  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00596D53  EB 03                     JMP 0x00596d58
switchD_00596d3d::caseD_2:
00596D55  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00596d58:
00596D58  85 C9                     TEST ECX,ECX
00596D5A  75 4C                     JNZ 0x00596da8
00596D5C  B9 53 25 00 00            MOV ECX,0x2553
00596D61  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00596D64  EB 03                     JMP 0x00596d69
switchD_00596d3d::caseD_4:
00596D66  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00596d69:
00596D69  85 C9                     TEST ECX,ECX
00596D6B  75 3B                     JNZ 0x00596da8
00596D6D  B9 52 25 00 00            MOV ECX,0x2552
00596D72  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00596D75  EB 03                     JMP 0x00596d7a
switchD_00596d3d::caseD_5:
00596D77  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00596d7a:
00596D7A  85 C9                     TEST ECX,ECX
00596D7C  75 2A                     JNZ 0x00596da8
00596D7E  B9 62 25 00 00            MOV ECX,0x2562
00596D83  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00596D86  EB 03                     JMP 0x00596d8b
switchD_00596d3d::caseD_7:
00596D88  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00596d8b:
00596D8B  85 C9                     TEST ECX,ECX
00596D8D  75 19                     JNZ 0x00596da8
00596D8F  B9 5B 25 00 00            MOV ECX,0x255b
00596D94  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00596D97  EB 03                     JMP 0x00596d9c
switchD_00596d3d::caseD_a:
00596D99  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00596d9c:
00596D9C  85 C9                     TEST ECX,ECX
00596D9E  75 08                     JNZ 0x00596da8
00596DA0  B9 9C 25 00 00            MOV ECX,0x259c
00596DA5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00596da8:
00596DA8  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
00596DAE  85 C0                     TEST EAX,EAX
00596DB0  0F 85 FC 01 00 00         JNZ 0x00596fb2
00596DB6  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00596DB9  84 C0                     TEST AL,AL
00596DBB  0F 85 F1 01 00 00         JNZ 0x00596fb2
00596DC1  8A 86 BB 1A 00 00         MOV AL,byte ptr [ESI + 0x1abb]
00596DC7  51                        PUSH ECX
00596DC8  8A C8                     MOV CL,AL
00596DCA  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00596DD0  F6 D9                     NEG CL
00596DD2  1B C9                     SBB ECX,ECX
00596DD4  83 E1 74                  AND ECX,0x74
00596DD7  81 C1 06 01 00 00         ADD ECX,0x106
00596DDD  F6 D8                     NEG AL
00596DDF  1B C0                     SBB EAX,EAX
00596DE1  51                        PUSH ECX
00596DE2  24 B4                     AND AL,0xb4
00596DE4  68 B8 01 00 00            PUSH 0x1b8
00596DE9  05 AA 00 00 00            ADD EAX,0xaa
00596DEE  50                        PUSH EAX
00596DEF  68 B4 00 00 00            PUSH 0xb4
00596DF4  6A 00                     PUSH 0x0
00596DF6  6A 00                     PUSH 0x0
00596DF8  52                        PUSH EDX
00596DF9  E8 EB C7 E6 FF            CALL 0x004035e9
00596DFE  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00596E01  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00596E07  5E                        POP ESI
00596E08  5B                        POP EBX
00596E09  8B E5                     MOV ESP,EBP
00596E0B  5D                        POP EBP
00596E0C  C2 04 00                  RET 0x4
switchD_00596d3d::caseD_3:
00596E0F  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
00596E15  85 C0                     TEST EAX,EAX
00596E17  0F 85 95 01 00 00         JNZ 0x00596fb2
00596E1D  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00596E20  84 C0                     TEST AL,AL
00596E22  0F 85 8A 01 00 00         JNZ 0x00596fb2
00596E28  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
00596E2E  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00596E34  05 40 01 00 00            ADD EAX,0x140
00596E39  50                        PUSH EAX
00596E3A  68 4C 01 00 00            PUSH 0x14c
00596E3F  68 E1 02 00 00            PUSH 0x2e1
00596E44  6A 72                     PUSH 0x72
00596E46  6A 22                     PUSH 0x22
00596E48  6A 00                     PUSH 0x0
00596E4A  6A 00                     PUSH 0x0
00596E4C  51                        PUSH ECX
00596E4D  E8 80 D4 E6 FF            CALL 0x004042d2
00596E52  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00596E55  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00596E5B  5E                        POP ESI
00596E5C  5B                        POP EBX
00596E5D  8B E5                     MOV ESP,EBP
00596E5F  5D                        POP EBP
00596E60  C2 04 00                  RET 0x4
switchD_00596d3d::caseD_6:
00596E63  8B 86 27 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f27]
00596E69  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
00596E6C  85 C0                     TEST EAX,EAX
00596E6E  75 2E                     JNZ 0x00596e9e
00596E70  84 DB                     TEST BL,BL
00596E72  75 2A                     JNZ 0x00596e9e
00596E74  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00596E7A  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00596E7F  81 C2 40 01 00 00         ADD EDX,0x140
00596E85  52                        PUSH EDX
00596E86  68 75 01 00 00            PUSH 0x175
00596E8B  68 BF 01 00 00            PUSH 0x1bf
00596E90  6A 5E                     PUSH 0x5e
00596E92  6A 13                     PUSH 0x13
00596E94  6A 00                     PUSH 0x0
00596E96  6A 00                     PUSH 0x0
00596E98  50                        PUSH EAX
00596E99  E8 12 B5 E6 FF            CALL 0x004023b0
LAB_00596e9e:
00596E9E  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
00596EA4  85 C0                     TEST EAX,EAX
00596EA6  0F 85 06 01 00 00         JNZ 0x00596fb2
00596EAC  84 DB                     TEST BL,BL
00596EAE  0F 85 FE 00 00 00         JNZ 0x00596fb2
00596EB4  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
00596EBA  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00596EC0  81 C1 40 01 00 00         ADD ECX,0x140
00596EC6  51                        PUSH ECX
00596EC7  68 75 01 00 00            PUSH 0x175
00596ECC  68 24 01 00 00            PUSH 0x124
00596ED1  6A 5E                     PUSH 0x5e
00596ED3  68 E9 01 00 00            PUSH 0x1e9
00596ED8  6A 00                     PUSH 0x0
00596EDA  6A 00                     PUSH 0x0
00596EDC  52                        PUSH EDX
00596EDD  E8 5D C1 E6 FF            CALL 0x0040303f
00596EE2  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00596EE5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00596EEB  5E                        POP ESI
00596EEC  5B                        POP EBX
00596EED  8B E5                     MOV ESP,EBP
00596EEF  5D                        POP EBP
00596EF0  C2 04 00                  RET 0x4
switchD_00596d3d::caseD_8:
00596EF3  8B 86 2F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2f]
00596EF9  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
00596EFC  85 C0                     TEST EAX,EAX
00596EFE  75 31                     JNZ 0x00596f31
00596F00  84 DB                     TEST BL,BL
00596F02  75 2D                     JNZ 0x00596f31
00596F04  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
00596F0A  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00596F10  05 40 01 00 00            ADD EAX,0x140
00596F15  50                        PUSH EAX
00596F16  68 75 01 00 00            PUSH 0x175
00596F1B  68 74 01 00 00            PUSH 0x174
00596F20  6A 5E                     PUSH 0x5e
00596F22  68 99 01 00 00            PUSH 0x199
00596F27  6A 00                     PUSH 0x0
00596F29  6A 00                     PUSH 0x0
00596F2B  51                        PUSH ECX
00596F2C  E8 50 CA E6 FF            CALL 0x00403981
LAB_00596f31:
00596F31  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
00596F37  85 C0                     TEST EAX,EAX
00596F39  75 77                     JNZ 0x00596fb2
00596F3B  84 DB                     TEST BL,BL
00596F3D  75 73                     JNZ 0x00596fb2
00596F3F  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00596F45  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00596F4A  81 C2 40 01 00 00         ADD EDX,0x140
00596F50  52                        PUSH EDX
00596F51  68 75 01 00 00            PUSH 0x175
00596F56  68 74 01 00 00            PUSH 0x174
00596F5B  6A 5E                     PUSH 0x5e
00596F5D  6A 13                     PUSH 0x13
00596F5F  6A 00                     PUSH 0x0
00596F61  6A 00                     PUSH 0x0
00596F63  50                        PUSH EAX
00596F64  E8 69 D3 E6 FF            CALL 0x004042d2
00596F69  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00596F6C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00596F72  5E                        POP ESI
00596F73  5B                        POP EBX
00596F74  8B E5                     MOV ESP,EBP
00596F76  5D                        POP EBP
00596F77  C2 04 00                  RET 0x4
switchD_00596d3d::caseD_9:
00596F7A  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
00596F80  85 C0                     TEST EAX,EAX
00596F82  75 2E                     JNZ 0x00596fb2
00596F84  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00596F87  84 C0                     TEST AL,AL
00596F89  75 27                     JNZ 0x00596fb2
00596F8B  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00596F91  6A 00                     PUSH 0x0
00596F93  68 75 01 00 00            PUSH 0x175
00596F98  68 E1 02 00 00            PUSH 0x2e1
00596F9D  6A 5E                     PUSH 0x5e
00596F9F  6A 22                     PUSH 0x22
00596FA1  6A 00                     PUSH 0x0
00596FA3  6A 00                     PUSH 0x0
00596FA5  51                        PUSH ECX
00596FA6  E8 87 A0 E6 FF            CALL 0x00401032
00596FAB  8B CE                     MOV ECX,ESI
00596FAD  E8 7F B0 E6 FF            CALL 0x00402031
switchD_00596d3d::default:
00596FB2  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00596FB5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00596FBB  5E                        POP ESI
00596FBC  5B                        POP EBX
00596FBD  8B E5                     MOV ESP,EBP
00596FBF  5D                        POP EBP
00596FC0  C2 04 00                  RET 0x4
LAB_00596fc3:
00596FC3  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00596FC6  68 BC C0 7C 00            PUSH 0x7cc0bc
00596FCB  68 CC 4C 7A 00            PUSH 0x7a4ccc
00596FD0  56                        PUSH ESI
00596FD1  6A 00                     PUSH 0x0
00596FD3  68 C8 01 00 00            PUSH 0x1c8
00596FD8  68 70 BF 7C 00            PUSH 0x7cbf70
00596FDD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00596FE2  E8 E9 64 11 00            CALL 0x006ad4d0
00596FE7  83 C4 18                  ADD ESP,0x18
00596FEA  85 C0                     TEST EAX,EAX
00596FEC  74 01                     JZ 0x00596fef
00596FEE  CC                        INT3
LAB_00596fef:
00596FEF  68 C8 01 00 00            PUSH 0x1c8
00596FF4  68 70 BF 7C 00            PUSH 0x7cbf70
00596FF9  6A 00                     PUSH 0x0
00596FFB  56                        PUSH ESI
00596FFC  E8 3F EE 10 00            CALL 0x006a5e40
00597001  5E                        POP ESI
00597002  5B                        POP EBX
00597003  8B E5                     MOV ESP,EBP
00597005  5D                        POP EBP
00597006  C2 04 00                  RET 0x4
