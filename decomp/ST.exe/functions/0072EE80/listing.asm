FUN_0072ee80:
0072EE80  55                        PUSH EBP
0072EE81  8B EC                     MOV EBP,ESP
0072EE83  83 EC 2C                  SUB ESP,0x2c
0072EE86  53                        PUSH EBX
0072EE87  56                        PUSH ESI
0072EE88  57                        PUSH EDI
0072EE89  8D 45 E0                  LEA EAX,[EBP + -0x20]
0072EE8C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0072EE8F  8D 4D 10                  LEA ECX,[EBP + 0x10]
0072EE92  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_0072ee95:
0072EE95  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072EE99  75 1E                     JNZ 0x0072eeb9
0072EE9B  68 74 FE 79 00            PUSH 0x79fe74
0072EEA0  6A 00                     PUSH 0x0
0072EEA2  6A 42                     PUSH 0x42
0072EEA4  68 A0 FE 79 00            PUSH 0x79fea0
0072EEA9  6A 02                     PUSH 0x2
0072EEAB  E8 F0 20 00 00            CALL 0x00730fa0
0072EEB0  83 C4 14                  ADD ESP,0x14
0072EEB3  83 F8 01                  CMP EAX,0x1
0072EEB6  75 01                     JNZ 0x0072eeb9
0072EEB8  CC                        INT3
LAB_0072eeb9:
0072EEB9  33 D2                     XOR EDX,EDX
0072EEBB  85 D2                     TEST EDX,EDX
0072EEBD  75 D6                     JNZ 0x0072ee95
LAB_0072eebf:
0072EEBF  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072EEC3  75 1E                     JNZ 0x0072eee3
0072EEC5  68 90 FE 79 00            PUSH 0x79fe90
0072EECA  6A 00                     PUSH 0x0
0072EECC  6A 43                     PUSH 0x43
0072EECE  68 A0 FE 79 00            PUSH 0x79fea0
0072EED3  6A 02                     PUSH 0x2
0072EED5  E8 C6 20 00 00            CALL 0x00730fa0
0072EEDA  83 C4 14                  ADD ESP,0x14
0072EEDD  83 F8 01                  CMP EAX,0x1
0072EEE0  75 01                     JNZ 0x0072eee3
0072EEE2  CC                        INT3
LAB_0072eee3:
0072EEE3  33 C0                     XOR EAX,EAX
0072EEE5  85 C0                     TEST EAX,EAX
0072EEE7  75 D6                     JNZ 0x0072eebf
0072EEE9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0072EEEC  C7 41 0C 49 00 00 00      MOV dword ptr [ECX + 0xc],0x49
0072EEF3  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0072EEF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072EEF9  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0072EEFC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0072EEFF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072EF02  89 11                     MOV dword ptr [ECX],EDX
0072EF04  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072EF07  50                        PUSH EAX
0072EF08  E8 03 7D 00 00            CALL 0x00736c10
0072EF0D  83 C4 04                  ADD ESP,0x4
0072EF10  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0072EF13  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0072EF16  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0072EF19  52                        PUSH EDX
0072EF1A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072EF1D  50                        PUSH EAX
0072EF1E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0072EF21  51                        PUSH ECX
0072EF22  E8 B9 87 00 00            CALL 0x007376e0
0072EF27  83 C4 0C                  ADD ESP,0xc
0072EF2A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0072EF2D  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0072EF30  5F                        POP EDI
0072EF31  5E                        POP ESI
0072EF32  5B                        POP EBX
0072EF33  8B E5                     MOV ESP,EBP
0072EF35  5D                        POP EBP
0072EF36  C3                        RET
