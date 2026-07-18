FUN_006023f0:
006023F0  56                        PUSH ESI
006023F1  57                        PUSH EDI
006023F2  8B F1                     MOV ESI,ECX
006023F4  E8 3A F5 DF FF            CALL 0x00401933
006023F9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
006023FF  8B CF                     MOV ECX,EDI
00602401  E8 10 EF DF FF            CALL 0x00401316
00602406  C7 07 10 CB 79 00         MOV dword ptr [EDI],0x79cb10
0060240C  B9 5F 00 00 00            MOV ECX,0x5f
00602411  33 C0                     XOR EAX,EAX
00602413  8D BE 31 02 00 00         LEA EDI,[ESI + 0x231]
00602419  C7 06 B0 C9 79 00         MOV dword ptr [ESI],0x79c9b0
0060241F  F3 AB                     STOSD.REP ES:EDI
00602421  66 AB                     STOSW ES:EDI
00602423  8B C6                     MOV EAX,ESI
00602425  5F                        POP EDI
00602426  5E                        POP ESI
00602427  C3                        RET
