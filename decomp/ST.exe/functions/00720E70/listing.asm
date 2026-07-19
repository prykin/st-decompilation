FUN_00720e70:
00720E70  55                        PUSH EBP
00720E71  8B EC                     MOV EBP,ESP
00720E73  83 EC 0C                  SUB ESP,0xc
00720E76  56                        PUSH ESI
00720E77  8B F1                     MOV ESI,ECX
00720E79  33 C9                     XOR ECX,ECX
00720E7B  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00720E81  3B C1                     CMP EAX,ECX
00720E83  0F 84 E1 01 00 00         JZ 0x0072106a
00720E89  39 48 08                  CMP dword ptr [EAX + 0x8],ECX
00720E8C  0F 84 D8 01 00 00         JZ 0x0072106a
00720E92  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00720E95  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00720E98  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00720E9B  8B 8E 44 01 00 00         MOV ECX,dword ptr [ESI + 0x144]
00720EA1  53                        PUSH EBX
00720EA2  C7 86 08 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x208],0xffffffff
00720EAC  57                        PUSH EDI
00720EAD  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
LAB_00720eb0:
00720EB0  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
00720EB6  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00720EB9  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00720EBC  3B CA                     CMP ECX,EDX
00720EBE  7D 7B                     JGE 0x00720f3b
00720EC0  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00720EC3  41                        INC ECX
00720EC4  8B 5C 8A FC               MOV EBX,dword ptr [EDX + ECX*0x4 + -0x4]
00720EC8  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00720ECB  85 DB                     TEST EBX,EBX
00720ECD  74 7F                     JZ 0x00720f4e
00720ECF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00720ED2  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00720ED5  3B C1                     CMP EAX,ECX
00720ED7  7D 75                     JGE 0x00720f4e
00720ED9  8B FB                     MOV EDI,EBX
00720EDB  83 C9 FF                  OR ECX,0xffffffff
00720EDE  33 C0                     XOR EAX,EAX
00720EE0  F2 AE                     SCASB.REPNE ES:EDI
00720EE2  F7 D1                     NOT ECX
00720EE4  49                        DEC ECX
00720EE5  75 09                     JNZ 0x00720ef0
00720EE7  8B 0D FC 0A 7F 00         MOV ECX,dword ptr [0x007f0afc]
00720EED  51                        PUSH ECX
00720EEE  EB 10                     JMP 0x00720f00
LAB_00720ef0:
00720EF0  F6 46 20 20               TEST byte ptr [ESI + 0x20],0x20
00720EF4  74 09                     JZ 0x00720eff
00720EF6  8B 15 00 0B 7F 00         MOV EDX,dword ptr [0x007f0b00]
00720EFC  52                        PUSH EDX
00720EFD  EB 01                     JMP 0x00720f00
LAB_00720eff:
00720EFF  53                        PUSH EBX
LAB_00720f00:
00720F00  8B 8E 14 02 00 00         MOV ECX,dword ptr [ESI + 0x214]
00720F06  E8 B5 02 FF FF            CALL 0x007111c0
00720F0B  8B 8E 14 02 00 00         MOV ECX,dword ptr [ESI + 0x214]
00720F11  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00720F14  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00720F17  03 C2                     ADD EAX,EDX
00720F19  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00720F1C  3B D1                     CMP EDX,ECX
00720F1E  7C 07                     JL 0x00720f27
00720F20  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
00720F23  3B D7                     CMP EDX,EDI
00720F25  7C 18                     JL 0x00720f3f
LAB_00720f27:
00720F27  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00720F2A  03 C8                     ADD ECX,EAX
00720F2C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00720F2F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00720F32  40                        INC EAX
00720F33  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00720F36  E9 75 FF FF FF            JMP 0x00720eb0
LAB_00720f3b:
00720F3B  33 DB                     XOR EBX,EBX
00720F3D  EB 0F                     JMP 0x00720f4e
LAB_00720f3f:
00720F3F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00720F42  89 8E 08 02 00 00         MOV dword ptr [ESI + 0x208],ECX
00720F48  89 96 0C 02 00 00         MOV dword ptr [ESI + 0x20c],EDX
FUN_00720e70::cf_break_loop_00720F4E:
00720F4E  8B 86 08 02 00 00         MOV EAX,dword ptr [ESI + 0x208]
00720F54  85 C0                     TEST EAX,EAX
00720F56  7D 39                     JGE 0x00720f91
00720F58  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00720F5B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00720F5E  89 96 08 02 00 00         MOV dword ptr [ESI + 0x208],EDX
00720F64  8D 48 FF                  LEA ECX,[EAX + -0x1]
00720F67  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00720F6A  48                        DEC EAX
00720F6B  89 8E 0C 02 00 00         MOV dword ptr [ESI + 0x20c],ECX
00720F71  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00720F74  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
00720F7A  03 C1                     ADD EAX,ECX
00720F7C  8B 8E 38 01 00 00         MOV ECX,dword ptr [ESI + 0x138]
00720F82  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
00720F85  7D 08                     JGE 0x00720f8f
00720F87  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00720F8A  8B 1C 81                  MOV EBX,dword ptr [ECX + EAX*0x4]
00720F8D  EB 02                     JMP 0x00720f91
LAB_00720f8f:
00720F8F  33 DB                     XOR EBX,EBX
LAB_00720f91:
00720F91  83 C9 FF                  OR ECX,0xffffffff
00720F94  8B FB                     MOV EDI,EBX
00720F96  33 C0                     XOR EAX,EAX
00720F98  89 8E 04 02 00 00         MOV dword ptr [ESI + 0x204],ECX
00720F9E  F2 AE                     SCASB.REPNE ES:EDI
00720FA0  F7 D1                     NOT ECX
00720FA2  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00720FA5  8B 86 48 01 00 00         MOV EAX,dword ptr [ESI + 0x148]
00720FAB  49                        DEC ECX
00720FAC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00720FAF  3B C1                     CMP EAX,ECX
00720FB1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00720FB4  0F 8D 92 00 00 00         JGE 0x0072104c
00720FBA  03 D8                     ADD EBX,EAX
LAB_00720fbc:
00720FBC  F6 46 20 20               TEST byte ptr [ESI + 0x20],0x20
00720FC0  74 28                     JZ 0x00720fea
00720FC2  A1 00 0B 7F 00            MOV EAX,[0x007f0b00]
00720FC7  8B BE 14 02 00 00         MOV EDI,dword ptr [ESI + 0x214]
00720FCD  50                        PUSH EAX
00720FCE  8B CF                     MOV ECX,EDI
00720FD0  E8 DB FF FE FF            CALL 0x00710fb0
00720FD5  25 FF FF 00 00            AND EAX,0xffff
00720FDA  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00720FDD  8B 87 9A 00 00 00         MOV EAX,dword ptr [EDI + 0x9a]
00720FE3  0F BF 4C 50 6A            MOVSX ECX,word ptr [EAX + EDX*0x2 + 0x6a]
00720FE8  EB 21                     JMP 0x0072100b
LAB_00720fea:
00720FEA  8B BE 14 02 00 00         MOV EDI,dword ptr [ESI + 0x214]
00720FF0  53                        PUSH EBX
00720FF1  8B CF                     MOV ECX,EDI
00720FF3  E8 B8 FF FE FF            CALL 0x00710fb0
00720FF8  8B 8F 9A 00 00 00         MOV ECX,dword ptr [EDI + 0x9a]
00720FFE  25 FF FF 00 00            AND EAX,0xffff
00721003  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00721006  0F BF 4C 41 6A            MOVSX ECX,word ptr [ECX + EAX*0x2 + 0x6a]
LAB_0072100b:
0072100B  8B 96 14 02 00 00         MOV EDX,dword ptr [ESI + 0x214]
00721011  8B 42 58                  MOV EAX,dword ptr [EDX + 0x58]
00721014  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00721017  03 C1                     ADD EAX,ECX
00721019  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072101C  3B D1                     CMP EDX,ECX
0072101E  7C 07                     JL 0x00721027
00721020  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
00721023  3B D7                     CMP EDX,EDI
00721025  7C 16                     JL 0x0072103d
LAB_00721027:
00721027  03 C8                     ADD ECX,EAX
00721029  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072102C  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0072102F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00721032  40                        INC EAX
00721033  43                        INC EBX
00721034  3B C1                     CMP EAX,ECX
00721036  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00721039  7C 81                     JL 0x00720fbc
0072103B  EB 0F                     JMP 0x0072104c
LAB_0072103d:
0072103D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00721040  89 8E 04 02 00 00         MOV dword ptr [ESI + 0x204],ECX
00721046  89 86 10 02 00 00         MOV dword ptr [ESI + 0x210],EAX
LAB_0072104c:
0072104C  8B 86 04 02 00 00         MOV EAX,dword ptr [ESI + 0x204]
00721052  5F                        POP EDI
00721053  85 C0                     TEST EAX,EAX
00721055  5B                        POP EBX
00721056  7D 12                     JGE 0x0072106a
00721058  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072105B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072105E  89 8E 10 02 00 00         MOV dword ptr [ESI + 0x210],ECX
00721064  89 96 04 02 00 00         MOV dword ptr [ESI + 0x204],EDX
LAB_0072106a:
0072106A  5E                        POP ESI
0072106B  8B E5                     MOV ESP,EBP
0072106D  5D                        POP EBP
0072106E  C2 08 00                  RET 0x8
