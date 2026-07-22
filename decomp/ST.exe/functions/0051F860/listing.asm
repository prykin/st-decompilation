CreateHelpString:
0051F860  53                        PUSH EBX
0051F861  56                        PUSH ESI
0051F862  68 32 01 00 00            PUSH 0x132
0051F867  E8 64 0C 19 00            CALL 0x006b04d0
0051F86C  8B F0                     MOV ESI,EAX
0051F86E  33 DB                     XOR EBX,EBX
0051F870  3B F3                     CMP ESI,EBX
0051F872  74 4A                     JZ 0x0051f8be
0051F874  57                        PUSH EDI
0051F875  8B CE                     MOV ECX,ESI
0051F877  E8 34 67 1C 00            CALL 0x006e5fb0
0051F87C  B9 41 00 00 00            MOV ECX,0x41
0051F881  33 C0                     XOR EAX,EAX
0051F883  8D 7E 18                  LEA EDI,[ESI + 0x18]
0051F886  C7 06 6C AC 79 00         MOV dword ptr [ESI],0x79ac6c
0051F88C  88 9E 1D 01 00 00         MOV byte ptr [ESI + 0x11d],BL
0051F892  88 9E 1C 01 00 00         MOV byte ptr [ESI + 0x11c],BL
0051F898  89 9E 26 01 00 00         MOV dword ptr [ESI + 0x126],EBX
0051F89E  89 9E 22 01 00 00         MOV dword ptr [ESI + 0x122],EBX
0051F8A4  89 9E 1E 01 00 00         MOV dword ptr [ESI + 0x11e],EBX
0051F8AA  89 9E 2A 01 00 00         MOV dword ptr [ESI + 0x12a],EBX
0051F8B0  89 9E 2E 01 00 00         MOV dword ptr [ESI + 0x12e],EBX
0051F8B6  F3 AB                     STOSD.REP ES:EDI
0051F8B8  8B C6                     MOV EAX,ESI
0051F8BA  5F                        POP EDI
0051F8BB  5E                        POP ESI
0051F8BC  5B                        POP EBX
0051F8BD  C3                        RET
LAB_0051f8be:
0051F8BE  5E                        POP ESI
0051F8BF  33 C0                     XOR EAX,EAX
0051F8C1  5B                        POP EBX
0051F8C2  C3                        RET
