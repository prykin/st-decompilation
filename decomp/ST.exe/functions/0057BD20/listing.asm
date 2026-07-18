FUN_0057bd20:
0057BD20  56                        PUSH ESI
0057BD21  57                        PUSH EDI
0057BD22  8B F1                     MOV ESI,ECX
0057BD24  E8 0A 5C E8 FF            CALL 0x00401933
0057BD29  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0057BD2F  8B CF                     MOV ECX,EDI
0057BD31  E8 E0 55 E8 FF            CALL 0x00401316
0057BD36  C7 07 24 B5 79 00         MOV dword ptr [EDI],0x79b524
0057BD3C  C7 06 C4 B3 79 00         MOV dword ptr [ESI],0x79b3c4
0057BD42  C7 86 3B 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23b],0x0
0057BD4C  8B C6                     MOV EAX,ESI
0057BD4E  5F                        POP EDI
0057BD4F  5E                        POP ESI
0057BD50  C3                        RET
