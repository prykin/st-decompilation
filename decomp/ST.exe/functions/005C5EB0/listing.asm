FUN_005c5eb0:
005C5EB0  55                        PUSH EBP
005C5EB1  8B EC                     MOV EBP,ESP
005C5EB3  51                        PUSH ECX
005C5EB4  53                        PUSH EBX
005C5EB5  56                        PUSH ESI
005C5EB6  8B F1                     MOV ESI,ECX
005C5EB8  33 C0                     XOR EAX,EAX
005C5EBA  57                        PUSH EDI
005C5EBB  BB 07 00 00 00            MOV EBX,0x7
005C5EC0  89 86 63 1C 00 00         MOV dword ptr [ESI + 0x1c63],EAX
005C5EC6  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
005C5ECD  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005C5ED4  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005C5ED7  8D BE 60 1F 00 00         LEA EDI,[ESI + 0x1f60]
LAB_005c5edd:
005C5EDD  8B 07                     MOV EAX,dword ptr [EDI]
005C5EDF  85 C0                     TEST EAX,EAX
005C5EE1  74 0F                     JZ 0x005c5ef2
005C5EE3  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5EE6  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5EE9  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C5EEC  8B 01                     MOV EAX,dword ptr [ECX]
005C5EEE  52                        PUSH EDX
005C5EEF  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005c5ef2:
005C5EF2  83 C7 04                  ADD EDI,0x4
005C5EF5  4B                        DEC EBX
005C5EF6  75 E5                     JNZ 0x005c5edd
005C5EF8  8B 86 5D 21 00 00         MOV EAX,dword ptr [ESI + 0x215d]
005C5EFE  85 C0                     TEST EAX,EAX
005C5F00  74 0F                     JZ 0x005c5f11
005C5F02  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5F05  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5F08  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C5F0B  8B 01                     MOV EAX,dword ptr [ECX]
005C5F0D  52                        PUSH EDX
005C5F0E  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005c5f11:
005C5F11  8D BE 25 21 00 00         LEA EDI,[ESI + 0x2125]
005C5F17  BB 0E 00 00 00            MOV EBX,0xe
LAB_005c5f1c:
005C5F1C  8B 07                     MOV EAX,dword ptr [EDI]
005C5F1E  85 C0                     TEST EAX,EAX
005C5F20  74 0F                     JZ 0x005c5f31
005C5F22  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5F25  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5F28  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C5F2B  8B 01                     MOV EAX,dword ptr [ECX]
005C5F2D  52                        PUSH EDX
005C5F2E  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005c5f31:
005C5F31  83 C7 04                  ADD EDI,0x4
005C5F34  4B                        DEC EBX
005C5F35  75 E5                     JNZ 0x005c5f1c
005C5F37  8D BE 8C 1F 00 00         LEA EDI,[ESI + 0x1f8c]
005C5F3D  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_005c5f44:
005C5F44  BB 08 00 00 00            MOV EBX,0x8
LAB_005c5f49:
005C5F49  8B 07                     MOV EAX,dword ptr [EDI]
005C5F4B  85 C0                     TEST EAX,EAX
005C5F4D  74 0F                     JZ 0x005c5f5e
005C5F4F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5F52  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5F55  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C5F58  8B 01                     MOV EAX,dword ptr [ECX]
005C5F5A  52                        PUSH EDX
005C5F5B  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005c5f5e:
005C5F5E  83 C7 04                  ADD EDI,0x4
005C5F61  4B                        DEC EBX
005C5F62  75 E5                     JNZ 0x005c5f49
005C5F64  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C5F67  48                        DEC EAX
005C5F68  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005C5F6B  75 D7                     JNZ 0x005c5f44
005C5F6D  8B 86 1D 21 00 00         MOV EAX,dword ptr [ESI + 0x211d]
005C5F73  33 FF                     XOR EDI,EDI
005C5F75  3B C7                     CMP EAX,EDI
005C5F77  74 12                     JZ 0x005c5f8b
005C5F79  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5F7C  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5F7F  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
005C5F82  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005C5F85  8B 01                     MOV EAX,dword ptr [ECX]
005C5F87  52                        PUSH EDX
005C5F88  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_005c5f8b:
005C5F8B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C5F90  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005C5F96  3B C7                     CMP EAX,EDI
005C5F98  74 19                     JZ 0x005c5fb3
005C5F9A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C5F9D  89 46 25                  MOV dword ptr [ESI + 0x25],EAX
005C5FA0  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005C5FA7  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
005C5FAA  8B 11                     MOV EDX,dword ptr [ECX]
005C5FAC  83 C6 1D                  ADD ESI,0x1d
005C5FAF  56                        PUSH ESI
005C5FB0  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_005c5fb3:
005C5FB3  5F                        POP EDI
005C5FB4  5E                        POP ESI
005C5FB5  5B                        POP EBX
005C5FB6  8B E5                     MOV ESP,EBP
005C5FB8  5D                        POP EBP
005C5FB9  C3                        RET
