FUN_00580f50:
00580F50  55                        PUSH EBP
00580F51  8B EC                     MOV EBP,ESP
00580F53  83 EC 20                  SUB ESP,0x20
00580F56  8B 15 BC 17 81 00         MOV EDX,dword ptr [0x008117bc]
00580F5C  56                        PUSH ESI
00580F5D  85 D2                     TEST EDX,EDX
00580F5F  8B F1                     MOV ESI,ECX
00580F61  74 22                     JZ 0x00580f85
00580F63  57                        PUSH EDI
00580F64  B9 08 00 00 00            MOV ECX,0x8
00580F69  33 C0                     XOR EAX,EAX
00580F6B  8D 7D E0                  LEA EDI,[EBP + -0x20]
00580F6E  F3 AB                     STOSD.REP ES:EDI
00580F70  8D 4D E0                  LEA ECX,[EBP + -0x20]
00580F73  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00580F76  C7 45 F0 DF 5D 00 00      MOV dword ptr [EBP + -0x10],0x5ddf
00580F7D  8B 02                     MOV EAX,dword ptr [EDX]
00580F7F  51                        PUSH ECX
00580F80  8B CA                     MOV ECX,EDX
00580F82  FF 10                     CALL dword ptr [EAX]
00580F84  5F                        POP EDI
LAB_00580f85:
00580F85  5E                        POP ESI
00580F86  8B E5                     MOV ESP,EBP
00580F88  5D                        POP EBP
00580F89  C3                        RET
