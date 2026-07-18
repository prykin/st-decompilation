FUN_0074d38b:
0074D38B  56                        PUSH ESI
0074D38C  8B F1                     MOV ESI,ECX
0074D38E  6A FF                     PUSH -0x1
0074D390  FF 76 04                  PUSH dword ptr [ESI + 0x4]
0074D393  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
0074D399  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0074D39C  5E                        POP ESI
0074D39D  C3                        RET
