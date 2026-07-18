FUN_0055dbf0:
0055DBF0  55                        PUSH EBP
0055DBF1  8B EC                     MOV EBP,ESP
0055DBF3  81 EC 44 04 00 00         SUB ESP,0x444
0055DBF9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055DBFE  56                        PUSH ESI
0055DBFF  8D 55 C0                  LEA EDX,[EBP + -0x40]
0055DC02  8D 4D BC                  LEA ECX,[EBP + -0x44]
0055DC05  6A 00                     PUSH 0x0
0055DC07  52                        PUSH EDX
0055DC08  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0055DC0B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055DC11  E8 DA FB 1C 00            CALL 0x0072d7f0
0055DC16  8B F0                     MOV ESI,EAX
0055DC18  83 C4 08                  ADD ESP,0x8
0055DC1B  85 F6                     TEST ESI,ESI
0055DC1D  75 43                     JNZ 0x0055dc62
0055DC1F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055DC22  68 00 01 00 00            PUSH 0x100
0055DC27  50                        PUSH EAX
0055DC28  8D 85 BC FB FF FF         LEA EAX,[EBP + 0xfffffbbc]
0055DC2E  50                        PUSH EAX
0055DC2F  56                        PUSH ESI
0055DC30  E8 6B 2F 15 00            CALL 0x006b0ba0
0055DC35  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0055DC38  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055DC3B  51                        PUSH ECX
0055DC3C  52                        PUSH EDX
0055DC3D  68 00 01 00 00            PUSH 0x100
0055DC42  8D 85 BC FB FF FF         LEA EAX,[EBP + 0xfffffbbc]
0055DC48  6A 00                     PUSH 0x0
0055DC4A  50                        PUSH EAX
0055DC4B  56                        PUSH ESI
0055DC4C  E8 7F B6 1B 00            CALL 0x007192d0
0055DC51  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0055DC54  83 C4 18                  ADD ESP,0x18
0055DC57  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055DC5D  5E                        POP ESI
0055DC5E  8B E5                     MOV ESP,EBP
0055DC60  5D                        POP EBP
0055DC61  C3                        RET
LAB_0055dc62:
0055DC62  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0055DC65  68 F4 95 7C 00            PUSH 0x7c95f4
0055DC6A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055DC6F  56                        PUSH ESI
0055DC70  6A 00                     PUSH 0x0
0055DC72  6A 1D                     PUSH 0x1d
0055DC74  68 D8 95 7C 00            PUSH 0x7c95d8
0055DC79  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055DC7F  E8 4C F8 14 00            CALL 0x006ad4d0
0055DC84  83 C4 18                  ADD ESP,0x18
0055DC87  85 C0                     TEST EAX,EAX
0055DC89  74 01                     JZ 0x0055dc8c
0055DC8B  CC                        INT3
LAB_0055dc8c:
0055DC8C  6A 1F                     PUSH 0x1f
0055DC8E  68 D8 95 7C 00            PUSH 0x7c95d8
0055DC93  6A 00                     PUSH 0x0
0055DC95  56                        PUSH ESI
0055DC96  E8 A5 81 14 00            CALL 0x006a5e40
0055DC9B  5E                        POP ESI
0055DC9C  8B E5                     MOV ESP,EBP
0055DC9E  5D                        POP EBP
0055DC9F  C3                        RET
