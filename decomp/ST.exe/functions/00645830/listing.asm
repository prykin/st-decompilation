CreateSTTorp:
00645830  56                        PUSH ESI
00645831  68 89 02 00 00            PUSH 0x289
00645836  E8 95 AC 06 00            CALL 0x006b04d0
0064583B  8B F0                     MOV ESI,EAX
0064583D  85 F6                     TEST ESI,ESI
0064583F  74 26                     JZ 0x00645867
00645841  57                        PUSH EDI
00645842  8B CE                     MOV ECX,ESI
00645844  E8 EA C0 DB FF            CALL 0x00401933
00645849  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0064584F  8B CF                     MOV ECX,EDI
00645851  E8 C0 BA DB FF            CALL 0x00401316
00645856  C7 07 0C D6 79 00         MOV dword ptr [EDI],0x79d60c
0064585C  C7 06 AC D4 79 00         MOV dword ptr [ESI],0x79d4ac
00645862  8B C6                     MOV EAX,ESI
00645864  5F                        POP EDI
00645865  5E                        POP ESI
00645866  C3                        RET
LAB_00645867:
00645867  33 C0                     XOR EAX,EAX
00645869  5E                        POP ESI
0064586A  C3                        RET
