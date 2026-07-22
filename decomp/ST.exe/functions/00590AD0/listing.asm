CreateMAdv:
00590AD0  56                        PUSH ESI
00590AD1  6A 62                     PUSH 0x62
00590AD3  E8 F8 F9 11 00            CALL 0x006b04d0
00590AD8  8B F0                     MOV ESI,EAX
00590ADA  85 F6                     TEST ESI,ESI
00590ADC  74 33                     JZ 0x00590b11
00590ADE  57                        PUSH EDI
00590ADF  8B CE                     MOV ECX,ESI
00590AE1  E8 CA 54 15 00            CALL 0x006e5fb0
00590AE6  B9 08 00 00 00            MOV ECX,0x8
00590AEB  33 C0                     XOR EAX,EAX
00590AED  8D 7E 18                  LEA EDI,[ESI + 0x18]
00590AF0  C7 06 E4 BF 79 00         MOV dword ptr [ESI],0x79bfe4
00590AF6  F3 AB                     STOSD.REP ES:EDI
00590AF8  B9 08 00 00 00            MOV ECX,0x8
00590AFD  8D 7E 38                  LEA EDI,[ESI + 0x38]
00590B00  F3 AB                     STOSD.REP ES:EDI
00590B02  89 46 5E                  MOV dword ptr [ESI + 0x5e],EAX
00590B05  88 46 5D                  MOV byte ptr [ESI + 0x5d],AL
00590B08  C6 46 5C 02               MOV byte ptr [ESI + 0x5c],0x2
00590B0C  8B C6                     MOV EAX,ESI
00590B0E  5F                        POP EDI
00590B0F  5E                        POP ESI
00590B10  C3                        RET
LAB_00590b11:
00590B11  33 C0                     XOR EAX,EAX
00590B13  5E                        POP ESI
00590B14  C3                        RET
