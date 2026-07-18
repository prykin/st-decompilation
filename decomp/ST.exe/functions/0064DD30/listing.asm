FUN_0064dd30:
0064DD30  55                        PUSH EBP
0064DD31  8B EC                     MOV EBP,ESP
0064DD33  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064DD36  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0064DD39  8B 08                     MOV ECX,dword ptr [EAX]
0064DD3B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064DD3E  51                        PUSH ECX
0064DD3F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064DD45  6A 02                     PUSH 0x2
0064DD47  52                        PUSH EDX
0064DD48  50                        PUSH EAX
0064DD49  E8 2F 5B DB FF            CALL 0x0040387d
0064DD4E  A1 FC 18 81 00            MOV EAX,[0x008118fc]
0064DD53  40                        INC EAX
0064DD54  A3 FC 18 81 00            MOV [0x008118fc],EAX
0064DD59  33 C0                     XOR EAX,EAX
0064DD5B  5D                        POP EBP
0064DD5C  C3                        RET
