FUN_00609950:
00609950  56                        PUSH ESI
00609951  57                        PUSH EDI
00609952  8B F1                     MOV ESI,ECX
00609954  E8 DA 7F DF FF            CALL 0x00401933
00609959  85 F6                     TEST ESI,ESI
0060995B  C7 06 28 CC 79 00         MOV dword ptr [ESI],0x79cc28
00609961  74 08                     JZ 0x0060996b
00609963  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00609969  EB 02                     JMP 0x0060996d
LAB_0060996b:
0060996B  33 FF                     XOR EDI,EDI
LAB_0060996d:
0060996D  B9 20 00 00 00            MOV ECX,0x20
00609972  33 C0                     XOR EAX,EAX
00609974  F3 AB                     STOSD.REP ES:EDI
00609976  66 AB                     STOSW ES:EDI
00609978  AA                        STOSB ES:EDI
00609979  C6 86 25 02 00 00 01      MOV byte ptr [ESI + 0x225],0x1
00609980  8B C6                     MOV EAX,ESI
00609982  5F                        POP EDI
00609983  5E                        POP ESI
00609984  C3                        RET
