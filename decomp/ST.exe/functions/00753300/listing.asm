FUN_00753300:
00753300  55                        PUSH EBP
00753301  8B EC                     MOV EBP,ESP
00753303  81 EC 50 04 00 00         SUB ESP,0x450
00753309  53                        PUSH EBX
0075330A  56                        PUSH ESI
0075330B  57                        PUSH EDI
0075330C  6A 08                     PUSH 0x8
0075330E  E8 FD 78 F5 FF            CALL 0x006aac10
00753313  85 C0                     TEST EAX,EAX
00753315  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00753318  0F 84 C5 02 00 00         JZ 0x007535e3
0075331E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00753321  8D 85 B0 FD FF FF         LEA EAX,[EBP + 0xfffffdb0]
00753327  8D 8D B0 FB FF FF         LEA ECX,[EBP + 0xfffffbb0]
0075332D  50                        PUSH EAX
0075332E  8D 95 B0 FC FF FF         LEA EDX,[EBP + 0xfffffcb0]
00753334  51                        PUSH ECX
00753335  8D 45 F8                  LEA EAX,[EBP + -0x8]
00753338  52                        PUSH EDX
00753339  50                        PUSH EAX
0075333A  57                        PUSH EDI
0075333B  E8 F0 B3 FD FF            CALL 0x0072e730
00753340  8D 8D B0 FD FF FF         LEA ECX,[EBP + 0xfffffdb0]
00753346  68 78 70 7C 00            PUSH 0x7c7078
0075334B  51                        PUSH ECX
0075334C  E8 CF B2 FD FF            CALL 0x0072e620
00753351  83 C4 1C                  ADD ESP,0x1c
00753354  85 C0                     TEST EAX,EAX
00753356  74 6D                     JZ 0x007533c5
00753358  8D 95 B0 FD FF FF         LEA EDX,[EBP + 0xfffffdb0]
0075335E  68 80 70 7C 00            PUSH 0x7c7080
00753363  52                        PUSH EDX
00753364  E8 B7 B2 FD FF            CALL 0x0072e620
00753369  83 C4 08                  ADD ESP,0x8
0075336C  85 C0                     TEST EAX,EAX
0075336E  74 55                     JZ 0x007533c5
00753370  83 C9 FF                  OR ECX,0xffffffff
00753373  33 C0                     XOR EAX,EAX
00753375  F2 AE                     SCASB.REPNE ES:EDI
00753377  F7 D1                     NOT ECX
00753379  2B F9                     SUB EDI,ECX
0075337B  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
00753381  8B C1                     MOV EAX,ECX
00753383  8B F7                     MOV ESI,EDI
00753385  8B FA                     MOV EDI,EDX
00753387  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
0075338D  C1 E9 02                  SHR ECX,0x2
00753390  F3 A5                     MOVSD.REP ES:EDI,ESI
00753392  8B C8                     MOV ECX,EAX
00753394  33 C0                     XOR EAX,EAX
00753396  83 E1 03                  AND ECX,0x3
00753399  F3 A4                     MOVSB.REP ES:EDI,ESI
0075339B  BF 78 70 7C 00            MOV EDI,0x7c7078
007533A0  83 C9 FF                  OR ECX,0xffffffff
007533A3  F2 AE                     SCASB.REPNE ES:EDI
007533A5  F7 D1                     NOT ECX
007533A7  2B F9                     SUB EDI,ECX
007533A9  8B F7                     MOV ESI,EDI
007533AB  8B D9                     MOV EBX,ECX
007533AD  8B FA                     MOV EDI,EDX
007533AF  83 C9 FF                  OR ECX,0xffffffff
007533B2  F2 AE                     SCASB.REPNE ES:EDI
007533B4  8B CB                     MOV ECX,EBX
007533B6  4F                        DEC EDI
007533B7  C1 E9 02                  SHR ECX,0x2
007533BA  F3 A5                     MOVSD.REP ES:EDI,ESI
007533BC  8B CB                     MOV ECX,EBX
007533BE  83 E1 03                  AND ECX,0x3
007533C1  F3 A4                     MOVSB.REP ES:EDI,ESI
007533C3  EB 26                     JMP 0x007533eb
LAB_007533c5:
007533C5  8D 85 B0 FB FF FF         LEA EAX,[EBP + 0xfffffbb0]
007533CB  68 78 70 7C 00            PUSH 0x7c7078
007533D0  8D 8D B0 FC FF FF         LEA ECX,[EBP + 0xfffffcb0]
007533D6  50                        PUSH EAX
007533D7  8D 55 F8                  LEA EDX,[EBP + -0x8]
007533DA  51                        PUSH ECX
007533DB  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
007533E1  52                        PUSH EDX
007533E2  50                        PUSH EAX
007533E3  E8 28 BD FD FF            CALL 0x0072f110
007533E8  83 C4 14                  ADD ESP,0x14
LAB_007533eb:
007533EB  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
007533F1  8D 45 B8                  LEA EAX,[EBP + -0x48]
007533F4  8D 55 B4                  LEA EDX,[EBP + -0x4c]
007533F7  6A 00                     PUSH 0x0
007533F9  50                        PUSH EAX
007533FA  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
007533FD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00753403  E8 E8 A3 FD FF            CALL 0x0072d7f0
00753408  8B F0                     MOV ESI,EAX
0075340A  83 C4 08                  ADD ESP,0x8
0075340D  85 F6                     TEST ESI,ESI
0075340F  0F 85 9F 01 00 00         JNZ 0x007535b4
00753415  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00753418  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0075341B  48                        DEC EAX
0075341C  74 39                     JZ 0x00753457
0075341E  48                        DEC EAX
0075341F  74 1F                     JZ 0x00753440
00753421  48                        DEC EAX
00753422  75 48                     JNZ 0x0075346c
00753424  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00753427  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075342A  53                        PUSH EBX
0075342B  51                        PUSH ECX
0075342C  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
00753432  52                        PUSH EDX
00753433  50                        PUSH EAX
00753434  E8 C7 06 00 00            CALL 0x00753b00
00753439  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075343C  89 01                     MOV dword ptr [ECX],EAX
0075343E  EB 2C                     JMP 0x0075346c
LAB_00753440:
00753440  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00753443  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753446  53                        PUSH EBX
00753447  52                        PUSH EDX
00753448  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
0075344E  50                        PUSH EAX
0075344F  51                        PUSH ECX
00753450  E8 6B 03 00 00            CALL 0x007537c0
00753455  EB 10                     JMP 0x00753467
LAB_00753457:
00753457  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075345A  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
00753460  50                        PUSH EAX
00753461  51                        PUSH ECX
00753462  E8 79 06 00 00            CALL 0x00753ae0
LAB_00753467:
00753467  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075346A  89 02                     MOV dword ptr [EDX],EAX
LAB_0075346c:
0075346C  8D 85 B0 FD FF FF         LEA EAX,[EBP + 0xfffffdb0]
00753472  68 78 70 7C 00            PUSH 0x7c7078
00753477  50                        PUSH EAX
00753478  E8 A3 B1 FD FF            CALL 0x0072e620
0075347D  83 C4 08                  ADD ESP,0x8
00753480  85 C0                     TEST EAX,EAX
00753482  74 70                     JZ 0x007534f4
00753484  8D 8D B0 FD FF FF         LEA ECX,[EBP + 0xfffffdb0]
0075348A  68 80 70 7C 00            PUSH 0x7c7080
0075348F  51                        PUSH ECX
00753490  E8 8B B1 FD FF            CALL 0x0072e620
00753495  83 C4 08                  ADD ESP,0x8
00753498  85 C0                     TEST EAX,EAX
0075349A  74 58                     JZ 0x007534f4
0075349C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075349F  83 C9 FF                  OR ECX,0xffffffff
007534A2  33 C0                     XOR EAX,EAX
007534A4  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
007534AA  F2 AE                     SCASB.REPNE ES:EDI
007534AC  F7 D1                     NOT ECX
007534AE  2B F9                     SUB EDI,ECX
007534B0  8B C1                     MOV EAX,ECX
007534B2  8B F7                     MOV ESI,EDI
007534B4  8B FA                     MOV EDI,EDX
007534B6  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
007534BC  C1 E9 02                  SHR ECX,0x2
007534BF  F3 A5                     MOVSD.REP ES:EDI,ESI
007534C1  8B C8                     MOV ECX,EAX
007534C3  33 C0                     XOR EAX,EAX
007534C5  83 E1 03                  AND ECX,0x3
007534C8  F3 A4                     MOVSB.REP ES:EDI,ESI
007534CA  BF 80 70 7C 00            MOV EDI,0x7c7080
007534CF  83 C9 FF                  OR ECX,0xffffffff
007534D2  F2 AE                     SCASB.REPNE ES:EDI
007534D4  F7 D1                     NOT ECX
007534D6  2B F9                     SUB EDI,ECX
007534D8  8B F7                     MOV ESI,EDI
007534DA  8B FA                     MOV EDI,EDX
007534DC  8B D1                     MOV EDX,ECX
007534DE  83 C9 FF                  OR ECX,0xffffffff
007534E1  F2 AE                     SCASB.REPNE ES:EDI
007534E3  8B CA                     MOV ECX,EDX
007534E5  4F                        DEC EDI
007534E6  C1 E9 02                  SHR ECX,0x2
007534E9  F3 A5                     MOVSD.REP ES:EDI,ESI
007534EB  8B CA                     MOV ECX,EDX
007534ED  83 E1 03                  AND ECX,0x3
007534F0  F3 A4                     MOVSB.REP ES:EDI,ESI
007534F2  EB 26                     JMP 0x0075351a
LAB_007534f4:
007534F4  8D 85 B0 FB FF FF         LEA EAX,[EBP + 0xfffffbb0]
007534FA  68 80 70 7C 00            PUSH 0x7c7080
007534FF  8D 8D B0 FC FF FF         LEA ECX,[EBP + 0xfffffcb0]
00753505  50                        PUSH EAX
00753506  8D 55 F8                  LEA EDX,[EBP + -0x8]
00753509  51                        PUSH ECX
0075350A  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
00753510  52                        PUSH EDX
00753511  50                        PUSH EAX
00753512  E8 F9 BB FD FF            CALL 0x0072f110
00753517  83 C4 14                  ADD ESP,0x14
LAB_0075351a:
0075351A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075351D  48                        DEC EAX
0075351E  74 50                     JZ 0x00753570
00753520  48                        DEC EAX
00753521  74 32                     JZ 0x00753555
00753523  48                        DEC EAX
00753524  75 79                     JNZ 0x0075359f
00753526  53                        PUSH EBX
00753527  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
0075352D  68 00 00 10 00            PUSH 0x100000
00753532  51                        PUSH ECX
00753533  6A 00                     PUSH 0x0
00753535  E8 A6 FC FF FF            CALL 0x007531e0
0075353A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075353D  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
00753540  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00753543  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00753546  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0075354C  5F                        POP EDI
0075354D  5E                        POP ESI
0075354E  5B                        POP EBX
0075354F  8B E5                     MOV ESP,EBP
00753551  5D                        POP EBP
00753552  C2 18 00                  RET 0x18
LAB_00753555:
00753555  53                        PUSH EBX
00753556  68 00 00 10 00            PUSH 0x100000
0075355B  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
00753561  68 00 00 10 00            PUSH 0x100000
00753566  50                        PUSH EAX
00753567  6A 00                     PUSH 0x0
00753569  E8 82 FB FF FF            CALL 0x007530f0
0075356E  EB 29                     JMP 0x00753599
LAB_00753570:
00753570  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00753573  A9 00 00 10 00            TEST EAX,0x100000
00753578  74 11                     JZ 0x0075358b
0075357A  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
00753580  50                        PUSH EAX
00753581  52                        PUSH EDX
00753582  6A 00                     PUSH 0x0
00753584  E8 F7 0D F8 FF            CALL 0x006d4380
00753589  EB 0E                     JMP 0x00753599
LAB_0075358b:
0075358B  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
00753591  52                        PUSH EDX
00753592  6A 00                     PUSH 0x0
00753594  E8 D7 FB FF FF            CALL 0x00753170
LAB_00753599:
00753599  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075359C  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_0075359f:
0075359F  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
007535A2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007535A5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007535AB  5F                        POP EDI
007535AC  5E                        POP ESI
007535AD  5B                        POP EBX
007535AE  8B E5                     MOV ESP,EBP
007535B0  5D                        POP EBP
007535B1  C2 18 00                  RET 0x18
LAB_007535b4:
007535B4  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
007535B7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007535BA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007535BF  8B 01                     MOV EAX,dword ptr [ECX]
007535C1  85 C0                     TEST EAX,EAX
007535C3  74 06                     JZ 0x007535cb
007535C5  50                        PUSH EAX
007535C6  E8 D5 FC FF FF            CALL 0x007532a0
LAB_007535cb:
007535CB  8D 55 FC                  LEA EDX,[EBP + -0x4]
007535CE  52                        PUSH EDX
007535CF  E8 8C 7A F5 FF            CALL 0x006ab060
007535D4  6A 48                     PUSH 0x48
007535D6  68 08 2C 7F 00            PUSH 0x7f2c08
007535DB  6A 00                     PUSH 0x0
007535DD  56                        PUSH ESI
007535DE  E8 5D 28 F5 FF            CALL 0x006a5e40
LAB_007535e3:
007535E3  5F                        POP EDI
007535E4  5E                        POP ESI
007535E5  33 C0                     XOR EAX,EAX
007535E7  5B                        POP EBX
007535E8  8B E5                     MOV ESP,EBP
007535EA  5D                        POP EBP
007535EB  C2 18 00                  RET 0x18
