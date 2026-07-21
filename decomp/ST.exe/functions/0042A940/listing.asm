STAllPlayersC::STAllPlayersC:
0042A940  56                        PUSH ESI
0042A941  57                        PUSH EDI
0042A942  8B F1                     MOV ESI,ECX
0042A944  E8 97 B7 2B 00            CALL 0x006e60e0
0042A949  B9 D5 14 00 00            MOV ECX,0x14d5
0042A94E  33 C0                     XOR EAX,EAX
0042A950  BF 20 4E 7F 00            MOV EDI,0x7f4e20
0042A955  C7 06 9C 05 79 00         MOV dword ptr [ESI],0x79059c
0042A95B  F3 AB                     STOSD.REP ES:EDI
0042A95D  B8 20 4E 7F 00            MOV EAX,0x7f4e20
LAB_0042a962:
0042A962  C6 00 00                  MOV byte ptr [EAX],0x0
0042A965  05 62 0A 00 00            ADD EAX,0xa62
0042A96A  3D 30 A1 7F 00            CMP EAX,0x7fa130
0042A96F  7C F1                     JL 0x0042a962
0042A971  8B C6                     MOV EAX,ESI
0042A973  5F                        POP EDI
0042A974  5E                        POP ESI
0042A975  C3                        RET
