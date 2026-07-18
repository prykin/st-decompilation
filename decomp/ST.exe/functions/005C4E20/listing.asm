SettMapTy::PaintSettMap:
005C4E20  55                        PUSH EBP
005C4E21  8B EC                     MOV EBP,ESP
005C4E23  83 EC 48                  SUB ESP,0x48
005C4E26  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C4E2B  53                        PUSH EBX
005C4E2C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005C4E2F  56                        PUSH ESI
005C4E30  8D 55 BC                  LEA EDX,[EBP + -0x44]
005C4E33  8D 4D B8                  LEA ECX,[EBP + -0x48]
005C4E36  6A 00                     PUSH 0x0
005C4E38  52                        PUSH EDX
005C4E39  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005C4E3C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C4E42  E8 A9 89 16 00            CALL 0x0072d7f0
005C4E47  8B F0                     MOV ESI,EAX
005C4E49  83 C4 08                  ADD ESP,0x8
005C4E4C  85 F6                     TEST ESI,ESI
005C4E4E  0F 85 EC 01 00 00         JNZ 0x005c5040
005C4E54  A1 34 67 80 00            MOV EAX,[0x00806734]
005C4E59  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005C4E5F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C4E65  50                        PUSH EAX
005C4E66  51                        PUSH ECX
005C4E67  56                        PUSH ESI
005C4E68  56                        PUSH ESI
005C4E69  52                        PUSH EDX
005C4E6A  E8 11 11 0F 00            CALL 0x006b5f80
005C4E6F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005C4E72  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005C4E75  50                        PUSH EAX
005C4E76  6A 01                     PUSH 0x1
005C4E78  6A 00                     PUSH 0x0
005C4E7A  6A 00                     PUSH 0x0
005C4E7C  E8 B7 E8 E3 FF            CALL 0x00403738
005C4E81  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C4E87  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
005C4E8A  83 C4 10                  ADD ESP,0x10
005C4E8D  3C 06                     CMP AL,0x6
005C4E8F  74 54                     JZ 0x005c4ee5
005C4E91  3C 07                     CMP AL,0x7
005C4E93  74 50                     JZ 0x005c4ee5
005C4E95  3C 0E                     CMP AL,0xe
005C4E97  74 4C                     JZ 0x005c4ee5
005C4E99  8B 86 EC 21 00 00         MOV EAX,dword ptr [ESI + 0x21ec]
005C4E9F  85 C0                     TEST EAX,EAX
005C4EA1  75 04                     JNZ 0x005c4ea7
005C4EA3  84 DB                     TEST BL,BL
005C4EA5  74 0E                     JZ 0x005c4eb5
LAB_005c4ea7:
005C4EA7  84 DB                     TEST BL,BL
005C4EA9  74 75                     JZ 0x005c4f20
005C4EAB  8A 86 E2 21 00 00         MOV AL,byte ptr [ESI + 0x21e2]
005C4EB1  84 C0                     TEST AL,AL
005C4EB3  75 6B                     JNZ 0x005c4f20
LAB_005c4eb5:
005C4EB5  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005C4EBB  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005C4EC1  81 C1 40 01 00 00         ADD ECX,0x140
005C4EC7  51                        PUSH ECX
005C4EC8  68 21 01 00 00            PUSH 0x121
005C4ECD  68 F9 00 00 00            PUSH 0xf9
005C4ED2  68 B4 00 00 00            PUSH 0xb4
005C4ED7  6A 0A                     PUSH 0xa
005C4ED9  6A 00                     PUSH 0x0
005C4EDB  6A 00                     PUSH 0x0
005C4EDD  52                        PUSH EDX
005C4EDE  E8 EF F3 E3 FF            CALL 0x004042d2
005C4EE3  EB 3B                     JMP 0x005c4f20
LAB_005c4ee5:
005C4EE5  8B 86 F0 21 00 00         MOV EAX,dword ptr [ESI + 0x21f0]
005C4EEB  85 C0                     TEST EAX,EAX
005C4EED  75 31                     JNZ 0x005c4f20
005C4EEF  84 DB                     TEST BL,BL
005C4EF1  75 2D                     JNZ 0x005c4f20
005C4EF3  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005C4EF9  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005C4EFF  05 40 01 00 00            ADD EAX,0x140
005C4F04  50                        PUSH EAX
005C4F05  68 23 01 00 00            PUSH 0x123
005C4F0A  68 F9 00 00 00            PUSH 0xf9
005C4F0F  68 B4 00 00 00            PUSH 0xb4
005C4F14  6A 0A                     PUSH 0xa
005C4F16  6A 00                     PUSH 0x0
005C4F18  6A 00                     PUSH 0x0
005C4F1A  51                        PUSH ECX
005C4F1B  E8 79 E1 E3 FF            CALL 0x00403099
LAB_005c4f20:
005C4F20  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C4F26  3C 06                     CMP AL,0x6
005C4F28  74 51                     JZ 0x005c4f7b
005C4F2A  3C 01                     CMP AL,0x1
005C4F2C  74 4D                     JZ 0x005c4f7b
005C4F2E  3C 02                     CMP AL,0x2
005C4F30  74 49                     JZ 0x005c4f7b
005C4F32  8B 86 F8 21 00 00         MOV EAX,dword ptr [ESI + 0x21f8]
005C4F38  85 C0                     TEST EAX,EAX
005C4F3A  75 04                     JNZ 0x005c4f40
005C4F3C  84 DB                     TEST BL,BL
005C4F3E  74 0E                     JZ 0x005c4f4e
LAB_005c4f40:
005C4F40  84 DB                     TEST BL,BL
005C4F42  74 37                     JZ 0x005c4f7b
005C4F44  8A 86 E6 21 00 00         MOV AL,byte ptr [ESI + 0x21e6]
005C4F4A  84 C0                     TEST AL,AL
005C4F4C  75 2D                     JNZ 0x005c4f7b
LAB_005c4f4e:
005C4F4E  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005C4F54  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005C4F59  81 C2 40 01 00 00         ADD EDX,0x140
005C4F5F  52                        PUSH EDX
005C4F60  6A 62                     PUSH 0x62
005C4F62  68 90 01 00 00            PUSH 0x190
005C4F67  68 F1 01 00 00            PUSH 0x1f1
005C4F6C  68 C8 00 00 00            PUSH 0xc8
005C4F71  6A 00                     PUSH 0x0
005C4F73  6A 00                     PUSH 0x0
005C4F75  50                        PUSH EAX
005C4F76  E8 E6 EB E3 FF            CALL 0x00403b61
LAB_005c4f7b:
005C4F7B  8B 86 E8 21 00 00         MOV EAX,dword ptr [ESI + 0x21e8]
005C4F81  85 C0                     TEST EAX,EAX
005C4F83  75 32                     JNZ 0x005c4fb7
005C4F85  84 DB                     TEST BL,BL
005C4F87  75 2E                     JNZ 0x005c4fb7
005C4F89  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005C4F8F  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005C4F95  81 C1 40 01 00 00         ADD ECX,0x140
005C4F9B  51                        PUSH ECX
005C4F9C  68 04 01 00 00            PUSH 0x104
005C4FA1  68 05 02 00 00            PUSH 0x205
005C4FA6  6A 38                     PUSH 0x38
005C4FA8  68 12 01 00 00            PUSH 0x112
005C4FAD  6A 00                     PUSH 0x0
005C4FAF  6A 00                     PUSH 0x0
005C4FB1  52                        PUSH EDX
005C4FB2  E8 1B F3 E3 FF            CALL 0x004042d2
LAB_005c4fb7:
005C4FB7  8B 86 F4 21 00 00         MOV EAX,dword ptr [ESI + 0x21f4]
005C4FBD  85 C0                     TEST EAX,EAX
005C4FBF  75 34                     JNZ 0x005c4ff5
005C4FC1  84 DB                     TEST BL,BL
005C4FC3  75 30                     JNZ 0x005c4ff5
005C4FC5  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005C4FCB  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005C4FD1  05 40 01 00 00            ADD EAX,0x140
005C4FD6  50                        PUSH EAX
005C4FD7  68 8C 00 00 00            PUSH 0x8c
005C4FDC  68 05 02 00 00            PUSH 0x205
005C4FE1  68 49 01 00 00            PUSH 0x149
005C4FE6  68 12 01 00 00            PUSH 0x112
005C4FEB  6A 00                     PUSH 0x0
005C4FED  6A 00                     PUSH 0x0
005C4FEF  51                        PUSH ECX
005C4FF0  E8 A4 E0 E3 FF            CALL 0x00403099
LAB_005c4ff5:
005C4FF5  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C4FFB  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C5001  6A 00                     PUSH 0x0
005C5003  8B 42 30                  MOV EAX,dword ptr [EDX + 0x30]
005C5006  50                        PUSH EAX
005C5007  6A FF                     PUSH -0x1
005C5009  6A FE                     PUSH -0x2
005C500B  51                        PUSH ECX
005C500C  68 B2 26 00 00            PUSH 0x26b2
005C5011  E8 2A B1 0E 00            CALL 0x006b0140
005C5016  50                        PUSH EAX
005C5017  6A 18                     PUSH 0x18
005C5019  68 4C 01 00 00            PUSH 0x14c
005C501E  6A 14                     PUSH 0x14
005C5020  68 E9 00 00 00            PUSH 0xe9
005C5025  6A 00                     PUSH 0x0
005C5027  E8 01 FC E3 FF            CALL 0x00404c2d
005C502C  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005C502F  83 C4 28                  ADD ESP,0x28
005C5032  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C5038  5E                        POP ESI
005C5039  5B                        POP EBX
005C503A  8B E5                     MOV ESP,EBP
005C503C  5D                        POP EBP
005C503D  C2 04 00                  RET 0x4
LAB_005c5040:
005C5040  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005C5043  68 8C D1 7C 00            PUSH 0x7cd18c
005C5048  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C504D  56                        PUSH ESI
005C504E  6A 00                     PUSH 0x0
005C5050  68 EE 01 00 00            PUSH 0x1ee
005C5055  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C505A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C505F  E8 6C 84 0E 00            CALL 0x006ad4d0
005C5064  83 C4 18                  ADD ESP,0x18
005C5067  85 C0                     TEST EAX,EAX
005C5069  74 01                     JZ 0x005c506c
005C506B  CC                        INT3
LAB_005c506c:
005C506C  68 EE 01 00 00            PUSH 0x1ee
005C5071  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C5076  6A 00                     PUSH 0x0
005C5078  56                        PUSH ESI
005C5079  E8 C2 0D 0E 00            CALL 0x006a5e40
005C507E  5E                        POP ESI
005C507F  5B                        POP EBX
005C5080  8B E5                     MOV ESP,EBP
005C5082  5D                        POP EBP
005C5083  C2 04 00                  RET 0x4
