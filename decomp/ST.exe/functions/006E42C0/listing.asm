FUN_006e42c0:
006E42C0  55                        PUSH EBP
006E42C1  8B EC                     MOV EBP,ESP
006E42C3  83 EC 10                  SUB ESP,0x10
006E42C6  53                        PUSH EBX
006E42C7  8B D9                     MOV EBX,ECX
006E42C9  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
006E42CC  85 C0                     TEST EAX,EAX
006E42CE  74 5B                     JZ 0x006e432b
006E42D0  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
006E42D7  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
006E42DA  8D 55 F0                  LEA EDX,[EBP + -0x10]
006E42DD  E8 AE CE FC FF            CALL 0x006b1190
006E42E2  85 C0                     TEST EAX,EAX
006E42E4  7C 2E                     JL 0x006e4314
006E42E6  56                        PUSH ESI
006E42E7  57                        PUSH EDI
LAB_006e42e8:
006E42E8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E42EB  B9 04 00 00 00            MOV ECX,0x4
006E42F0  8D 7D F0                  LEA EDI,[EBP + -0x10]
006E42F3  33 D2                     XOR EDX,EDX
006E42F5  F3 A7                     CMPSD.REPE ES:EDI,ESI
006E42F7  75 0A                     JNZ 0x006e4303
006E42F9  50                        PUSH EAX
006E42FA  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
006E42FD  50                        PUSH EAX
006E42FE  E8 6D C9 FC FF            CALL 0x006b0c70
LAB_006e4303:
006E4303  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
006E4306  8D 55 F0                  LEA EDX,[EBP + -0x10]
006E4309  E8 82 CE FC FF            CALL 0x006b1190
006E430E  85 C0                     TEST EAX,EAX
006E4310  7D D6                     JGE 0x006e42e8
006E4312  5F                        POP EDI
006E4313  5E                        POP ESI
LAB_006e4314:
006E4314  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
006E4317  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E431A  85 C9                     TEST ECX,ECX
006E431C  75 0D                     JNZ 0x006e432b
006E431E  50                        PUSH EAX
006E431F  E8 EC 9D FC FF            CALL 0x006ae110
006E4324  C7 43 14 00 00 00 00      MOV dword ptr [EBX + 0x14],0x0
LAB_006e432b:
006E432B  33 C0                     XOR EAX,EAX
006E432D  5B                        POP EBX
006E432E  8B E5                     MOV ESP,EBP
006E4330  5D                        POP EBP
006E4331  C2 04 00                  RET 0x4
