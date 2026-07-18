CPanelTy::PaintDamageXY:
004F1D90  55                        PUSH EBP
004F1D91  8B EC                     MOV EBP,ESP
004F1D93  83 EC 48                  SUB ESP,0x48
004F1D96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F1D9B  53                        PUSH EBX
004F1D9C  56                        PUSH ESI
004F1D9D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F1DA0  57                        PUSH EDI
004F1DA1  8D 55 BC                  LEA EDX,[EBP + -0x44]
004F1DA4  8D 4D B8                  LEA ECX,[EBP + -0x48]
004F1DA7  6A 00                     PUSH 0x0
004F1DA9  52                        PUSH EDX
004F1DAA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004F1DAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F1DB3  E8 38 BA 23 00            CALL 0x0072d7f0
004F1DB8  8B F0                     MOV ESI,EAX
004F1DBA  83 C4 08                  ADD ESP,0x8
004F1DBD  85 F6                     TEST ESI,ESI
004F1DBF  0F 85 EC 00 00 00         JNZ 0x004f1eb1
004F1DC5  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004F1DC8  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004F1DCB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F1DCE  6A 0A                     PUSH 0xa
004F1DD0  6A 30                     PUSH 0x30
004F1DD2  57                        PUSH EDI
004F1DD3  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F1DD9  53                        PUSH EBX
004F1DDA  50                        PUSH EAX
004F1DDB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F1DDE  50                        PUSH EAX
004F1DDF  E8 AC EC 21 00            CALL 0x00710a90
004F1DE4  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
004F1DEA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004F1DED  6A FF                     PUSH -0x1
004F1DEF  6A FF                     PUSH -0x1
004F1DF1  6A 01                     PUSH 0x1
004F1DF3  6A FF                     PUSH -0x1
004F1DF5  6A 00                     PUSH 0x0
004F1DF7  51                        PUSH ECX
004F1DF8  52                        PUSH EDX
004F1DF9  E8 42 E3 1B 00            CALL 0x006b0140
004F1DFE  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F1E04  50                        PUSH EAX
004F1E05  E8 66 FD 21 00            CALL 0x00711b70
004F1E0A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F1E0D  8D 86 E1 01 00 00         LEA EAX,[ESI + 0x1e1]
004F1E13  81 E1 FF 00 00 00         AND ECX,0xff
004F1E19  51                        PUSH ECX
004F1E1A  68 90 18 7C 00            PUSH 0x7c1890
004F1E1F  50                        PUSH EAX
004F1E20  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F1E26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F1E29  83 C4 0C                  ADD ESP,0xc
004F1E2C  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F1E32  8D 53 30                  LEA EDX,[EBX + 0x30]
004F1E35  6A 0A                     PUSH 0xa
004F1E37  6A 11                     PUSH 0x11
004F1E39  57                        PUSH EDI
004F1E3A  52                        PUSH EDX
004F1E3B  6A 00                     PUSH 0x0
004F1E3D  50                        PUSH EAX
004F1E3E  E8 4D EC 21 00            CALL 0x00710a90
004F1E43  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F1E49  6A FF                     PUSH -0x1
004F1E4B  6A FF                     PUSH -0x1
004F1E4D  6A 00                     PUSH 0x0
004F1E4F  6A FF                     PUSH -0x1
004F1E51  8D 86 E1 01 00 00         LEA EAX,[ESI + 0x1e1]
004F1E57  6A FD                     PUSH -0x3
004F1E59  50                        PUSH EAX
004F1E5A  E8 11 FD 21 00            CALL 0x00711b70
004F1E5F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004F1E62  6A 0A                     PUSH 0xa
004F1E64  6A 0A                     PUSH 0xa
004F1E66  83 C3 42                  ADD EBX,0x42
004F1E69  57                        PUSH EDI
004F1E6A  53                        PUSH EBX
004F1E6B  6A 00                     PUSH 0x0
004F1E6D  51                        PUSH ECX
004F1E6E  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F1E74  E8 17 EC 21 00            CALL 0x00710a90
004F1E79  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
004F1E7F  6A FF                     PUSH -0x1
004F1E81  6A FF                     PUSH -0x1
004F1E83  6A 01                     PUSH 0x1
004F1E85  6A FF                     PUSH -0x1
004F1E87  6A FF                     PUSH -0x1
004F1E89  52                        PUSH EDX
004F1E8A  68 B2 36 00 00            PUSH 0x36b2
004F1E8F  E8 AC E2 1B 00            CALL 0x006b0140
004F1E94  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F1E9A  50                        PUSH EAX
004F1E9B  E8 D0 FC 21 00            CALL 0x00711b70
004F1EA0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004F1EA3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F1EA8  5F                        POP EDI
004F1EA9  5E                        POP ESI
004F1EAA  5B                        POP EBX
004F1EAB  8B E5                     MOV ESP,EBP
004F1EAD  5D                        POP EBP
004F1EAE  C2 14 00                  RET 0x14
LAB_004f1eb1:
004F1EB1  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004F1EB4  68 88 1A 7C 00            PUSH 0x7c1a88
004F1EB9  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F1EBE  56                        PUSH ESI
004F1EBF  6A 00                     PUSH 0x0
004F1EC1  68 8F 00 00 00            PUSH 0x8f
004F1EC6  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F1ECB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F1ED1  E8 FA B5 1B 00            CALL 0x006ad4d0
004F1ED6  83 C4 18                  ADD ESP,0x18
004F1ED9  85 C0                     TEST EAX,EAX
004F1EDB  74 01                     JZ 0x004f1ede
004F1EDD  CC                        INT3
LAB_004f1ede:
004F1EDE  68 8F 00 00 00            PUSH 0x8f
004F1EE3  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F1EE8  6A 00                     PUSH 0x0
004F1EEA  56                        PUSH ESI
004F1EEB  E8 50 3F 1B 00            CALL 0x006a5e40
004F1EF0  5F                        POP EDI
004F1EF1  5E                        POP ESI
004F1EF2  5B                        POP EBX
004F1EF3  8B E5                     MOV ESP,EBP
004F1EF5  5D                        POP EBP
004F1EF6  C2 14 00                  RET 0x14
