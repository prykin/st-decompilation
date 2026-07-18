FUN_0074c3f4:
0074C3F4  56                        PUSH ESI
0074C3F5  8B F1                     MOV ESI,ECX
0074C3F7  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C3FB  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074C401  6A 00                     PUSH 0x0
0074C403  8B 01                     MOV EAX,dword ptr [ECX]
0074C405  FF 50 48                  CALL dword ptr [EAX + 0x48]
0074C408  85 C0                     TEST EAX,EAX
0074C40A  7C 0B                     JL 0x0074c417
0074C40C  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C410  8B CE                     MOV ECX,ESI
0074C412  E8 51 BB FF FF            CALL 0x00747f68
LAB_0074c417:
0074C417  5E                        POP ESI
0074C418  C2 04 00                  RET 0x4
