FUN_0064df70:
0064DF70  55                        PUSH EBP
0064DF71  8B EC                     MOV EBP,ESP
0064DF73  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064DF76  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064DF79  50                        PUSH EAX
0064DF7A  E8 49 5E DB FF            CALL 0x00403dc8
0064DF7F  33 C0                     XOR EAX,EAX
0064DF81  5D                        POP EBP
0064DF82  C3                        RET
