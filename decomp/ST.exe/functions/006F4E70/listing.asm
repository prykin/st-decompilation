FUN_006f4e70:
006F4E70  55                        PUSH EBP
006F4E71  8B EC                     MOV EBP,ESP
006F4E73  53                        PUSH EBX
006F4E74  56                        PUSH ESI
006F4E75  57                        PUSH EDI
006F4E76  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F4E79  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F4E7C  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F4E7F  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F4E82  C1 E2 10                  SHL EDX,0x10
006F4E85  80 3D 00 70 85 00 00      CMP byte ptr [0x00857000],0x0
006F4E8C  0F 85 A3 00 00 00         JNZ 0x006f4f35
LAB_006f4e92:
006F4E92  33 C9                     XOR ECX,ECX
006F4E94  8A 0E                     MOV CL,byte ptr [ESI]
006F4E96  46                        INC ESI
006F4E97  0B C9                     OR ECX,ECX
006F4E99  0F 84 82 00 00 00         JZ 0x006f4f21
006F4E9F  55                        PUSH EBP
006F4EA0  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_006f4ea3:
006F4EA3  F6 C1 80                  TEST CL,0x80
006F4EA6  75 13                     JNZ 0x006f4ebb
LAB_006f4ea8:
006F4EA8  03 F9                     ADD EDI,ECX
006F4EAA  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006F4EAD  2B E9                     SUB EBP,ECX
006F4EAF  7E 5E                     JLE 0x006f4f0f
006F4EB1  33 C9                     XOR ECX,ECX
006F4EB3  8A 0E                     MOV CL,byte ptr [ESI]
006F4EB5  46                        INC ESI
006F4EB6  F6 C1 80                  TEST CL,0x80
006F4EB9  74 ED                     JZ 0x006f4ea8
LAB_006f4ebb:
006F4EBB  F6 C1 40                  TEST CL,0x40
006F4EBE  74 21                     JZ 0x006f4ee1
006F4EC0  83 E1 3F                  AND ECX,0x3f
006F4EC3  AC                        LODSB ESI
006F4EC4  2B E9                     SUB EBP,ECX
LAB_006f4ec6:
006F4EC6  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F4EC9  77 0A                     JA 0x006f4ed5
006F4ECB  88 07                     MOV byte ptr [EDI],AL
006F4ECD  43                        INC EBX
006F4ECE  47                        INC EDI
006F4ECF  43                        INC EBX
006F4ED0  49                        DEC ECX
006F4ED1  7F F3                     JG 0x006f4ec6
006F4ED3  EB 2F                     JMP 0x006f4f04
LAB_006f4ed5:
006F4ED5  C6 05 00 70 85 00 01      MOV byte ptr [0x00857000],0x1
006F4EDC  E9 97 00 00 00            JMP 0x006f4f78
LAB_006f4ee1:
006F4EE1  83 E1 3F                  AND ECX,0x3f
006F4EE4  2B E9                     SUB EBP,ECX
LAB_006f4ee6:
006F4EE6  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F4EE9  77 0D                     JA 0x006f4ef8
006F4EEB  8A 06                     MOV AL,byte ptr [ESI]
006F4EED  43                        INC EBX
006F4EEE  88 07                     MOV byte ptr [EDI],AL
006F4EF0  43                        INC EBX
006F4EF1  46                        INC ESI
006F4EF2  47                        INC EDI
006F4EF3  49                        DEC ECX
006F4EF4  7F F0                     JG 0x006f4ee6
006F4EF6  EB 0C                     JMP 0x006f4f04
LAB_006f4ef8:
006F4EF8  C6 05 00 70 85 00 01      MOV byte ptr [0x00857000],0x1
006F4EFF  E9 99 00 00 00            JMP 0x006f4f9d
LAB_006f4f04:
006F4F04  0B ED                     OR EBP,EBP
006F4F06  7E 07                     JLE 0x006f4f0f
006F4F08  33 C9                     XOR ECX,ECX
006F4F0A  8A 0E                     MOV CL,byte ptr [ESI]
006F4F0C  46                        INC ESI
006F4F0D  EB 94                     JMP 0x006f4ea3
LAB_006f4f0f:
006F4F0F  5D                        POP EBP
006F4F10  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F4F13  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006F4F16  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F4F19  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F4F1C  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F4F1F  EB 06                     JMP 0x006f4f27
LAB_006f4f21:
006F4F21  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F4F24  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
LAB_006f4f27:
006F4F27  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006F4F2A  0F 8F 62 FF FF FF         JG 0x006f4e92
006F4F30  E9 A2 00 00 00            JMP 0x006f4fd7
LAB_006f4f35:
006F4F35  33 C9                     XOR ECX,ECX
006F4F37  8A 0E                     MOV CL,byte ptr [ESI]
006F4F39  46                        INC ESI
006F4F3A  0B C9                     OR ECX,ECX
006F4F3C  0F 84 86 00 00 00         JZ 0x006f4fc8
006F4F42  55                        PUSH EBP
006F4F43  8B 6D 20                  MOV EBP,dword ptr [EBP + 0x20]
LAB_006f4f46:
006F4F46  F6 C1 80                  TEST CL,0x80
006F4F49  75 13                     JNZ 0x006f4f5e
LAB_006f4f4b:
006F4F4B  03 F9                     ADD EDI,ECX
006F4F4D  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006F4F50  2B E9                     SUB EBP,ECX
006F4F52  7E 62                     JLE 0x006f4fb6
006F4F54  33 C9                     XOR ECX,ECX
006F4F56  8A 0E                     MOV CL,byte ptr [ESI]
006F4F58  46                        INC ESI
006F4F59  F6 C1 80                  TEST CL,0x80
006F4F5C  74 ED                     JZ 0x006f4f4b
LAB_006f4f5e:
006F4F5E  F6 C1 40                  TEST CL,0x40
006F4F61  74 23                     JZ 0x006f4f86
006F4F63  83 E1 3F                  AND ECX,0x3f
006F4F66  AC                        LODSB ESI
006F4F67  2B E9                     SUB EBP,ECX
LAB_006f4f69:
006F4F69  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F4F6C  77 0A                     JA 0x006f4f78
LAB_006f4f6e:
006F4F6E  88 07                     MOV byte ptr [EDI],AL
006F4F70  43                        INC EBX
006F4F71  47                        INC EDI
006F4F72  43                        INC EBX
006F4F73  49                        DEC ECX
006F4F74  7F F3                     JG 0x006f4f69
006F4F76  EB 33                     JMP 0x006f4fab
FUN_006f4e70::cf_continue_loop_006F4F78:
006F4F78  83 C3 02                  ADD EBX,0x2
006F4F7B  47                        INC EDI
006F4F7C  49                        DEC ECX
006F4F7D  7E 2C                     JLE 0x006f4fab
006F4F7F  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F4F82  77 F4                     JA 0x006f4f78
006F4F84  EB E8                     JMP 0x006f4f6e
LAB_006f4f86:
006F4F86  83 E1 3F                  AND ECX,0x3f
006F4F89  2B E9                     SUB EBP,ECX
LAB_006f4f8b:
006F4F8B  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F4F8E  77 0D                     JA 0x006f4f9d
LAB_006f4f90:
006F4F90  8A 06                     MOV AL,byte ptr [ESI]
006F4F92  43                        INC EBX
006F4F93  88 07                     MOV byte ptr [EDI],AL
006F4F95  43                        INC EBX
006F4F96  46                        INC ESI
006F4F97  47                        INC EDI
006F4F98  49                        DEC ECX
006F4F99  7F F0                     JG 0x006f4f8b
006F4F9B  EB 0E                     JMP 0x006f4fab
LAB_006f4f9d:
006F4F9D  43                        INC EBX
006F4F9E  46                        INC ESI
006F4F9F  43                        INC EBX
006F4FA0  47                        INC EDI
006F4FA1  49                        DEC ECX
006F4FA2  7E 07                     JLE 0x006f4fab
006F4FA4  3B 53 FE                  CMP EDX,dword ptr [EBX + -0x2]
006F4FA7  77 F4                     JA 0x006f4f9d
006F4FA9  EB E5                     JMP 0x006f4f90
LAB_006f4fab:
006F4FAB  0B ED                     OR EBP,EBP
006F4FAD  7E 07                     JLE 0x006f4fb6
006F4FAF  33 C9                     XOR ECX,ECX
006F4FB1  8A 0E                     MOV CL,byte ptr [ESI]
006F4FB3  46                        INC ESI
006F4FB4  EB 90                     JMP 0x006f4f46
LAB_006f4fb6:
006F4FB6  5D                        POP EBP
006F4FB7  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F4FBA  2B 7D 20                  SUB EDI,dword ptr [EBP + 0x20]
006F4FBD  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F4FC0  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F4FC3  2B 5D 20                  SUB EBX,dword ptr [EBP + 0x20]
006F4FC6  EB 06                     JMP 0x006f4fce
LAB_006f4fc8:
006F4FC8  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F4FCB  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
LAB_006f4fce:
006F4FCE  FF 4D 24                  DEC dword ptr [EBP + 0x24]
006F4FD1  0F 8F 5E FF FF FF         JG 0x006f4f35
LAB_006f4fd7:
006F4FD7  5F                        POP EDI
006F4FD8  5E                        POP ESI
006F4FD9  5B                        POP EBX
006F4FDA  5D                        POP EBP
006F4FDB  C2 20 00                  RET 0x20
