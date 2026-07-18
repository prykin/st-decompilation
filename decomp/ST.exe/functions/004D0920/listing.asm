FUN_004d0920:
004D0920  56                        PUSH ESI
004D0921  57                        PUSH EDI
004D0922  8B F1                     MOV ESI,ECX
004D0924  E8 0A 10 F3 FF            CALL 0x00401933
004D0929  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004D092F  8B CF                     MOV ECX,EDI
004D0931  E8 E0 09 F3 FF            CALL 0x00401316
004D0936  C7 07 C0 76 79 00         MOV dword ptr [EDI],0x7976c0
004D093C  C7 06 60 75 79 00         MOV dword ptr [ESI],0x797560
004D0942  C7 86 4D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x24d],0x0
004D094C  8B C6                     MOV EAX,ESI
004D094E  5F                        POP EDI
004D094F  5E                        POP ESI
004D0950  C3                        RET
