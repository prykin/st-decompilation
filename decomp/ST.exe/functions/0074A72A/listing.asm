FUN_0074a72a:
0074A72A  56                        PUSH ESI
0074A72B  57                        PUSH EDI
0074A72C  8B F1                     MOV ESI,ECX
0074A72E  E8 2D 00 00 00            CALL 0x0074a760
0074A733  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A739  57                        PUSH EDI
0074A73A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A740  33 C0                     XOR EAX,EAX
0074A742  57                        PUSH EDI
0074A743  89 86 B8 00 00 00         MOV dword ptr [ESI + 0xb8],EAX
0074A749  89 46 70                  MOV dword ptr [ESI + 0x70],EAX
0074A74C  89 46 74                  MOV dword ptr [ESI + 0x74],EAX
0074A74F  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
0074A755  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A75B  5F                        POP EDI
0074A75C  33 C0                     XOR EAX,EAX
0074A75E  5E                        POP ESI
0074A75F  C3                        RET
