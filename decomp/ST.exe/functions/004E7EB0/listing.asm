FUN_004e7eb0:
004E7EB0  55                        PUSH EBP
004E7EB1  8B EC                     MOV EBP,ESP
004E7EB3  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E7EB8  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004E7EBE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E7EC1  03 C8                     ADD ECX,EAX
004E7EC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E7EC6  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E7EC9  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004E7ECC  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004E7ECF  C1 E2 04                  SHL EDX,0x4
004E7ED2  03 D0                     ADD EDX,EAX
004E7ED4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E7ED7  C1 E0 02                  SHL EAX,0x2
004E7EDA  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
004E7EDD  3B 88 42 58 7F 00         CMP ECX,dword ptr [EAX + 0x7f5842]
004E7EE3  76 10                     JBE 0x004e7ef5
004E7EE5  89 88 42 58 7F 00         MOV dword ptr [EAX + 0x7f5842],ECX
004E7EEB  C7 80 62 58 7F 00 00 00 00 00  MOV dword ptr [EAX + 0x7f5862],0x0
LAB_004e7ef5:
004E7EF5  5D                        POP EBP
004E7EF6  C2 0C 00                  RET 0xc
