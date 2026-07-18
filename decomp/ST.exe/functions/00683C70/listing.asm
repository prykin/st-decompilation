FUN_00683c70:
00683C70  55                        PUSH EBP
00683C71  8B EC                     MOV EBP,ESP
00683C73  81 EC E8 08 00 00         SUB ESP,0x8e8
00683C79  53                        PUSH EBX
00683C7A  B8 B4 88 84 00            MOV EAX,0x8488b4
00683C7F  33 DB                     XOR EBX,EBX
00683C81  56                        PUSH ESI
00683C82  85 C0                     TEST EAX,EAX
00683C84  57                        PUSH EDI
00683C85  C7 45 D4 01 00 00 00      MOV dword ptr [EBP + -0x2c],0x1
00683C8C  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00683C8F  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
00683C92  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00683C95  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00683C98  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00683C9B  74 2B                     JZ 0x00683cc8
00683C9D  B9 A0 16 80 00            MOV ECX,0x8016a0
00683CA2  85 C9                     TEST ECX,ECX
00683CA4  74 22                     JZ 0x00683cc8
00683CA6  8B F9                     MOV EDI,ECX
00683CA8  83 C9 FF                  OR ECX,0xffffffff
00683CAB  33 C0                     XOR EAX,EAX
00683CAD  F2 AE                     SCASB.REPNE ES:EDI
00683CAF  F7 D1                     NOT ECX
00683CB1  2B F9                     SUB EDI,ECX
00683CB3  8B D1                     MOV EDX,ECX
00683CB5  8B F7                     MOV ESI,EDI
00683CB7  BF B4 88 84 00            MOV EDI,0x8488b4
00683CBC  C1 E9 02                  SHR ECX,0x2
00683CBF  F3 A5                     MOVSD.REP ES:EDI,ESI
00683CC1  8B CA                     MOV ECX,EDX
00683CC3  83 E1 03                  AND ECX,0x3
00683CC6  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00683cc8:
00683CC8  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00683CCD  8D 95 58 FE FF FF         LEA EDX,[EBP + 0xfffffe58]
00683CD3  8D 8D 54 FE FF FF         LEA ECX,[EBP + 0xfffffe54]
00683CD9  53                        PUSH EBX
00683CDA  52                        PUSH EDX
00683CDB  89 85 54 FE FF FF         MOV dword ptr [EBP + 0xfffffe54],EAX
00683CE1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00683CE7  E8 04 9B 0A 00            CALL 0x0072d7f0
00683CEC  8B F0                     MOV ESI,EAX
00683CEE  83 C4 08                  ADD ESP,0x8
00683CF1  3B F3                     CMP ESI,EBX
00683CF3  0F 85 04 6C 00 00         JNZ 0x0068a8fd
00683CF9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00683CFC  3B F3                     CMP ESI,EBX
00683CFE  75 17                     JNZ 0x00683d17
00683D00  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00683D05  68 3A 04 00 00            PUSH 0x43a
00683D0A  68 04 56 7D 00            PUSH 0x7d5604
00683D0F  50                        PUSH EAX
00683D10  6A FA                     PUSH -0x6
00683D12  E8 29 21 02 00            CALL 0x006a5e40
LAB_00683d17:
00683D17  68 A8 3F 7D 00            PUSH 0x7d3fa8
00683D1C  56                        PUSH ESI
00683D1D  E8 04 07 D8 FF            CALL 0x00404426
00683D22  8B 8D 54 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe54]
00683D28  8D 85 9C FE FF FF         LEA EAX,[EBP + 0xfffffe9c]
00683D2E  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00683D34  53                        PUSH EBX
00683D35  50                        PUSH EAX
00683D36  89 8D 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],ECX
00683D3C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00683D42  E8 A9 9A 0A 00            CALL 0x0072d7f0
00683D47  8B D0                     MOV EDX,EAX
00683D49  83 C4 08                  ADD ESP,0x8
00683D4C  3B D3                     CMP EDX,EBX
00683D4E  0F 85 00 6A 00 00         JNZ 0x0068a754
00683D54  6A 01                     PUSH 0x1
00683D56  E8 A7 E9 D7 FF            CALL 0x00402702
00683D5B  53                        PUSH EBX
00683D5C  E8 E3 0B D8 FF            CALL 0x00404944
00683D61  6A 01                     PUSH 0x1
00683D63  E8 25 F0 D7 FF            CALL 0x00402d8d
00683D68  6A 01                     PUSH 0x1
00683D6A  E8 62 1F D8 FF            CALL 0x00405cd1
00683D6F  68 78 3F 7D 00            PUSH 0x7d3f78
00683D74  E8 CF F3 D7 FF            CALL 0x00403148
00683D79  89 1D D0 89 84 00         MOV dword ptr [0x008489d0],EBX
00683D7F  89 1D B4 89 84 00         MOV dword ptr [0x008489b4],EBX
00683D85  89 1D B8 89 84 00         MOV dword ptr [0x008489b8],EBX
00683D8B  89 1D BC 89 84 00         MOV dword ptr [0x008489bc],EBX
00683D91  89 1D C0 89 84 00         MOV dword ptr [0x008489c0],EBX
00683D97  89 1D C4 89 84 00         MOV dword ptr [0x008489c4],EBX
00683D9D  89 1D C8 89 84 00         MOV dword ptr [0x008489c8],EBX
00683DA3  89 1D CC 89 84 00         MOV dword ptr [0x008489cc],EBX
00683DA9  89 1D D4 89 84 00         MOV dword ptr [0x008489d4],EBX
00683DAF  89 1D D8 89 84 00         MOV dword ptr [0x008489d8],EBX
00683DB5  89 1D DC 89 84 00         MOV dword ptr [0x008489dc],EBX
00683DBB  E8 03 0F D8 FF            CALL 0x00404cc3
00683DC0  E8 BD 13 D8 FF            CALL 0x00405182
00683DC5  B9 C5 0A 00 00            MOV ECX,0xac5
00683DCA  33 C0                     XOR EAX,EAX
00683DCC  BF 90 1A 81 00            MOV EDI,0x811a90
00683DD1  C7 05 A4 3F 7D 00 01 00 00 00  MOV dword ptr [0x007d3fa4],0x1
00683DDB  F3 AB                     STOSD.REP ES:EDI
00683DDD  89 1D B0 88 84 00         MOV dword ptr [0x008488b0],EBX
00683DE3  89 1D 90 1A 81 00         MOV dword ptr [0x00811a90],EBX
00683DE9  89 1D 98 1A 81 00         MOV dword ptr [0x00811a98],EBX
00683DEF  E8 4B 0B D8 FF            CALL 0x0040493f
00683DF4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00683DF7  3B F3                     CMP ESI,EBX
00683DF9  75 18                     JNZ 0x00683e13
00683DFB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00683E01  68 67 04 00 00            PUSH 0x467
00683E06  68 04 56 7D 00            PUSH 0x7d5604
00683E0B  51                        PUSH ECX
00683E0C  6A CC                     PUSH -0x34
00683E0E  E8 2D 20 02 00            CALL 0x006a5e40
LAB_00683e13:
00683E13  53                        PUSH EBX
00683E14  56                        PUSH ESI
00683E15  68 74 56 7D 00            PUSH 0x7d5674
00683E1A  E8 21 F1 D7 FF            CALL 0x00402f40
00683E1F  83 C4 0C                  ADD ESP,0xc
00683E22  85 C0                     TEST EAX,EAX
00683E24  75 18                     JNZ 0x00683e3e
00683E26  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00683E2C  68 68 04 00 00            PUSH 0x468
00683E31  68 04 56 7D 00            PUSH 0x7d5604
00683E36  52                        PUSH EDX
00683E37  6A FE                     PUSH -0x2
00683E39  E8 02 20 02 00            CALL 0x006a5e40
LAB_00683e3e:
00683E3E  8D 86 04 01 00 00         LEA EAX,[ESI + 0x104]
00683E44  53                        PUSH EBX
00683E45  50                        PUSH EAX
00683E46  68 68 56 7D 00            PUSH 0x7d5668
00683E4B  E8 F0 F0 D7 FF            CALL 0x00402f40
00683E50  83 C4 0C                  ADD ESP,0xc
00683E53  85 C0                     TEST EAX,EAX
00683E55  75 18                     JNZ 0x00683e6f
00683E57  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00683E5D  68 69 04 00 00            PUSH 0x469
00683E62  68 04 56 7D 00            PUSH 0x7d5604
00683E67  51                        PUSH ECX
00683E68  6A FE                     PUSH -0x2
00683E6A  E8 D1 1F 02 00            CALL 0x006a5e40
LAB_00683e6f:
00683E6F  8D 96 08 02 00 00         LEA EDX,[ESI + 0x208]
00683E75  53                        PUSH EBX
00683E76  52                        PUSH EDX
00683E77  68 58 56 7D 00            PUSH 0x7d5658
00683E7C  E8 BF F0 D7 FF            CALL 0x00402f40
00683E81  83 C4 0C                  ADD ESP,0xc
00683E84  85 C0                     TEST EAX,EAX
00683E86  75 17                     JNZ 0x00683e9f
00683E88  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00683E8D  68 6A 04 00 00            PUSH 0x46a
00683E92  68 04 56 7D 00            PUSH 0x7d5604
00683E97  50                        PUSH EAX
00683E98  6A FE                     PUSH -0x2
00683E9A  E8 A1 1F 02 00            CALL 0x006a5e40
LAB_00683e9f:
00683E9F  8B 8E 0C 03 00 00         MOV ECX,dword ptr [ESI + 0x30c]
00683EA5  51                        PUSH ECX
00683EA6  68 4C 56 7D 00            PUSH 0x7d564c
00683EAB  E8 6F 0C D8 FF            CALL 0x00404b1f
00683EB0  83 C4 08                  ADD ESP,0x8
00683EB3  85 C0                     TEST EAX,EAX
00683EB5  7D 18                     JGE 0x00683ecf
00683EB7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00683EBD  68 6B 04 00 00            PUSH 0x46b
00683EC2  68 04 56 7D 00            PUSH 0x7d5604
00683EC7  52                        PUSH EDX
00683EC8  6A FE                     PUSH -0x2
00683ECA  E8 71 1F 02 00            CALL 0x006a5e40
LAB_00683ecf:
00683ECF  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
00683ED5  50                        PUSH EAX
00683ED6  68 40 56 7D 00            PUSH 0x7d5640
00683EDB  E8 3F 0C D8 FF            CALL 0x00404b1f
00683EE0  83 C4 08                  ADD ESP,0x8
00683EE3  85 C0                     TEST EAX,EAX
00683EE5  7D 18                     JGE 0x00683eff
00683EE7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00683EED  68 6C 04 00 00            PUSH 0x46c
00683EF2  68 04 56 7D 00            PUSH 0x7d5604
00683EF7  51                        PUSH ECX
00683EF8  6A FE                     PUSH -0x2
00683EFA  E8 41 1F 02 00            CALL 0x006a5e40
LAB_00683eff:
00683EFF  8B 96 14 03 00 00         MOV EDX,dword ptr [ESI + 0x314]
00683F05  52                        PUSH EDX
00683F06  68 34 56 7D 00            PUSH 0x7d5634
00683F0B  E8 0F 0C D8 FF            CALL 0x00404b1f
00683F10  83 C4 08                  ADD ESP,0x8
00683F13  85 C0                     TEST EAX,EAX
00683F15  7D 17                     JGE 0x00683f2e
00683F17  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00683F1C  68 6D 04 00 00            PUSH 0x46d
00683F21  68 04 56 7D 00            PUSH 0x7d5604
00683F26  50                        PUSH EAX
00683F27  6A FE                     PUSH -0x2
00683F29  E8 12 1F 02 00            CALL 0x006a5e40
LAB_00683f2e:
00683F2E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00683F31  8D 8D 38 FB FF FF         LEA ECX,[EBP + 0xfffffb38]
00683F37  53                        PUSH EBX
00683F38  51                        PUSH ECX
00683F39  68 04 01 00 00            PUSH 0x104
00683F3E  52                        PUSH EDX
00683F3F  FF 15 A8 BB 85 00         CALL dword ptr [0x0085bba8]
00683F45  8D 85 3C FC FF FF         LEA EAX,[EBP + 0xfffffc3c]
00683F4B  8D 8D 18 F7 FF FF         LEA ECX,[EBP + 0xfffff718]
00683F51  50                        PUSH EAX
00683F52  8D 95 18 F8 FF FF         LEA EDX,[EBP + 0xfffff818]
00683F58  51                        PUSH ECX
00683F59  8D 85 60 FF FF FF         LEA EAX,[EBP + 0xffffff60]
00683F5F  52                        PUSH EDX
00683F60  8D 8D 38 FB FF FF         LEA ECX,[EBP + 0xfffffb38]
00683F66  50                        PUSH EAX
00683F67  51                        PUSH ECX
00683F68  E8 C3 A7 0A 00            CALL 0x0072e730
00683F6D  53                        PUSH EBX
00683F6E  8D 95 18 F8 FF FF         LEA EDX,[EBP + 0xfffff818]
00683F74  53                        PUSH EBX
00683F75  8D 85 60 FF FF FF         LEA EAX,[EBP + 0xffffff60]
00683F7B  52                        PUSH EDX
00683F7C  8D 8D 38 FB FF FF         LEA ECX,[EBP + 0xfffffb38]
00683F82  50                        PUSH EAX
00683F83  51                        PUSH ECX
00683F84  E8 87 B1 0A 00            CALL 0x0072f110
00683F89  8D 95 38 FB FF FF         LEA EDX,[EBP + 0xfffffb38]
00683F8F  53                        PUSH EBX
00683F90  52                        PUSH EDX
00683F91  68 F4 55 7D 00            PUSH 0x7d55f4
00683F96  E8 A5 EF D7 FF            CALL 0x00402f40
00683F9B  83 C4 34                  ADD ESP,0x34
00683F9E  85 C0                     TEST EAX,EAX
00683FA0  75 17                     JNZ 0x00683fb9
00683FA2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00683FA7  68 71 04 00 00            PUSH 0x471
00683FAC  68 04 56 7D 00            PUSH 0x7d5604
00683FB1  50                        PUSH EAX
00683FB2  6A FE                     PUSH -0x2
00683FB4  E8 87 1E 02 00            CALL 0x006a5e40
LAB_00683fb9:
00683FB9  8B 15 24 8A 84 00         MOV EDX,dword ptr [0x00848a24]
00683FBF  8D 8D 38 FB FF FF         LEA ECX,[EBP + 0xfffffb38]
00683FC5  53                        PUSH EBX
00683FC6  51                        PUSH ECX
00683FC7  52                        PUSH EDX
00683FC8  E8 D8 DA D7 FF            CALL 0x00401aa5
00683FCD  83 C4 04                  ADD ESP,0x4
00683FD0  50                        PUSH EAX
00683FD1  E8 6A EF D7 FF            CALL 0x00402f40
00683FD6  83 C4 0C                  ADD ESP,0xc
00683FD9  85 C0                     TEST EAX,EAX
00683FDB  75 17                     JNZ 0x00683ff4
00683FDD  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00683FE2  68 72 04 00 00            PUSH 0x472
00683FE7  68 04 56 7D 00            PUSH 0x7d5604
00683FEC  50                        PUSH EAX
00683FED  6A FE                     PUSH -0x2
00683FEF  E8 4C 1E 02 00            CALL 0x006a5e40
LAB_00683ff4:
00683FF4  33 DB                     XOR EBX,EBX
switchD_006841b6::default:
00683FF6  39 5D D4                  CMP dword ptr [EBP + -0x2c],EBX
00683FF9  74 20                     JZ 0x0068401b
00683FFB  E8 7F DD D7 FF            CALL 0x00401d7f
00684000  3B C3                     CMP EAX,EBX
00684002  7D 17                     JGE 0x0068401b
00684004  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068400A  68 77 04 00 00            PUSH 0x477
0068400F  68 04 56 7D 00            PUSH 0x7d5604
00684014  51                        PUSH ECX
00684015  50                        PUSH EAX
00684016  E8 25 1E 02 00            CALL 0x006a5e40
LAB_0068401b:
0068401B  39 5D 18                  CMP dword ptr [EBP + 0x18],EBX
0068401E  0F 84 50 01 00 00         JZ 0x00684174
00684024  B9 06 00 00 00            MOV ECX,0x6
00684029  33 C0                     XOR EAX,EAX
0068402B  8D BD 08 FF FF FF         LEA EDI,[EBP + 0xffffff08]
00684031  8B 15 54 75 85 00         MOV EDX,dword ptr [0x00857554]
00684037  F3 AB                     STOSD.REP ES:EDI
00684039  8B 0D 3C 75 85 00         MOV ECX,dword ptr [0x0085753c]
0068403F  8D 85 3C FC FF FF         LEA EAX,[EBP + 0xfffffc3c]
00684045  50                        PUSH EAX
00684046  53                        PUSH EBX
00684047  53                        PUSH EBX
00684048  53                        PUSH EBX
00684049  51                        PUSH ECX
0068404A  89 95 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EDX
00684050  E8 DB A6 0A 00            CALL 0x0072e730
00684055  8A 85 3C FC FF FF         MOV AL,byte ptr [EBP + 0xfffffc3c]
0068405B  83 C4 14                  ADD ESP,0x14
0068405E  84 C0                     TEST AL,AL
00684060  74 2D                     JZ 0x0068408f
00684062  BA 0C 79 84 00            MOV EDX,0x84790c
00684067  85 D2                     TEST EDX,EDX
00684069  74 56                     JZ 0x006840c1
0068406B  8B 3D 3C 75 85 00         MOV EDI,dword ptr [0x0085753c]
00684071  3B FB                     CMP EDI,EBX
00684073  74 4C                     JZ 0x006840c1
00684075  83 C9 FF                  OR ECX,0xffffffff
00684078  33 C0                     XOR EAX,EAX
0068407A  F2 AE                     SCASB.REPNE ES:EDI
0068407C  F7 D1                     NOT ECX
0068407E  2B F9                     SUB EDI,ECX
00684080  8B C1                     MOV EAX,ECX
00684082  8B F7                     MOV ESI,EDI
00684084  8B FA                     MOV EDI,EDX
00684086  C1 E9 02                  SHR ECX,0x2
00684089  F3 A5                     MOVSD.REP ES:EDI,ESI
0068408B  8B C8                     MOV ECX,EAX
0068408D  EB 2D                     JMP 0x006840bc
LAB_0068408f:
0068408F  B9 0C 79 84 00            MOV ECX,0x84790c
00684094  85 C9                     TEST ECX,ECX
00684096  74 29                     JZ 0x006840c1
00684098  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068409B  3B C3                     CMP EAX,EBX
0068409D  74 22                     JZ 0x006840c1
0068409F  8B F8                     MOV EDI,EAX
006840A1  83 C9 FF                  OR ECX,0xffffffff
006840A4  33 C0                     XOR EAX,EAX
006840A6  F2 AE                     SCASB.REPNE ES:EDI
006840A8  F7 D1                     NOT ECX
006840AA  2B F9                     SUB EDI,ECX
006840AC  8B D1                     MOV EDX,ECX
006840AE  8B F7                     MOV ESI,EDI
006840B0  BF 0C 79 84 00            MOV EDI,0x84790c
006840B5  C1 E9 02                  SHR ECX,0x2
006840B8  F3 A5                     MOVSD.REP ES:EDI,ESI
006840BA  8B CA                     MOV ECX,EDX
LAB_006840bc:
006840BC  83 E1 03                  AND ECX,0x3
006840BF  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006840c1:
006840C1  A1 5C 75 85 00            MOV EAX,[0x0085755c]
006840C6  68 FE 03 00 00            PUSH 0x3fe
006840CB  50                        PUSH EAX
006840CC  68 0C 7D 84 00            PUSH 0x847d0c
006840D1  C7 85 08 FF FF FF 0C 79 84 00  MOV dword ptr [EBP + 0xffffff08],0x84790c
006840DB  E8 60 A2 0A 00            CALL 0x0072e340
006840E0  A1 D0 89 84 00            MOV EAX,[0x008489d0]
006840E5  83 C4 0C                  ADD ESP,0xc
006840E8  3B C3                     CMP EAX,EBX
006840EA  C7 85 10 FF FF FF 0C 7D 84 00  MOV dword ptr [EBP + 0xffffff10],0x847d0c
006840F4  74 55                     JZ 0x0068414b
006840F6  8B 0D 0C 8A 84 00         MOV ECX,dword ptr [0x00848a0c]
006840FC  8B 15 10 8A 84 00         MOV EDX,dword ptr [0x00848a10]
00684102  89 8D 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ECX
00684108  B9 0C 81 84 00            MOV ECX,0x84810c
0068410D  85 C9                     TEST ECX,ECX
0068410F  89 95 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EDX
00684115  74 2A                     JZ 0x00684141
00684117  8D B8 31 02 00 00         LEA EDI,[EAX + 0x231]
0068411D  3B FB                     CMP EDI,EBX
0068411F  74 20                     JZ 0x00684141
00684121  83 C9 FF                  OR ECX,0xffffffff
00684124  33 C0                     XOR EAX,EAX
00684126  F2 AE                     SCASB.REPNE ES:EDI
00684128  F7 D1                     NOT ECX
0068412A  2B F9                     SUB EDI,ECX
0068412C  8B D1                     MOV EDX,ECX
0068412E  8B F7                     MOV ESI,EDI
00684130  BF 0C 81 84 00            MOV EDI,0x84810c
00684135  C1 E9 02                  SHR ECX,0x2
00684138  F3 A5                     MOVSD.REP ES:EDI,ESI
0068413A  8B CA                     MOV ECX,EDX
0068413C  83 E1 03                  AND ECX,0x3
0068413F  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00684141:
00684141  C7 85 14 FF FF FF 0C 81 84 00  MOV dword ptr [EBP + 0xffffff14],0x84810c
LAB_0068414b:
0068414B  8D 85 08 FF FF FF         LEA EAX,[EBP + 0xffffff08]
00684151  50                        PUSH EAX
00684152  FF 55 18                  CALL dword ptr [EBP + 0x18]
00684155  83 C4 04                  ADD ESP,0x4
00684158  3B C3                     CMP EAX,EBX
0068415A  74 18                     JZ 0x00684174
0068415C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00684162  68 8A 04 00 00            PUSH 0x48a
00684167  68 04 56 7D 00            PUSH 0x7d5604
0068416C  51                        PUSH ECX
0068416D  6A 9B                     PUSH -0x65
0068416F  E8 CC 1C 02 00            CALL 0x006a5e40
LAB_00684174:
00684174  8B 35 18 2D 7D 00         MOV ESI,dword ptr [0x007d2d18]
0068417A  BF 01 00 00 00            MOV EDI,0x1
0068417F  83 FE 1C                  CMP ESI,0x1c
00684182  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00684185  0F 84 F8 63 00 00         JZ 0x0068a583
0068418B  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00684191  8B C2                     MOV EAX,EDX
00684193  C1 E0 04                  SHL EAX,0x4
00684196  03 C2                     ADD EAX,EDX
00684198  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068419B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068419E  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006841A1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006841A4  C1 E0 02                  SHL EAX,0x2
006841A7  8B 88 90 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a90]
006841AD  83 F9 04                  CMP ECX,0x4
006841B0  0F 87 40 FE FF FF         JA 0x00683ff6
switchD_006841b6::switchD:
006841B6  FF 24 8D A8 A9 68 00      JMP dword ptr [ECX*0x4 + 0x68a9a8]
switchD_006841b6::caseD_0:
006841BD  8B CE                     MOV ECX,ESI
006841BF  81 E9 B7 03 00 00         SUB ECX,0x3b7
006841C5  0F 84 8C 00 00 00         JZ 0x00684257
006841CB  49                        DEC ECX
006841CC  0F 85 09 01 00 00         JNZ 0x006842db
006841D2  39 B8 8C 45 81 00         CMP dword ptr [EAX + 0x81458c],EDI
006841D8  7D 18                     JGE 0x006841f2
006841DA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006841E0  68 9F 04 00 00            PUSH 0x49f
006841E5  68 04 56 7D 00            PUSH 0x7d5604
006841EA  51                        PUSH ECX
006841EB  6A 92                     PUSH -0x6e
006841ED  E8 4E 1C 02 00            CALL 0x006a5e40
LAB_006841f2:
006841F2  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006841F8  8B C1                     MOV EAX,ECX
006841FA  C1 E0 04                  SHL EAX,0x4
006841FD  03 C1                     ADD EAX,ECX
006841FF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684202  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00684205  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00684208  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068420B  C1 E0 02                  SHL EAX,0x2
0068420E  8B B0 8C 45 81 00         MOV ESI,dword ptr [EAX + 0x81458c]
00684214  4E                        DEC ESI
00684215  8B CE                     MOV ECX,ESI
00684217  89 B0 8C 45 81 00         MOV dword ptr [EAX + 0x81458c],ESI
0068421D  3B CB                     CMP ECX,EBX
0068421F  0F 8E AA 00 00 00         JLE 0x006842cf
00684225  8B 94 C8 F4 43 81 00      MOV EDX,dword ptr [EAX + ECX*0x8 + 0x8143f4]
0068422C  3B D3                     CMP EDX,EBX
0068422E  75 09                     JNZ 0x00684239
00684230  39 9C C8 F8 43 81 00      CMP dword ptr [EAX + ECX*0x8 + 0x8143f8],EBX
00684237  74 15                     JZ 0x0068424e
LAB_00684239:
00684239  3B D7                     CMP EDX,EDI
0068423B  0F 85 8E 00 00 00         JNZ 0x006842cf
00684241  39 9C C8 F8 43 81 00      CMP dword ptr [EAX + ECX*0x8 + 0x8143f8],EBX
00684248  0F 84 81 00 00 00         JZ 0x006842cf
LAB_0068424e:
0068424E  57                        PUSH EDI
0068424F  E8 5E 11 D8 FF            CALL 0x004053b2
00684254  57                        PUSH EDI
00684255  EB 7F                     JMP 0x006842d6
LAB_00684257:
00684257  39 B8 8C 45 81 00         CMP dword ptr [EAX + 0x81458c],EDI
0068425D  7D 17                     JGE 0x00684276
0068425F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00684264  68 94 04 00 00            PUSH 0x494
00684269  68 04 56 7D 00            PUSH 0x7d5604
0068426E  50                        PUSH EAX
0068426F  6A 92                     PUSH -0x6e
00684271  E8 CA 1B 02 00            CALL 0x006a5e40
LAB_00684276:
00684276  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068427C  8B C1                     MOV EAX,ECX
0068427E  C1 E0 04                  SHL EAX,0x4
00684281  03 C1                     ADD EAX,ECX
00684283  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684286  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00684289  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068428C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068428F  C1 E0 02                  SHL EAX,0x2
00684292  8B 88 8C 45 81 00         MOV ECX,dword ptr [EAX + 0x81458c]
00684298  89 BC C8 F4 43 81 00      MOV dword ptr [EAX + ECX*0x8 + 0x8143f4],EDI
0068429F  8B 90 8C 45 81 00         MOV EDX,dword ptr [EAX + 0x81458c]
006842A5  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
006842A8  8B 88 F4 43 81 00         MOV ECX,dword ptr [EAX + 0x8143f4]
006842AE  3B CB                     CMP ECX,EBX
006842B0  75 08                     JNZ 0x006842ba
006842B2  39 98 F8 43 81 00         CMP dword ptr [EAX + 0x8143f8],EBX
006842B8  74 0C                     JZ 0x006842c6
LAB_006842ba:
006842BA  3B CF                     CMP ECX,EDI
006842BC  75 11                     JNZ 0x006842cf
006842BE  39 98 F8 43 81 00         CMP dword ptr [EAX + 0x8143f8],EBX
006842C4  74 09                     JZ 0x006842cf
LAB_006842c6:
006842C6  57                        PUSH EDI
006842C7  E8 E6 10 D8 FF            CALL 0x004053b2
006842CC  57                        PUSH EDI
006842CD  EB 07                     JMP 0x006842d6
LAB_006842cf:
006842CF  53                        PUSH EBX
006842D0  E8 DD 10 D8 FF            CALL 0x004053b2
006842D5  53                        PUSH EBX
LAB_006842d6:
006842D6  E8 BD F8 D7 FF            CALL 0x00403b98
LAB_006842db:
006842DB  8B 35 B0 88 84 00         MOV ESI,dword ptr [0x008488b0]
006842E1  8B C6                     MOV EAX,ESI
006842E3  C1 E0 04                  SHL EAX,0x4
006842E6  03 C6                     ADD EAX,ESI
006842E8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006842EB  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006842EE  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
006842F1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006842F4  C1 E0 02                  SHL EAX,0x2
006842F7  8B 88 8C 45 81 00         MOV ECX,dword ptr [EAX + 0x81458c]
006842FD  3B CB                     CMP ECX,EBX
006842FF  7E 2A                     JLE 0x0068432b
00684301  8B 94 C8 F4 43 81 00      MOV EDX,dword ptr [EAX + ECX*0x8 + 0x8143f4]
00684308  3B D3                     CMP EDX,EBX
0068430A  75 0D                     JNZ 0x00684319
0068430C  39 9C C8 F8 43 81 00      CMP dword ptr [EAX + ECX*0x8 + 0x8143f8],EBX
00684313  0F 84 DD FC FF FF         JZ 0x00683ff6
LAB_00684319:
00684319  83 FA 01                  CMP EDX,0x1
0068431C  75 0D                     JNZ 0x0068432b
0068431E  39 9C C8 F8 43 81 00      CMP dword ptr [EAX + ECX*0x8 + 0x8143f8],EBX
00684325  0F 85 CB FC FF FF         JNZ 0x00683ff6
LAB_0068432b:
0068432B  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00684330  3D 74 04 00 00            CMP EAX,0x474
00684335  0F 8F 85 08 00 00         JG 0x00684bc0
0068433B  3D 56 04 00 00            CMP EAX,0x456
00684340  0F 8D EA 08 00 00         JGE 0x00684c30
00684346  3D ED 03 00 00            CMP EAX,0x3ed
0068434B  0F 8F 52 08 00 00         JG 0x00684ba3
00684351  3D E8 03 00 00            CMP EAX,0x3e8
00684356  0F 8D D4 08 00 00         JGE 0x00684c30
0068435C  83 F8 23                  CMP EAX,0x23
0068435F  0F 8F 65 07 00 00         JG 0x00684aca
00684365  0F 84 C5 08 00 00         JZ 0x00684c30
0068436B  83 E8 19                  SUB EAX,0x19
0068436E  0F 84 20 06 00 00         JZ 0x00684994
00684374  48                        DEC EAX
00684375  0F 84 0C 02 00 00         JZ 0x00684587
0068437B  83 E8 08                  SUB EAX,0x8
0068437E  0F 85 72 FC FF FF         JNZ 0x00683ff6
00684384  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
0068438A  6A 3F                     PUSH 0x3f
0068438C  42                        INC EDX
0068438D  8B C2                     MOV EAX,EDX
0068438F  89 15 B0 88 84 00         MOV dword ptr [0x008488b0],EDX
00684395  C1 E0 04                  SHL EAX,0x4
00684398  03 C2                     ADD EAX,EDX
0068439A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068439D  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006843A0  33 C0                     XOR EAX,EAX
006843A2  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
006843A5  B9 C5 0A 00 00            MOV ECX,0xac5
006843AA  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
006843AD  C1 E2 02                  SHL EDX,0x2
006843B0  8D B2 90 1A 81 00         LEA ESI,[EDX + 0x811a90]
006843B6  8B FE                     MOV EDI,ESI
006843B8  F3 AB                     STOSD.REP ES:EDI
006843BA  A1 28 75 85 00            MOV EAX,[0x00857528]
006843BF  8D 8A A4 1A 81 00         LEA ECX,[EDX + 0x811aa4]
006843C5  50                        PUSH EAX
006843C6  51                        PUSH ECX
006843C7  C7 06 01 00 00 00         MOV dword ptr [ESI],0x1
006843CD  E8 6E 9F 0A 00            CALL 0x0072e340
006843D2  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
006843D8  52                        PUSH EDX
006843D9  E8 1E D5 D7 FF            CALL 0x004018fc
006843DE  8B 35 B0 88 84 00         MOV ESI,dword ptr [0x008488b0]
006843E4  83 C4 10                  ADD ESP,0x10
006843E7  8B CE                     MOV ECX,ESI
006843E9  C1 E1 04                  SHL ECX,0x4
006843EC  03 CE                     ADD ECX,ESI
006843EE  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006843F1  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
006843F4  8D 34 4E                  LEA ESI,[ESI + ECX*0x2]
006843F7  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
006843FA  C1 E6 02                  SHL ESI,0x2
006843FD  83 F8 05                  CMP EAX,0x5
00684400  89 86 9C 1A 81 00         MOV dword ptr [ESI + 0x811a9c],EAX
00684406  75 54                     JNZ 0x0068445c
00684408  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068440E  75 1B                     JNZ 0x0068442b
00684410  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00684416  68 BB 04 00 00            PUSH 0x4bb
0068441B  68 04 56 7D 00            PUSH 0x7d5604
00684420  52                        PUSH EDX
00684421  68 71 FF FF FF            PUSH 0xffffff71
00684426  E8 15 1A 02 00            CALL 0x006a5e40
LAB_0068442b:
0068442B  8B 35 B0 88 84 00         MOV ESI,dword ptr [0x008488b0]
00684431  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
00684437  8B C6                     MOV EAX,ESI
00684439  51                        PUSH ECX
0068443A  C1 E0 04                  SHL EAX,0x4
0068443D  03 C6                     ADD EAX,ESI
0068443F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684442  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00684445  8D 34 46                  LEA ESI,[ESI + EAX*0x2]
00684448  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
0068444B  C1 E6 02                  SHL ESI,0x2
0068444E  E8 F5 00 D8 FF            CALL 0x00404548
00684453  83 C4 04                  ADD ESP,0x4
00684456  89 86 A0 1A 81 00         MOV dword ptr [ESI + 0x811aa0],EAX
LAB_0068445c:
0068445C  8B 86 9C 1A 81 00         MOV EAX,dword ptr [ESI + 0x811a9c]
00684462  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00684468  83 F8 06                  CMP EAX,0x6
0068446B  75 5A                     JNZ 0x006844c7
0068446D  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00684473  75 21                     JNZ 0x00684496
00684475  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068447B  68 BF 04 00 00            PUSH 0x4bf
00684480  68 04 56 7D 00            PUSH 0x7d5604
00684485  52                        PUSH EDX
00684486  68 71 FF FF FF            PUSH 0xffffff71
0068448B  E8 B0 19 02 00            CALL 0x006a5e40
00684490  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
LAB_00684496:
00684496  8B C1                     MOV EAX,ECX
00684498  C1 E0 04                  SHL EAX,0x4
0068449B  03 C1                     ADD EAX,ECX
0068449D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006844A0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006844A3  8D 34 41                  LEA ESI,[ECX + EAX*0x2]
006844A6  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
006844AC  51                        PUSH ECX
006844AD  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
006844B0  C1 E6 02                  SHL ESI,0x2
006844B3  E8 43 02 D8 FF            CALL 0x004046fb
006844B8  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006844BE  83 C4 04                  ADD ESP,0x4
006844C1  89 86 A0 1A 81 00         MOV dword ptr [ESI + 0x811aa0],EAX
LAB_006844c7:
006844C7  83 BE 9C 1A 81 00 07      CMP dword ptr [ESI + 0x811a9c],0x7
006844CE  75 54                     JNZ 0x00684524
006844D0  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006844D6  75 21                     JNZ 0x006844f9
006844D8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006844DE  68 C3 04 00 00            PUSH 0x4c3
006844E3  68 04 56 7D 00            PUSH 0x7d5604
006844E8  52                        PUSH EDX
006844E9  68 71 FF FF FF            PUSH 0xffffff71
006844EE  E8 4D 19 02 00            CALL 0x006a5e40
006844F3  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
LAB_006844f9:
006844F9  8B C1                     MOV EAX,ECX
006844FB  C1 E0 04                  SHL EAX,0x4
006844FE  03 C1                     ADD EAX,ECX
00684500  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684503  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00684506  8D 34 41                  LEA ESI,[ECX + EAX*0x2]
00684509  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
0068450F  51                        PUSH ECX
00684510  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
00684513  C1 E6 02                  SHL ESI,0x2
00684516  E8 8E F9 D7 FF            CALL 0x00403ea9
0068451B  83 C4 04                  ADD ESP,0x4
0068451E  89 86 A0 1A 81 00         MOV dword ptr [ESI + 0x811aa0],EAX
LAB_00684524:
00684524  83 BE 9C 1A 81 00 08      CMP dword ptr [ESI + 0x811a9c],0x8
0068452B  0F 85 C5 FA FF FF         JNZ 0x00683ff6
00684531  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00684537  75 1B                     JNZ 0x00684554
00684539  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068453F  68 C7 04 00 00            PUSH 0x4c7
00684544  68 04 56 7D 00            PUSH 0x7d5604
00684549  52                        PUSH EDX
0068454A  68 71 FF FF FF            PUSH 0xffffff71
0068454F  E8 EC 18 02 00            CALL 0x006a5e40
LAB_00684554:
00684554  A1 28 75 85 00            MOV EAX,[0x00857528]
00684559  50                        PUSH EAX
0068455A  E8 63 F9 D7 FF            CALL 0x00403ec2
0068455F  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00684565  83 C4 04                  ADD ESP,0x4
00684568  8B CA                     MOV ECX,EDX
0068456A  C1 E1 04                  SHL ECX,0x4
0068456D  03 CA                     ADD ECX,EDX
0068456F  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00684572  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00684575  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
00684578  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
0068457B  89 04 95 A0 1A 81 00      MOV dword ptr [EDX*0x4 + 0x811aa0],EAX
00684582  E9 6F FA FF FF            JMP 0x00683ff6
LAB_00684587:
00684587  83 FE 02                  CMP ESI,0x2
0068458A  7D 1A                     JGE 0x006845a6
0068458C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00684591  68 BA 05 00 00            PUSH 0x5ba
00684596  68 04 56 7D 00            PUSH 0x7d5604
0068459B  50                        PUSH EAX
0068459C  68 71 FF FF FF            PUSH 0xffffff71
006845A1  E8 9A 18 02 00            CALL 0x006a5e40
LAB_006845a6:
006845A6  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006845AC  49                        DEC ECX
006845AD  8B C1                     MOV EAX,ECX
006845AF  89 0D B0 88 84 00         MOV dword ptr [0x008488b0],ECX
006845B5  C1 E0 04                  SHL EAX,0x4
006845B8  03 C1                     ADD EAX,ECX
006845BA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006845BD  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006845C0  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006845C3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006845C6  8B 04 85 94 1A 81 00      MOV EAX,dword ptr [EAX*0x4 + 0x811a94]
006845CD  83 F8 42                  CMP EAX,0x42
006845D0  0F 8F F5 02 00 00         JG 0x006848cb
006845D6  0F 84 CC 01 00 00         JZ 0x006847a8
006845DC  83 F8 19                  CMP EAX,0x19
006845DF  0F 84 D2 00 00 00         JZ 0x006846b7
006845E5  83 F8 23                  CMP EAX,0x23
006845E8  0F 85 9B 03 00 00         JNZ 0x00684989
006845EE  E8 DD D6 D7 FF            CALL 0x00401cd0
006845F3  8B F0                     MOV ESI,EAX
006845F5  3B F3                     CMP ESI,EBX
006845F7  75 1B                     JNZ 0x00684614
006845F9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006845FF  68 EC 05 00 00            PUSH 0x5ec
00684604  68 04 56 7D 00            PUSH 0x7d5604
00684609  51                        PUSH ECX
0068460A  68 72 FF FF FF            PUSH 0xffffff72
0068460F  E8 2C 18 02 00            CALL 0x006a5e40
LAB_00684614:
00684614  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068461A  75 1B                     JNZ 0x00684637
0068461C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00684622  68 ED 05 00 00            PUSH 0x5ed
00684627  68 04 56 7D 00            PUSH 0x7d5604
0068462C  52                        PUSH EDX
0068462D  68 71 FF FF FF            PUSH 0xffffff71
00684632  E8 09 18 02 00            CALL 0x006a5e40
LAB_00684637:
00684637  8B 86 72 04 00 00         MOV EAX,dword ptr [ESI + 0x472]
0068463D  8D 4D 88                  LEA ECX,[EBP + -0x78]
00684640  81 C6 6E 04 00 00         ADD ESI,0x46e
00684646  51                        PUSH ECX
00684647  56                        PUSH ESI
00684648  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
0068464E  C6 45 88 0B               MOV byte ptr [EBP + -0x78],0xb
00684652  66 C7 45 89 22 03         MOV word ptr [EBP + -0x77],0x322
00684658  66 89 5D 8B               MOV word ptr [EBP + -0x75],BX
0068465C  E8 E8 DA D7 FF            CALL 0x00402149
00684661  A1 CC 89 84 00            MOV EAX,[0x008489cc]
00684666  83 C4 08                  ADD ESP,0x8
00684669  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
0068466F  8B 48 0F                  MOV ECX,dword ptr [EAX + 0xf]
00684672  52                        PUSH EDX
00684673  51                        PUSH ECX
00684674  E8 47 9B 02 00            CALL 0x006ae1c0
00684679  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068467F  8B C1                     MOV EAX,ECX
00684681  C1 E0 04                  SHL EAX,0x4
00684684  03 C1                     ADD EAX,ECX
00684686  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684689  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068468C  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068468F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684692  8B 0C 85 90 45 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x814590]
00684699  51                        PUSH ECX
0068469A  56                        PUSH ESI
0068469B  E8 D9 F0 D7 FF            CALL 0x00403779
006846A0  8B F0                     MOV ESI,EAX
006846A2  83 C4 08                  ADD ESP,0x8
006846A5  3B F3                     CMP ESI,EBX
006846A7  0F 85 DD 00 00 00         JNZ 0x0068478a
006846AD  68 F7 05 00 00            PUSH 0x5f7
006846B2  E9 C0 00 00 00            JMP 0x00684777
LAB_006846b7:
006846B7  E8 14 D6 D7 FF            CALL 0x00401cd0
006846BC  8B F0                     MOV ESI,EAX
006846BE  3B F3                     CMP ESI,EBX
006846C0  75 1A                     JNZ 0x006846dc
006846C2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006846C7  68 FC 05 00 00            PUSH 0x5fc
006846CC  68 04 56 7D 00            PUSH 0x7d5604
006846D1  50                        PUSH EAX
006846D2  68 72 FF FF FF            PUSH 0xffffff72
006846D7  E8 64 17 02 00            CALL 0x006a5e40
LAB_006846dc:
006846DC  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006846E2  75 1B                     JNZ 0x006846ff
006846E4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006846EA  68 FD 05 00 00            PUSH 0x5fd
006846EF  68 04 56 7D 00            PUSH 0x7d5604
006846F4  51                        PUSH ECX
006846F5  68 71 FF FF FF            PUSH 0xffffff71
006846FA  E8 41 17 02 00            CALL 0x006a5e40
LAB_006846ff:
006846FF  8B 96 72 04 00 00         MOV EDX,dword ptr [ESI + 0x472]
00684705  8D 45 98                  LEA EAX,[EBP + -0x68]
00684708  81 C6 6E 04 00 00         ADD ESI,0x46e
0068470E  50                        PUSH EAX
0068470F  56                        PUSH ESI
00684710  89 95 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EDX
00684716  C6 45 98 0B               MOV byte ptr [EBP + -0x68],0xb
0068471A  66 C7 45 99 23 03         MOV word ptr [EBP + -0x67],0x323
00684720  66 89 5D 9B               MOV word ptr [EBP + -0x65],BX
00684724  E8 20 DA D7 FF            CALL 0x00402149
00684729  8B 15 CC 89 84 00         MOV EDX,dword ptr [0x008489cc]
0068472F  83 C4 08                  ADD ESP,0x8
00684732  8D 8D 44 FF FF FF         LEA ECX,[EBP + 0xffffff44]
00684738  8B 42 0F                  MOV EAX,dword ptr [EDX + 0xf]
0068473B  51                        PUSH ECX
0068473C  50                        PUSH EAX
0068473D  E8 7E 9A 02 00            CALL 0x006ae1c0
00684742  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00684748  8B C1                     MOV EAX,ECX
0068474A  C1 E0 04                  SHL EAX,0x4
0068474D  03 C1                     ADD EAX,ECX
0068474F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684752  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00684755  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00684758  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068475B  8B 0C 85 90 45 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x814590]
00684762  51                        PUSH ECX
00684763  56                        PUSH ESI
00684764  E8 10 F0 D7 FF            CALL 0x00403779
00684769  8B F0                     MOV ESI,EAX
0068476B  83 C4 08                  ADD ESP,0x8
0068476E  3B F3                     CMP ESI,EBX
00684770  75 18                     JNZ 0x0068478a
00684772  68 07 06 00 00            PUSH 0x607
LAB_00684777:
00684777  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068477D  68 04 56 7D 00            PUSH 0x7d5604
00684782  52                        PUSH EDX
00684783  6A 94                     PUSH -0x6c
00684785  E8 B6 16 02 00            CALL 0x006a5e40
LAB_0068478a:
0068478A  A1 CC 89 84 00            MOV EAX,[0x008489cc]
0068478F  8B 48 0F                  MOV ECX,dword ptr [EAX + 0xf]
00684792  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00684795  89 56 01                  MOV dword ptr [ESI + 0x1],EDX
00684798  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068479D  48                        DEC EAX
0068479E  A3 B0 88 84 00            MOV [0x008488b0],EAX
006847A3  E9 4E F8 FF FF            JMP 0x00683ff6
LAB_006847a8:
006847A8  E8 23 D5 D7 FF            CALL 0x00401cd0
006847AD  8B F8                     MOV EDI,EAX
006847AF  3B FB                     CMP EDI,EBX
006847B1  75 1A                     JNZ 0x006847cd
006847B3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006847B8  68 0C 06 00 00            PUSH 0x60c
006847BD  68 04 56 7D 00            PUSH 0x7d5604
006847C2  50                        PUSH EAX
006847C3  68 72 FF FF FF            PUSH 0xffffff72
006847C8  E8 73 16 02 00            CALL 0x006a5e40
LAB_006847cd:
006847CD  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006847D3  75 1B                     JNZ 0x006847f0
006847D5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006847DB  68 0D 06 00 00            PUSH 0x60d
006847E0  68 04 56 7D 00            PUSH 0x7d5604
006847E5  51                        PUSH ECX
006847E6  68 71 FF FF FF            PUSH 0xffffff71
006847EB  E8 50 16 02 00            CALL 0x006a5e40
LAB_006847f0:
006847F0  8B 97 72 04 00 00         MOV EDX,dword ptr [EDI + 0x472]
006847F6  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006847FC  89 95 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDX
00684802  8B 87 56 04 00 00         MOV EAX,dword ptr [EDI + 0x456]
00684808  50                        PUSH EAX
00684809  8B C1                     MOV EAX,ECX
0068480B  C1 E0 04                  SHL EAX,0x4
0068480E  03 C1                     ADD EAX,ECX
00684810  8D B7 6E 04 00 00         LEA ESI,[EDI + 0x46e]
00684816  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684819  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068481C  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
0068481F  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00684822  8D 0C 85 94 45 81 00      LEA ECX,[EAX*0x4 + 0x814594]
00684829  51                        PUSH ECX
0068482A  6A 02                     PUSH 0x2
0068482C  56                        PUSH ESI
0068482D  E8 B3 F6 D7 FF            CALL 0x00403ee5
00684832  8D 55 A8                  LEA EDX,[EBP + -0x58]
00684835  C6 45 A8 0B               MOV byte ptr [EBP + -0x58],0xb
00684839  52                        PUSH EDX
0068483A  56                        PUSH ESI
0068483B  66 C7 45 A9 21 00         MOV word ptr [EBP + -0x57],0x21
00684841  66 C7 45 AB 01 00         MOV word ptr [EBP + -0x55],0x1
00684847  E8 FD D8 D7 FF            CALL 0x00402149
0068484C  8B 0D CC 89 84 00         MOV ECX,dword ptr [0x008489cc]
00684852  83 C4 18                  ADD ESP,0x18
00684855  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
0068485B  8B 51 0F                  MOV EDX,dword ptr [ECX + 0xf]
0068485E  50                        PUSH EAX
0068485F  52                        PUSH EDX
00684860  E8 5B 99 02 00            CALL 0x006ae1c0
00684865  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068486B  8B C1                     MOV EAX,ECX
0068486D  C1 E0 04                  SHL EAX,0x4
00684870  03 C1                     ADD EAX,ECX
00684872  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684875  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00684878  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
0068487B  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0068487E  8B 14 8D 90 45 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x814590]
00684885  52                        PUSH EDX
00684886  56                        PUSH ESI
00684887  E8 ED EE D7 FF            CALL 0x00403779
0068488C  8B F0                     MOV ESI,EAX
0068488E  83 C4 08                  ADD ESP,0x8
00684891  3B F3                     CMP ESI,EBX
00684893  75 17                     JNZ 0x006848ac
00684895  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068489A  68 1A 06 00 00            PUSH 0x61a
0068489F  68 04 56 7D 00            PUSH 0x7d5604
006848A4  50                        PUSH EAX
006848A5  6A 94                     PUSH -0x6c
006848A7  E8 94 15 02 00            CALL 0x006a5e40
LAB_006848ac:
006848AC  8B 0D CC 89 84 00         MOV ECX,dword ptr [0x008489cc]
006848B2  8B 51 0F                  MOV EDX,dword ptr [ECX + 0xf]
006848B5  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006848B8  89 46 01                  MOV dword ptr [ESI + 0x1],EAX
006848BB  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006848C0  48                        DEC EAX
006848C1  A3 B0 88 84 00            MOV [0x008488b0],EAX
006848C6  E9 2B F7 FF FF            JMP 0x00683ff6
LAB_006848cb:
006848CB  3D 56 04 00 00            CMP EAX,0x456
006848D0  0F 8C B3 00 00 00         JL 0x00684989
006848D6  3D 74 04 00 00            CMP EAX,0x474
006848DB  0F 8F A8 00 00 00         JG 0x00684989
006848E1  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006848E7  75 1B                     JNZ 0x00684904
006848E9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006848EF  68 DC 05 00 00            PUSH 0x5dc
006848F4  68 04 56 7D 00            PUSH 0x7d5604
006848F9  51                        PUSH ECX
006848FA  68 71 FF FF FF            PUSH 0xffffff71
006848FF  E8 3C 15 02 00            CALL 0x006a5e40
LAB_00684904:
00684904  E8 C7 D3 D7 FF            CALL 0x00401cd0
00684909  8B F0                     MOV ESI,EAX
0068490B  3B F3                     CMP ESI,EBX
0068490D  75 1B                     JNZ 0x0068492a
0068490F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00684915  68 DD 05 00 00            PUSH 0x5dd
0068491A  68 04 56 7D 00            PUSH 0x7d5604
0068491F  52                        PUSH EDX
00684920  68 72 FF FF FF            PUSH 0xffffff72
00684925  E8 16 15 02 00            CALL 0x006a5e40
LAB_0068492a:
0068492A  8B 86 72 04 00 00         MOV EAX,dword ptr [ESI + 0x472]
00684930  8D 4D C0                  LEA ECX,[EBP + -0x40]
00684933  8D 96 6E 04 00 00         LEA EDX,[ESI + 0x46e]
00684939  51                        PUSH ECX
0068493A  52                        PUSH EDX
0068493B  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
00684941  C6 45 C0 0B               MOV byte ptr [EBP + -0x40],0xb
00684945  66 C7 45 C1 14 05         MOV word ptr [EBP + -0x3f],0x514
0068494B  66 89 5D C3               MOV word ptr [EBP + -0x3d],BX
0068494F  E8 F5 D7 D7 FF            CALL 0x00402149
00684954  8B 0D CC 89 84 00         MOV ECX,dword ptr [0x008489cc]
0068495A  83 C4 08                  ADD ESP,0x8
0068495D  8D 85 50 FF FF FF         LEA EAX,[EBP + 0xffffff50]
00684963  8B 51 0F                  MOV EDX,dword ptr [ECX + 0xf]
00684966  50                        PUSH EAX
00684967  52                        PUSH EDX
00684968  E8 53 98 02 00            CALL 0x006ae1c0
0068496D  A1 CC 89 84 00            MOV EAX,[0x008489cc]
00684972  8B 8E 62 04 00 00         MOV ECX,dword ptr [ESI + 0x462]
00684978  50                        PUSH EAX
00684979  51                        PUSH ECX
0068497A  E8 41 98 02 00            CALL 0x006ae1c0
0068497F  68 CC 89 84 00            PUSH 0x8489cc
00684984  E8 D7 66 02 00            CALL 0x006ab060
LAB_00684989:
00684989  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
0068498F  E9 62 F6 FF FF            JMP 0x00683ff6
LAB_00684994:
00684994  E8 37 D3 D7 FF            CALL 0x00401cd0
00684999  8B F0                     MOV ESI,EAX
0068499B  3B F3                     CMP ESI,EBX
0068499D  75 1B                     JNZ 0x006849ba
0068499F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006849A5  68 A1 05 00 00            PUSH 0x5a1
006849AA  68 04 56 7D 00            PUSH 0x7d5604
006849AF  52                        PUSH EDX
006849B0  68 72 FF FF FF            PUSH 0xffffff72
006849B5  E8 86 14 02 00            CALL 0x006a5e40
LAB_006849ba:
006849BA  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006849C0  75 1A                     JNZ 0x006849dc
006849C2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006849C7  68 A2 05 00 00            PUSH 0x5a2
006849CC  68 04 56 7D 00            PUSH 0x7d5604
006849D1  50                        PUSH EAX
006849D2  68 71 FF FF FF            PUSH 0xffffff71
006849D7  E8 64 14 02 00            CALL 0x006a5e40
LAB_006849dc:
006849DC  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006849E2  6A 3F                     PUSH 0x3f
006849E4  41                        INC ECX
006849E5  8B C1                     MOV EAX,ECX
006849E7  89 0D B0 88 84 00         MOV dword ptr [0x008488b0],ECX
006849ED  C1 E0 04                  SHL EAX,0x4
006849F0  03 C1                     ADD EAX,ECX
006849F2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006849F5  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006849F8  33 C0                     XOR EAX,EAX
006849FA  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006849FD  B9 C5 0A 00 00            MOV ECX,0xac5
00684A02  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00684A05  C1 E2 02                  SHL EDX,0x2
00684A08  8D 9A 90 1A 81 00         LEA EBX,[EDX + 0x811a90]
00684A0E  8B FB                     MOV EDI,EBX
00684A10  F3 AB                     STOSD.REP ES:EDI
00684A12  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00684A17  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
00684A1D  C7 03 04 00 00 00         MOV dword ptr [EBX],0x4
00684A23  89 82 94 1A 81 00         MOV dword ptr [EDX + 0x811a94],EAX
00684A29  8D 92 A4 1A 81 00         LEA EDX,[EDX + 0x811aa4]
00684A2F  51                        PUSH ECX
00684A30  52                        PUSH EDX
00684A31  E8 0A 99 0A 00            CALL 0x0072e340
00684A36  66 8B 86 72 04 00 00      MOV AX,word ptr [ESI + 0x472]
00684A3D  8B 0D CC 89 84 00         MOV ECX,dword ptr [0x008489cc]
00684A43  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
00684A49  8D BE 6E 04 00 00         LEA EDI,[ESI + 0x46e]
00684A4F  8B 51 0F                  MOV EDX,dword ptr [ECX + 0xf]
00684A52  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00684A55  8D 95 34 FF FF FF         LEA EDX,[EBP + 0xffffff34]
00684A5B  40                        INC EAX
00684A5C  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
00684A62  8B 8E 56 04 00 00         MOV ECX,dword ptr [ESI + 0x456]
00684A68  51                        PUSH ECX
00684A69  52                        PUSH EDX
00684A6A  6A 02                     PUSH 0x2
00684A6C  57                        PUSH EDI
00684A6D  E8 73 F4 D7 FF            CALL 0x00403ee5
00684A72  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00684A78  C6 45 B8 0B               MOV byte ptr [EBP + -0x48],0xb
00684A7C  8B CA                     MOV ECX,EDX
00684A7E  66 C7 45 B9 19 00         MOV word ptr [EBP + -0x47],0x19
00684A84  C1 E1 04                  SHL ECX,0x4
00684A87  03 CA                     ADD ECX,EDX
00684A89  66 C7 45 BB 01 00         MOV word ptr [EBP + -0x45],0x1
00684A8F  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00684A92  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00684A95  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
00684A98  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00684A9B  89 04 95 90 45 81 00      MOV dword ptr [EDX*0x4 + 0x814590],EAX
00684AA2  8D 45 B8                  LEA EAX,[EBP + -0x48]
00684AA5  50                        PUSH EAX
00684AA6  57                        PUSH EDI
00684AA7  E8 9D D6 D7 FF            CALL 0x00402149
00684AAC  8B 15 CC 89 84 00         MOV EDX,dword ptr [0x008489cc]
00684AB2  83 C4 24                  ADD ESP,0x24
00684AB5  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
00684ABB  8B 42 0F                  MOV EAX,dword ptr [EDX + 0xf]
00684ABE  51                        PUSH ECX
00684ABF  50                        PUSH EAX
00684AC0  E8 FB 96 02 00            CALL 0x006ae1c0
00684AC5  E9 2A F5 FF FF            JMP 0x00683ff4
LAB_00684aca:
00684ACA  83 F8 35                  CMP EAX,0x35
00684ACD  0F 84 5D 01 00 00         JZ 0x00684c30
00684AD3  83 F8 42                  CMP EAX,0x42
00684AD6  0F 84 54 01 00 00         JZ 0x00684c30
00684ADC  3D B6 03 00 00            CMP EAX,0x3b6
00684AE1  0F 85 0F F5 FF FF         JNZ 0x00683ff6
00684AE7  83 F9 32                  CMP ECX,0x32
00684AEA  7C 18                     JL 0x00684b04
00684AEC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00684AF2  68 CC 04 00 00            PUSH 0x4cc
00684AF7  68 04 56 7D 00            PUSH 0x7d5604
00684AFC  51                        PUSH ECX
00684AFD  6A 9A                     PUSH -0x66
00684AFF  E8 3C 13 02 00            CALL 0x006a5e40
LAB_00684b04:
00684B04  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00684B0A  6A 3F                     PUSH 0x3f
00684B0C  8B C2                     MOV EAX,EDX
00684B0E  C1 E0 04                  SHL EAX,0x4
00684B11  03 C2                     ADD EAX,EDX
00684B13  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684B16  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00684B19  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00684B1C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684B1F  C1 E0 02                  SHL EAX,0x2
00684B22  8B 88 8C 45 81 00         MOV ECX,dword ptr [EAX + 0x81458c]
00684B28  41                        INC ECX
00684B29  42                        INC EDX
00684B2A  89 88 8C 45 81 00         MOV dword ptr [EAX + 0x81458c],ECX
00684B30  89 15 B0 88 84 00         MOV dword ptr [0x008488b0],EDX
00684B36  89 9C C8 F4 43 81 00      MOV dword ptr [EAX + ECX*0x8 + 0x8143f4],EBX
00684B3D  8B 88 8C 45 81 00         MOV ECX,dword ptr [EAX + 0x81458c]
00684B43  89 9C C8 F8 43 81 00      MOV dword ptr [EAX + ECX*0x8 + 0x8143f8],EBX
00684B4A  8B C2                     MOV EAX,EDX
00684B4C  C1 E0 04                  SHL EAX,0x4
00684B4F  03 C2                     ADD EAX,EDX
00684B51  B9 C5 0A 00 00            MOV ECX,0xac5
00684B56  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684B59  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00684B5C  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
00684B5F  33 C0                     XOR EAX,EAX
00684B61  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00684B64  C1 E2 02                  SHL EDX,0x2
00684B67  8D B2 90 1A 81 00         LEA ESI,[EDX + 0x811a90]
00684B6D  8B FE                     MOV EDI,ESI
00684B6F  F3 AB                     STOSD.REP ES:EDI
00684B71  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
00684B77  A1 28 75 85 00            MOV EAX,[0x00857528]
00684B7C  C7 06 02 00 00 00         MOV dword ptr [ESI],0x2
00684B82  89 8A 94 1A 81 00         MOV dword ptr [EDX + 0x811a94],ECX
00684B88  8D 8A A4 1A 81 00         LEA ECX,[EDX + 0x811aa4]
00684B8E  50                        PUSH EAX
00684B8F  51                        PUSH ECX
00684B90  E8 AB 97 0A 00            CALL 0x0072e340
00684B95  83 C4 0C                  ADD ESP,0xc
00684B98  89 1D A4 3F 7D 00         MOV dword ptr [0x007d3fa4],EBX
00684B9E  E9 53 F4 FF FF            JMP 0x00683ff6
LAB_00684ba3:
00684BA3  05 0E FC FF FF            ADD EAX,0xfffffc0e
00684BA8  83 F8 5B                  CMP EAX,0x5b
00684BAB  0F 87 45 F4 FF FF         JA 0x00683ff6
00684BB1  33 D2                     XOR EDX,EDX
00684BB3  8A 90 C4 A9 68 00         MOV DL,byte ptr [EAX + 0x68a9c4]
switchD_00684bb9::switchD:
00684BB9  FF 24 95 BC A9 68 00      JMP dword ptr [EDX*0x4 + 0x68a9bc]
LAB_00684bc0:
00684BC0  3D 7B 05 00 00            CMP EAX,0x57b
00684BC5  7F 26                     JG 0x00684bed
00684BC7  3D 78 05 00 00            CMP EAX,0x578
00684BCC  7D 62                     JGE 0x00684c30
00684BCE  05 50 FB FF FF            ADD EAX,0xfffffb50
00684BD3  3D BA 00 00 00            CMP EAX,0xba
00684BD8  0F 87 18 F4 FF FF         JA 0x00683ff6
00684BDE  33 C9                     XOR ECX,ECX
00684BE0  8A 88 28 AA 68 00         MOV CL,byte ptr [EAX + 0x68aa28]
switchD_00684be6::switchD:
00684BE6  FF 24 8D 20 AA 68 00      JMP dword ptr [ECX*0x4 + 0x68aa20]
LAB_00684bed:
00684BED  3D C8 05 00 00            CMP EAX,0x5c8
00684BF2  7F 1F                     JG 0x00684c13
00684BF4  74 3A                     JZ 0x00684c30
00684BF6  05 7E FA FF FF            ADD EAX,0xfffffa7e
00684BFB  83 F8 37                  CMP EAX,0x37
00684BFE  0F 87 F2 F3 FF FF         JA 0x00683ff6
00684C04  33 D2                     XOR EDX,EDX
00684C06  8A 90 EC AA 68 00         MOV DL,byte ptr [EAX + 0x68aaec]
switchD_00684c0c::switchD:
00684C0C  FF 24 95 E4 AA 68 00      JMP dword ptr [EDX*0x4 + 0x68aae4]
LAB_00684c13:
00684C13  3D DC 05 00 00            CMP EAX,0x5dc
00684C18  0F 8C D8 F3 FF FF         JL 0x00683ff6
00684C1E  3D FE 05 00 00            CMP EAX,0x5fe
00684C23  7E 0B                     JLE 0x00684c30
00684C25  3D 6C 07 00 00            CMP EAX,0x76c
00684C2A  0F 85 C6 F3 FF FF         JNZ 0x00683ff6
switchD_00684bb9::caseD_3f2:
00684C30  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00684C36  B9 C5 0A 00 00            MOV ECX,0xac5
00684C3B  42                        INC EDX
00684C3C  6A 3F                     PUSH 0x3f
00684C3E  8B C2                     MOV EAX,EDX
00684C40  89 15 B0 88 84 00         MOV dword ptr [0x008488b0],EDX
00684C46  C1 E0 04                  SHL EAX,0x4
00684C49  03 C2                     ADD EAX,EDX
00684C4B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684C4E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00684C51  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
00684C54  33 C0                     XOR EAX,EAX
00684C56  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00684C59  C1 E2 02                  SHL EDX,0x2
00684C5C  8D B2 90 1A 81 00         LEA ESI,[EDX + 0x811a90]
00684C62  8B FE                     MOV EDI,ESI
00684C64  F3 AB                     STOSD.REP ES:EDI
00684C66  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
00684C6C  A1 28 75 85 00            MOV EAX,[0x00857528]
00684C71  C7 06 02 00 00 00         MOV dword ptr [ESI],0x2
00684C77  89 8A 94 1A 81 00         MOV dword ptr [EDX + 0x811a94],ECX
00684C7D  8D 8A A4 1A 81 00         LEA ECX,[EDX + 0x811aa4]
00684C83  50                        PUSH EAX
00684C84  51                        PUSH ECX
00684C85  E8 B6 96 0A 00            CALL 0x0072e340
00684C8A  83 C4 0C                  ADD ESP,0xc
00684C8D  E9 64 F3 FF FF            JMP 0x00683ff6
switchD_006841b6::caseD_1:
00684C92  83 FE 1D                  CMP ESI,0x1d
00684C95  0F 84 5B F3 FF FF         JZ 0x00683ff6
00684C9B  8D 4E FE                  LEA ECX,[ESI + -0x2]
00684C9E  83 F9 3C                  CMP ECX,0x3c
00684CA1  0F 87 21 01 00 00         JA 0x00684dc8
00684CA7  33 D2                     XOR EDX,EDX
00684CA9  8A 91 34 AB 68 00         MOV DL,byte ptr [ECX + 0x68ab34]
switchD_00684caf::switchD:
00684CAF  FF 24 95 24 AB 68 00      JMP dword ptr [EDX*0x4 + 0x68ab24]
switchD_00684caf::caseD_5:
00684CB6  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00684CBC  75 1A                     JNZ 0x00684cd8
00684CBE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00684CC3  68 27 06 00 00            PUSH 0x627
00684CC8  68 04 56 7D 00            PUSH 0x7d5604
00684CCD  50                        PUSH EAX
00684CCE  68 71 FF FF FF            PUSH 0xffffff71
00684CD3  E8 68 11 02 00            CALL 0x006a5e40
LAB_00684cd8:
00684CD8  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00684CDE  8B C1                     MOV EAX,ECX
00684CE0  C1 E0 04                  SHL EAX,0x4
00684CE3  03 C1                     ADD EAX,ECX
00684CE5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684CE8  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00684CEB  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00684CEE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684CF1  C1 E0 02                  SHL EAX,0x2
00684CF4  8B 88 9C 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a9c]
00684CFA  83 F9 05                  CMP ECX,0x5
00684CFD  0F 84 EC 00 00 00         JZ 0x00684def
00684D03  83 F9 06                  CMP ECX,0x6
00684D06  0F 84 E3 00 00 00         JZ 0x00684def
00684D0C  83 F9 07                  CMP ECX,0x7
00684D0F  0F 84 DA 00 00 00         JZ 0x00684def
00684D15  83 F9 08                  CMP ECX,0x8
00684D18  0F 84 D1 00 00 00         JZ 0x00684def
00684D1E  8D 80 A4 1A 81 00         LEA EAX,[EAX + 0x811aa4]
00684D24  50                        PUSH EAX
00684D25  6A 8C                     PUSH -0x74
00684D27  E8 E5 06 D8 FF            CALL 0x00405411
00684D2C  83 C4 08                  ADD ESP,0x8
00684D2F  E9 BB 00 00 00            JMP 0x00684def
switchD_00684caf::caseD_2:
00684D34  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00684D3A  75 1B                     JNZ 0x00684d57
00684D3C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00684D42  68 31 06 00 00            PUSH 0x631
00684D47  68 04 56 7D 00            PUSH 0x7d5604
00684D4C  51                        PUSH ECX
00684D4D  68 71 FF FF FF            PUSH 0xffffff71
00684D52  E8 E9 10 02 00            CALL 0x006a5e40
LAB_00684d57:
00684D57  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00684D5D  8B C1                     MOV EAX,ECX
00684D5F  C1 E0 04                  SHL EAX,0x4
00684D62  03 C1                     ADD EAX,ECX
00684D64  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684D67  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00684D6A  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00684D6D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684D70  C1 E0 02                  SHL EAX,0x2
00684D73  8B 88 9C 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a9c]
00684D79  83 F9 05                  CMP ECX,0x5
00684D7C  74 71                     JZ 0x00684def
00684D7E  83 F9 06                  CMP ECX,0x6
00684D81  74 6C                     JZ 0x00684def
00684D83  83 F9 07                  CMP ECX,0x7
00684D86  74 67                     JZ 0x00684def
00684D88  8D 80 A4 1A 81 00         LEA EAX,[EAX + 0x811aa4]
00684D8E  50                        PUSH EAX
00684D8F  6A 8C                     PUSH -0x74
00684D91  E8 7B 06 D8 FF            CALL 0x00405411
00684D96  83 C4 08                  ADD ESP,0x8
00684D99  EB 54                     JMP 0x00684def
switchD_00684caf::caseD_4:
00684D9B  8B 88 9C 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a9c]
00684DA1  83 F9 05                  CMP ECX,0x5
00684DA4  74 0F                     JZ 0x00684db5
00684DA6  83 F9 06                  CMP ECX,0x6
00684DA9  74 0A                     JZ 0x00684db5
00684DAB  83 F9 07                  CMP ECX,0x7
00684DAE  74 05                     JZ 0x00684db5
00684DB0  83 F9 08                  CMP ECX,0x8
00684DB3  75 3A                     JNZ 0x00684def
LAB_00684db5:
00684DB5  8D 88 A4 1A 81 00         LEA ECX,[EAX + 0x811aa4]
00684DBB  51                        PUSH ECX
00684DBC  6A 8C                     PUSH -0x74
00684DBE  E8 4E 06 D8 FF            CALL 0x00405411
00684DC3  83 C4 08                  ADD ESP,0x8
00684DC6  EB 27                     JMP 0x00684def
switchD_00684caf::caseD_3:
00684DC8  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
00684DCE  83 F9 29                  CMP ECX,0x29
00684DD1  75 13                     JNZ 0x00684de6
00684DD3  8D 90 A4 1A 81 00         LEA EDX,[EAX + 0x811aa4]
00684DD9  52                        PUSH EDX
00684DDA  6A 85                     PUSH -0x7b
00684DDC  E8 30 06 D8 FF            CALL 0x00405411
00684DE1  83 C4 08                  ADD ESP,0x8
00684DE4  EB 09                     JMP 0x00684def
LAB_00684de6:
00684DE6  51                        PUSH ECX
00684DE7  E8 F2 0B D8 FF            CALL 0x004059de
00684DEC  83 C4 04                  ADD ESP,0x4
LAB_00684def:
00684DEF  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00684DF5  8B C2                     MOV EAX,EDX
00684DF7  C1 E0 04                  SHL EAX,0x4
00684DFA  03 C2                     ADD EAX,EDX
00684DFC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684DFF  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00684E02  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00684E05  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684E08  8B 3C 85 98 1A 81 00      MOV EDI,dword ptr [EAX*0x4 + 0x811a98]
00684E0F  47                        INC EDI
00684E10  42                        INC EDX
00684E11  89 3C 85 98 1A 81 00      MOV dword ptr [EAX*0x4 + 0x811a98],EDI
00684E18  8B C2                     MOV EAX,EDX
00684E1A  C1 E0 04                  SHL EAX,0x4
00684E1D  03 C2                     ADD EAX,EDX
00684E1F  89 15 B0 88 84 00         MOV dword ptr [0x008488b0],EDX
00684E25  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684E28  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00684E2B  33 C0                     XOR EAX,EAX
00684E2D  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
00684E30  B9 C5 0A 00 00            MOV ECX,0xac5
00684E35  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00684E38  C1 E2 02                  SHL EDX,0x2
00684E3B  8D B2 90 1A 81 00         LEA ESI,[EDX + 0x811a90]
00684E41  8D 9A A4 1A 81 00         LEA EBX,[EDX + 0x811aa4]
00684E47  8B FE                     MOV EDI,ESI
00684E49  F3 AB                     STOSD.REP ES:EDI
00684E4B  C7 06 03 00 00 00         MOV dword ptr [ESI],0x3
00684E51  8D BB EC D4 FF FF         LEA EDI,[EBX + 0xffffd4ec]
00684E57  83 C9 FF                  OR ECX,0xffffffff
00684E5A  C7 82 94 1A 81 00 01 00 00 00  MOV dword ptr [EDX + 0x811a94],0x1
00684E64  F2 AE                     SCASB.REPNE ES:EDI
00684E66  F7 D1                     NOT ECX
00684E68  2B F9                     SUB EDI,ECX
00684E6A  8B C1                     MOV EAX,ECX
00684E6C  8B F7                     MOV ESI,EDI
00684E6E  8B FB                     MOV EDI,EBX
00684E70  C1 E9 02                  SHR ECX,0x2
00684E73  F3 A5                     MOVSD.REP ES:EDI,ESI
00684E75  8B C8                     MOV ECX,EAX
00684E77  83 E1 03                  AND ECX,0x3
00684E7A  F3 A4                     MOVSB.REP ES:EDI,ESI
00684E7C  8B 8A 88 EF 80 00         MOV ECX,dword ptr [EDX + 0x80ef88]
00684E82  89 8A 9C 1A 81 00         MOV dword ptr [EDX + 0x811a9c],ECX
00684E88  8B 82 8C EF 80 00         MOV EAX,dword ptr [EDX + 0x80ef8c]
00684E8E  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
00684E94  89 82 A0 1A 81 00         MOV dword ptr [EDX + 0x811aa0],EAX
00684E9A  89 8A E4 1A 81 00         MOV dword ptr [EDX + 0x811ae4],ECX
00684EA0  E9 4F F1 FF FF            JMP 0x00683ff4
switchD_006841b6::caseD_4:
00684EA5  83 FE 06                  CMP ESI,0x6
00684EA8  74 26                     JZ 0x00684ed0
00684EAA  83 FE 1D                  CMP ESI,0x1d
00684EAD  0F 84 43 F1 FF FF         JZ 0x00683ff6
00684EB3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00684EB9  68 58 06 00 00            PUSH 0x658
00684EBE  68 04 56 7D 00            PUSH 0x7d5604
00684EC3  52                        PUSH EDX
00684EC4  6A 94                     PUSH -0x6c
00684EC6  E8 75 0F 02 00            CALL 0x006a5e40
00684ECB  E9 26 F1 FF FF            JMP 0x00683ff6
LAB_00684ed0:
00684ED0  42                        INC EDX
00684ED1  B9 C5 0A 00 00            MOV ECX,0xac5
00684ED6  8B C2                     MOV EAX,EDX
00684ED8  89 15 B0 88 84 00         MOV dword ptr [0x008488b0],EDX
00684EDE  C1 E0 04                  SHL EAX,0x4
00684EE1  03 C2                     ADD EAX,EDX
00684EE3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684EE6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00684EE9  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00684EEC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684EEF  8D 14 85 90 1A 81 00      LEA EDX,[EAX*0x4 + 0x811a90]
00684EF6  33 C0                     XOR EAX,EAX
00684EF8  8B FA                     MOV EDI,EDX
00684EFA  F3 AB                     STOSD.REP ES:EDI
00684EFC  89 1A                     MOV dword ptr [EDX],EBX
00684EFE  E9 F3 F0 FF FF            JMP 0x00683ff6
switchD_006841b6::caseD_2:
00684F03  39 98 98 1A 81 00         CMP dword ptr [EAX + 0x811a98],EBX
00684F09  75 17                     JNZ 0x00684f22
00684F0B  83 FE 29                  CMP ESI,0x29
00684F0E  74 12                     JZ 0x00684f22
00684F10  6A 29                     PUSH 0x29
00684F12  E8 C4 08 D8 FF            CALL 0x004057db
00684F17  50                        PUSH EAX
00684F18  6A 90                     PUSH -0x70
00684F1A  E8 F2 04 D8 FF            CALL 0x00405411
00684F1F  83 C4 08                  ADD ESP,0x8
LAB_00684f22:
00684F22  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00684F28  8B C2                     MOV EAX,EDX
00684F2A  C1 E0 04                  SHL EAX,0x4
00684F2D  03 C2                     ADD EAX,EDX
00684F2F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00684F32  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00684F35  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
00684F38  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00684F3B  C1 E1 02                  SHL ECX,0x2
00684F3E  8B 81 98 1A 81 00         MOV EAX,dword ptr [ECX + 0x811a98]
00684F44  40                        INC EAX
00684F45  89 81 98 1A 81 00         MOV dword ptr [ECX + 0x811a98],EAX
00684F4B  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00684F50  83 F8 10                  CMP EAX,0x10
00684F53  0F 84 B0 47 00 00         JZ 0x00689709
00684F59  83 F8 29                  CMP EAX,0x29
00684F5C  0F 84 A7 47 00 00         JZ 0x00689709
00684F62  83 F8 39                  CMP EAX,0x39
00684F65  74 1D                     JZ 0x00684f84
00684F67  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00684F6D  68 FD 08 00 00            PUSH 0x8fd
00684F72  68 04 56 7D 00            PUSH 0x7d5604
00684F77  52                        PUSH EDX
00684F78  6A 8F                     PUSH -0x71
00684F7A  E8 C1 0E 02 00            CALL 0x006a5e40
00684F7F  E9 72 F0 FF FF            JMP 0x00683ff6
LAB_00684f84:
00684F84  8B 81 94 1A 81 00         MOV EAX,dword ptr [ECX + 0x811a94]
00684F8A  3D 67 05 00 00            CMP EAX,0x567
00684F8F  0F 8F 9B 31 00 00         JG 0x00688130
00684F95  0F 84 59 31 00 00         JZ 0x006880f4
00684F9B  3D B3 04 00 00            CMP EAX,0x4b3
00684FA0  0F 8F 1D 25 00 00         JG 0x006874c3
00684FA6  0F 84 D0 24 00 00         JZ 0x0068747c
00684FAC  3D 24 04 00 00            CMP EAX,0x424
00684FB1  0F 8F 6B 0E 00 00         JG 0x00685e22
00684FB7  0F 84 9F 0D 00 00         JZ 0x00685d5c
00684FBD  3D F2 03 00 00            CMP EAX,0x3f2
00684FC2  0F 8F B4 06 00 00         JG 0x0068567c
00684FC8  0F 84 39 06 00 00         JZ 0x00685607
00684FCE  3D E9 03 00 00            CMP EAX,0x3e9
00684FD3  0F 8F 6F 04 00 00         JG 0x00685448
00684FD9  0F 84 D9 03 00 00         JZ 0x006853b8
00684FDF  83 F8 42                  CMP EAX,0x42
00684FE2  0F 8F 54 02 00 00         JG 0x0068523c
00684FE8  0F 84 A0 00 00 00         JZ 0x0068508e
00684FEE  83 F8 23                  CMP EAX,0x23
00684FF1  0F 84 97 00 00 00         JZ 0x0068508e
00684FF7  83 F8 35                  CMP EAX,0x35
00684FFA  0F 85 FE 46 00 00         JNZ 0x006896fe
00685000  E8 7B DB D7 FF            CALL 0x00402b80
00685005  85 C0                     TEST EAX,EAX
00685007  75 2B                     JNZ 0x00685034
00685009  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068500F  8B C1                     MOV EAX,ECX
00685011  C1 E0 04                  SHL EAX,0x4
00685014  03 C1                     ADD EAX,ECX
00685016  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685019  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068501C  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068501F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00685022  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00685029  52                        PUSH EDX
0068502A  6A 83                     PUSH -0x7d
0068502C  E8 E0 03 D8 FF            CALL 0x00405411
00685031  83 C4 08                  ADD ESP,0x8
LAB_00685034:
00685034  39 1D DC 89 84 00         CMP dword ptr [0x008489dc],EBX
0068503A  75 1A                     JNZ 0x00685056
0068503C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00685041  68 6F 08 00 00            PUSH 0x86f
00685046  68 04 56 7D 00            PUSH 0x7d5604
0068504B  50                        PUSH EAX
0068504C  68 72 FF FF FF            PUSH 0xffffff72
00685051  E8 EA 0D 02 00            CALL 0x006a5e40
LAB_00685056:
00685056  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068505C  8B C1                     MOV EAX,ECX
0068505E  C1 E0 04                  SHL EAX,0x4
00685061  03 C1                     ADD EAX,ECX
00685063  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685066  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685069  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068506C  8B 15 DC 89 84 00         MOV EDX,dword ptr [0x008489dc]
00685072  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685075  8B 0C 85 EC 1A 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811aec]
0068507C  51                        PUSH ECX
0068507D  52                        PUSH EDX
0068507E  E8 1D 0A 03 00            CALL 0x006b5aa0
00685083  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00685089  E9 68 EF FF FF            JMP 0x00683ff6
LAB_0068508e:
0068508E  E8 3D CC D7 FF            CALL 0x00401cd0
00685093  8B F8                     MOV EDI,EAX
00685095  3B FB                     CMP EDI,EBX
00685097  75 1A                     JNZ 0x006850b3
00685099  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068509E  68 AE 06 00 00            PUSH 0x6ae
006850A3  68 04 56 7D 00            PUSH 0x7d5604
006850A8  50                        PUSH EAX
006850A9  68 72 FF FF FF            PUSH 0xffffff72
006850AE  E8 8D 0D 02 00            CALL 0x006a5e40
LAB_006850b3:
006850B3  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006850B9  75 1B                     JNZ 0x006850d6
006850BB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006850C1  68 AF 06 00 00            PUSH 0x6af
006850C6  68 04 56 7D 00            PUSH 0x7d5604
006850CB  51                        PUSH ECX
006850CC  68 71 FF FF FF            PUSH 0xffffff71
006850D1  E8 6A 0D 02 00            CALL 0x006a5e40
LAB_006850d6:
006850D6  E8 78 DF D7 FF            CALL 0x00403053
006850DB  85 C0                     TEST EAX,EAX
006850DD  75 2B                     JNZ 0x0068510a
006850DF  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006850E5  8B C1                     MOV EAX,ECX
006850E7  C1 E0 04                  SHL EAX,0x4
006850EA  03 C1                     ADD EAX,ECX
006850EC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006850EF  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006850F2  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006850F5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006850F8  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
006850FF  51                        PUSH ECX
00685100  6A 83                     PUSH -0x7d
00685102  E8 0A 03 D8 FF            CALL 0x00405411
00685107  83 C4 08                  ADD ESP,0x8
LAB_0068510a:
0068510A  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685110  66 8B 97 72 04 00 00      MOV DX,word ptr [EDI + 0x472]
00685117  8B C1                     MOV EAX,ECX
00685119  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
0068511F  C1 E0 04                  SHL EAX,0x4
00685122  03 C1                     ADD EAX,ECX
00685124  8D B7 6E 04 00 00         LEA ESI,[EDI + 0x46e]
0068512A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068512D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685130  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685133  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685136  C1 E0 02                  SHL EAX,0x2
00685139  8A 88 C8 3B 81 00         MOV CL,byte ptr [EAX + 0x813bc8]
0068513F  80 F9 02                  CMP CL,0x2
00685142  8B 8F 56 04 00 00         MOV ECX,dword ptr [EDI + 0x456]
00685148  51                        PUSH ECX
00685149  75 14                     JNZ 0x0068515f
0068514B  8D 90 80 1C 81 00         LEA EDX,[EAX + 0x811c80]
00685151  52                        PUSH EDX
00685152  6A 02                     PUSH 0x2
00685154  56                        PUSH ESI
00685155  E8 8B ED D7 FF            CALL 0x00403ee5
0068515A  83 C4 10                  ADD ESP,0x10
0068515D  EB 19                     JMP 0x00685178
LAB_0068515f:
0068515F  8B 90 80 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c80]
00685165  52                        PUSH EDX
00685166  E8 08 F1 D7 FF            CALL 0x00404273
0068516B  83 C4 04                  ADD ESP,0x4
0068516E  50                        PUSH EAX
0068516F  56                        PUSH ESI
00685170  E8 3A E2 D7 FF            CALL 0x004033af
00685175  83 C4 0C                  ADD ESP,0xc
LAB_00685178:
00685178  A1 CC 89 84 00            MOV EAX,[0x008489cc]
0068517D  8B 48 0F                  MOV ECX,dword ptr [EAX + 0xf]
00685180  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00685183  8D 8D 38 FF FF FF         LEA ECX,[EBP + 0xffffff38]
00685189  42                        INC EDX
0068518A  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
00685190  8B 87 56 04 00 00         MOV EAX,dword ptr [EDI + 0x456]
00685196  50                        PUSH EAX
00685197  51                        PUSH ECX
00685198  6A 02                     PUSH 0x2
0068519A  56                        PUSH ESI
0068519B  E8 45 ED D7 FF            CALL 0x00403ee5
006851A0  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
006851A6  C6 45 B0 0B               MOV byte ptr [EBP + -0x50],0xb
006851AA  8B CA                     MOV ECX,EDX
006851AC  66 C7 45 B3 02 00         MOV word ptr [EBP + -0x4d],0x2
006851B2  C1 E1 04                  SHL ECX,0x4
006851B5  03 CA                     ADD ECX,EDX
006851B7  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006851BA  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
006851BD  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
006851C0  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006851C3  C1 E1 02                  SHL ECX,0x2
006851C6  89 81 90 45 81 00         MOV dword ptr [ECX + 0x814590],EAX
006851CC  66 8B 91 94 1A 81 00      MOV DX,word ptr [ECX + 0x811a94]
006851D3  8D 45 B0                  LEA EAX,[EBP + -0x50]
006851D6  66 89 55 B1               MOV word ptr [EBP + -0x4f],DX
006851DA  50                        PUSH EAX
006851DB  56                        PUSH ESI
006851DC  E8 68 CF D7 FF            CALL 0x00402149
006851E1  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006851E7  83 C4 18                  ADD ESP,0x18
006851EA  8B C1                     MOV EAX,ECX
006851EC  C1 E0 04                  SHL EAX,0x4
006851EF  03 C1                     ADD EAX,ECX
006851F1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006851F4  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006851F7  8D 85 40 FF FF FF         LEA EAX,[EBP + 0xffffff40]
006851FD  50                        PUSH EAX
006851FE  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
00685201  8D 34 49                  LEA ESI,[ECX + ECX*0x2]
00685204  8B 0D CC 89 84 00         MOV ECX,dword ptr [0x008489cc]
0068520A  C1 E6 02                  SHL ESI,0x2
0068520D  8B 51 0F                  MOV EDX,dword ptr [ECX + 0xf]
00685210  52                        PUSH EDX
00685211  E8 AA 8F 02 00            CALL 0x006ae1c0
00685216  89 86 94 45 81 00         MOV dword ptr [ESI + 0x814594],EAX
0068521C  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685221  40                        INC EAX
00685222  C7 86 90 1A 81 00 04 00 00 00  MOV dword ptr [ESI + 0x811a90],0x4
0068522C  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685231  48                        DEC EAX
00685232  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685237  E9 BA ED FF FF            JMP 0x00683ff6
LAB_0068523c:
0068523C  2D B6 03 00 00            SUB EAX,0x3b6
00685241  0F 84 90 00 00 00         JZ 0x006852d7
00685247  83 E8 32                  SUB EAX,0x32
0068524A  0F 85 AE 44 00 00         JNZ 0x006896fe
00685250  E8 C8 DC D7 FF            CALL 0x00402f1d
00685255  85 C0                     TEST EAX,EAX
00685257  75 2B                     JNZ 0x00685284
00685259  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068525F  8B C1                     MOV EAX,ECX
00685261  C1 E0 04                  SHL EAX,0x4
00685264  03 C1                     ADD EAX,ECX
00685266  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685269  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068526C  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068526F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00685272  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00685279  52                        PUSH EDX
0068527A  6A 83                     PUSH -0x7d
0068527C  E8 90 01 D8 FF            CALL 0x00405411
00685281  83 C4 08                  ADD ESP,0x8
LAB_00685284:
00685284  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
0068528A  74 0D                     JZ 0x00685299
0068528C  68 D0 89 84 00            PUSH 0x8489d0
00685291  E8 E4 06 D8 FF            CALL 0x0040597a
00685296  83 C4 04                  ADD ESP,0x4
LAB_00685299:
00685299  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068529F  8B C1                     MOV EAX,ECX
006852A1  C1 E0 04                  SHL EAX,0x4
006852A4  03 C1                     ADD EAX,ECX
006852A6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006852A9  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006852AC  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006852AF  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006852B2  8B 14 8D EC 1A 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811aec]
006852B9  52                        PUSH EDX
006852BA  E8 95 04 D8 FF            CALL 0x00405754
006852BF  A3 D0 89 84 00            MOV [0x008489d0],EAX
006852C4  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006852C9  83 C4 04                  ADD ESP,0x4
006852CC  48                        DEC EAX
006852CD  A3 B0 88 84 00            MOV [0x008488b0],EAX
006852D2  E9 1F ED FF FF            JMP 0x00683ff6
LAB_006852d7:
006852D7  3B D7                     CMP EDX,EDI
006852D9  7C 08                     JL 0x006852e3
006852DB  39 B9 78 1A 81 00         CMP dword ptr [ECX + 0x811a78],EDI
006852E1  7D 17                     JGE 0x006852fa
LAB_006852e3:
006852E3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006852E8  68 6C 06 00 00            PUSH 0x66c
006852ED  68 04 56 7D 00            PUSH 0x7d5604
006852F2  50                        PUSH EAX
006852F3  6A 92                     PUSH -0x6e
006852F5  E8 46 0B 02 00            CALL 0x006a5e40
LAB_006852fa:
006852FA  E8 79 FE D7 FF            CALL 0x00405178
006852FF  85 C0                     TEST EAX,EAX
00685301  75 2B                     JNZ 0x0068532e
00685303  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685309  8B C1                     MOV EAX,ECX
0068530B  C1 E0 04                  SHL EAX,0x4
0068530E  03 C1                     ADD EAX,ECX
00685310  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685313  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685316  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00685319  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068531C  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00685323  51                        PUSH ECX
00685324  6A 83                     PUSH -0x7d
00685326  E8 E6 00 D8 FF            CALL 0x00405411
0068532B  83 C4 08                  ADD ESP,0x8
LAB_0068532e:
0068532E  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685334  89 3D A4 3F 7D 00         MOV dword ptr [0x007d3fa4],EDI
0068533A  8B C1                     MOV EAX,ECX
0068533C  C1 E0 04                  SHL EAX,0x4
0068533F  03 C1                     ADD EAX,ECX
00685341  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685344  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685347  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068534A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068534D  C1 E0 02                  SHL EAX,0x2
00685350  8B 88 78 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a78]
00685356  8B 90 80 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c80]
0068535C  89 94 C8 E4 18 81 00      MOV dword ptr [EAX + ECX*0x8 + 0x8118e4],EDX
00685363  8B 88 78 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a78]
00685369  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0068536C  8B 88 E0 18 81 00         MOV ECX,dword ptr [EAX + 0x8118e0]
00685372  3B CB                     CMP ECX,EBX
00685374  75 08                     JNZ 0x0068537e
00685376  39 98 E4 18 81 00         CMP dword ptr [EAX + 0x8118e4],EBX
0068537C  74 0C                     JZ 0x0068538a
LAB_0068537e:
0068537E  3B CF                     CMP ECX,EDI
00685380  75 1F                     JNZ 0x006853a1
00685382  39 98 E4 18 81 00         CMP dword ptr [EAX + 0x8118e4],EBX
00685388  74 17                     JZ 0x006853a1
LAB_0068538a:
0068538A  57                        PUSH EDI
0068538B  E8 22 00 D8 FF            CALL 0x004053b2
00685390  57                        PUSH EDI
00685391  E8 02 E8 D7 FF            CALL 0x00403b98
00685396  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
0068539C  E9 55 EC FF FF            JMP 0x00683ff6
LAB_006853a1:
006853A1  53                        PUSH EBX
006853A2  E8 0B 00 D8 FF            CALL 0x004053b2
006853A7  53                        PUSH EBX
006853A8  E8 EB E7 D7 FF            CALL 0x00403b98
006853AD  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
006853B3  E9 3E EC FF FF            JMP 0x00683ff6
LAB_006853b8:
006853B8  E8 60 DB D7 FF            CALL 0x00402f1d
006853BD  85 C0                     TEST EAX,EAX
006853BF  75 2B                     JNZ 0x006853ec
006853C1  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006853C7  8B C1                     MOV EAX,ECX
006853C9  C1 E0 04                  SHL EAX,0x4
006853CC  03 C1                     ADD EAX,ECX
006853CE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006853D1  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006853D4  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006853D7  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006853DA  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
006853E1  51                        PUSH ECX
006853E2  6A 83                     PUSH -0x7d
006853E4  E8 28 00 D8 FF            CALL 0x00405411
006853E9  83 C4 08                  ADD ESP,0x8
LAB_006853ec:
006853EC  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
006853F2  74 0D                     JZ 0x00685401
006853F4  68 D0 89 84 00            PUSH 0x8489d0
006853F9  E8 7C 05 D8 FF            CALL 0x0040597a
006853FE  83 C4 04                  ADD ESP,0x4
LAB_00685401:
00685401  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685407  8B C1                     MOV EAX,ECX
00685409  C1 E0 04                  SHL EAX,0x4
0068540C  03 C1                     ADD EAX,ECX
0068540E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685411  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685414  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00685417  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068541A  C1 E0 02                  SHL EAX,0x2
0068541D  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00685423  8B 90 EC 1A 81 00         MOV EDX,dword ptr [EAX + 0x811aec]
00685429  51                        PUSH ECX
0068542A  52                        PUSH EDX
0068542B  E8 24 CC D7 FF            CALL 0x00402054
00685430  A3 D0 89 84 00            MOV [0x008489d0],EAX
00685435  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068543A  83 C4 08                  ADD ESP,0x8
0068543D  48                        DEC EAX
0068543E  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685443  E9 AE EB FF FF            JMP 0x00683ff6
LAB_00685448:
00685448  05 16 FC FF FF            ADD EAX,0xfffffc16
0068544D  83 F8 03                  CMP EAX,0x3
00685450  0F 87 A8 42 00 00         JA 0x006896fe
switchD_00685456::switchD:
00685456  FF 24 85 74 AB 68 00      JMP dword ptr [EAX*0x4 + 0x68ab74]
switchD_00685456::caseD_3ea:
0068545D  E8 BB DA D7 FF            CALL 0x00402f1d
00685462  85 C0                     TEST EAX,EAX
00685464  75 2B                     JNZ 0x00685491
00685466  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068546C  8B C1                     MOV EAX,ECX
0068546E  C1 E0 04                  SHL EAX,0x4
00685471  03 C1                     ADD EAX,ECX
00685473  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685476  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685479  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068547C  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068547F  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00685486  52                        PUSH EDX
00685487  6A 83                     PUSH -0x7d
00685489  E8 83 FF D7 FF            CALL 0x00405411
0068548E  83 C4 08                  ADD ESP,0x8
LAB_00685491:
00685491  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
00685497  74 0D                     JZ 0x006854a6
00685499  68 D0 89 84 00            PUSH 0x8489d0
0068549E  E8 D7 04 D8 FF            CALL 0x0040597a
006854A3  83 C4 04                  ADD ESP,0x4
LAB_006854a6:
006854A6  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006854AC  8B C1                     MOV EAX,ECX
006854AE  C1 E0 04                  SHL EAX,0x4
006854B1  03 C1                     ADD EAX,ECX
006854B3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006854B6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006854B9  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006854BC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006854BF  C1 E0 02                  SHL EAX,0x2
006854C2  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
006854C8  8B 90 EC 1A 81 00         MOV EDX,dword ptr [EAX + 0x811aec]
006854CE  51                        PUSH ECX
006854CF  52                        PUSH EDX
006854D0  E8 58 BB D7 FF            CALL 0x0040102d
006854D5  A3 D0 89 84 00            MOV [0x008489d0],EAX
006854DA  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006854DF  83 C4 08                  ADD ESP,0x8
006854E2  48                        DEC EAX
006854E3  A3 B0 88 84 00            MOV [0x008488b0],EAX
006854E8  E9 09 EB FF FF            JMP 0x00683ff6
switchD_00685456::caseD_3eb:
006854ED  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
006854F3  0F 84 05 42 00 00         JZ 0x006896fe
006854F9  68 D0 89 84 00            PUSH 0x8489d0
006854FE  E8 77 04 D8 FF            CALL 0x0040597a
00685503  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685508  83 C4 04                  ADD ESP,0x4
0068550B  48                        DEC EAX
0068550C  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685511  E9 E0 EA FF FF            JMP 0x00683ff6
switchD_00685456::caseD_3ed:
00685516  E8 62 D4 D7 FF            CALL 0x0040297d
0068551B  85 C0                     TEST EAX,EAX
0068551D  75 2B                     JNZ 0x0068554a
0068551F  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685525  8B C1                     MOV EAX,ECX
00685527  C1 E0 04                  SHL EAX,0x4
0068552A  03 C1                     ADD EAX,ECX
0068552C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068552F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685532  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685535  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00685538  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
0068553F  52                        PUSH EDX
00685540  6A 83                     PUSH -0x7d
00685542  E8 CA FE D7 FF            CALL 0x00405411
00685547  83 C4 08                  ADD ESP,0x8
LAB_0068554a:
0068554A  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685550  8B C1                     MOV EAX,ECX
00685552  C1 E0 04                  SHL EAX,0x4
00685555  03 C1                     ADD EAX,ECX
00685557  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068555A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068555D  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685560  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685563  C1 E0 02                  SHL EAX,0x2
00685566  8B 88 88 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c88]
0068556C  8B 90 84 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c84]
00685572  51                        PUSH ECX
00685573  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00685579  52                        PUSH EDX
0068557A  8B 90 EC 1A 81 00         MOV EDX,dword ptr [EAX + 0x811aec]
00685580  51                        PUSH ECX
00685581  52                        PUSH EDX
00685582  E8 61 FA D7 FF            CALL 0x00404fe8
00685587  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068558C  83 C4 10                  ADD ESP,0x10
0068558F  48                        DEC EAX
00685590  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685595  E9 5C EA FF FF            JMP 0x00683ff6
switchD_00685456::caseD_3ec:
0068559A  E8 FF D5 D7 FF            CALL 0x00402b9e
0068559F  85 C0                     TEST EAX,EAX
006855A1  75 2B                     JNZ 0x006855ce
006855A3  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006855A9  8B C1                     MOV EAX,ECX
006855AB  C1 E0 04                  SHL EAX,0x4
006855AE  03 C1                     ADD EAX,ECX
006855B0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006855B3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006855B6  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006855B9  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006855BC  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
006855C3  52                        PUSH EDX
006855C4  6A 83                     PUSH -0x7d
006855C6  E8 46 FE D7 FF            CALL 0x00405411
006855CB  83 C4 08                  ADD ESP,0x8
LAB_006855ce:
006855CE  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006855D4  8B C1                     MOV EAX,ECX
006855D6  C1 E0 04                  SHL EAX,0x4
006855D9  03 C1                     ADD EAX,ECX
006855DB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006855DE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006855E1  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006855E4  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006855E7  8A 14 8D 80 1C 81 00      MOV DL,byte ptr [ECX*0x4 + 0x811c80]
006855EE  52                        PUSH EDX
006855EF  E8 F5 BC D7 FF            CALL 0x004012e9
006855F4  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006855F9  83 C4 04                  ADD ESP,0x4
006855FC  48                        DEC EAX
006855FD  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685602  E9 EF E9 FF FF            JMP 0x00683ff6
LAB_00685607:
00685607  E8 4F 04 D8 FF            CALL 0x00405a5b
0068560C  85 C0                     TEST EAX,EAX
0068560E  75 2B                     JNZ 0x0068563b
00685610  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685616  8B C1                     MOV EAX,ECX
00685618  C1 E0 04                  SHL EAX,0x4
0068561B  03 C1                     ADD EAX,ECX
0068561D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685620  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685623  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685626  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00685629  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00685630  52                        PUSH EDX
00685631  6A 83                     PUSH -0x7d
00685633  E8 D9 FD D7 FF            CALL 0x00405411
00685638  83 C4 08                  ADD ESP,0x8
LAB_0068563b:
0068563B  39 1D DC 89 84 00         CMP dword ptr [0x008489dc],EBX
00685641  74 1A                     JZ 0x0068565d
00685643  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00685648  68 5B 08 00 00            PUSH 0x85b
0068564D  68 04 56 7D 00            PUSH 0x7d5604
00685652  50                        PUSH EAX
00685653  68 74 FF FF FF            PUSH 0xffffff74
00685658  E8 E3 07 02 00            CALL 0x006a5e40
LAB_0068565d:
0068565D  6A 05                     PUSH 0x5
0068565F  6A 05                     PUSH 0x5
00685661  53                        PUSH EBX
00685662  E8 89 FE 02 00            CALL 0x006b54f0
00685667  A3 DC 89 84 00            MOV [0x008489dc],EAX
0068566C  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685671  48                        DEC EAX
00685672  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685677  E9 7A E9 FF FF            JMP 0x00683ff6
LAB_0068567c:
0068567C  05 0D FC FF FF            ADD EAX,0xfffffc0d
00685681  83 F8 28                  CMP EAX,0x28
00685684  0F 87 74 40 00 00         JA 0x006896fe
0068568A  33 C9                     XOR ECX,ECX
0068568C  8A 88 AC AB 68 00         MOV CL,byte ptr [EAX + 0x68abac]
switchD_00685692::switchD:
00685692  FF 24 8D 84 AB 68 00      JMP dword ptr [ECX*0x4 + 0x68ab84]
switchD_00685692::caseD_406:
00685699  E8 93 DD D7 FF            CALL 0x00403431
0068569E  85 C0                     TEST EAX,EAX
006856A0  75 2B                     JNZ 0x006856cd
006856A2  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006856A8  8B C1                     MOV EAX,ECX
006856AA  C1 E0 04                  SHL EAX,0x4
006856AD  03 C1                     ADD EAX,ECX
006856AF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006856B2  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006856B5  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006856B8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006856BB  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
006856C2  51                        PUSH ECX
006856C3  6A 83                     PUSH -0x7d
006856C5  E8 47 FD D7 FF            CALL 0x00405411
006856CA  83 C4 08                  ADD ESP,0x8
LAB_006856cd:
006856CD  39 1D B8 89 84 00         CMP dword ptr [0x008489b8],EBX
006856D3  75 20                     JNZ 0x006856f5
006856D5  39 1D B4 89 84 00         CMP dword ptr [0x008489b4],EBX
006856DB  75 18                     JNZ 0x006856f5
006856DD  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
006856E3  75 10                     JNZ 0x006856f5
006856E5  39 1D C8 89 84 00         CMP dword ptr [0x008489c8],EBX
006856EB  75 08                     JNZ 0x006856f5
006856ED  39 1D BC 89 84 00         CMP dword ptr [0x008489bc],EBX
006856F3  74 1B                     JZ 0x00685710
LAB_006856f5:
006856F5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006856FB  68 E5 06 00 00            PUSH 0x6e5
00685700  68 04 56 7D 00            PUSH 0x7d5604
00685705  52                        PUSH EDX
00685706  68 74 FF FF FF            PUSH 0xffffff74
0068570B  E8 30 07 02 00            CALL 0x006a5e40
LAB_00685710:
00685710  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685716  8B C1                     MOV EAX,ECX
00685718  C1 E0 04                  SHL EAX,0x4
0068571B  03 C1                     ADD EAX,ECX
0068571D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685720  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685723  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685726  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685729  C1 E0 02                  SHL EAX,0x2
0068572C  8B 88 84 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c84]
00685732  8B 90 F0 1A 81 00         MOV EDX,dword ptr [EAX + 0x811af0]
00685738  51                        PUSH ECX
00685739  66 8B 88 80 1C 81 00      MOV CX,word ptr [EAX + 0x811c80]
00685740  52                        PUSH EDX
00685741  8B 90 EC 1A 81 00         MOV EDX,dword ptr [EAX + 0x811aec]
00685747  51                        PUSH ECX
00685748  52                        PUSH EDX
00685749  E8 26 F9 D7 FF            CALL 0x00405074
0068574E  A3 B8 89 84 00            MOV [0x008489b8],EAX
00685753  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685758  83 C4 10                  ADD ESP,0x10
0068575B  48                        DEC EAX
0068575C  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685761  E9 90 E8 FF FF            JMP 0x00683ff6
switchD_00685692::caseD_407:
00685766  39 1D B8 89 84 00         CMP dword ptr [0x008489b8],EBX
0068576C  74 08                     JZ 0x00685776
0068576E  39 3D C0 89 84 00         CMP dword ptr [0x008489c0],EDI
00685774  75 1A                     JNZ 0x00685790
LAB_00685776:
00685776  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068577B  68 EA 06 00 00            PUSH 0x6ea
00685780  68 04 56 7D 00            PUSH 0x7d5604
00685785  50                        PUSH EAX
00685786  68 73 FF FF FF            PUSH 0xffffff73
0068578B  E8 B0 06 02 00            CALL 0x006a5e40
LAB_00685790:
00685790  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
00685796  0F 84 00 4E 00 00         JZ 0x0068a59c
0068579C  8B 15 B8 89 84 00         MOV EDX,dword ptr [0x008489b8]
006857A2  8D 4D EC                  LEA ECX,[EBP + -0x14]
006857A5  51                        PUSH ECX
006857A6  8B 82 06 01 00 00         MOV EAX,dword ptr [EDX + 0x106]
006857AC  50                        PUSH EAX
006857AD  E8 0D C7 D7 FF            CALL 0x00401ebf
006857B2  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006857B5  8D 4D F4                  LEA ECX,[EBP + -0xc]
006857B8  51                        PUSH ECX
006857B9  52                        PUSH EDX
006857BA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006857BD  50                        PUSH EAX
006857BE  A1 B8 89 84 00            MOV EAX,[0x008489b8]
006857C3  50                        PUSH EAX
006857C4  E8 3B FA D7 FF            CALL 0x00405204
006857C9  8D 4D F8                  LEA ECX,[EBP + -0x8]
006857CC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006857CF  51                        PUSH ECX
006857D0  E8 62 BD D7 FF            CALL 0x00401537
006857D5  68 B8 89 84 00            PUSH 0x8489b8
006857DA  E8 26 D6 D7 FF            CALL 0x00402e05
006857DF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006857E2  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006857E5  52                        PUSH EDX
006857E6  50                        PUSH EAX
006857E7  E8 55 C2 D7 FF            CALL 0x00401a41
006857EC  8D 4D DC                  LEA ECX,[EBP + -0x24]
006857EF  51                        PUSH ECX
006857F0  E8 10 D6 D7 FF            CALL 0x00402e05
006857F5  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006857FA  83 C4 2C                  ADD ESP,0x2c
006857FD  48                        DEC EAX
006857FE  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685803  E9 EE E7 FF FF            JMP 0x00683ff6
switchD_00685692::caseD_408:
00685808  39 1D B8 89 84 00         CMP dword ptr [0x008489b8],EBX
0068580E  75 1B                     JNZ 0x0068582b
00685810  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00685816  68 FC 06 00 00            PUSH 0x6fc
0068581B  68 04 56 7D 00            PUSH 0x7d5604
00685820  52                        PUSH EDX
00685821  68 72 FF FF FF            PUSH 0xffffff72
00685826  E8 15 06 02 00            CALL 0x006a5e40
LAB_0068582b:
0068582B  E8 49 02 D8 FF            CALL 0x00405a79
00685830  85 C0                     TEST EAX,EAX
00685832  75 2B                     JNZ 0x0068585f
00685834  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068583A  8B C1                     MOV EAX,ECX
0068583C  C1 E0 04                  SHL EAX,0x4
0068583F  03 C1                     ADD EAX,ECX
00685841  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685844  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685847  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068584A  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068584D  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00685854  52                        PUSH EDX
00685855  6A 83                     PUSH -0x7d
00685857  E8 B5 FB D7 FF            CALL 0x00405411
0068585C  83 C4 08                  ADD ESP,0x8
LAB_0068585f:
0068585F  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685865  8B C1                     MOV EAX,ECX
00685867  C1 E0 04                  SHL EAX,0x4
0068586A  03 C1                     ADD EAX,ECX
0068586C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068586F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685872  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685875  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00685878  A1 B8 89 84 00            MOV EAX,[0x008489b8]
0068587D  8A 14 8D 80 1C 81 00      MOV DL,byte ptr [ECX*0x4 + 0x811c80]
00685884  88 50 71                  MOV byte ptr [EAX + 0x71],DL
00685887  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068588D  8B C1                     MOV EAX,ECX
0068588F  C1 E0 04                  SHL EAX,0x4
00685892  03 C1                     ADD EAX,ECX
00685894  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685897  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068589A  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068589D  8B 15 B8 89 84 00         MOV EDX,dword ptr [0x008489b8]
006858A3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006858A6  8B 0C 85 84 1C 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811c84]
006858AD  89 4A 6D                  MOV dword ptr [EDX + 0x6d],ECX
006858B0  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006858B5  48                        DEC EAX
006858B6  A3 B0 88 84 00            MOV [0x008488b0],EAX
006858BB  E9 36 E7 FF FF            JMP 0x00683ff6
switchD_00685692::caseD_409:
006858C0  39 1D B8 89 84 00         CMP dword ptr [0x008489b8],EBX
006858C6  75 1A                     JNZ 0x006858e2
006858C8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006858CD  68 03 07 00 00            PUSH 0x703
006858D2  68 04 56 7D 00            PUSH 0x7d5604
006858D7  50                        PUSH EAX
006858D8  68 72 FF FF FF            PUSH 0xffffff72
006858DD  E8 5E 05 02 00            CALL 0x006a5e40
LAB_006858e2:
006858E2  E8 C9 BB D7 FF            CALL 0x004014b0
006858E7  85 C0                     TEST EAX,EAX
006858E9  75 2B                     JNZ 0x00685916
006858EB  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006858F1  8B C1                     MOV EAX,ECX
006858F3  C1 E0 04                  SHL EAX,0x4
006858F6  03 C1                     ADD EAX,ECX
006858F8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006858FB  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006858FE  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00685901  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685904  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
0068590B  51                        PUSH ECX
0068590C  6A 83                     PUSH -0x7d
0068590E  E8 FE FA D7 FF            CALL 0x00405411
00685913  83 C4 08                  ADD ESP,0x8
LAB_00685916:
00685916  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068591C  8B C1                     MOV EAX,ECX
0068591E  C1 E0 04                  SHL EAX,0x4
00685921  03 C1                     ADD EAX,ECX
00685923  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685926  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685929  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068592C  8B 15 B8 89 84 00         MOV EDX,dword ptr [0x008489b8]
00685932  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685935  8A 0C 85 80 1C 81 00      MOV CL,byte ptr [EAX*0x4 + 0x811c80]
0068593C  88 8A A3 00 00 00         MOV byte ptr [EDX + 0xa3],CL
00685942  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685948  8B C1                     MOV EAX,ECX
0068594A  C1 E0 04                  SHL EAX,0x4
0068594D  03 C1                     ADD EAX,ECX
0068594F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685952  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685955  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685958  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068595B  A1 B8 89 84 00            MOV EAX,[0x008489b8]
00685960  66 8B 14 8D 84 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c84]
00685968  66 89 90 A4 00 00 00      MOV word ptr [EAX + 0xa4],DX
0068596F  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685975  8B C1                     MOV EAX,ECX
00685977  C1 E0 04                  SHL EAX,0x4
0068597A  03 C1                     ADD EAX,ECX
0068597C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068597F  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685982  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00685985  8B 15 B8 89 84 00         MOV EDX,dword ptr [0x008489b8]
0068598B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068598E  66 8B 0C 85 88 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c88]
00685996  66 89 8A A6 00 00 00      MOV word ptr [EDX + 0xa6],CX
0068599D  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006859A3  8B C1                     MOV EAX,ECX
006859A5  C1 E0 04                  SHL EAX,0x4
006859A8  03 C1                     ADD EAX,ECX
006859AA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006859AD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006859B0  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006859B3  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006859B6  A1 B8 89 84 00            MOV EAX,[0x008489b8]
006859BB  66 8B 14 8D 8C 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c8c]
006859C3  66 89 90 A8 00 00 00      MOV word ptr [EAX + 0xa8],DX
006859CA  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006859D0  8B C1                     MOV EAX,ECX
006859D2  C1 E0 04                  SHL EAX,0x4
006859D5  03 C1                     ADD EAX,ECX
006859D7  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006859DA  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006859DD  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006859E0  8B 15 B8 89 84 00         MOV EDX,dword ptr [0x008489b8]
006859E6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006859E9  8B 0C 85 90 1C 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811c90]
006859F0  89 8A AA 00 00 00         MOV dword ptr [EDX + 0xaa],ECX
006859F6  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006859FB  48                        DEC EAX
006859FC  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685A01  E9 F0 E5 FF FF            JMP 0x00683ff6
switchD_00685692::caseD_41a:
00685A06  E8 A6 EB D7 FF            CALL 0x004045b1
00685A0B  85 C0                     TEST EAX,EAX
00685A0D  75 2B                     JNZ 0x00685a3a
00685A0F  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685A15  8B C1                     MOV EAX,ECX
00685A17  C1 E0 04                  SHL EAX,0x4
00685A1A  03 C1                     ADD EAX,ECX
00685A1C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685A1F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685A22  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685A25  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00685A28  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00685A2F  52                        PUSH EDX
00685A30  6A 83                     PUSH -0x7d
00685A32  E8 DA F9 D7 FF            CALL 0x00405411
00685A37  83 C4 08                  ADD ESP,0x8
LAB_00685a3a:
00685A3A  39 1D C8 89 84 00         CMP dword ptr [0x008489c8],EBX
00685A40  75 18                     JNZ 0x00685a5a
00685A42  39 1D BC 89 84 00         CMP dword ptr [0x008489bc],EBX
00685A48  75 10                     JNZ 0x00685a5a
00685A4A  39 1D B4 89 84 00         CMP dword ptr [0x008489b4],EBX
00685A50  75 08                     JNZ 0x00685a5a
00685A52  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00685A58  74 1A                     JZ 0x00685a74
LAB_00685a5a:
00685A5A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00685A5F  68 0E 07 00 00            PUSH 0x70e
00685A64  68 04 56 7D 00            PUSH 0x7d5604
00685A69  50                        PUSH EAX
00685A6A  68 74 FF FF FF            PUSH 0xffffff74
00685A6F  E8 CC 03 02 00            CALL 0x006a5e40
LAB_00685a74:
00685A74  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685A7A  8B C1                     MOV EAX,ECX
00685A7C  C1 E0 04                  SHL EAX,0x4
00685A7F  03 C1                     ADD EAX,ECX
00685A81  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685A84  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685A87  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00685A8A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685A8D  C1 E0 02                  SHL EAX,0x2
00685A90  66 8B 88 84 1C 81 00      MOV CX,word ptr [EAX + 0x811c84]
00685A97  66 8B 90 80 1C 81 00      MOV DX,word ptr [EAX + 0x811c80]
00685A9E  8B 80 EC 1A 81 00         MOV EAX,dword ptr [EAX + 0x811aec]
00685AA4  51                        PUSH ECX
00685AA5  52                        PUSH EDX
00685AA6  50                        PUSH EAX
00685AA7  E8 BE F5 D7 FF            CALL 0x0040506a
00685AAC  A3 C8 89 84 00            MOV [0x008489c8],EAX
00685AB1  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685AB6  83 C4 0C                  ADD ESP,0xc
00685AB9  48                        DEC EAX
00685ABA  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685ABF  E9 32 E5 FF FF            JMP 0x00683ff6
switchD_00685692::caseD_41b:
00685AC4  39 1D C8 89 84 00         CMP dword ptr [0x008489c8],EBX
00685ACA  75 1B                     JNZ 0x00685ae7
00685ACC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00685AD2  68 13 07 00 00            PUSH 0x713
00685AD7  68 04 56 7D 00            PUSH 0x7d5604
00685ADC  51                        PUSH ECX
00685ADD  68 73 FF FF FF            PUSH 0xffffff73
00685AE2  E8 59 03 02 00            CALL 0x006a5e40
LAB_00685ae7:
00685AE7  8B 0D B8 89 84 00         MOV ECX,dword ptr [0x008489b8]
00685AED  3B CB                     CMP ECX,EBX
00685AEF  74 57                     JZ 0x00685b48
00685AF1  A1 C8 89 84 00            MOV EAX,[0x008489c8]
00685AF6  33 D2                     XOR EDX,EDX
00685AF8  89 95 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EDX
00685AFE  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
00685B04  89 95 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EDX
00685B0A  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
00685B10  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
00685B16  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00685B19  89 85 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EAX
00685B1F  8B 81 C2 00 00 00         MOV EAX,dword ptr [ECX + 0xc2]
00685B25  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
00685B2B  52                        PUSH EDX
00685B2C  50                        PUSH EAX
00685B2D  E8 8E 86 02 00            CALL 0x006ae1c0
00685B32  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685B37  89 1D C8 89 84 00         MOV dword ptr [0x008489c8],EBX
00685B3D  48                        DEC EAX
00685B3E  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685B43  E9 AE E4 FF FF            JMP 0x00683ff6
LAB_00685b48:
00685B48  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
00685B4E  0F 84 6A 4A 00 00         JZ 0x0068a5be
00685B54  8B 15 C8 89 84 00         MOV EDX,dword ptr [0x008489c8]
00685B5A  8D 4D F4                  LEA ECX,[EBP + -0xc]
00685B5D  51                        PUSH ECX
00685B5E  52                        PUSH EDX
00685B5F  E8 28 F6 D7 FF            CALL 0x0040518c
00685B64  68 C8 89 84 00            PUSH 0x8489c8
00685B69  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00685B6C  E8 8F D2 D7 FF            CALL 0x00402e00
00685B71  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00685B74  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00685B77  50                        PUSH EAX
00685B78  51                        PUSH ECX
00685B79  E8 C3 BE D7 FF            CALL 0x00401a41
00685B7E  8D 55 E0                  LEA EDX,[EBP + -0x20]
00685B81  52                        PUSH EDX
00685B82  E8 79 D2 D7 FF            CALL 0x00402e00
00685B87  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685B8C  83 C4 18                  ADD ESP,0x18
00685B8F  48                        DEC EAX
00685B90  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685B95  E9 5C E4 FF FF            JMP 0x00683ff6
switchD_00685692::caseD_3fc:
00685B9A  E8 E5 CB D7 FF            CALL 0x00402784
00685B9F  85 C0                     TEST EAX,EAX
00685BA1  75 2B                     JNZ 0x00685bce
00685BA3  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685BA9  8B C1                     MOV EAX,ECX
00685BAB  C1 E0 04                  SHL EAX,0x4
00685BAE  03 C1                     ADD EAX,ECX
00685BB0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685BB3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685BB6  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685BB9  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00685BBC  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00685BC3  52                        PUSH EDX
00685BC4  6A 83                     PUSH -0x7d
00685BC6  E8 46 F8 D7 FF            CALL 0x00405411
00685BCB  83 C4 08                  ADD ESP,0x8
LAB_00685bce:
00685BCE  39 1D B8 89 84 00         CMP dword ptr [0x008489b8],EBX
00685BD4  75 20                     JNZ 0x00685bf6
00685BD6  39 1D B4 89 84 00         CMP dword ptr [0x008489b4],EBX
00685BDC  75 18                     JNZ 0x00685bf6
00685BDE  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00685BE4  75 10                     JNZ 0x00685bf6
00685BE6  39 1D C8 89 84 00         CMP dword ptr [0x008489c8],EBX
00685BEC  75 08                     JNZ 0x00685bf6
00685BEE  39 1D BC 89 84 00         CMP dword ptr [0x008489bc],EBX
00685BF4  74 1A                     JZ 0x00685c10
LAB_00685bf6:
00685BF6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00685BFB  68 4C 07 00 00            PUSH 0x74c
00685C00  68 04 56 7D 00            PUSH 0x7d5604
00685C05  50                        PUSH EAX
00685C06  68 74 FF FF FF            PUSH 0xffffff74
00685C0B  E8 30 02 02 00            CALL 0x006a5e40
LAB_00685c10:
00685C10  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685C16  8B C1                     MOV EAX,ECX
00685C18  C1 E0 04                  SHL EAX,0x4
00685C1B  03 C1                     ADD EAX,ECX
00685C1D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685C20  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685C23  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00685C26  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685C29  C1 E0 02                  SHL EAX,0x2
00685C2C  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00685C32  8B 90 EC 1A 81 00         MOV EDX,dword ptr [EAX + 0x811aec]
00685C38  51                        PUSH ECX
00685C39  52                        PUSH EDX
00685C3A  E8 3D B5 D7 FF            CALL 0x0040117c
00685C3F  A3 B4 89 84 00            MOV [0x008489b4],EAX
00685C44  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685C49  83 C4 08                  ADD ESP,0x8
00685C4C  48                        DEC EAX
00685C4D  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685C52  E9 9F E3 FF FF            JMP 0x00683ff6
switchD_00685692::caseD_3fd:
00685C57  39 1D B4 89 84 00         CMP dword ptr [0x008489b4],EBX
00685C5D  74 08                     JZ 0x00685c67
00685C5F  39 3D C0 89 84 00         CMP dword ptr [0x008489c0],EDI
00685C65  75 1A                     JNZ 0x00685c81
LAB_00685c67:
00685C67  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00685C6C  68 51 07 00 00            PUSH 0x751
00685C71  68 04 56 7D 00            PUSH 0x7d5604
00685C76  50                        PUSH EAX
00685C77  68 73 FF FF FF            PUSH 0xffffff73
00685C7C  E8 BF 01 02 00            CALL 0x006a5e40
LAB_00685c81:
00685C81  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
00685C87  0F 84 53 49 00 00         JZ 0x0068a5e0
00685C8D  8B 15 B4 89 84 00         MOV EDX,dword ptr [0x008489b4]
00685C93  8D 4D EC                  LEA ECX,[EBP + -0x14]
00685C96  51                        PUSH ECX
00685C97  8B 42 4E                  MOV EAX,dword ptr [EDX + 0x4e]
00685C9A  50                        PUSH EAX
00685C9B  E8 1F C2 D7 FF            CALL 0x00401ebf
00685CA0  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00685CA3  8D 4D F4                  LEA ECX,[EBP + -0xc]
00685CA6  51                        PUSH ECX
00685CA7  52                        PUSH EDX
00685CA8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00685CAB  50                        PUSH EAX
00685CAC  A1 B4 89 84 00            MOV EAX,[0x008489b4]
00685CB1  50                        PUSH EAX
00685CB2  E8 6D FD D7 FF            CALL 0x00405a24
00685CB7  8D 4D F8                  LEA ECX,[EBP + -0x8]
00685CBA  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00685CBD  51                        PUSH ECX
00685CBE  E8 74 B8 D7 FF            CALL 0x00401537
00685CC3  68 B4 89 84 00            PUSH 0x8489b4
00685CC8  E8 D7 C3 D7 FF            CALL 0x004020a4
00685CCD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00685CD0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00685CD3  52                        PUSH EDX
00685CD4  50                        PUSH EAX
00685CD5  E8 67 BD D7 FF            CALL 0x00401a41
00685CDA  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00685CDD  51                        PUSH ECX
00685CDE  E8 C1 C3 D7 FF            CALL 0x004020a4
00685CE3  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685CE8  83 C4 2C                  ADD ESP,0x2c
00685CEB  48                        DEC EAX
00685CEC  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685CF1  E9 00 E3 FF FF            JMP 0x00683ff6
switchD_00685692::caseD_3f3:
00685CF6  39 1D DC 89 84 00         CMP dword ptr [0x008489dc],EBX
00685CFC  75 1B                     JNZ 0x00685d19
00685CFE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00685D04  68 60 08 00 00            PUSH 0x860
00685D09  68 04 56 7D 00            PUSH 0x7d5604
00685D0E  52                        PUSH EDX
00685D0F  68 73 FF FF FF            PUSH 0xffffff73
00685D14  E8 27 01 02 00            CALL 0x006a5e40
LAB_00685d19:
00685D19  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
00685D1F  0F 84 DD 48 00 00         JZ 0x0068a602
00685D25  A1 DC 89 84 00            MOV EAX,[0x008489dc]
00685D2A  50                        PUSH EAX
00685D2B  E8 89 C7 D7 FF            CALL 0x004024b9
00685D30  A1 DC 89 84 00            MOV EAX,[0x008489dc]
00685D35  83 C4 04                  ADD ESP,0x4
00685D38  3B C3                     CMP EAX,EBX
00685D3A  0F 84 BE 39 00 00         JZ 0x006896fe
00685D40  50                        PUSH EAX
00685D41  E8 2A F8 02 00            CALL 0x006b5570
00685D46  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685D4B  89 1D DC 89 84 00         MOV dword ptr [0x008489dc],EBX
00685D51  48                        DEC EAX
00685D52  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685D57  E9 9A E2 FF FF            JMP 0x00683ff6
LAB_00685d5c:
00685D5C  E8 A0 C5 D7 FF            CALL 0x00402301
00685D61  85 C0                     TEST EAX,EAX
00685D63  75 2B                     JNZ 0x00685d90
00685D65  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685D6B  8B C1                     MOV EAX,ECX
00685D6D  C1 E0 04                  SHL EAX,0x4
00685D70  03 C1                     ADD EAX,ECX
00685D72  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685D75  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685D78  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00685D7B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685D7E  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00685D85  51                        PUSH ECX
00685D86  6A 83                     PUSH -0x7d
00685D88  E8 84 F6 D7 FF            CALL 0x00405411
00685D8D  83 C4 08                  ADD ESP,0x8
LAB_00685d90:
00685D90  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00685D96  75 10                     JNZ 0x00685da8
00685D98  39 1D BC 89 84 00         CMP dword ptr [0x008489bc],EBX
00685D9E  75 08                     JNZ 0x00685da8
00685DA0  39 1D B4 89 84 00         CMP dword ptr [0x008489b4],EBX
00685DA6  74 1B                     JZ 0x00685dc3
LAB_00685da8:
00685DA8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00685DAE  68 2E 07 00 00            PUSH 0x72e
00685DB3  68 04 56 7D 00            PUSH 0x7d5604
00685DB8  52                        PUSH EDX
00685DB9  68 74 FF FF FF            PUSH 0xffffff74
00685DBE  E8 7D 00 02 00            CALL 0x006a5e40
LAB_00685dc3:
00685DC3  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685DC9  8B C1                     MOV EAX,ECX
00685DCB  C1 E0 04                  SHL EAX,0x4
00685DCE  03 C1                     ADD EAX,ECX
00685DD0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685DD3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685DD6  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685DD9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685DDC  C1 E0 02                  SHL EAX,0x2
00685DDF  8A 88 8C 1C 81 00         MOV CL,byte ptr [EAX + 0x811c8c]
00685DE5  66 8B 90 88 1C 81 00      MOV DX,word ptr [EAX + 0x811c88]
00685DEC  51                        PUSH ECX
00685DED  66 8B 88 84 1C 81 00      MOV CX,word ptr [EAX + 0x811c84]
00685DF4  52                        PUSH EDX
00685DF5  66 8B 90 80 1C 81 00      MOV DX,word ptr [EAX + 0x811c80]
00685DFC  8B 80 EC 1A 81 00         MOV EAX,dword ptr [EAX + 0x811aec]
00685E02  51                        PUSH ECX
00685E03  52                        PUSH EDX
00685E04  50                        PUSH EAX
00685E05  E8 B7 F5 D7 FF            CALL 0x004053c1
00685E0A  A3 C4 89 84 00            MOV [0x008489c4],EAX
00685E0F  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00685E14  83 C4 14                  ADD ESP,0x14
00685E17  48                        DEC EAX
00685E18  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685E1D  E9 D4 E1 FF FF            JMP 0x00683ff6
LAB_00685e22:
00685E22  05 DB FB FF FF            ADD EAX,0xfffffbdb
00685E27  3D 8D 00 00 00            CMP EAX,0x8d
00685E2C  0F 87 CC 38 00 00         JA 0x006896fe
00685E32  33 C9                     XOR ECX,ECX
00685E34  8A 88 2C AC 68 00         MOV CL,byte ptr [EAX + 0x68ac2c]
switchD_00685e3a::switchD:
00685E3A  FF 24 8D D8 AB 68 00      JMP dword ptr [ECX*0x4 + 0x68abd8]
switchD_00685e3a::caseD_456:
00685E41  E8 8A BE D7 FF            CALL 0x00401cd0
00685E46  8B F8                     MOV EDI,EAX
00685E48  3B FB                     CMP EDI,EBX
00685E4A  75 1B                     JNZ 0x00685e67
00685E4C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00685E52  68 98 06 00 00            PUSH 0x698
00685E57  68 04 56 7D 00            PUSH 0x7d5604
00685E5C  52                        PUSH EDX
00685E5D  68 72 FF FF FF            PUSH 0xffffff72
00685E62  E8 D9 FF 01 00            CALL 0x006a5e40
LAB_00685e67:
00685E67  E8 07 E9 D7 FF            CALL 0x00404773
00685E6C  85 C0                     TEST EAX,EAX
00685E6E  75 2B                     JNZ 0x00685e9b
00685E70  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685E76  8B C1                     MOV EAX,ECX
00685E78  C1 E0 04                  SHL EAX,0x4
00685E7B  03 C1                     ADD EAX,ECX
00685E7D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685E80  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685E83  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685E86  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00685E89  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00685E90  52                        PUSH EDX
00685E91  6A 83                     PUSH -0x7d
00685E93  E8 79 F5 D7 FF            CALL 0x00405411
00685E98  83 C4 08                  ADD ESP,0x8
LAB_00685e9b:
00685E9B  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00685EA1  74 1A                     JZ 0x00685ebd
00685EA3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00685EA8  68 9A 06 00 00            PUSH 0x69a
00685EAD  68 04 56 7D 00            PUSH 0x7d5604
00685EB2  50                        PUSH EAX
00685EB3  68 70 FF FF FF            PUSH 0xffffff70
00685EB8  E8 83 FF 01 00            CALL 0x006a5e40
LAB_00685ebd:
00685EBD  E8 43 E3 D7 FF            CALL 0x00404205
00685EC2  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
00685EC8  A3 CC 89 84 00            MOV [0x008489cc],EAX
00685ECD  8B CA                     MOV ECX,EDX
00685ECF  8D B7 6E 04 00 00         LEA ESI,[EDI + 0x46e]
00685ED5  C1 E1 04                  SHL ECX,0x4
00685ED8  03 CA                     ADD ECX,EDX
00685EDA  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00685EDD  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00685EE0  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
00685EE3  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00685EE6  8B 0C 95 84 1C 81 00      MOV ECX,dword ptr [EDX*0x4 + 0x811c84]
00685EED  89 48 01                  MOV dword ptr [EAX + 0x1],ECX
00685EF0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685EF6  8B C1                     MOV EAX,ECX
00685EF8  C1 E0 04                  SHL EAX,0x4
00685EFB  03 C1                     ADD EAX,ECX
00685EFD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685F00  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685F03  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
00685F06  8B 15 CC 89 84 00         MOV EDX,dword ptr [0x008489cc]
00685F0C  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00685F0F  8B 0C 85 94 1A 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811a94]
00685F16  89 4A 05                  MOV dword ptr [EDX + 0x5],ECX
00685F19  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685F1F  8B C1                     MOV EAX,ECX
00685F21  C1 E0 04                  SHL EAX,0x4
00685F24  03 C1                     ADD EAX,ECX
00685F26  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685F29  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685F2C  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685F2F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685F32  C1 E0 02                  SHL EAX,0x2
00685F35  80 B8 C8 3B 81 00 02      CMP byte ptr [EAX + 0x813bc8],0x2
00685F3C  75 1B                     JNZ 0x00685f59
00685F3E  8B 8F 56 04 00 00         MOV ECX,dword ptr [EDI + 0x456]
00685F44  8D 90 80 1C 81 00         LEA EDX,[EAX + 0x811c80]
00685F4A  51                        PUSH ECX
00685F4B  52                        PUSH EDX
00685F4C  6A 02                     PUSH 0x2
00685F4E  56                        PUSH ESI
00685F4F  E8 91 DF D7 FF            CALL 0x00403ee5
00685F54  83 C4 10                  ADD ESP,0x10
00685F57  EB 20                     JMP 0x00685f79
LAB_00685f59:
00685F59  8B 97 56 04 00 00         MOV EDX,dword ptr [EDI + 0x456]
00685F5F  8B 80 80 1C 81 00         MOV EAX,dword ptr [EAX + 0x811c80]
00685F65  52                        PUSH EDX
00685F66  50                        PUSH EAX
00685F67  E8 07 E3 D7 FF            CALL 0x00404273
00685F6C  83 C4 04                  ADD ESP,0x4
00685F6F  50                        PUSH EAX
00685F70  56                        PUSH ESI
00685F71  E8 39 D4 D7 FF            CALL 0x004033af
00685F76  83 C4 0C                  ADD ESP,0xc
LAB_00685f79:
00685F79  8B 0D CC 89 84 00         MOV ECX,dword ptr [0x008489cc]
00685F7F  66 89 41 09               MOV word ptr [ECX + 0x9],AX
00685F83  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685F89  8B C1                     MOV EAX,ECX
00685F8B  C6 45 A0 0B               MOV byte ptr [EBP + -0x60],0xb
00685F8F  C1 E0 04                  SHL EAX,0x4
00685F92  03 C1                     ADD EAX,ECX
00685F94  66 C7 45 A3 01 00         MOV word ptr [EBP + -0x5d],0x1
00685F9A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685F9D  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00685FA0  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00685FA3  8D 55 A0                  LEA EDX,[EBP + -0x60]
00685FA6  52                        PUSH EDX
00685FA7  56                        PUSH ESI
00685FA8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685FAB  66 8B 0C 85 94 1A 81 00   MOV CX,word ptr [EAX*0x4 + 0x811a94]
00685FB3  66 89 4D A1               MOV word ptr [EBP + -0x5f],CX
00685FB7  E8 8D C1 D7 FF            CALL 0x00402149
00685FBC  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00685FC2  83 C4 08                  ADD ESP,0x8
00685FC5  8B C1                     MOV EAX,ECX
00685FC7  C1 E0 04                  SHL EAX,0x4
00685FCA  03 C1                     ADD EAX,ECX
00685FCC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00685FCF  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00685FD2  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00685FD5  41                        INC ECX
00685FD6  89 0D B0 88 84 00         MOV dword ptr [0x008488b0],ECX
00685FDC  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00685FDF  8B C1                     MOV EAX,ECX
00685FE1  48                        DEC EAX
00685FE2  C7 04 95 90 1A 81 00 04 00 00 00  MOV dword ptr [EDX*0x4 + 0x811a90],0x4
00685FED  A3 B0 88 84 00            MOV [0x008488b0],EAX
00685FF2  E9 FF DF FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_425:
00685FF7  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00685FFD  75 1A                     JNZ 0x00686019
00685FFF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00686004  68 33 07 00 00            PUSH 0x733
00686009  68 04 56 7D 00            PUSH 0x7d5604
0068600E  50                        PUSH EAX
0068600F  68 73 FF FF FF            PUSH 0xffffff73
00686014  E8 27 FE 01 00            CALL 0x006a5e40
LAB_00686019:
00686019  8B 0D C8 89 84 00         MOV ECX,dword ptr [0x008489c8]
0068601F  3B CB                     CMP ECX,EBX
00686021  74 51                     JZ 0x00686074
00686023  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686028  33 D2                     XOR EDX,EDX
0068602A  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
00686030  3B C3                     CMP EAX,EBX
00686032  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
00686038  74 0B                     JZ 0x00686045
0068603A  83 C0 E0                  ADD EAX,-0x20
0068603D  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
00686043  EB 06                     JMP 0x0068604b
LAB_00686045:
00686045  89 9D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EBX
LAB_0068604b:
0068604B  8B 89 85 00 00 00         MOV ECX,dword ptr [ECX + 0x85]
00686051  8D 85 58 FF FF FF         LEA EAX,[EBP + 0xffffff58]
00686057  50                        PUSH EAX
00686058  51                        PUSH ECX
00686059  E8 62 81 02 00            CALL 0x006ae1c0
0068605E  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00686063  89 1D C4 89 84 00         MOV dword ptr [0x008489c4],EBX
00686069  48                        DEC EAX
0068606A  A3 B0 88 84 00            MOV [0x008488b0],EAX
0068606F  E9 82 DF FF FF            JMP 0x00683ff6
LAB_00686074:
00686074  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
0068607A  0F 84 9D 45 00 00         JZ 0x0068a61d
00686080  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686085  8D 55 F4                  LEA EDX,[EBP + -0xc]
00686088  52                        PUSH EDX
00686089  50                        PUSH EAX
0068608A  E8 35 B4 D7 FF            CALL 0x004014c4
0068608F  68 C4 89 84 00            PUSH 0x8489c4
00686094  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00686097  E8 31 FB D7 FF            CALL 0x00405bcd
0068609C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0068609F  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006860A2  51                        PUSH ECX
006860A3  52                        PUSH EDX
006860A4  E8 98 B9 D7 FF            CALL 0x00401a41
006860A9  8D 45 D8                  LEA EAX,[EBP + -0x28]
006860AC  50                        PUSH EAX
006860AD  E8 1B FB D7 FF            CALL 0x00405bcd
006860B2  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006860B7  83 C4 18                  ADD ESP,0x18
006860BA  48                        DEC EAX
006860BB  A3 B0 88 84 00            MOV [0x008488b0],EAX
006860C0  E9 31 DF FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_44c:
006860C5  89 3D C0 89 84 00         MOV dword ptr [0x008489c0],EDI
006860CB  E8 EA C2 D7 FF            CALL 0x004023ba
006860D0  85 C0                     TEST EAX,EAX
006860D2  75 2B                     JNZ 0x006860ff
006860D4  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006860DA  8B C1                     MOV EAX,ECX
006860DC  C1 E0 04                  SHL EAX,0x4
006860DF  03 C1                     ADD EAX,ECX
006860E1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006860E4  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006860E7  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006860EA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006860ED  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
006860F4  51                        PUSH ECX
006860F5  6A 83                     PUSH -0x7d
006860F7  E8 15 F3 D7 FF            CALL 0x00405411
006860FC  83 C4 08                  ADD ESP,0x8
LAB_006860ff:
006860FF  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686105  75 08                     JNZ 0x0068610f
00686107  39 1D C8 89 84 00         CMP dword ptr [0x008489c8],EBX
0068610D  74 1B                     JZ 0x0068612a
LAB_0068610f:
0068610F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00686115  68 65 07 00 00            PUSH 0x765
0068611A  68 04 56 7D 00            PUSH 0x7d5604
0068611F  52                        PUSH EDX
00686120  68 74 FF FF FF            PUSH 0xffffff74
00686125  E8 16 FD 01 00            CALL 0x006a5e40
LAB_0068612a:
0068612A  8B 15 B8 89 84 00         MOV EDX,dword ptr [0x008489b8]
00686130  3B D3                     CMP EDX,EBX
00686132  0F 84 86 00 00 00         JZ 0x006861be
00686138  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068613E  8B C1                     MOV EAX,ECX
00686140  C1 E0 04                  SHL EAX,0x4
00686143  03 C1                     ADD EAX,ECX
00686145  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686148  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068614B  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068614E  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686151  8B 04 8D EC 1A 81 00      MOV EAX,dword ptr [ECX*0x4 + 0x811aec]
00686158  80 38 00                  CMP byte ptr [EAX],0x0
0068615B  0F 84 9D 35 00 00         JZ 0x006896fe
00686161  8B BA 06 01 00 00         MOV EDI,dword ptr [EDX + 0x106]
00686167  B9 10 00 00 00            MOV ECX,0x10
0068616C  33 C0                     XOR EAX,EAX
0068616E  83 C7 06                  ADD EDI,0x6
00686171  F3 AB                     STOSD.REP ES:EDI
00686173  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686179  6A 3F                     PUSH 0x3f
0068617B  8B C1                     MOV EAX,ECX
0068617D  C1 E0 04                  SHL EAX,0x4
00686180  03 C1                     ADD EAX,ECX
00686182  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686185  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686188  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068618B  8B 15 B8 89 84 00         MOV EDX,dword ptr [0x008489b8]
00686191  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686194  8B 0C 85 EC 1A 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811aec]
0068619B  8B 82 06 01 00 00         MOV EAX,dword ptr [EDX + 0x106]
006861A1  83 C0 06                  ADD EAX,0x6
006861A4  51                        PUSH ECX
006861A5  50                        PUSH EAX
006861A6  E8 95 81 0A 00            CALL 0x0072e340
006861AB  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006861B0  83 C4 0C                  ADD ESP,0xc
006861B3  48                        DEC EAX
006861B4  A3 B0 88 84 00            MOV [0x008488b0],EAX
006861B9  E9 38 DE FF FF            JMP 0x00683ff6
LAB_006861be:
006861BE  8B 15 B4 89 84 00         MOV EDX,dword ptr [0x008489b4]
006861C4  3B D3                     CMP EDX,EBX
006861C6  0F 84 80 00 00 00         JZ 0x0068624c
006861CC  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006861D2  8B C1                     MOV EAX,ECX
006861D4  C1 E0 04                  SHL EAX,0x4
006861D7  03 C1                     ADD EAX,ECX
006861D9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006861DC  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006861DF  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006861E2  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006861E5  8B 04 8D EC 1A 81 00      MOV EAX,dword ptr [ECX*0x4 + 0x811aec]
006861EC  80 38 00                  CMP byte ptr [EAX],0x0
006861EF  0F 84 09 35 00 00         JZ 0x006896fe
006861F5  8B 7A 4E                  MOV EDI,dword ptr [EDX + 0x4e]
006861F8  B9 10 00 00 00            MOV ECX,0x10
006861FD  33 C0                     XOR EAX,EAX
006861FF  83 C7 06                  ADD EDI,0x6
00686202  F3 AB                     STOSD.REP ES:EDI
00686204  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068620A  6A 3F                     PUSH 0x3f
0068620C  8B C1                     MOV EAX,ECX
0068620E  C1 E0 04                  SHL EAX,0x4
00686211  03 C1                     ADD EAX,ECX
00686213  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686216  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686219  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068621C  8B 15 B4 89 84 00         MOV EDX,dword ptr [0x008489b4]
00686222  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686225  8B 0C 85 EC 1A 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811aec]
0068622C  8B 42 4E                  MOV EAX,dword ptr [EDX + 0x4e]
0068622F  83 C0 06                  ADD EAX,0x6
00686232  51                        PUSH ECX
00686233  50                        PUSH EAX
00686234  E8 07 81 0A 00            CALL 0x0072e340
00686239  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068623E  83 C4 0C                  ADD ESP,0xc
00686241  48                        DEC EAX
00686242  A3 B0 88 84 00            MOV [0x008488b0],EAX
00686247  E9 AA DD FF FF            JMP 0x00683ff6
LAB_0068624c:
0068624C  39 1D BC 89 84 00         CMP dword ptr [0x008489bc],EBX
00686252  74 1B                     JZ 0x0068626f
00686254  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068625A  68 74 07 00 00            PUSH 0x774
0068625F  68 04 56 7D 00            PUSH 0x7d5604
00686264  51                        PUSH ECX
00686265  68 74 FF FF FF            PUSH 0xffffff74
0068626A  E8 D1 FB 01 00            CALL 0x006a5e40
LAB_0068626f:
0068626F  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686275  8B C1                     MOV EAX,ECX
00686277  C1 E0 04                  SHL EAX,0x4
0068627A  03 C1                     ADD EAX,ECX
0068627C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068627F  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686282  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686285  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686288  8B 0C 85 EC 1A 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811aec]
0068628F  51                        PUSH ECX
00686290  E8 4C B3 D7 FF            CALL 0x004015e1
00686295  A3 BC 89 84 00            MOV [0x008489bc],EAX
0068629A  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068629F  83 C4 04                  ADD ESP,0x4
006862A2  48                        DEC EAX
006862A3  A3 B0 88 84 00            MOV [0x008488b0],EAX
006862A8  E9 49 DD FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_44d:
006862AD  A1 CC 89 84 00            MOV EAX,[0x008489cc]
006862B2  89 1D C0 89 84 00         MOV dword ptr [0x008489c0],EBX
006862B8  3B C3                     CMP EAX,EBX
006862BA  74 1B                     JZ 0x006862d7
006862BC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006862C2  68 7A 07 00 00            PUSH 0x77a
006862C7  68 04 56 7D 00            PUSH 0x7d5604
006862CC  52                        PUSH EDX
006862CD  68 6F FF FF FF            PUSH 0xffffff6f
006862D2  E8 69 FB 01 00            CALL 0x006a5e40
LAB_006862d7:
006862D7  39 1D B8 89 84 00         CMP dword ptr [0x008489b8],EBX
006862DD  0F 85 1B 34 00 00         JNZ 0x006896fe
006862E3  39 1D B4 89 84 00         CMP dword ptr [0x008489b4],EBX
006862E9  0F 85 0F 34 00 00         JNZ 0x006896fe
006862EF  39 1D BC 89 84 00         CMP dword ptr [0x008489bc],EBX
006862F5  75 1A                     JNZ 0x00686311
006862F7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006862FC  68 7C 07 00 00            PUSH 0x77c
00686301  68 04 56 7D 00            PUSH 0x7d5604
00686306  50                        PUSH EAX
00686307  68 73 FF FF FF            PUSH 0xffffff73
0068630C  E8 2F FB 01 00            CALL 0x006a5e40
LAB_00686311:
00686311  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
00686317  0F 84 1B 43 00 00         JZ 0x0068a638
0068631D  8B 15 BC 89 84 00         MOV EDX,dword ptr [0x008489bc]
00686323  8D 4D EC                  LEA ECX,[EBP + -0x14]
00686326  51                        PUSH ECX
00686327  52                        PUSH EDX
00686328  E8 92 BB D7 FF            CALL 0x00401ebf
0068632D  68 BC 89 84 00            PUSH 0x8489bc
00686332  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00686335  E8 FD B1 D7 FF            CALL 0x00401537
0068633A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0068633D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00686340  50                        PUSH EAX
00686341  51                        PUSH ECX
00686342  E8 FA B6 D7 FF            CALL 0x00401a41
00686347  8D 55 F8                  LEA EDX,[EBP + -0x8]
0068634A  52                        PUSH EDX
0068634B  E8 E7 B1 D7 FF            CALL 0x00401537
00686350  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00686355  83 C4 18                  ADD ESP,0x18
00686358  48                        DEC EAX
00686359  A3 B0 88 84 00            MOV [0x008488b0],EAX
0068635E  E9 93 DC FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_426:
00686363  E8 AC BB D7 FF            CALL 0x00401f14
00686368  85 C0                     TEST EAX,EAX
0068636A  75 2B                     JNZ 0x00686397
0068636C  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686372  8B C1                     MOV EAX,ECX
00686374  C1 E0 04                  SHL EAX,0x4
00686377  03 C1                     ADD EAX,ECX
00686379  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068637C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068637F  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686382  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686385  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
0068638C  52                        PUSH EDX
0068638D  6A 83                     PUSH -0x7d
0068638F  E8 7D F0 D7 FF            CALL 0x00405411
00686394  83 C4 08                  ADD ESP,0x8
LAB_00686397:
00686397  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
0068639D  75 1A                     JNZ 0x006863b9
0068639F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006863A4  68 8D 07 00 00            PUSH 0x78d
006863A9  68 04 56 7D 00            PUSH 0x7d5604
006863AE  50                        PUSH EAX
006863AF  68 72 FF FF FF            PUSH 0xffffff72
006863B4  E8 87 FA 01 00            CALL 0x006a5e40
LAB_006863b9:
006863B9  B9 0B 00 00 00            MOV ECX,0xb
006863BE  33 C0                     XOR EAX,EAX
006863C0  8D BD DC FE FF FF         LEA EDI,[EBP + 0xfffffedc]
006863C6  6A 0E                     PUSH 0xe
006863C8  F3 AB                     STOSD.REP ES:EDI
006863CA  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006863D0  8B C1                     MOV EAX,ECX
006863D2  C1 E0 04                  SHL EAX,0x4
006863D5  03 C1                     ADD EAX,ECX
006863D7  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006863DA  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006863DD  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006863E0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006863E3  C1 E0 02                  SHL EAX,0x2
006863E6  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
006863EC  8B 90 84 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c84]
006863F2  89 8D DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],ECX
006863F8  8B 88 88 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c88]
006863FE  89 95 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EDX
00686404  66 8B 90 8C 1C 81 00      MOV DX,word ptr [EAX + 0x811c8c]
0068640B  89 8D E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],ECX
00686411  66 8B 88 90 1C 81 00      MOV CX,word ptr [EAX + 0x811c90]
00686418  66 89 95 E8 FE FF FF      MOV word ptr [EBP + 0xfffffee8],DX
0068641F  66 8B 90 94 1C 81 00      MOV DX,word ptr [EAX + 0x811c94]
00686426  66 89 8D EA FE FF FF      MOV word ptr [EBP + 0xfffffeea],CX
0068642D  66 8B 88 98 1C 81 00      MOV CX,word ptr [EAX + 0x811c98]
00686434  66 89 95 EC FE FF FF      MOV word ptr [EBP + 0xfffffeec],DX
0068643B  8A 90 9C 1C 81 00         MOV DL,byte ptr [EAX + 0x811c9c]
00686441  8B 80 EC 1A 81 00         MOV EAX,dword ptr [EAX + 0x811aec]
00686447  66 89 8D EE FE FF FF      MOV word ptr [EBP + 0xfffffeee],CX
0068644E  8D 8D F1 FE FF FF         LEA ECX,[EBP + 0xfffffef1]
00686454  50                        PUSH EAX
00686455  51                        PUSH ECX
00686456  88 95 F0 FE FF FF         MOV byte ptr [EBP + 0xfffffef0],DL
0068645C  E8 DF 7E 0A 00            CALL 0x0072e340
00686461  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686466  83 C4 0C                  ADD ESP,0xc
00686469  8D 95 DC FE FF FF         LEA EDX,[EBP + 0xfffffedc]
0068646F  8B 88 EB 01 00 00         MOV ECX,dword ptr [EAX + 0x1eb]
00686475  52                        PUSH EDX
00686476  51                        PUSH ECX
00686477  E8 44 7D 02 00            CALL 0x006ae1c0
0068647C  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00686482  E9 6F DB FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_427:
00686487  E8 6C DB D7 FF            CALL 0x00403ff8
0068648C  85 C0                     TEST EAX,EAX
0068648E  75 2B                     JNZ 0x006864bb
00686490  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686496  8B C1                     MOV EAX,ECX
00686498  C1 E0 04                  SHL EAX,0x4
0068649B  03 C1                     ADD EAX,ECX
0068649D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006864A0  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006864A3  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006864A6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006864A9  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
006864B0  51                        PUSH ECX
006864B1  6A 83                     PUSH -0x7d
006864B3  E8 59 EF D7 FF            CALL 0x00405411
006864B8  83 C4 08                  ADD ESP,0x8
LAB_006864bb:
006864BB  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
006864C1  75 1B                     JNZ 0x006864de
006864C3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006864C9  68 9D 07 00 00            PUSH 0x79d
006864CE  68 04 56 7D 00            PUSH 0x7d5604
006864D3  52                        PUSH EDX
006864D4  68 72 FF FF FF            PUSH 0xffffff72
006864D9  E8 62 F9 01 00            CALL 0x006a5e40
LAB_006864de:
006864DE  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006864E4  8B C1                     MOV EAX,ECX
006864E6  C1 E0 04                  SHL EAX,0x4
006864E9  03 C1                     ADD EAX,ECX
006864EB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006864EE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006864F1  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006864F4  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006864F7  A1 C4 89 84 00            MOV EAX,[0x008489c4]
006864FC  8A 14 8D 80 1C 81 00      MOV DL,byte ptr [ECX*0x4 + 0x811c80]
00686503  88 90 DF 00 00 00         MOV byte ptr [EAX + 0xdf],DL
00686509  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068650E  48                        DEC EAX
0068650F  A3 B0 88 84 00            MOV [0x008488b0],EAX
00686514  E9 DD DA FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_429:
00686519  E8 3A E4 D7 FF            CALL 0x00404958
0068651E  85 C0                     TEST EAX,EAX
00686520  75 2B                     JNZ 0x0068654d
00686522  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686528  8B C1                     MOV EAX,ECX
0068652A  C1 E0 04                  SHL EAX,0x4
0068652D  03 C1                     ADD EAX,ECX
0068652F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686532  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686535  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686538  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068653B  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00686542  51                        PUSH ECX
00686543  6A 83                     PUSH -0x7d
00686545  E8 C7 EE D7 FF            CALL 0x00405411
0068654A  83 C4 08                  ADD ESP,0x8
LAB_0068654d:
0068654D  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686553  75 1B                     JNZ 0x00686570
00686555  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068655B  68 A3 07 00 00            PUSH 0x7a3
00686560  68 04 56 7D 00            PUSH 0x7d5604
00686565  52                        PUSH EDX
00686566  68 72 FF FF FF            PUSH 0xffffff72
0068656B  E8 D0 F8 01 00            CALL 0x006a5e40
LAB_00686570:
00686570  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686576  8B C1                     MOV EAX,ECX
00686578  C1 E0 04                  SHL EAX,0x4
0068657B  03 C1                     ADD EAX,ECX
0068657D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686580  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686583  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00686586  A1 C4 89 84 00            MOV EAX,[0x008489c4]
0068658B  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0068658E  8A 14 8D 80 1C 81 00      MOV DL,byte ptr [ECX*0x4 + 0x811c80]
00686595  88 90 E0 00 00 00         MOV byte ptr [EAX + 0xe0],DL
0068659B  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006865A1  8B C1                     MOV EAX,ECX
006865A3  C1 E0 04                  SHL EAX,0x4
006865A6  03 C1                     ADD EAX,ECX
006865A8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006865AB  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006865AE  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006865B1  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
006865B7  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006865BA  66 8B 0C 85 84 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c84]
006865C2  66 89 8A E1 00 00 00      MOV word ptr [EDX + 0xe1],CX
006865C9  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006865CF  8B C1                     MOV EAX,ECX
006865D1  C1 E0 04                  SHL EAX,0x4
006865D4  03 C1                     ADD EAX,ECX
006865D6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006865D9  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006865DC  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006865DF  A1 C4 89 84 00            MOV EAX,[0x008489c4]
006865E4  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006865E7  66 8B 14 8D 88 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c88]
006865EF  66 89 90 E3 00 00 00      MOV word ptr [EAX + 0xe3],DX
006865F6  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006865FC  8B C1                     MOV EAX,ECX
006865FE  C1 E0 04                  SHL EAX,0x4
00686601  03 C1                     ADD EAX,ECX
00686603  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686606  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686609  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
0068660C  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686612  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00686615  66 8B 0C 85 8C 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c8c]
0068661D  66 89 8A E5 00 00 00      MOV word ptr [EDX + 0xe5],CX
00686624  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068662A  8B C1                     MOV EAX,ECX
0068662C  C1 E0 04                  SHL EAX,0x4
0068662F  03 C1                     ADD EAX,ECX
00686631  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686634  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686637  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
0068663A  A1 C4 89 84 00            MOV EAX,[0x008489c4]
0068663F  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00686642  8B 14 8D 90 1C 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811c90]
00686649  89 90 F1 00 00 00         MOV dword ptr [EAX + 0xf1],EDX
0068664F  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686655  8B C1                     MOV EAX,ECX
00686657  C1 E0 04                  SHL EAX,0x4
0068665A  03 C1                     ADD EAX,ECX
0068665C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068665F  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686662  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
00686665  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00686668  8B 04 85 94 1C 81 00      MOV EAX,dword ptr [EAX*0x4 + 0x811c94]
0068666F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686672  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00686675  A1 C4 89 84 00            MOV EAX,[0x008489c4]
0068667A  89 90 E7 00 00 00         MOV dword ptr [EAX + 0xe7],EDX
00686680  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686686  8B C1                     MOV EAX,ECX
00686688  C1 E0 04                  SHL EAX,0x4
0068668B  03 C1                     ADD EAX,ECX
0068668D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686690  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686693  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
00686696  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
0068669C  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0068669F  66 8B 0C 85 98 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c98]
006866A7  66 89 8A EB 00 00 00      MOV word ptr [EDX + 0xeb],CX
006866AE  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006866B4  8B C1                     MOV EAX,ECX
006866B6  C1 E0 04                  SHL EAX,0x4
006866B9  03 C1                     ADD EAX,ECX
006866BB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006866BE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006866C1  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006866C4  A1 C4 89 84 00            MOV EAX,[0x008489c4]
006866C9  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006866CC  66 8B 14 8D 9C 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c9c]
006866D4  66 89 90 ED 00 00 00      MOV word ptr [EAX + 0xed],DX
006866DB  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006866E1  8B C1                     MOV EAX,ECX
006866E3  C1 E0 04                  SHL EAX,0x4
006866E6  03 C1                     ADD EAX,ECX
006866E8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006866EB  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006866EE  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006866F1  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
006866F7  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006866FA  66 8B 0C 85 A0 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811ca0]
00686702  66 89 8A EF 00 00 00      MOV word ptr [EDX + 0xef],CX
00686709  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068670E  48                        DEC EAX
0068670F  A3 B0 88 84 00            MOV [0x008488b0],EAX
00686714  E9 DD D8 FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_428:
00686719  E8 DE CA D7 FF            CALL 0x004031fc
0068671E  85 C0                     TEST EAX,EAX
00686720  75 2B                     JNZ 0x0068674d
00686722  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686728  8B C1                     MOV EAX,ECX
0068672A  C1 E0 04                  SHL EAX,0x4
0068672D  03 C1                     ADD EAX,ECX
0068672F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686732  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686735  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686738  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068673B  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00686742  52                        PUSH EDX
00686743  6A 83                     PUSH -0x7d
00686745  E8 C7 EC D7 FF            CALL 0x00405411
0068674A  83 C4 08                  ADD ESP,0x8
LAB_0068674d:
0068674D  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686753  75 1A                     JNZ 0x0068676f
00686755  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068675A  68 B1 07 00 00            PUSH 0x7b1
0068675F  68 04 56 7D 00            PUSH 0x7d5604
00686764  50                        PUSH EAX
00686765  68 72 FF FF FF            PUSH 0xffffff72
0068676A  E8 D1 F6 01 00            CALL 0x006a5e40
LAB_0068676f:
0068676F  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686775  8B C1                     MOV EAX,ECX
00686777  C1 E0 04                  SHL EAX,0x4
0068677A  03 C1                     ADD EAX,ECX
0068677C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068677F  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686782  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
00686785  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
0068678B  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
0068678E  8A 0C 85 80 1C 81 00      MOV CL,byte ptr [EAX*0x4 + 0x811c80]
00686795  88 8A F5 00 00 00         MOV byte ptr [EDX + 0xf5],CL
0068679B  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006867A1  8B C1                     MOV EAX,ECX
006867A3  C1 E0 04                  SHL EAX,0x4
006867A6  03 C1                     ADD EAX,ECX
006867A8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006867AB  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006867AE  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006867B1  A1 C4 89 84 00            MOV EAX,[0x008489c4]
006867B6  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006867B9  8B 14 8D 84 1C 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811c84]
006867C0  89 90 F6 00 00 00         MOV dword ptr [EAX + 0xf6],EDX
006867C6  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006867CC  8B C1                     MOV EAX,ECX
006867CE  C1 E0 04                  SHL EAX,0x4
006867D1  03 C1                     ADD EAX,ECX
006867D3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006867D6  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006867D9  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006867DC  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006867DF  8B 04 85 88 1C 81 00      MOV EAX,dword ptr [EAX*0x4 + 0x811c88]
006867E6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006867E9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
006867EC  A1 C4 89 84 00            MOV EAX,[0x008489c4]
006867F1  89 90 FA 00 00 00         MOV dword ptr [EAX + 0xfa],EDX
006867F7  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006867FC  48                        DEC EAX
006867FD  A3 B0 88 84 00            MOV [0x008488b0],EAX
00686802  E9 EF D7 FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_42a:
00686807  E8 74 E1 D7 FF            CALL 0x00404980
0068680C  85 C0                     TEST EAX,EAX
0068680E  75 2B                     JNZ 0x0068683b
00686810  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686816  8B C1                     MOV EAX,ECX
00686818  C1 E0 04                  SHL EAX,0x4
0068681B  03 C1                     ADD EAX,ECX
0068681D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686820  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686823  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686826  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686829  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00686830  51                        PUSH ECX
00686831  6A 83                     PUSH -0x7d
00686833  E8 D9 EB D7 FF            CALL 0x00405411
00686838  83 C4 08                  ADD ESP,0x8
LAB_0068683b:
0068683B  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686841  75 1B                     JNZ 0x0068685e
00686843  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00686849  68 B9 07 00 00            PUSH 0x7b9
0068684E  68 04 56 7D 00            PUSH 0x7d5604
00686853  52                        PUSH EDX
00686854  68 72 FF FF FF            PUSH 0xffffff72
00686859  E8 E2 F5 01 00            CALL 0x006a5e40
LAB_0068685e:
0068685E  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686864  8B C1                     MOV EAX,ECX
00686866  C1 E0 04                  SHL EAX,0x4
00686869  03 C1                     ADD EAX,ECX
0068686B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068686E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686871  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00686874  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686879  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0068687C  8A 14 8D 80 1C 81 00      MOV DL,byte ptr [ECX*0x4 + 0x811c80]
00686883  88 90 02 01 00 00         MOV byte ptr [EAX + 0x102],DL
00686889  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068688F  8B C1                     MOV EAX,ECX
00686891  C1 E0 04                  SHL EAX,0x4
00686894  03 C1                     ADD EAX,ECX
00686896  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686899  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068689C  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
0068689F  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
006868A5  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006868A8  8B 0C 85 84 1C 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811c84]
006868AF  89 8A 09 01 00 00         MOV dword ptr [EDX + 0x109],ECX
006868B5  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006868BB  8B C1                     MOV EAX,ECX
006868BD  C1 E0 04                  SHL EAX,0x4
006868C0  03 C1                     ADD EAX,ECX
006868C2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006868C5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006868C8  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006868CB  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006868CE  8B 04 8D 88 1C 81 00      MOV EAX,dword ptr [ECX*0x4 + 0x811c88]
006868D5  8B 0D C4 89 84 00         MOV ECX,dword ptr [0x008489c4]
006868DB  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006868DE  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
006868E1  89 81 03 01 00 00         MOV dword ptr [ECX + 0x103],EAX
006868E7  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006868EC  48                        DEC EAX
006868ED  A3 B0 88 84 00            MOV [0x008488b0],EAX
006868F2  E9 FF D6 FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_42b:
006868F7  E8 F9 D4 D7 FF            CALL 0x00403df5
006868FC  85 C0                     TEST EAX,EAX
006868FE  75 2B                     JNZ 0x0068692b
00686900  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686906  8B C1                     MOV EAX,ECX
00686908  C1 E0 04                  SHL EAX,0x4
0068690B  03 C1                     ADD EAX,ECX
0068690D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686910  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686913  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686916  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686919  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00686920  51                        PUSH ECX
00686921  6A 83                     PUSH -0x7d
00686923  E8 E9 EA D7 FF            CALL 0x00405411
00686928  83 C4 08                  ADD ESP,0x8
LAB_0068692b:
0068692B  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686931  75 1B                     JNZ 0x0068694e
00686933  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00686939  68 C1 07 00 00            PUSH 0x7c1
0068693E  68 04 56 7D 00            PUSH 0x7d5604
00686943  52                        PUSH EDX
00686944  68 72 FF FF FF            PUSH 0xffffff72
00686949  E8 F2 F4 01 00            CALL 0x006a5e40
LAB_0068694e:
0068694E  33 C0                     XOR EAX,EAX
00686950  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686956  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0068695C  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
00686962  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
00686968  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
0068696E  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00686974  8B C1                     MOV EAX,ECX
00686976  C1 E0 04                  SHL EAX,0x4
00686979  03 C1                     ADD EAX,ECX
0068697B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068697E  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686981  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686984  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686987  C1 E0 02                  SHL EAX,0x2
0068698A  66 8B 88 80 1C 81 00      MOV CX,word ptr [EAX + 0x811c80]
00686991  66 8B 90 84 1C 81 00      MOV DX,word ptr [EAX + 0x811c84]
00686998  66 89 8D 64 FF FF FF      MOV word ptr [EBP + 0xffffff64],CX
0068699F  66 8B 88 88 1C 81 00      MOV CX,word ptr [EAX + 0x811c88]
006869A6  66 89 95 66 FF FF FF      MOV word ptr [EBP + 0xffffff66],DX
006869AD  8B 90 8C 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c8c]
006869B3  66 89 8D 68 FF FF FF      MOV word ptr [EBP + 0xffffff68],CX
006869BA  8B 88 90 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c90]
006869C0  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
006869C6  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006869C9  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
006869CC  66 8B 90 94 1C 81 00      MOV DX,word ptr [EAX + 0x811c94]
006869D3  89 8D 6A FF FF FF         MOV dword ptr [EBP + 0xffffff6a],ECX
006869D9  66 8B 88 98 1C 81 00      MOV CX,word ptr [EAX + 0x811c98]
006869E0  66 89 95 6E FF FF FF      MOV word ptr [EBP + 0xffffff6e],DX
006869E7  66 8B 90 9C 1C 81 00      MOV DX,word ptr [EAX + 0x811c9c]
006869EE  66 89 8D 70 FF FF FF      MOV word ptr [EBP + 0xffffff70],CX
006869F5  8B 0D C4 89 84 00         MOV ECX,dword ptr [0x008489c4]
006869FB  66 89 95 72 FF FF FF      MOV word ptr [EBP + 0xffffff72],DX
00686A02  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
00686A08  8B 91 03 02 00 00         MOV EDX,dword ptr [ECX + 0x203]
00686A0E  50                        PUSH EAX
00686A0F  52                        PUSH EDX
00686A10  E8 AB 77 02 00            CALL 0x006ae1c0
00686A15  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00686A1B  E9 D6 D5 FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_42c:
00686A20  E8 C2 E1 D7 FF            CALL 0x00404be7
00686A25  85 C0                     TEST EAX,EAX
00686A27  75 2B                     JNZ 0x00686a54
00686A29  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686A2F  8B C1                     MOV EAX,ECX
00686A31  C1 E0 04                  SHL EAX,0x4
00686A34  03 C1                     ADD EAX,ECX
00686A36  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686A39  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686A3C  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686A3F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686A42  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00686A49  52                        PUSH EDX
00686A4A  6A 83                     PUSH -0x7d
00686A4C  E8 C0 E9 D7 FF            CALL 0x00405411
00686A51  83 C4 08                  ADD ESP,0x8
LAB_00686a54:
00686A54  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686A5A  75 1A                     JNZ 0x00686a76
00686A5C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00686A61  68 D0 07 00 00            PUSH 0x7d0
00686A66  68 04 56 7D 00            PUSH 0x7d5604
00686A6B  50                        PUSH EAX
00686A6C  68 72 FF FF FF            PUSH 0xffffff72
00686A71  E8 CA F3 01 00            CALL 0x006a5e40
LAB_00686a76:
00686A76  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686A7C  8B C1                     MOV EAX,ECX
00686A7E  C1 E0 04                  SHL EAX,0x4
00686A81  03 C1                     ADD EAX,ECX
00686A83  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686A86  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686A89  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686A8C  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686A92  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686A95  8A 0C 85 80 1C 81 00      MOV CL,byte ptr [EAX*0x4 + 0x811c80]
00686A9C  88 8A 19 01 00 00         MOV byte ptr [EDX + 0x119],CL
00686AA2  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686AA8  8B C1                     MOV EAX,ECX
00686AAA  C1 E0 04                  SHL EAX,0x4
00686AAD  03 C1                     ADD EAX,ECX
00686AAF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686AB2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686AB5  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686AB8  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686ABB  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686AC0  8B 14 8D 84 1C 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811c84]
00686AC7  89 90 1A 01 00 00         MOV dword ptr [EAX + 0x11a],EDX
00686ACD  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686AD3  8B C1                     MOV EAX,ECX
00686AD5  C1 E0 04                  SHL EAX,0x4
00686AD8  03 C1                     ADD EAX,ECX
00686ADA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686ADD  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686AE0  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686AE3  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686AE9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686AEC  66 8B 0C 85 88 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c88]
00686AF4  66 89 8A 1E 01 00 00      MOV word ptr [EDX + 0x11e],CX
00686AFB  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686B01  8B C1                     MOV EAX,ECX
00686B03  C1 E0 04                  SHL EAX,0x4
00686B06  03 C1                     ADD EAX,ECX
00686B08  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686B0B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686B0E  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686B11  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686B14  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686B19  66 8B 14 8D 8C 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c8c]
00686B21  66 89 90 20 01 00 00      MOV word ptr [EAX + 0x120],DX
00686B28  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686B2E  8B C1                     MOV EAX,ECX
00686B30  C1 E0 04                  SHL EAX,0x4
00686B33  03 C1                     ADD EAX,ECX
00686B35  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686B38  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686B3B  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686B3E  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686B44  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686B47  8B 0C 85 90 1C 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811c90]
00686B4E  89 8A 26 01 00 00         MOV dword ptr [EDX + 0x126],ECX
00686B54  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686B5A  8B C1                     MOV EAX,ECX
00686B5C  C1 E0 04                  SHL EAX,0x4
00686B5F  03 C1                     ADD EAX,ECX
00686B61  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686B64  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686B67  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686B6A  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686B6D  8B 04 8D 94 1C 81 00      MOV EAX,dword ptr [ECX*0x4 + 0x811c94]
00686B74  8B 0D C4 89 84 00         MOV ECX,dword ptr [0x008489c4]
00686B7A  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00686B7D  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00686B80  89 81 22 01 00 00         MOV dword ptr [ECX + 0x122],EAX
00686B86  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686B8C  8B C1                     MOV EAX,ECX
00686B8E  C1 E0 04                  SHL EAX,0x4
00686B91  03 C1                     ADD EAX,ECX
00686B93  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686B96  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686B99  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686B9C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686B9F  8B 04 85 98 1C 81 00      MOV EAX,dword ptr [EAX*0x4 + 0x811c98]
00686BA6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686BA9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00686BAC  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686BB1  89 90 2A 01 00 00         MOV dword ptr [EAX + 0x12a],EDX
00686BB7  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00686BBD  E9 34 D4 FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_42f:
00686BC2  E8 C5 AE D7 FF            CALL 0x00401a8c
00686BC7  85 C0                     TEST EAX,EAX
00686BC9  75 2B                     JNZ 0x00686bf6
00686BCB  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686BD1  8B C1                     MOV EAX,ECX
00686BD3  C1 E0 04                  SHL EAX,0x4
00686BD6  03 C1                     ADD EAX,ECX
00686BD8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686BDB  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686BDE  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686BE1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686BE4  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00686BEB  51                        PUSH ECX
00686BEC  6A 83                     PUSH -0x7d
00686BEE  E8 1E E8 D7 FF            CALL 0x00405411
00686BF3  83 C4 08                  ADD ESP,0x8
LAB_00686bf6:
00686BF6  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686BFC  75 1B                     JNZ 0x00686c19
00686BFE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00686C04  68 DC 07 00 00            PUSH 0x7dc
00686C09  68 04 56 7D 00            PUSH 0x7d5604
00686C0E  52                        PUSH EDX
00686C0F  68 72 FF FF FF            PUSH 0xffffff72
00686C14  E8 27 F2 01 00            CALL 0x006a5e40
LAB_00686c19:
00686C19  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686C1F  8B C1                     MOV EAX,ECX
00686C21  C1 E0 04                  SHL EAX,0x4
00686C24  03 C1                     ADD EAX,ECX
00686C26  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686C29  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686C2C  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686C2F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686C32  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686C37  8A 14 8D 80 1C 81 00      MOV DL,byte ptr [ECX*0x4 + 0x811c80]
00686C3E  88 90 32 01 00 00         MOV byte ptr [EAX + 0x132],DL
00686C44  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686C4A  8B C1                     MOV EAX,ECX
00686C4C  C1 E0 04                  SHL EAX,0x4
00686C4F  03 C1                     ADD EAX,ECX
00686C51  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686C54  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686C57  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686C5A  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686C60  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686C63  8B 0C 85 84 1C 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811c84]
00686C6A  89 8A 33 01 00 00         MOV dword ptr [EDX + 0x133],ECX
00686C70  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686C76  8B C1                     MOV EAX,ECX
00686C78  C1 E0 04                  SHL EAX,0x4
00686C7B  03 C1                     ADD EAX,ECX
00686C7D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686C80  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686C83  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686C86  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686C89  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686C8E  66 8B 14 8D 88 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c88]
00686C96  66 89 90 37 01 00 00      MOV word ptr [EAX + 0x137],DX
00686C9D  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686CA3  8B C1                     MOV EAX,ECX
00686CA5  C1 E0 04                  SHL EAX,0x4
00686CA8  03 C1                     ADD EAX,ECX
00686CAA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686CAD  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686CB0  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686CB3  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686CB9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686CBC  66 8B 0C 85 8C 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c8c]
00686CC4  66 89 8A 39 01 00 00      MOV word ptr [EDX + 0x139],CX
00686CCB  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686CD1  8B C1                     MOV EAX,ECX
00686CD3  C1 E0 04                  SHL EAX,0x4
00686CD6  03 C1                     ADD EAX,ECX
00686CD8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686CDB  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686CDE  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686CE1  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686CE4  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686CE9  8B 14 8D 90 1C 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811c90]
00686CF0  89 90 3F 01 00 00         MOV dword ptr [EAX + 0x13f],EDX
00686CF6  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686CFC  8B C1                     MOV EAX,ECX
00686CFE  C1 E0 04                  SHL EAX,0x4
00686D01  03 C1                     ADD EAX,ECX
00686D03  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686D06  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686D09  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686D0C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686D0F  8B 04 85 94 1C 81 00      MOV EAX,dword ptr [EAX*0x4 + 0x811c94]
00686D16  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686D19  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00686D1C  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686D21  89 90 3B 01 00 00         MOV dword ptr [EAX + 0x13b],EDX
00686D27  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00686D2C  48                        DEC EAX
00686D2D  A3 B0 88 84 00            MOV [0x008488b0],EAX
00686D32  E9 BF D2 FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_42d:
00686D37  E8 FE AE D7 FF            CALL 0x00401c3a
00686D3C  85 C0                     TEST EAX,EAX
00686D3E  75 2B                     JNZ 0x00686d6b
00686D40  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686D46  8B C1                     MOV EAX,ECX
00686D48  C1 E0 04                  SHL EAX,0x4
00686D4B  03 C1                     ADD EAX,ECX
00686D4D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686D50  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686D53  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686D56  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686D59  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00686D60  51                        PUSH ECX
00686D61  6A 83                     PUSH -0x7d
00686D63  E8 A9 E6 D7 FF            CALL 0x00405411
00686D68  83 C4 08                  ADD ESP,0x8
LAB_00686d6b:
00686D6B  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686D71  75 1B                     JNZ 0x00686d8e
00686D73  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00686D79  68 E7 07 00 00            PUSH 0x7e7
00686D7E  68 04 56 7D 00            PUSH 0x7d5604
00686D83  52                        PUSH EDX
00686D84  68 72 FF FF FF            PUSH 0xffffff72
00686D89  E8 B2 F0 01 00            CALL 0x006a5e40
LAB_00686d8e:
00686D8E  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686D94  8B C1                     MOV EAX,ECX
00686D96  C1 E0 04                  SHL EAX,0x4
00686D99  03 C1                     ADD EAX,ECX
00686D9B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686D9E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686DA1  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686DA4  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686DA7  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686DAC  8A 14 8D 80 1C 81 00      MOV DL,byte ptr [ECX*0x4 + 0x811c80]
00686DB3  88 90 43 01 00 00         MOV byte ptr [EAX + 0x143],DL
00686DB9  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686DBF  8B C1                     MOV EAX,ECX
00686DC1  C1 E0 04                  SHL EAX,0x4
00686DC4  03 C1                     ADD EAX,ECX
00686DC6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686DC9  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686DCC  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686DCF  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686DD5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686DD8  8B 0C 85 84 1C 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811c84]
00686DDF  89 8A 44 01 00 00         MOV dword ptr [EDX + 0x144],ECX
00686DE5  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686DEB  8B C1                     MOV EAX,ECX
00686DED  C1 E0 04                  SHL EAX,0x4
00686DF0  03 C1                     ADD EAX,ECX
00686DF2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686DF5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686DF8  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686DFB  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686DFE  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00686E03  66 8B 14 8D 88 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c88]
00686E0B  66 89 90 48 01 00 00      MOV word ptr [EAX + 0x148],DX
00686E12  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686E18  8B C1                     MOV EAX,ECX
00686E1A  C1 E0 04                  SHL EAX,0x4
00686E1D  03 C1                     ADD EAX,ECX
00686E1F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686E22  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686E25  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686E28  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686E2E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686E31  66 8B 0C 85 8C 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c8c]
00686E39  66 89 8A 4A 01 00 00      MOV word ptr [EDX + 0x14a],CX
00686E40  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686E46  8B C1                     MOV EAX,ECX
00686E48  C1 E0 04                  SHL EAX,0x4
00686E4B  03 C1                     ADD EAX,ECX
00686E4D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686E50  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686E53  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686E56  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686E59  8B 04 8D 90 1C 81 00      MOV EAX,dword ptr [ECX*0x4 + 0x811c90]
00686E60  8B 0D C4 89 84 00         MOV ECX,dword ptr [0x008489c4]
00686E66  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00686E69  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
00686E6C  89 81 4C 01 00 00         MOV dword ptr [ECX + 0x14c],EAX
00686E72  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00686E77  48                        DEC EAX
00686E78  A3 B0 88 84 00            MOV [0x008488b0],EAX
00686E7D  E9 74 D1 FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_42e:
00686E82  E8 21 B3 D7 FF            CALL 0x004021a8
00686E87  85 C0                     TEST EAX,EAX
00686E89  75 2B                     JNZ 0x00686eb6
00686E8B  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686E91  8B C1                     MOV EAX,ECX
00686E93  C1 E0 04                  SHL EAX,0x4
00686E96  03 C1                     ADD EAX,ECX
00686E98  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686E9B  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686E9E  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686EA1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686EA4  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00686EAB  51                        PUSH ECX
00686EAC  6A 83                     PUSH -0x7d
00686EAE  E8 5E E5 D7 FF            CALL 0x00405411
00686EB3  83 C4 08                  ADD ESP,0x8
LAB_00686eb6:
00686EB6  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686EBC  75 1B                     JNZ 0x00686ed9
00686EBE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00686EC4  68 F1 07 00 00            PUSH 0x7f1
00686EC9  68 04 56 7D 00            PUSH 0x7d5604
00686ECE  52                        PUSH EDX
00686ECF  68 72 FF FF FF            PUSH 0xffffff72
00686ED4  E8 67 EF 01 00            CALL 0x006a5e40
LAB_00686ed9:
00686ED9  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686EDF  33 C0                     XOR EAX,EAX
00686EE1  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00686EE4  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00686EE7  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00686EEA  8B C1                     MOV EAX,ECX
00686EEC  C1 E0 04                  SHL EAX,0x4
00686EEF  03 C1                     ADD EAX,ECX
00686EF1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686EF4  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686EF7  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686EFA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686EFD  C1 E0 02                  SHL EAX,0x2
00686F00  66 8B 88 80 1C 81 00      MOV CX,word ptr [EAX + 0x811c80]
00686F07  66 8B 90 84 1C 81 00      MOV DX,word ptr [EAX + 0x811c84]
00686F0E  66 89 4D C8               MOV word ptr [EBP + -0x38],CX
00686F12  66 8B 88 88 1C 81 00      MOV CX,word ptr [EAX + 0x811c88]
00686F19  66 89 55 CA               MOV word ptr [EBP + -0x36],DX
00686F1D  66 8B 90 8C 1C 81 00      MOV DX,word ptr [EAX + 0x811c8c]
00686F24  66 89 4D CC               MOV word ptr [EBP + -0x34],CX
00686F28  66 8B 88 90 1C 81 00      MOV CX,word ptr [EAX + 0x811c90]
00686F2F  66 89 55 CE               MOV word ptr [EBP + -0x32],DX
00686F33  66 8B 90 94 1C 81 00      MOV DX,word ptr [EAX + 0x811c94]
00686F3A  66 89 4D D0               MOV word ptr [EBP + -0x30],CX
00686F3E  8B 0D C4 89 84 00         MOV ECX,dword ptr [0x008489c4]
00686F44  66 89 55 D2               MOV word ptr [EBP + -0x2e],DX
00686F48  8D 45 C8                  LEA EAX,[EBP + -0x38]
00686F4B  8B 91 0F 02 00 00         MOV EDX,dword ptr [ECX + 0x20f]
00686F51  50                        PUSH EAX
00686F52  52                        PUSH EDX
00686F53  E8 68 72 02 00            CALL 0x006ae1c0
00686F58  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00686F5E  E9 93 D0 FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_430:
00686F63  E8 30 C2 D7 FF            CALL 0x00403198
00686F68  85 C0                     TEST EAX,EAX
00686F6A  75 2B                     JNZ 0x00686f97
00686F6C  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686F72  8B C1                     MOV EAX,ECX
00686F74  C1 E0 04                  SHL EAX,0x4
00686F77  03 C1                     ADD EAX,ECX
00686F79  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686F7C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686F7F  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686F82  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686F85  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00686F8C  52                        PUSH EDX
00686F8D  6A 83                     PUSH -0x7d
00686F8F  E8 7D E4 D7 FF            CALL 0x00405411
00686F94  83 C4 08                  ADD ESP,0x8
LAB_00686f97:
00686F97  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
00686F9D  75 1A                     JNZ 0x00686fb9
00686F9F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00686FA4  68 FE 07 00 00            PUSH 0x7fe
00686FA9  68 04 56 7D 00            PUSH 0x7d5604
00686FAE  50                        PUSH EAX
00686FAF  68 72 FF FF FF            PUSH 0xffffff72
00686FB4  E8 87 EE 01 00            CALL 0x006a5e40
LAB_00686fb9:
00686FB9  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686FBF  8B C1                     MOV EAX,ECX
00686FC1  C1 E0 04                  SHL EAX,0x4
00686FC4  03 C1                     ADD EAX,ECX
00686FC6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686FC9  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00686FCC  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00686FCF  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00686FD5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686FD8  8A 0C 85 80 1C 81 00      MOV CL,byte ptr [EAX*0x4 + 0x811c80]
00686FDF  88 8A 56 01 00 00         MOV byte ptr [EDX + 0x156],CL
00686FE5  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00686FEB  8B C1                     MOV EAX,ECX
00686FED  C1 E0 04                  SHL EAX,0x4
00686FF0  03 C1                     ADD EAX,ECX
00686FF2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00686FF5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00686FF8  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00686FFB  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00686FFE  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00687003  66 8B 14 8D 84 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c84]
0068700B  66 89 90 57 01 00 00      MOV word ptr [EAX + 0x157],DX
00687012  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687018  8B C1                     MOV EAX,ECX
0068701A  C1 E0 04                  SHL EAX,0x4
0068701D  03 C1                     ADD EAX,ECX
0068701F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687022  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00687025  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00687028  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
0068702E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687031  66 8B 0C 85 88 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c88]
00687039  66 89 8A 59 01 00 00      MOV word ptr [EDX + 0x159],CX
00687040  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687046  8B C1                     MOV EAX,ECX
00687048  C1 E0 04                  SHL EAX,0x4
0068704B  03 C1                     ADD EAX,ECX
0068704D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687050  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00687053  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00687056  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00687059  A1 C4 89 84 00            MOV EAX,[0x008489c4]
0068705E  8B 14 8D 8C 1C 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811c8c]
00687065  89 90 5B 01 00 00         MOV dword ptr [EAX + 0x15b],EDX
0068706B  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687071  8B C1                     MOV EAX,ECX
00687073  C1 E0 04                  SHL EAX,0x4
00687076  03 C1                     ADD EAX,ECX
00687078  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068707B  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068707E  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00687081  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00687087  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068708A  8B 0C 85 90 1C 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811c90]
00687091  89 8A 5F 01 00 00         MOV dword ptr [EDX + 0x15f],ECX
00687097  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068709C  48                        DEC EAX
0068709D  A3 B0 88 84 00            MOV [0x008488b0],EAX
006870A2  E9 4F CF FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_431:
006870A7  E8 3A E1 D7 FF            CALL 0x004051e6
006870AC  85 C0                     TEST EAX,EAX
006870AE  75 2B                     JNZ 0x006870db
006870B0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006870B6  8B C1                     MOV EAX,ECX
006870B8  C1 E0 04                  SHL EAX,0x4
006870BB  03 C1                     ADD EAX,ECX
006870BD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006870C0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006870C3  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006870C6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006870C9  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
006870D0  52                        PUSH EDX
006870D1  6A 83                     PUSH -0x7d
006870D3  E8 39 E3 D7 FF            CALL 0x00405411
006870D8  83 C4 08                  ADD ESP,0x8
LAB_006870db:
006870DB  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
006870E1  75 1A                     JNZ 0x006870fd
006870E3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006870E8  68 08 08 00 00            PUSH 0x808
006870ED  68 04 56 7D 00            PUSH 0x7d5604
006870F2  50                        PUSH EAX
006870F3  68 72 FF FF FF            PUSH 0xffffff72
006870F8  E8 43 ED 01 00            CALL 0x006a5e40
LAB_006870fd:
006870FD  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687103  8B C1                     MOV EAX,ECX
00687105  C1 E0 04                  SHL EAX,0x4
00687108  03 C1                     ADD EAX,ECX
0068710A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068710D  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00687110  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00687113  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00687119  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068711C  8A 0C 85 80 1C 81 00      MOV CL,byte ptr [EAX*0x4 + 0x811c80]
00687123  88 8A 67 01 00 00         MOV byte ptr [EDX + 0x167],CL
00687129  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068712F  8B C1                     MOV EAX,ECX
00687131  C1 E0 04                  SHL EAX,0x4
00687134  03 C1                     ADD EAX,ECX
00687136  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687139  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068713C  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068713F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00687142  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00687147  8B 14 8D 84 1C 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811c84]
0068714E  89 90 68 01 00 00         MOV dword ptr [EAX + 0x168],EDX
00687154  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068715A  8B C1                     MOV EAX,ECX
0068715C  C1 E0 04                  SHL EAX,0x4
0068715F  03 C1                     ADD EAX,ECX
00687161  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687164  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00687167  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068716A  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
00687170  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687173  66 8B 0C 85 88 1C 81 00   MOV CX,word ptr [EAX*0x4 + 0x811c88]
0068717B  66 89 8A 6C 01 00 00      MOV word ptr [EDX + 0x16c],CX
00687182  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687188  8B C1                     MOV EAX,ECX
0068718A  C1 E0 04                  SHL EAX,0x4
0068718D  03 C1                     ADD EAX,ECX
0068718F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687192  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00687195  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00687198  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068719B  A1 C4 89 84 00            MOV EAX,[0x008489c4]
006871A0  66 8B 14 8D 8C 1C 81 00   MOV DX,word ptr [ECX*0x4 + 0x811c8c]
006871A8  66 89 90 6E 01 00 00      MOV word ptr [EAX + 0x16e],DX
006871AF  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006871B5  8B C1                     MOV EAX,ECX
006871B7  C1 E0 04                  SHL EAX,0x4
006871BA  03 C1                     ADD EAX,ECX
006871BC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006871BF  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006871C2  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006871C5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006871C8  8B 04 85 90 1C 81 00      MOV EAX,dword ptr [EAX*0x4 + 0x811c90]
006871CF  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006871D2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
006871D5  A1 C4 89 84 00            MOV EAX,[0x008489c4]
006871DA  89 90 70 01 00 00         MOV dword ptr [EAX + 0x170],EDX
006871E0  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006871E5  48                        DEC EAX
006871E6  A3 B0 88 84 00            MOV [0x008488b0],EAX
006871EB  E9 06 CE FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_432:
006871F0  E8 FE D7 D7 FF            CALL 0x004049f3
006871F5  85 C0                     TEST EAX,EAX
006871F7  75 2B                     JNZ 0x00687224
006871F9  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006871FF  8B C1                     MOV EAX,ECX
00687201  C1 E0 04                  SHL EAX,0x4
00687204  03 C1                     ADD EAX,ECX
00687206  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687209  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068720C  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068720F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687212  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00687219  51                        PUSH ECX
0068721A  6A 83                     PUSH -0x7d
0068721C  E8 F0 E1 D7 FF            CALL 0x00405411
00687221  83 C4 08                  ADD ESP,0x8
LAB_00687224:
00687224  39 1D C4 89 84 00         CMP dword ptr [0x008489c4],EBX
0068722A  75 1B                     JNZ 0x00687247
0068722C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00687232  68 12 08 00 00            PUSH 0x812
00687237  68 04 56 7D 00            PUSH 0x7d5604
0068723C  52                        PUSH EDX
0068723D  68 72 FF FF FF            PUSH 0xffffff72
00687242  E8 F9 EB 01 00            CALL 0x006a5e40
LAB_00687247:
00687247  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068724D  8B C1                     MOV EAX,ECX
0068724F  C1 E0 04                  SHL EAX,0x4
00687252  03 C1                     ADD EAX,ECX
00687254  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687257  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068725A  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068725D  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00687260  A1 C4 89 84 00            MOV EAX,[0x008489c4]
00687265  8A 14 8D 80 1C 81 00      MOV DL,byte ptr [ECX*0x4 + 0x811c80]
0068726C  88 90 74 01 00 00         MOV byte ptr [EAX + 0x174],DL
00687272  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687278  8B C1                     MOV EAX,ECX
0068727A  C1 E0 04                  SHL EAX,0x4
0068727D  03 C1                     ADD EAX,ECX
0068727F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687282  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00687285  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00687288  8B 15 C4 89 84 00         MOV EDX,dword ptr [0x008489c4]
0068728E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687291  8B 0C 85 84 1C 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811c84]
00687298  89 8A 3F 02 00 00         MOV dword ptr [EDX + 0x23f],ECX
0068729E  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006872A3  48                        DEC EAX
006872A4  A3 B0 88 84 00            MOV [0x008488b0],EAX
006872A9  E9 48 CD FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_4b0:
006872AE  39 1D D4 89 84 00         CMP dword ptr [0x008489d4],EBX
006872B4  74 1A                     JZ 0x006872d0
006872B6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006872BB  68 18 08 00 00            PUSH 0x818
006872C0  68 04 56 7D 00            PUSH 0x7d5604
006872C5  50                        PUSH EAX
006872C6  68 74 FF FF FF            PUSH 0xffffff74
006872CB  E8 70 EB 01 00            CALL 0x006a5e40
LAB_006872d0:
006872D0  57                        PUSH EDI
006872D1  68 18 01 00 00            PUSH 0x118
006872D6  6A 03                     PUSH 0x3
006872D8  53                        PUSH EBX
006872D9  E8 B2 6F 02 00            CALL 0x006ae290
006872DE  A3 D4 89 84 00            MOV [0x008489d4],EAX
006872E3  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006872E8  48                        DEC EAX
006872E9  A3 B0 88 84 00            MOV [0x008488b0],EAX
006872EE  E9 03 CD FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_4b1:
006872F3  39 1D D4 89 84 00         CMP dword ptr [0x008489d4],EBX
006872F9  75 1B                     JNZ 0x00687316
006872FB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687301  68 1D 08 00 00            PUSH 0x81d
00687306  68 04 56 7D 00            PUSH 0x7d5604
0068730B  51                        PUSH ECX
0068730C  68 73 FF FF FF            PUSH 0xffffff73
00687311  E8 2A EB 01 00            CALL 0x006a5e40
LAB_00687316:
00687316  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
0068731C  0F 84 31 33 00 00         JZ 0x0068a653
00687322  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00687328  68 1F 08 00 00            PUSH 0x81f
0068732D  68 04 56 7D 00            PUSH 0x7d5604
00687332  52                        PUSH EDX
00687333  68 73 FF FF FF            PUSH 0xffffff73
00687338  E8 03 EB 01 00            CALL 0x006a5e40
0068733D  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00687343  E9 AE CC FF FF            JMP 0x00683ff6
switchD_00685e3a::caseD_4b2:
00687348  E8 57 DA D7 FF            CALL 0x00404da4
0068734D  85 C0                     TEST EAX,EAX
0068734F  75 2B                     JNZ 0x0068737c
00687351  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687357  8B C1                     MOV EAX,ECX
00687359  C1 E0 04                  SHL EAX,0x4
0068735C  03 C1                     ADD EAX,ECX
0068735E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687361  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00687364  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00687367  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068736A  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00687371  52                        PUSH EDX
00687372  6A 83                     PUSH -0x7d
00687374  E8 98 E0 D7 FF            CALL 0x00405411
00687379  83 C4 08                  ADD ESP,0x8
LAB_0068737c:
0068737C  39 1D D4 89 84 00         CMP dword ptr [0x008489d4],EBX
00687382  75 1A                     JNZ 0x0068739e
00687384  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687389  68 2B 08 00 00            PUSH 0x82b
0068738E  68 04 56 7D 00            PUSH 0x7d5604
00687393  50                        PUSH EAX
00687394  68 72 FF FF FF            PUSH 0xffffff72
00687399  E8 A2 EA 01 00            CALL 0x006a5e40
LAB_0068739e:
0068739E  B9 46 00 00 00            MOV ECX,0x46
006873A3  33 C0                     XOR EAX,EAX
006873A5  8D BD 3C FD FF FF         LEA EDI,[EBP + 0xfffffd3c]
006873AB  68 03 01 00 00            PUSH 0x103
006873B0  F3 AB                     STOSD.REP ES:EDI
006873B2  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006873B8  8B C1                     MOV EAX,ECX
006873BA  C1 E0 04                  SHL EAX,0x4
006873BD  03 C1                     ADD EAX,ECX
006873BF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006873C2  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006873C5  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006873C8  8D 95 3C FD FF FF         LEA EDX,[EBP + 0xfffffd3c]
006873CE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006873D1  8B 0C 85 EC 1A 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811aec]
006873D8  51                        PUSH ECX
006873D9  52                        PUSH EDX
006873DA  E8 61 6F 0A 00            CALL 0x0072e340
006873DF  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006873E5  83 C4 0C                  ADD ESP,0xc
006873E8  8B C1                     MOV EAX,ECX
006873EA  C1 E0 04                  SHL EAX,0x4
006873ED  03 C1                     ADD EAX,ECX
006873EF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006873F2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006873F5  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006873F8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006873FB  C1 E0 02                  SHL EAX,0x2
006873FE  8A 88 80 1C 81 00         MOV CL,byte ptr [EAX + 0x811c80]
00687404  8A 90 84 1C 81 00         MOV DL,byte ptr [EAX + 0x811c84]
0068740A  88 8D 40 FE FF FF         MOV byte ptr [EBP + 0xfffffe40],CL
00687410  8A 88 88 1C 81 00         MOV CL,byte ptr [EAX + 0x811c88]
00687416  88 95 41 FE FF FF         MOV byte ptr [EBP + 0xfffffe41],DL
0068741C  8B 90 8C 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c8c]
00687422  88 8D 42 FE FF FF         MOV byte ptr [EBP + 0xfffffe42],CL
00687428  8B 88 90 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c90]
0068742E  89 95 43 FE FF FF         MOV dword ptr [EBP + 0xfffffe43],EDX
00687434  8B 90 94 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c94]
0068743A  89 8D 47 FE FF FF         MOV dword ptr [EBP + 0xfffffe47],ECX
00687440  8B 88 98 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c98]
00687446  89 95 4B FE FF FF         MOV dword ptr [EBP + 0xfffffe4b],EDX
0068744C  8A 90 9C 1C 81 00         MOV DL,byte ptr [EAX + 0x811c9c]
00687452  89 8D 4F FE FF FF         MOV dword ptr [EBP + 0xfffffe4f],ECX
00687458  8B 0D D4 89 84 00         MOV ECX,dword ptr [0x008489d4]
0068745E  8D 85 3C FD FF FF         LEA EAX,[EBP + 0xfffffd3c]
00687464  88 95 53 FE FF FF         MOV byte ptr [EBP + 0xfffffe53],DL
0068746A  50                        PUSH EAX
0068746B  51                        PUSH ECX
0068746C  E8 4F 6D 02 00            CALL 0x006ae1c0
00687471  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00687477  E9 7A CB FF FF            JMP 0x00683ff6
LAB_0068747c:
0068747C  39 1D D8 89 84 00         CMP dword ptr [0x008489d8],EBX
00687482  74 1B                     JZ 0x0068749f
00687484  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068748A  68 3A 08 00 00            PUSH 0x83a
0068748F  68 04 56 7D 00            PUSH 0x7d5604
00687494  52                        PUSH EDX
00687495  68 74 FF FF FF            PUSH 0xffffff74
0068749A  E8 A1 E9 01 00            CALL 0x006a5e40
LAB_0068749f:
0068749F  6A 05                     PUSH 0x5
006874A1  68 20 02 00 00            PUSH 0x220
006874A6  6A 05                     PUSH 0x5
006874A8  53                        PUSH EBX
006874A9  E8 E2 6D 02 00            CALL 0x006ae290
006874AE  A3 D8 89 84 00            MOV [0x008489d8],EAX
006874B3  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006874B8  48                        DEC EAX
006874B9  A3 B0 88 84 00            MOV [0x008488b0],EAX
006874BE  E9 33 CB FF FF            JMP 0x00683ff6
LAB_006874c3:
006874C3  05 4C FB FF FF            ADD EAX,0xfffffb4c
006874C8  3D B2 00 00 00            CMP EAX,0xb2
006874CD  0F 87 2B 22 00 00         JA 0x006896fe
006874D3  33 C9                     XOR ECX,ECX
006874D5  8A 88 64 AD 68 00         MOV CL,byte ptr [EAX + 0x68ad64]
switchD_006874db::switchD:
006874DB  FF 24 8D BC AC 68 00      JMP dword ptr [ECX*0x4 + 0x68acbc]
switchD_006874db::caseD_4b4:
006874E2  39 1D D8 89 84 00         CMP dword ptr [0x008489d8],EBX
006874E8  75 1B                     JNZ 0x00687505
006874EA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006874F0  68 3F 08 00 00            PUSH 0x83f
006874F5  68 04 56 7D 00            PUSH 0x7d5604
006874FA  52                        PUSH EDX
006874FB  68 73 FF FF FF            PUSH 0xffffff73
00687500  E8 3B E9 01 00            CALL 0x006a5e40
LAB_00687505:
00687505  39 1D D0 89 84 00         CMP dword ptr [0x008489d0],EBX
0068750B  0F 84 5D 31 00 00         JZ 0x0068a66e
00687511  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687516  68 41 08 00 00            PUSH 0x841
0068751B  68 04 56 7D 00            PUSH 0x7d5604
00687520  50                        PUSH EAX
00687521  68 73 FF FF FF            PUSH 0xffffff73
00687526  E8 15 E9 01 00            CALL 0x006a5e40
0068752B  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00687531  E9 C0 CA FF FF            JMP 0x00683ff6
switchD_006874db::caseD_4b5:
00687536  E8 5E CA D7 FF            CALL 0x00403f99
0068753B  85 C0                     TEST EAX,EAX
0068753D  75 2B                     JNZ 0x0068756a
0068753F  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687545  8B C1                     MOV EAX,ECX
00687547  C1 E0 04                  SHL EAX,0x4
0068754A  03 C1                     ADD EAX,ECX
0068754C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068754F  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00687552  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00687555  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687558  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
0068755F  51                        PUSH ECX
00687560  6A 83                     PUSH -0x7d
00687562  E8 AA DE D7 FF            CALL 0x00405411
00687567  83 C4 08                  ADD ESP,0x8
LAB_0068756a:
0068756A  39 1D D8 89 84 00         CMP dword ptr [0x008489d8],EBX
00687570  75 1B                     JNZ 0x0068758d
00687572  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00687578  68 4D 08 00 00            PUSH 0x84d
0068757D  68 04 56 7D 00            PUSH 0x7d5604
00687582  52                        PUSH EDX
00687583  68 72 FF FF FF            PUSH 0xffffff72
00687588  E8 B3 E8 01 00            CALL 0x006a5e40
LAB_0068758d:
0068758D  B9 88 00 00 00            MOV ECX,0x88
00687592  33 C0                     XOR EAX,EAX
00687594  8D BD 18 F9 FF FF         LEA EDI,[EBP + 0xfffff918]
0068759A  68 03 01 00 00            PUSH 0x103
0068759F  F3 AB                     STOSD.REP ES:EDI
006875A1  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006875A7  8B C1                     MOV EAX,ECX
006875A9  C1 E0 04                  SHL EAX,0x4
006875AC  03 C1                     ADD EAX,ECX
006875AE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006875B1  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006875B4  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006875B7  8D 85 18 F9 FF FF         LEA EAX,[EBP + 0xfffff918]
006875BD  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006875C0  8B 14 8D EC 1A 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811aec]
006875C7  52                        PUSH EDX
006875C8  50                        PUSH EAX
006875C9  E8 72 6D 0A 00            CALL 0x0072e340
006875CE  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006875D4  68 03 01 00 00            PUSH 0x103
006875D9  8B C1                     MOV EAX,ECX
006875DB  C1 E0 04                  SHL EAX,0x4
006875DE  03 C1                     ADD EAX,ECX
006875E0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006875E3  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006875E6  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006875E9  8D 95 2C FA FF FF         LEA EDX,[EBP + 0xfffffa2c]
006875EF  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006875F2  8B 0C 85 F0 1A 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811af0]
006875F9  51                        PUSH ECX
006875FA  52                        PUSH EDX
006875FB  E8 40 6D 0A 00            CALL 0x0072e340
00687600  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00687606  83 C4 18                  ADD ESP,0x18
00687609  8B C1                     MOV EAX,ECX
0068760B  C1 E0 04                  SHL EAX,0x4
0068760E  03 C1                     ADD EAX,ECX
00687610  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00687613  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00687616  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00687619  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068761C  C1 E0 02                  SHL EAX,0x2
0068761F  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00687625  8B 90 84 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c84]
0068762B  89 8D 1C FA FF FF         MOV dword ptr [EBP + 0xfffffa1c],ECX
00687631  8B 88 88 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c88]
00687637  89 95 20 FA FF FF         MOV dword ptr [EBP + 0xfffffa20],EDX
0068763D  8B 90 8C 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c8c]
00687643  8B 80 90 1C 81 00         MOV EAX,dword ptr [EAX + 0x811c90]
00687649  89 8D 24 FA FF FF         MOV dword ptr [EBP + 0xfffffa24],ECX
0068764F  89 95 28 FA FF FF         MOV dword ptr [EBP + 0xfffffa28],EDX
00687655  8B 15 D8 89 84 00         MOV EDX,dword ptr [0x008489d8]
0068765B  8D 8D 18 F9 FF FF         LEA ECX,[EBP + 0xfffff918]
00687661  89 85 30 FB FF FF         MOV dword ptr [EBP + 0xfffffb30],EAX
00687667  51                        PUSH ECX
00687668  52                        PUSH EDX
00687669  E8 52 6B 02 00            CALL 0x006ae1c0
0068766E  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00687674  E9 7D C9 FF FF            JMP 0x00683ff6
switchD_006874db::caseD_514:
00687679  E8 52 A6 D7 FF            CALL 0x00401cd0
0068767E  8B F0                     MOV ESI,EAX
00687680  3B F3                     CMP ESI,EBX
00687682  75 1A                     JNZ 0x0068769e
00687684  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687689  68 75 08 00 00            PUSH 0x875
0068768E  68 04 56 7D 00            PUSH 0x7d5604
00687693  50                        PUSH EAX
00687694  68 72 FF FF FF            PUSH 0xffffff72
00687699  E8 A2 E7 01 00            CALL 0x006a5e40
LAB_0068769e:
0068769E  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006876A4  75 1B                     JNZ 0x006876c1
006876A6  68 75 08 00 00            PUSH 0x875
LAB_006876ab:
006876AB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006876B1  68 04 56 7D 00            PUSH 0x7d5604
006876B6  51                        PUSH ECX
006876B7  68 71 FF FF FF            PUSH 0xffffff71
006876BC  E8 7F E7 01 00            CALL 0x006a5e40
LAB_006876c1:
006876C1  E8 B5 D7 D7 FF            CALL 0x00404e7b
006876C6  E9 0A 1F 00 00            JMP 0x006895d5
switchD_006874db::caseD_515:
006876CB  E8 00 A6 D7 FF            CALL 0x00401cd0
006876D0  8B F0                     MOV ESI,EAX
006876D2  3B F3                     CMP ESI,EBX
006876D4  75 1B                     JNZ 0x006876f1
006876D6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006876DC  68 76 08 00 00            PUSH 0x876
006876E1  68 04 56 7D 00            PUSH 0x7d5604
006876E6  51                        PUSH ECX
006876E7  68 72 FF FF FF            PUSH 0xffffff72
006876EC  E8 4F E7 01 00            CALL 0x006a5e40
LAB_006876f1:
006876F1  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006876F7  75 1B                     JNZ 0x00687714
006876F9  68 76 08 00 00            PUSH 0x876
LAB_006876fe:
006876FE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00687704  68 04 56 7D 00            PUSH 0x7d5604
00687709  52                        PUSH EDX
0068770A  68 71 FF FF FF            PUSH 0xffffff71
0068770F  E8 2C E7 01 00            CALL 0x006a5e40
LAB_00687714:
00687714  E8 62 D7 D7 FF            CALL 0x00404e7b
00687719  E9 58 1E 00 00            JMP 0x00689576
switchD_006874db::caseD_516:
0068771E  E8 AD A5 D7 FF            CALL 0x00401cd0
00687723  8B F0                     MOV ESI,EAX
00687725  3B F3                     CMP ESI,EBX
00687727  75 1A                     JNZ 0x00687743
00687729  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068772E  68 77 08 00 00            PUSH 0x877
00687733  68 04 56 7D 00            PUSH 0x7d5604
00687738  50                        PUSH EAX
00687739  68 72 FF FF FF            PUSH 0xffffff72
0068773E  E8 FD E6 01 00            CALL 0x006a5e40
LAB_00687743:
00687743  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687749  75 1B                     JNZ 0x00687766
0068774B  68 77 08 00 00            PUSH 0x877
LAB_00687750:
00687750  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687756  68 04 56 7D 00            PUSH 0x7d5604
0068775B  51                        PUSH ECX
0068775C  68 71 FF FF FF            PUSH 0xffffff71
00687761  E8 DA E6 01 00            CALL 0x006a5e40
LAB_00687766:
00687766  6A 03                     PUSH 0x3
00687768  E9 60 1E 00 00            JMP 0x006895cd
switchD_006874db::caseD_517:
0068776D  E8 5E A5 D7 FF            CALL 0x00401cd0
00687772  8B F0                     MOV ESI,EAX
00687774  3B F3                     CMP ESI,EBX
00687776  75 1B                     JNZ 0x00687793
00687778  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068777E  68 78 08 00 00            PUSH 0x878
00687783  68 04 56 7D 00            PUSH 0x7d5604
00687788  51                        PUSH ECX
00687789  68 72 FF FF FF            PUSH 0xffffff72
0068778E  E8 AD E6 01 00            CALL 0x006a5e40
LAB_00687793:
00687793  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687799  75 1B                     JNZ 0x006877b6
0068779B  68 78 08 00 00            PUSH 0x878
LAB_006877a0:
006877A0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006877A6  68 04 56 7D 00            PUSH 0x7d5604
006877AB  52                        PUSH EDX
006877AC  68 71 FF FF FF            PUSH 0xffffff71
006877B1  E8 8A E6 01 00            CALL 0x006a5e40
LAB_006877b6:
006877B6  6A 03                     PUSH 0x3
006877B8  E9 B1 1D 00 00            JMP 0x0068956e
switchD_006874db::caseD_518:
006877BD  E8 0E A5 D7 FF            CALL 0x00401cd0
006877C2  8B F0                     MOV ESI,EAX
006877C4  3B F3                     CMP ESI,EBX
006877C6  75 1A                     JNZ 0x006877e2
006877C8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006877CD  68 79 08 00 00            PUSH 0x879
006877D2  68 04 56 7D 00            PUSH 0x7d5604
006877D7  50                        PUSH EAX
006877D8  68 72 FF FF FF            PUSH 0xffffff72
006877DD  E8 5E E6 01 00            CALL 0x006a5e40
LAB_006877e2:
006877E2  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006877E8  75 1B                     JNZ 0x00687805
006877EA  68 79 08 00 00            PUSH 0x879
LAB_006877ef:
006877EF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006877F5  68 04 56 7D 00            PUSH 0x7d5604
006877FA  51                        PUSH ECX
006877FB  68 71 FF FF FF            PUSH 0xffffff71
00687800  E8 3B E6 01 00            CALL 0x006a5e40
LAB_00687805:
00687805  6A 04                     PUSH 0x4
00687807  E9 C1 1D 00 00            JMP 0x006895cd
switchD_006874db::caseD_519:
0068780C  E8 BF A4 D7 FF            CALL 0x00401cd0
00687811  8B F0                     MOV ESI,EAX
00687813  3B F3                     CMP ESI,EBX
00687815  75 1B                     JNZ 0x00687832
00687817  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068781D  68 7A 08 00 00            PUSH 0x87a
00687822  68 04 56 7D 00            PUSH 0x7d5604
00687827  51                        PUSH ECX
00687828  68 72 FF FF FF            PUSH 0xffffff72
0068782D  E8 0E E6 01 00            CALL 0x006a5e40
LAB_00687832:
00687832  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687838  75 1B                     JNZ 0x00687855
0068783A  68 7A 08 00 00            PUSH 0x87a
LAB_0068783f:
0068783F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00687845  68 04 56 7D 00            PUSH 0x7d5604
0068784A  52                        PUSH EDX
0068784B  68 71 FF FF FF            PUSH 0xffffff71
00687850  E8 EB E5 01 00            CALL 0x006a5e40
LAB_00687855:
00687855  6A 02                     PUSH 0x2
00687857  E9 12 1D 00 00            JMP 0x0068956e
switchD_006874db::caseD_51a:
0068785C  E8 6F A4 D7 FF            CALL 0x00401cd0
00687861  8B F0                     MOV ESI,EAX
00687863  3B F3                     CMP ESI,EBX
00687865  75 1A                     JNZ 0x00687881
00687867  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068786C  68 7B 08 00 00            PUSH 0x87b
00687871  68 04 56 7D 00            PUSH 0x7d5604
00687876  50                        PUSH EAX
00687877  68 72 FF FF FF            PUSH 0xffffff72
0068787C  E8 BF E5 01 00            CALL 0x006a5e40
LAB_00687881:
00687881  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687887  75 1B                     JNZ 0x006878a4
00687889  68 7B 08 00 00            PUSH 0x87b
LAB_0068788e:
0068788E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687894  68 04 56 7D 00            PUSH 0x7d5604
00687899  51                        PUSH ECX
0068789A  68 71 FF FF FF            PUSH 0xffffff71
0068789F  E8 9C E5 01 00            CALL 0x006a5e40
LAB_006878a4:
006878A4  6A 02                     PUSH 0x2
006878A6  E9 22 1D 00 00            JMP 0x006895cd
switchD_006874db::caseD_51b:
006878AB  E8 20 A4 D7 FF            CALL 0x00401cd0
006878B0  8B F0                     MOV ESI,EAX
006878B2  3B F3                     CMP ESI,EBX
006878B4  75 1B                     JNZ 0x006878d1
006878B6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006878BC  68 7C 08 00 00            PUSH 0x87c
006878C1  68 04 56 7D 00            PUSH 0x7d5604
006878C6  51                        PUSH ECX
006878C7  68 72 FF FF FF            PUSH 0xffffff72
006878CC  E8 6F E5 01 00            CALL 0x006a5e40
LAB_006878d1:
006878D1  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006878D7  75 1B                     JNZ 0x006878f4
006878D9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006878DF  68 7C 08 00 00            PUSH 0x87c
006878E4  68 04 56 7D 00            PUSH 0x7d5604
006878E9  52                        PUSH EDX
006878EA  68 71 FF FF FF            PUSH 0xffffff71
006878EF  E8 4C E5 01 00            CALL 0x006a5e40
LAB_006878f4:
006878F4  6A 01                     PUSH 0x1
006878F6  6A 01                     PUSH 0x1
006878F8  E8 B2 97 D7 FF            CALL 0x004010af
006878FD  83 C4 08                  ADD ESP,0x8
00687900  E9 71 1C 00 00            JMP 0x00689576
switchD_006874db::caseD_528:
00687905  E8 C6 A3 D7 FF            CALL 0x00401cd0
0068790A  8B F0                     MOV ESI,EAX
0068790C  3B F3                     CMP ESI,EBX
0068790E  75 1A                     JNZ 0x0068792a
00687910  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687915  68 7E 08 00 00            PUSH 0x87e
0068791A  68 04 56 7D 00            PUSH 0x7d5604
0068791F  50                        PUSH EAX
00687920  68 72 FF FF FF            PUSH 0xffffff72
00687925  E8 16 E5 01 00            CALL 0x006a5e40
LAB_0068792a:
0068792A  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687930  0F 85 30 FE FF FF         JNZ 0x00687766
00687936  68 7E 08 00 00            PUSH 0x87e
0068793B  E9 10 FE FF FF            JMP 0x00687750
switchD_006874db::caseD_529:
00687940  E8 8B A3 D7 FF            CALL 0x00401cd0
00687945  8B F0                     MOV ESI,EAX
00687947  3B F3                     CMP ESI,EBX
00687949  75 1B                     JNZ 0x00687966
0068794B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687951  68 7F 08 00 00            PUSH 0x87f
00687956  68 04 56 7D 00            PUSH 0x7d5604
0068795B  51                        PUSH ECX
0068795C  68 72 FF FF FF            PUSH 0xffffff72
00687961  E8 DA E4 01 00            CALL 0x006a5e40
LAB_00687966:
00687966  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068796C  0F 85 E3 FE FF FF         JNZ 0x00687855
00687972  68 7F 08 00 00            PUSH 0x87f
00687977  E9 C3 FE FF FF            JMP 0x0068783f
switchD_006874db::caseD_52a:
0068797C  E8 4F A3 D7 FF            CALL 0x00401cd0
00687981  8B F0                     MOV ESI,EAX
00687983  3B F3                     CMP ESI,EBX
00687985  75 1A                     JNZ 0x006879a1
00687987  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068798C  68 80 08 00 00            PUSH 0x880
00687991  68 04 56 7D 00            PUSH 0x7d5604
00687996  50                        PUSH EAX
00687997  68 72 FF FF FF            PUSH 0xffffff72
0068799C  E8 9F E4 01 00            CALL 0x006a5e40
LAB_006879a1:
006879A1  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006879A7  0F 85 B9 FD FF FF         JNZ 0x00687766
006879AD  68 80 08 00 00            PUSH 0x880
006879B2  E9 99 FD FF FF            JMP 0x00687750
switchD_006874db::caseD_532:
006879B7  E8 14 A3 D7 FF            CALL 0x00401cd0
006879BC  8B F0                     MOV ESI,EAX
006879BE  3B F3                     CMP ESI,EBX
006879C0  75 1B                     JNZ 0x006879dd
006879C2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006879C8  68 82 08 00 00            PUSH 0x882
006879CD  68 04 56 7D 00            PUSH 0x7d5604
006879D2  51                        PUSH ECX
006879D3  68 72 FF FF FF            PUSH 0xffffff72
006879D8  E8 63 E4 01 00            CALL 0x006a5e40
LAB_006879dd:
006879DD  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006879E3  75 1B                     JNZ 0x00687a00
006879E5  68 82 08 00 00            PUSH 0x882
LAB_006879ea:
006879EA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006879F0  68 04 56 7D 00            PUSH 0x7d5604
006879F5  52                        PUSH EDX
006879F6  68 71 FF FF FF            PUSH 0xffffff71
006879FB  E8 40 E4 01 00            CALL 0x006a5e40
LAB_00687a00:
00687A00  6A 01                     PUSH 0x1
00687A02  6A 02                     PUSH 0x2
00687A04  E8 A6 96 D7 FF            CALL 0x004010af
00687A09  83 C4 08                  ADD ESP,0x8
00687A0C  E9 65 1B 00 00            JMP 0x00689576
switchD_006874db::caseD_533:
00687A11  E8 BA A2 D7 FF            CALL 0x00401cd0
00687A16  8B F0                     MOV ESI,EAX
00687A18  3B F3                     CMP ESI,EBX
00687A1A  75 1A                     JNZ 0x00687a36
00687A1C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687A21  68 83 08 00 00            PUSH 0x883
00687A26  68 04 56 7D 00            PUSH 0x7d5604
00687A2B  50                        PUSH EAX
00687A2C  68 72 FF FF FF            PUSH 0xffffff72
00687A31  E8 0A E4 01 00            CALL 0x006a5e40
LAB_00687a36:
00687A36  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687A3C  75 1B                     JNZ 0x00687a59
00687A3E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687A44  68 83 08 00 00            PUSH 0x883
00687A49  68 04 56 7D 00            PUSH 0x7d5604
00687A4E  51                        PUSH ECX
00687A4F  68 71 FF FF FF            PUSH 0xffffff71
00687A54  E8 E7 E3 01 00            CALL 0x006a5e40
LAB_00687a59:
00687A59  6A 01                     PUSH 0x1
00687A5B  6A 04                     PUSH 0x4
00687A5D  E8 4D 96 D7 FF            CALL 0x004010af
00687A62  83 C4 08                  ADD ESP,0x8
00687A65  E9 6B 1B 00 00            JMP 0x006895d5
switchD_006874db::caseD_534:
00687A6A  E8 61 A2 D7 FF            CALL 0x00401cd0
00687A6F  8B F0                     MOV ESI,EAX
00687A71  3B F3                     CMP ESI,EBX
00687A73  75 1B                     JNZ 0x00687a90
00687A75  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687A7B  68 84 08 00 00            PUSH 0x884
00687A80  68 04 56 7D 00            PUSH 0x7d5604
00687A85  51                        PUSH ECX
00687A86  68 72 FF FF FF            PUSH 0xffffff72
00687A8B  E8 B0 E3 01 00            CALL 0x006a5e40
LAB_00687a90:
00687A90  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687A96  75 1B                     JNZ 0x00687ab3
00687A98  68 84 08 00 00            PUSH 0x884
LAB_00687a9d:
00687A9D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00687AA3  68 04 56 7D 00            PUSH 0x7d5604
00687AA8  52                        PUSH EDX
00687AA9  68 71 FF FF FF            PUSH 0xffffff71
00687AAE  E8 8D E3 01 00            CALL 0x006a5e40
LAB_00687ab3:
00687AB3  6A 05                     PUSH 0x5
00687AB5  E9 B4 1A 00 00            JMP 0x0068956e
switchD_006874db::caseD_535:
00687ABA  E8 11 A2 D7 FF            CALL 0x00401cd0
00687ABF  8B F0                     MOV ESI,EAX
00687AC1  3B F3                     CMP ESI,EBX
00687AC3  75 1A                     JNZ 0x00687adf
00687AC5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687ACA  68 85 08 00 00            PUSH 0x885
00687ACF  68 04 56 7D 00            PUSH 0x7d5604
00687AD4  50                        PUSH EAX
00687AD5  68 72 FF FF FF            PUSH 0xffffff72
00687ADA  E8 61 E3 01 00            CALL 0x006a5e40
LAB_00687adf:
00687ADF  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687AE5  75 1B                     JNZ 0x00687b02
00687AE7  68 85 08 00 00            PUSH 0x885
LAB_00687aec:
00687AEC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687AF2  68 04 56 7D 00            PUSH 0x7d5604
00687AF7  51                        PUSH ECX
00687AF8  68 71 FF FF FF            PUSH 0xffffff71
00687AFD  E8 3E E3 01 00            CALL 0x006a5e40
LAB_00687b02:
00687B02  6A 01                     PUSH 0x1
00687B04  6A 03                     PUSH 0x3
00687B06  E8 A4 95 D7 FF            CALL 0x004010af
00687B0B  83 C4 08                  ADD ESP,0x8
00687B0E  E9 C2 1A 00 00            JMP 0x006895d5
switchD_006874db::caseD_536:
00687B13  E8 B8 A1 D7 FF            CALL 0x00401cd0
00687B18  8B F0                     MOV ESI,EAX
00687B1A  3B F3                     CMP ESI,EBX
00687B1C  75 1B                     JNZ 0x00687b39
00687B1E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687B24  68 86 08 00 00            PUSH 0x886
00687B29  68 04 56 7D 00            PUSH 0x7d5604
00687B2E  51                        PUSH ECX
00687B2F  68 72 FF FF FF            PUSH 0xffffff72
00687B34  E8 07 E3 01 00            CALL 0x006a5e40
LAB_00687b39:
00687B39  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687B3F  0F 85 BB FE FF FF         JNZ 0x00687a00
00687B45  68 86 08 00 00            PUSH 0x886
00687B4A  E9 9B FE FF FF            JMP 0x006879ea
switchD_006874db::caseD_537:
00687B4F  E8 7C A1 D7 FF            CALL 0x00401cd0
00687B54  8B F0                     MOV ESI,EAX
00687B56  3B F3                     CMP ESI,EBX
00687B58  75 1A                     JNZ 0x00687b74
00687B5A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687B5F  68 87 08 00 00            PUSH 0x887
00687B64  68 04 56 7D 00            PUSH 0x7d5604
00687B69  50                        PUSH EAX
00687B6A  68 72 FF FF FF            PUSH 0xffffff72
00687B6F  E8 CC E2 01 00            CALL 0x006a5e40
LAB_00687b74:
00687B74  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687B7A  75 1B                     JNZ 0x00687b97
00687B7C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687B82  68 87 08 00 00            PUSH 0x887
00687B87  68 04 56 7D 00            PUSH 0x7d5604
00687B8C  51                        PUSH ECX
00687B8D  68 71 FF FF FF            PUSH 0xffffff71
00687B92  E8 A9 E2 01 00            CALL 0x006a5e40
LAB_00687b97:
00687B97  6A 01                     PUSH 0x1
00687B99  6A 02                     PUSH 0x2
00687B9B  E8 0F 95 D7 FF            CALL 0x004010af
00687BA0  83 C4 08                  ADD ESP,0x8
00687BA3  E9 2D 1A 00 00            JMP 0x006895d5
switchD_006874db::caseD_546:
00687BA8  E8 23 A1 D7 FF            CALL 0x00401cd0
00687BAD  8B F0                     MOV ESI,EAX
00687BAF  3B F3                     CMP ESI,EBX
00687BB1  75 1B                     JNZ 0x00687bce
00687BB3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687BB9  68 89 08 00 00            PUSH 0x889
00687BBE  68 04 56 7D 00            PUSH 0x7d5604
00687BC3  51                        PUSH ECX
00687BC4  68 72 FF FF FF            PUSH 0xffffff72
00687BC9  E8 72 E2 01 00            CALL 0x006a5e40
LAB_00687bce:
00687BCE  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687BD4  75 1B                     JNZ 0x00687bf1
00687BD6  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00687BDC  68 89 08 00 00            PUSH 0x889
00687BE1  68 04 56 7D 00            PUSH 0x7d5604
00687BE6  52                        PUSH EDX
00687BE7  68 71 FF FF FF            PUSH 0xffffff71
00687BEC  E8 4F E2 01 00            CALL 0x006a5e40
LAB_00687bf1:
00687BF1  6A 07                     PUSH 0x7
00687BF3  E9 76 19 00 00            JMP 0x0068956e
switchD_006874db::caseD_547:
00687BF8  E8 D3 A0 D7 FF            CALL 0x00401cd0
00687BFD  8B F0                     MOV ESI,EAX
00687BFF  3B F3                     CMP ESI,EBX
00687C01  75 1A                     JNZ 0x00687c1d
00687C03  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687C08  68 8A 08 00 00            PUSH 0x88a
00687C0D  68 04 56 7D 00            PUSH 0x7d5604
00687C12  50                        PUSH EAX
00687C13  68 72 FF FF FF            PUSH 0xffffff72
00687C18  E8 23 E2 01 00            CALL 0x006a5e40
LAB_00687c1d:
00687C1D  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687C23  0F 85 7B FC FF FF         JNZ 0x006878a4
00687C29  68 8A 08 00 00            PUSH 0x88a
00687C2E  E9 5B FC FF FF            JMP 0x0068788e
switchD_006874db::caseD_548:
00687C33  E8 98 A0 D7 FF            CALL 0x00401cd0
00687C38  8B F0                     MOV ESI,EAX
00687C3A  3B F3                     CMP ESI,EBX
00687C3C  75 1B                     JNZ 0x00687c59
00687C3E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687C44  68 8B 08 00 00            PUSH 0x88b
00687C49  68 04 56 7D 00            PUSH 0x7d5604
00687C4E  51                        PUSH ECX
00687C4F  68 72 FF FF FF            PUSH 0xffffff72
00687C54  E8 E7 E1 01 00            CALL 0x006a5e40
LAB_00687c59:
00687C59  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687C5F  0F 85 F0 FB FF FF         JNZ 0x00687855
00687C65  68 8B 08 00 00            PUSH 0x88b
00687C6A  E9 D0 FB FF FF            JMP 0x0068783f
switchD_006874db::caseD_549:
00687C6F  E8 5C A0 D7 FF            CALL 0x00401cd0
00687C74  8B F0                     MOV ESI,EAX
00687C76  3B F3                     CMP ESI,EBX
00687C78  75 1A                     JNZ 0x00687c94
00687C7A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687C7F  68 8C 08 00 00            PUSH 0x88c
00687C84  68 04 56 7D 00            PUSH 0x7d5604
00687C89  50                        PUSH EAX
00687C8A  68 72 FF FF FF            PUSH 0xffffff72
00687C8F  E8 AC E1 01 00            CALL 0x006a5e40
LAB_00687c94:
00687C94  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687C9A  0F 85 65 FB FF FF         JNZ 0x00687805
00687CA0  68 8C 08 00 00            PUSH 0x88c
00687CA5  E9 45 FB FF FF            JMP 0x006877ef
switchD_006874db::caseD_54a:
00687CAA  E8 21 A0 D7 FF            CALL 0x00401cd0
00687CAF  8B F0                     MOV ESI,EAX
00687CB1  3B F3                     CMP ESI,EBX
00687CB3  75 1B                     JNZ 0x00687cd0
00687CB5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687CBB  68 8D 08 00 00            PUSH 0x88d
00687CC0  68 04 56 7D 00            PUSH 0x7d5604
00687CC5  51                        PUSH ECX
00687CC6  68 72 FF FF FF            PUSH 0xffffff72
00687CCB  E8 70 E1 01 00            CALL 0x006a5e40
LAB_00687cd0:
00687CD0  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687CD6  0F 85 DA FA FF FF         JNZ 0x006877b6
00687CDC  68 8D 08 00 00            PUSH 0x88d
00687CE1  E9 BA FA FF FF            JMP 0x006877a0
switchD_006874db::caseD_54b:
00687CE6  E8 E5 9F D7 FF            CALL 0x00401cd0
00687CEB  8B F0                     MOV ESI,EAX
00687CED  3B F3                     CMP ESI,EBX
00687CEF  75 1A                     JNZ 0x00687d0b
00687CF1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687CF6  68 8E 08 00 00            PUSH 0x88e
00687CFB  68 04 56 7D 00            PUSH 0x7d5604
00687D00  50                        PUSH EAX
00687D01  68 72 FF FF FF            PUSH 0xffffff72
00687D06  E8 35 E1 01 00            CALL 0x006a5e40
LAB_00687d0b:
00687D0B  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687D11  0F 85 8D FB FF FF         JNZ 0x006878a4
00687D17  68 8E 08 00 00            PUSH 0x88e
00687D1C  E9 6D FB FF FF            JMP 0x0068788e
switchD_006874db::caseD_54c:
00687D21  E8 AA 9F D7 FF            CALL 0x00401cd0
00687D26  8B F0                     MOV ESI,EAX
00687D28  3B F3                     CMP ESI,EBX
00687D2A  75 1B                     JNZ 0x00687d47
00687D2C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687D32  68 8F 08 00 00            PUSH 0x88f
00687D37  68 04 56 7D 00            PUSH 0x7d5604
00687D3C  51                        PUSH ECX
00687D3D  68 72 FF FF FF            PUSH 0xffffff72
00687D42  E8 F9 E0 01 00            CALL 0x006a5e40
LAB_00687d47:
00687D47  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687D4D  0F 85 02 FB FF FF         JNZ 0x00687855
00687D53  68 8F 08 00 00            PUSH 0x88f
00687D58  E9 E2 FA FF FF            JMP 0x0068783f
switchD_006874db::caseD_54d:
00687D5D  E8 6E 9F D7 FF            CALL 0x00401cd0
00687D62  8B F0                     MOV ESI,EAX
00687D64  3B F3                     CMP ESI,EBX
00687D66  75 1A                     JNZ 0x00687d82
00687D68  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687D6D  68 90 08 00 00            PUSH 0x890
00687D72  68 04 56 7D 00            PUSH 0x7d5604
00687D77  50                        PUSH EAX
00687D78  68 72 FF FF FF            PUSH 0xffffff72
00687D7D  E8 BE E0 01 00            CALL 0x006a5e40
LAB_00687d82:
00687D82  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687D88  0F 85 D8 F9 FF FF         JNZ 0x00687766
00687D8E  68 90 08 00 00            PUSH 0x890
00687D93  E9 B8 F9 FF FF            JMP 0x00687750
switchD_006874db::caseD_54e:
00687D98  E8 33 9F D7 FF            CALL 0x00401cd0
00687D9D  8B F0                     MOV ESI,EAX
00687D9F  3B F3                     CMP ESI,EBX
00687DA1  75 1B                     JNZ 0x00687dbe
00687DA3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687DA9  68 91 08 00 00            PUSH 0x891
00687DAE  68 04 56 7D 00            PUSH 0x7d5604
00687DB3  51                        PUSH ECX
00687DB4  68 72 FF FF FF            PUSH 0xffffff72
00687DB9  E8 82 E0 01 00            CALL 0x006a5e40
LAB_00687dbe:
00687DBE  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687DC4  0F 85 E9 FC FF FF         JNZ 0x00687ab3
00687DCA  68 91 08 00 00            PUSH 0x891
00687DCF  E9 C9 FC FF FF            JMP 0x00687a9d
switchD_006874db::caseD_55a:
00687DD4  E8 F7 9E D7 FF            CALL 0x00401cd0
00687DD9  8B F0                     MOV ESI,EAX
00687DDB  3B F3                     CMP ESI,EBX
00687DDD  75 1A                     JNZ 0x00687df9
00687DDF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687DE4  68 93 08 00 00            PUSH 0x893
00687DE9  68 04 56 7D 00            PUSH 0x7d5604
00687DEE  50                        PUSH EAX
00687DEF  68 72 FF FF FF            PUSH 0xffffff72
00687DF4  E8 47 E0 01 00            CALL 0x006a5e40
LAB_00687df9:
00687DF9  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687DFF  0F 85 61 F9 FF FF         JNZ 0x00687766
00687E05  68 93 08 00 00            PUSH 0x893
00687E0A  E9 41 F9 FF FF            JMP 0x00687750
switchD_006874db::caseD_55b:
00687E0F  E8 BC 9E D7 FF            CALL 0x00401cd0
00687E14  8B F0                     MOV ESI,EAX
00687E16  3B F3                     CMP ESI,EBX
00687E18  75 1B                     JNZ 0x00687e35
00687E1A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687E20  68 94 08 00 00            PUSH 0x894
00687E25  68 04 56 7D 00            PUSH 0x7d5604
00687E2A  51                        PUSH ECX
00687E2B  68 72 FF FF FF            PUSH 0xffffff72
00687E30  E8 0B E0 01 00            CALL 0x006a5e40
LAB_00687e35:
00687E35  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687E3B  0F 85 BF FB FF FF         JNZ 0x00687a00
00687E41  68 94 08 00 00            PUSH 0x894
00687E46  E9 9F FB FF FF            JMP 0x006879ea
switchD_006874db::caseD_55c:
00687E4B  E8 80 9E D7 FF            CALL 0x00401cd0
00687E50  8B F0                     MOV ESI,EAX
00687E52  3B F3                     CMP ESI,EBX
00687E54  75 1A                     JNZ 0x00687e70
00687E56  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687E5B  68 95 08 00 00            PUSH 0x895
00687E60  68 04 56 7D 00            PUSH 0x7d5604
00687E65  50                        PUSH EAX
00687E66  68 72 FF FF FF            PUSH 0xffffff72
00687E6B  E8 D0 DF 01 00            CALL 0x006a5e40
LAB_00687e70:
00687E70  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687E76  0F 85 EA F8 FF FF         JNZ 0x00687766
00687E7C  68 95 08 00 00            PUSH 0x895
00687E81  E9 CA F8 FF FF            JMP 0x00687750
switchD_006874db::caseD_55d:
00687E86  E8 45 9E D7 FF            CALL 0x00401cd0
00687E8B  8B F0                     MOV ESI,EAX
00687E8D  3B F3                     CMP ESI,EBX
00687E8F  75 1B                     JNZ 0x00687eac
00687E91  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687E97  68 96 08 00 00            PUSH 0x896
00687E9C  68 04 56 7D 00            PUSH 0x7d5604
00687EA1  51                        PUSH ECX
00687EA2  68 72 FF FF FF            PUSH 0xffffff72
00687EA7  E8 94 DF 01 00            CALL 0x006a5e40
LAB_00687eac:
00687EAC  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687EB2  0F 85 8B 00 00 00         JNZ 0x00687f43
00687EB8  68 96 08 00 00            PUSH 0x896
00687EBD  EB 6E                     JMP 0x00687f2d
switchD_006874db::caseD_55e:
00687EBF  E8 0C 9E D7 FF            CALL 0x00401cd0
00687EC4  8B F0                     MOV ESI,EAX
00687EC6  3B F3                     CMP ESI,EBX
00687EC8  75 1A                     JNZ 0x00687ee4
00687ECA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687ECF  68 97 08 00 00            PUSH 0x897
00687ED4  68 04 56 7D 00            PUSH 0x7d5604
00687ED9  50                        PUSH EAX
00687EDA  68 72 FF FF FF            PUSH 0xffffff72
00687EDF  E8 5C DF 01 00            CALL 0x006a5e40
LAB_00687ee4:
00687EE4  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687EEA  0F 85 12 FC FF FF         JNZ 0x00687b02
00687EF0  68 97 08 00 00            PUSH 0x897
00687EF5  E9 F2 FB FF FF            JMP 0x00687aec
switchD_006874db::caseD_55f:
00687EFA  E8 D1 9D D7 FF            CALL 0x00401cd0
00687EFF  8B F0                     MOV ESI,EAX
00687F01  3B F3                     CMP ESI,EBX
00687F03  75 1B                     JNZ 0x00687f20
00687F05  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687F0B  68 98 08 00 00            PUSH 0x898
00687F10  68 04 56 7D 00            PUSH 0x7d5604
00687F15  51                        PUSH ECX
00687F16  68 72 FF FF FF            PUSH 0xffffff72
00687F1B  E8 20 DF 01 00            CALL 0x006a5e40
LAB_00687f20:
00687F20  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687F26  75 1B                     JNZ 0x00687f43
00687F28  68 98 08 00 00            PUSH 0x898
LAB_00687f2d:
00687F2D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00687F33  68 04 56 7D 00            PUSH 0x7d5604
00687F38  52                        PUSH EDX
00687F39  68 71 FF FF FF            PUSH 0xffffff71
00687F3E  E8 FD DE 01 00            CALL 0x006a5e40
LAB_00687f43:
00687F43  6A 01                     PUSH 0x1
00687F45  6A 03                     PUSH 0x3
00687F47  E8 63 91 D7 FF            CALL 0x004010af
00687F4C  83 C4 08                  ADD ESP,0x8
00687F4F  E9 22 16 00 00            JMP 0x00689576
switchD_006874db::caseD_560:
00687F54  E8 77 9D D7 FF            CALL 0x00401cd0
00687F59  8B F0                     MOV ESI,EAX
00687F5B  3B F3                     CMP ESI,EBX
00687F5D  75 1A                     JNZ 0x00687f79
00687F5F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687F64  68 99 08 00 00            PUSH 0x899
00687F69  68 04 56 7D 00            PUSH 0x7d5604
00687F6E  50                        PUSH EAX
00687F6F  68 72 FF FF FF            PUSH 0xffffff72
00687F74  E8 C7 DE 01 00            CALL 0x006a5e40
LAB_00687f79:
00687F79  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687F7F  0F 85 E1 F7 FF FF         JNZ 0x00687766
00687F85  68 99 08 00 00            PUSH 0x899
00687F8A  E9 C1 F7 FF FF            JMP 0x00687750
switchD_006874db::caseD_561:
00687F8F  E8 3C 9D D7 FF            CALL 0x00401cd0
00687F94  8B F0                     MOV ESI,EAX
00687F96  3B F3                     CMP ESI,EBX
00687F98  75 1B                     JNZ 0x00687fb5
00687F9A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00687FA0  68 9A 08 00 00            PUSH 0x89a
00687FA5  68 04 56 7D 00            PUSH 0x7d5604
00687FAA  51                        PUSH ECX
00687FAB  68 72 FF FF FF            PUSH 0xffffff72
00687FB0  E8 8B DE 01 00            CALL 0x006a5e40
LAB_00687fb5:
00687FB5  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687FBB  0F 85 94 F8 FF FF         JNZ 0x00687855
00687FC1  68 9A 08 00 00            PUSH 0x89a
00687FC6  E9 74 F8 FF FF            JMP 0x0068783f
switchD_006874db::caseD_562:
00687FCB  E8 00 9D D7 FF            CALL 0x00401cd0
00687FD0  8B F0                     MOV ESI,EAX
00687FD2  3B F3                     CMP ESI,EBX
00687FD4  75 1A                     JNZ 0x00687ff0
00687FD6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00687FDB  68 9B 08 00 00            PUSH 0x89b
00687FE0  68 04 56 7D 00            PUSH 0x7d5604
00687FE5  50                        PUSH EAX
00687FE6  68 72 FF FF FF            PUSH 0xffffff72
00687FEB  E8 50 DE 01 00            CALL 0x006a5e40
LAB_00687ff0:
00687FF0  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00687FF6  0F 85 06 FB FF FF         JNZ 0x00687b02
00687FFC  68 9B 08 00 00            PUSH 0x89b
00688001  E9 E6 FA FF FF            JMP 0x00687aec
switchD_006874db::caseD_563:
00688006  E8 C5 9C D7 FF            CALL 0x00401cd0
0068800B  8B F0                     MOV ESI,EAX
0068800D  3B F3                     CMP ESI,EBX
0068800F  75 1B                     JNZ 0x0068802c
00688011  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688017  68 9C 08 00 00            PUSH 0x89c
0068801C  68 04 56 7D 00            PUSH 0x7d5604
00688021  51                        PUSH ECX
00688022  68 72 FF FF FF            PUSH 0xffffff72
00688027  E8 14 DE 01 00            CALL 0x006a5e40
LAB_0068802c:
0068802C  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688032  0F 85 7E F7 FF FF         JNZ 0x006877b6
00688038  68 9C 08 00 00            PUSH 0x89c
0068803D  E9 5E F7 FF FF            JMP 0x006877a0
switchD_006874db::caseD_564:
00688042  E8 89 9C D7 FF            CALL 0x00401cd0
00688047  8B F0                     MOV ESI,EAX
00688049  3B F3                     CMP ESI,EBX
0068804B  75 1A                     JNZ 0x00688067
0068804D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688052  68 9D 08 00 00            PUSH 0x89d
00688057  68 04 56 7D 00            PUSH 0x7d5604
0068805C  50                        PUSH EAX
0068805D  68 72 FF FF FF            PUSH 0xffffff72
00688062  E8 D9 DD 01 00            CALL 0x006a5e40
LAB_00688067:
00688067  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068806D  0F 85 31 F8 FF FF         JNZ 0x006878a4
00688073  68 9D 08 00 00            PUSH 0x89d
00688078  E9 11 F8 FF FF            JMP 0x0068788e
switchD_006874db::caseD_565:
0068807D  E8 4E 9C D7 FF            CALL 0x00401cd0
00688082  8B F0                     MOV ESI,EAX
00688084  3B F3                     CMP ESI,EBX
00688086  75 1B                     JNZ 0x006880a3
00688088  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068808E  68 9E 08 00 00            PUSH 0x89e
00688093  68 04 56 7D 00            PUSH 0x7d5604
00688098  51                        PUSH ECX
00688099  68 72 FF FF FF            PUSH 0xffffff72
0068809E  E8 9D DD 01 00            CALL 0x006a5e40
LAB_006880a3:
006880A3  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006880A9  0F 85 07 F7 FF FF         JNZ 0x006877b6
006880AF  68 9E 08 00 00            PUSH 0x89e
006880B4  E9 E7 F6 FF FF            JMP 0x006877a0
switchD_006874db::caseD_566:
006880B9  E8 12 9C D7 FF            CALL 0x00401cd0
006880BE  8B F0                     MOV ESI,EAX
006880C0  3B F3                     CMP ESI,EBX
006880C2  75 1A                     JNZ 0x006880de
006880C4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006880C9  68 9F 08 00 00            PUSH 0x89f
006880CE  68 04 56 7D 00            PUSH 0x7d5604
006880D3  50                        PUSH EAX
006880D4  68 72 FF FF FF            PUSH 0xffffff72
006880D9  E8 62 DD 01 00            CALL 0x006a5e40
LAB_006880de:
006880DE  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006880E4  0F 85 7C F6 FF FF         JNZ 0x00687766
006880EA  68 9F 08 00 00            PUSH 0x89f
006880EF  E9 5C F6 FF FF            JMP 0x00687750
LAB_006880f4:
006880F4  E8 D7 9B D7 FF            CALL 0x00401cd0
006880F9  8B F0                     MOV ESI,EAX
006880FB  3B F3                     CMP ESI,EBX
006880FD  75 1B                     JNZ 0x0068811a
006880FF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688105  68 A0 08 00 00            PUSH 0x8a0
0068810A  68 04 56 7D 00            PUSH 0x7d5604
0068810F  51                        PUSH ECX
00688110  68 72 FF FF FF            PUSH 0xffffff72
00688115  E8 26 DD 01 00            CALL 0x006a5e40
LAB_0068811a:
0068811A  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688120  0F 85 90 F6 FF FF         JNZ 0x006877b6
00688126  68 A0 08 00 00            PUSH 0x8a0
0068812B  E9 70 F6 FF FF            JMP 0x006877a0
LAB_00688130:
00688130  3D B6 05 00 00            CMP EAX,0x5b6
00688135  0F 8F 9E 0A 00 00         JG 0x00688bd9
0068813B  0F 84 5C 0A 00 00         JZ 0x00688b9d
00688141  05 98 FA FF FF            ADD EAX,0xfffffa98
00688146  83 F8 4D                  CMP EAX,0x4d
00688149  0F 87 AF 15 00 00         JA 0x006896fe
0068814F  33 C9                     XOR ECX,ECX
00688151  8A 88 C0 AE 68 00         MOV CL,byte ptr [EAX + 0x68aec0]
switchD_00688157::switchD:
00688157  FF 24 8D 18 AE 68 00      JMP dword ptr [ECX*0x4 + 0x68ae18]
switchD_00688157::caseD_568:
0068815E  E8 6D 9B D7 FF            CALL 0x00401cd0
00688163  8B F0                     MOV ESI,EAX
00688165  3B F3                     CMP ESI,EBX
00688167  75 1B                     JNZ 0x00688184
00688169  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068816F  68 A1 08 00 00            PUSH 0x8a1
00688174  68 04 56 7D 00            PUSH 0x7d5604
00688179  52                        PUSH EDX
0068817A  68 72 FF FF FF            PUSH 0xffffff72
0068817F  E8 BC DC 01 00            CALL 0x006a5e40
LAB_00688184:
00688184  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068818A  0F 85 14 F7 FF FF         JNZ 0x006878a4
00688190  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688195  68 A1 08 00 00            PUSH 0x8a1
0068819A  68 04 56 7D 00            PUSH 0x7d5604
0068819F  50                        PUSH EAX
006881A0  68 71 FF FF FF            PUSH 0xffffff71
006881A5  E8 96 DC 01 00            CALL 0x006a5e40
006881AA  6A 02                     PUSH 0x2
006881AC  E9 1C 14 00 00            JMP 0x006895cd
switchD_00688157::caseD_569:
006881B1  E8 1A 9B D7 FF            CALL 0x00401cd0
006881B6  8B F0                     MOV ESI,EAX
006881B8  3B F3                     CMP ESI,EBX
006881BA  75 1B                     JNZ 0x006881d7
006881BC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006881C2  68 A2 08 00 00            PUSH 0x8a2
006881C7  68 04 56 7D 00            PUSH 0x7d5604
006881CC  51                        PUSH ECX
006881CD  68 72 FF FF FF            PUSH 0xffffff72
006881D2  E8 69 DC 01 00            CALL 0x006a5e40
LAB_006881d7:
006881D7  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006881DD  0F 85 72 F6 FF FF         JNZ 0x00687855
006881E3  68 A2 08 00 00            PUSH 0x8a2
006881E8  E9 52 F6 FF FF            JMP 0x0068783f
switchD_00688157::caseD_56a:
006881ED  E8 DE 9A D7 FF            CALL 0x00401cd0
006881F2  8B F0                     MOV ESI,EAX
006881F4  3B F3                     CMP ESI,EBX
006881F6  75 1A                     JNZ 0x00688212
006881F8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006881FD  68 A3 08 00 00            PUSH 0x8a3
00688202  68 04 56 7D 00            PUSH 0x7d5604
00688207  50                        PUSH EAX
00688208  68 72 FF FF FF            PUSH 0xffffff72
0068820D  E8 2E DC 01 00            CALL 0x006a5e40
LAB_00688212:
00688212  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688218  75 1B                     JNZ 0x00688235
0068821A  68 A3 08 00 00            PUSH 0x8a3
LAB_0068821f:
0068821F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688225  68 04 56 7D 00            PUSH 0x7d5604
0068822A  51                        PUSH ECX
0068822B  68 71 FF FF FF            PUSH 0xffffff71
00688230  E8 0B DC 01 00            CALL 0x006a5e40
LAB_00688235:
00688235  6A 01                     PUSH 0x1
00688237  E9 91 13 00 00            JMP 0x006895cd
switchD_00688157::caseD_585:
0068823C  E8 8F 9A D7 FF            CALL 0x00401cd0
00688241  8B F0                     MOV ESI,EAX
00688243  3B F3                     CMP ESI,EBX
00688245  75 1B                     JNZ 0x00688262
00688247  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068824D  68 A4 08 00 00            PUSH 0x8a4
00688252  68 04 56 7D 00            PUSH 0x7d5604
00688257  51                        PUSH ECX
00688258  68 72 FF FF FF            PUSH 0xffffff72
0068825D  E8 DE DB 01 00            CALL 0x006a5e40
LAB_00688262:
00688262  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688268  0F 85 A6 F4 FF FF         JNZ 0x00687714
0068826E  68 A4 08 00 00            PUSH 0x8a4
00688273  E9 86 F4 FF FF            JMP 0x006876fe
switchD_00688157::caseD_578:
00688278  E8 53 9A D7 FF            CALL 0x00401cd0
0068827D  8B F0                     MOV ESI,EAX
0068827F  3B F3                     CMP ESI,EBX
00688281  75 1A                     JNZ 0x0068829d
00688283  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688288  68 A6 08 00 00            PUSH 0x8a6
0068828D  68 04 56 7D 00            PUSH 0x7d5604
00688292  50                        PUSH EAX
00688293  68 72 FF FF FF            PUSH 0xffffff72
00688298  E8 A3 DB 01 00            CALL 0x006a5e40
LAB_0068829d:
0068829D  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006882A3  0F 85 BD F4 FF FF         JNZ 0x00687766
006882A9  68 A6 08 00 00            PUSH 0x8a6
006882AE  E9 9D F4 FF FF            JMP 0x00687750
switchD_00688157::caseD_579:
006882B3  E8 18 9A D7 FF            CALL 0x00401cd0
006882B8  8B F0                     MOV ESI,EAX
006882BA  3B F3                     CMP ESI,EBX
006882BC  75 1B                     JNZ 0x006882d9
006882BE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006882C4  68 A7 08 00 00            PUSH 0x8a7
006882C9  68 04 56 7D 00            PUSH 0x7d5604
006882CE  51                        PUSH ECX
006882CF  68 72 FF FF FF            PUSH 0xffffff72
006882D4  E8 67 DB 01 00            CALL 0x006a5e40
LAB_006882d9:
006882D9  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006882DF  75 1B                     JNZ 0x006882fc
006882E1  68 A7 08 00 00            PUSH 0x8a7
LAB_006882e6:
006882E6  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006882EC  68 04 56 7D 00            PUSH 0x7d5604
006882F1  52                        PUSH EDX
006882F2  68 71 FF FF FF            PUSH 0xffffff71
006882F7  E8 44 DB 01 00            CALL 0x006a5e40
LAB_006882fc:
006882FC  6A 04                     PUSH 0x4
006882FE  E9 6B 12 00 00            JMP 0x0068956e
switchD_00688157::caseD_57a:
00688303  E8 C8 99 D7 FF            CALL 0x00401cd0
00688308  8B F0                     MOV ESI,EAX
0068830A  3B F3                     CMP ESI,EBX
0068830C  75 1A                     JNZ 0x00688328
0068830E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688313  68 A8 08 00 00            PUSH 0x8a8
00688318  68 04 56 7D 00            PUSH 0x7d5604
0068831D  50                        PUSH EAX
0068831E  68 72 FF FF FF            PUSH 0xffffff72
00688323  E8 18 DB 01 00            CALL 0x006a5e40
LAB_00688328:
00688328  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068832E  0F 85 01 FF FF FF         JNZ 0x00688235
00688334  68 A8 08 00 00            PUSH 0x8a8
00688339  E9 E1 FE FF FF            JMP 0x0068821f
switchD_00688157::caseD_57b:
0068833E  E8 8D 99 D7 FF            CALL 0x00401cd0
00688343  8B F0                     MOV ESI,EAX
00688345  3B F3                     CMP ESI,EBX
00688347  75 1B                     JNZ 0x00688364
00688349  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068834F  68 A9 08 00 00            PUSH 0x8a9
00688354  68 04 56 7D 00            PUSH 0x7d5604
00688359  51                        PUSH ECX
0068835A  68 72 FF FF FF            PUSH 0xffffff72
0068835F  E8 DC DA 01 00            CALL 0x006a5e40
LAB_00688364:
00688364  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068836A  0F 85 46 F4 FF FF         JNZ 0x006877b6
00688370  68 A9 08 00 00            PUSH 0x8a9
00688375  E9 26 F4 FF FF            JMP 0x006877a0
switchD_00688157::caseD_582:
0068837A  E8 51 99 D7 FF            CALL 0x00401cd0
0068837F  8B F0                     MOV ESI,EAX
00688381  3B F3                     CMP ESI,EBX
00688383  75 1A                     JNZ 0x0068839f
00688385  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068838A  68 AB 08 00 00            PUSH 0x8ab
0068838F  68 04 56 7D 00            PUSH 0x7d5604
00688394  50                        PUSH EAX
00688395  68 72 FF FF FF            PUSH 0xffffff72
0068839A  E8 A1 DA 01 00            CALL 0x006a5e40
LAB_0068839f:
0068839F  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006883A5  75 1B                     JNZ 0x006883c2
006883A7  68 AB 08 00 00            PUSH 0x8ab
LAB_006883ac:
006883AC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006883B2  68 04 56 7D 00            PUSH 0x7d5604
006883B7  51                        PUSH ECX
006883B8  68 71 FF FF FF            PUSH 0xffffff71
006883BD  E8 7E DA 01 00            CALL 0x006a5e40
LAB_006883c2:
006883C2  6A 05                     PUSH 0x5
006883C4  E9 04 12 00 00            JMP 0x006895cd
switchD_00688157::caseD_583:
006883C9  E8 02 99 D7 FF            CALL 0x00401cd0
006883CE  8B F0                     MOV ESI,EAX
006883D0  3B F3                     CMP ESI,EBX
006883D2  75 1B                     JNZ 0x006883ef
006883D4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006883DA  68 AC 08 00 00            PUSH 0x8ac
006883DF  68 04 56 7D 00            PUSH 0x7d5604
006883E4  51                        PUSH ECX
006883E5  68 72 FF FF FF            PUSH 0xffffff72
006883EA  E8 51 DA 01 00            CALL 0x006a5e40
LAB_006883ef:
006883EF  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006883F5  0F 85 5A F4 FF FF         JNZ 0x00687855
006883FB  68 AC 08 00 00            PUSH 0x8ac
00688400  E9 3A F4 FF FF            JMP 0x0068783f
switchD_00688157::caseD_584:
00688405  E8 C6 98 D7 FF            CALL 0x00401cd0
0068840A  8B F0                     MOV ESI,EAX
0068840C  3B F3                     CMP ESI,EBX
0068840E  75 1A                     JNZ 0x0068842a
00688410  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688415  68 AD 08 00 00            PUSH 0x8ad
0068841A  68 04 56 7D 00            PUSH 0x7d5604
0068841F  50                        PUSH EAX
00688420  68 72 FF FF FF            PUSH 0xffffff72
00688425  E8 16 DA 01 00            CALL 0x006a5e40
LAB_0068842a:
0068842A  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688430  0F 85 FF FD FF FF         JNZ 0x00688235
00688436  68 AD 08 00 00            PUSH 0x8ad
0068843B  E9 DF FD FF FF            JMP 0x0068821f
switchD_00688157::caseD_595:
00688440  E8 8B 98 D7 FF            CALL 0x00401cd0
00688445  8B F0                     MOV ESI,EAX
00688447  3B F3                     CMP ESI,EBX
00688449  75 1B                     JNZ 0x00688466
0068844B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688451  68 AE 08 00 00            PUSH 0x8ae
00688456  68 04 56 7D 00            PUSH 0x7d5604
0068845B  51                        PUSH ECX
0068845C  68 72 FF FF FF            PUSH 0xffffff72
00688461  E8 DA D9 01 00            CALL 0x006a5e40
LAB_00688466:
00688466  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068846C  0F 85 8A FE FF FF         JNZ 0x006882fc
00688472  68 AE 08 00 00            PUSH 0x8ae
00688477  E9 6A FE FF FF            JMP 0x006882e6
switchD_00688157::caseD_596:
0068847C  E8 4F 98 D7 FF            CALL 0x00401cd0
00688481  8B F0                     MOV ESI,EAX
00688483  3B F3                     CMP ESI,EBX
00688485  75 1A                     JNZ 0x006884a1
00688487  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068848C  68 AF 08 00 00            PUSH 0x8af
00688491  68 04 56 7D 00            PUSH 0x7d5604
00688496  50                        PUSH EAX
00688497  68 72 FF FF FF            PUSH 0xffffff72
0068849C  E8 9F D9 01 00            CALL 0x006a5e40
LAB_006884a1:
006884A1  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006884A7  0F 85 14 F2 FF FF         JNZ 0x006876c1
006884AD  68 AF 08 00 00            PUSH 0x8af
006884B2  E9 F4 F1 FF FF            JMP 0x006876ab
switchD_00688157::caseD_597:
006884B7  E8 14 98 D7 FF            CALL 0x00401cd0
006884BC  8B F0                     MOV ESI,EAX
006884BE  3B F3                     CMP ESI,EBX
006884C0  75 1B                     JNZ 0x006884dd
006884C2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006884C8  68 B0 08 00 00            PUSH 0x8b0
006884CD  68 04 56 7D 00            PUSH 0x7d5604
006884D2  51                        PUSH ECX
006884D3  68 72 FF FF FF            PUSH 0xffffff72
006884D8  E8 63 D9 01 00            CALL 0x006a5e40
LAB_006884dd:
006884DD  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006884E3  0F 85 6C F3 FF FF         JNZ 0x00687855
006884E9  68 B0 08 00 00            PUSH 0x8b0
006884EE  E9 4C F3 FF FF            JMP 0x0068783f
switchD_00688157::caseD_58d:
006884F3  E8 D8 97 D7 FF            CALL 0x00401cd0
006884F8  8B F0                     MOV ESI,EAX
006884FA  3B F3                     CMP ESI,EBX
006884FC  75 1A                     JNZ 0x00688518
006884FE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688503  68 B1 08 00 00            PUSH 0x8b1
00688508  68 04 56 7D 00            PUSH 0x7d5604
0068850D  50                        PUSH EAX
0068850E  68 72 FF FF FF            PUSH 0xffffff72
00688513  E8 28 D9 01 00            CALL 0x006a5e40
LAB_00688518:
00688518  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068851E  0F 85 42 F2 FF FF         JNZ 0x00687766
00688524  68 B1 08 00 00            PUSH 0x8b1
00688529  E9 22 F2 FF FF            JMP 0x00687750
switchD_00688157::caseD_58e:
0068852E  E8 9D 97 D7 FF            CALL 0x00401cd0
00688533  8B F0                     MOV ESI,EAX
00688535  3B F3                     CMP ESI,EBX
00688537  75 1B                     JNZ 0x00688554
00688539  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068853F  68 B2 08 00 00            PUSH 0x8b2
00688544  68 04 56 7D 00            PUSH 0x7d5604
00688549  51                        PUSH ECX
0068854A  68 72 FF FF FF            PUSH 0xffffff72
0068854F  E8 EC D8 01 00            CALL 0x006a5e40
LAB_00688554:
00688554  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068855A  0F 85 F5 F2 FF FF         JNZ 0x00687855
00688560  68 B2 08 00 00            PUSH 0x8b2
00688565  E9 D5 F2 FF FF            JMP 0x0068783f
switchD_00688157::caseD_58f:
0068856A  E8 61 97 D7 FF            CALL 0x00401cd0
0068856F  8B F0                     MOV ESI,EAX
00688571  3B F3                     CMP ESI,EBX
00688573  75 1A                     JNZ 0x0068858f
00688575  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068857A  68 B3 08 00 00            PUSH 0x8b3
0068857F  68 04 56 7D 00            PUSH 0x7d5604
00688584  50                        PUSH EAX
00688585  68 72 FF FF FF            PUSH 0xffffff72
0068858A  E8 B1 D8 01 00            CALL 0x006a5e40
LAB_0068858f:
0068858F  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688595  0F 85 09 F3 FF FF         JNZ 0x006878a4
0068859B  68 B3 08 00 00            PUSH 0x8b3
006885A0  E9 E9 F2 FF FF            JMP 0x0068788e
switchD_00688157::caseD_58c:
006885A5  E8 26 97 D7 FF            CALL 0x00401cd0
006885AA  8B F0                     MOV ESI,EAX
006885AC  3B F3                     CMP ESI,EBX
006885AE  75 1B                     JNZ 0x006885cb
006885B0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006885B6  68 B4 08 00 00            PUSH 0x8b4
006885BB  68 04 56 7D 00            PUSH 0x7d5604
006885C0  51                        PUSH ECX
006885C1  68 72 FF FF FF            PUSH 0xffffff72
006885C6  E8 75 D8 01 00            CALL 0x006a5e40
LAB_006885cb:
006885CB  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006885D1  75 1B                     JNZ 0x006885ee
006885D3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006885D9  68 B4 08 00 00            PUSH 0x8b4
006885DE  68 04 56 7D 00            PUSH 0x7d5604
006885E3  52                        PUSH EDX
006885E4  68 71 FF FF FF            PUSH 0xffffff71
006885E9  E8 52 D8 01 00            CALL 0x006a5e40
LAB_006885ee:
006885EE  6A 03                     PUSH 0x3
006885F0  6A 01                     PUSH 0x1
006885F2  E8 11 B9 D7 FF            CALL 0x00403f08
006885F7  83 C4 08                  ADD ESP,0x8
006885FA  E9 77 0F 00 00            JMP 0x00689576
switchD_00688157::caseD_590:
006885FF  E8 CC 96 D7 FF            CALL 0x00401cd0
00688604  8B F0                     MOV ESI,EAX
00688606  3B F3                     CMP ESI,EBX
00688608  75 1A                     JNZ 0x00688624
0068860A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068860F  68 B5 08 00 00            PUSH 0x8b5
00688614  68 04 56 7D 00            PUSH 0x7d5604
00688619  50                        PUSH EAX
0068861A  68 72 FF FF FF            PUSH 0xffffff72
0068861F  E8 1C D8 01 00            CALL 0x006a5e40
LAB_00688624:
00688624  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068862A  0F 85 9B 0F 00 00         JNZ 0x006895cb
00688630  68 B5 08 00 00            PUSH 0x8b5
00688635  E9 7B 0F 00 00            JMP 0x006895b5
switchD_00688157::caseD_591:
0068863A  E8 91 96 D7 FF            CALL 0x00401cd0
0068863F  8B F0                     MOV ESI,EAX
00688641  3B F3                     CMP ESI,EBX
00688643  75 1B                     JNZ 0x00688660
00688645  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068864B  68 B6 08 00 00            PUSH 0x8b6
00688650  68 04 56 7D 00            PUSH 0x7d5604
00688655  51                        PUSH ECX
00688656  68 72 FF FF FF            PUSH 0xffffff72
0068865B  E8 E0 D7 01 00            CALL 0x006a5e40
LAB_00688660:
00688660  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688666  0F 85 E9 F1 FF FF         JNZ 0x00687855
0068866C  68 B6 08 00 00            PUSH 0x8b6
00688671  E9 C9 F1 FF FF            JMP 0x0068783f
switchD_00688157::caseD_592:
00688676  E8 55 96 D7 FF            CALL 0x00401cd0
0068867B  8B F0                     MOV ESI,EAX
0068867D  3B F3                     CMP ESI,EBX
0068867F  75 1A                     JNZ 0x0068869b
00688681  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688686  68 B7 08 00 00            PUSH 0x8b7
0068868B  68 04 56 7D 00            PUSH 0x7d5604
00688690  50                        PUSH EAX
00688691  68 72 FF FF FF            PUSH 0xffffff72
00688696  E8 A5 D7 01 00            CALL 0x006a5e40
LAB_0068869b:
0068869B  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006886A1  0F 85 1B FD FF FF         JNZ 0x006883c2
006886A7  68 B7 08 00 00            PUSH 0x8b7
006886AC  E9 FB FC FF FF            JMP 0x006883ac
switchD_00688157::caseD_593:
006886B1  E8 1A 96 D7 FF            CALL 0x00401cd0
006886B6  8B F0                     MOV ESI,EAX
006886B8  3B F3                     CMP ESI,EBX
006886BA  75 1B                     JNZ 0x006886d7
006886BC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006886C2  68 B8 08 00 00            PUSH 0x8b8
006886C7  68 04 56 7D 00            PUSH 0x7d5604
006886CC  51                        PUSH ECX
006886CD  68 72 FF FF FF            PUSH 0xffffff72
006886D2  E8 69 D7 01 00            CALL 0x006a5e40
LAB_006886d7:
006886D7  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006886DD  0F 85 31 F0 FF FF         JNZ 0x00687714
006886E3  68 B8 08 00 00            PUSH 0x8b8
006886E8  E9 11 F0 FF FF            JMP 0x006876fe
switchD_00688157::caseD_594:
006886ED  E8 DE 95 D7 FF            CALL 0x00401cd0
006886F2  8B F0                     MOV ESI,EAX
006886F4  3B F3                     CMP ESI,EBX
006886F6  75 1A                     JNZ 0x00688712
006886F8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006886FD  68 B9 08 00 00            PUSH 0x8b9
00688702  68 04 56 7D 00            PUSH 0x7d5604
00688707  50                        PUSH EAX
00688708  68 72 FF FF FF            PUSH 0xffffff72
0068870D  E8 2E D7 01 00            CALL 0x006a5e40
LAB_00688712:
00688712  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688718  75 1B                     JNZ 0x00688735
0068871A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688720  68 B9 08 00 00            PUSH 0x8b9
00688725  68 04 56 7D 00            PUSH 0x7d5604
0068872A  51                        PUSH ECX
0068872B  68 71 FF FF FF            PUSH 0xffffff71
00688730  E8 0B D7 01 00            CALL 0x006a5e40
LAB_00688735:
00688735  6A 02                     PUSH 0x2
00688737  E8 00 A7 D7 FF            CALL 0x00402e3c
0068873C  E9 91 0E 00 00            JMP 0x006895d2
switchD_00688157::caseD_598:
00688741  E8 8A 95 D7 FF            CALL 0x00401cd0
00688746  8B F0                     MOV ESI,EAX
00688748  3B F3                     CMP ESI,EBX
0068874A  75 1B                     JNZ 0x00688767
0068874C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688752  68 BA 08 00 00            PUSH 0x8ba
00688757  68 04 56 7D 00            PUSH 0x7d5604
0068875C  51                        PUSH ECX
0068875D  68 72 FF FF FF            PUSH 0xffffff72
00688762  E8 D9 D6 01 00            CALL 0x006a5e40
LAB_00688767:
00688767  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068876D  0F 85 40 F3 FF FF         JNZ 0x00687ab3
00688773  68 BA 08 00 00            PUSH 0x8ba
00688778  E9 20 F3 FF FF            JMP 0x00687a9d
switchD_00688157::caseD_599:
0068877D  E8 4E 95 D7 FF            CALL 0x00401cd0
00688782  8B F0                     MOV ESI,EAX
00688784  3B F3                     CMP ESI,EBX
00688786  75 1A                     JNZ 0x006887a2
00688788  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068878D  68 BB 08 00 00            PUSH 0x8bb
00688792  68 04 56 7D 00            PUSH 0x7d5604
00688797  50                        PUSH EAX
00688798  68 72 FF FF FF            PUSH 0xffffff72
0068879D  E8 9E D6 01 00            CALL 0x006a5e40
LAB_006887a2:
006887A2  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006887A8  0F 85 13 EF FF FF         JNZ 0x006876c1
006887AE  68 BB 08 00 00            PUSH 0x8bb
006887B3  E9 F3 EE FF FF            JMP 0x006876ab
switchD_00688157::caseD_59a:
006887B8  E8 13 95 D7 FF            CALL 0x00401cd0
006887BD  8B F0                     MOV ESI,EAX
006887BF  3B F3                     CMP ESI,EBX
006887C1  75 1B                     JNZ 0x006887de
006887C3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006887C9  68 BC 08 00 00            PUSH 0x8bc
006887CE  68 04 56 7D 00            PUSH 0x7d5604
006887D3  51                        PUSH ECX
006887D4  68 72 FF FF FF            PUSH 0xffffff72
006887D9  E8 62 D6 01 00            CALL 0x006a5e40
LAB_006887de:
006887DE  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006887E4  75 1B                     JNZ 0x00688801
006887E6  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006887EC  68 BC 08 00 00            PUSH 0x8bc
006887F1  68 04 56 7D 00            PUSH 0x7d5604
006887F6  52                        PUSH EDX
006887F7  68 71 FF FF FF            PUSH 0xffffff71
006887FC  E8 3F D6 01 00            CALL 0x006a5e40
LAB_00688801:
00688801  6A 02                     PUSH 0x2
00688803  E8 34 A6 D7 FF            CALL 0x00402e3c
00688808  E9 66 0D 00 00            JMP 0x00689573
switchD_00688157::caseD_59b:
0068880D  E8 BE 94 D7 FF            CALL 0x00401cd0
00688812  8B F0                     MOV ESI,EAX
00688814  3B F3                     CMP ESI,EBX
00688816  75 1A                     JNZ 0x00688832
00688818  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068881D  68 BD 08 00 00            PUSH 0x8bd
00688822  68 04 56 7D 00            PUSH 0x7d5604
00688827  50                        PUSH EAX
00688828  68 72 FF FF FF            PUSH 0xffffff72
0068882D  E8 0E D6 01 00            CALL 0x006a5e40
LAB_00688832:
00688832  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688838  75 1B                     JNZ 0x00688855
0068883A  68 BD 08 00 00            PUSH 0x8bd
LAB_0068883f:
0068883F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688845  68 04 56 7D 00            PUSH 0x7d5604
0068884A  51                        PUSH ECX
0068884B  68 71 FF FF FF            PUSH 0xffffff71
00688850  E8 EB D5 01 00            CALL 0x006a5e40
LAB_00688855:
00688855  6A 06                     PUSH 0x6
00688857  E9 71 0D 00 00            JMP 0x006895cd
switchD_00688157::caseD_59c:
0068885C  E8 6F 94 D7 FF            CALL 0x00401cd0
00688861  8B F0                     MOV ESI,EAX
00688863  3B F3                     CMP ESI,EBX
00688865  75 1B                     JNZ 0x00688882
00688867  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068886D  68 BE 08 00 00            PUSH 0x8be
00688872  68 04 56 7D 00            PUSH 0x7d5604
00688877  51                        PUSH ECX
00688878  68 72 FF FF FF            PUSH 0xffffff72
0068887D  E8 BE D5 01 00            CALL 0x006a5e40
LAB_00688882:
00688882  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688888  0F 85 C7 EF FF FF         JNZ 0x00687855
0068888E  68 BE 08 00 00            PUSH 0x8be
00688893  E9 A7 EF FF FF            JMP 0x0068783f
switchD_00688157::caseD_59d:
00688898  E8 33 94 D7 FF            CALL 0x00401cd0
0068889D  8B F0                     MOV ESI,EAX
0068889F  3B F3                     CMP ESI,EBX
006888A1  75 1A                     JNZ 0x006888bd
006888A3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006888A8  68 BF 08 00 00            PUSH 0x8bf
006888AD  68 04 56 7D 00            PUSH 0x7d5604
006888B2  50                        PUSH EAX
006888B3  68 72 FF FF FF            PUSH 0xffffff72
006888B8  E8 83 D5 01 00            CALL 0x006a5e40
LAB_006888bd:
006888BD  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006888C3  0F 85 9D EE FF FF         JNZ 0x00687766
006888C9  68 BF 08 00 00            PUSH 0x8bf
006888CE  E9 7D EE FF FF            JMP 0x00687750
switchD_00688157::caseD_5aa:
006888D3  E8 F8 93 D7 FF            CALL 0x00401cd0
006888D8  8B F0                     MOV ESI,EAX
006888DA  3B F3                     CMP ESI,EBX
006888DC  75 1B                     JNZ 0x006888f9
006888DE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006888E4  68 C1 08 00 00            PUSH 0x8c1
006888E9  68 04 56 7D 00            PUSH 0x7d5604
006888EE  51                        PUSH ECX
006888EF  68 72 FF FF FF            PUSH 0xffffff72
006888F4  E8 47 D5 01 00            CALL 0x006a5e40
LAB_006888f9:
006888F9  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006888FF  0F 85 B1 EE FF FF         JNZ 0x006877b6
00688905  68 C1 08 00 00            PUSH 0x8c1
0068890A  E9 91 EE FF FF            JMP 0x006877a0
switchD_00688157::caseD_5ab:
0068890F  E8 BC 93 D7 FF            CALL 0x00401cd0
00688914  8B F0                     MOV ESI,EAX
00688916  3B F3                     CMP ESI,EBX
00688918  75 1A                     JNZ 0x00688934
0068891A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068891F  68 C2 08 00 00            PUSH 0x8c2
00688924  68 04 56 7D 00            PUSH 0x7d5604
00688929  50                        PUSH EAX
0068892A  68 72 FF FF FF            PUSH 0xffffff72
0068892F  E8 0C D5 01 00            CALL 0x006a5e40
LAB_00688934:
00688934  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068893A  0F 85 26 EE FF FF         JNZ 0x00687766
00688940  68 C2 08 00 00            PUSH 0x8c2
00688945  E9 06 EE FF FF            JMP 0x00687750
switchD_00688157::caseD_5ac:
0068894A  E8 81 93 D7 FF            CALL 0x00401cd0
0068894F  8B F0                     MOV ESI,EAX
00688951  3B F3                     CMP ESI,EBX
00688953  75 1B                     JNZ 0x00688970
00688955  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068895B  68 C3 08 00 00            PUSH 0x8c3
00688960  68 04 56 7D 00            PUSH 0x7d5604
00688965  51                        PUSH ECX
00688966  68 72 FF FF FF            PUSH 0xffffff72
0068896B  E8 D0 D4 01 00            CALL 0x006a5e40
LAB_00688970:
00688970  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688976  0F 85 3A EE FF FF         JNZ 0x006877b6
0068897C  68 C3 08 00 00            PUSH 0x8c3
00688981  E9 1A EE FF FF            JMP 0x006877a0
switchD_00688157::caseD_5ad:
00688986  E8 45 93 D7 FF            CALL 0x00401cd0
0068898B  8B F0                     MOV ESI,EAX
0068898D  3B F3                     CMP ESI,EBX
0068898F  75 1A                     JNZ 0x006889ab
00688991  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688996  68 C4 08 00 00            PUSH 0x8c4
0068899B  68 04 56 7D 00            PUSH 0x7d5604
006889A0  50                        PUSH EAX
006889A1  68 72 FF FF FF            PUSH 0xffffff72
006889A6  E8 95 D4 01 00            CALL 0x006a5e40
LAB_006889ab:
006889AB  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006889B1  0F 85 AF ED FF FF         JNZ 0x00687766
006889B7  68 C4 08 00 00            PUSH 0x8c4
006889BC  E9 8F ED FF FF            JMP 0x00687750
switchD_00688157::caseD_5ae:
006889C1  E8 0A 93 D7 FF            CALL 0x00401cd0
006889C6  8B F0                     MOV ESI,EAX
006889C8  3B F3                     CMP ESI,EBX
006889CA  75 1B                     JNZ 0x006889e7
006889CC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006889D2  68 C5 08 00 00            PUSH 0x8c5
006889D7  68 04 56 7D 00            PUSH 0x7d5604
006889DC  51                        PUSH ECX
006889DD  68 72 FF FF FF            PUSH 0xffffff72
006889E2  E8 59 D4 01 00            CALL 0x006a5e40
LAB_006889e7:
006889E7  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006889ED  0F 85 62 EE FF FF         JNZ 0x00687855
006889F3  68 C5 08 00 00            PUSH 0x8c5
006889F8  E9 42 EE FF FF            JMP 0x0068783f
switchD_00688157::caseD_5af:
006889FD  E8 CE 92 D7 FF            CALL 0x00401cd0
00688A02  8B F0                     MOV ESI,EAX
00688A04  3B F3                     CMP ESI,EBX
00688A06  75 1A                     JNZ 0x00688a22
00688A08  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688A0D  68 C6 08 00 00            PUSH 0x8c6
00688A12  68 04 56 7D 00            PUSH 0x7d5604
00688A17  50                        PUSH EAX
00688A18  68 72 FF FF FF            PUSH 0xffffff72
00688A1D  E8 1E D4 01 00            CALL 0x006a5e40
LAB_00688a22:
00688A22  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688A28  0F 85 38 ED FF FF         JNZ 0x00687766
00688A2E  68 C6 08 00 00            PUSH 0x8c6
00688A33  E9 18 ED FF FF            JMP 0x00687750
switchD_00688157::caseD_5b0:
00688A38  E8 93 92 D7 FF            CALL 0x00401cd0
00688A3D  8B F0                     MOV ESI,EAX
00688A3F  3B F3                     CMP ESI,EBX
00688A41  75 1B                     JNZ 0x00688a5e
00688A43  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688A49  68 C7 08 00 00            PUSH 0x8c7
00688A4E  68 04 56 7D 00            PUSH 0x7d5604
00688A53  51                        PUSH ECX
00688A54  68 72 FF FF FF            PUSH 0xffffff72
00688A59  E8 E2 D3 01 00            CALL 0x006a5e40
LAB_00688a5e:
00688A5E  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688A64  0F 85 EB ED FF FF         JNZ 0x00687855
00688A6A  68 C7 08 00 00            PUSH 0x8c7
00688A6F  E9 CB ED FF FF            JMP 0x0068783f
switchD_00688157::caseD_5b1:
00688A74  E8 57 92 D7 FF            CALL 0x00401cd0
00688A79  8B F0                     MOV ESI,EAX
00688A7B  3B F3                     CMP ESI,EBX
00688A7D  75 1A                     JNZ 0x00688a99
00688A7F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688A84  68 C8 08 00 00            PUSH 0x8c8
00688A89  68 04 56 7D 00            PUSH 0x7d5604
00688A8E  50                        PUSH EAX
00688A8F  68 72 FF FF FF            PUSH 0xffffff72
00688A94  E8 A7 D3 01 00            CALL 0x006a5e40
LAB_00688a99:
00688A99  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688A9F  0F 85 FF ED FF FF         JNZ 0x006878a4
00688AA5  68 C8 08 00 00            PUSH 0x8c8
00688AAA  E9 DF ED FF FF            JMP 0x0068788e
switchD_00688157::caseD_5b2:
00688AAF  E8 1C 92 D7 FF            CALL 0x00401cd0
00688AB4  8B F0                     MOV ESI,EAX
00688AB6  3B F3                     CMP ESI,EBX
00688AB8  75 1B                     JNZ 0x00688ad5
00688ABA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688AC0  68 C9 08 00 00            PUSH 0x8c9
00688AC5  68 04 56 7D 00            PUSH 0x7d5604
00688ACA  51                        PUSH ECX
00688ACB  68 72 FF FF FF            PUSH 0xffffff72
00688AD0  E8 6B D3 01 00            CALL 0x006a5e40
LAB_00688ad5:
00688AD5  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688ADB  0F 85 74 ED FF FF         JNZ 0x00687855
00688AE1  68 C9 08 00 00            PUSH 0x8c9
00688AE6  E9 54 ED FF FF            JMP 0x0068783f
switchD_00688157::caseD_5b3:
00688AEB  E8 E0 91 D7 FF            CALL 0x00401cd0
00688AF0  8B F0                     MOV ESI,EAX
00688AF2  3B F3                     CMP ESI,EBX
00688AF4  75 1A                     JNZ 0x00688b10
00688AF6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688AFB  68 CA 08 00 00            PUSH 0x8ca
00688B00  68 04 56 7D 00            PUSH 0x7d5604
00688B05  50                        PUSH EAX
00688B06  68 72 FF FF FF            PUSH 0xffffff72
00688B0B  E8 30 D3 01 00            CALL 0x006a5e40
LAB_00688b10:
00688B10  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688B16  0F 85 4A EC FF FF         JNZ 0x00687766
00688B1C  68 CA 08 00 00            PUSH 0x8ca
00688B21  E9 2A EC FF FF            JMP 0x00687750
switchD_00688157::caseD_5b4:
00688B26  E8 A5 91 D7 FF            CALL 0x00401cd0
00688B2B  8B F0                     MOV ESI,EAX
00688B2D  3B F3                     CMP ESI,EBX
00688B2F  75 1B                     JNZ 0x00688b4c
00688B31  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688B37  68 CD 08 00 00            PUSH 0x8cd
00688B3C  68 04 56 7D 00            PUSH 0x7d5604
00688B41  51                        PUSH ECX
00688B42  68 72 FF FF FF            PUSH 0xffffff72
00688B47  E8 F4 D2 01 00            CALL 0x006a5e40
LAB_00688b4c:
00688B4C  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688B52  0F 85 A8 EE FF FF         JNZ 0x00687a00
00688B58  68 CD 08 00 00            PUSH 0x8cd
00688B5D  E9 88 EE FF FF            JMP 0x006879ea
switchD_00688157::caseD_5b5:
00688B62  E8 69 91 D7 FF            CALL 0x00401cd0
00688B67  8B F0                     MOV ESI,EAX
00688B69  3B F3                     CMP ESI,EBX
00688B6B  75 1A                     JNZ 0x00688b87
00688B6D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688B72  68 D1 08 00 00            PUSH 0x8d1
00688B77  68 04 56 7D 00            PUSH 0x7d5604
00688B7C  50                        PUSH EAX
00688B7D  68 72 FF FF FF            PUSH 0xffffff72
00688B82  E8 B9 D2 01 00            CALL 0x006a5e40
LAB_00688b87:
00688B87  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688B8D  0F 85 72 EC FF FF         JNZ 0x00687805
00688B93  68 D1 08 00 00            PUSH 0x8d1
00688B98  E9 52 EC FF FF            JMP 0x006877ef
LAB_00688b9d:
00688B9D  E8 2E 91 D7 FF            CALL 0x00401cd0
00688BA2  8B F0                     MOV ESI,EAX
00688BA4  3B F3                     CMP ESI,EBX
00688BA6  75 1B                     JNZ 0x00688bc3
00688BA8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688BAE  68 D2 08 00 00            PUSH 0x8d2
00688BB3  68 04 56 7D 00            PUSH 0x7d5604
00688BB8  51                        PUSH ECX
00688BB9  68 72 FF FF FF            PUSH 0xffffff72
00688BBE  E8 7D D2 01 00            CALL 0x006a5e40
LAB_00688bc3:
00688BC3  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688BC9  0F 85 9D 09 00 00         JNZ 0x0068956c
00688BCF  68 D2 08 00 00            PUSH 0x8d2
00688BD4  E9 7D 09 00 00            JMP 0x00689556
LAB_00688bd9:
00688BD9  3D EC 05 00 00            CMP EAX,0x5ec
00688BDE  0F 8F 50 05 00 00         JG 0x00689134
00688BE4  0F 84 0F 05 00 00         JZ 0x006890f9
00688BEA  05 49 FA FF FF            ADD EAX,0xfffffa49
00688BEF  83 F8 34                  CMP EAX,0x34
00688BF2  0F 87 06 0B 00 00         JA 0x006896fe
00688BF8  33 C9                     XOR ECX,ECX
00688BFA  8A 88 64 AF 68 00         MOV CL,byte ptr [EAX + 0x68af64]
switchD_00688c00::switchD:
00688C00  FF 24 8D 10 AF 68 00      JMP dword ptr [ECX*0x4 + 0x68af10]
switchD_00688c00::caseD_5c8:
00688C07  E8 C4 90 D7 FF            CALL 0x00401cd0
00688C0C  8B F0                     MOV ESI,EAX
00688C0E  3B F3                     CMP ESI,EBX
00688C10  75 1B                     JNZ 0x00688c2d
00688C12  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00688C18  68 CB 08 00 00            PUSH 0x8cb
00688C1D  68 04 56 7D 00            PUSH 0x7d5604
00688C22  52                        PUSH EDX
00688C23  68 72 FF FF FF            PUSH 0xffffff72
00688C28  E8 13 D2 01 00            CALL 0x006a5e40
LAB_00688c2d:
00688C2D  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688C33  0F 85 CC EB FF FF         JNZ 0x00687805
00688C39  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688C3E  68 CB 08 00 00            PUSH 0x8cb
00688C43  68 04 56 7D 00            PUSH 0x7d5604
00688C48  50                        PUSH EAX
00688C49  68 71 FF FF FF            PUSH 0xffffff71
00688C4E  E8 ED D1 01 00            CALL 0x006a5e40
00688C53  6A 04                     PUSH 0x4
00688C55  E9 73 09 00 00            JMP 0x006895cd
switchD_00688c00::caseD_5b7:
00688C5A  E8 71 90 D7 FF            CALL 0x00401cd0
00688C5F  8B F0                     MOV ESI,EAX
00688C61  3B F3                     CMP ESI,EBX
00688C63  75 1B                     JNZ 0x00688c80
00688C65  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688C6B  68 CE 08 00 00            PUSH 0x8ce
00688C70  68 04 56 7D 00            PUSH 0x7d5604
00688C75  51                        PUSH ECX
00688C76  68 72 FF FF FF            PUSH 0xffffff72
00688C7B  E8 C0 D1 01 00            CALL 0x006a5e40
LAB_00688c80:
00688C80  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688C86  0F 85 2A EB FF FF         JNZ 0x006877b6
00688C8C  68 CE 08 00 00            PUSH 0x8ce
00688C91  E9 0A EB FF FF            JMP 0x006877a0
switchD_00688c00::caseD_5b8:
00688C96  E8 35 90 D7 FF            CALL 0x00401cd0
00688C9B  8B F0                     MOV ESI,EAX
00688C9D  3B F3                     CMP ESI,EBX
00688C9F  75 1A                     JNZ 0x00688cbb
00688CA1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688CA6  68 CF 08 00 00            PUSH 0x8cf
00688CAB  68 04 56 7D 00            PUSH 0x7d5604
00688CB0  50                        PUSH EAX
00688CB1  68 72 FF FF FF            PUSH 0xffffff72
00688CB6  E8 85 D1 01 00            CALL 0x006a5e40
LAB_00688cbb:
00688CBB  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688CC1  0F 85 9F EA FF FF         JNZ 0x00687766
00688CC7  68 CF 08 00 00            PUSH 0x8cf
00688CCC  E9 7F EA FF FF            JMP 0x00687750
switchD_00688c00::caseD_5b9:
00688CD1  E8 FA 8F D7 FF            CALL 0x00401cd0
00688CD6  8B F0                     MOV ESI,EAX
00688CD8  3B F3                     CMP ESI,EBX
00688CDA  75 1B                     JNZ 0x00688cf7
00688CDC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688CE2  68 D0 08 00 00            PUSH 0x8d0
00688CE7  68 04 56 7D 00            PUSH 0x7d5604
00688CEC  51                        PUSH ECX
00688CED  68 72 FF FF FF            PUSH 0xffffff72
00688CF2  E8 49 D1 01 00            CALL 0x006a5e40
LAB_00688cf7:
00688CF7  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688CFD  0F 85 FD EC FF FF         JNZ 0x00687a00
00688D03  68 D0 08 00 00            PUSH 0x8d0
00688D08  E9 DD EC FF FF            JMP 0x006879ea
switchD_00688c00::caseD_5dc:
00688D0D  E8 BE 8F D7 FF            CALL 0x00401cd0
00688D12  8B F0                     MOV ESI,EAX
00688D14  3B F3                     CMP ESI,EBX
00688D16  75 1A                     JNZ 0x00688d32
00688D18  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688D1D  68 D4 08 00 00            PUSH 0x8d4
00688D22  68 04 56 7D 00            PUSH 0x7d5604
00688D27  50                        PUSH EAX
00688D28  68 72 FF FF FF            PUSH 0xffffff72
00688D2D  E8 0E D1 01 00            CALL 0x006a5e40
LAB_00688d32:
00688D32  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688D38  75 1B                     JNZ 0x00688d55
00688D3A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688D40  68 D4 08 00 00            PUSH 0x8d4
00688D45  68 04 56 7D 00            PUSH 0x7d5604
00688D4A  51                        PUSH ECX
00688D4B  68 71 FF FF FF            PUSH 0xffffff71
00688D50  E8 EB D0 01 00            CALL 0x006a5e40
LAB_00688d55:
00688D55  6A 02                     PUSH 0x2
00688D57  6A 01                     PUSH 0x1
00688D59  6A 02                     PUSH 0x2
00688D5B  E8 11 B7 D7 FF            CALL 0x00404471
00688D60  83 C4 0C                  ADD ESP,0xc
00688D63  E9 6D 08 00 00            JMP 0x006895d5
switchD_00688c00::caseD_5dd:
00688D68  E8 63 8F D7 FF            CALL 0x00401cd0
00688D6D  8B F0                     MOV ESI,EAX
00688D6F  3B F3                     CMP ESI,EBX
00688D71  75 1B                     JNZ 0x00688d8e
00688D73  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688D79  68 D5 08 00 00            PUSH 0x8d5
00688D7E  68 04 56 7D 00            PUSH 0x7d5604
00688D83  51                        PUSH ECX
00688D84  68 72 FF FF FF            PUSH 0xffffff72
00688D89  E8 B2 D0 01 00            CALL 0x006a5e40
LAB_00688d8e:
00688D8E  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688D94  0F 85 1C EA FF FF         JNZ 0x006877b6
00688D9A  68 D5 08 00 00            PUSH 0x8d5
00688D9F  E9 FC E9 FF FF            JMP 0x006877a0
switchD_00688c00::caseD_5de:
00688DA4  E8 27 8F D7 FF            CALL 0x00401cd0
00688DA9  8B F0                     MOV ESI,EAX
00688DAB  3B F3                     CMP ESI,EBX
00688DAD  75 1A                     JNZ 0x00688dc9
00688DAF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688DB4  68 D6 08 00 00            PUSH 0x8d6
00688DB9  68 04 56 7D 00            PUSH 0x7d5604
00688DBE  50                        PUSH EAX
00688DBF  68 72 FF FF FF            PUSH 0xffffff72
00688DC4  E8 77 D0 01 00            CALL 0x006a5e40
LAB_00688dc9:
00688DC9  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688DCF  0F 85 91 E9 FF FF         JNZ 0x00687766
00688DD5  68 D6 08 00 00            PUSH 0x8d6
00688DDA  E9 71 E9 FF FF            JMP 0x00687750
switchD_00688c00::caseD_5df:
00688DDF  E8 EC 8E D7 FF            CALL 0x00401cd0
00688DE4  8B F0                     MOV ESI,EAX
00688DE6  3B F3                     CMP ESI,EBX
00688DE8  75 1B                     JNZ 0x00688e05
00688DEA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688DF0  68 D7 08 00 00            PUSH 0x8d7
00688DF5  68 04 56 7D 00            PUSH 0x7d5604
00688DFA  51                        PUSH ECX
00688DFB  68 72 FF FF FF            PUSH 0xffffff72
00688E00  E8 3B D0 01 00            CALL 0x006a5e40
LAB_00688e05:
00688E05  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688E0B  0F 85 A5 E9 FF FF         JNZ 0x006877b6
00688E11  68 D7 08 00 00            PUSH 0x8d7
00688E16  E9 85 E9 FF FF            JMP 0x006877a0
switchD_00688c00::caseD_5e0:
00688E1B  E8 B0 8E D7 FF            CALL 0x00401cd0
00688E20  8B F0                     MOV ESI,EAX
00688E22  3B F3                     CMP ESI,EBX
00688E24  75 1A                     JNZ 0x00688e40
00688E26  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688E2B  68 D8 08 00 00            PUSH 0x8d8
00688E30  68 04 56 7D 00            PUSH 0x7d5604
00688E35  50                        PUSH EAX
00688E36  68 72 FF FF FF            PUSH 0xffffff72
00688E3B  E8 00 D0 01 00            CALL 0x006a5e40
LAB_00688e40:
00688E40  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688E46  0F 85 B9 E9 FF FF         JNZ 0x00687805
00688E4C  68 D8 08 00 00            PUSH 0x8d8
00688E51  E9 99 E9 FF FF            JMP 0x006877ef
switchD_00688c00::caseD_5e1:
00688E56  E8 75 8E D7 FF            CALL 0x00401cd0
00688E5B  8B F0                     MOV ESI,EAX
00688E5D  3B F3                     CMP ESI,EBX
00688E5F  75 1B                     JNZ 0x00688e7c
00688E61  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688E67  68 D9 08 00 00            PUSH 0x8d9
00688E6C  68 04 56 7D 00            PUSH 0x7d5604
00688E71  51                        PUSH ECX
00688E72  68 72 FF FF FF            PUSH 0xffffff72
00688E77  E8 C4 CF 01 00            CALL 0x006a5e40
LAB_00688e7c:
00688E7C  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688E82  0F 85 74 F4 FF FF         JNZ 0x006882fc
00688E88  68 D9 08 00 00            PUSH 0x8d9
00688E8D  E9 54 F4 FF FF            JMP 0x006882e6
switchD_00688c00::caseD_5e2:
00688E92  E8 39 8E D7 FF            CALL 0x00401cd0
00688E97  8B F0                     MOV ESI,EAX
00688E99  3B F3                     CMP ESI,EBX
00688E9B  75 1A                     JNZ 0x00688eb7
00688E9D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688EA2  68 DA 08 00 00            PUSH 0x8da
00688EA7  68 04 56 7D 00            PUSH 0x7d5604
00688EAC  50                        PUSH EAX
00688EAD  68 72 FF FF FF            PUSH 0xffffff72
00688EB2  E8 89 CF 01 00            CALL 0x006a5e40
LAB_00688eb7:
00688EB7  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688EBD  0F 85 3F EC FF FF         JNZ 0x00687b02
00688EC3  68 DA 08 00 00            PUSH 0x8da
00688EC8  E9 1F EC FF FF            JMP 0x00687aec
switchD_00688c00::caseD_5e3:
00688ECD  E8 FE 8D D7 FF            CALL 0x00401cd0
00688ED2  8B F0                     MOV ESI,EAX
00688ED4  3B F3                     CMP ESI,EBX
00688ED6  75 1B                     JNZ 0x00688ef3
00688ED8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688EDE  68 DB 08 00 00            PUSH 0x8db
00688EE3  68 04 56 7D 00            PUSH 0x7d5604
00688EE8  51                        PUSH ECX
00688EE9  68 72 FF FF FF            PUSH 0xffffff72
00688EEE  E8 4D CF 01 00            CALL 0x006a5e40
LAB_00688ef3:
00688EF3  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688EF9  0F 85 B7 E8 FF FF         JNZ 0x006877b6
00688EFF  68 DB 08 00 00            PUSH 0x8db
00688F04  E9 97 E8 FF FF            JMP 0x006877a0
switchD_00688c00::caseD_5e4:
00688F09  E8 C2 8D D7 FF            CALL 0x00401cd0
00688F0E  8B F0                     MOV ESI,EAX
00688F10  3B F3                     CMP ESI,EBX
00688F12  75 1A                     JNZ 0x00688f2e
00688F14  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688F19  68 DC 08 00 00            PUSH 0x8dc
00688F1E  68 04 56 7D 00            PUSH 0x7d5604
00688F23  50                        PUSH EAX
00688F24  68 72 FF FF FF            PUSH 0xffffff72
00688F29  E8 12 CF 01 00            CALL 0x006a5e40
LAB_00688f2e:
00688F2E  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688F34  0F 85 CB E8 FF FF         JNZ 0x00687805
00688F3A  68 DC 08 00 00            PUSH 0x8dc
00688F3F  E9 AB E8 FF FF            JMP 0x006877ef
switchD_00688c00::caseD_5e6:
00688F44  E8 87 8D D7 FF            CALL 0x00401cd0
00688F49  8B F0                     MOV ESI,EAX
00688F4B  3B F3                     CMP ESI,EBX
00688F4D  75 1B                     JNZ 0x00688f6a
00688F4F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688F55  68 DD 08 00 00            PUSH 0x8dd
00688F5A  68 04 56 7D 00            PUSH 0x7d5604
00688F5F  51                        PUSH ECX
00688F60  68 72 FF FF FF            PUSH 0xffffff72
00688F65  E8 D6 CE 01 00            CALL 0x006a5e40
LAB_00688f6a:
00688F6A  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688F70  0F 85 86 F3 FF FF         JNZ 0x006882fc
00688F76  68 DD 08 00 00            PUSH 0x8dd
00688F7B  E9 66 F3 FF FF            JMP 0x006882e6
switchD_00688c00::caseD_5e5:
00688F80  E8 4B 8D D7 FF            CALL 0x00401cd0
00688F85  8B F0                     MOV ESI,EAX
00688F87  3B F3                     CMP ESI,EBX
00688F89  75 1A                     JNZ 0x00688fa5
00688F8B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00688F90  68 DE 08 00 00            PUSH 0x8de
00688F95  68 04 56 7D 00            PUSH 0x7d5604
00688F9A  50                        PUSH EAX
00688F9B  68 72 FF FF FF            PUSH 0xffffff72
00688FA0  E8 9B CE 01 00            CALL 0x006a5e40
LAB_00688fa5:
00688FA5  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688FAB  0F 85 54 E8 FF FF         JNZ 0x00687805
00688FB1  68 DE 08 00 00            PUSH 0x8de
00688FB6  E9 34 E8 FF FF            JMP 0x006877ef
switchD_00688c00::caseD_5e7:
00688FBB  E8 10 8D D7 FF            CALL 0x00401cd0
00688FC0  8B F0                     MOV ESI,EAX
00688FC2  3B F3                     CMP ESI,EBX
00688FC4  75 1B                     JNZ 0x00688fe1
00688FC6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00688FCC  68 DF 08 00 00            PUSH 0x8df
00688FD1  68 04 56 7D 00            PUSH 0x7d5604
00688FD6  51                        PUSH ECX
00688FD7  68 72 FF FF FF            PUSH 0xffffff72
00688FDC  E8 5F CE 01 00            CALL 0x006a5e40
LAB_00688fe1:
00688FE1  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00688FE7  0F 85 0F F3 FF FF         JNZ 0x006882fc
00688FED  68 DF 08 00 00            PUSH 0x8df
00688FF2  E9 EF F2 FF FF            JMP 0x006882e6
switchD_00688c00::caseD_5e8:
00688FF7  E8 D4 8C D7 FF            CALL 0x00401cd0
00688FFC  8B F0                     MOV ESI,EAX
00688FFE  3B F3                     CMP ESI,EBX
00689000  75 1A                     JNZ 0x0068901c
00689002  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689007  68 E0 08 00 00            PUSH 0x8e0
0068900C  68 04 56 7D 00            PUSH 0x7d5604
00689011  50                        PUSH EAX
00689012  68 72 FF FF FF            PUSH 0xffffff72
00689017  E8 24 CE 01 00            CALL 0x006a5e40
LAB_0068901c:
0068901C  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689022  0F 85 3E E7 FF FF         JNZ 0x00687766
00689028  68 E0 08 00 00            PUSH 0x8e0
0068902D  E9 1E E7 FF FF            JMP 0x00687750
switchD_00688c00::caseD_5e9:
00689032  E8 99 8C D7 FF            CALL 0x00401cd0
00689037  8B F0                     MOV ESI,EAX
00689039  3B F3                     CMP ESI,EBX
0068903B  75 1B                     JNZ 0x00689058
0068903D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689043  68 E1 08 00 00            PUSH 0x8e1
00689048  68 04 56 7D 00            PUSH 0x7d5604
0068904D  51                        PUSH ECX
0068904E  68 72 FF FF FF            PUSH 0xffffff72
00689053  E8 E8 CD 01 00            CALL 0x006a5e40
LAB_00689058:
00689058  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068905E  0F 85 98 F2 FF FF         JNZ 0x006882fc
00689064  68 E1 08 00 00            PUSH 0x8e1
00689069  E9 78 F2 FF FF            JMP 0x006882e6
switchD_00688c00::caseD_5ea:
0068906E  E8 5D 8C D7 FF            CALL 0x00401cd0
00689073  8B F0                     MOV ESI,EAX
00689075  3B F3                     CMP ESI,EBX
00689077  75 1A                     JNZ 0x00689093
00689079  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068907E  68 E2 08 00 00            PUSH 0x8e2
00689083  68 04 56 7D 00            PUSH 0x7d5604
00689088  50                        PUSH EAX
00689089  68 72 FF FF FF            PUSH 0xffffff72
0068908E  E8 AD CD 01 00            CALL 0x006a5e40
LAB_00689093:
00689093  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689099  0F 85 66 E7 FF FF         JNZ 0x00687805
0068909F  68 E2 08 00 00            PUSH 0x8e2
006890A4  E9 46 E7 FF FF            JMP 0x006877ef
switchD_00688c00::caseD_5eb:
006890A9  E8 22 8C D7 FF            CALL 0x00401cd0
006890AE  8B F0                     MOV ESI,EAX
006890B0  3B F3                     CMP ESI,EBX
006890B2  75 1B                     JNZ 0x006890cf
006890B4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006890BA  68 E3 08 00 00            PUSH 0x8e3
006890BF  68 04 56 7D 00            PUSH 0x7d5604
006890C4  51                        PUSH ECX
006890C5  68 72 FF FF FF            PUSH 0xffffff72
006890CA  E8 71 CD 01 00            CALL 0x006a5e40
LAB_006890cf:
006890CF  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006890D5  75 1B                     JNZ 0x006890f2
006890D7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006890DD  68 E3 08 00 00            PUSH 0x8e3
006890E2  68 04 56 7D 00            PUSH 0x7d5604
006890E7  52                        PUSH EDX
006890E8  68 71 FF FF FF            PUSH 0xffffff71
006890ED  E8 4E CD 01 00            CALL 0x006a5e40
LAB_006890f2:
006890F2  6A 09                     PUSH 0x9
006890F4  E9 75 04 00 00            JMP 0x0068956e
LAB_006890f9:
006890F9  E8 D2 8B D7 FF            CALL 0x00401cd0
006890FE  8B F0                     MOV ESI,EAX
00689100  3B F3                     CMP ESI,EBX
00689102  75 1A                     JNZ 0x0068911e
00689104  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689109  68 E4 08 00 00            PUSH 0x8e4
0068910E  68 04 56 7D 00            PUSH 0x7d5604
00689113  50                        PUSH EAX
00689114  68 72 FF FF FF            PUSH 0xffffff72
00689119  E8 22 CD 01 00            CALL 0x006a5e40
LAB_0068911e:
0068911E  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689124  0F 85 3C E6 FF FF         JNZ 0x00687766
0068912A  68 E4 08 00 00            PUSH 0x8e4
0068912F  E9 1C E6 FF FF            JMP 0x00687750
LAB_00689134:
00689134  3D 6C 07 00 00            CMP EAX,0x76c
00689139  0F 8F BF 05 00 00         JG 0x006896fe
0068913F  0F 84 F9 04 00 00         JZ 0x0068963e
00689145  05 13 FA FF FF            ADD EAX,0xfffffa13
0068914A  83 F8 11                  CMP EAX,0x11
0068914D  0F 87 AB 05 00 00         JA 0x006896fe
switchD_00689153::switchD:
00689153  FF 24 85 9C AF 68 00      JMP dword ptr [EAX*0x4 + 0x68af9c]
switchD_00689153::caseD_5f1:
0068915A  E8 71 8B D7 FF            CALL 0x00401cd0
0068915F  8B F0                     MOV ESI,EAX
00689161  3B F3                     CMP ESI,EBX
00689163  75 1B                     JNZ 0x00689180
00689165  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068916B  68 E5 08 00 00            PUSH 0x8e5
00689170  68 04 56 7D 00            PUSH 0x7d5604
00689175  51                        PUSH ECX
00689176  68 72 FF FF FF            PUSH 0xffffff72
0068917B  E8 C0 CC 01 00            CALL 0x006a5e40
LAB_00689180:
00689180  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689186  0F 85 70 F1 FF FF         JNZ 0x006882fc
0068918C  68 E5 08 00 00            PUSH 0x8e5
00689191  E9 50 F1 FF FF            JMP 0x006882e6
switchD_00689153::caseD_5f2:
00689196  E8 35 8B D7 FF            CALL 0x00401cd0
0068919B  8B F0                     MOV ESI,EAX
0068919D  3B F3                     CMP ESI,EBX
0068919F  75 1A                     JNZ 0x006891bb
006891A1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006891A6  68 E6 08 00 00            PUSH 0x8e6
006891AB  68 04 56 7D 00            PUSH 0x7d5604
006891B0  50                        PUSH EAX
006891B1  68 72 FF FF FF            PUSH 0xffffff72
006891B6  E8 85 CC 01 00            CALL 0x006a5e40
LAB_006891bb:
006891BB  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006891C1  0F 85 3E E6 FF FF         JNZ 0x00687805
006891C7  68 E6 08 00 00            PUSH 0x8e6
006891CC  E9 1E E6 FF FF            JMP 0x006877ef
switchD_00689153::caseD_5f3:
006891D1  E8 FA 8A D7 FF            CALL 0x00401cd0
006891D6  8B F0                     MOV ESI,EAX
006891D8  3B F3                     CMP ESI,EBX
006891DA  75 1B                     JNZ 0x006891f7
006891DC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006891E2  68 E7 08 00 00            PUSH 0x8e7
006891E7  68 04 56 7D 00            PUSH 0x7d5604
006891EC  51                        PUSH ECX
006891ED  68 72 FF FF FF            PUSH 0xffffff72
006891F2  E8 49 CC 01 00            CALL 0x006a5e40
LAB_006891f7:
006891F7  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006891FD  0F 85 F9 F0 FF FF         JNZ 0x006882fc
00689203  68 E7 08 00 00            PUSH 0x8e7
00689208  E9 D9 F0 FF FF            JMP 0x006882e6
switchD_00689153::caseD_5f4:
0068920D  E8 BE 8A D7 FF            CALL 0x00401cd0
00689212  8B F0                     MOV ESI,EAX
00689214  3B F3                     CMP ESI,EBX
00689216  75 1A                     JNZ 0x00689232
00689218  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068921D  68 E8 08 00 00            PUSH 0x8e8
00689222  68 04 56 7D 00            PUSH 0x7d5604
00689227  50                        PUSH EAX
00689228  68 72 FF FF FF            PUSH 0xffffff72
0068922D  E8 0E CC 01 00            CALL 0x006a5e40
LAB_00689232:
00689232  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689238  0F 85 C7 E5 FF FF         JNZ 0x00687805
0068923E  68 E8 08 00 00            PUSH 0x8e8
00689243  E9 A7 E5 FF FF            JMP 0x006877ef
switchD_00689153::caseD_5f5:
00689248  E8 83 8A D7 FF            CALL 0x00401cd0
0068924D  8B F0                     MOV ESI,EAX
0068924F  3B F3                     CMP ESI,EBX
00689251  75 1B                     JNZ 0x0068926e
00689253  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689259  68 E9 08 00 00            PUSH 0x8e9
0068925E  68 04 56 7D 00            PUSH 0x7d5604
00689263  51                        PUSH ECX
00689264  68 72 FF FF FF            PUSH 0xffffff72
00689269  E8 D2 CB 01 00            CALL 0x006a5e40
LAB_0068926e:
0068926E  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689274  0F 85 F2 02 00 00         JNZ 0x0068956c
0068927A  68 E9 08 00 00            PUSH 0x8e9
0068927F  E9 D2 02 00 00            JMP 0x00689556
switchD_00689153::caseD_5f6:
00689284  E8 47 8A D7 FF            CALL 0x00401cd0
00689289  8B F0                     MOV ESI,EAX
0068928B  3B F3                     CMP ESI,EBX
0068928D  75 1A                     JNZ 0x006892a9
0068928F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689294  68 EA 08 00 00            PUSH 0x8ea
00689299  68 04 56 7D 00            PUSH 0x7d5604
0068929E  50                        PUSH EAX
0068929F  68 72 FF FF FF            PUSH 0xffffff72
006892A4  E8 97 CB 01 00            CALL 0x006a5e40
LAB_006892a9:
006892A9  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006892AF  0F 85 B1 E4 FF FF         JNZ 0x00687766
006892B5  68 EA 08 00 00            PUSH 0x8ea
006892BA  E9 91 E4 FF FF            JMP 0x00687750
switchD_00689153::caseD_5f7:
006892BF  E8 0C 8A D7 FF            CALL 0x00401cd0
006892C4  8B F0                     MOV ESI,EAX
006892C6  3B F3                     CMP ESI,EBX
006892C8  75 1B                     JNZ 0x006892e5
006892CA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006892D0  68 EB 08 00 00            PUSH 0x8eb
006892D5  68 04 56 7D 00            PUSH 0x7d5604
006892DA  51                        PUSH ECX
006892DB  68 72 FF FF FF            PUSH 0xffffff72
006892E0  E8 5B CB 01 00            CALL 0x006a5e40
LAB_006892e5:
006892E5  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006892EB  0F 85 0B F0 FF FF         JNZ 0x006882fc
006892F1  68 EB 08 00 00            PUSH 0x8eb
006892F6  E9 EB EF FF FF            JMP 0x006882e6
switchD_00689153::caseD_5ed:
006892FB  E8 D0 89 D7 FF            CALL 0x00401cd0
00689300  8B F0                     MOV ESI,EAX
00689302  3B F3                     CMP ESI,EBX
00689304  75 1A                     JNZ 0x00689320
00689306  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068930B  68 EC 08 00 00            PUSH 0x8ec
00689310  68 04 56 7D 00            PUSH 0x7d5604
00689315  50                        PUSH EAX
00689316  68 72 FF FF FF            PUSH 0xffffff72
0068931B  E8 20 CB 01 00            CALL 0x006a5e40
LAB_00689320:
00689320  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689326  0F 85 29 F5 FF FF         JNZ 0x00688855
0068932C  68 EC 08 00 00            PUSH 0x8ec
00689331  E9 09 F5 FF FF            JMP 0x0068883f
switchD_00689153::caseD_5ee:
00689336  E8 95 89 D7 FF            CALL 0x00401cd0
0068933B  8B F0                     MOV ESI,EAX
0068933D  3B F3                     CMP ESI,EBX
0068933F  75 1B                     JNZ 0x0068935c
00689341  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689347  68 ED 08 00 00            PUSH 0x8ed
0068934C  68 04 56 7D 00            PUSH 0x7d5604
00689351  51                        PUSH ECX
00689352  68 72 FF FF FF            PUSH 0xffffff72
00689357  E8 E4 CA 01 00            CALL 0x006a5e40
LAB_0068935c:
0068935C  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689362  0F 85 4E E4 FF FF         JNZ 0x006877b6
00689368  68 ED 08 00 00            PUSH 0x8ed
0068936D  E9 2E E4 FF FF            JMP 0x006877a0
switchD_00689153::caseD_5ef:
00689372  E8 59 89 D7 FF            CALL 0x00401cd0
00689377  8B F0                     MOV ESI,EAX
00689379  3B F3                     CMP ESI,EBX
0068937B  75 1A                     JNZ 0x00689397
0068937D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689382  68 EE 08 00 00            PUSH 0x8ee
00689387  68 04 56 7D 00            PUSH 0x7d5604
0068938C  50                        PUSH EAX
0068938D  68 72 FF FF FF            PUSH 0xffffff72
00689392  E8 A9 CA 01 00            CALL 0x006a5e40
LAB_00689397:
00689397  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068939D  75 1B                     JNZ 0x006893ba
0068939F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006893A5  68 EE 08 00 00            PUSH 0x8ee
006893AA  68 04 56 7D 00            PUSH 0x7d5604
006893AF  51                        PUSH ECX
006893B0  68 71 FF FF FF            PUSH 0xffffff71
006893B5  E8 86 CA 01 00            CALL 0x006a5e40
LAB_006893ba:
006893BA  6A 09                     PUSH 0x9
006893BC  E9 0C 02 00 00            JMP 0x006895cd
switchD_00689153::caseD_5f0:
006893C1  E8 0A 89 D7 FF            CALL 0x00401cd0
006893C6  8B F0                     MOV ESI,EAX
006893C8  3B F3                     CMP ESI,EBX
006893CA  75 1B                     JNZ 0x006893e7
006893CC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006893D2  68 EF 08 00 00            PUSH 0x8ef
006893D7  68 04 56 7D 00            PUSH 0x7d5604
006893DC  51                        PUSH ECX
006893DD  68 72 FF FF FF            PUSH 0xffffff72
006893E2  E8 59 CA 01 00            CALL 0x006a5e40
LAB_006893e7:
006893E7  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006893ED  0F 85 09 EF FF FF         JNZ 0x006882fc
006893F3  68 EF 08 00 00            PUSH 0x8ef
006893F8  E9 E9 EE FF FF            JMP 0x006882e6
switchD_00689153::caseD_5f8:
006893FD  E8 CE 88 D7 FF            CALL 0x00401cd0
00689402  8B F0                     MOV ESI,EAX
00689404  3B F3                     CMP ESI,EBX
00689406  75 1A                     JNZ 0x00689422
00689408  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068940D  68 F0 08 00 00            PUSH 0x8f0
00689412  68 04 56 7D 00            PUSH 0x7d5604
00689417  50                        PUSH EAX
00689418  68 72 FF FF FF            PUSH 0xffffff72
0068941D  E8 1E CA 01 00            CALL 0x006a5e40
LAB_00689422:
00689422  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689428  0F 85 D7 E3 FF FF         JNZ 0x00687805
0068942E  68 F0 08 00 00            PUSH 0x8f0
00689433  E9 B7 E3 FF FF            JMP 0x006877ef
switchD_00689153::caseD_5fd:
00689438  E8 93 88 D7 FF            CALL 0x00401cd0
0068943D  8B F0                     MOV ESI,EAX
0068943F  3B F3                     CMP ESI,EBX
00689441  75 1B                     JNZ 0x0068945e
00689443  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689449  68 F1 08 00 00            PUSH 0x8f1
0068944E  68 04 56 7D 00            PUSH 0x7d5604
00689453  51                        PUSH ECX
00689454  68 72 FF FF FF            PUSH 0xffffff72
00689459  E8 E2 C9 01 00            CALL 0x006a5e40
LAB_0068945e:
0068945E  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689464  0F 85 92 EE FF FF         JNZ 0x006882fc
0068946A  68 F1 08 00 00            PUSH 0x8f1
0068946F  E9 72 EE FF FF            JMP 0x006882e6
switchD_00689153::caseD_5f9:
00689474  E8 57 88 D7 FF            CALL 0x00401cd0
00689479  8B F0                     MOV ESI,EAX
0068947B  3B F3                     CMP ESI,EBX
0068947D  75 1A                     JNZ 0x00689499
0068947F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689484  68 F2 08 00 00            PUSH 0x8f2
00689489  68 04 56 7D 00            PUSH 0x7d5604
0068948E  50                        PUSH EAX
0068948F  68 72 FF FF FF            PUSH 0xffffff72
00689494  E8 A7 C9 01 00            CALL 0x006a5e40
LAB_00689499:
00689499  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068949F  0F 85 B0 F3 FF FF         JNZ 0x00688855
006894A5  68 F2 08 00 00            PUSH 0x8f2
006894AA  E9 90 F3 FF FF            JMP 0x0068883f
switchD_00689153::caseD_5fa:
006894AF  E8 1C 88 D7 FF            CALL 0x00401cd0
006894B4  8B F0                     MOV ESI,EAX
006894B6  3B F3                     CMP ESI,EBX
006894B8  75 1B                     JNZ 0x006894d5
006894BA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006894C0  68 F3 08 00 00            PUSH 0x8f3
006894C5  68 04 56 7D 00            PUSH 0x7d5604
006894CA  51                        PUSH ECX
006894CB  68 72 FF FF FF            PUSH 0xffffff72
006894D0  E8 6B C9 01 00            CALL 0x006a5e40
LAB_006894d5:
006894D5  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006894DB  0F 85 8B 00 00 00         JNZ 0x0068956c
006894E1  68 F3 08 00 00            PUSH 0x8f3
006894E6  EB 6E                     JMP 0x00689556
switchD_00689153::caseD_5fb:
006894E8  E8 E3 87 D7 FF            CALL 0x00401cd0
006894ED  8B F0                     MOV ESI,EAX
006894EF  3B F3                     CMP ESI,EBX
006894F1  75 1A                     JNZ 0x0068950d
006894F3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006894F8  68 F4 08 00 00            PUSH 0x8f4
006894FD  68 04 56 7D 00            PUSH 0x7d5604
00689502  50                        PUSH EAX
00689503  68 72 FF FF FF            PUSH 0xffffff72
00689508  E8 33 C9 01 00            CALL 0x006a5e40
LAB_0068950d:
0068950D  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689513  0F 85 3C F3 FF FF         JNZ 0x00688855
00689519  68 F4 08 00 00            PUSH 0x8f4
0068951E  E9 1C F3 FF FF            JMP 0x0068883f
switchD_00689153::caseD_5fc:
00689523  E8 A8 87 D7 FF            CALL 0x00401cd0
00689528  8B F0                     MOV ESI,EAX
0068952A  3B F3                     CMP ESI,EBX
0068952C  75 1B                     JNZ 0x00689549
0068952E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689534  68 F5 08 00 00            PUSH 0x8f5
00689539  68 04 56 7D 00            PUSH 0x7d5604
0068953E  51                        PUSH ECX
0068953F  68 72 FF FF FF            PUSH 0xffffff72
00689544  E8 F7 C8 01 00            CALL 0x006a5e40
LAB_00689549:
00689549  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068954F  75 1B                     JNZ 0x0068956c
00689551  68 F5 08 00 00            PUSH 0x8f5
LAB_00689556:
00689556  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068955C  68 04 56 7D 00            PUSH 0x7d5604
00689561  52                        PUSH EDX
00689562  68 71 FF FF FF            PUSH 0xffffff71
00689567  E8 D4 C8 01 00            CALL 0x006a5e40
LAB_0068956c:
0068956C  6A 06                     PUSH 0x6
LAB_0068956e:
0068956E  E8 1A 9D D7 FF            CALL 0x0040328d
LAB_00689573:
00689573  83 C4 04                  ADD ESP,0x4
LAB_00689576:
00689576  85 C0                     TEST EAX,EAX
00689578  0F 85 42 01 00 00         JNZ 0x006896c0
0068957E  E9 12 01 00 00            JMP 0x00689695
switchD_00689153::caseD_5fe:
00689583  E8 48 87 D7 FF            CALL 0x00401cd0
00689588  8B F0                     MOV ESI,EAX
0068958A  3B F3                     CMP ESI,EBX
0068958C  75 1A                     JNZ 0x006895a8
0068958E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689593  68 F6 08 00 00            PUSH 0x8f6
00689598  68 04 56 7D 00            PUSH 0x7d5604
0068959D  50                        PUSH EAX
0068959E  68 72 FF FF FF            PUSH 0xffffff72
006895A3  E8 98 C8 01 00            CALL 0x006a5e40
LAB_006895a8:
006895A8  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
006895AE  75 1B                     JNZ 0x006895cb
006895B0  68 F6 08 00 00            PUSH 0x8f6
LAB_006895b5:
006895B5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006895BB  68 04 56 7D 00            PUSH 0x7d5604
006895C0  51                        PUSH ECX
006895C1  68 71 FF FF FF            PUSH 0xffffff71
006895C6  E8 75 C8 01 00            CALL 0x006a5e40
LAB_006895cb:
006895CB  6A 07                     PUSH 0x7
LAB_006895cd:
006895CD  E8 BB 9C D7 FF            CALL 0x0040328d
LAB_006895d2:
006895D2  83 C4 04                  ADD ESP,0x4
LAB_006895d5:
006895D5  85 C0                     TEST EAX,EAX
006895D7  75 2B                     JNZ 0x00689604
006895D9  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006895DF  8B C1                     MOV EAX,ECX
006895E1  C1 E0 04                  SHL EAX,0x4
006895E4  03 C1                     ADD EAX,ECX
006895E6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006895E9  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006895EC  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006895EF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006895F2  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
006895F9  51                        PUSH ECX
006895FA  6A 83                     PUSH -0x7d
006895FC  E8 10 BE D7 FF            CALL 0x00405411
00689601  83 C4 08                  ADD ESP,0x8
LAB_00689604:
00689604  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068960A  8B 96 56 04 00 00         MOV EDX,dword ptr [ESI + 0x456]
00689610  8B C1                     MOV EAX,ECX
00689612  52                        PUSH EDX
00689613  C1 E0 04                  SHL EAX,0x4
00689616  03 C1                     ADD EAX,ECX
00689618  81 C6 6E 04 00 00         ADD ESI,0x46e
0068961E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689621  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689624  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00689627  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068962A  A1 CC 89 84 00            MOV EAX,[0x008489cc]
0068962F  8B 14 8D 94 1A 81 00      MOV EDX,dword ptr [ECX*0x4 + 0x811a94]
00689636  52                        PUSH EDX
00689637  56                        PUSH ESI
00689638  50                        PUSH EAX
00689639  E9 B8 00 00 00            JMP 0x006896f6
LAB_0068963e:
0068963E  E8 8D 86 D7 FF            CALL 0x00401cd0
00689643  8B F0                     MOV ESI,EAX
00689645  3B F3                     CMP ESI,EBX
00689647  75 1B                     JNZ 0x00689664
00689649  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068964F  68 F8 08 00 00            PUSH 0x8f8
00689654  68 04 56 7D 00            PUSH 0x7d5604
00689659  51                        PUSH ECX
0068965A  68 72 FF FF FF            PUSH 0xffffff72
0068965F  E8 DC C7 01 00            CALL 0x006a5e40
LAB_00689664:
00689664  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068966A  75 1B                     JNZ 0x00689687
0068966C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00689672  68 F8 08 00 00            PUSH 0x8f8
00689677  68 04 56 7D 00            PUSH 0x7d5604
0068967C  52                        PUSH EDX
0068967D  68 71 FF FF FF            PUSH 0xffffff71
00689682  E8 B9 C7 01 00            CALL 0x006a5e40
LAB_00689687:
00689687  6A 01                     PUSH 0x1
00689689  E8 FF 9B D7 FF            CALL 0x0040328d
0068968E  83 C4 04                  ADD ESP,0x4
00689691  85 C0                     TEST EAX,EAX
00689693  75 2B                     JNZ 0x006896c0
LAB_00689695:
00689695  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068969B  8B C1                     MOV EAX,ECX
0068969D  C1 E0 04                  SHL EAX,0x4
006896A0  03 C1                     ADD EAX,ECX
006896A2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006896A5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006896A8  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006896AB  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006896AE  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
006896B5  52                        PUSH EDX
006896B6  6A 83                     PUSH -0x7d
006896B8  E8 54 BD D7 FF            CALL 0x00405411
006896BD  83 C4 08                  ADD ESP,0x8
LAB_006896c0:
006896C0  8B 86 56 04 00 00         MOV EAX,dword ptr [ESI + 0x456]
006896C6  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006896CC  50                        PUSH EAX
006896CD  8B C1                     MOV EAX,ECX
006896CF  C1 E0 04                  SHL EAX,0x4
006896D2  03 C1                     ADD EAX,ECX
006896D4  81 C6 6E 04 00 00         ADD ESI,0x46e
006896DA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006896DD  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006896E0  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006896E3  8B 15 CC 89 84 00         MOV EDX,dword ptr [0x008489cc]
006896E9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006896EC  8B 0C 85 94 1A 81 00      MOV ECX,dword ptr [EAX*0x4 + 0x811a94]
006896F3  51                        PUSH ECX
006896F4  56                        PUSH ESI
006896F5  52                        PUSH EDX
LAB_006896f6:
006896F6  E8 DF 9E D7 FF            CALL 0x004035da
006896FB  83 C4 10                  ADD ESP,0x10
switchD_00685456::default:
006896FE  FF 0D B0 88 84 00         DEC dword ptr [0x008488b0]
00689704  E9 ED A8 FF FF            JMP 0x00683ff6
LAB_00689709:
00689709  8B 1D B0 88 84 00         MOV EBX,dword ptr [0x008488b0]
0068970F  B9 C5 0A 00 00            MOV ECX,0xac5
00689714  43                        INC EBX
00689715  8B C3                     MOV EAX,EBX
00689717  89 1D B0 88 84 00         MOV dword ptr [0x008488b0],EBX
0068971D  C1 E0 04                  SHL EAX,0x4
00689720  03 C3                     ADD EAX,EBX
00689722  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689725  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689728  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
0068972B  33 C0                     XOR EAX,EAX
0068972D  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00689730  C1 E2 02                  SHL EDX,0x2
00689733  8D B2 90 1A 81 00         LEA ESI,[EDX + 0x811a90]
00689739  8B FE                     MOV EDI,ESI
0068973B  F3 AB                     STOSD.REP ES:EDI
0068973D  8B C3                     MOV EAX,EBX
0068973F  C7 06 03 00 00 00         MOV dword ptr [ESI],0x3
00689745  C1 E0 04                  SHL EAX,0x4
00689748  03 C3                     ADD EAX,EBX
0068974A  C7 82 94 1A 81 00 02 00 00 00  MOV dword ptr [EDX + 0x811a94],0x2
00689754  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689757  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0068975A  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
0068975D  8D 1C 5B                  LEA EBX,[EBX + EBX*0x2]
00689760  C1 E3 02                  SHL EBX,0x2
00689763  8B 93 B0 10 81 00         MOV EDX,dword ptr [EBX + 0x8110b0]
00689769  52                        PUSH EDX
0068976A  E8 D1 8D D7 FF            CALL 0x00402540
0068976F  8B F8                     MOV EDI,EAX
00689771  83 C9 FF                  OR ECX,0xffffffff
00689774  33 C0                     XOR EAX,EAX
00689776  83 C4 04                  ADD ESP,0x4
00689779  F2 AE                     SCASB.REPNE ES:EDI
0068977B  F7 D1                     NOT ECX
0068977D  2B F9                     SUB EDI,ECX
0068977F  8D 93 A4 1A 81 00         LEA EDX,[EBX + 0x811aa4]
00689785  8B C1                     MOV EAX,ECX
00689787  8B F7                     MOV ESI,EDI
00689789  8B FA                     MOV EDI,EDX
0068978B  C1 E9 02                  SHR ECX,0x2
0068978E  F3 A5                     MOVSD.REP ES:EDI,ESI
00689790  8B C8                     MOV ECX,EAX
00689792  83 E1 03                  AND ECX,0x3
00689795  F3 A4                     MOVSB.REP ES:EDI,ESI
00689797  C7 83 9C 1A 81 00 00 00 00 00  MOV dword ptr [EBX + 0x811a9c],0x0
006897A1  C7 83 E4 1A 81 00 04 00 00 00  MOV dword ptr [EBX + 0x811ae4],0x4
006897AB  E9 44 A8 FF FF            JMP 0x00683ff4
switchD_006841b6::caseD_3:
006897B0  6A 0A                     PUSH 0xa
006897B2  E8 88 89 D7 FF            CALL 0x0040213f
006897B7  A3 14 8A 84 00            MOV [0x00848a14],EAX
006897BC  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
006897C1  83 C4 04                  ADD ESP,0x4
006897C4  83 F8 39                  CMP EAX,0x39
006897C7  74 05                     JZ 0x006897ce
006897C9  E8 58 B6 D7 FF            CALL 0x00404e26
LAB_006897ce:
006897CE  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
006897D3  83 E8 10                  SUB EAX,0x10
006897D6  0F 84 75 0A 00 00         JZ 0x0068a251
006897DC  83 E8 29                  SUB EAX,0x29
006897DF  0F 84 6C 0A 00 00         JZ 0x0068a251
006897E5  48                        DEC EAX
006897E6  74 77                     JZ 0x0068985f
006897E8  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006897EE  8B C1                     MOV EAX,ECX
006897F0  C1 E0 04                  SHL EAX,0x4
006897F3  03 C1                     ADD EAX,ECX
006897F5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006897F8  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006897FB  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006897FE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689801  83 3C 85 94 1A 81 00 02   CMP dword ptr [EAX*0x4 + 0x811a94],0x2
00689809  75 2A                     JNZ 0x00689835
0068980B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689811  68 D0 09 00 00            PUSH 0x9d0
00689816  68 04 56 7D 00            PUSH 0x7d5604
0068981B  51                        PUSH ECX
0068981C  6A 8F                     PUSH -0x71
0068981E  E8 1D C6 01 00            CALL 0x006a5e40
00689823  68 14 8A 84 00            PUSH 0x848a14
00689828  E8 10 81 D7 FF            CALL 0x0040193d
0068982D  83 C4 04                  ADD ESP,0x4
00689830  E9 C1 A7 FF FF            JMP 0x00683ff6
LAB_00689835:
00689835  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068983B  68 D1 09 00 00            PUSH 0x9d1
00689840  68 04 56 7D 00            PUSH 0x7d5604
00689845  52                        PUSH EDX
00689846  6A 8E                     PUSH -0x72
00689848  E8 F3 C5 01 00            CALL 0x006a5e40
0068984D  68 14 8A 84 00            PUSH 0x848a14
00689852  E8 E6 80 D7 FF            CALL 0x0040193d
00689857  83 C4 04                  ADD ESP,0x4
0068985A  E9 97 A7 FF FF            JMP 0x00683ff6
LAB_0068985f:
0068985F  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00689864  8B C8                     MOV ECX,EAX
00689866  C1 E1 04                  SHL ECX,0x4
00689869  03 C8                     ADD ECX,EAX
0068986B  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0068986E  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00689871  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
00689874  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00689877  83 3C 95 94 1A 81 00 02   CMP dword ptr [EDX*0x4 + 0x811a94],0x2
0068987F  75 1C                     JNZ 0x0068989d
00689881  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689886  68 38 09 00 00            PUSH 0x938
0068988B  68 04 56 7D 00            PUSH 0x7d5604
00689890  50                        PUSH EAX
00689891  6A 8F                     PUSH -0x71
00689893  E8 A8 C5 01 00            CALL 0x006a5e40
00689898  A1 B0 88 84 00            MOV EAX,[0x008488b0]
LAB_0068989d:
0068989D  8B C8                     MOV ECX,EAX
0068989F  C1 E1 04                  SHL ECX,0x4
006898A2  03 C8                     ADD ECX,EAX
006898A4  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006898A7  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
006898AA  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
006898AD  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
006898B0  39 3C 95 94 1A 81 00      CMP dword ptr [EDX*0x4 + 0x811a94],EDI
006898B7  74 1C                     JZ 0x006898d5
006898B9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006898BE  68 39 09 00 00            PUSH 0x939
006898C3  68 04 56 7D 00            PUSH 0x7d5604
006898C8  50                        PUSH EAX
006898C9  6A 97                     PUSH -0x69
006898CB  E8 70 C5 01 00            CALL 0x006a5e40
006898D0  A1 B0 88 84 00            MOV EAX,[0x008488b0]
LAB_006898d5:
006898D5  8B 0D 14 8A 84 00         MOV ECX,dword ptr [0x00848a14]
006898DB  39 59 04                  CMP dword ptr [ECX + 0x4],EBX
006898DE  7F 1D                     JG 0x006898fd
006898E0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006898E6  68 3A 09 00 00            PUSH 0x93a
006898EB  68 04 56 7D 00            PUSH 0x7d5604
006898F0  52                        PUSH EDX
006898F1  6A 97                     PUSH -0x69
006898F3  E8 48 C5 01 00            CALL 0x006a5e40
006898F8  A1 B0 88 84 00            MOV EAX,[0x008488b0]
LAB_006898fd:
006898FD  8B C8                     MOV ECX,EAX
006898FF  C1 E1 04                  SHL ECX,0x4
00689902  03 C8                     ADD ECX,EAX
00689904  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00689907  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0068990A  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
0068990D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689910  C1 E0 02                  SHL EAX,0x2
00689913  8B 88 E4 1A 81 00         MOV ECX,dword ptr [EAX + 0x811ae4]
00689919  83 C1 FE                  ADD ECX,-0x2
0068991C  83 F9 3C                  CMP ECX,0x3c
0068991F  0F 87 F4 08 00 00         JA 0x0068a219
00689925  33 D2                     XOR EDX,EDX
00689927  8A 91 F4 AF 68 00         MOV DL,byte ptr [ECX + 0x68aff4]
switchD_0068992d::switchD:
0068992D  FF 24 95 E4 AF 68 00      JMP dword ptr [EDX*0x4 + 0x68afe4]
switchD_0068992d::caseD_4:
00689934  8B 88 9C 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a9c]
0068993A  83 F9 05                  CMP ECX,0x5
0068993D  74 0F                     JZ 0x0068994e
0068993F  83 F9 06                  CMP ECX,0x6
00689942  74 0A                     JZ 0x0068994e
00689944  83 F9 07                  CMP ECX,0x7
00689947  74 05                     JZ 0x0068994e
00689949  83 F9 08                  CMP ECX,0x8
0068994C  75 11                     JNZ 0x0068995f
LAB_0068994e:
0068994E  8D 80 A4 1A 81 00         LEA EAX,[EAX + 0x811aa4]
00689954  50                        PUSH EAX
00689955  6A 8C                     PUSH -0x74
00689957  E8 B5 BA D7 FF            CALL 0x00405411
0068995C  83 C4 08                  ADD ESP,0x8
LAB_0068995f:
0068995F  8B 0D 14 8A 84 00         MOV ECX,dword ptr [0x00848a14]
00689965  53                        PUSH EBX
00689966  51                        PUSH ECX
00689967  E8 0D 9E D7 FF            CALL 0x00403779
0068996C  8B 15 14 8A 84 00         MOV EDX,dword ptr [0x00848a14]
00689972  8B F0                     MOV ESI,EAX
00689974  83 C4 08                  ADD ESP,0x8
00689977  83 7A 04 01               CMP dword ptr [EDX + 0x4],0x1
0068997B  0F 85 99 03 00 00         JNZ 0x00689d1a
00689981  8A 1E                     MOV BL,byte ptr [ESI]
00689983  80 FB 07                  CMP BL,0x7
00689986  0F 84 8E 03 00 00         JZ 0x00689d1a
0068998C  8B C3                     MOV EAX,EBX
0068998E  25 FF 00 00 00            AND EAX,0xff
00689993  48                        DEC EAX
00689994  83 F8 05                  CMP EAX,0x5
00689997  0F 87 65 03 00 00         JA 0x00689d02
switchD_0068999d::switchD:
0068999D  FF 24 85 34 B0 68 00      JMP dword ptr [EAX*0x4 + 0x68b034]
switchD_0068999d::caseD_1:
006899A4  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006899AA  8B C1                     MOV EAX,ECX
006899AC  C1 E0 04                  SHL EAX,0x4
006899AF  03 C1                     ADD EAX,ECX
006899B1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006899B4  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006899B7  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006899BA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006899BD  C1 E0 02                  SHL EAX,0x2
006899C0  8B 90 9C 1A 81 00         MOV EDX,dword ptr [EAX + 0x811a9c]
006899C6  85 D2                     TEST EDX,EDX
006899C8  0F 84 10 01 00 00         JZ 0x00689ade
006899CE  83 EA 02                  SUB EDX,0x2
006899D1  0F 84 A7 00 00 00         JZ 0x00689a7e
006899D7  4A                        DEC EDX
006899D8  74 32                     JZ 0x00689a0c
006899DA  8D 80 A4 1A 81 00         LEA EAX,[EAX + 0x811aa4]
006899E0  50                        PUSH EAX
006899E1  6A 8C                     PUSH -0x74
006899E3  E8 29 BA D7 FF            CALL 0x00405411
006899E8  A1 B0 88 84 00            MOV EAX,[0x008488b0]
006899ED  83 C4 08                  ADD ESP,0x8
006899F0  83 E8 02                  SUB EAX,0x2
006899F3  33 DB                     XOR EBX,EBX
006899F5  68 14 8A 84 00            PUSH 0x848a14
006899FA  A3 B0 88 84 00            MOV [0x008488b0],EAX
006899FF  E8 39 7F D7 FF            CALL 0x0040193d
00689A04  83 C4 04                  ADD ESP,0x4
00689A07  E9 EA A5 FF FF            JMP 0x00683ff6
LAB_00689a0c:
00689A0C  80 FB 02                  CMP BL,0x2
00689A0F  75 0B                     JNZ 0x00689a1c
00689A11  8B 56 01                  MOV EDX,dword ptr [ESI + 0x1]
00689A14  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
00689A1A  EB 19                     JMP 0x00689a35
LAB_00689a1c:
00689A1C  0F BF 46 01               MOVSX EAX,word ptr [ESI + 0x1]
00689A20  50                        PUSH EAX
00689A21  E8 35 AC D7 FF            CALL 0x0040465b
00689A26  D9 9D 7C FF FF FF         FSTP float ptr [EBP + 0xffffff7c]
00689A2C  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689A32  83 C4 04                  ADD ESP,0x4
LAB_00689a35:
00689A35  8B C1                     MOV EAX,ECX
00689A37  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
00689A3D  C1 E0 04                  SHL EAX,0x4
00689A40  03 C1                     ADD EAX,ECX
00689A42  52                        PUSH EDX
00689A43  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689A46  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689A49  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00689A4C  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00689A4F  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00689A56  52                        PUSH EDX
00689A57  E8 59 84 D7 FF            CALL 0x00401eb5
00689A5C  83 C4 08                  ADD ESP,0x8
00689A5F  85 C0                     TEST EAX,EAX
00689A61  0F 8D C9 07 00 00         JGE 0x0068a230
00689A67  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689A6D  68 48 09 00 00            PUSH 0x948
00689A72  68 04 56 7D 00            PUSH 0x7d5604
00689A77  51                        PUSH ECX
00689A78  50                        PUSH EAX
00689A79  E9 AD 07 00 00            JMP 0x0068a22b
LAB_00689a7e:
00689A7E  80 FB 01                  CMP BL,0x1
00689A81  75 05                     JNZ 0x00689a88
00689A83  8B 46 01                  MOV EAX,dword ptr [ESI + 0x1]
00689A86  EB 13                     JMP 0x00689a9b
LAB_00689a88:
00689A88  0F BF 56 01               MOVSX EDX,word ptr [ESI + 0x1]
00689A8C  52                        PUSH EDX
00689A8D  E8 7F 91 D7 FF            CALL 0x00402c11
00689A92  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689A98  83 C4 04                  ADD ESP,0x4
LAB_00689a9b:
00689A9B  50                        PUSH EAX
00689A9C  8B C1                     MOV EAX,ECX
00689A9E  C1 E0 04                  SHL EAX,0x4
00689AA1  03 C1                     ADD EAX,ECX
00689AA3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689AA6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689AA9  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00689AAC  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00689AAF  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00689AB6  52                        PUSH EDX
00689AB7  E8 63 B0 D7 FF            CALL 0x00404b1f
00689ABC  83 C4 08                  ADD ESP,0x8
00689ABF  85 C0                     TEST EAX,EAX
00689AC1  0F 8D 69 07 00 00         JGE 0x0068a230
00689AC7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689ACD  68 4C 09 00 00            PUSH 0x94c
00689AD2  68 04 56 7D 00            PUSH 0x7d5604
00689AD7  51                        PUSH ECX
00689AD8  50                        PUSH EAX
00689AD9  E9 4D 07 00 00            JMP 0x0068a22b
LAB_00689ade:
00689ADE  80 FB 01                  CMP BL,0x1
00689AE1  75 05                     JNZ 0x00689ae8
00689AE3  8B 46 01                  MOV EAX,dword ptr [ESI + 0x1]
00689AE6  EB 13                     JMP 0x00689afb
LAB_00689ae8:
00689AE8  0F BF 56 01               MOVSX EDX,word ptr [ESI + 0x1]
00689AEC  52                        PUSH EDX
00689AED  E8 1F 91 D7 FF            CALL 0x00402c11
00689AF2  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689AF8  83 C4 04                  ADD ESP,0x4
LAB_00689afb:
00689AFB  50                        PUSH EAX
00689AFC  8B C1                     MOV EAX,ECX
00689AFE  C1 E0 04                  SHL EAX,0x4
00689B01  03 C1                     ADD EAX,ECX
00689B03  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689B06  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689B09  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
00689B0C  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00689B0F  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00689B16  52                        PUSH EDX
00689B17  E8 03 B0 D7 FF            CALL 0x00404b1f
00689B1C  83 C4 08                  ADD ESP,0x8
00689B1F  85 C0                     TEST EAX,EAX
00689B21  0F 8D 09 07 00 00         JGE 0x0068a230
00689B27  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689B2D  68 53 09 00 00            PUSH 0x953
00689B32  68 04 56 7D 00            PUSH 0x7d5604
00689B37  51                        PUSH ECX
00689B38  50                        PUSH EAX
00689B39  E9 ED 06 00 00            JMP 0x0068a22b
switchD_0068999d::caseD_2:
00689B3E  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689B44  8B C1                     MOV EAX,ECX
00689B46  C1 E0 04                  SHL EAX,0x4
00689B49  03 C1                     ADD EAX,ECX
00689B4B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689B4E  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00689B51  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00689B54  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689B57  C1 E0 02                  SHL EAX,0x2
00689B5A  8B 90 9C 1A 81 00         MOV EDX,dword ptr [EAX + 0x811a9c]
00689B60  85 D2                     TEST EDX,EDX
00689B62  74 1C                     JZ 0x00689b80
00689B64  83 FA 03                  CMP EDX,0x3
00689B67  74 17                     JZ 0x00689b80
00689B69  8D 80 A4 1A 81 00         LEA EAX,[EAX + 0x811aa4]
00689B6F  50                        PUSH EAX
00689B70  6A 8C                     PUSH -0x74
00689B72  E8 9A B8 D7 FF            CALL 0x00405411
00689B77  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689B7D  83 C4 08                  ADD ESP,0x8
LAB_00689b80:
00689B80  80 3E 02                  CMP byte ptr [ESI],0x2
00689B83  75 0B                     JNZ 0x00689b90
00689B85  8B 56 01                  MOV EDX,dword ptr [ESI + 0x1]
00689B88  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
00689B8E  EB 19                     JMP 0x00689ba9
LAB_00689b90:
00689B90  0F BF 46 01               MOVSX EAX,word ptr [ESI + 0x1]
00689B94  50                        PUSH EAX
00689B95  E8 C1 AA D7 FF            CALL 0x0040465b
00689B9A  D9 9D 78 FF FF FF         FSTP float ptr [EBP + 0xffffff78]
00689BA0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689BA6  83 C4 04                  ADD ESP,0x4
LAB_00689ba9:
00689BA9  8B C1                     MOV EAX,ECX
00689BAB  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00689BB1  C1 E0 04                  SHL EAX,0x4
00689BB4  03 C1                     ADD EAX,ECX
00689BB6  52                        PUSH EDX
00689BB7  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689BBA  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689BBD  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00689BC0  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00689BC3  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00689BCA  52                        PUSH EDX
00689BCB  E8 E5 82 D7 FF            CALL 0x00401eb5
00689BD0  83 C4 08                  ADD ESP,0x8
00689BD3  85 C0                     TEST EAX,EAX
00689BD5  0F 8D 55 06 00 00         JGE 0x0068a230
00689BDB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689BE1  68 5A 09 00 00            PUSH 0x95a
00689BE6  68 04 56 7D 00            PUSH 0x7d5604
00689BEB  51                        PUSH ECX
00689BEC  50                        PUSH EAX
00689BED  E9 39 06 00 00            JMP 0x0068a22b
switchD_0068999d::caseD_3:
00689BF2  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689BF8  8B C1                     MOV EAX,ECX
00689BFA  C1 E0 04                  SHL EAX,0x4
00689BFD  03 C1                     ADD EAX,ECX
00689BFF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689C02  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00689C05  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00689C08  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689C0B  C1 E0 02                  SHL EAX,0x2
00689C0E  8B 90 9C 1A 81 00         MOV EDX,dword ptr [EAX + 0x811a9c]
00689C14  85 D2                     TEST EDX,EDX
00689C16  74 1C                     JZ 0x00689c34
00689C18  83 FA 01                  CMP EDX,0x1
00689C1B  74 17                     JZ 0x00689c34
00689C1D  8D 80 A4 1A 81 00         LEA EAX,[EAX + 0x811aa4]
00689C23  50                        PUSH EAX
00689C24  6A 8C                     PUSH -0x74
00689C26  E8 E6 B7 D7 FF            CALL 0x00405411
00689C2B  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689C31  83 C4 08                  ADD ESP,0x8
LAB_00689c34:
00689C34  8B C1                     MOV EAX,ECX
00689C36  C1 E0 04                  SHL EAX,0x4
00689C39  03 C1                     ADD EAX,ECX
00689C3B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689C3E  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00689C41  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00689C44  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689C47  C1 E0 02                  SHL EAX,0x2
00689C4A  8B 88 9C 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a9c]
00689C50  85 C9                     TEST ECX,ECX
00689C52  75 38                     JNZ 0x00689c8c
00689C54  80 3E 03                  CMP byte ptr [ESI],0x3
00689C57  75 33                     JNZ 0x00689c8c
00689C59  0F BF 4E 01               MOVSX ECX,word ptr [ESI + 0x1]
00689C5D  8D 90 A4 1A 81 00         LEA EDX,[EAX + 0x811aa4]
00689C63  51                        PUSH ECX
00689C64  52                        PUSH EDX
00689C65  E8 C6 A2 D7 FF            CALL 0x00403f30
00689C6A  83 C4 08                  ADD ESP,0x8
00689C6D  85 C0                     TEST EAX,EAX
00689C6F  0F 85 BB 05 00 00         JNZ 0x0068a230
00689C75  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689C7A  68 61 09 00 00            PUSH 0x961
00689C7F  68 04 56 7D 00            PUSH 0x7d5604
00689C84  50                        PUSH EAX
00689C85  6A 95                     PUSH -0x6b
00689C87  E9 9F 05 00 00            JMP 0x0068a22b
LAB_00689c8c:
00689C8C  0F BF 4E 01               MOVSX ECX,word ptr [ESI + 0x1]
00689C90  51                        PUSH ECX
00689C91  E8 A4 98 D7 FF            CALL 0x0040353a
00689C96  8B F0                     MOV ESI,EAX
00689C98  83 C4 04                  ADD ESP,0x4
00689C9B  85 F6                     TEST ESI,ESI
00689C9D  75 18                     JNZ 0x00689cb7
00689C9F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00689CA5  68 64 09 00 00            PUSH 0x964
00689CAA  68 04 56 7D 00            PUSH 0x7d5604
00689CAF  52                        PUSH EDX
00689CB0  6A 95                     PUSH -0x6b
00689CB2  E8 89 C1 01 00            CALL 0x006a5e40
LAB_00689cb7:
00689CB7  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689CBD  6A 00                     PUSH 0x0
00689CBF  8B C1                     MOV EAX,ECX
00689CC1  56                        PUSH ESI
00689CC2  C1 E0 04                  SHL EAX,0x4
00689CC5  03 C1                     ADD EAX,ECX
00689CC7  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689CCA  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689CCD  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00689CD0  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00689CD3  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
00689CDA  52                        PUSH EDX
00689CDB  E8 60 92 D7 FF            CALL 0x00402f40
00689CE0  83 C4 0C                  ADD ESP,0xc
00689CE3  85 C0                     TEST EAX,EAX
00689CE5  0F 85 45 05 00 00         JNZ 0x0068a230
00689CEB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689CF0  68 65 09 00 00            PUSH 0x965
00689CF5  68 04 56 7D 00            PUSH 0x7d5604
00689CFA  50                        PUSH EAX
00689CFB  6A FE                     PUSH -0x2
00689CFD  E9 29 05 00 00            JMP 0x0068a22b
switchD_0068999d::default:
00689D02  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689D08  68 69 09 00 00            PUSH 0x969
00689D0D  68 04 56 7D 00            PUSH 0x7d5604
00689D12  51                        PUSH ECX
00689D13  6A 95                     PUSH -0x6b
00689D15  E9 11 05 00 00            JMP 0x0068a22b
LAB_00689d1a:
00689D1A  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689D20  8B C1                     MOV EAX,ECX
00689D22  C1 E0 04                  SHL EAX,0x4
00689D25  03 C1                     ADD EAX,ECX
00689D27  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689D2A  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00689D2D  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00689D30  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689D33  C1 E0 02                  SHL EAX,0x2
00689D36  8B 90 9C 1A 81 00         MOV EDX,dword ptr [EAX + 0x811a9c]
00689D3C  85 D2                     TEST EDX,EDX
00689D3E  74 1C                     JZ 0x00689d5c
00689D40  83 FA 04                  CMP EDX,0x4
00689D43  74 17                     JZ 0x00689d5c
00689D45  8D 80 A4 1A 81 00         LEA EAX,[EAX + 0x811aa4]
00689D4B  50                        PUSH EAX
00689D4C  6A 8C                     PUSH -0x74
00689D4E  E8 BE B6 D7 FF            CALL 0x00405411
00689D53  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689D59  83 C4 08                  ADD ESP,0x8
LAB_00689d5c:
00689D5C  8B C1                     MOV EAX,ECX
00689D5E  C1 E0 04                  SHL EAX,0x4
00689D61  03 C1                     ADD EAX,ECX
00689D63  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689D66  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00689D69  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00689D6C  8B 15 14 8A 84 00         MOV EDX,dword ptr [0x00848a14]
00689D72  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689D75  8D 0C 85 A4 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa4]
00689D7C  51                        PUSH ECX
00689D7D  52                        PUSH EDX
00689D7E  E8 4A A5 D7 FF            CALL 0x004042cd
00689D83  83 C4 08                  ADD ESP,0x8
00689D86  85 C0                     TEST EAX,EAX
00689D88  7D 17                     JGE 0x00689da1
00689D8A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689D90  68 6E 09 00 00            PUSH 0x96e
00689D95  68 04 56 7D 00            PUSH 0x7d5604
00689D9A  51                        PUSH ECX
00689D9B  50                        PUSH EAX
00689D9C  E8 9F C0 01 00            CALL 0x006a5e40
LAB_00689da1:
00689DA1  A1 B0 88 84 00            MOV EAX,[0x008488b0]
00689DA6  68 14 8A 84 00            PUSH 0x848a14
00689DAB  83 E8 02                  SUB EAX,0x2
00689DAE  C7 05 14 8A 84 00 00 00 00 00  MOV dword ptr [0x00848a14],0x0
00689DB8  A3 B0 88 84 00            MOV [0x008488b0],EAX
00689DBD  33 DB                     XOR EBX,EBX
00689DBF  E8 79 7B D7 FF            CALL 0x0040193d
00689DC4  83 C4 04                  ADD ESP,0x4
00689DC7  E9 2A A2 FF FF            JMP 0x00683ff6
switchD_0068992d::caseD_5:
00689DCC  8B 88 9C 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a9c]
00689DD2  83 F9 05                  CMP ECX,0x5
00689DD5  74 20                     JZ 0x00689df7
00689DD7  83 F9 06                  CMP ECX,0x6
00689DDA  74 1B                     JZ 0x00689df7
00689DDC  83 F9 07                  CMP ECX,0x7
00689DDF  74 16                     JZ 0x00689df7
00689DE1  83 F9 08                  CMP ECX,0x8
00689DE4  74 11                     JZ 0x00689df7
00689DE6  8D 90 A4 1A 81 00         LEA EDX,[EAX + 0x811aa4]
00689DEC  52                        PUSH EDX
00689DED  6A 8C                     PUSH -0x74
00689DEF  E8 1D B6 D7 FF            CALL 0x00405411
00689DF4  83 C4 08                  ADD ESP,0x8
LAB_00689df7:
00689DF7  E8 D4 7E D7 FF            CALL 0x00401cd0
00689DFC  8B F0                     MOV ESI,EAX
00689DFE  3B F3                     CMP ESI,EBX
00689E00  75 1A                     JNZ 0x00689e1c
00689E02  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00689E07  68 77 09 00 00            PUSH 0x977
00689E0C  68 04 56 7D 00            PUSH 0x7d5604
00689E11  50                        PUSH EAX
00689E12  68 72 FF FF FF            PUSH 0xffffff72
00689E17  E8 24 C0 01 00            CALL 0x006a5e40
LAB_00689e1c:
00689E1C  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
00689E22  75 1B                     JNZ 0x00689e3f
00689E24  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00689E2A  68 78 09 00 00            PUSH 0x978
00689E2F  68 04 56 7D 00            PUSH 0x7d5604
00689E34  51                        PUSH ECX
00689E35  68 71 FF FF FF            PUSH 0xffffff71
00689E3A  E8 01 C0 01 00            CALL 0x006a5e40
LAB_00689e3f:
00689E3F  66 8B 96 72 04 00 00      MOV DX,word ptr [ESI + 0x472]
00689E46  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689E4C  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
00689E52  8B 86 56 04 00 00         MOV EAX,dword ptr [ESI + 0x456]
00689E58  50                        PUSH EAX
00689E59  8B C1                     MOV EAX,ECX
00689E5B  C1 E0 04                  SHL EAX,0x4
00689E5E  03 C1                     ADD EAX,ECX
00689E60  8D BE 6E 04 00 00         LEA EDI,[ESI + 0x46e]
00689E66  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689E69  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00689E6C  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00689E6F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689E72  8D 0C 85 A0 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa0]
00689E79  51                        PUSH ECX
00689E7A  6A 02                     PUSH 0x2
00689E7C  57                        PUSH EDI
00689E7D  E8 63 A0 D7 FF            CALL 0x00403ee5
00689E82  8B 15 14 8A 84 00         MOV EDX,dword ptr [0x00848a14]
00689E88  6A 00                     PUSH 0x0
00689E8A  52                        PUSH EDX
00689E8B  E8 E9 98 D7 FF            CALL 0x00403779
00689E90  8B D8                     MOV EBX,EAX
00689E92  A1 14 8A 84 00            MOV EAX,[0x00848a14]
00689E97  83 C4 18                  ADD ESP,0x18
00689E9A  83 78 04 01               CMP dword ptr [EAX + 0x4],0x1
00689E9E  0F 85 B1 00 00 00         JNZ 0x00689f55
00689EA4  8A 0B                     MOV CL,byte ptr [EBX]
00689EA6  80 F9 07                  CMP CL,0x7
00689EA9  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
00689EAC  0F 84 A3 00 00 00         JZ 0x00689f55
00689EB2  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689EB8  8B C1                     MOV EAX,ECX
00689EBA  C1 E0 04                  SHL EAX,0x4
00689EBD  03 C1                     ADD EAX,ECX
00689EBF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689EC2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689EC5  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00689EC8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689ECB  C1 E0 02                  SHL EAX,0x2
00689ECE  8B 90 9C 1A 81 00         MOV EDX,dword ptr [EAX + 0x811a9c]
00689ED4  83 FA 05                  CMP EDX,0x5
00689ED7  0F 8C 8F 00 00 00         JL 0x00689f6c
00689EDD  83 FA 07                  CMP EDX,0x7
00689EE0  7E 3F                     JLE 0x00689f21
00689EE2  83 FA 08                  CMP EDX,0x8
00689EE5  0F 85 81 00 00 00         JNZ 0x00689f6c
00689EEB  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
00689EEE  80 F9 06                  CMP CL,0x6
00689EF1  74 16                     JZ 0x00689f09
00689EF3  80 F9 03                  CMP CL,0x3
00689EF6  74 11                     JZ 0x00689f09
00689EF8  8D 88 A4 1A 81 00         LEA ECX,[EAX + 0x811aa4]
00689EFE  51                        PUSH ECX
00689EFF  6A 8C                     PUSH -0x74
00689F01  E8 0B B5 D7 FF            CALL 0x00405411
00689F06  83 C4 08                  ADD ESP,0x8
LAB_00689f09:
00689F09  8B 96 56 04 00 00         MOV EDX,dword ptr [ESI + 0x456]
00689F0F  8B 43 01                  MOV EAX,dword ptr [EBX + 0x1]
00689F12  52                        PUSH EDX
00689F13  50                        PUSH EAX
00689F14  6A 01                     PUSH 0x1
00689F16  57                        PUSH EDI
00689F17  E8 C9 9F D7 FF            CALL 0x00403ee5
00689F1C  83 C4 10                  ADD ESP,0x10
00689F1F  EB 45                     JMP 0x00689f66
LAB_00689f21:
00689F21  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
00689F24  80 F9 04                  CMP CL,0x4
00689F27  74 16                     JZ 0x00689f3f
00689F29  80 F9 01                  CMP CL,0x1
00689F2C  74 11                     JZ 0x00689f3f
00689F2E  8D 88 A4 1A 81 00         LEA ECX,[EAX + 0x811aa4]
00689F34  51                        PUSH ECX
00689F35  6A 8C                     PUSH -0x74
00689F37  E8 D5 B4 D7 FF            CALL 0x00405411
00689F3C  83 C4 08                  ADD ESP,0x8
LAB_00689f3f:
00689F3F  8B 96 56 04 00 00         MOV EDX,dword ptr [ESI + 0x456]
00689F45  43                        INC EBX
00689F46  52                        PUSH EDX
00689F47  53                        PUSH EBX
00689F48  6A 02                     PUSH 0x2
00689F4A  57                        PUSH EDI
00689F4B  E8 95 9F D7 FF            CALL 0x00403ee5
00689F50  83 C4 10                  ADD ESP,0x10
00689F53  EB 11                     JMP 0x00689f66
LAB_00689f55:
00689F55  8B 8E 56 04 00 00         MOV ECX,dword ptr [ESI + 0x456]
00689F5B  51                        PUSH ECX
00689F5C  50                        PUSH EAX
00689F5D  57                        PUSH EDI
00689F5E  E8 4C 94 D7 FF            CALL 0x004033af
00689F63  83 C4 0C                  ADD ESP,0xc
LAB_00689f66:
00689F66  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
LAB_00689f6c:
00689F6C  8B C1                     MOV EAX,ECX
00689F6E  BB 03 00 00 00            MOV EBX,0x3
00689F73  C1 E0 04                  SHL EAX,0x4
00689F76  03 C1                     ADD EAX,ECX
00689F78  33 D2                     XOR EDX,EDX
00689F7A  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00689F7D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689F80  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00689F83  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00689F86  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00689F89  8B 04 8D 9C 1A 81 00      MOV EAX,dword ptr [ECX*0x4 + 0x811a9c]
00689F90  83 C0 FB                  ADD EAX,-0x5
00689F93  3B C3                     CMP EAX,EBX
00689F95  77 21                     JA 0x00689fb8
switchD_00689f97::switchD:
00689F97  FF 24 85 4C B0 68 00      JMP dword ptr [EAX*0x4 + 0x68b04c]
switchD_00689f97::caseD_5:
00689F9E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00689FA1  EB 15                     JMP 0x00689fb8
switchD_00689f97::caseD_6:
00689FA3  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
00689FAA  EB 0C                     JMP 0x00689fb8
switchD_00689f97::caseD_7:
00689FAC  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
00689FB3  EB 03                     JMP 0x00689fb8
switchD_00689f97::caseD_8:
00689FB5  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
switchD_00689f97::default:
00689FB8  8B 96 56 04 00 00         MOV EDX,dword ptr [ESI + 0x456]
00689FBE  8D 45 F0                  LEA EAX,[EBP + -0x10]
00689FC1  52                        PUSH EDX
00689FC2  50                        PUSH EAX
00689FC3  6A 02                     PUSH 0x2
00689FC5  57                        PUSH EDI
00689FC6  E8 1A 9F D7 FF            CALL 0x00403ee5
00689FCB  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00689FD1  C6 45 90 0B               MOV byte ptr [EBP + -0x70],0xb
00689FD5  8B C1                     MOV EAX,ECX
00689FD7  66 89 5D 93               MOV word ptr [EBP + -0x6d],BX
00689FDB  C1 E0 04                  SHL EAX,0x4
00689FDE  03 C1                     ADD EAX,ECX
00689FE0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689FE3  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00689FE6  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00689FE9  8D 55 90                  LEA EDX,[EBP + -0x70]
00689FEC  52                        PUSH EDX
00689FED  57                        PUSH EDI
00689FEE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00689FF1  66 8B 0C 85 E4 1A 81 00   MOV CX,word ptr [EAX*0x4 + 0x811ae4]
00689FF9  66 89 4D 91               MOV word ptr [EBP + -0x6f],CX
00689FFD  E8 47 81 D7 FF            CALL 0x00402149
0068A002  83 C4 18                  ADD ESP,0x18
0068A005  8D 85 30 FF FF FF         LEA EAX,[EBP + 0xffffff30]
0068A00B  E9 D8 01 00 00            JMP 0x0068a1e8
switchD_0068992d::caseD_2:
0068A010  8B 88 9C 1A 81 00         MOV ECX,dword ptr [EAX + 0x811a9c]
0068A016  83 F9 05                  CMP ECX,0x5
0068A019  74 1B                     JZ 0x0068a036
0068A01B  83 F9 06                  CMP ECX,0x6
0068A01E  74 16                     JZ 0x0068a036
0068A020  83 F9 07                  CMP ECX,0x7
0068A023  74 11                     JZ 0x0068a036
0068A025  8D 80 A4 1A 81 00         LEA EAX,[EAX + 0x811aa4]
0068A02B  50                        PUSH EAX
0068A02C  6A 8C                     PUSH -0x74
0068A02E  E8 DE B3 D7 FF            CALL 0x00405411
0068A033  83 C4 08                  ADD ESP,0x8
LAB_0068a036:
0068A036  E8 95 7C D7 FF            CALL 0x00401cd0
0068A03B  8B F0                     MOV ESI,EAX
0068A03D  3B F3                     CMP ESI,EBX
0068A03F  75 1B                     JNZ 0x0068a05c
0068A041  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068A047  68 A7 09 00 00            PUSH 0x9a7
0068A04C  68 04 56 7D 00            PUSH 0x7d5604
0068A051  51                        PUSH ECX
0068A052  68 72 FF FF FF            PUSH 0xffffff72
0068A057  E8 E4 BD 01 00            CALL 0x006a5e40
LAB_0068a05c:
0068A05C  39 1D CC 89 84 00         CMP dword ptr [0x008489cc],EBX
0068A062  75 1B                     JNZ 0x0068a07f
0068A064  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068A06A  68 A8 09 00 00            PUSH 0x9a8
0068A06F  68 04 56 7D 00            PUSH 0x7d5604
0068A074  52                        PUSH EDX
0068A075  68 71 FF FF FF            PUSH 0xffffff71
0068A07A  E8 C1 BD 01 00            CALL 0x006a5e40
LAB_0068a07f:
0068A07F  66 8B 86 72 04 00 00      MOV AX,word ptr [ESI + 0x472]
0068A086  8D BE 6E 04 00 00         LEA EDI,[ESI + 0x46e]
0068A08C  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0068A092  8B 8E 56 04 00 00         MOV ECX,dword ptr [ESI + 0x456]
0068A098  51                        PUSH ECX
0068A099  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A09F  8B C1                     MOV EAX,ECX
0068A0A1  C1 E0 04                  SHL EAX,0x4
0068A0A4  03 C1                     ADD EAX,ECX
0068A0A6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A0A9  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068A0AC  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068A0AF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A0B2  8D 0C 85 A0 1A 81 00      LEA ECX,[EAX*0x4 + 0x811aa0]
0068A0B9  51                        PUSH ECX
0068A0BA  6A 02                     PUSH 0x2
0068A0BC  57                        PUSH EDI
0068A0BD  E8 23 9E D7 FF            CALL 0x00403ee5
0068A0C2  8B 15 14 8A 84 00         MOV EDX,dword ptr [0x00848a14]
0068A0C8  6A 00                     PUSH 0x0
0068A0CA  52                        PUSH EDX
0068A0CB  E8 A9 96 D7 FF            CALL 0x00403779
0068A0D0  8B D8                     MOV EBX,EAX
0068A0D2  A1 14 8A 84 00            MOV EAX,[0x00848a14]
0068A0D7  83 C4 18                  ADD ESP,0x18
0068A0DA  83 78 04 01               CMP dword ptr [EAX + 0x4],0x1
0068A0DE  75 52                     JNZ 0x0068a132
0068A0E0  8A 0B                     MOV CL,byte ptr [EBX]
0068A0E2  80 F9 07                  CMP CL,0x7
0068A0E5  74 4B                     JZ 0x0068a132
0068A0E7  80 F9 04                  CMP CL,0x4
0068A0EA  74 30                     JZ 0x0068a11c
0068A0EC  80 F9 01                  CMP CL,0x1
0068A0EF  74 2B                     JZ 0x0068a11c
0068A0F1  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A0F7  8B C1                     MOV EAX,ECX
0068A0F9  C1 E0 04                  SHL EAX,0x4
0068A0FC  03 C1                     ADD EAX,ECX
0068A0FE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A101  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068A104  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068A107  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068A10A  8D 14 8D A4 1A 81 00      LEA EDX,[ECX*0x4 + 0x811aa4]
0068A111  52                        PUSH EDX
0068A112  6A 8C                     PUSH -0x74
0068A114  E8 F8 B2 D7 FF            CALL 0x00405411
0068A119  83 C4 08                  ADD ESP,0x8
LAB_0068a11c:
0068A11C  8B 86 56 04 00 00         MOV EAX,dword ptr [ESI + 0x456]
0068A122  43                        INC EBX
0068A123  50                        PUSH EAX
0068A124  53                        PUSH EBX
0068A125  6A 02                     PUSH 0x2
0068A127  57                        PUSH EDI
0068A128  E8 B8 9D D7 FF            CALL 0x00403ee5
0068A12D  83 C4 10                  ADD ESP,0x10
0068A130  EB 11                     JMP 0x0068a143
LAB_0068a132:
0068A132  8B 8E 56 04 00 00         MOV ECX,dword ptr [ESI + 0x456]
0068A138  51                        PUSH ECX
0068A139  50                        PUSH EAX
0068A13A  57                        PUSH EDI
0068A13B  E8 6F 92 D7 FF            CALL 0x004033af
0068A140  83 C4 0C                  ADD ESP,0xc
LAB_0068a143:
0068A143  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A149  BB 03 00 00 00            MOV EBX,0x3
0068A14E  8B C1                     MOV EAX,ECX
0068A150  33 D2                     XOR EDX,EDX
0068A152  C1 E0 04                  SHL EAX,0x4
0068A155  03 C1                     ADD EAX,ECX
0068A157  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0068A15A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A15D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068A160  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068A163  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0068A166  8B 04 8D 9C 1A 81 00      MOV EAX,dword ptr [ECX*0x4 + 0x811a9c]
0068A16D  83 C0 FB                  ADD EAX,-0x5
0068A170  3B C3                     CMP EAX,EBX
0068A172  77 21                     JA 0x0068a195
switchD_0068a174::switchD:
0068A174  FF 24 85 5C B0 68 00      JMP dword ptr [EAX*0x4 + 0x68b05c]
switchD_0068a174::caseD_5:
0068A17B  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0068A17E  EB 15                     JMP 0x0068a195
switchD_0068a174::caseD_6:
0068A180  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
0068A187  EB 0C                     JMP 0x0068a195
switchD_0068a174::caseD_7:
0068A189  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
0068A190  EB 03                     JMP 0x0068a195
switchD_0068a174::caseD_8:
0068A192  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
switchD_0068a174::default:
0068A195  8B 96 56 04 00 00         MOV EDX,dword ptr [ESI + 0x456]
0068A19B  8D 45 E8                  LEA EAX,[EBP + -0x18]
0068A19E  52                        PUSH EDX
0068A19F  50                        PUSH EAX
0068A1A0  6A 02                     PUSH 0x2
0068A1A2  57                        PUSH EDI
0068A1A3  E8 3D 9D D7 FF            CALL 0x00403ee5
0068A1A8  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A1AE  C6 45 80 0B               MOV byte ptr [EBP + -0x80],0xb
0068A1B2  8B C1                     MOV EAX,ECX
0068A1B4  66 89 5D 83               MOV word ptr [EBP + -0x7d],BX
0068A1B8  C1 E0 04                  SHL EAX,0x4
0068A1BB  03 C1                     ADD EAX,ECX
0068A1BD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A1C0  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068A1C3  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068A1C6  8D 55 80                  LEA EDX,[EBP + -0x80]
0068A1C9  52                        PUSH EDX
0068A1CA  57                        PUSH EDI
0068A1CB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A1CE  66 8B 0C 85 E4 1A 81 00   MOV CX,word ptr [EAX*0x4 + 0x811ae4]
0068A1D6  66 89 4D 81               MOV word ptr [EBP + -0x7f],CX
0068A1DA  E8 6A 7F D7 FF            CALL 0x00402149
0068A1DF  83 C4 18                  ADD ESP,0x18
0068A1E2  8D 85 54 FF FF FF         LEA EAX,[EBP + 0xffffff54]
LAB_0068a1e8:
0068A1E8  8B 0D CC 89 84 00         MOV ECX,dword ptr [0x008489cc]
0068A1EE  50                        PUSH EAX
0068A1EF  8B 51 0F                  MOV EDX,dword ptr [ECX + 0xf]
0068A1F2  52                        PUSH EDX
0068A1F3  E8 C8 3F 02 00            CALL 0x006ae1c0
0068A1F8  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068A1FD  68 14 8A 84 00            PUSH 0x848a14
0068A202  83 E8 02                  SUB EAX,0x2
0068A205  33 DB                     XOR EBX,EBX
0068A207  A3 B0 88 84 00            MOV [0x008488b0],EAX
0068A20C  E8 2C 77 D7 FF            CALL 0x0040193d
0068A211  83 C4 04                  ADD ESP,0x4
0068A214  E9 DD 9D FF FF            JMP 0x00683ff6
switchD_0068992d::caseD_3:
0068A219  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068A21E  68 C8 09 00 00            PUSH 0x9c8
0068A223  68 04 56 7D 00            PUSH 0x7d5604
0068A228  50                        PUSH EAX
0068A229  6A 97                     PUSH -0x69
LAB_0068a22b:
0068A22B  E8 10 BC 01 00            CALL 0x006a5e40
LAB_0068a230:
0068A230  A1 B0 88 84 00            MOV EAX,[0x008488b0]
0068A235  68 14 8A 84 00            PUSH 0x848a14
0068A23A  83 E8 02                  SUB EAX,0x2
0068A23D  33 DB                     XOR EBX,EBX
0068A23F  A3 B0 88 84 00            MOV [0x008488b0],EAX
0068A244  E8 F4 76 D7 FF            CALL 0x0040193d
0068A249  83 C4 04                  ADD ESP,0x4
0068A24C  E9 A5 9D FF FF            JMP 0x00683ff6
LAB_0068a251:
0068A251  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A257  8B C1                     MOV EAX,ECX
0068A259  C1 E0 04                  SHL EAX,0x4
0068A25C  03 C1                     ADD EAX,ECX
0068A25E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A261  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068A264  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068A267  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A26A  83 3C 85 94 1A 81 00 02   CMP dword ptr [EAX*0x4 + 0x811a94],0x2
0068A272  74 1E                     JZ 0x0068a292
0068A274  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068A27A  68 06 09 00 00            PUSH 0x906
0068A27F  68 04 56 7D 00            PUSH 0x7d5604
0068A284  51                        PUSH ECX
0068A285  6A 97                     PUSH -0x69
0068A287  E8 B4 BB 01 00            CALL 0x006a5e40
0068A28C  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
LAB_0068a292:
0068A292  A1 14 8A 84 00            MOV EAX,[0x00848a14]
0068A297  39 58 04                  CMP dword ptr [EAX + 0x4],EBX
0068A29A  0F 8E C7 02 00 00         JLE 0x0068a567
0068A2A0  53                        PUSH EBX
0068A2A1  50                        PUSH EAX
0068A2A2  E8 D2 94 D7 FF            CALL 0x00403779
0068A2A7  8B 15 14 8A 84 00         MOV EDX,dword ptr [0x00848a14]
0068A2AD  83 C4 08                  ADD ESP,0x8
0068A2B0  39 7A 04                  CMP dword ptr [EDX + 0x4],EDI
0068A2B3  0F 85 10 02 00 00         JNZ 0x0068a4c9
0068A2B9  8A 08                     MOV CL,byte ptr [EAX]
0068A2BB  80 F9 07                  CMP CL,0x7
0068A2BE  0F 84 05 02 00 00         JZ 0x0068a4c9
0068A2C4  81 E1 FF 00 00 00         AND ECX,0xff
0068A2CA  49                        DEC ECX
0068A2CB  83 F9 05                  CMP ECX,0x5
0068A2CE  0F 87 D3 01 00 00         JA 0x0068a4a7
switchD_0068a2d4::switchD:
0068A2D4  FF 24 8D 6C B0 68 00      JMP dword ptr [ECX*0x4 + 0x68b06c]
switchD_0068a2d4::caseD_1:
0068A2DB  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A2E1  8B D1                     MOV EDX,ECX
0068A2E3  C1 E2 04                  SHL EDX,0x4
0068A2E6  03 D1                     ADD EDX,ECX
0068A2E8  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A2EB  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0068A2EE  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0068A2F1  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A2F4  C1 E2 02                  SHL EDX,0x2
0068A2F7  8B B2 B0 10 81 00         MOV ESI,dword ptr [EDX + 0x8110b0]
0068A2FD  C6 84 32 B4 10 81 00 02   MOV byte ptr [EDX + ESI*0x1 + 0x8110b4],0x2
0068A305  8B B2 B0 10 81 00         MOV ESI,dword ptr [EDX + 0x8110b0]
0068A30B  46                        INC ESI
0068A30C  89 B2 B0 10 81 00         MOV dword ptr [EDX + 0x8110b0],ESI
0068A312  8A 10                     MOV DL,byte ptr [EAX]
0068A314  80 FA 01                  CMP DL,0x1
0068A317  75 05                     JNZ 0x0068a31e
0068A319  8B 40 01                  MOV EAX,dword ptr [EAX + 0x1]
0068A31C  EB 13                     JMP 0x0068a331
LAB_0068a31e:
0068A31E  0F BF 40 01               MOVSX EAX,word ptr [EAX + 0x1]
0068A322  50                        PUSH EAX
0068A323  E8 E9 88 D7 FF            CALL 0x00402c11
0068A328  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A32E  83 C4 04                  ADD ESP,0x4
LAB_0068a331:
0068A331  8B D1                     MOV EDX,ECX
0068A333  C1 E2 04                  SHL EDX,0x4
0068A336  03 D1                     ADD EDX,ECX
0068A338  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A33B  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0068A33E  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0068A341  8D 34 52                  LEA ESI,[EDX + EDX*0x2]
0068A344  8B D1                     MOV EDX,ECX
0068A346  C1 E2 04                  SHL EDX,0x4
0068A349  03 D1                     ADD EDX,ECX
0068A34B  8B 3C B5 68 F1 80 00      MOV EDI,dword ptr [ESI*0x4 + 0x80f168]
0068A352  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A355  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0068A358  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0068A35B  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A35E  03 D7                     ADD EDX,EDI
0068A360  89 04 95 6C F1 80 00      MOV dword ptr [EDX*0x4 + 0x80f16c],EAX
0068A367  8B 04 B5 68 F1 80 00      MOV EAX,dword ptr [ESI*0x4 + 0x80f168]
0068A36E  40                        INC EAX
0068A36F  89 04 B5 68 F1 80 00      MOV dword ptr [ESI*0x4 + 0x80f168],EAX
0068A376  E9 EC 01 00 00            JMP 0x0068a567
switchD_0068a2d4::caseD_2:
0068A37B  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A381  8B D1                     MOV EDX,ECX
0068A383  C1 E2 04                  SHL EDX,0x4
0068A386  03 D1                     ADD EDX,ECX
0068A388  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A38B  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0068A38E  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0068A391  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A394  C1 E2 02                  SHL EDX,0x2
0068A397  8B B2 B0 10 81 00         MOV ESI,dword ptr [EDX + 0x8110b0]
0068A39D  C6 84 32 B4 10 81 00 03   MOV byte ptr [EDX + ESI*0x1 + 0x8110b4],0x3
0068A3A5  8B B2 B0 10 81 00         MOV ESI,dword ptr [EDX + 0x8110b0]
0068A3AB  46                        INC ESI
0068A3AC  89 B2 B0 10 81 00         MOV dword ptr [EDX + 0x8110b0],ESI
0068A3B2  8A 10                     MOV DL,byte ptr [EAX]
0068A3B4  80 FA 02                  CMP DL,0x2
0068A3B7  75 05                     JNZ 0x0068a3be
0068A3B9  D9 40 01                  FLD float ptr [EAX + 0x1]
0068A3BC  EB 13                     JMP 0x0068a3d1
LAB_0068a3be:
0068A3BE  0F BF 40 01               MOVSX EAX,word ptr [EAX + 0x1]
0068A3C2  50                        PUSH EAX
0068A3C3  E8 93 A2 D7 FF            CALL 0x0040465b
0068A3C8  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A3CE  83 C4 04                  ADD ESP,0x4
LAB_0068a3d1:
0068A3D1  8B C1                     MOV EAX,ECX
0068A3D3  C1 E0 04                  SHL EAX,0x4
0068A3D6  03 C1                     ADD EAX,ECX
0068A3D8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A3DB  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0068A3DE  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0068A3E1  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0068A3E4  8B C1                     MOV EAX,ECX
0068A3E6  C1 E0 04                  SHL EAX,0x4
0068A3E9  03 C1                     ADD EAX,ECX
0068A3EB  8B 34 95 0C 01 81 00      MOV ESI,dword ptr [EDX*0x4 + 0x81010c]
0068A3F2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A3F5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068A3F8  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068A3FB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A3FE  03 C6                     ADD EAX,ESI
0068A400  D9 1C 85 10 01 81 00      FSTP float ptr [EAX*0x4 + 0x810110]
0068A407  FF 04 95 0C 01 81 00      INC dword ptr [EDX*0x4 + 0x81010c]
0068A40E  E9 54 01 00 00            JMP 0x0068a567
switchD_0068a2d4::caseD_3:
0068A413  8B 15 B0 88 84 00         MOV EDX,dword ptr [0x008488b0]
0068A419  8B CA                     MOV ECX,EDX
0068A41B  C1 E1 04                  SHL ECX,0x4
0068A41E  03 CA                     ADD ECX,EDX
0068A420  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0068A423  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0068A426  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
0068A429  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0068A42C  C1 E1 02                  SHL ECX,0x2
0068A42F  8B 91 B0 10 81 00         MOV EDX,dword ptr [ECX + 0x8110b0]
0068A435  C6 84 11 B4 10 81 00 01   MOV byte ptr [ECX + EDX*0x1 + 0x8110b4],0x1
0068A43D  8B B1 B0 10 81 00         MOV ESI,dword ptr [ECX + 0x8110b0]
0068A443  46                        INC ESI
0068A444  89 B1 B0 10 81 00         MOV dword ptr [ECX + 0x8110b0],ESI
0068A44A  0F BF 40 01               MOVSX EAX,word ptr [EAX + 0x1]
0068A44E  50                        PUSH EAX
0068A44F  E8 E6 90 D7 FF            CALL 0x0040353a
0068A454  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A45A  83 C4 04                  ADD ESP,0x4
0068A45D  8B D1                     MOV EDX,ECX
0068A45F  C1 E2 04                  SHL EDX,0x4
0068A462  03 D1                     ADD EDX,ECX
0068A464  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A467  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0068A46A  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0068A46D  8D 34 52                  LEA ESI,[EDX + EDX*0x2]
0068A470  8B D1                     MOV EDX,ECX
0068A472  C1 E2 04                  SHL EDX,0x4
0068A475  03 D1                     ADD EDX,ECX
0068A477  8B 3C B5 D4 EF 80 00      MOV EDI,dword ptr [ESI*0x4 + 0x80efd4]
0068A47E  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A481  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0068A484  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0068A487  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A48A  03 D7                     ADD EDX,EDI
0068A48C  89 04 95 D8 EF 80 00      MOV dword ptr [EDX*0x4 + 0x80efd8],EAX
0068A493  8B 04 B5 D4 EF 80 00      MOV EAX,dword ptr [ESI*0x4 + 0x80efd4]
0068A49A  40                        INC EAX
0068A49B  89 04 B5 D4 EF 80 00      MOV dword ptr [ESI*0x4 + 0x80efd4],EAX
0068A4A2  E9 C0 00 00 00            JMP 0x0068a567
switchD_0068a2d4::default:
0068A4A7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068A4AC  68 23 09 00 00            PUSH 0x923
0068A4B1  68 04 56 7D 00            PUSH 0x7d5604
0068A4B6  50                        PUSH EAX
0068A4B7  6A 95                     PUSH -0x6b
0068A4B9  E8 82 B9 01 00            CALL 0x006a5e40
0068A4BE  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A4C4  E9 9E 00 00 00            JMP 0x0068a567
LAB_0068a4c9:
0068A4C9  E8 B4 89 D7 FF            CALL 0x00402e82
0068A4CE  8B 0D 14 8A 84 00         MOV ECX,dword ptr [0x00848a14]
0068A4D4  50                        PUSH EAX
0068A4D5  51                        PUSH ECX
0068A4D6  E8 9B A4 D7 FF            CALL 0x00404976
0068A4DB  8B F0                     MOV ESI,EAX
0068A4DD  83 C4 08                  ADD ESP,0x8
0068A4E0  3B F3                     CMP ESI,EBX
0068A4E2  7D 17                     JGE 0x0068a4fb
0068A4E4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068A4EA  68 27 09 00 00            PUSH 0x927
0068A4EF  68 04 56 7D 00            PUSH 0x7d5604
0068A4F4  52                        PUSH EDX
0068A4F5  56                        PUSH ESI
0068A4F6  E8 45 B9 01 00            CALL 0x006a5e40
LAB_0068a4fb:
0068A4FB  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
0068A501  89 1D 14 8A 84 00         MOV dword ptr [0x00848a14],EBX
0068A507  8B C1                     MOV EAX,ECX
0068A509  C1 E0 04                  SHL EAX,0x4
0068A50C  03 C1                     ADD EAX,ECX
0068A50E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A511  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0068A514  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0068A517  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068A51A  C1 E0 02                  SHL EAX,0x2
0068A51D  8B 90 B0 10 81 00         MOV EDX,dword ptr [EAX + 0x8110b0]
0068A523  C6 84 10 B4 10 81 00 04   MOV byte ptr [EAX + EDX*0x1 + 0x8110b4],0x4
0068A52B  8B 90 B0 10 81 00         MOV EDX,dword ptr [EAX + 0x8110b0]
0068A531  42                        INC EDX
0068A532  89 90 B0 10 81 00         MOV dword ptr [EAX + 0x8110b0],EDX
0068A538  8B D1                     MOV EDX,ECX
0068A53A  C1 E2 04                  SHL EDX,0x4
0068A53D  03 D1                     ADD EDX,ECX
0068A53F  8B B8 68 F1 80 00         MOV EDI,dword ptr [EAX + 0x80f168]
0068A545  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A548  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
0068A54B  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0068A54E  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0068A551  03 D7                     ADD EDX,EDI
0068A553  89 34 95 6C F1 80 00      MOV dword ptr [EDX*0x4 + 0x80f16c],ESI
0068A55A  8B 90 68 F1 80 00         MOV EDX,dword ptr [EAX + 0x80f168]
0068A560  42                        INC EDX
0068A561  89 90 68 F1 80 00         MOV dword ptr [EAX + 0x80f168],EDX
LAB_0068a567:
0068A567  49                        DEC ECX
0068A568  68 14 8A 84 00            PUSH 0x848a14
0068A56D  89 0D B0 88 84 00         MOV dword ptr [0x008488b0],ECX
0068A573  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
0068A576  E8 C2 73 D7 FF            CALL 0x0040193d
0068A57B  83 C4 04                  ADD ESP,0x4
0068A57E  E9 73 9A FF FF            JMP 0x00683ff6
LAB_0068a583:
0068A583  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A586  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068A589  3B C3                     CMP EAX,EBX
0068A58B  0F 84 F6 00 00 00         JZ 0x0068a687
0068A591  C7 00 06 00 00 00         MOV dword ptr [EAX],0x6
0068A597  E9 EB 00 00 00            JMP 0x0068a687
LAB_0068a59c:
0068A59C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A59F  8B 35 B8 89 84 00         MOV ESI,dword ptr [0x008489b8]
0068A5A5  3B C3                     CMP EAX,EBX
0068A5A7  89 1D B8 89 84 00         MOV dword ptr [0x008489b8],EBX
0068A5AD  0F 84 D4 00 00 00         JZ 0x0068a687
0068A5B3  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
0068A5B9  E9 C9 00 00 00            JMP 0x0068a687
LAB_0068a5be:
0068A5BE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A5C1  8B 35 C8 89 84 00         MOV ESI,dword ptr [0x008489c8]
0068A5C7  3B C3                     CMP EAX,EBX
0068A5C9  89 1D C8 89 84 00         MOV dword ptr [0x008489c8],EBX
0068A5CF  0F 84 B2 00 00 00         JZ 0x0068a687
0068A5D5  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0068A5DB  E9 A7 00 00 00            JMP 0x0068a687
LAB_0068a5e0:
0068A5E0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A5E3  8B 35 B4 89 84 00         MOV ESI,dword ptr [0x008489b4]
0068A5E9  3B C3                     CMP EAX,EBX
0068A5EB  89 1D B4 89 84 00         MOV dword ptr [0x008489b4],EBX
0068A5F1  0F 84 90 00 00 00         JZ 0x0068a687
0068A5F7  C7 00 04 00 00 00         MOV dword ptr [EAX],0x4
0068A5FD  E9 85 00 00 00            JMP 0x0068a687
LAB_0068a602:
0068A602  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A605  8B 35 DC 89 84 00         MOV ESI,dword ptr [0x008489dc]
0068A60B  3B C3                     CMP EAX,EBX
0068A60D  89 1D DC 89 84 00         MOV dword ptr [0x008489dc],EBX
0068A613  74 72                     JZ 0x0068a687
0068A615  C7 00 09 00 00 00         MOV dword ptr [EAX],0x9
0068A61B  EB 6A                     JMP 0x0068a687
LAB_0068a61d:
0068A61D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A620  8B 35 C4 89 84 00         MOV ESI,dword ptr [0x008489c4]
0068A626  3B C3                     CMP EAX,EBX
0068A628  89 1D C4 89 84 00         MOV dword ptr [0x008489c4],EBX
0068A62E  74 57                     JZ 0x0068a687
0068A630  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
0068A636  EB 4F                     JMP 0x0068a687
LAB_0068a638:
0068A638  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A63B  8B 35 BC 89 84 00         MOV ESI,dword ptr [0x008489bc]
0068A641  3B C3                     CMP EAX,EBX
0068A643  89 1D BC 89 84 00         MOV dword ptr [0x008489bc],EBX
0068A649  74 3C                     JZ 0x0068a687
0068A64B  C7 00 05 00 00 00         MOV dword ptr [EAX],0x5
0068A651  EB 34                     JMP 0x0068a687
LAB_0068a653:
0068A653  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A656  8B 35 D4 89 84 00         MOV ESI,dword ptr [0x008489d4]
0068A65C  3B C3                     CMP EAX,EBX
0068A65E  89 1D D4 89 84 00         MOV dword ptr [0x008489d4],EBX
0068A664  74 21                     JZ 0x0068a687
0068A666  C7 00 40 00 00 00         MOV dword ptr [EAX],0x40
0068A66C  EB 19                     JMP 0x0068a687
LAB_0068a66e:
0068A66E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A671  8B 35 D8 89 84 00         MOV ESI,dword ptr [0x008489d8]
0068A677  3B C3                     CMP EAX,EBX
0068A679  89 1D D8 89 84 00         MOV dword ptr [0x008489d8],EBX
0068A67F  74 06                     JZ 0x0068a687
0068A681  C7 00 0A 00 00 00         MOV dword ptr [EAX],0xa
LAB_0068a687:
0068A687  3B F3                     CMP ESI,EBX
0068A689  75 1A                     JNZ 0x0068a6a5
0068A68B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068A690  68 DD 09 00 00            PUSH 0x9dd
0068A695  68 04 56 7D 00            PUSH 0x7d5604
0068A69A  50                        PUSH EAX
0068A69B  68 73 FF FF FF            PUSH 0xffffff73
0068A6A0  E8 9B B7 01 00            CALL 0x006a5e40
LAB_0068a6a5:
0068A6A5  68 B4 89 84 00            PUSH 0x8489b4
0068A6AA  E8 F5 79 D7 FF            CALL 0x004020a4
0068A6AF  68 B8 89 84 00            PUSH 0x8489b8
0068A6B4  E8 4C 87 D7 FF            CALL 0x00402e05
0068A6B9  68 BC 89 84 00            PUSH 0x8489bc
0068A6BE  E8 74 6E D7 FF            CALL 0x00401537
0068A6C3  68 C8 89 84 00            PUSH 0x8489c8
0068A6C8  E8 33 87 D7 FF            CALL 0x00402e00
0068A6CD  68 C4 89 84 00            PUSH 0x8489c4
0068A6D2  E8 F6 B4 D7 FF            CALL 0x00405bcd
0068A6D7  68 CC 89 84 00            PUSH 0x8489cc
0068A6DC  E8 FF 88 D7 FF            CALL 0x00402fe0
0068A6E1  A1 D4 89 84 00            MOV EAX,[0x008489d4]
0068A6E6  83 C4 18                  ADD ESP,0x18
0068A6E9  3B C3                     CMP EAX,EBX
0068A6EB  74 0C                     JZ 0x0068a6f9
0068A6ED  50                        PUSH EAX
0068A6EE  E8 1D 3A 02 00            CALL 0x006ae110
0068A6F3  89 1D D4 89 84 00         MOV dword ptr [0x008489d4],EBX
LAB_0068a6f9:
0068A6F9  A1 DC 89 84 00            MOV EAX,[0x008489dc]
0068A6FE  3B C3                     CMP EAX,EBX
0068A700  74 0C                     JZ 0x0068a70e
0068A702  50                        PUSH EAX
0068A703  E8 68 AE 02 00            CALL 0x006b5570
0068A708  89 1D DC 89 84 00         MOV dword ptr [0x008489dc],EBX
LAB_0068a70e:
0068A70E  E8 D3 96 D7 FF            CALL 0x00403de6
0068A713  68 14 8A 84 00            PUSH 0x848a14
0068A718  E8 20 72 D7 FF            CALL 0x0040193d
0068A71D  83 C4 04                  ADD ESP,0x4
0068A720  E8 6B A6 D7 FF            CALL 0x00404d90
0068A725  85 C0                     TEST EAX,EAX
0068A727  74 09                     JZ 0x0068a732
LAB_0068a729:
0068A729  E8 62 A6 D7 FF            CALL 0x00404d90
0068A72E  85 C0                     TEST EAX,EAX
0068A730  75 F7                     JNZ 0x0068a729
LAB_0068a732:
0068A732  68 D0 89 84 00            PUSH 0x8489d0
0068A737  E8 3E B2 D7 FF            CALL 0x0040597a
0068A73C  8B 8D 98 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe98]
0068A742  83 C4 04                  ADD ESP,0x4
0068A745  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068A74B  8B C6                     MOV EAX,ESI
0068A74D  5F                        POP EDI
0068A74E  5E                        POP ESI
0068A74F  5B                        POP EBX
0068A750  8B E5                     MOV ESP,EBP
0068A752  5D                        POP EBP
0068A753  C3                        RET
LAB_0068a754:
0068A754  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0068A757  8B 85 98 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe98]
0068A75D  3B F3                     CMP ESI,EBX
0068A75F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068A764  0F 84 B6 00 00 00         JZ 0x0068a820
0068A76A  B9 06 00 00 00            MOV ECX,0x6
0068A76F  33 C0                     XOR EAX,EAX
0068A771  8B FE                     MOV EDI,ESI
0068A773  F3 AB                     STOSD.REP ES:EDI
0068A775  89 16                     MOV dword ptr [ESI],EDX
0068A777  8B 0D 54 75 85 00         MOV ECX,dword ptr [0x00857554]
0068A77D  8D 95 3C FC FF FF         LEA EDX,[EBP + 0xfffffc3c]
0068A783  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
0068A786  A1 3C 75 85 00            MOV EAX,[0x0085753c]
0068A78B  52                        PUSH EDX
0068A78C  53                        PUSH EBX
0068A78D  53                        PUSH EBX
0068A78E  53                        PUSH EBX
0068A78F  50                        PUSH EAX
0068A790  E8 9B 3F 0A 00            CALL 0x0072e730
0068A795  8A 85 3C FC FF FF         MOV AL,byte ptr [EBP + 0xfffffc3c]
0068A79B  83 C4 14                  ADD ESP,0x14
0068A79E  84 C0                     TEST AL,AL
0068A7A0  74 15                     JZ 0x0068a7b7
0068A7A2  B9 0C 79 84 00            MOV ECX,0x84790c
0068A7A7  85 C9                     TEST ECX,ECX
0068A7A9  74 3F                     JZ 0x0068a7ea
0068A7AB  8B 3D 3C 75 85 00         MOV EDI,dword ptr [0x0085753c]
0068A7B1  3B FB                     CMP EDI,EBX
0068A7B3  74 35                     JZ 0x0068a7ea
0068A7B5  EB 10                     JMP 0x0068a7c7
LAB_0068a7b7:
0068A7B7  B8 0C 79 84 00            MOV EAX,0x84790c
0068A7BC  85 C0                     TEST EAX,EAX
0068A7BE  74 2A                     JZ 0x0068a7ea
0068A7C0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068A7C3  3B FB                     CMP EDI,EBX
0068A7C5  74 23                     JZ 0x0068a7ea
LAB_0068a7c7:
0068A7C7  83 C9 FF                  OR ECX,0xffffffff
0068A7CA  33 C0                     XOR EAX,EAX
0068A7CC  F2 AE                     SCASB.REPNE ES:EDI
0068A7CE  F7 D1                     NOT ECX
0068A7D0  2B F9                     SUB EDI,ECX
0068A7D2  8B D1                     MOV EDX,ECX
0068A7D4  8B F7                     MOV ESI,EDI
0068A7D6  BF 0C 79 84 00            MOV EDI,0x84790c
0068A7DB  C1 E9 02                  SHR ECX,0x2
0068A7DE  F3 A5                     MOVSD.REP ES:EDI,ESI
0068A7E0  8B CA                     MOV ECX,EDX
0068A7E2  83 E1 03                  AND ECX,0x3
0068A7E5  F3 A4                     MOVSB.REP ES:EDI,ESI
0068A7E7  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
LAB_0068a7ea:
0068A7EA  C7 46 04 0C 79 84 00      MOV dword ptr [ESI + 0x4],0x84790c
0068A7F1  A1 5C 75 85 00            MOV EAX,[0x0085755c]
0068A7F6  68 FE 03 00 00            PUSH 0x3fe
0068A7FB  50                        PUSH EAX
0068A7FC  68 0C 7D 84 00            PUSH 0x847d0c
0068A801  E8 3A 3B 0A 00            CALL 0x0072e340
0068A806  C7 46 0C 0C 7D 84 00      MOV dword ptr [ESI + 0xc],0x847d0c
0068A80D  C7 46 10 B4 88 84 00      MOV dword ptr [ESI + 0x10],0x8488b4
0068A814  8B 0D 44 75 85 00         MOV ECX,dword ptr [0x00857544]
0068A81A  83 C4 0C                  ADD ESP,0xc
0068A81D  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
LAB_0068a820:
0068A820  68 B4 89 84 00            PUSH 0x8489b4
0068A825  E8 7A 78 D7 FF            CALL 0x004020a4
0068A82A  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0068A82D  52                        PUSH EDX
0068A82E  E8 71 78 D7 FF            CALL 0x004020a4
0068A833  68 B8 89 84 00            PUSH 0x8489b8
0068A838  E8 C8 85 D7 FF            CALL 0x00402e05
0068A83D  8D 45 DC                  LEA EAX,[EBP + -0x24]
0068A840  50                        PUSH EAX
0068A841  E8 BF 85 D7 FF            CALL 0x00402e05
0068A846  68 BC 89 84 00            PUSH 0x8489bc
0068A84B  E8 E7 6C D7 FF            CALL 0x00401537
0068A850  8D 4D F8                  LEA ECX,[EBP + -0x8]
0068A853  51                        PUSH ECX
0068A854  E8 DE 6C D7 FF            CALL 0x00401537
0068A859  68 C8 89 84 00            PUSH 0x8489c8
0068A85E  E8 9D 85 D7 FF            CALL 0x00402e00
0068A863  8D 55 E0                  LEA EDX,[EBP + -0x20]
0068A866  52                        PUSH EDX
0068A867  E8 94 85 D7 FF            CALL 0x00402e00
0068A86C  68 C4 89 84 00            PUSH 0x8489c4
0068A871  E8 57 B3 D7 FF            CALL 0x00405bcd
0068A876  8D 45 D8                  LEA EAX,[EBP + -0x28]
0068A879  50                        PUSH EAX
0068A87A  E8 4E B3 D7 FF            CALL 0x00405bcd
0068A87F  68 CC 89 84 00            PUSH 0x8489cc
0068A884  E8 57 87 D7 FF            CALL 0x00402fe0
0068A889  A1 D4 89 84 00            MOV EAX,[0x008489d4]
0068A88E  83 C4 2C                  ADD ESP,0x2c
0068A891  3B C3                     CMP EAX,EBX
0068A893  74 0C                     JZ 0x0068a8a1
0068A895  50                        PUSH EAX
0068A896  E8 75 38 02 00            CALL 0x006ae110
0068A89B  89 1D D4 89 84 00         MOV dword ptr [0x008489d4],EBX
LAB_0068a8a1:
0068A8A1  A1 DC 89 84 00            MOV EAX,[0x008489dc]
0068A8A6  3B C3                     CMP EAX,EBX
0068A8A8  74 0C                     JZ 0x0068a8b6
0068A8AA  50                        PUSH EAX
0068A8AB  E8 C0 AC 02 00            CALL 0x006b5570
0068A8B0  89 1D DC 89 84 00         MOV dword ptr [0x008489dc],EBX
LAB_0068a8b6:
0068A8B6  E8 2B 95 D7 FF            CALL 0x00403de6
0068A8BB  68 14 8A 84 00            PUSH 0x848a14
0068A8C0  E8 78 70 D7 FF            CALL 0x0040193d
0068A8C5  83 C4 04                  ADD ESP,0x4
0068A8C8  E8 C3 A4 D7 FF            CALL 0x00404d90
0068A8CD  85 C0                     TEST EAX,EAX
0068A8CF  74 09                     JZ 0x0068a8da
LAB_0068a8d1:
0068A8D1  E8 BA A4 D7 FF            CALL 0x00404d90
0068A8D6  85 C0                     TEST EAX,EAX
0068A8D8  75 F7                     JNZ 0x0068a8d1
LAB_0068a8da:
0068A8DA  68 D0 89 84 00            PUSH 0x8489d0
0068A8DF  E8 96 B0 D7 FF            CALL 0x0040597a
0068A8E4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0068A8E7  83 C4 04                  ADD ESP,0x4
0068A8EA  3B C3                     CMP EAX,EBX
0068A8EC  0F 84 AB 00 00 00         JZ 0x0068a99d
0068A8F2  89 18                     MOV dword ptr [EAX],EBX
0068A8F4  33 C0                     XOR EAX,EAX
0068A8F6  5F                        POP EDI
0068A8F7  5E                        POP ESI
0068A8F8  5B                        POP EBX
0068A8F9  8B E5                     MOV ESP,EBP
0068A8FB  5D                        POP EBP
0068A8FC  C3                        RET
LAB_0068a8fd:
0068A8FD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0068A900  8B 8D 54 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe54]
0068A906  3B D3                     CMP EDX,EBX
0068A908  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068A90E  0F 84 89 00 00 00         JZ 0x0068a99d
0068A914  B9 06 00 00 00            MOV ECX,0x6
0068A919  33 C0                     XOR EAX,EAX
0068A91B  8B FA                     MOV EDI,EDX
0068A91D  F3 AB                     STOSD.REP ES:EDI
0068A91F  B8 0C 79 84 00            MOV EAX,0x84790c
0068A924  89 32                     MOV dword ptr [EDX],ESI
0068A926  85 C0                     TEST EAX,EAX
0068A928  89 5A 08                  MOV dword ptr [EDX + 0x8],EBX
0068A92B  74 27                     JZ 0x0068a954
0068A92D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068A930  3B FB                     CMP EDI,EBX
0068A932  74 20                     JZ 0x0068a954
0068A934  83 C9 FF                  OR ECX,0xffffffff
0068A937  33 C0                     XOR EAX,EAX
0068A939  F2 AE                     SCASB.REPNE ES:EDI
0068A93B  F7 D1                     NOT ECX
0068A93D  2B F9                     SUB EDI,ECX
0068A93F  8B C1                     MOV EAX,ECX
0068A941  8B F7                     MOV ESI,EDI
0068A943  BF 0C 79 84 00            MOV EDI,0x84790c
0068A948  C1 E9 02                  SHR ECX,0x2
0068A94B  F3 A5                     MOVSD.REP ES:EDI,ESI
0068A94D  8B C8                     MOV ECX,EAX
0068A94F  83 E1 03                  AND ECX,0x3
0068A952  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0068a954:
0068A954  B9 0C 7D 84 00            MOV ECX,0x847d0c
0068A959  C7 42 04 0C 79 84 00      MOV dword ptr [EDX + 0x4],0x84790c
0068A960  85 C9                     TEST ECX,ECX
0068A962  74 2B                     JZ 0x0068a98f
0068A964  B8 A0 16 80 00            MOV EAX,0x8016a0
0068A969  85 C0                     TEST EAX,EAX
0068A96B  74 22                     JZ 0x0068a98f
0068A96D  8B F8                     MOV EDI,EAX
0068A96F  83 C9 FF                  OR ECX,0xffffffff
0068A972  33 C0                     XOR EAX,EAX
0068A974  F2 AE                     SCASB.REPNE ES:EDI
0068A976  F7 D1                     NOT ECX
0068A978  2B F9                     SUB EDI,ECX
0068A97A  8B C1                     MOV EAX,ECX
0068A97C  8B F7                     MOV ESI,EDI
0068A97E  BF 0C 7D 84 00            MOV EDI,0x847d0c
0068A983  C1 E9 02                  SHR ECX,0x2
0068A986  F3 A5                     MOVSD.REP ES:EDI,ESI
0068A988  8B C8                     MOV ECX,EAX
0068A98A  83 E1 03                  AND ECX,0x3
0068A98D  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0068a98f:
0068A98F  C7 42 0C 0C 7D 84 00      MOV dword ptr [EDX + 0xc],0x847d0c
0068A996  C7 42 10 B4 88 84 00      MOV dword ptr [EDX + 0x10],0x8488b4
LAB_0068a99d:
0068A99D  5F                        POP EDI
0068A99E  5E                        POP ESI
0068A99F  33 C0                     XOR EAX,EAX
0068A9A1  5B                        POP EBX
0068A9A2  8B E5                     MOV ESP,EBP
0068A9A4  5D                        POP EBP
0068A9A5  C3                        RET
