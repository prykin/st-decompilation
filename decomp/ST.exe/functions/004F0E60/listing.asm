BldObjPanelTy::PaintBldBut:
004F0E60  55                        PUSH EBP
004F0E61  8B EC                     MOV EBP,ESP
004F0E63  83 EC 58                  SUB ESP,0x58
004F0E66  53                        PUSH EBX
004F0E67  56                        PUSH ESI
004F0E68  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
004F0E6B  57                        PUSH EDI
004F0E6C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004F0E6F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004F0E72  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004F0E75  8B 10                     MOV EDX,dword ptr [EAX]
004F0E77  2B D6                     SUB EDX,ESI
004F0E79  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004F0E7C  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
004F0E7F  85 D2                     TEST EDX,EDX
004F0E81  75 10                     JNZ 0x004f0e93
004F0E83  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
004F0E86  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
004F0E8C  2B C2                     SUB EAX,EDX
004F0E8E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004F0E91  EB 0B                     JMP 0x004f0e9e
LAB_004f0e93:
004F0E93  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004F0E96  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
004F0E99  2B D0                     SUB EDX,EAX
004F0E9B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_004f0e9e:
004F0E9E  8B 81 99 01 00 00         MOV EAX,dword ptr [ECX + 0x199]
004F0EA4  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
004F0EA7  8D B4 10 51 3F FF FF      LEA ESI,[EAX + EDX*0x1 + 0xffff3f51]
004F0EAE  33 C0                     XOR EAX,EAX
004F0EB0  8A 81 78 02 00 00         MOV AL,byte ptr [ECX + 0x278]
004F0EB6  8B 94 81 7E 02 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x27e]
004F0EBD  85 D2                     TEST EDX,EDX
004F0EBF  74 10                     JZ 0x004f0ed1
004F0EC1  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
004F0EC4  73 0B                     JNC 0x004f0ed1
004F0EC6  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004F0EC9  0F AF C6                  IMUL EAX,ESI
004F0ECC  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
004F0ECF  EB 02                     JMP 0x004f0ed3
LAB_004f0ed1:
004F0ED1  33 C0                     XOR EAX,EAX
LAB_004f0ed3:
004F0ED3  66 83 7F 14 00            CMP word ptr [EDI + 0x14],0x0
004F0ED8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F0EDB  74 31                     JZ 0x004f0f0e
004F0EDD  85 C0                     TEST EAX,EAX
004F0EDF  74 2D                     JZ 0x004f0f0e
004F0EE1  8A 50 08                  MOV DL,byte ptr [EAX + 0x8]
004F0EE4  84 D2                     TEST DL,DL
004F0EE6  74 08                     JZ 0x004f0ef0
004F0EE8  8B B1 88 01 00 00         MOV ESI,dword ptr [ECX + 0x188]
004F0EEE  EB 06                     JMP 0x004f0ef6
LAB_004f0ef0:
004F0EF0  8B B1 8C 01 00 00         MOV ESI,dword ptr [ECX + 0x18c]
LAB_004f0ef6:
004F0EF6  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
004F0EF9  8B 10                     MOV EDX,dword ptr [EAX]
004F0EFB  51                        PUSH ECX
004F0EFC  52                        PUSH EDX
004F0EFD  E8 F3 47 F1 FF            CALL 0x004056f5
004F0F02  50                        PUSH EAX
004F0F03  56                        PUSH ESI
004F0F04  E8 97 A4 21 00            CALL 0x0070b3a0
004F0F09  83 C4 10                  ADD ESP,0x10
004F0F0C  EB 06                     JMP 0x004f0f14
LAB_004f0f0e:
004F0F0E  8B 81 7A 02 00 00         MOV EAX,dword ptr [ECX + 0x27a]
LAB_004f0f14:
004F0F14  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004F0F1A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004F0F1D  8D 45 AC                  LEA EAX,[EBP + -0x54]
004F0F20  8D 55 A8                  LEA EDX,[EBP + -0x58]
004F0F23  6A 00                     PUSH 0x0
004F0F25  50                        PUSH EAX
004F0F26  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004F0F29  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F0F2F  E8 BC C8 23 00            CALL 0x0072d7f0
004F0F34  8B F0                     MOV ESI,EAX
004F0F36  83 C4 08                  ADD ESP,0x8
004F0F39  85 F6                     TEST ESI,ESI
004F0F3B  0F 85 82 00 00 00         JNZ 0x004f0fc3
004F0F41  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F0F44  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004F0F47  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004F0F4A  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
004F0F4D  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
004F0F50  51                        PUSH ECX
004F0F51  6A 01                     PUSH 0x1
004F0F53  57                        PUSH EDI
004F0F54  53                        PUSH EBX
004F0F55  52                        PUSH EDX
004F0F56  E8 CE 22 F1 FF            CALL 0x00403229
004F0F5B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F0F5E  83 C4 14                  ADD ESP,0x14
004F0F61  66 83 78 14 03            CMP word ptr [EAX + 0x14],0x3
004F0F66  75 2F                     JNZ 0x004f0f97
004F0F68  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004F0F6B  85 C0                     TEST EAX,EAX
004F0F6D  74 28                     JZ 0x004f0f97
004F0F6F  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
004F0F72  8B 96 90 01 00 00         MOV EDX,dword ptr [ESI + 0x190]
004F0F78  F6 D9                     NEG CL
004F0F7A  1B C9                     SBB ECX,ECX
004F0F7C  83 C1 09                  ADD ECX,0x9
004F0F7F  51                        PUSH ECX
004F0F80  52                        PUSH EDX
004F0F81  E8 1A A4 21 00            CALL 0x0070b3a0
004F0F86  50                        PUSH EAX
004F0F87  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
004F0F8A  6A 06                     PUSH 0x6
004F0F8C  57                        PUSH EDI
004F0F8D  53                        PUSH EBX
004F0F8E  50                        PUSH EAX
004F0F8F  E8 95 22 F1 FF            CALL 0x00403229
004F0F94  83 C4 1C                  ADD ESP,0x1c
LAB_004f0f97:
004F0F97  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
004F0F9A  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
004F0F9D  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
004F0FA0  51                        PUSH ECX
004F0FA1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004F0FA7  52                        PUSH EDX
004F0FA8  6A FF                     PUSH -0x1
004F0FAA  50                        PUSH EAX
004F0FAB  51                        PUSH ECX
004F0FAC  E8 8F 26 1C 00            CALL 0x006b3640
004F0FB1  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004F0FB4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F0FBA  5F                        POP EDI
004F0FBB  5E                        POP ESI
004F0FBC  5B                        POP EBX
004F0FBD  8B E5                     MOV ESP,EBP
004F0FBF  5D                        POP EBP
004F0FC0  C2 04 00                  RET 0x4
LAB_004f0fc3:
004F0FC3  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004F0FC6  68 0C 1A 7C 00            PUSH 0x7c1a0c
004F0FCB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F0FD0  56                        PUSH ESI
004F0FD1  6A 00                     PUSH 0x0
004F0FD3  68 92 00 00 00            PUSH 0x92
004F0FD8  68 84 19 7C 00            PUSH 0x7c1984
004F0FDD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F0FE2  E8 E9 C4 1B 00            CALL 0x006ad4d0
004F0FE7  83 C4 18                  ADD ESP,0x18
004F0FEA  85 C0                     TEST EAX,EAX
004F0FEC  74 01                     JZ 0x004f0fef
004F0FEE  CC                        INT3
LAB_004f0fef:
004F0FEF  68 92 00 00 00            PUSH 0x92
004F0FF4  68 84 19 7C 00            PUSH 0x7c1984
004F0FF9  6A 00                     PUSH 0x0
004F0FFB  56                        PUSH ESI
004F0FFC  E8 3F 4E 1B 00            CALL 0x006a5e40
004F1001  5F                        POP EDI
004F1002  5E                        POP ESI
004F1003  5B                        POP EBX
004F1004  8B E5                     MOV ESP,EBP
004F1006  5D                        POP EBP
004F1007  C2 04 00                  RET 0x4
