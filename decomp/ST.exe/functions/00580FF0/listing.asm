FUN_00580ff0:
00580FF0  55                        PUSH EBP
00580FF1  8B EC                     MOV EBP,ESP
00580FF3  83 EC 20                  SUB ESP,0x20
00580FF6  8B 15 BC 17 81 00         MOV EDX,dword ptr [0x008117bc]
00580FFC  56                        PUSH ESI
00580FFD  85 D2                     TEST EDX,EDX
00580FFF  8B F1                     MOV ESI,ECX
00581001  74 32                     JZ 0x00581035
00581003  57                        PUSH EDI
00581004  B9 08 00 00 00            MOV ECX,0x8
00581009  33 C0                     XOR EAX,EAX
0058100B  8D 7D E0                  LEA EDI,[EBP + -0x20]
0058100E  F3 AB                     STOSD.REP ES:EDI
00581010  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00581014  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
00581018  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
0058101C  8D 4D E0                  LEA ECX,[EBP + -0x20]
0058101F  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00581022  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
00581026  C7 45 F0 E1 5D 00 00      MOV dword ptr [EBP + -0x10],0x5de1
0058102D  8B 02                     MOV EAX,dword ptr [EDX]
0058102F  51                        PUSH ECX
00581030  8B CA                     MOV ECX,EDX
00581032  FF 10                     CALL dword ptr [EAX]
00581034  5F                        POP EDI
LAB_00581035:
00581035  5E                        POP ESI
00581036  8B E5                     MOV ESP,EBP
00581038  5D                        POP EBP
00581039  C2 08 00                  RET 0x8
