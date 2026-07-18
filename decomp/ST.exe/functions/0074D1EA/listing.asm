FUN_0074d1ea:
0074D1EA  33 C0                     XOR EAX,EAX
0074D1EC  56                        PUSH ESI
0074D1ED  50                        PUSH EAX
0074D1EE  50                        PUSH EAX
0074D1EF  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074D1F3  8B F1                     MOV ESI,ECX
0074D1F5  50                        PUSH EAX
0074D1F6  FF 15 48 BB 85 00         CALL dword ptr [0x0085bb48]
0074D1FC  89 06                     MOV dword ptr [ESI],EAX
0074D1FE  8B C6                     MOV EAX,ESI
0074D200  5E                        POP ESI
0074D201  C2 04 00                  RET 0x4
