FUN_0074a81d:
0074A81D  56                        PUSH ESI
0074A81E  8B F1                     MOV ESI,ECX
0074A820  57                        PUSH EDI
0074A821  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A827  57                        PUSH EDI
0074A828  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A82E  8B 44 24 0C               MOV EAX,dword ptr [ESP + 0xc]
0074A832  57                        PUSH EDI
0074A833  89 86 B0 00 00 00         MOV dword ptr [ESI + 0xb0],EAX
0074A839  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A83F  5F                        POP EDI
0074A840  5E                        POP ESI
0074A841  C2 04 00                  RET 0x4
