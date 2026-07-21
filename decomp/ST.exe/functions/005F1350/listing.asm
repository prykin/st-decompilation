STManBasisC::STManBasisC:
005F1350  56                        PUSH ESI
005F1351  57                        PUSH EDI
005F1352  8B F1                     MOV ESI,ECX
005F1354  E8 87 4D 0F 00            CALL 0x006e60e0
005F1359  B9 0A 00 00 00            MOV ECX,0xa
005F135E  33 C0                     XOR EAX,EAX
005F1360  8D 7E 20                  LEA EDI,[ESI + 0x20]
005F1363  C7 06 80 C5 79 00         MOV dword ptr [ESI],0x79c580
005F1369  F3 AB                     STOSD.REP ES:EDI
005F136B  8B C6                     MOV EAX,ESI
005F136D  5F                        POP EDI
005F136E  5E                        POP ESI
005F136F  C3                        RET
