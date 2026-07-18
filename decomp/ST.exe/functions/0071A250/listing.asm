FUN_0071a250:
0071A250  55                        PUSH EBP
0071A251  8B EC                     MOV EBP,ESP
0071A253  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0071A256  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0071A259  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0071A25C  50                        PUSH EAX
0071A25D  51                        PUSH ECX
0071A25E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071A261  52                        PUSH EDX
0071A262  6A 02                     PUSH 0x2
0071A264  E8 A7 76 FD FF            CALL 0x006f1910
0071A269  5D                        POP EBP
0071A26A  C3                        RET
