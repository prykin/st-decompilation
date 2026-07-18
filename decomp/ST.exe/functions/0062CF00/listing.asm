FUN_0062cf00:
0062CF00  56                        PUSH ESI
0062CF01  57                        PUSH EDI
0062CF02  8B F1                     MOV ESI,ECX
0062CF04  E8 D7 91 0B 00            CALL 0x006e60e0
0062CF09  85 F6                     TEST ESI,ESI
0062CF0B  C7 06 84 D0 79 00         MOV dword ptr [ESI],0x79d084
0062CF11  74 11                     JZ 0x0062cf24
0062CF13  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
0062CF16  B9 26 00 00 00            MOV ECX,0x26
0062CF1B  33 C0                     XOR EAX,EAX
0062CF1D  F3 AB                     STOSD.REP ES:EDI
0062CF1F  8B C6                     MOV EAX,ESI
0062CF21  5F                        POP EDI
0062CF22  5E                        POP ESI
0062CF23  C3                        RET
LAB_0062cf24:
0062CF24  33 FF                     XOR EDI,EDI
0062CF26  B9 26 00 00 00            MOV ECX,0x26
0062CF2B  33 C0                     XOR EAX,EAX
0062CF2D  F3 AB                     STOSD.REP ES:EDI
0062CF2F  8B C6                     MOV EAX,ESI
0062CF31  5F                        POP EDI
0062CF32  5E                        POP ESI
0062CF33  C3                        RET
