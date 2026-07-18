FUN_0055c0e0:
0055C0E0  55                        PUSH EBP
0055C0E1  8B EC                     MOV EBP,ESP
0055C0E3  83 EC 44                  SUB ESP,0x44
0055C0E6  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055C0E9  84 C0                     TEST AL,AL
0055C0EB  75 69                     JNZ 0x0055c156
0055C0ED  A1 4C 17 81 00            MOV EAX,[0x0081174c]
0055C0F2  85 C0                     TEST EAX,EAX
0055C0F4  74 60                     JZ 0x0055c156
0055C0F6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055C0F9  85 C0                     TEST EAX,EAX
0055C0FB  74 59                     JZ 0x0055c156
0055C0FD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055C102  8D 55 C0                  LEA EDX,[EBP + -0x40]
0055C105  8D 4D BC                  LEA ECX,[EBP + -0x44]
0055C108  6A 00                     PUSH 0x0
0055C10A  52                        PUSH EDX
0055C10B  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0055C10E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055C114  E8 D7 16 1D 00            CALL 0x0072d7f0
0055C119  83 C4 08                  ADD ESP,0x8
0055C11C  85 C0                     TEST EAX,EAX
0055C11E  75 2E                     JNZ 0x0055c14e
0055C120  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055C123  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055C126  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0055C129  50                        PUSH EAX
0055C12A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055C12D  51                        PUSH ECX
0055C12E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055C131  52                        PUSH EDX
0055C132  50                        PUSH EAX
0055C133  51                        PUSH ECX
0055C134  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C13A  E8 C9 5F EA FF            CALL 0x00402108
0055C13F  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0055C142  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055C148  8B E5                     MOV ESP,EBP
0055C14A  5D                        POP EBP
0055C14B  C2 14 00                  RET 0x14
LAB_0055c14e:
0055C14E  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0055C151  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_0055c156:
0055C156  8B E5                     MOV ESP,EBP
0055C158  5D                        POP EBP
0055C159  C2 14 00                  RET 0x14
