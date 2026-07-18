FUN_0074c81f:
0074C81F  56                        PUSH ESI
0074C820  8B F1                     MOV ESI,ECX
0074C822  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C826  E8 2C B7 FF FF            CALL 0x00747f57
0074C82B  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
0074C831  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C835  8B 01                     MOV EAX,dword ptr [ECX]
0074C837  6A 01                     PUSH 0x1
0074C839  FF 50 44                  CALL dword ptr [EAX + 0x44]
0074C83C  33 C0                     XOR EAX,EAX
0074C83E  5E                        POP ESI
0074C83F  C2 04 00                  RET 0x4
