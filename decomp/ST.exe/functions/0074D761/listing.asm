FUN_0074d761:
0074D761  56                        PUSH ESI
0074D762  83 C1 14                  ADD ECX,0x14
0074D765  6A 00                     PUSH 0x0
0074D767  51                        PUSH ECX
0074D768  FF 15 0C BD 85 00         CALL dword ptr [0x0085bd0c]
0074D76E  8B F0                     MOV ESI,EAX
0074D770  85 F6                     TEST ESI,ESI
0074D772  74 10                     JZ 0x0074d784
0074D774  6A FF                     PUSH -0x1
0074D776  56                        PUSH ESI
0074D777  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
0074D77D  56                        PUSH ESI
0074D77E  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_0074d784:
0074D784  5E                        POP ESI
0074D785  C3                        RET
