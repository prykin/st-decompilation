FUN_0074a347:
0074A347  56                        PUSH ESI
0074A348  8B F1                     MOV ESI,ECX
0074A34A  57                        PUSH EDI
0074A34B  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A351  57                        PUSH EDI
0074A352  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A358  33 C0                     XOR EAX,EAX
0074A35A  57                        PUSH EDI
0074A35B  39 46 6C                  CMP dword ptr [ESI + 0x6c],EAX
0074A35E  0F 95 C0                  SETNZ AL
0074A361  8B F0                     MOV ESI,EAX
0074A363  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A369  8B C6                     MOV EAX,ESI
0074A36B  5F                        POP EDI
0074A36C  5E                        POP ESI
0074A36D  C3                        RET
