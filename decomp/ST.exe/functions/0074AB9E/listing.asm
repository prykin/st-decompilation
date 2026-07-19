FUN_0074ab9e:
0074AB9E  56                        PUSH ESI
0074AB9F  8B F1                     MOV ESI,ECX
0074ABA1  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074ABA5  E8 AD D3 FF FF            CALL 0x00747f57
0074ABAA  85 C0                     TEST EAX,EAX
0074ABAC  7C 12                     JL 0x0074abc0
0074ABAE  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074ABB4  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074ABB8  8B 01                     MOV EAX,dword ptr [ECX]
0074ABBA  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_0074abc0:
0074ABC0  5E                        POP ESI
0074ABC1  C2 04 00                  RET 0x4
