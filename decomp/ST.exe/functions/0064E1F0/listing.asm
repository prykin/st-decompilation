FUN_0064e1f0:
0064E1F0  55                        PUSH EBP
0064E1F1  8B EC                     MOV EBP,ESP
0064E1F3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064E1F6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0064E1F9  8B 08                     MOV ECX,dword ptr [EAX]
0064E1FB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064E1FE  51                        PUSH ECX
0064E1FF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064E205  6A 03                     PUSH 0x3
0064E207  52                        PUSH EDX
0064E208  50                        PUSH EAX
0064E209  E8 6F 56 DB FF            CALL 0x0040387d
0064E20E  A1 FC 18 81 00            MOV EAX,[0x008118fc]
0064E213  40                        INC EAX
0064E214  A3 FC 18 81 00            MOV [0x008118fc],EAX
0064E219  33 C0                     XOR EAX,EAX
0064E21B  5D                        POP EBP
0064E21C  C3                        RET
