FUN_0060a430:
0060A430  55                        PUSH EBP
0060A431  8B EC                     MOV EBP,ESP
0060A433  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060A436  56                        PUSH ESI
0060A437  8B F1                     MOV ESI,ECX
0060A439  50                        PUSH EAX
0060A43A  E8 DE B7 DF FF            CALL 0x00405c1d
0060A43F  8B CE                     MOV ECX,ESI
0060A441  E8 BC A5 DF FF            CALL 0x00404a02
0060A446  88 86 25 02 00 00         MOV byte ptr [ESI + 0x225],AL
0060A44C  C6 86 2E 02 00 00 01      MOV byte ptr [ESI + 0x22e],0x1
0060A453  5E                        POP ESI
0060A454  5D                        POP EBP
0060A455  C2 04 00                  RET 0x4
