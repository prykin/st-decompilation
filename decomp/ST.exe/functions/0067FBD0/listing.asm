FUN_0067fbd0:
0067FBD0  A1 40 8A 84 00            MOV EAX,[0x00848a40]
0067FBD5  40                        INC EAX
0067FBD6  A3 40 8A 84 00            MOV [0x00848a40],EAX
0067FBDB  50                        PUSH EAX
0067FBDC  A1 40 D7 79 00            MOV EAX,[0x0079d740]
0067FBE1  50                        PUSH EAX
0067FBE2  68 4C 85 84 00            PUSH 0x84854c
0067FBE7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0067FBED  83 C4 0C                  ADD ESP,0xc
0067FBF0  B8 4C 85 84 00            MOV EAX,0x84854c
0067FBF5  C3                        RET
