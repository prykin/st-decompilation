FUN_005556d0:
005556D0  56                        PUSH ESI
005556D1  57                        PUSH EDI
005556D2  8B F1                     MOV ESI,ECX
005556D4  E8 07 0A 19 00            CALL 0x006e60e0
005556D9  C7 06 C0 AE 79 00         MOV dword ptr [ESI],0x79aec0
005556DF  89 35 7C 2A 80 00         MOV dword ptr [0x00802a7c],ESI
005556E5  B9 00 02 00 00            MOV ECX,0x200
005556EA  33 C0                     XOR EAX,EAX
005556EC  8D 7E 28                  LEA EDI,[ESI + 0x28]
005556EF  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
005556F6  C7 86 28 08 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x828],0xffffffff
00555700  F3 AB                     STOSD.REP ES:EDI
00555702  8B C6                     MOV EAX,ESI
00555704  5F                        POP EDI
00555705  5E                        POP ESI
00555706  C3                        RET
