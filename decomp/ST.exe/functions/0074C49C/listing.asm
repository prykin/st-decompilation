FUN_0074c49c:
0074C49C  56                        PUSH ESI
0074C49D  8B F1                     MOV ESI,ECX
0074C49F  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C4A3  E8 AF BA FF FF            CALL 0x00747f57
0074C4A8  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074C4AE  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C4B2  8B 01                     MOV EAX,dword ptr [ECX]
0074C4B4  6A 00                     PUSH 0x0
0074C4B6  FF 50 44                  CALL dword ptr [EAX + 0x44]
0074C4B9  33 C0                     XOR EAX,EAX
0074C4BB  5E                        POP ESI
0074C4BC  C2 04 00                  RET 0x4
