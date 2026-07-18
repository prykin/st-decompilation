FUN_0063bfa0:
0063BFA0  56                        PUSH ESI
0063BFA1  57                        PUSH EDI
0063BFA2  8B F1                     MOV ESI,ECX
0063BFA4  E8 8A 59 DC FF            CALL 0x00401933
0063BFA9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0063BFAF  8B CF                     MOV ECX,EDI
0063BFB1  E8 60 53 DC FF            CALL 0x00401316
0063BFB6  33 C0                     XOR EAX,EAX
0063BFB8  C7 07 9C D4 79 00         MOV dword ptr [EDI],0x79d49c
0063BFBE  89 86 92 02 00 00         MOV dword ptr [ESI + 0x292],EAX
0063BFC4  89 86 9A 02 00 00         MOV dword ptr [ESI + 0x29a],EAX
0063BFCA  88 86 9F 02 00 00         MOV byte ptr [ESI + 0x29f],AL
0063BFD0  89 86 36 03 00 00         MOV dword ptr [ESI + 0x336],EAX
0063BFD6  83 C8 FF                  OR EAX,0xffffffff
0063BFD9  C7 06 3C D3 79 00         MOV dword ptr [ESI],0x79d33c
0063BFDF  89 86 3A 03 00 00         MOV dword ptr [ESI + 0x33a],EAX
0063BFE5  89 86 53 03 00 00         MOV dword ptr [ESI + 0x353],EAX
0063BFEB  89 86 63 03 00 00         MOV dword ptr [ESI + 0x363],EAX
0063BFF1  89 86 73 03 00 00         MOV dword ptr [ESI + 0x373],EAX
0063BFF7  C6 86 65 02 00 00 04      MOV byte ptr [ESI + 0x265],0x4
0063BFFE  8B C6                     MOV EAX,ESI
0063C000  5F                        POP EDI
0063C001  5E                        POP ESI
0063C002  C3                        RET
