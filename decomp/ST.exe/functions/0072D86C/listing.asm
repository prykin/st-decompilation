__global_unwind2:
0072D86C  55                        PUSH EBP
0072D86D  8B EC                     MOV EBP,ESP
0072D86F  53                        PUSH EBX
0072D870  56                        PUSH ESI
0072D871  57                        PUSH EDI
0072D872  55                        PUSH EBP
0072D873  6A 00                     PUSH 0x0
0072D875  6A 00                     PUSH 0x0
0072D877  68 84 D8 72 00            PUSH 0x72d884
0072D87C  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0072D87F  E8 2C 3F 03 00            CALL 0x007617b0
0072D884  5D                        POP EBP
0072D885  5F                        POP EDI
0072D886  5E                        POP ESI
0072D887  5B                        POP EBX
0072D888  8B E5                     MOV ESP,EBP
0072D88A  5D                        POP EBP
0072D88B  C3                        RET
