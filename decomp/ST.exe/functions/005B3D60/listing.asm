FUN_005b3d60:
005B3D60  55                        PUSH EBP
005B3D61  8B EC                     MOV EBP,ESP
005B3D63  81 EC 48 02 00 00         SUB ESP,0x248
005B3D69  53                        PUSH EBX
005B3D6A  56                        PUSH ESI
005B3D6B  57                        PUSH EDI
005B3D6C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005B3D6F  8D 91 7C 01 00 00         LEA EDX,[ECX + 0x17c]
005B3D75  BE 0D 00 00 00            MOV ESI,0xd
LAB_005b3d7a:
005B3D7A  C7 82 40 FF FF FF 00 00 00 00  MOV dword ptr [EDX + 0xffffff40],0x0
005B3D84  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
005B3D8A  8D BA 45 FF FF FF         LEA EDI,[EDX + 0xffffff45]
005B3D90  B9 08 00 00 00            MOV ECX,0x8
005B3D95  33 C0                     XOR EAX,EAX
005B3D97  81 C2 FB 01 00 00         ADD EDX,0x1fb
005B3D9D  4E                        DEC ESI
005B3D9E  F3 AB                     STOSD.REP ES:EDI
005B3DA0  75 D8                     JNZ 0x005b3d7a
005B3DA2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B3DA7  8D 55 B8                  LEA EDX,[EBP + -0x48]
005B3DAA  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005B3DAD  6A 00                     PUSH 0x0
005B3DAF  52                        PUSH EDX
005B3DB0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005B3DB3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B3DB9  E8 32 9A 17 00            CALL 0x0072d7f0
005B3DBE  8B F0                     MOV ESI,EAX
005B3DC0  83 C4 08                  ADD ESP,0x8
005B3DC3  85 F6                     TEST ESI,ESI
005B3DC5  0F 85 AA 07 00 00         JNZ 0x005b4575
005B3DCB  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005B3DCE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B3DD1  88 86 E3 1E 00 00         MOV byte ptr [ESI + 0x1ee3],AL
005B3DD7  25 FF 00 00 00            AND EAX,0xff
005B3DDC  83 E8 00                  SUB EAX,0x0
005B3DDF  0F 84 FE 02 00 00         JZ 0x005b40e3
005B3DE5  48                        DEC EAX
005B3DE6  0F 85 C9 05 00 00         JNZ 0x005b43b5
005B3DEC  6A FF                     PUSH -0x1
005B3DEE  6A 07                     PUSH 0x7
005B3DF0  6A FF                     PUSH -0x1
005B3DF2  6A FF                     PUSH -0x1
005B3DF4  6A 01                     PUSH 0x1
005B3DF6  C6 86 9A 00 00 00 05      MOV byte ptr [ESI + 0x9a],0x5
005B3DFD  6A FF                     PUSH -0x1
005B3DFF  C7 86 BC 00 00 00 3C 23 00 00  MOV dword ptr [ESI + 0xbc],0x233c
005B3E09  A1 18 76 80 00            MOV EAX,[0x00807618]
005B3E0E  8B 9E 74 01 00 00         MOV EBX,dword ptr [ESI + 0x174]
005B3E14  6A FE                     PUSH -0x2
005B3E16  6A 28                     PUSH 0x28
005B3E18  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005B3E1E  68 8C 00 00 00            PUSH 0x8c
005B3E23  50                        PUSH EAX
005B3E24  68 3C 23 00 00            PUSH 0x233c
005B3E29  E8 12 C3 0F 00            CALL 0x006b0140
005B3E2E  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B3E34  50                        PUSH EAX
005B3E35  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B3E38  E8 43 F6 15 00            CALL 0x00713480
005B3E3D  50                        PUSH EAX
005B3E3E  8B CF                     MOV ECX,EDI
005B3E40  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B3E43  6A FF                     PUSH -0x1
005B3E45  6A 07                     PUSH 0x7
005B3E47  6A FF                     PUSH -0x1
005B3E49  6A FF                     PUSH -0x1
005B3E4B  6A 01                     PUSH 0x1
005B3E4D  6A FF                     PUSH -0x1
005B3E4F  C7 86 B7 02 00 00 3D 23 00 00  MOV dword ptr [ESI + 0x2b7],0x233d
005B3E59  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B3E5F  8B 9E 6F 03 00 00         MOV EBX,dword ptr [ESI + 0x36f]
005B3E65  6A FE                     PUSH -0x2
005B3E67  6A 28                     PUSH 0x28
005B3E69  8D BE 6F 03 00 00         LEA EDI,[ESI + 0x36f]
005B3E6F  68 8C 00 00 00            PUSH 0x8c
005B3E74  52                        PUSH EDX
005B3E75  68 3D 23 00 00            PUSH 0x233d
005B3E7A  E8 C1 C2 0F 00            CALL 0x006b0140
005B3E7F  50                        PUSH EAX
005B3E80  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B3E85  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005B3E88  E8 F3 F5 15 00            CALL 0x00713480
005B3E8D  50                        PUSH EAX
005B3E8E  8B CF                     MOV ECX,EDI
005B3E90  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B3E93  6A FF                     PUSH -0x1
005B3E95  6A 07                     PUSH 0x7
005B3E97  6A FF                     PUSH -0x1
005B3E99  8B 9E 6A 05 00 00         MOV EBX,dword ptr [ESI + 0x56a]
005B3E9F  6A FF                     PUSH -0x1
005B3EA1  6A 01                     PUSH 0x1
005B3EA3  6A FF                     PUSH -0x1
005B3EA5  C7 86 B2 04 00 00 3E 23 00 00  MOV dword ptr [ESI + 0x4b2],0x233e
005B3EAF  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B3EB5  6A FE                     PUSH -0x2
005B3EB7  6A 28                     PUSH 0x28
005B3EB9  8D BE 6A 05 00 00         LEA EDI,[ESI + 0x56a]
005B3EBF  68 8C 00 00 00            PUSH 0x8c
005B3EC4  51                        PUSH ECX
005B3EC5  68 3E 23 00 00            PUSH 0x233e
005B3ECA  E8 71 C2 0F 00            CALL 0x006b0140
005B3ECF  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B3ED5  50                        PUSH EAX
005B3ED6  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005B3ED9  E8 A2 F5 15 00            CALL 0x00713480
005B3EDE  50                        PUSH EAX
005B3EDF  8B CF                     MOV ECX,EDI
005B3EE1  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B3EE4  8B 9E 65 07 00 00         MOV EBX,dword ptr [ESI + 0x765]
005B3EEA  6A FF                     PUSH -0x1
005B3EEC  6A 07                     PUSH 0x7
005B3EEE  6A FF                     PUSH -0x1
005B3EF0  6A FF                     PUSH -0x1
005B3EF2  8D BE 65 07 00 00         LEA EDI,[ESI + 0x765]
005B3EF8  6A 01                     PUSH 0x1
005B3EFA  6A FF                     PUSH -0x1
005B3EFC  6A FE                     PUSH -0x2
005B3EFE  C7 86 AD 06 00 00 3F 23 00 00  MOV dword ptr [ESI + 0x6ad],0x233f
005B3F08  6A 28                     PUSH 0x28
005B3F0A  A1 18 76 80 00            MOV EAX,[0x00807618]
005B3F0F  68 8C 00 00 00            PUSH 0x8c
005B3F14  50                        PUSH EAX
005B3F15  68 3F 23 00 00            PUSH 0x233f
005B3F1A  E8 21 C2 0F 00            CALL 0x006b0140
005B3F1F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B3F25  50                        PUSH EAX
005B3F26  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B3F29  E8 52 F5 15 00            CALL 0x00713480
005B3F2E  50                        PUSH EAX
005B3F2F  8B CF                     MOV ECX,EDI
005B3F31  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B3F34  6A FF                     PUSH -0x1
005B3F36  6A 07                     PUSH 0x7
005B3F38  6A FF                     PUSH -0x1
005B3F3A  8B 9E 60 09 00 00         MOV EBX,dword ptr [ESI + 0x960]
005B3F40  6A FF                     PUSH -0x1
005B3F42  6A 01                     PUSH 0x1
005B3F44  6A FF                     PUSH -0x1
005B3F46  C7 86 A8 08 00 00 59 23 00 00  MOV dword ptr [ESI + 0x8a8],0x2359
005B3F50  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B3F56  6A FE                     PUSH -0x2
005B3F58  6A 28                     PUSH 0x28
005B3F5A  8D BE 60 09 00 00         LEA EDI,[ESI + 0x960]
005B3F60  68 8C 00 00 00            PUSH 0x8c
005B3F65  52                        PUSH EDX
005B3F66  68 59 23 00 00            PUSH 0x2359
005B3F6B  E8 D0 C1 0F 00            CALL 0x006b0140
005B3F70  50                        PUSH EAX
005B3F71  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B3F76  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005B3F79  E8 02 F5 15 00            CALL 0x00713480
005B3F7E  50                        PUSH EAX
005B3F7F  8B CF                     MOV ECX,EDI
005B3F81  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B3F84  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B3F8A  32 D2                     XOR DL,DL
005B3F8C  84 C0                     TEST AL,AL
005B3F8E  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B3F91  76 3E                     JBE 0x005b3fd1
005B3F93  BB 00 02 00 00            MOV EBX,0x200
LAB_005b3f98:
005B3F98  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B3F9B  25 FF 00 00 00            AND EAX,0xff
005B3FA0  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B3FA7  2B C8                     SUB ECX,EAX
005B3FA9  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B3FAC  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005B3FAF  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
005B3FB2  03 C1                     ADD EAX,ECX
005B3FB4  FE C2                     INC DL
005B3FB6  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B3FB9  89 98 C9 00 00 00         MOV dword ptr [EAX + 0xc9],EBX
005B3FBF  C7 80 CD 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0xcd],0x0
005B3FC9  3A 96 9A 00 00 00         CMP DL,byte ptr [ESI + 0x9a]
005B3FCF  72 C7                     JC 0x005b3f98
LAB_005b3fd1:
005B3FD1  B9 22 61 00 00            MOV ECX,0x6122
005B3FD6  B8 1F 61 00 00            MOV EAX,0x611f
005B3FDB  89 8E D1 00 00 00         MOV dword ptr [ESI + 0xd1],ECX
005B3FE1  89 86 CC 02 00 00         MOV dword ptr [ESI + 0x2cc],EAX
005B3FE7  89 86 C7 04 00 00         MOV dword ptr [ESI + 0x4c7],EAX
005B3FED  89 86 C2 06 00 00         MOV dword ptr [ESI + 0x6c2],EAX
005B3FF3  89 8E BD 08 00 00         MOV dword ptr [ESI + 0x8bd],ECX
005B3FF9  B9 7E 00 00 00            MOV ECX,0x7e
005B3FFE  33 C0                     XOR EAX,EAX
005B4000  8D BD B8 FD FF FF         LEA EDI,[EBP + 0xfffffdb8]
005B4006  F3 AB                     STOSD.REP ES:EDI
005B4008  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005B400E  BA 02 00 00 00            MOV EDX,0x2
005B4013  66 AB                     STOSW ES:EDI
005B4015  AA                        STOSB ES:EDI
005B4016  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005B4019  C7 86 D5 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xd5],0x0
005B4023  89 96 D0 02 00 00         MOV dword ptr [ESI + 0x2d0],EDX
005B4029  C7 86 CB 04 00 00 09 00 00 00  MOV dword ptr [ESI + 0x4cb],0x9
005B4033  C7 86 C6 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x6c6],0x3
005B403D  C7 86 C1 08 00 00 01 00 00 00  MOV dword ptr [ESI + 0x8c1],0x1
005B4047  C7 85 A2 FE FF FF BC 24 00 00  MOV dword ptr [EBP + 0xfffffea2],0x24bc
005B4051  C6 85 C7 FE FF FF 01      MOV byte ptr [EBP + 0xfffffec7],0x1
005B4058  89 85 AF FE FF FF         MOV dword ptr [EBP + 0xfffffeaf],EAX
005B405E  89 95 B3 FE FF FF         MOV dword ptr [EBP + 0xfffffeb3],EDX
005B4064  C7 85 B7 FE FF FF 43 69 00 00  MOV dword ptr [EBP + 0xfffffeb7],0x6943
005B406E  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005B4074  85 C9                     TEST ECX,ECX
005B4076  74 12                     JZ 0x005b408a
005B4078  6A 00                     PUSH 0x0
005B407A  8D 95 B8 FD FF FF         LEA EDX,[EBP + 0xfffffdb8]
005B4080  6A 00                     PUSH 0x0
005B4082  52                        PUSH EDX
005B4083  6A 00                     PUSH 0x0
005B4085  E8 8D D6 E4 FF            CALL 0x00401717
LAB_005b408a:
005B408A  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005B408F  6A 00                     PUSH 0x0
005B4091  6A 18                     PUSH 0x18
005B4093  68 4C 01 00 00            PUSH 0x14c
005B4098  6A 14                     PUSH 0x14
005B409A  68 E9 00 00 00            PUSH 0xe9
005B409F  50                        PUSH EAX
005B40A0  E8 3B 69 10 00            CALL 0x006ba9e0
005B40A5  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B40AB  A1 18 76 80 00            MOV EAX,[0x00807618]
005B40B0  6A 00                     PUSH 0x0
005B40B2  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
005B40B5  52                        PUSH EDX
005B40B6  6A FF                     PUSH -0x1
005B40B8  6A FE                     PUSH -0x2
005B40BA  50                        PUSH EAX
005B40BB  68 B0 26 00 00            PUSH 0x26b0
005B40C0  E8 7B C0 0F 00            CALL 0x006b0140
005B40C5  50                        PUSH EAX
005B40C6  6A 18                     PUSH 0x18
005B40C8  68 4C 01 00 00            PUSH 0x14c
005B40CD  6A 14                     PUSH 0x14
005B40CF  68 E9 00 00 00            PUSH 0xe9
005B40D4  6A 00                     PUSH 0x0
005B40D6  E8 52 0B E5 FF            CALL 0x00404c2d
005B40DB  83 C4 28                  ADD ESP,0x28
005B40DE  E9 D2 02 00 00            JMP 0x005b43b5
LAB_005b40e3:
005B40E3  6A FF                     PUSH -0x1
005B40E5  6A 07                     PUSH 0x7
005B40E7  6A FF                     PUSH -0x1
005B40E9  6A FF                     PUSH -0x1
005B40EB  6A 01                     PUSH 0x1
005B40ED  C6 86 9A 00 00 00 05      MOV byte ptr [ESI + 0x9a],0x5
005B40F4  6A FF                     PUSH -0x1
005B40F6  C7 86 BC 00 00 00 34 23 00 00  MOV dword ptr [ESI + 0xbc],0x2334
005B4100  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B4106  8B 9E 74 01 00 00         MOV EBX,dword ptr [ESI + 0x174]
005B410C  6A FE                     PUSH -0x2
005B410E  6A 28                     PUSH 0x28
005B4110  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005B4116  68 8C 00 00 00            PUSH 0x8c
005B411B  51                        PUSH ECX
005B411C  68 34 23 00 00            PUSH 0x2334
005B4121  E8 1A C0 0F 00            CALL 0x006b0140
005B4126  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B412C  50                        PUSH EAX
005B412D  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005B4130  E8 4B F3 15 00            CALL 0x00713480
005B4135  50                        PUSH EAX
005B4136  8B CF                     MOV ECX,EDI
005B4138  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B413B  6A FF                     PUSH -0x1
005B413D  6A 07                     PUSH 0x7
005B413F  6A FF                     PUSH -0x1
005B4141  6A FF                     PUSH -0x1
005B4143  6A 01                     PUSH 0x1
005B4145  6A FF                     PUSH -0x1
005B4147  C7 86 B7 02 00 00 35 23 00 00  MOV dword ptr [ESI + 0x2b7],0x2335
005B4151  A1 18 76 80 00            MOV EAX,[0x00807618]
005B4156  8B 9E 6F 03 00 00         MOV EBX,dword ptr [ESI + 0x36f]
005B415C  6A FE                     PUSH -0x2
005B415E  6A 28                     PUSH 0x28
005B4160  8D BE 6F 03 00 00         LEA EDI,[ESI + 0x36f]
005B4166  68 8C 00 00 00            PUSH 0x8c
005B416B  50                        PUSH EAX
005B416C  68 35 23 00 00            PUSH 0x2335
005B4171  E8 CA BF 0F 00            CALL 0x006b0140
005B4176  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B417C  50                        PUSH EAX
005B417D  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B4180  E8 FB F2 15 00            CALL 0x00713480
005B4185  50                        PUSH EAX
005B4186  8B CF                     MOV ECX,EDI
005B4188  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B418B  6A FF                     PUSH -0x1
005B418D  6A 07                     PUSH 0x7
005B418F  6A FF                     PUSH -0x1
005B4191  8B 9E 6A 05 00 00         MOV EBX,dword ptr [ESI + 0x56a]
005B4197  6A FF                     PUSH -0x1
005B4199  6A 01                     PUSH 0x1
005B419B  6A FF                     PUSH -0x1
005B419D  C7 86 B2 04 00 00 32 23 00 00  MOV dword ptr [ESI + 0x4b2],0x2332
005B41A7  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005B41AD  6A FE                     PUSH -0x2
005B41AF  6A 28                     PUSH 0x28
005B41B1  8D BE 6A 05 00 00         LEA EDI,[ESI + 0x56a]
005B41B7  68 8C 00 00 00            PUSH 0x8c
005B41BC  52                        PUSH EDX
005B41BD  68 32 23 00 00            PUSH 0x2332
005B41C2  E8 79 BF 0F 00            CALL 0x006b0140
005B41C7  50                        PUSH EAX
005B41C8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B41CD  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005B41D0  E8 AB F2 15 00            CALL 0x00713480
005B41D5  50                        PUSH EAX
005B41D6  8B CF                     MOV ECX,EDI
005B41D8  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B41DB  8B 9E 65 07 00 00         MOV EBX,dword ptr [ESI + 0x765]
005B41E1  6A FF                     PUSH -0x1
005B41E3  6A 07                     PUSH 0x7
005B41E5  6A FF                     PUSH -0x1
005B41E7  6A FF                     PUSH -0x1
005B41E9  8D BE 65 07 00 00         LEA EDI,[ESI + 0x765]
005B41EF  6A 01                     PUSH 0x1
005B41F1  6A FF                     PUSH -0x1
005B41F3  6A FE                     PUSH -0x2
005B41F5  C7 86 AD 06 00 00 33 23 00 00  MOV dword ptr [ESI + 0x6ad],0x2333
005B41FF  6A 28                     PUSH 0x28
005B4201  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B4207  68 8C 00 00 00            PUSH 0x8c
005B420C  51                        PUSH ECX
005B420D  68 33 23 00 00            PUSH 0x2333
005B4212  E8 29 BF 0F 00            CALL 0x006b0140
005B4217  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B421D  50                        PUSH EAX
005B421E  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005B4221  E8 5A F2 15 00            CALL 0x00713480
005B4226  50                        PUSH EAX
005B4227  8B CF                     MOV ECX,EDI
005B4229  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B422C  6A FF                     PUSH -0x1
005B422E  6A 07                     PUSH 0x7
005B4230  6A FF                     PUSH -0x1
005B4232  8B 9E 60 09 00 00         MOV EBX,dword ptr [ESI + 0x960]
005B4238  6A FF                     PUSH -0x1
005B423A  6A 01                     PUSH 0x1
005B423C  6A FF                     PUSH -0x1
005B423E  C7 86 A8 08 00 00 36 23 00 00  MOV dword ptr [ESI + 0x8a8],0x2336
005B4248  A1 18 76 80 00            MOV EAX,[0x00807618]
005B424D  6A FE                     PUSH -0x2
005B424F  6A 28                     PUSH 0x28
005B4251  8D BE 60 09 00 00         LEA EDI,[ESI + 0x960]
005B4257  68 8C 00 00 00            PUSH 0x8c
005B425C  50                        PUSH EAX
005B425D  68 36 23 00 00            PUSH 0x2336
005B4262  E8 D9 BE 0F 00            CALL 0x006b0140
005B4267  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B426D  50                        PUSH EAX
005B426E  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005B4271  E8 0A F2 15 00            CALL 0x00713480
005B4276  50                        PUSH EAX
005B4277  8B CF                     MOV ECX,EDI
005B4279  FF 53 08                  CALL dword ptr [EBX + 0x8]
005B427C  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005B427F  33 FF                     XOR EDI,EDI
005B4281  BB 00 02 00 00            MOV EBX,0x200
005B4286  B8 01 00 00 00            MOV EAX,0x1
005B428B  57                        PUSH EDI
005B428C  6A 18                     PUSH 0x18
005B428E  89 96 C9 00 00 00         MOV dword ptr [ESI + 0xc9],EDX
005B4294  C7 86 CD 00 00 00 02 00 00 00  MOV dword ptr [ESI + 0xcd],0x2
005B429E  C7 86 D1 00 00 00 44 69 00 00  MOV dword ptr [ESI + 0xd1],0x6944
005B42A8  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
005B42AE  89 BE C8 02 00 00         MOV dword ptr [ESI + 0x2c8],EDI
005B42B4  C7 86 CC 02 00 00 05 61 00 00  MOV dword ptr [ESI + 0x2cc],0x6105
005B42BE  89 BE D0 02 00 00         MOV dword ptr [ESI + 0x2d0],EDI
005B42C4  89 86 D4 02 00 00         MOV dword ptr [ESI + 0x2d4],EAX
005B42CA  89 9E BF 04 00 00         MOV dword ptr [ESI + 0x4bf],EBX
005B42D0  89 BE C3 04 00 00         MOV dword ptr [ESI + 0x4c3],EDI
005B42D6  C7 86 C7 04 00 00 03 61 00 00  MOV dword ptr [ESI + 0x4c7],0x6103
005B42E0  89 86 CB 04 00 00         MOV dword ptr [ESI + 0x4cb],EAX
005B42E6  89 BE C2 06 00 00         MOV dword ptr [ESI + 0x6c2],EDI
005B42EC  89 86 B9 08 00 00         MOV dword ptr [ESI + 0x8b9],EAX
005B42F2  C7 86 BD 08 00 00 02 71 00 00  MOV dword ptr [ESI + 0x8bd],0x7102
005B42FC  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005B4301  68 4C 01 00 00            PUSH 0x14c
005B4306  6A 14                     PUSH 0x14
005B4308  68 E9 00 00 00            PUSH 0xe9
005B430D  50                        PUSH EAX
005B430E  E8 CD 66 10 00            CALL 0x006ba9e0
005B4313  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B4319  A1 18 76 80 00            MOV EAX,[0x00807618]
005B431E  57                        PUSH EDI
005B431F  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
005B4322  52                        PUSH EDX
005B4323  6A FF                     PUSH -0x1
005B4325  6A FE                     PUSH -0x2
005B4327  50                        PUSH EAX
005B4328  68 AC 26 00 00            PUSH 0x26ac
005B432D  E8 0E BE 0F 00            CALL 0x006b0140
005B4332  50                        PUSH EAX
005B4333  6A 18                     PUSH 0x18
005B4335  68 4C 01 00 00            PUSH 0x14c
005B433A  6A 14                     PUSH 0x14
005B433C  68 E9 00 00 00            PUSH 0xe9
005B4341  57                        PUSH EDI
005B4342  E8 E6 08 E5 FF            CALL 0x00404c2d
005B4347  A1 D5 7D 80 00            MOV EAX,[0x00807dd5]
005B434C  83 C4 28                  ADD ESP,0x28
005B434F  8B C8                     MOV ECX,EAX
005B4351  33 D2                     XOR EDX,EDX
005B4353  8A 15 D7 7D 80 00         MOV DL,byte ptr [0x00807dd7]
005B4359  81 E1 FF FF 00 00         AND ECX,0xffff
005B435F  51                        PUSH ECX
005B4360  52                        PUSH EDX
005B4361  C1 E8 18                  SHR EAX,0x18
005B4364  50                        PUSH EAX
005B4365  A1 18 76 80 00            MOV EAX,[0x00807618]
005B436A  50                        PUSH EAX
005B436B  68 29 23 00 00            PUSH 0x2329
005B4370  E8 CB BD 0F 00            CALL 0x006b0140
005B4375  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005B437B  50                        PUSH EAX
005B437C  83 C1 3C                  ADD ECX,0x3c
005B437F  51                        PUSH ECX
005B4380  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005B4386  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B438C  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005B4392  57                        PUSH EDI
005B4393  83 C1 3C                  ADD ECX,0x3c
005B4396  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
005B4399  50                        PUSH EAX
005B439A  6A FF                     PUSH -0x1
005B439C  6A FE                     PUSH -0x2
005B439E  51                        PUSH ECX
005B439F  6A 18                     PUSH 0x18
005B43A1  68 20 03 00 00            PUSH 0x320
005B43A6  68 40 02 00 00            PUSH 0x240
005B43AB  57                        PUSH EDI
005B43AC  57                        PUSH EDI
005B43AD  E8 7B 08 E5 FF            CALL 0x00404c2d
005B43B2  83 C4 3C                  ADD ESP,0x3c
LAB_005b43b5:
005B43B5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005B43B8  85 C0                     TEST EAX,EAX
005B43BA  74 29                     JZ 0x005b43e5
005B43BC  8B CE                     MOV ECX,ESI
005B43BE  E8 EE 15 E5 FF            CALL 0x004059b1
005B43C3  8B 56 61                  MOV EDX,dword ptr [ESI + 0x61]
005B43C6  C7 86 D3 1A 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1ad3],0x1
005B43D0  C7 86 DB 1A 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1adb],0x0
005B43DA  89 96 D7 1A 00 00         MOV dword ptr [ESI + 0x1ad7],EDX
005B43E0  E9 0C 01 00 00            JMP 0x005b44f1
LAB_005b43e5:
005B43E5  A1 34 67 80 00            MOV EAX,[0x00806734]
005B43EA  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005B43F0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005B43F6  50                        PUSH EAX
005B43F7  51                        PUSH ECX
005B43F8  6A 00                     PUSH 0x0
005B43FA  6A 00                     PUSH 0x0
005B43FC  52                        PUSH EDX
005B43FD  E8 7E 1B 10 00            CALL 0x006b5f80
005B4402  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005B4407  6A 00                     PUSH 0x0
005B4409  6A 18                     PUSH 0x18
005B440B  68 4C 01 00 00            PUSH 0x14c
005B4410  6A 14                     PUSH 0x14
005B4412  68 E9 00 00 00            PUSH 0xe9
005B4417  50                        PUSH EAX
005B4418  E8 C3 65 10 00            CALL 0x006ba9e0
005B441D  33 C0                     XOR EAX,EAX
005B441F  8A 86 E3 1E 00 00         MOV AL,byte ptr [ESI + 0x1ee3]
005B4425  83 E8 00                  SUB EAX,0x0
005B4428  74 20                     JZ 0x005b444a
005B442A  48                        DEC EAX
005B442B  75 56                     JNZ 0x005b4483
005B442D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B4433  A1 18 76 80 00            MOV EAX,[0x00807618]
005B4438  6A 00                     PUSH 0x0
005B443A  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
005B443D  52                        PUSH EDX
005B443E  6A FF                     PUSH -0x1
005B4440  6A FE                     PUSH -0x2
005B4442  50                        PUSH EAX
005B4443  68 B0 26 00 00            PUSH 0x26b0
005B4448  EB 1B                     JMP 0x005b4465
LAB_005b444a:
005B444A  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B4450  A1 18 76 80 00            MOV EAX,[0x00807618]
005B4455  6A 00                     PUSH 0x0
005B4457  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
005B445A  52                        PUSH EDX
005B445B  6A FF                     PUSH -0x1
005B445D  6A FE                     PUSH -0x2
005B445F  50                        PUSH EAX
005B4460  68 AC 26 00 00            PUSH 0x26ac
LAB_005b4465:
005B4465  E8 D6 BC 0F 00            CALL 0x006b0140
005B446A  50                        PUSH EAX
005B446B  6A 18                     PUSH 0x18
005B446D  68 4C 01 00 00            PUSH 0x14c
005B4472  6A 14                     PUSH 0x14
005B4474  68 E9 00 00 00            PUSH 0xe9
005B4479  6A 00                     PUSH 0x0
005B447B  E8 AD 07 E5 FF            CALL 0x00404c2d
005B4480  83 C4 28                  ADD ESP,0x28
LAB_005b4483:
005B4483  A1 D5 7D 80 00            MOV EAX,[0x00807dd5]
005B4488  33 D2                     XOR EDX,EDX
005B448A  8A 15 D7 7D 80 00         MOV DL,byte ptr [0x00807dd7]
005B4490  8B C8                     MOV ECX,EAX
005B4492  81 E1 FF FF 00 00         AND ECX,0xffff
005B4498  51                        PUSH ECX
005B4499  52                        PUSH EDX
005B449A  C1 E8 18                  SHR EAX,0x18
005B449D  50                        PUSH EAX
005B449E  A1 18 76 80 00            MOV EAX,[0x00807618]
005B44A3  50                        PUSH EAX
005B44A4  68 29 23 00 00            PUSH 0x2329
005B44A9  E8 92 BC 0F 00            CALL 0x006b0140
005B44AE  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005B44B4  50                        PUSH EAX
005B44B5  83 C1 3C                  ADD ECX,0x3c
005B44B8  51                        PUSH ECX
005B44B9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005B44BF  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B44C5  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005B44CB  6A 00                     PUSH 0x0
005B44CD  83 C1 3C                  ADD ECX,0x3c
005B44D0  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
005B44D3  50                        PUSH EAX
005B44D4  6A FF                     PUSH -0x1
005B44D6  6A FE                     PUSH -0x2
005B44D8  51                        PUSH ECX
005B44D9  6A 18                     PUSH 0x18
005B44DB  68 20 03 00 00            PUSH 0x320
005B44E0  68 40 02 00 00            PUSH 0x240
005B44E5  6A 00                     PUSH 0x0
005B44E7  6A 00                     PUSH 0x0
005B44E9  E8 3F 07 E5 FF            CALL 0x00404c2d
005B44EE  83 C4 3C                  ADD ESP,0x3c
LAB_005b44f1:
005B44F1  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B44F7  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005B44FB  84 C0                     TEST AL,AL
005B44FD  76 53                     JBE 0x005b4552
LAB_005b44ff:
005B44FF  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B4502  81 E7 FF 00 00 00         AND EDI,0xff
005B4508  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
005B450F  2B C7                     SUB EAX,EDI
005B4511  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005B4514  8D 1C D7                  LEA EBX,[EDI + EDX*0x8]
005B4517  8D 04 5E                  LEA EAX,[ESI + EBX*0x2]
005B451A  03 D8                     ADD EBX,EAX
005B451C  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005B4522  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
005B4525  89 83 27 01 00 00         MOV dword ptr [EBX + 0x127],EAX
005B452B  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
005B452E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005B4531  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005B4534  D1 E1                     SHL ECX,0x1
005B4536  89 8B 23 01 00 00         MOV dword ptr [EBX + 0x123],ECX
005B453C  C6 83 BB 00 00 00 01      MOV byte ptr [EBX + 0xbb],0x1
005B4543  8A 8E 9A 00 00 00         MOV CL,byte ptr [ESI + 0x9a]
005B4549  FE C0                     INC AL
005B454B  3A C1                     CMP AL,CL
005B454D  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005B4550  72 AD                     JC 0x005b44ff
LAB_005b4552:
005B4552  6A FF                     PUSH -0x1
005B4554  6A 00                     PUSH 0x0
005B4556  6A 01                     PUSH 0x1
005B4558  8B CE                     MOV ECX,ESI
005B455A  C6 46 65 03               MOV byte ptr [ESI + 0x65],0x3
005B455E  E8 8E 06 E5 FF            CALL 0x00404bf1
005B4563  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005B4566  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B456C  5F                        POP EDI
005B456D  5E                        POP ESI
005B456E  5B                        POP EBX
005B456F  8B E5                     MOV ESP,EBP
005B4571  5D                        POP EBP
005B4572  C2 08 00                  RET 0x8
LAB_005b4575:
005B4575  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005B4578  68 E0 C9 7C 00            PUSH 0x7cc9e0
005B457D  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B4582  56                        PUSH ESI
005B4583  6A 00                     PUSH 0x0
005B4585  68 6A 01 00 00            PUSH 0x16a
005B458A  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B458F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B4594  E8 37 8F 0F 00            CALL 0x006ad4d0
005B4599  83 C4 18                  ADD ESP,0x18
005B459C  85 C0                     TEST EAX,EAX
005B459E  74 01                     JZ 0x005b45a1
005B45A0  CC                        INT3
LAB_005b45a1:
005B45A1  68 6A 01 00 00            PUSH 0x16a
005B45A6  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B45AB  6A 00                     PUSH 0x0
005B45AD  56                        PUSH ESI
005B45AE  E8 8D 18 0F 00            CALL 0x006a5e40
005B45B3  5F                        POP EDI
005B45B4  5E                        POP ESI
005B45B5  5B                        POP EBX
005B45B6  8B E5                     MOV ESP,EBP
005B45B8  5D                        POP EBP
005B45B9  C2 08 00                  RET 0x8
