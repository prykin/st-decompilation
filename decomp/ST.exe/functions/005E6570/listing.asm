FUN_005e6570:
005E6570  53                        PUSH EBX
005E6571  56                        PUSH ESI
005E6572  68 B4 00 00 00            PUSH 0xb4
005E6577  E8 54 9F 0C 00            CALL 0x006b04d0
005E657C  8B F0                     MOV ESI,EAX
005E657E  33 DB                     XOR EBX,EBX
005E6580  3B F3                     CMP ESI,EBX
005E6582  74 7B                     JZ 0x005e65ff
005E6584  57                        PUSH EDI
005E6585  8B CE                     MOV ECX,ESI
005E6587  E8 24 FA 0F 00            CALL 0x006e5fb0
005E658C  B9 08 00 00 00            MOV ECX,0x8
005E6591  33 C0                     XOR EAX,EAX
005E6593  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005E6596  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005E6599  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005E659C  F3 AB                     STOSD.REP ES:EDI
005E659E  B9 08 00 00 00            MOV ECX,0x8
005E65A3  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005E65A6  F3 AB                     STOSD.REP ES:EDI
005E65A8  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005E65AE  B9 08 00 00 00            MOV ECX,0x8
005E65B3  8D 7E 61                  LEA EDI,[ESI + 0x61]
005E65B6  C7 06 3C C2 79 00         MOV dword ptr [ESI],0x79c23c
005E65BC  F3 AB                     STOSD.REP ES:EDI
005E65BE  B9 08 00 00 00            MOV ECX,0x8
005E65C3  8D BE 81 00 00 00         LEA EDI,[ESI + 0x81]
005E65C9  F3 AB                     STOSD.REP ES:EDI
005E65CB  B8 2C 01 00 00            MOV EAX,0x12c
005E65D0  C6 86 A5 00 00 00 02      MOV byte ptr [ESI + 0xa5],0x2
005E65D7  89 86 AF 00 00 00         MOV dword ptr [ESI + 0xaf],EAX
005E65DD  89 86 AB 00 00 00         MOV dword ptr [ESI + 0xab],EAX
005E65E3  88 9E A6 00 00 00         MOV byte ptr [ESI + 0xa6],BL
005E65E9  C7 86 A7 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0xa7],0xffffffff
005E65F3  88 9E B3 00 00 00         MOV byte ptr [ESI + 0xb3],BL
005E65F9  8B C6                     MOV EAX,ESI
005E65FB  5F                        POP EDI
005E65FC  5E                        POP ESI
005E65FD  5B                        POP EBX
005E65FE  C3                        RET
LAB_005e65ff:
005E65FF  5E                        POP ESI
005E6600  33 C0                     XOR EAX,EAX
005E6602  5B                        POP EBX
005E6603  C3                        RET
