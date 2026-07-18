FUN_0067f0f0:
0067F0F0  55                        PUSH EBP
0067F0F1  8B EC                     MOV EBP,ESP
0067F0F3  83 EC 44                  SUB ESP,0x44
0067F0F6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067F0F9  50                        PUSH EAX
0067F0FA  E8 43 55 D8 FF            CALL 0x00404642
0067F0FF  83 C4 04                  ADD ESP,0x4
0067F102  85 C0                     TEST EAX,EAX
0067F104  74 52                     JZ 0x0067f158
0067F106  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0067F10C  8D 45 C0                  LEA EAX,[EBP + -0x40]
0067F10F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067F112  6A 00                     PUSH 0x0
0067F114  50                        PUSH EAX
0067F115  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0067F118  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067F11E  E8 CD E6 0A 00            CALL 0x0072d7f0
0067F123  83 C4 08                  ADD ESP,0x8
0067F126  85 C0                     TEST EAX,EAX
0067F128  75 25                     JNZ 0x0067f14f
0067F12A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067F12D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0067F130  A1 1C 8A 84 00            MOV EAX,[0x00848a1c]
0067F135  51                        PUSH ECX
0067F136  52                        PUSH EDX
0067F137  50                        PUSH EAX
0067F138  E8 E3 6E 03 00            CALL 0x006b6020
0067F13D  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0067F140  B8 01 00 00 00            MOV EAX,0x1
0067F145  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067F14B  8B E5                     MOV ESP,EBP
0067F14D  5D                        POP EBP
0067F14E  C3                        RET
LAB_0067f14f:
0067F14F  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0067F152  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0067f158:
0067F158  33 C0                     XOR EAX,EAX
0067F15A  8B E5                     MOV ESP,EBP
0067F15C  5D                        POP EBP
0067F15D  C3                        RET
