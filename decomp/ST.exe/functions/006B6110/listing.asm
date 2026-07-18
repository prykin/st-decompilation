FUN_006b6110:
006B6110  55                        PUSH EBP
006B6111  8B EC                     MOV EBP,ESP
006B6113  53                        PUSH EBX
006B6114  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B6117  85 DB                     TEST EBX,EBX
006B6119  74 29                     JZ 0x006b6144
006B611B  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006B611E  56                        PUSH ESI
006B611F  33 F6                     XOR ESI,ESI
006B6121  85 C0                     TEST EAX,EAX
006B6123  7E 18                     JLE 0x006b613d
006B6125  57                        PUSH EDI
006B6126  8D 7B 08                  LEA EDI,[EBX + 0x8]
LAB_006b6129:
006B6129  8B 07                     MOV EAX,dword ptr [EDI]
006B612B  50                        PUSH EAX
006B612C  E8 5F FD FE FF            CALL 0x006a5e90
006B6131  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006B6134  46                        INC ESI
006B6135  83 C7 14                  ADD EDI,0x14
006B6138  3B F0                     CMP ESI,EAX
006B613A  7C ED                     JL 0x006b6129
006B613C  5F                        POP EDI
LAB_006b613d:
006B613D  53                        PUSH EBX
006B613E  E8 4D FD FE FF            CALL 0x006a5e90
006B6143  5E                        POP ESI
LAB_006b6144:
006B6144  5B                        POP EBX
006B6145  5D                        POP EBP
006B6146  C2 04 00                  RET 0x4
