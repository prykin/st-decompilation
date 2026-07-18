FUN_005fd710:
005FD710  56                        PUSH ESI
005FD711  57                        PUSH EDI
005FD712  8B F1                     MOV ESI,ECX
005FD714  E8 1A 42 E0 FF            CALL 0x00401933
005FD719  B9 0F 00 00 00            MOV ECX,0xf
005FD71E  33 C0                     XOR EAX,EAX
005FD720  8D BE 06 02 00 00         LEA EDI,[ESI + 0x206]
005FD726  C7 06 A0 C8 79 00         MOV dword ptr [ESI],0x79c8a0
005FD72C  F3 AB                     STOSD.REP ES:EDI
005FD72E  AA                        STOSB ES:EDI
005FD72F  8B C6                     MOV EAX,ESI
005FD731  5F                        POP EDI
005FD732  5E                        POP ESI
005FD733  C3                        RET
