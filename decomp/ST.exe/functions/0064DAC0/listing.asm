FUN_0064dac0:
0064DAC0  55                        PUSH EBP
0064DAC1  8B EC                     MOV EBP,ESP
0064DAC3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064DAC6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0064DAC9  8B 08                     MOV ECX,dword ptr [EAX]
0064DACB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064DACE  51                        PUSH ECX
0064DACF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0064DAD5  6A 05                     PUSH 0x5
0064DAD7  52                        PUSH EDX
0064DAD8  50                        PUSH EAX
0064DAD9  E8 9F 5D DB FF            CALL 0x0040387d
0064DADE  A1 FC 18 81 00            MOV EAX,[0x008118fc]
0064DAE3  40                        INC EAX
0064DAE4  A3 FC 18 81 00            MOV [0x008118fc],EAX
0064DAE9  33 C0                     XOR EAX,EAX
0064DAEB  5D                        POP EBP
0064DAEC  C3                        RET
