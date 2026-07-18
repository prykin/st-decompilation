FUN_0068ea40:
0068EA40  55                        PUSH EBP
0068EA41  8B EC                     MOV EBP,ESP
0068EA43  83 EC 48                  SUB ESP,0x48
0068EA46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068EA4B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068EA4E  56                        PUSH ESI
0068EA4F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0068EA52  8D 4D B8                  LEA ECX,[EBP + -0x48]
0068EA55  6A 00                     PUSH 0x0
0068EA57  52                        PUSH EDX
0068EA58  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0068EA5B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068EA61  E8 8A ED 09 00            CALL 0x0072d7f0
0068EA66  8B F0                     MOV ESI,EAX
0068EA68  83 C4 08                  ADD ESP,0x8
0068EA6B  85 F6                     TEST ESI,ESI
0068EA6D  75 3F                     JNZ 0x0068eaae
0068EA6F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0068EA72  8B 86 30 01 00 00         MOV EAX,dword ptr [ESI + 0x130]
0068EA78  85 C0                     TEST EAX,EAX
0068EA7A  74 24                     JZ 0x0068eaa0
0068EA7C  8B 86 BD 00 00 00         MOV EAX,dword ptr [ESI + 0xbd]
0068EA82  85 C0                     TEST EAX,EAX
0068EA84  74 1A                     JZ 0x0068eaa0
0068EA86  50                        PUSH EAX
0068EA87  E8 84 F6 01 00            CALL 0x006ae110
0068EA8C  8B 86 30 01 00 00         MOV EAX,dword ptr [ESI + 0x130]
0068EA92  50                        PUSH EAX
0068EA93  6A 00                     PUSH 0x0
0068EA95  E8 C6 15 02 00            CALL 0x006b0060
0068EA9A  89 86 BD 00 00 00         MOV dword ptr [ESI + 0xbd],EAX
LAB_0068eaa0:
0068EAA0  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0068EAA3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068EAA9  5E                        POP ESI
0068EAAA  8B E5                     MOV ESP,EBP
0068EAAC  5D                        POP EBP
0068EAAD  C3                        RET
LAB_0068eaae:
0068EAAE  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0068EAB1  68 74 57 7D 00            PUSH 0x7d5774
0068EAB6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068EABB  56                        PUSH ESI
0068EABC  6A 00                     PUSH 0x0
0068EABE  68 7B 01 00 00            PUSH 0x17b
0068EAC3  68 E0 56 7D 00            PUSH 0x7d56e0
0068EAC8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068EACE  E8 FD E9 01 00            CALL 0x006ad4d0
0068EAD3  83 C4 18                  ADD ESP,0x18
0068EAD6  85 C0                     TEST EAX,EAX
0068EAD8  74 01                     JZ 0x0068eadb
0068EADA  CC                        INT3
LAB_0068eadb:
0068EADB  68 7C 01 00 00            PUSH 0x17c
0068EAE0  68 E0 56 7D 00            PUSH 0x7d56e0
0068EAE5  6A 00                     PUSH 0x0
0068EAE7  56                        PUSH ESI
0068EAE8  E8 53 73 01 00            CALL 0x006a5e40
0068EAED  5E                        POP ESI
0068EAEE  8B E5                     MOV ESP,EBP
0068EAF0  5D                        POP EBP
0068EAF1  C3                        RET
