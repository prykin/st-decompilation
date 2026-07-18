CPanelTy::PaintDamageXY:
004F1F60  55                        PUSH EBP
004F1F61  8B EC                     MOV EBP,ESP
004F1F63  83 EC 48                  SUB ESP,0x48
004F1F66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F1F6B  53                        PUSH EBX
004F1F6C  56                        PUSH ESI
004F1F6D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F1F70  57                        PUSH EDI
004F1F71  8D 55 BC                  LEA EDX,[EBP + -0x44]
004F1F74  8D 4D B8                  LEA ECX,[EBP + -0x48]
004F1F77  6A 00                     PUSH 0x0
004F1F79  52                        PUSH EDX
004F1F7A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004F1F7D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F1F83  E8 68 B8 23 00            CALL 0x0072d7f0
004F1F88  8B F0                     MOV ESI,EAX
004F1F8A  83 C4 08                  ADD ESP,0x8
004F1F8D  85 F6                     TEST ESI,ESI
004F1F8F  0F 85 F2 00 00 00         JNZ 0x004f2087
004F1F95  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004F1F98  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004F1F9B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F1F9E  6A 0A                     PUSH 0xa
004F1FA0  6A 30                     PUSH 0x30
004F1FA2  57                        PUSH EDI
004F1FA3  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F1FA9  53                        PUSH EBX
004F1FAA  50                        PUSH EAX
004F1FAB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F1FAE  50                        PUSH EAX
004F1FAF  E8 DC EA 21 00            CALL 0x00710a90
004F1FB4  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
004F1FBA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004F1FBD  6A FF                     PUSH -0x1
004F1FBF  6A FF                     PUSH -0x1
004F1FC1  6A 05                     PUSH 0x5
004F1FC3  6A FF                     PUSH -0x1
004F1FC5  6A 00                     PUSH 0x0
004F1FC7  51                        PUSH ECX
004F1FC8  52                        PUSH EDX
004F1FC9  E8 72 E1 1B 00            CALL 0x006b0140
004F1FCE  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F1FD4  50                        PUSH EAX
004F1FD5  E8 96 FB 21 00            CALL 0x00711b70
004F1FDA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F1FDD  8D 86 E1 01 00 00         LEA EAX,[ESI + 0x1e1]
004F1FE3  81 E1 FF 00 00 00         AND ECX,0xff
004F1FE9  51                        PUSH ECX
004F1FEA  68 A4 1A 7C 00            PUSH 0x7c1aa4
004F1FEF  50                        PUSH EAX
004F1FF0  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F1FF6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004F1FF9  83 C4 0C                  ADD ESP,0xc
004F1FFC  8D 57 0A                  LEA EDX,[EDI + 0xa]
004F1FFF  8D 43 0C                  LEA EAX,[EBX + 0xc]
004F2002  6A 0F                     PUSH 0xf
004F2004  6A 14                     PUSH 0x14
004F2006  52                        PUSH EDX
004F2007  50                        PUSH EAX
004F2008  6A 00                     PUSH 0x0
004F200A  51                        PUSH ECX
004F200B  8B 8E BC 01 00 00         MOV ECX,dword ptr [ESI + 0x1bc]
004F2011  E8 7A EA 21 00            CALL 0x00710a90
004F2016  8B 8E BC 01 00 00         MOV ECX,dword ptr [ESI + 0x1bc]
004F201C  6A FF                     PUSH -0x1
004F201E  6A FF                     PUSH -0x1
004F2020  6A 01                     PUSH 0x1
004F2022  6A FF                     PUSH -0x1
004F2024  8D 86 E1 01 00 00         LEA EAX,[ESI + 0x1e1]
004F202A  6A FD                     PUSH -0x3
004F202C  50                        PUSH EAX
004F202D  E8 3E FB 21 00            CALL 0x00711b70
004F2032  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F2035  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F203B  6A 0A                     PUSH 0xa
004F203D  83 C7 0D                  ADD EDI,0xd
004F2040  6A 0A                     PUSH 0xa
004F2042  83 C3 22                  ADD EBX,0x22
004F2045  57                        PUSH EDI
004F2046  53                        PUSH EBX
004F2047  6A 00                     PUSH 0x0
004F2049  52                        PUSH EDX
004F204A  E8 41 EA 21 00            CALL 0x00710a90
004F204F  A1 18 76 80 00            MOV EAX,[0x00807618]
004F2054  6A FF                     PUSH -0x1
004F2056  6A FF                     PUSH -0x1
004F2058  6A 05                     PUSH 0x5
004F205A  6A FF                     PUSH -0x1
004F205C  6A FF                     PUSH -0x1
004F205E  50                        PUSH EAX
004F205F  68 B2 36 00 00            PUSH 0x36b2
004F2064  E8 D7 E0 1B 00            CALL 0x006b0140
004F2069  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F206F  50                        PUSH EAX
004F2070  E8 FB FA 21 00            CALL 0x00711b70
004F2075  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004F2078  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F207E  5F                        POP EDI
004F207F  5E                        POP ESI
004F2080  5B                        POP EBX
004F2081  8B E5                     MOV ESP,EBP
004F2083  5D                        POP EBP
004F2084  C2 14 00                  RET 0x14
LAB_004f2087:
004F2087  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F208A  68 88 1A 7C 00            PUSH 0x7c1a88
004F208F  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F2094  56                        PUSH ESI
004F2095  6A 00                     PUSH 0x0
004F2097  68 A3 00 00 00            PUSH 0xa3
004F209C  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F20A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F20A7  E8 24 B4 1B 00            CALL 0x006ad4d0
004F20AC  83 C4 18                  ADD ESP,0x18
004F20AF  85 C0                     TEST EAX,EAX
004F20B1  74 01                     JZ 0x004f20b4
004F20B3  CC                        INT3
LAB_004f20b4:
004F20B4  68 A3 00 00 00            PUSH 0xa3
004F20B9  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F20BE  6A 00                     PUSH 0x0
004F20C0  56                        PUSH ESI
004F20C1  E8 7A 3D 1B 00            CALL 0x006a5e40
004F20C6  5F                        POP EDI
004F20C7  5E                        POP ESI
004F20C8  5B                        POP EBX
004F20C9  8B E5                     MOV ESP,EBP
004F20CB  5D                        POP EBP
004F20CC  C2 14 00                  RET 0x14
