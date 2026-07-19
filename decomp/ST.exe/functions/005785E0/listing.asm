STCrabC::STCrabC:
005785E0  56                        PUSH ESI
005785E1  57                        PUSH EDI
005785E2  8B F1                     MOV ESI,ECX
005785E4  E8 4A 93 E8 FF            CALL 0x00401933
005785E9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005785EF  8B CF                     MOV ECX,EDI
005785F1  E8 20 8D E8 FF            CALL 0x00401316
005785F6  C7 07 98 B3 79 00         MOV dword ptr [EDI],0x79b398
005785FC  C7 06 38 B2 79 00         MOV dword ptr [ESI],0x79b238
00578602  C7 86 39 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x239],0x0
0057860C  8B C6                     MOV EAX,ESI
0057860E  5F                        POP EDI
0057860F  5E                        POP ESI
00578610  C3                        RET
