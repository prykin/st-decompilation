FUN_0067ece0:
0067ECE0  55                        PUSH EBP
0067ECE1  8B EC                     MOV EBP,ESP
0067ECE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067ECE6  8B 0D 3C D7 79 00         MOV ECX,dword ptr [0x0079d73c]
0067ECEC  50                        PUSH EAX
0067ECED  51                        PUSH ECX
0067ECEE  68 0C 85 84 00            PUSH 0x84850c
0067ECF3  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0067ECF9  83 C4 0C                  ADD ESP,0xc
0067ECFC  B8 0C 85 84 00            MOV EAX,0x84850c
0067ED01  5D                        POP EBP
0067ED02  C3                        RET
