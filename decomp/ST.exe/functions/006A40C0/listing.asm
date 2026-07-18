FUN_006a40c0:
006A40C0  55                        PUSH EBP
006A40C1  8B EC                     MOV EBP,ESP
006A40C3  56                        PUSH ESI
006A40C4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A40C7  0F AF 75 0C               IMUL ESI,dword ptr [EBP + 0xc]
006A40CB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A40CE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A40D1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A40D4  50                        PUSH EAX
006A40D5  51                        PUSH ECX
006A40D6  52                        PUSH EDX
006A40D7  56                        PUSH ESI
006A40D8  E8 27 D0 D5 FF            CALL 0x00401104
006A40DD  8B D0                     MOV EDX,EAX
006A40DF  83 C4 10                  ADD ESP,0x10
006A40E2  85 D2                     TEST EDX,EDX
006A40E4  74 22                     JZ 0x006a4108
006A40E6  8D 0C 32                  LEA ECX,[EDX + ESI*0x1]
006A40E9  3B D1                     CMP EDX,ECX
006A40EB  73 1B                     JNC 0x006a4108
006A40ED  2B CA                     SUB ECX,EDX
006A40EF  57                        PUSH EDI
006A40F0  8B F1                     MOV ESI,ECX
006A40F2  33 C0                     XOR EAX,EAX
006A40F4  8B FA                     MOV EDI,EDX
006A40F6  C1 E9 02                  SHR ECX,0x2
006A40F9  F3 AB                     STOSD.REP ES:EDI
006A40FB  8B CE                     MOV ECX,ESI
006A40FD  83 E1 03                  AND ECX,0x3
006A4100  F3 AA                     STOSB.REP ES:EDI
006A4102  5F                        POP EDI
006A4103  8B C2                     MOV EAX,EDX
006A4105  5E                        POP ESI
006A4106  5D                        POP EBP
006A4107  C3                        RET
LAB_006a4108:
006A4108  8B C2                     MOV EAX,EDX
006A410A  5E                        POP ESI
006A410B  5D                        POP EBP
006A410C  C3                        RET
