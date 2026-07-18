FUN_005fd5c0:
005FD5C0  55                        PUSH EBP
005FD5C1  8B EC                     MOV EBP,ESP
005FD5C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005FD5C6  57                        PUSH EDI
005FD5C7  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005FD5CA  2B 79 0C                  SUB EDI,dword ptr [ECX + 0xc]
005FD5CD  75 07                     JNZ 0x005fd5d6
005FD5CF  33 C0                     XOR EAX,EAX
005FD5D1  5F                        POP EDI
005FD5D2  5D                        POP EBP
005FD5D3  C2 10 00                  RET 0x10
LAB_005fd5d6:
005FD5D6  53                        PUSH EBX
005FD5D7  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
005FD5DA  8B C3                     MOV EAX,EBX
005FD5DC  99                        CDQ
005FD5DD  2B C2                     SUB EAX,EDX
005FD5DF  D1 F8                     SAR EAX,0x1
005FD5E1  3B F8                     CMP EDI,EAX
005FD5E3  7D 74                     JGE 0x005fd659
005FD5E5  8B 09                     MOV ECX,dword ptr [ECX]
005FD5E7  56                        PUSH ESI
005FD5E8  8B F1                     MOV ESI,ECX
005FD5EA  0F AF F7                  IMUL ESI,EDI
005FD5ED  8B C6                     MOV EAX,ESI
005FD5EF  0F AF C7                  IMUL EAX,EDI
005FD5F2  99                        CDQ
005FD5F3  F7 FB                     IDIV EBX
005FD5F5  8B F9                     MOV EDI,ECX
005FD5F7  0F AF F9                  IMUL EDI,ECX
005FD5FA  0F AF CB                  IMUL ECX,EBX
005FD5FD  D1 E7                     SHL EDI,0x1
005FD5FF  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005FD602  2B F0                     SUB ESI,EAX
005FD604  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FD607  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005FD60A  B8 67 66 66 66            MOV EAX,0x66666667
005FD60F  0F AF D6                  IMUL EDX,ESI
005FD612  0F AF D6                  IMUL EDX,ESI
005FD615  F7 EA                     IMUL EDX
005FD617  8B C2                     MOV EAX,EDX
005FD619  C1 F8 02                  SAR EAX,0x2
005FD61C  8B D0                     MOV EDX,EAX
005FD61E  C1 EA 1F                  SHR EDX,0x1f
005FD621  03 C2                     ADD EAX,EDX
005FD623  99                        CDQ
005FD624  F7 FF                     IDIV EDI
005FD626  8B F8                     MOV EDI,EAX
005FD628  0F AF C6                  IMUL EAX,ESI
005FD62B  D1 E0                     SHL EAX,0x1
005FD62D  99                        CDQ
005FD62E  F7 F9                     IDIV ECX
005FD630  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005FD633  03 F8                     ADD EDI,EAX
005FD635  B8 67 66 66 66            MOV EAX,0x66666667
005FD63A  F7 EE                     IMUL ESI
005FD63C  C1 FA 02                  SAR EDX,0x2
005FD63F  8B C2                     MOV EAX,EDX
005FD641  5E                        POP ESI
005FD642  C1 E8 1F                  SHR EAX,0x1f
005FD645  03 D0                     ADD EDX,EAX
005FD647  5B                        POP EBX
005FD648  89 11                     MOV dword ptr [ECX],EDX
005FD64A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005FD64D  B8 01 00 00 00            MOV EAX,0x1
005FD652  89 3A                     MOV dword ptr [EDX],EDI
005FD654  5F                        POP EDI
005FD655  5D                        POP EBP
005FD656  C2 10 00                  RET 0x10
LAB_005fd659:
005FD659  5B                        POP EBX
005FD65A  B8 02 00 00 00            MOV EAX,0x2
005FD65F  5F                        POP EDI
005FD660  5D                        POP EBP
005FD661  C2 10 00                  RET 0x10
