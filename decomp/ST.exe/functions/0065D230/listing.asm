AiFltClassTy::AiFltClassTy:
0065D230  56                        PUSH ESI
0065D231  57                        PUSH EDI
0065D232  8B F1                     MOV ESI,ECX
0065D234  E8 A7 8E 08 00            CALL 0x006e60e0
0065D239  85 F6                     TEST ESI,ESI
0065D23B  C7 06 BC D6 79 00         MOV dword ptr [ESI],0x79d6bc
0065D241  74 05                     JZ 0x0065d248
0065D243  8D 7E 20                  LEA EDI,[ESI + 0x20]
0065D246  EB 02                     JMP 0x0065d24a
LAB_0065d248:
0065D248  33 FF                     XOR EDI,EDI
LAB_0065d24a:
0065D24A  B9 98 00 00 00            MOV ECX,0x98
0065D24F  33 C0                     XOR EAX,EAX
0065D251  F3 AB                     STOSD.REP ES:EDI
0065D253  89 86 84 02 00 00         MOV dword ptr [ESI + 0x284],EAX
0065D259  C7 46 20 84 03 00 00      MOV dword ptr [ESI + 0x20],0x384
0065D260  66 C7 46 7D FE FF         MOV word ptr [ESI + 0x7d],0xfffe
0065D266  C7 86 97 00 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x97],0xff
0065D270  8B C6                     MOV EAX,ESI
0065D272  5F                        POP EDI
0065D273  5E                        POP ESI
0065D274  C3                        RET
