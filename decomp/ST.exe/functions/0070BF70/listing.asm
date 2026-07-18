FUN_0070bf70:
0070BF70  55                        PUSH EBP
0070BF71  8B EC                     MOV EBP,ESP
0070BF73  83 EC 44                  SUB ESP,0x44
0070BF76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070BF7B  8D 55 C0                  LEA EDX,[EBP + -0x40]
0070BF7E  8D 4D BC                  LEA ECX,[EBP + -0x44]
0070BF81  6A 00                     PUSH 0x0
0070BF83  52                        PUSH EDX
0070BF84  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0070BF87  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070BF8D  E8 5E 18 02 00            CALL 0x0072d7f0
0070BF92  83 C4 08                  ADD ESP,0x8
0070BF95  85 C0                     TEST EAX,EAX
0070BF97  75 31                     JNZ 0x0070bfca
0070BF99  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0070BF9C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070BF9F  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0070BFA2  50                        PUSH EAX
0070BFA3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070BFA6  51                        PUSH ECX
0070BFA7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070BFAA  52                        PUSH EDX
0070BFAB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070BFAE  50                        PUSH EAX
0070BFAF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070BFB2  51                        PUSH ECX
0070BFB3  52                        PUSH EDX
0070BFB4  50                        PUSH EAX
0070BFB5  E8 C6 FE FF FF            CALL 0x0070be80
0070BFBA  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0070BFBD  83 C4 1C                  ADD ESP,0x1c
0070BFC0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070BFC6  8B E5                     MOV ESP,EBP
0070BFC8  5D                        POP EBP
0070BFC9  C3                        RET
LAB_0070bfca:
0070BFCA  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0070BFCD  33 C0                     XOR EAX,EAX
0070BFCF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070BFD5  8B E5                     MOV ESP,EBP
0070BFD7  5D                        POP EBP
0070BFD8  C3                        RET
