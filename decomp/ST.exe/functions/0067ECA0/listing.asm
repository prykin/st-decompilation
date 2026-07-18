FUN_0067eca0:
0067ECA0  A1 20 8A 84 00            MOV EAX,[0x00848a20]
0067ECA5  40                        INC EAX
0067ECA6  A3 20 8A 84 00            MOV [0x00848a20],EAX
0067ECAB  50                        PUSH EAX
0067ECAC  A1 38 D7 79 00            MOV EAX,[0x0079d738]
0067ECB1  50                        PUSH EAX
0067ECB2  68 0C 85 84 00            PUSH 0x84850c
0067ECB7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0067ECBD  83 C4 0C                  ADD ESP,0xc
0067ECC0  B8 0C 85 84 00            MOV EAX,0x84850c
0067ECC5  C3                        RET
