MTestTy::NoneMTest:
005E5E30  55                        PUSH EBP
005E5E31  8B EC                     MOV EBP,ESP
005E5E33  83 EC 48                  SUB ESP,0x48
005E5E36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E5E3B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E5E3E  56                        PUSH ESI
005E5E3F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E5E42  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E5E45  6A 00                     PUSH 0x0
005E5E47  52                        PUSH EDX
005E5E48  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E5E4B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E5E51  E8 9A 79 14 00            CALL 0x0072d7f0
005E5E56  8B F0                     MOV ESI,EAX
005E5E58  83 C4 08                  ADD ESP,0x8
005E5E5B  85 F6                     TEST ESI,ESI
005E5E5D  75 78                     JNZ 0x005e5ed7
005E5E5F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E5E62  8A 86 B3 00 00 00         MOV AL,byte ptr [ESI + 0xb3]
005E5E68  48                        DEC EAX
005E5E69  74 38                     JZ 0x005e5ea3
005E5E6B  83 E8 04                  SUB EAX,0x4
005E5E6E  75 4D                     JNZ 0x005e5ebd
005E5E70  8B 0D 78 17 81 00         MOV ECX,dword ptr [0x00811778]
005E5E76  85 C9                     TEST ECX,ECX
005E5E78  74 43                     JZ 0x005e5ebd
005E5E7A  E8 72 F7 E1 FF            CALL 0x004055f1
005E5E7F  85 C0                     TEST EAX,EAX
005E5E81  75 3A                     JNZ 0x005e5ebd
005E5E83  88 86 B3 00 00 00         MOV byte ptr [ESI + 0xb3],AL
005E5E89  A1 78 17 81 00            MOV EAX,[0x00811778]
005E5E8E  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E5E91  85 C0                     TEST EAX,EAX
005E5E93  7C 28                     JL 0x005e5ebd
005E5E95  50                        PUSH EAX
005E5E96  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E5E9B  50                        PUSH EAX
005E5E9C  E8 4F DC 0C 00            CALL 0x006b3af0
005E5EA1  EB 1A                     JMP 0x005e5ebd
LAB_005e5ea3:
005E5EA3  8B 0D 78 17 81 00         MOV ECX,dword ptr [0x00811778]
005E5EA9  85 C9                     TEST ECX,ECX
005E5EAB  74 10                     JZ 0x005e5ebd
005E5EAD  E8 3F F7 E1 FF            CALL 0x004055f1
005E5EB2  85 C0                     TEST EAX,EAX
005E5EB4  75 07                     JNZ 0x005e5ebd
005E5EB6  C6 86 B3 00 00 00 04      MOV byte ptr [ESI + 0xb3],0x4
LAB_005e5ebd:
005E5EBD  8B 8E A1 00 00 00         MOV ECX,dword ptr [ESI + 0xa1]
005E5EC3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005E5EC6  89 0D 74 17 81 00         MOV dword ptr [0x00811774],ECX
005E5ECC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E5ED2  5E                        POP ESI
005E5ED3  8B E5                     MOV ESP,EBP
005E5ED5  5D                        POP EBP
005E5ED6  C3                        RET
LAB_005e5ed7:
005E5ED7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005E5EDA  68 2C DD 7C 00            PUSH 0x7cdd2c
005E5EDF  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E5EE4  56                        PUSH ESI
005E5EE5  6A 00                     PUSH 0x0
005E5EE7  6A 6C                     PUSH 0x6c
005E5EE9  68 BC DC 7C 00            PUSH 0x7cdcbc
005E5EEE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E5EF3  E8 D8 75 0C 00            CALL 0x006ad4d0
005E5EF8  83 C4 18                  ADD ESP,0x18
005E5EFB  85 C0                     TEST EAX,EAX
005E5EFD  74 01                     JZ 0x005e5f00
005E5EFF  CC                        INT3
LAB_005e5f00:
005E5F00  6A 6C                     PUSH 0x6c
005E5F02  68 BC DC 7C 00            PUSH 0x7cdcbc
005E5F07  6A 00                     PUSH 0x0
005E5F09  56                        PUSH ESI
005E5F0A  E8 31 FF 0B 00            CALL 0x006a5e40
005E5F0F  5E                        POP ESI
005E5F10  8B E5                     MOV ESP,EBP
005E5F12  5D                        POP EBP
005E5F13  C3                        RET
