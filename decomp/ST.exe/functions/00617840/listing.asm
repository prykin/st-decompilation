FUN_00617840:
00617840  56                        PUSH ESI
00617841  57                        PUSH EDI
00617842  8B F1                     MOV ESI,ECX
00617844  E8 97 E8 0C 00            CALL 0x006e60e0
00617849  B9 14 00 00 00            MOV ECX,0x14
0061784E  33 C0                     XOR EAX,EAX
00617850  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
00617853  C7 06 BC CE 79 00         MOV dword ptr [ESI],0x79cebc
00617859  F3 AB                     STOSD.REP ES:EDI
0061785B  66 AB                     STOSW ES:EDI
0061785D  8B C6                     MOV EAX,ESI
0061785F  5F                        POP EDI
00617860  5E                        POP ESI
00617861  C3                        RET
