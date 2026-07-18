FUN_0067f5b0:
0067F5B0  55                        PUSH EBP
0067F5B1  8B EC                     MOV EBP,ESP
0067F5B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067F5B6  50                        PUSH EAX
0067F5B7  E8 9B 54 D8 FF            CALL 0x00404a57
0067F5BC  83 C4 04                  ADD ESP,0x4
0067F5BF  85 C0                     TEST EAX,EAX
0067F5C1  74 04                     JZ 0x0067f5c7
0067F5C3  8B 00                     MOV EAX,dword ptr [EAX]
0067F5C5  5D                        POP EBP
0067F5C6  C3                        RET
LAB_0067f5c7:
0067F5C7  33 C0                     XOR EAX,EAX
0067F5C9  5D                        POP EBP
0067F5CA  C3                        RET
