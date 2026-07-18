FUN_0061f5c0:
0061F5C0  55                        PUSH EBP
0061F5C1  8B EC                     MOV EBP,ESP
0061F5C3  83 EC 2C                  SUB ESP,0x2c
0061F5C6  57                        PUSH EDI
0061F5C7  B9 0A 00 00 00            MOV ECX,0xa
0061F5CC  33 C0                     XOR EAX,EAX
0061F5CE  8D 7D D4                  LEA EDI,[EBP + -0x2c]
0061F5D1  66 8B 55 14               MOV DX,word ptr [EBP + 0x14]
0061F5D5  6A 00                     PUSH 0x0
0061F5D7  F3 AB                     STOSD.REP ES:EDI
0061F5D9  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0061F5DD  66 AB                     STOSW ES:EDI
0061F5DF  B8 01 00 00 00            MOV EAX,0x1
0061F5E4  66 89 55 EC               MOV word ptr [EBP + -0x14],DX
0061F5E8  66 8B 55 20               MOV DX,word ptr [EBP + 0x20]
0061F5EC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0061F5EF  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0061F5F2  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0061F5F6  66 89 4D EA               MOV word ptr [EBP + -0x16],CX
0061F5FA  66 8B 4D 1C               MOV CX,word ptr [EBP + 0x1c]
0061F5FE  66 89 55 F2               MOV word ptr [EBP + -0xe],DX
0061F602  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
0061F606  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
0061F60A  66 89 4D F0               MOV word ptr [EBP + -0x10],CX
0061F60E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061F614  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0061F617  52                        PUSH EDX
0061F618  C7 45 D4 68 01 00 00      MOV dword ptr [EBP + -0x2c],0x168
0061F61F  C7 45 D8 FF 00 00 00      MOV dword ptr [EBP + -0x28],0xff
0061F626  66 89 45 EE               MOV word ptr [EBP + -0x12],AX
0061F62A  8B 01                     MOV EAX,dword ptr [ECX]
0061F62C  6A 00                     PUSH 0x0
0061F62E  6A 00                     PUSH 0x0
0061F630  68 4C 01 00 00            PUSH 0x14c
0061F635  FF 50 08                  CALL dword ptr [EAX + 0x8]
0061F638  5F                        POP EDI
0061F639  8B E5                     MOV ESP,EBP
0061F63B  5D                        POP EBP
0061F63C  C3                        RET
