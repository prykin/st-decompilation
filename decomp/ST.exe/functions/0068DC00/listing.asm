FUN_0068dc00:
0068DC00  56                        PUSH ESI
0068DC01  57                        PUSH EDI
0068DC02  8B F1                     MOV ESI,ECX
0068DC04  E8 D7 84 05 00            CALL 0x006e60e0
0068DC09  33 D2                     XOR EDX,EDX
0068DC0B  C7 06 6C D7 79 00         MOV dword ptr [ESI],0x79d76c
0068DC11  3B F2                     CMP ESI,EDX
0068DC13  74 05                     JZ 0x0068dc1a
0068DC15  8D 7E 20                  LEA EDI,[ESI + 0x20]
0068DC18  EB 02                     JMP 0x0068dc1c
LAB_0068dc1a:
0068DC1A  33 FF                     XOR EDI,EDI
LAB_0068dc1c:
0068DC1C  B9 43 00 00 00            MOV ECX,0x43
0068DC21  33 C0                     XOR EAX,EAX
0068DC23  F3 AB                     STOSD.REP ES:EDI
0068DC25  C7 46 20 8E 03 00 00      MOV dword ptr [ESI + 0x20],0x38e
0068DC2C  C7 86 9D 00 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x9d],0xff
0068DC36  89 96 30 01 00 00         MOV dword ptr [ESI + 0x130],EDX
0068DC3C  89 96 34 01 00 00         MOV dword ptr [ESI + 0x134],EDX
0068DC42  89 96 38 01 00 00         MOV dword ptr [ESI + 0x138],EDX
0068DC48  89 96 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EDX
0068DC4E  89 96 40 01 00 00         MOV dword ptr [ESI + 0x140],EDX
0068DC54  8B C6                     MOV EAX,ESI
0068DC56  5F                        POP EDI
0068DC57  5E                        POP ESI
0068DC58  C3                        RET
