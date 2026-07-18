FUN_0074c5d2:
0074C5D2  53                        PUSH EBX
0074C5D3  56                        PUSH ESI
0074C5D4  57                        PUSH EDI
0074C5D5  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
0074C5D9  8B 77 40                  MOV ESI,dword ptr [EDI + 0x40]
0074C5DC  83 C6 74                  ADD ESI,0x74
0074C5DF  56                        PUSH ESI
0074C5E0  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074C5E6  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074C5EA  57                        PUSH EDI
0074C5EB  E8 31 C1 FF FF            CALL 0x00748721
0074C5F0  8B D8                     MOV EBX,EAX
0074C5F2  85 DB                     TEST EBX,EBX
0074C5F4  75 0E                     JNZ 0x0074c604
0074C5F6  8B 4F 40                  MOV ECX,dword ptr [EDI + 0x40]
0074C5F9  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074C5FD  8B 01                     MOV EAX,dword ptr [ECX]
0074C5FF  FF 50 54                  CALL dword ptr [EAX + 0x54]
0074C602  8B D8                     MOV EBX,EAX
LAB_0074c604:
0074C604  56                        PUSH ESI
0074C605  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C60B  5F                        POP EDI
0074C60C  8B C3                     MOV EAX,EBX
0074C60E  5E                        POP ESI
0074C60F  5B                        POP EBX
0074C610  C2 08 00                  RET 0x8
