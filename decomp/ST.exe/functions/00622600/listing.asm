FUN_00622600:
00622600  56                        PUSH ESI
00622601  57                        PUSH EDI
00622602  8B F1                     MOV ESI,ECX
00622604  E8 2A F3 DD FF            CALL 0x00401933
00622609  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0062260F  8B CF                     MOV ECX,EDI
00622611  E8 00 ED DD FF            CALL 0x00401316
00622616  C7 07 5C D0 79 00         MOV dword ptr [EDI],0x79d05c
0062261C  B9 42 00 00 00            MOV ECX,0x42
00622621  33 C0                     XOR EAX,EAX
00622623  8D BE 5E 02 00 00         LEA EDI,[ESI + 0x25e]
00622629  C7 06 FC CE 79 00         MOV dword ptr [ESI],0x79cefc
0062262F  F3 AB                     STOSD.REP ES:EDI
00622631  AA                        STOSB ES:EDI
00622632  C7 86 BA 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x2ba],0xffffffff
0062263C  8B C6                     MOV EAX,ESI
0062263E  5F                        POP EDI
0062263F  5E                        POP ESI
00622640  C3                        RET
