FUN_006405f0:
006405F0  55                        PUSH EBP
006405F1  8B EC                     MOV EBP,ESP
006405F3  83 EC 34                  SUB ESP,0x34
006405F6  57                        PUSH EDI
006405F7  B9 0D 00 00 00            MOV ECX,0xd
006405FC  33 C0                     XOR EAX,EAX
006405FE  8D 7D CC                  LEA EDI,[EBP + -0x34]
00640601  F3 AB                     STOSD.REP ES:EDI
00640603  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00640606  5F                        POP EDI
00640607  2D A8 00 00 00            SUB EAX,0xa8
0064060C  74 0E                     JZ 0x0064061c
0064060E  83 E8 16                  SUB EAX,0x16
00640611  75 10                     JNZ 0x00640623
00640613  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
0064061A  EB 07                     JMP 0x00640623
LAB_0064061c:
0064061C  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
LAB_00640623:
00640623  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
00640627  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064062A  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
0064062E  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
00640632  66 8B 55 24               MOV DX,word ptr [EBP + 0x24]
00640636  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00640639  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0064063C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064063F  66 89 4D FC               MOV word ptr [EBP + -0x4],CX
00640643  66 8B 4D 20               MOV CX,word ptr [EBP + 0x20]
00640647  66 89 55 EE               MOV word ptr [EBP + -0x12],DX
0064064B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0064064E  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
00640652  8D 55 CC                  LEA EDX,[EBP + -0x34]
00640655  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
00640659  66 8B 4D 2C               MOV CX,word ptr [EBP + 0x2c]
0064065D  6A 00                     PUSH 0x0
0064065F  52                        PUSH EDX
00640660  66 89 45 EA               MOV word ptr [EBP + -0x16],AX
00640664  66 8B 45 28               MOV AX,word ptr [EBP + 0x28]
00640668  6A 00                     PUSH 0x0
0064066A  66 89 4D FE               MOV word ptr [EBP + -0x2],CX
0064066E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00640674  6A 00                     PUSH 0x0
00640676  6A 78                     PUSH 0x78
00640678  C7 45 CC 78 00 00 00      MOV dword ptr [EBP + -0x34],0x78
0064067F  66 89 45 F0               MOV word ptr [EBP + -0x10],AX
00640683  66 C7 45 F2 00 00         MOV word ptr [EBP + -0xe],0x0
00640689  E8 34 15 DC FF            CALL 0x00401bc2
0064068E  8B E5                     MOV ESP,EBP
00640690  5D                        POP EBP
00640691  C3                        RET
