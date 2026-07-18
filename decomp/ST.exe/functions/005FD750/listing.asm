FUN_005fd750:
005FD750  55                        PUSH EBP
005FD751  8B EC                     MOV EBP,ESP
005FD753  83 EC 2C                  SUB ESP,0x2c
005FD756  56                        PUSH ESI
005FD757  57                        PUSH EDI
005FD758  B9 0B 00 00 00            MOV ECX,0xb
005FD75D  33 C0                     XOR EAX,EAX
005FD75F  8D 7D D4                  LEA EDI,[EBP + -0x2c]
005FD762  BA 01 00 00 00            MOV EDX,0x1
005FD767  F3 AB                     STOSD.REP ES:EDI
005FD769  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
005FD76D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FD770  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
005FD774  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
005FD778  66 89 4D EA               MOV word ptr [EBP + -0x16],CX
005FD77C  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
005FD780  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
005FD784  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005FD787  52                        PUSH EDX
005FD788  66 89 4D F2               MOV word ptr [EBP + -0xe],CX
005FD78C  51                        PUSH ECX
005FD78D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005FD793  50                        PUSH EAX
005FD794  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005FD797  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005FD79A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
005FD79D  C7 45 D4 82 00 00 00      MOV dword ptr [EBP + -0x2c],0x82
005FD7A4  E8 11 51 E0 FF            CALL 0x004028ba
005FD7A9  8B F0                     MOV ESI,EAX
005FD7AB  85 F6                     TEST ESI,ESI
005FD7AD  74 14                     JZ 0x005fd7c3
005FD7AF  8B 16                     MOV EDX,dword ptr [ESI]
005FD7B1  8B CE                     MOV ECX,ESI
005FD7B3  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
005FD7B9  85 C0                     TEST EAX,EAX
005FD7BB  74 06                     JZ 0x005fd7c3
005FD7BD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005FD7C0  89 45 EE                  MOV dword ptr [EBP + -0x12],EAX
LAB_005fd7c3:
005FD7C3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005FD7C6  8D 45 D4                  LEA EAX,[EBP + -0x2c]
005FD7C9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005FD7CC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FD7D2  6A 00                     PUSH 0x0
005FD7D4  50                        PUSH EAX
005FD7D5  C7 45 F8 B4 00 00 00      MOV dword ptr [EBP + -0x8],0xb4
005FD7DC  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
005FD7E3  8B 11                     MOV EDX,dword ptr [ECX]
005FD7E5  6A 00                     PUSH 0x0
005FD7E7  6A 00                     PUSH 0x0
005FD7E9  68 0A 01 00 00            PUSH 0x10a
005FD7EE  FF 52 08                  CALL dword ptr [EDX + 0x8]
005FD7F1  5F                        POP EDI
005FD7F2  5E                        POP ESI
005FD7F3  8B E5                     MOV ESP,EBP
005FD7F5  5D                        POP EBP
005FD7F6  C3                        RET
