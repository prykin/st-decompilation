FUN_0062f080:
0062F080  55                        PUSH EBP
0062F081  8B EC                     MOV EBP,ESP
0062F083  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062F086  56                        PUSH ESI
0062F087  33 F6                     XOR ESI,ESI
0062F089  8B 84 81 E5 01 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0x1e5]
0062F090  85 C0                     TEST EAX,EAX
0062F092  74 24                     JZ 0x0062f0b8
0062F094  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
0062F097  85 D2                     TEST EDX,EDX
0062F099  74 1D                     JZ 0x0062f0b8
0062F09B  57                        PUSH EDI
0062F09C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0062F09F  57                        PUSH EDI
0062F0A0  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0062F0A3  83 C0 14                  ADD EAX,0x14
0062F0A6  57                        PUSH EDI
0062F0A7  50                        PUSH EAX
0062F0A8  52                        PUSH EDX
0062F0A9  E8 37 35 DD FF            CALL 0x004025e5
0062F0AE  85 C0                     TEST EAX,EAX
0062F0B0  5F                        POP EDI
0062F0B1  B8 01 00 00 00            MOV EAX,0x1
0062F0B6  74 02                     JZ 0x0062f0ba
LAB_0062f0b8:
0062F0B8  8B C6                     MOV EAX,ESI
LAB_0062f0ba:
0062F0BA  5E                        POP ESI
0062F0BB  5D                        POP EBP
0062F0BC  C2 0C 00                  RET 0xc
