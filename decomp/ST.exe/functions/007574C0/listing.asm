FUN_007574c0:
007574C0  55                        PUSH EBP
007574C1  8B EC                     MOV EBP,ESP
007574C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007574C6  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
007574C9  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
007574CD  66 85 C9                  TEST CX,CX
007574D0  74 05                     JZ 0x007574d7
007574D2  0F BF C1                  MOVSX EAX,CX
007574D5  EB 0A                     JMP 0x007574e1
LAB_007574d7:
007574D7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007574DA  83 C1 08                  ADD ECX,0x8
007574DD  51                        PUSH ECX
007574DE  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_007574e1:
007574E1  53                        PUSH EBX
007574E2  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
007574E5  56                        PUSH ESI
007574E6  8D 70 08                  LEA ESI,[EAX + 0x8]
007574E9  0F BF 53 08               MOVSX EDX,word ptr [EBX + 0x8]
007574ED  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007574F0  8D 0C 1E                  LEA ECX,[ESI + EBX*0x1]
007574F3  2B D0                     SUB EDX,EAX
007574F5  57                        PUSH EDI
007574F6  8D 7C 03 10               LEA EDI,[EBX + EAX*0x1 + 0x10]
007574FA  52                        PUSH EDX
007574FB  8D 54 01 10               LEA EDX,[ECX + EAX*0x1 + 0x10]
007574FF  57                        PUSH EDI
00757500  52                        PUSH EDX
00757501  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00757504  E8 67 65 FD FF            CALL 0x0072da70
00757509  8B CE                     MOV ECX,ESI
0075750B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0075750E  8B C1                     MOV EAX,ECX
00757510  83 C4 0C                  ADD ESP,0xc
00757513  C1 E9 02                  SHR ECX,0x2
00757516  F3 A5                     MOVSD.REP ES:EDI,ESI
00757518  8B C8                     MOV ECX,EAX
0075751A  83 E1 03                  AND ECX,0x3
0075751D  F3 A4                     MOVSB.REP ES:EDI,ESI
0075751F  66 8B C8                  MOV CX,AX
00757522  5F                        POP EDI
00757523  66 01 4B 08               ADD word ptr [EBX + 0x8],CX
00757527  5E                        POP ESI
00757528  5B                        POP EBX
00757529  5D                        POP EBP
0075752A  C2 10 00                  RET 0x10
