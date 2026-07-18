FUN_0074896b:
0074896B  56                        PUSH ESI
0074896C  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
00748970  57                        PUSH EDI
00748971  8B 7E 5C                  MOV EDI,dword ptr [ESI + 0x5c]
00748974  57                        PUSH EDI
00748975  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074897B  80 A6 95 00 00 00 00      AND byte ptr [ESI + 0x95],0x0
00748982  57                        PUSH EDI
00748983  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00748989  5F                        POP EDI
0074898A  33 C0                     XOR EAX,EAX
0074898C  5E                        POP ESI
0074898D  C2 04 00                  RET 0x4
