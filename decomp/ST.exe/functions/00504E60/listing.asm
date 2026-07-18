CPanelTy::PaintIDSObj:
00504E60  55                        PUSH EBP
00504E61  8B EC                     MOV EBP,ESP
00504E63  83 EC 48                  SUB ESP,0x48
00504E66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00504E6B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00504E6E  56                        PUSH ESI
00504E6F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00504E72  8D 4D B8                  LEA ECX,[EBP + -0x48]
00504E75  6A 00                     PUSH 0x0
00504E77  52                        PUSH EDX
00504E78  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00504E7B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00504E81  E8 6A 89 22 00            CALL 0x0072d7f0
00504E86  8B F0                     MOV ESI,EAX
00504E88  83 C4 08                  ADD ESP,0x8
00504E8B  85 F6                     TEST ESI,ESI
00504E8D  0F 85 1F 01 00 00         JNZ 0x00504fb2
00504E93  A0 4E 87 80 00            MOV AL,[0x0080874e]
00504E98  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00504E9B  3C 03                     CMP AL,0x3
00504E9D  75 6E                     JNZ 0x00504f0d
00504E9F  8B 86 F1 09 00 00         MOV EAX,dword ptr [ESI + 0x9f1]
00504EA5  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00504EAB  50                        PUSH EAX
00504EAC  6A 01                     PUSH 0x1
00504EAE  68 8D 00 00 00            PUSH 0x8d
00504EB3  6A 0F                     PUSH 0xf
00504EB5  51                        PUSH ECX
00504EB6  E8 6E E3 EF FF            CALL 0x00403229
00504EBB  8B 86 4D 0C 00 00         MOV EAX,dword ptr [ESI + 0xc4d]
00504EC1  83 C4 14                  ADD ESP,0x14
00504EC4  85 C0                     TEST EAX,EAX
00504EC6  0F 84 B5 00 00 00         JZ 0x00504f81
00504ECC  8B 96 F1 09 00 00         MOV EDX,dword ptr [ESI + 0x9f1]
00504ED2  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00504ED8  6A 0B                     PUSH 0xb
00504EDA  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00504EDD  50                        PUSH EAX
00504EDE  68 8E 00 00 00            PUSH 0x8e
00504EE3  6A 10                     PUSH 0x10
00504EE5  6A 00                     PUSH 0x0
00504EE7  51                        PUSH ECX
00504EE8  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504EEE  E8 9D BB 20 00            CALL 0x00710a90
00504EF3  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00504EF9  8B 86 4D 0C 00 00         MOV EAX,dword ptr [ESI + 0xc4d]
00504EFF  6A FF                     PUSH -0x1
00504F01  6A FF                     PUSH -0x1
00504F03  6A 00                     PUSH 0x0
00504F05  6A FF                     PUSH -0x1
00504F07  6A FE                     PUSH -0x2
00504F09  52                        PUSH EDX
00504F0A  50                        PUSH EAX
00504F0B  EB 63                     JMP 0x00504f70
LAB_00504f0d:
00504F0D  8B 8E F1 09 00 00         MOV ECX,dword ptr [ESI + 0x9f1]
00504F13  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
00504F19  51                        PUSH ECX
00504F1A  6A 01                     PUSH 0x1
00504F1C  68 89 00 00 00            PUSH 0x89
00504F21  6A 04                     PUSH 0x4
00504F23  52                        PUSH EDX
00504F24  E8 00 E3 EF FF            CALL 0x00403229
00504F29  8B 86 4D 0C 00 00         MOV EAX,dword ptr [ESI + 0xc4d]
00504F2F  83 C4 14                  ADD ESP,0x14
00504F32  85 C0                     TEST EAX,EAX
00504F34  74 4B                     JZ 0x00504f81
00504F36  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
00504F3C  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504F42  6A 0B                     PUSH 0xb
00504F44  68 C8 00 00 00            PUSH 0xc8
00504F49  68 8B 00 00 00            PUSH 0x8b
00504F4E  6A 06                     PUSH 0x6
00504F50  6A 00                     PUSH 0x0
00504F52  50                        PUSH EAX
00504F53  E8 38 BB 20 00            CALL 0x00710a90
00504F58  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00504F5E  8B 96 4D 0C 00 00         MOV EDX,dword ptr [ESI + 0xc4d]
00504F64  6A FF                     PUSH -0x1
00504F66  6A FF                     PUSH -0x1
00504F68  6A 00                     PUSH 0x0
00504F6A  6A FF                     PUSH -0x1
00504F6C  6A FE                     PUSH -0x2
00504F6E  51                        PUSH ECX
00504F6F  52                        PUSH EDX
LAB_00504f70:
00504F70  E8 CB B1 1A 00            CALL 0x006b0140
00504F75  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504F7B  50                        PUSH EAX
00504F7C  E8 EF CB 20 00            CALL 0x00711b70
LAB_00504f81:
00504F81  8B 86 5C 01 00 00         MOV EAX,dword ptr [ESI + 0x15c]
00504F87  85 C0                     TEST EAX,EAX
00504F89  7C 19                     JL 0x00504fa4
00504F8B  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
00504F91  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
00504F94  51                        PUSH ECX
00504F95  52                        PUSH EDX
00504F96  6A FF                     PUSH -0x1
00504F98  50                        PUSH EAX
00504F99  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00504F9E  50                        PUSH EAX
00504F9F  E8 9C E6 1A 00            CALL 0x006b3640
LAB_00504fa4:
00504FA4  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00504FA7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00504FAD  5E                        POP ESI
00504FAE  8B E5                     MOV ESP,EBP
00504FB0  5D                        POP EBP
00504FB1  C3                        RET
LAB_00504fb2:
00504FB2  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00504FB5  68 D0 27 7C 00            PUSH 0x7c27d0
00504FBA  68 CC 4C 7A 00            PUSH 0x7a4ccc
00504FBF  56                        PUSH ESI
00504FC0  6A 00                     PUSH 0x0
00504FC2  68 A0 00 00 00            PUSH 0xa0
00504FC7  68 00 27 7C 00            PUSH 0x7c2700
00504FCC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00504FD2  E8 F9 84 1A 00            CALL 0x006ad4d0
00504FD7  83 C4 18                  ADD ESP,0x18
00504FDA  85 C0                     TEST EAX,EAX
00504FDC  74 01                     JZ 0x00504fdf
00504FDE  CC                        INT3
LAB_00504fdf:
00504FDF  68 A0 00 00 00            PUSH 0xa0
00504FE4  68 00 27 7C 00            PUSH 0x7c2700
00504FE9  6A 00                     PUSH 0x0
00504FEB  56                        PUSH ESI
00504FEC  E8 4F 0E 1A 00            CALL 0x006a5e40
00504FF1  5E                        POP ESI
00504FF2  8B E5                     MOV ESP,EBP
00504FF4  5D                        POP EBP
00504FF5  C3                        RET
