FUN_00605780:
00605780  56                        PUSH ESI
00605781  8B F1                     MOV ESI,ECX
00605783  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605789  85 C9                     TEST ECX,ECX
0060578B  74 1E                     JZ 0x006057ab
0060578D  E8 43 CA DF FF            CALL 0x004021d5
00605792  8B 86 AF 02 00 00         MOV EAX,dword ptr [ESI + 0x2af]
00605798  50                        PUSH EAX
00605799  E8 12 8B 12 00            CALL 0x0072e2b0
0060579E  83 C4 04                  ADD ESP,0x4
006057A1  C7 86 AF 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2af],0x0
LAB_006057ab:
006057AB  5E                        POP ESI
006057AC  C3                        RET
