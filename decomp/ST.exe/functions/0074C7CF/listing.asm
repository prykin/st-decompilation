FUN_0074c7cf:
0074C7CF  56                        PUSH ESI
0074C7D0  8B F1                     MOV ESI,ECX
0074C7D2  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C7D6  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
0074C7DC  6A 01                     PUSH 0x1
0074C7DE  8B 01                     MOV EAX,dword ptr [ECX]
0074C7E0  FF 50 50                  CALL dword ptr [EAX + 0x50]
0074C7E3  85 C0                     TEST EAX,EAX
0074C7E5  7C 0B                     JL 0x0074c7f2
0074C7E7  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C7EB  8B CE                     MOV ECX,ESI
0074C7ED  E8 47 BB FF FF            CALL 0x00748339
LAB_0074c7f2:
0074C7F2  5E                        POP ESI
0074C7F3  C2 04 00                  RET 0x4
