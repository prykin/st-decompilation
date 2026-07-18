FUN_0074c434:
0074C434  56                        PUSH ESI
0074C435  8B F1                     MOV ESI,ECX
0074C437  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C43B  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074C441  6A 00                     PUSH 0x0
0074C443  8B 01                     MOV EAX,dword ptr [ECX]
0074C445  FF 50 50                  CALL dword ptr [EAX + 0x50]
0074C448  85 C0                     TEST EAX,EAX
0074C44A  7C 0B                     JL 0x0074c457
0074C44C  FF 74 24 08               PUSH dword ptr [ESP + 0x8]
0074C450  8B CE                     MOV ECX,ESI
0074C452  E8 FB BA FF FF            CALL 0x00747f52
LAB_0074c457:
0074C457  5E                        POP ESI
0074C458  C2 04 00                  RET 0x4
