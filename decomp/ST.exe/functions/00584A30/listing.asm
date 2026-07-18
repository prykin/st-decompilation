FUN_00584a30:
00584A30  55                        PUSH EBP
00584A31  8B EC                     MOV EBP,ESP
00584A33  83 EC 34                  SUB ESP,0x34
00584A36  57                        PUSH EDI
00584A37  B9 0C 00 00 00            MOV ECX,0xc
00584A3C  33 C0                     XOR EAX,EAX
00584A3E  8D 7D CC                  LEA EDI,[EBP + -0x34]
00584A41  F3 AB                     STOSD.REP ES:EDI
00584A43  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00584A46  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00584A49  66 AB                     STOSW ES:EDI
00584A4B  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00584A4E  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00584A51  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00584A54  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00584A57  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00584A5A  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00584A5D  66 8B 4D 28               MOV CX,word ptr [EBP + 0x28]
00584A61  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00584A64  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00584A67  6A 00                     PUSH 0x0
00584A69  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00584A6C  8D 45 CC                  LEA EAX,[EBP + -0x34]
00584A6F  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00584A72  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00584A75  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
00584A79  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00584A7F  50                        PUSH EAX
00584A80  8D 45 1C                  LEA EAX,[EBP + 0x1c]
00584A83  C7 45 CC AA 00 00 00      MOV dword ptr [EBP + -0x34],0xaa
00584A8A  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
00584A91  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
00584A98  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00584A9B  8B 11                     MOV EDX,dword ptr [ECX]
00584A9D  50                        PUSH EAX
00584A9E  6A 00                     PUSH 0x0
00584AA0  68 30 01 00 00            PUSH 0x130
00584AA5  FF 52 08                  CALL dword ptr [EDX + 0x8]
00584AA8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00584AAB  5F                        POP EDI
00584AAC  8B E5                     MOV ESP,EBP
00584AAE  5D                        POP EBP
00584AAF  C3                        RET
