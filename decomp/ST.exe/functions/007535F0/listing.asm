FUN_007535f0:
007535F0  55                        PUSH EBP
007535F1  8B EC                     MOV EBP,ESP
007535F3  81 EC 04 04 00 00         SUB ESP,0x404
007535F9  53                        PUSH EBX
007535FA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
007535FD  56                        PUSH ESI
007535FE  8D 85 FC FD FF FF         LEA EAX,[EBP + 0xfffffdfc]
00753604  57                        PUSH EDI
00753605  8D 8D FC FC FF FF         LEA ECX,[EBP + 0xfffffcfc]
0075360B  50                        PUSH EAX
0075360C  8D 95 FC FB FF FF         LEA EDX,[EBP + 0xfffffbfc]
00753612  51                        PUSH ECX
00753613  8D 45 08                  LEA EAX,[EBP + 0x8]
00753616  52                        PUSH EDX
00753617  50                        PUSH EAX
00753618  53                        PUSH EBX
00753619  E8 12 B1 FD FF            CALL 0x0072e730
0075361E  8D 8D FC FD FF FF         LEA ECX,[EBP + 0xfffffdfc]
00753624  68 78 70 7C 00            PUSH 0x7c7078
00753629  51                        PUSH ECX
0075362A  E8 F1 AF FD FF            CALL 0x0072e620
0075362F  83 C4 1C                  ADD ESP,0x1c
00753632  85 C0                     TEST EAX,EAX
00753634  74 6F                     JZ 0x007536a5
00753636  8D 95 FC FD FF FF         LEA EDX,[EBP + 0xfffffdfc]
0075363C  68 80 70 7C 00            PUSH 0x7c7080
00753641  52                        PUSH EDX
00753642  E8 D9 AF FD FF            CALL 0x0072e620
00753647  83 C4 08                  ADD ESP,0x8
0075364A  85 C0                     TEST EAX,EAX
0075364C  74 57                     JZ 0x007536a5
0075364E  8B FB                     MOV EDI,EBX
00753650  83 C9 FF                  OR ECX,0xffffffff
00753653  33 C0                     XOR EAX,EAX
00753655  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
0075365B  F2 AE                     SCASB.REPNE ES:EDI
0075365D  F7 D1                     NOT ECX
0075365F  2B F9                     SUB EDI,ECX
00753661  8B C1                     MOV EAX,ECX
00753663  8B F7                     MOV ESI,EDI
00753665  8B FA                     MOV EDI,EDX
00753667  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
0075366D  C1 E9 02                  SHR ECX,0x2
00753670  F3 A5                     MOVSD.REP ES:EDI,ESI
00753672  8B C8                     MOV ECX,EAX
00753674  33 C0                     XOR EAX,EAX
00753676  83 E1 03                  AND ECX,0x3
00753679  F3 A4                     MOVSB.REP ES:EDI,ESI
0075367B  BF 78 70 7C 00            MOV EDI,0x7c7078
00753680  83 C9 FF                  OR ECX,0xffffffff
00753683  F2 AE                     SCASB.REPNE ES:EDI
00753685  F7 D1                     NOT ECX
00753687  2B F9                     SUB EDI,ECX
00753689  8B F7                     MOV ESI,EDI
0075368B  8B FA                     MOV EDI,EDX
0075368D  8B D1                     MOV EDX,ECX
0075368F  83 C9 FF                  OR ECX,0xffffffff
00753692  F2 AE                     SCASB.REPNE ES:EDI
00753694  8B CA                     MOV ECX,EDX
00753696  4F                        DEC EDI
00753697  C1 E9 02                  SHR ECX,0x2
0075369A  F3 A5                     MOVSD.REP ES:EDI,ESI
0075369C  8B CA                     MOV ECX,EDX
0075369E  83 E1 03                  AND ECX,0x3
007536A1  F3 A4                     MOVSB.REP ES:EDI,ESI
007536A3  EB 26                     JMP 0x007536cb
LAB_007536a5:
007536A5  8D 85 FC FC FF FF         LEA EAX,[EBP + 0xfffffcfc]
007536AB  68 78 70 7C 00            PUSH 0x7c7078
007536B0  8D 8D FC FB FF FF         LEA ECX,[EBP + 0xfffffbfc]
007536B6  50                        PUSH EAX
007536B7  8D 55 08                  LEA EDX,[EBP + 0x8]
007536BA  51                        PUSH ECX
007536BB  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
007536C1  52                        PUSH EDX
007536C2  50                        PUSH EAX
007536C3  E8 48 BA FD FF            CALL 0x0072f110
007536C8  83 C4 14                  ADD ESP,0x14
LAB_007536cb:
007536CB  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
007536D1  51                        PUSH ECX
007536D2  E8 69 18 00 00            CALL 0x00754f40
007536D7  85 C0                     TEST EAX,EAX
007536D9  0F 84 CE 00 00 00         JZ 0x007537ad
007536DF  8D 95 FC FD FF FF         LEA EDX,[EBP + 0xfffffdfc]
007536E5  68 78 70 7C 00            PUSH 0x7c7078
007536EA  52                        PUSH EDX
007536EB  E8 30 AF FD FF            CALL 0x0072e620
007536F0  83 C4 08                  ADD ESP,0x8
007536F3  85 C0                     TEST EAX,EAX
007536F5  74 6F                     JZ 0x00753766
007536F7  8D 85 FC FD FF FF         LEA EAX,[EBP + 0xfffffdfc]
007536FD  68 80 70 7C 00            PUSH 0x7c7080
00753702  50                        PUSH EAX
00753703  E8 18 AF FD FF            CALL 0x0072e620
00753708  83 C4 08                  ADD ESP,0x8
0075370B  85 C0                     TEST EAX,EAX
0075370D  74 57                     JZ 0x00753766
0075370F  8B FB                     MOV EDI,EBX
00753711  83 C9 FF                  OR ECX,0xffffffff
00753714  33 C0                     XOR EAX,EAX
00753716  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
0075371C  F2 AE                     SCASB.REPNE ES:EDI
0075371E  F7 D1                     NOT ECX
00753720  2B F9                     SUB EDI,ECX
00753722  8B C1                     MOV EAX,ECX
00753724  8B F7                     MOV ESI,EDI
00753726  8B FA                     MOV EDI,EDX
00753728  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
0075372E  C1 E9 02                  SHR ECX,0x2
00753731  F3 A5                     MOVSD.REP ES:EDI,ESI
00753733  8B C8                     MOV ECX,EAX
00753735  33 C0                     XOR EAX,EAX
00753737  83 E1 03                  AND ECX,0x3
0075373A  F3 A4                     MOVSB.REP ES:EDI,ESI
0075373C  BF 80 70 7C 00            MOV EDI,0x7c7080
00753741  83 C9 FF                  OR ECX,0xffffffff
00753744  F2 AE                     SCASB.REPNE ES:EDI
00753746  F7 D1                     NOT ECX
00753748  2B F9                     SUB EDI,ECX
0075374A  8B F7                     MOV ESI,EDI
0075374C  8B D9                     MOV EBX,ECX
0075374E  8B FA                     MOV EDI,EDX
00753750  83 C9 FF                  OR ECX,0xffffffff
00753753  F2 AE                     SCASB.REPNE ES:EDI
00753755  8B CB                     MOV ECX,EBX
00753757  4F                        DEC EDI
00753758  C1 E9 02                  SHR ECX,0x2
0075375B  F3 A5                     MOVSD.REP ES:EDI,ESI
0075375D  8B CB                     MOV ECX,EBX
0075375F  83 E1 03                  AND ECX,0x3
00753762  F3 A4                     MOVSB.REP ES:EDI,ESI
00753764  EB 26                     JMP 0x0075378c
LAB_00753766:
00753766  8D 85 FC FC FF FF         LEA EAX,[EBP + 0xfffffcfc]
0075376C  68 80 70 7C 00            PUSH 0x7c7080
00753771  8D 8D FC FB FF FF         LEA ECX,[EBP + 0xfffffbfc]
00753777  50                        PUSH EAX
00753778  8D 55 08                  LEA EDX,[EBP + 0x8]
0075377B  51                        PUSH ECX
0075377C  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
00753782  52                        PUSH EDX
00753783  50                        PUSH EAX
00753784  E8 87 B9 FD FF            CALL 0x0072f110
00753789  83 C4 14                  ADD ESP,0x14
LAB_0075378c:
0075378C  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00753792  51                        PUSH ECX
00753793  FF 15 D0 BC 85 00         CALL dword ptr [0x0085bcd0]
00753799  83 F8 FF                  CMP EAX,-0x1
0075379C  5F                        POP EDI
0075379D  0F 95 C0                  SETNZ AL
007537A0  5E                        POP ESI
007537A1  25 FF 00 00 00            AND EAX,0xff
007537A6  5B                        POP EBX
007537A7  8B E5                     MOV ESP,EBP
007537A9  5D                        POP EBP
007537AA  C2 04 00                  RET 0x4
LAB_007537ad:
007537AD  5F                        POP EDI
007537AE  5E                        POP ESI
007537AF  33 C0                     XOR EAX,EAX
007537B1  5B                        POP EBX
007537B2  8B E5                     MOV ESP,EBP
007537B4  5D                        POP EBP
007537B5  C2 04 00                  RET 0x4
