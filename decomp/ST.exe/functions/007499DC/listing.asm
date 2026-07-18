FUN_007499dc:
007499DC  53                        PUSH EBX
007499DD  55                        PUSH EBP
007499DE  56                        PUSH ESI
007499DF  57                        PUSH EDI
007499E0  33 DB                     XOR EBX,EBX
007499E2  BA 70 12 7A 00            MOV EDX,0x7a1270
LAB_007499e7:
007499E7  8B 02                     MOV EAX,dword ptr [EDX]
007499E9  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
007499ED  6A 10                     PUSH 0x10
007499EF  8B F0                     MOV ESI,EAX
007499F1  59                        POP ECX
007499F2  33 ED                     XOR EBP,EBP
007499F4  F3 A6                     CMPSB.REPE ES:EDI,ESI
007499F6  74 16                     JZ 0x00749a0e
007499F8  6A 10                     PUSH 0x10
007499FA  8B F0                     MOV ESI,EAX
007499FC  59                        POP ECX
007499FD  BF 68 E3 79 00            MOV EDI,0x79e368
00749A02  33 C0                     XOR EAX,EAX
00749A04  F3 A6                     CMPSB.REPE ES:EDI,ESI
00749A06  74 12                     JZ 0x00749a1a
00749A08  43                        INC EBX
00749A09  83 C2 0C                  ADD EDX,0xc
00749A0C  EB D9                     JMP 0x007499e7
LAB_00749a0e:
00749A0E  8D 04 5B                  LEA EAX,[EBX + EBX*0x2]
00749A11  8B 04 85 78 12 7A 00      MOV EAX,dword ptr [EAX*0x4 + 0x7a1278]
00749A18  EB 05                     JMP 0x00749a1f
LAB_00749a1a:
00749A1A  B8 DC 12 7A 00            MOV EAX,0x7a12dc
LAB_00749a1f:
00749A1F  5F                        POP EDI
00749A20  5E                        POP ESI
00749A21  5D                        POP EBP
00749A22  5B                        POP EBX
00749A23  C2 04 00                  RET 0x4
