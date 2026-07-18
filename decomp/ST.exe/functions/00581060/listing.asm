FUN_00581060:
00581060  55                        PUSH EBP
00581061  8B EC                     MOV EBP,ESP
00581063  83 EC 20                  SUB ESP,0x20
00581066  8B 15 BC 17 81 00         MOV EDX,dword ptr [0x008117bc]
0058106C  56                        PUSH ESI
0058106D  85 D2                     TEST EDX,EDX
0058106F  8B F1                     MOV ESI,ECX
00581071  74 22                     JZ 0x00581095
00581073  57                        PUSH EDI
00581074  B9 08 00 00 00            MOV ECX,0x8
00581079  33 C0                     XOR EAX,EAX
0058107B  8D 7D E0                  LEA EDI,[EBP + -0x20]
0058107E  F3 AB                     STOSD.REP ES:EDI
00581080  8D 4D E0                  LEA ECX,[EBP + -0x20]
00581083  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00581086  C7 45 F0 E2 5D 00 00      MOV dword ptr [EBP + -0x10],0x5de2
0058108D  8B 02                     MOV EAX,dword ptr [EDX]
0058108F  51                        PUSH ECX
00581090  8B CA                     MOV ECX,EDX
00581092  FF 10                     CALL dword ptr [EAX]
00581094  5F                        POP EDI
LAB_00581095:
00581095  5E                        POP ESI
00581096  8B E5                     MOV ESP,EBP
00581098  5D                        POP EBP
00581099  C3                        RET
