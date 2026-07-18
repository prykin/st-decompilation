FUN_0064df30:
0064DF30  55                        PUSH EBP
0064DF31  8B EC                     MOV EBP,ESP
0064DF33  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064DF36  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0064DF39  8B 08                     MOV ECX,dword ptr [EAX]
0064DF3B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064DF3E  51                        PUSH ECX
0064DF3F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064DF45  6A 06                     PUSH 0x6
0064DF47  52                        PUSH EDX
0064DF48  50                        PUSH EAX
0064DF49  E8 2F 59 DB FF            CALL 0x0040387d
0064DF4E  A1 FC 18 81 00            MOV EAX,[0x008118fc]
0064DF53  40                        INC EAX
0064DF54  A3 FC 18 81 00            MOV [0x008118fc],EAX
0064DF59  33 C0                     XOR EAX,EAX
0064DF5B  5D                        POP EBP
0064DF5C  C3                        RET
