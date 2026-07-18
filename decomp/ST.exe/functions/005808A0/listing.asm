FUN_005808a0:
005808A0  55                        PUSH EBP
005808A1  8B EC                     MOV EBP,ESP
005808A3  56                        PUSH ESI
005808A4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005808A7  57                        PUSH EDI
005808A8  8B F9                     MOV EDI,ECX
005808AA  C6 06 04                  MOV byte ptr [ESI],0x4
005808AD  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
005808B1  8B 07                     MOV EAX,dword ptr [EDI]
005808B3  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005808B6  89 46 02                  MOV dword ptr [ESI + 0x2],EAX
005808B9  C6 46 06 00               MOV byte ptr [ESI + 0x6],0x0
005808BD  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
005808C0  5F                        POP EDI
005808C1  89 4E 07                  MOV dword ptr [ESI + 0x7],ECX
005808C4  5E                        POP ESI
005808C5  5D                        POP EBP
005808C6  C2 04 00                  RET 0x4
