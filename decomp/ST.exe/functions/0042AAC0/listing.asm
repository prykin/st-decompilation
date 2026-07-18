FUN_0042aac0:
0042AAC0  55                        PUSH EBP
0042AAC1  8B EC                     MOV EBP,ESP
0042AAC3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042AAC6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0042AAC9  03 C8                     ADD ECX,EAX
0042AACB  3B C1                     CMP EAX,ECX
0042AACD  73 0E                     JNC 0x0042aadd
0042AACF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042AAD2  57                        PUSH EDI
0042AAD3  2B C8                     SUB ECX,EAX
0042AAD5  8D 3C 82                  LEA EDI,[EDX + EAX*0x4]
0042AAD8  33 C0                     XOR EAX,EAX
0042AADA  F3 AB                     STOSD.REP ES:EDI
0042AADC  5F                        POP EDI
LAB_0042aadd:
0042AADD  5D                        POP EBP
0042AADE  C2 0C 00                  RET 0xc
