__ui64toa:
0072E130  55                        PUSH EBP
0072E131  8B EC                     MOV EBP,ESP
0072E133  6A 00                     PUSH 0x0
0072E135  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0072E138  50                        PUSH EAX
0072E139  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072E13C  51                        PUSH ECX
0072E13D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072E140  52                        PUSH EDX
0072E141  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072E144  50                        PUSH EAX
0072E145  E8 E6 FE FF FF            CALL 0x0072e030
0072E14A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072E14D  5D                        POP EBP
0072E14E  C3                        RET
