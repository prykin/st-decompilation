FUN_0070c210:
0070C210  55                        PUSH EBP
0070C211  8B EC                     MOV EBP,ESP
0070C213  83 EC 44                  SUB ESP,0x44
0070C216  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070C21B  8D 55 C0                  LEA EDX,[EBP + -0x40]
0070C21E  8D 4D BC                  LEA ECX,[EBP + -0x44]
0070C221  6A 00                     PUSH 0x0
0070C223  52                        PUSH EDX
0070C224  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0070C227  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C22D  E8 BE 15 02 00            CALL 0x0072d7f0
0070C232  83 C4 08                  ADD ESP,0x8
0070C235  85 C0                     TEST EAX,EAX
0070C237  75 25                     JNZ 0x0070c25e
0070C239  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070C23C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070C23F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070C242  50                        PUSH EAX
0070C243  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070C246  51                        PUSH ECX
0070C247  52                        PUSH EDX
0070C248  50                        PUSH EAX
0070C249  E8 92 FD FF FF            CALL 0x0070bfe0
0070C24E  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0070C251  83 C4 10                  ADD ESP,0x10
0070C254  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C25A  8B E5                     MOV ESP,EBP
0070C25C  5D                        POP EBP
0070C25D  C3                        RET
LAB_0070c25e:
0070C25E  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0070C261  33 C0                     XOR EAX,EAX
0070C263  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070C269  8B E5                     MOV ESP,EBP
0070C26B  5D                        POP EBP
0070C26C  C3                        RET
