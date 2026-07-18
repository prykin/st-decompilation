FUN_00600110:
00600110  55                        PUSH EBP
00600111  8B EC                     MOV EBP,ESP
00600113  83 EC 0C                  SUB ESP,0xc
00600116  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00600119  33 C0                     XOR EAX,EAX
0060011B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060011E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00600121  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00600124  B8 79 19 8C 02            MOV EAX,0x28c1979
00600129  85 D2                     TEST EDX,EDX
0060012B  7C 10                     JL 0x0060013d
0060012D  F7 EA                     IMUL EDX
0060012F  D1 FA                     SAR EDX,0x1
00600131  8B C2                     MOV EAX,EDX
00600133  C1 E8 1F                  SHR EAX,0x1f
00600136  03 D0                     ADD EDX,EAX
00600138  0F BF D2                  MOVSX EDX,DX
0060013B  EB 0F                     JMP 0x0060014c
LAB_0060013d:
0060013D  F7 EA                     IMUL EDX
0060013F  D1 FA                     SAR EDX,0x1
00600141  8B C2                     MOV EAX,EDX
00600143  C1 E8 1F                  SHR EAX,0x1f
00600146  03 D0                     ADD EDX,EAX
00600148  0F BF D2                  MOVSX EDX,DX
0060014B  4A                        DEC EDX
LAB_0060014c:
0060014C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0060014F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00600152  85 D2                     TEST EDX,EDX
00600154  B8 79 19 8C 02            MOV EAX,0x28c1979
00600159  7C 10                     JL 0x0060016b
0060015B  F7 EA                     IMUL EDX
0060015D  D1 FA                     SAR EDX,0x1
0060015F  8B C2                     MOV EAX,EDX
00600161  C1 E8 1F                  SHR EAX,0x1f
00600164  03 D0                     ADD EDX,EAX
00600166  0F BF D2                  MOVSX EDX,DX
00600169  EB 0F                     JMP 0x0060017a
LAB_0060016b:
0060016B  F7 EA                     IMUL EDX
0060016D  D1 FA                     SAR EDX,0x1
0060016F  8B C2                     MOV EAX,EDX
00600171  C1 E8 1F                  SHR EAX,0x1f
00600174  03 D0                     ADD EDX,EAX
00600176  0F BF D2                  MOVSX EDX,DX
00600179  4A                        DEC EDX
LAB_0060017a:
0060017A  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0060017D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00600180  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00600183  8D 4D F4                  LEA ECX,[EBP + -0xc]
00600186  6A 00                     PUSH 0x0
00600188  51                        PUSH ECX
00600189  52                        PUSH EDX
0060018A  6A 00                     PUSH 0x0
0060018C  6A 02                     PUSH 0x2
0060018E  B9 58 76 80 00            MOV ECX,0x807658
00600193  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00600196  E8 3D 4A E0 FF            CALL 0x00404bd8
0060019B  8B E5                     MOV ESP,EBP
0060019D  5D                        POP EBP
0060019E  C2 0C 00                  RET 0xc
