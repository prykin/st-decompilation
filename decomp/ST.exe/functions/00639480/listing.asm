FUN_00639480:
00639480  56                        PUSH ESI
00639481  57                        PUSH EDI
00639482  8B F1                     MOV ESI,ECX
00639484  E8 AA 84 DC FF            CALL 0x00401933
00639489  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0063948F  8B CF                     MOV ECX,EDI
00639491  E8 80 7E DC FF            CALL 0x00401316
00639496  C7 07 38 D3 79 00         MOV dword ptr [EDI],0x79d338
0063949C  B9 0F 00 00 00            MOV ECX,0xf
006394A1  33 C0                     XOR EAX,EAX
006394A3  8D BE 31 02 00 00         LEA EDI,[ESI + 0x231]
006394A9  C7 06 D8 D1 79 00         MOV dword ptr [ESI],0x79d1d8
006394AF  F3 AB                     STOSD.REP ES:EDI
006394B1  66 AB                     STOSW ES:EDI
006394B3  B9 0E 00 00 00            MOV ECX,0xe
006394B8  33 C0                     XOR EAX,EAX
006394BA  8D BE 72 02 00 00         LEA EDI,[ESI + 0x272]
006394C0  F3 AB                     STOSD.REP ES:EDI
006394C2  AA                        STOSB ES:EDI
006394C3  32 C0                     XOR AL,AL
006394C5  C6 86 70 02 00 00 01      MOV byte ptr [ESI + 0x270],0x1
006394CC  88 86 6F 02 00 00         MOV byte ptr [ESI + 0x26f],AL
006394D2  88 86 71 02 00 00         MOV byte ptr [ESI + 0x271],AL
006394D8  8B C6                     MOV EAX,ESI
006394DA  5F                        POP EDI
006394DB  5E                        POP ESI
006394DC  C3                        RET
