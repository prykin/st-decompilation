FUN_0065d630:
0065D630  55                        PUSH EBP
0065D631  8B EC                     MOV EBP,ESP
0065D633  83 EC 20                  SUB ESP,0x20
0065D636  56                        PUSH ESI
0065D637  57                        PUSH EDI
0065D638  8B F1                     MOV ESI,ECX
0065D63A  E8 B2 48 DA FF            CALL 0x00401ef1
0065D63F  8B CE                     MOV ECX,ESI
0065D641  E8 A1 61 DA FF            CALL 0x004037e7
0065D646  B9 08 00 00 00            MOV ECX,0x8
0065D64B  33 C0                     XOR EAX,EAX
0065D64D  8D 7D E0                  LEA EDI,[EBP + -0x20]
0065D650  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0065D653  F3 AB                     STOSD.REP ES:EDI
0065D655  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0065D658  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0065D65B  8D 45 E0                  LEA EAX,[EBP + -0x20]
0065D65E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0065D661  50                        PUSH EAX
0065D662  8B CE                     MOV ECX,ESI
0065D664  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0065D66B  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0065D672  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0065D675  E8 26 8A 08 00            CALL 0x006e60a0
0065D67A  5F                        POP EDI
0065D67B  5E                        POP ESI
0065D67C  8B E5                     MOV ESP,EBP
0065D67E  5D                        POP EBP
0065D67F  C3                        RET
