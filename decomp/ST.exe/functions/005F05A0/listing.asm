FUN_005f05a0:
005F05A0  55                        PUSH EBP
005F05A1  8B EC                     MOV EBP,ESP
005F05A3  83 EC 20                  SUB ESP,0x20
005F05A6  A1 BC 17 81 00            MOV EAX,[0x008117bc]
005F05AB  8B D1                     MOV EDX,ECX
005F05AD  85 C0                     TEST EAX,EAX
005F05AF  74 41                     JZ 0x005f05f2
005F05B1  57                        PUSH EDI
005F05B2  B9 08 00 00 00            MOV ECX,0x8
005F05B7  33 C0                     XOR EAX,EAX
005F05B9  8D 7D E0                  LEA EDI,[EBP + -0x20]
005F05BC  F3 AB                     STOSD.REP ES:EDI
005F05BE  8B 02                     MOV EAX,dword ptr [EDX]
005F05C0  8B CA                     MOV ECX,EDX
005F05C2  FF 90 44 01 00 00         CALL dword ptr [EAX + 0x144]
005F05C8  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
005F05CC  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
005F05D0  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
005F05D4  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
005F05DA  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
005F05DE  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
005F05E2  C7 45 F0 DA 5D 00 00      MOV dword ptr [EBP + -0x10],0x5dda
005F05E9  8B 01                     MOV EAX,dword ptr [ECX]
005F05EB  8D 55 E0                  LEA EDX,[EBP + -0x20]
005F05EE  52                        PUSH EDX
005F05EF  FF 10                     CALL dword ptr [EAX]
005F05F1  5F                        POP EDI
LAB_005f05f2:
005F05F2  8B E5                     MOV ESP,EBP
005F05F4  5D                        POP EBP
005F05F5  C2 08 00                  RET 0x8
