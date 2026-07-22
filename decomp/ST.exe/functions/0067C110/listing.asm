AiPlrClassTy::sub_0067C110:
0067C110  55                        PUSH EBP
0067C111  8B EC                     MOV EBP,ESP
0067C113  83 EC 34                  SUB ESP,0x34
0067C116  8B D1                     MOV EDX,ECX
0067C118  57                        PUSH EDI
0067C119  B9 0D 00 00 00            MOV ECX,0xd
0067C11E  33 C0                     XOR EAX,EAX
0067C120  8D 7D CC                  LEA EDI,[EBP + -0x34]
0067C123  6A FF                     PUSH -0x1
0067C125  F3 AB                     STOSD.REP ES:EDI
0067C127  8B 82 FE 06 00 00         MOV EAX,dword ptr [EDX + 0x6fe]
0067C12D  8D 4D CC                  LEA ECX,[EBP + -0x34]
0067C130  51                        PUSH ECX
0067C131  8B CA                     MOV ECX,EDX
0067C133  C7 82 89 06 00 00 00 00 00 00  MOV dword ptr [EDX + 0x689],0x0
0067C13D  C7 45 CC 67 00 00 00      MOV dword ptr [EBP + -0x34],0x67
0067C144  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0067C147  C6 45 D4 01               MOV byte ptr [EBP + -0x2c],0x1
0067C14B  E8 76 9C D8 FF            CALL 0x00405dc6
0067C150  5F                        POP EDI
0067C151  8B E5                     MOV ESP,EBP
0067C153  5D                        POP EBP
0067C154  C3                        RET
