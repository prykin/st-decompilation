FUN_0074aa87:
0074AA87  53                        PUSH EBX
0074AA88  8B 5C 24 08               MOV EBX,dword ptr [ESP + 0x8]
0074AA8C  55                        PUSH EBP
0074AA8D  8B 2D 8C BB 85 00         MOV EBP,dword ptr [0x0085bb8c]
0074AA93  56                        PUSH ESI
0074AA94  8B B3 CC 00 00 00         MOV ESI,dword ptr [EBX + 0xcc]
0074AA9A  83 C6 7C                  ADD ESI,0x7c
0074AA9D  57                        PUSH EDI
0074AA9E  56                        PUSH ESI
0074AA9F  FF D5                     CALL EBP
0074AAA1  8B BB CC 00 00 00         MOV EDI,dword ptr [EBX + 0xcc]
0074AAA7  81 C7 94 00 00 00         ADD EDI,0x94
0074AAAD  57                        PUSH EDI
0074AAAE  FF D5                     CALL EBP
0074AAB0  8B 8B CC 00 00 00         MOV ECX,dword ptr [EBX + 0xcc]
0074AAB6  8B 01                     MOV EAX,dword ptr [ECX]
0074AAB8  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
0074AABE  8B E8                     MOV EBP,EAX
0074AAC0  85 ED                     TEST EBP,EBP
0074AAC2  7C 08                     JL 0x0074aacc
0074AAC4  53                        PUSH EBX
0074AAC5  E8 A1 DE FF FF            CALL 0x0074896b
0074AACA  8B E8                     MOV EBP,EAX
LAB_0074aacc:
0074AACC  57                        PUSH EDI
0074AACD  8B 3D 90 BB 85 00         MOV EDI,dword ptr [0x0085bb90]
0074AAD3  FF D7                     CALL EDI
0074AAD5  56                        PUSH ESI
0074AAD6  FF D7                     CALL EDI
0074AAD8  5F                        POP EDI
0074AAD9  8B C5                     MOV EAX,EBP
0074AADB  5E                        POP ESI
0074AADC  5D                        POP EBP
0074AADD  5B                        POP EBX
0074AADE  C2 04 00                  RET 0x4
