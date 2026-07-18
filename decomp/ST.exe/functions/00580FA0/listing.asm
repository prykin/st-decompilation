FUN_00580fa0:
00580FA0  55                        PUSH EBP
00580FA1  8B EC                     MOV EBP,ESP
00580FA3  83 EC 20                  SUB ESP,0x20
00580FA6  8B 15 BC 17 81 00         MOV EDX,dword ptr [0x008117bc]
00580FAC  56                        PUSH ESI
00580FAD  85 D2                     TEST EDX,EDX
00580FAF  8B F1                     MOV ESI,ECX
00580FB1  74 22                     JZ 0x00580fd5
00580FB3  57                        PUSH EDI
00580FB4  B9 08 00 00 00            MOV ECX,0x8
00580FB9  33 C0                     XOR EAX,EAX
00580FBB  8D 7D E0                  LEA EDI,[EBP + -0x20]
00580FBE  F3 AB                     STOSD.REP ES:EDI
00580FC0  8D 4D E0                  LEA ECX,[EBP + -0x20]
00580FC3  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00580FC6  C7 45 F0 E0 5D 00 00      MOV dword ptr [EBP + -0x10],0x5de0
00580FCD  8B 02                     MOV EAX,dword ptr [EDX]
00580FCF  51                        PUSH ECX
00580FD0  8B CA                     MOV ECX,EDX
00580FD2  FF 10                     CALL dword ptr [EAX]
00580FD4  5F                        POP EDI
LAB_00580fd5:
00580FD5  5E                        POP ESI
00580FD6  8B E5                     MOV ESP,EBP
00580FD8  5D                        POP EBP
00580FD9  C3                        RET
