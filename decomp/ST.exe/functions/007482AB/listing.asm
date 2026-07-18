FUN_007482ab:
007482AB  56                        PUSH ESI
007482AC  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
007482B0  57                        PUSH EDI
007482B1  8B 7E 58                  MOV EDI,dword ptr [ESI + 0x58]
007482B4  57                        PUSH EDI
007482B5  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007482BB  57                        PUSH EDI
007482BC  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
007482C0  89 46 64                  MOV dword ptr [ESI + 0x64],EAX
007482C3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007482C9  5F                        POP EDI
007482CA  33 C0                     XOR EAX,EAX
007482CC  5E                        POP ESI
007482CD  C2 08 00                  RET 0x8
