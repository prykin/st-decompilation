FUN_0062c2a0:
0062C2A0  55                        PUSH EBP
0062C2A1  8B EC                     MOV EBP,ESP
0062C2A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062C2A6  83 38 00                  CMP dword ptr [EAX],0x0
0062C2A9  74 06                     JZ 0x0062c2b1
0062C2AB  50                        PUSH EAX
0062C2AC  E8 AF ED 07 00            CALL 0x006ab060
LAB_0062c2b1:
0062C2B1  5D                        POP EBP
0062C2B2  C3                        RET
