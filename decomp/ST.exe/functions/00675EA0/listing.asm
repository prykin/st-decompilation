_AddObjGrpExch:
00675EA0  55                        PUSH EBP
00675EA1  8B EC                     MOV EBP,ESP
00675EA3  83 EC 44                  SUB ESP,0x44
00675EA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00675EAB  56                        PUSH ESI
00675EAC  57                        PUSH EDI
00675EAD  8D 55 C0                  LEA EDX,[EBP + -0x40]
00675EB0  8D 4D BC                  LEA ECX,[EBP + -0x44]
00675EB3  6A 00                     PUSH 0x0
00675EB5  52                        PUSH EDX
00675EB6  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00675EB9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00675EBF  E8 2C 79 0B 00            CALL 0x0072d7f0
00675EC4  8B F0                     MOV ESI,EAX
00675EC6  83 C4 08                  ADD ESP,0x8
00675EC9  85 F6                     TEST ESI,ESI
00675ECB  0F 85 80 00 00 00         JNZ 0x00675f51
00675ED1  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00675ED4  85 FF                     TEST EDI,EDI
00675ED6  74 6A                     JZ 0x00675f42
00675ED8  8B 07                     MOV EAX,dword ptr [EDI]
00675EDA  8B CF                     MOV ECX,EDI
00675EDC  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00675EDF  83 F8 01                  CMP EAX,0x1
00675EE2  7C 0C                     JL 0x00675ef0
00675EE4  83 F8 29                  CMP EAX,0x29
00675EE7  7D 07                     JGE 0x00675ef0
00675EE9  B9 01 00 00 00            MOV ECX,0x1
00675EEE  EB 02                     JMP 0x00675ef2
LAB_00675ef0:
00675EF0  33 C9                     XOR ECX,ECX
LAB_00675ef2:
00675EF2  85 C9                     TEST ECX,ECX
00675EF4  75 17                     JNZ 0x00675f0d
00675EF6  83 F8 32                  CMP EAX,0x32
00675EF9  7C 0C                     JL 0x00675f07
00675EFB  83 F8 74                  CMP EAX,0x74
00675EFE  7D 07                     JGE 0x00675f07
00675F00  B8 01 00 00 00            MOV EAX,0x1
00675F05  EB 02                     JMP 0x00675f09
LAB_00675f07:
00675F07  33 C0                     XOR EAX,EAX
LAB_00675f09:
00675F09  85 C0                     TEST EAX,EAX
00675F0B  74 05                     JZ 0x00675f12
LAB_00675f0d:
00675F0D  B8 01 00 00 00            MOV EAX,0x1
LAB_00675f12:
00675F12  85 C0                     TEST EAX,EAX
00675F14  74 2C                     JZ 0x00675f42
00675F16  6A 01                     PUSH 0x1
00675F18  6A 02                     PUSH 0x2
00675F1A  6A 01                     PUSH 0x1
00675F1C  6A 00                     PUSH 0x0
00675F1E  E8 6D 83 03 00            CALL 0x006ae290
00675F23  83 C7 32                  ADD EDI,0x32
00675F26  8B F0                     MOV ESI,EAX
00675F28  57                        PUSH EDI
00675F29  56                        PUSH ESI
00675F2A  E8 91 82 03 00            CALL 0x006ae1c0
00675F2F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00675F32  56                        PUSH ESI
00675F33  51                        PUSH ECX
00675F34  E8 37 C3 D8 FF            CALL 0x00402270
00675F39  83 C4 08                  ADD ESP,0x8
00675F3C  56                        PUSH ESI
00675F3D  E8 CE 81 03 00            CALL 0x006ae110
LAB_00675f42:
00675F42  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00675F45  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00675F4B  5F                        POP EDI
00675F4C  5E                        POP ESI
00675F4D  8B E5                     MOV ESP,EBP
00675F4F  5D                        POP EBP
00675F50  C3                        RET
LAB_00675f51:
00675F51  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00675F54  68 78 2D 7D 00            PUSH 0x7d2d78
00675F59  68 CC 4C 7A 00            PUSH 0x7a4ccc
00675F5E  56                        PUSH ESI
00675F5F  6A 00                     PUSH 0x0
00675F61  68 01 01 00 00            PUSH 0x101
00675F66  68 58 2D 7D 00            PUSH 0x7d2d58
00675F6B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00675F70  E8 5B 75 03 00            CALL 0x006ad4d0
00675F75  83 C4 18                  ADD ESP,0x18
00675F78  85 C0                     TEST EAX,EAX
00675F7A  74 01                     JZ 0x00675f7d
00675F7C  CC                        INT3
LAB_00675f7d:
00675F7D  68 02 01 00 00            PUSH 0x102
00675F82  68 58 2D 7D 00            PUSH 0x7d2d58
00675F87  6A 00                     PUSH 0x0
00675F89  56                        PUSH ESI
00675F8A  E8 B1 FE 02 00            CALL 0x006a5e40
00675F8F  5F                        POP EDI
00675F90  5E                        POP ESI
00675F91  8B E5                     MOV ESP,EBP
00675F93  5D                        POP EBP
00675F94  C3                        RET
