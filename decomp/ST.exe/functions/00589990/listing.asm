FUN_00589990:
00589990  56                        PUSH ESI
00589991  57                        PUSH EDI
00589992  8B F1                     MOV ESI,ECX
00589994  E8 9A 7F E7 FF            CALL 0x00401933
00589999  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058999F  8B CF                     MOV ECX,EDI
005899A1  E8 70 79 E7 FF            CALL 0x00401316
005899A6  C7 07 18 BD 79 00         MOV dword ptr [EDI],0x79bd18
005899AC  B9 0A 00 00 00            MOV ECX,0xa
005899B1  33 C0                     XOR EAX,EAX
005899B3  8D BE 85 02 00 00         LEA EDI,[ESI + 0x285]
005899B9  C7 06 B8 BB 79 00         MOV dword ptr [ESI],0x79bbb8
005899BF  C7 86 49 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x249],0x0
005899C9  F3 AB                     STOSD.REP ES:EDI
005899CB  8B C6                     MOV EAX,ESI
005899CD  5F                        POP EDI
005899CE  5E                        POP ESI
005899CF  C3                        RET
