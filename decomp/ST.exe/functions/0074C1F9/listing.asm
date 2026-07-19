FUN_0074c1f9:
0074C1F9  53                        PUSH EBX
0074C1FA  55                        PUSH EBP
0074C1FB  8B 2D 8C BB 85 00         MOV EBP,dword ptr [0x0085bb8c]
0074C201  56                        PUSH ESI
0074C202  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074C206  57                        PUSH EDI
0074C207  8D 7E 50                  LEA EDI,[ESI + 0x50]
0074C20A  57                        PUSH EDI
0074C20B  89 7C 24 18               MOV dword ptr [ESP + 0x18],EDI
0074C20F  FF D5                     CALL EBP
0074C211  33 C0                     XOR EAX,EAX
0074C213  39 46 08                  CMP dword ptr [ESI + 0x8],EAX
0074C216  74 62                     JZ 0x0074c27a
0074C218  8B 8E 80 00 00 00         MOV ECX,dword ptr [ESI + 0x80]
0074C21E  3B C8                     CMP ECX,EAX
0074C220  74 52                     JZ 0x0074c274
0074C222  39 41 18                  CMP dword ptr [ECX + 0x18],EAX
0074C225  74 4D                     JZ 0x0074c274
0074C227  8B 96 84 00 00 00         MOV EDX,dword ptr [ESI + 0x84]
0074C22D  8D 9E 84 00 00 00         LEA EBX,[ESI + 0x84]
0074C233  39 42 18                  CMP dword ptr [EDX + 0x18],EAX
0074C236  74 3C                     JZ 0x0074c274
0074C238  8B 01                     MOV EAX,dword ptr [ECX]
0074C23A  FF 50 18                  CALL dword ptr [EAX + 0x18]
0074C23D  8D 7E 68                  LEA EDI,[ESI + 0x68]
0074C240  57                        PUSH EDI
0074C241  FF D5                     CALL EBP
0074C243  8B 0B                     MOV ECX,dword ptr [EBX]
0074C245  8B 01                     MOV EAX,dword ptr [ECX]
0074C247  FF 50 18                  CALL dword ptr [EAX + 0x18]
0074C24A  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
0074C24D  8D 4E F4                  LEA ECX,[ESI + -0xc]
0074C250  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
0074C253  8B D8                     MOV EBX,EAX
0074C255  85 DB                     TEST EBX,EBX
0074C257  7C 08                     JL 0x0074c261
0074C259  83 66 08 00               AND dword ptr [ESI + 0x8],0x0
0074C25D  83 66 44 00               AND dword ptr [ESI + 0x44],0x0
LAB_0074c261:
0074C261  8B 35 90 BB 85 00         MOV ESI,dword ptr [0x0085bb90]
0074C267  57                        PUSH EDI
0074C268  FF D6                     CALL ESI
0074C26A  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074C26E  FF D6                     CALL ESI
0074C270  8B C3                     MOV EAX,EBX
0074C272  EB 0F                     JMP 0x0074c283
LAB_0074c274:
0074C274  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0074C277  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
LAB_0074c27a:
0074C27A  57                        PUSH EDI
0074C27B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074C281  33 C0                     XOR EAX,EAX
LAB_0074c283:
0074C283  5F                        POP EDI
0074C284  5E                        POP ESI
0074C285  5D                        POP EBP
0074C286  5B                        POP EBX
0074C287  C2 04 00                  RET 0x4
