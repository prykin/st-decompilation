FUN_005947d0:
005947D0  56                        PUSH ESI
005947D1  68 18 01 00 00            PUSH 0x118
005947D6  E8 F5 BC 11 00            CALL 0x006b04d0
005947DB  8B F0                     MOV ESI,EAX
005947DD  85 F6                     TEST ESI,ESI
005947DF  74 48                     JZ 0x00594829
005947E1  57                        PUSH EDI
005947E2  8B CE                     MOV ECX,ESI
005947E4  E8 C7 17 15 00            CALL 0x006e5fb0
005947E9  B9 20 00 00 00            MOV ECX,0x20
005947EE  33 C0                     XOR EAX,EAX
005947F0  8D BE 88 00 00 00         LEA EDI,[ESI + 0x88]
005947F6  C7 06 1C C0 79 00         MOV dword ptr [ESI],0x79c01c
005947FC  F3 AB                     STOSD.REP ES:EDI
005947FE  89 86 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EAX
00594804  89 86 14 01 00 00         MOV dword ptr [ESI + 0x114],EAX
0059480A  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
00594810  C7 86 08 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x108],0xffffffff
0059481A  C7 86 84 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0x84],0x1
00594824  8B C6                     MOV EAX,ESI
00594826  5F                        POP EDI
00594827  5E                        POP ESI
00594828  C3                        RET
LAB_00594829:
00594829  33 C0                     XOR EAX,EAX
0059482B  5E                        POP ESI
0059482C  C3                        RET
