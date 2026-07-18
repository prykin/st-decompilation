FUN_0074ae16:
0074AE16  8B 81 D8 00 00 00         MOV EAX,dword ptr [ECX + 0xd8]
0074AE1C  85 C0                     TEST EAX,EAX
0074AE1E  7E 0B                     JLE 0x0074ae2b
0074AE20  99                        CDQ
0074AE21  B9 10 27 00 00            MOV ECX,0x2710
0074AE26  F7 F9                     IDIV ECX
0074AE28  50                        PUSH EAX
0074AE29  EB 02                     JMP 0x0074ae2d
LAB_0074ae2b:
0074AE2B  6A 00                     PUSH 0x0
LAB_0074ae2d:
0074AE2D  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
0074AE33  C3                        RET
