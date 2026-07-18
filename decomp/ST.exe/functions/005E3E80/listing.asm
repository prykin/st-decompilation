FUN_005e3e80:
005E3E80  55                        PUSH EBP
005E3E81  8B EC                     MOV EBP,ESP
005E3E83  83 EC 58                  SUB ESP,0x58
005E3E86  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005E3E89  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005E3E8C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005E3E8F  53                        PUSH EBX
005E3E90  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005E3E93  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005E3E96  56                        PUSH ESI
005E3E97  57                        PUSH EDI
005E3E98  33 FF                     XOR EDI,EDI
005E3E9A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005E3E9D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005E3EA0  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005E3EA6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005E3EA9  8D 45 AC                  LEA EAX,[EBP + -0x54]
005E3EAC  8D 55 A8                  LEA EDX,[EBP + -0x58]
005E3EAF  57                        PUSH EDI
005E3EB0  50                        PUSH EAX
005E3EB1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005E3EB4  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
005E3EB7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E3EBD  E8 2E 99 14 00            CALL 0x0072d7f0
005E3EC2  8B F0                     MOV ESI,EAX
005E3EC4  83 C4 08                  ADD ESP,0x8
005E3EC7  3B F7                     CMP ESI,EDI
005E3EC9  0F 85 A5 01 00 00         JNZ 0x005e4074
005E3ECF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005E3ED2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
005E3ED5  3B DF                     CMP EBX,EDI
005E3ED7  74 09                     JZ 0x005e3ee2
005E3ED9  80 3B 00                  CMP byte ptr [EBX],0x0
005E3EDC  74 04                     JZ 0x005e3ee2
005E3EDE  3B F7                     CMP ESI,EDI
005E3EE0  75 18                     JNZ 0x005e3efa
LAB_005e3ee2:
005E3EE2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
005E3EE8  68 6C 04 00 00            PUSH 0x46c
005E3EED  68 94 D9 7C 00            PUSH 0x7cd994
005E3EF2  51                        PUSH ECX
005E3EF3  6A CC                     PUSH -0x34
005E3EF5  E8 46 1F 0C 00            CALL 0x006a5e40
LAB_005e3efa:
005E3EFA  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005E3EFD  3B C7                     CMP EAX,EDI
005E3EFF  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005E3F02  7D 06                     JGE 0x005e3f0a
005E3F04  8D 50 01                  LEA EDX,[EAX + 0x1]
005E3F07  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
LAB_005e3f0a:
005E3F0A  39 7D 28                  CMP dword ptr [EBP + 0x28],EDI
005E3F0D  7D 0D                     JGE 0x005e3f1c
005E3F0F  3B C7                     CMP EAX,EDI
005E3F11  7E 06                     JLE 0x005e3f19
005E3F13  48                        DEC EAX
005E3F14  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
005E3F17  EB 03                     JMP 0x005e3f1c
LAB_005e3f19:
005E3F19  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
LAB_005e3f1c:
005E3F1C  53                        PUSH EBX
005E3F1D  8B CE                     MOV ECX,ESI
005E3F1F  E8 4C D4 12 00            CALL 0x00711370
005E3F24  53                        PUSH EBX
005E3F25  8B CE                     MOV ECX,ESI
005E3F27  8B F8                     MOV EDI,EAX
005E3F29  E8 B2 D4 12 00            CALL 0x007113e0
005E3F2E  8B D0                     MOV EDX,EAX
005E3F30  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005E3F33  85 C0                     TEST EAX,EAX
005E3F35  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005E3F38  7E 07                     JLE 0x005e3f41
005E3F3A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005E3F3D  85 C9                     TEST ECX,ECX
005E3F3F  7F 25                     JG 0x005e3f66
LAB_005e3f41:
005E3F41  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005E3F44  33 DB                     XOR EBX,EBX
005E3F46  85 C9                     TEST ECX,ECX
005E3F48  0F 9E C3                  SETLE BL
005E3F4B  4B                        DEC EBX
005E3F4C  23 D9                     AND EBX,ECX
005E3F4E  33 C9                     XOR ECX,ECX
005E3F50  03 DF                     ADD EBX,EDI
005E3F52  85 C0                     TEST EAX,EAX
005E3F54  0F 9E C1                  SETLE CL
005E3F57  49                        DEC ECX
005E3F58  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
005E3F5B  23 C8                     AND ECX,EAX
005E3F5D  03 CA                     ADD ECX,EDX
005E3F5F  8B F9                     MOV EDI,ECX
005E3F61  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005E3F64  EB 03                     JMP 0x005e3f69
LAB_005e3f66:
005E3F66  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_005e3f69:
005E3F69  85 C0                     TEST EAX,EAX
005E3F6B  7D 10                     JGE 0x005e3f7d
005E3F6D  8B C7                     MOV EAX,EDI
005E3F6F  2B C2                     SUB EAX,EDX
005E3F71  99                        CDQ
005E3F72  2B C2                     SUB EAX,EDX
005E3F74  8B D8                     MOV EBX,EAX
005E3F76  D1 FB                     SAR EBX,0x1
005E3F78  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005E3F7B  EB 03                     JMP 0x005e3f80
LAB_005e3f7d:
005E3F7D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_005e3f80:
005E3F80  85 DB                     TEST EBX,EBX
005E3F82  7D 05                     JGE 0x005e3f89
005E3F84  33 DB                     XOR EBX,EBX
005E3F86  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_005e3f89:
005E3F89  6A 3D                     PUSH 0x3d
005E3F8B  E8 80 6C 0C 00            CALL 0x006aac10
005E3F90  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E3F93  66 C7 40 23 03 00         MOV word ptr [EAX + 0x23],0x3
005E3F99  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E3F9C  66 8B 45 EC               MOV AX,word ptr [EBP + -0x14]
005E3FA0  6A 01                     PUSH 0x1
005E3FA2  66 89 42 29               MOV word ptr [EDX + 0x29],AX
005E3FA6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E3FA9  66 89 79 2B               MOV word ptr [ECX + 0x2b],DI
005E3FAD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E3FB0  8B CE                     MOV ECX,ESI
005E3FB2  0F BF 50 2B               MOVSX EDX,word ptr [EAX + 0x2b]
005E3FB6  0F BF 40 29               MOVSX EAX,word ptr [EAX + 0x29]
005E3FBA  52                        PUSH EDX
005E3FBB  50                        PUSH EAX
005E3FBC  6A 00                     PUSH 0x0
005E3FBE  6A 00                     PUSH 0x0
005E3FC0  6A 00                     PUSH 0x0
005E3FC2  6A 00                     PUSH 0x0
005E3FC4  E8 D7 CB 12 00            CALL 0x00710ba0
005E3FC9  6A 00                     PUSH 0x0
005E3FCB  6A 00                     PUSH 0x0
005E3FCD  6A 00                     PUSH 0x0
005E3FCF  8B F8                     MOV EDI,EAX
005E3FD1  6A 00                     PUSH 0x0
005E3FD3  6A 00                     PUSH 0x0
005E3FD5  57                        PUSH EDI
005E3FD6  8B CE                     MOV ECX,ESI
005E3FD8  E8 B3 CA 12 00            CALL 0x00710a90
005E3FDD  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005E3FE0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005E3FE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005E3FE6  6A FF                     PUSH -0x1
005E3FE8  6A FF                     PUSH -0x1
005E3FEA  51                        PUSH ECX
005E3FEB  53                        PUSH EBX
005E3FEC  52                        PUSH EDX
005E3FED  50                        PUSH EAX
005E3FEE  8B CE                     MOV ECX,ESI
005E3FF0  E8 7B DB 12 00            CALL 0x00711b70
005E3FF5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E3FF8  6A 00                     PUSH 0x0
005E3FFA  6A 00                     PUSH 0x0
005E3FFC  83 C1 2D                  ADD ECX,0x2d
005E3FFF  57                        PUSH EDI
005E4000  51                        PUSH ECX
005E4001  E8 1A 0B 0D 00            CALL 0x006b4b20
005E4006  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005E4009  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005E400C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005E400F  6A FF                     PUSH -0x1
005E4011  6A FF                     PUSH -0x1
005E4013  52                        PUSH EDX
005E4014  53                        PUSH EBX
005E4015  50                        PUSH EAX
005E4016  51                        PUSH ECX
005E4017  8B CE                     MOV ECX,ESI
005E4019  E8 52 DB 12 00            CALL 0x00711b70
005E401E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E4021  6A 00                     PUSH 0x0
005E4023  6A 00                     PUSH 0x0
005E4025  83 C2 31                  ADD EDX,0x31
005E4028  57                        PUSH EDI
005E4029  52                        PUSH EDX
005E402A  E8 F1 0A 0D 00            CALL 0x006b4b20
005E402F  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
005E4032  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005E4035  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005E4038  6A FF                     PUSH -0x1
005E403A  6A FF                     PUSH -0x1
005E403C  50                        PUSH EAX
005E403D  53                        PUSH EBX
005E403E  51                        PUSH ECX
005E403F  52                        PUSH EDX
005E4040  8B CE                     MOV ECX,ESI
005E4042  E8 29 DB 12 00            CALL 0x00711b70
005E4047  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E404A  6A 00                     PUSH 0x0
005E404C  6A 00                     PUSH 0x0
005E404E  57                        PUSH EDI
005E404F  83 C0 35                  ADD EAX,0x35
005E4052  50                        PUSH EAX
005E4053  E8 C8 0A 0D 00            CALL 0x006b4b20
005E4058  8B CE                     MOV ECX,ESI
005E405A  E8 A1 CE 12 00            CALL 0x00710f00
005E405F  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
005E4062  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E4065  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E406B  5F                        POP EDI
005E406C  5E                        POP ESI
005E406D  5B                        POP EBX
005E406E  8B E5                     MOV ESP,EBP
005E4070  5D                        POP EBP
005E4071  C2 24 00                  RET 0x24
LAB_005e4074:
005E4074  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
005E4077  68 58 DC 7C 00            PUSH 0x7cdc58
005E407C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E4081  56                        PUSH ESI
005E4082  57                        PUSH EDI
005E4083  68 85 04 00 00            PUSH 0x485
005E4088  68 94 D9 7C 00            PUSH 0x7cd994
005E408D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E4093  E8 38 94 0C 00            CALL 0x006ad4d0
005E4098  83 C4 18                  ADD ESP,0x18
005E409B  85 C0                     TEST EAX,EAX
005E409D  74 01                     JZ 0x005e40a0
005E409F  CC                        INT3
LAB_005e40a0:
005E40A0  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005E40A3  3B CF                     CMP ECX,EDI
005E40A5  74 05                     JZ 0x005e40ac
005E40A7  E8 54 CE 12 00            CALL 0x00710f00
LAB_005e40ac:
005E40AC  8D 45 FC                  LEA EAX,[EBP + -0x4]
005E40AF  50                        PUSH EAX
005E40B0  E8 7B 1D 14 00            CALL 0x00725e30
005E40B5  83 C4 04                  ADD ESP,0x4
005E40B8  68 88 04 00 00            PUSH 0x488
005E40BD  68 94 D9 7C 00            PUSH 0x7cd994
005E40C2  57                        PUSH EDI
005E40C3  56                        PUSH ESI
005E40C4  E8 77 1D 0C 00            CALL 0x006a5e40
005E40C9  5F                        POP EDI
005E40CA  5E                        POP ESI
005E40CB  33 C0                     XOR EAX,EAX
005E40CD  5B                        POP EBX
005E40CE  8B E5                     MOV ESP,EBP
005E40D0  5D                        POP EBP
005E40D1  C2 24 00                  RET 0x24
