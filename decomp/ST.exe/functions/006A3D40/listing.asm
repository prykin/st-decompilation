FUN_006a3d40:
006A3D40  55                        PUSH EBP
006A3D41  8B EC                     MOV EBP,ESP
006A3D43  83 EC 08                  SUB ESP,0x8
006A3D46  A0 78 C1 7E 00            MOV AL,[0x007ec178]
006A3D4B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006A3D52  A8 04                     TEST AL,0x4
006A3D54  74 29                     JZ 0x006a3d7f
006A3D56  E8 B8 0F D6 FF            CALL 0x00404d13
006A3D5B  85 C0                     TEST EAX,EAX
006A3D5D  75 20                     JNZ 0x006a3d7f
006A3D5F  68 BC C2 7E 00            PUSH 0x7ec2bc
006A3D64  50                        PUSH EAX
006A3D65  68 7B 01 00 00            PUSH 0x17b
006A3D6A  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A3D6F  6A 02                     PUSH 0x2
006A3D71  E8 2A D2 08 00            CALL 0x00730fa0
006A3D76  83 C4 14                  ADD ESP,0x14
006A3D79  83 F8 01                  CMP EAX,0x1
006A3D7C  75 01                     JNZ 0x006a3d7f
006A3D7E  CC                        INT3
LAB_006a3d7f:
006A3D7F  A1 7C C1 7E 00            MOV EAX,[0x007ec17c]
006A3D84  8B 0D 80 C1 7E 00         MOV ECX,dword ptr [0x007ec180]
006A3D8A  3B C1                     CMP EAX,ECX
006A3D8C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A3D8F  75 01                     JNZ 0x006a3d92
006A3D91  CC                        INT3
LAB_006a3d92:
006A3D92  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A3D95  53                        PUSH EBX
006A3D96  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A3D99  56                        PUSH ESI
006A3D9A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A3D9D  57                        PUSH EDI
006A3D9E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A3DA1  51                        PUSH ECX
006A3DA2  57                        PUSH EDI
006A3DA3  50                        PUSH EAX
006A3DA4  53                        PUSH EBX
006A3DA5  56                        PUSH ESI
006A3DA6  6A 00                     PUSH 0x0
006A3DA8  6A 01                     PUSH 0x1
006A3DAA  FF 15 98 14 7F 00         CALL dword ptr [0x007f1498]
006A3DB0  83 C4 1C                  ADD ESP,0x1c
006A3DB3  85 C0                     TEST EAX,EAX
006A3DB5  75 5A                     JNZ 0x006a3e11
006A3DB7  85 FF                     TEST EDI,EDI
006A3DB9  74 29                     JZ 0x006a3de4
006A3DBB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A3DBE  52                        PUSH EDX
006A3DBF  57                        PUSH EDI
006A3DC0  68 7C C2 7E 00            PUSH 0x7ec27c
006A3DC5  50                        PUSH EAX
006A3DC6  50                        PUSH EAX
006A3DC7  50                        PUSH EAX
006A3DC8  50                        PUSH EAX
006A3DC9  E8 D2 D1 08 00            CALL 0x00730fa0
006A3DCE  83 C4 1C                  ADD ESP,0x1c
006A3DD1  83 F8 01                  CMP EAX,0x1
006A3DD4  0F 85 F1 01 00 00         JNZ 0x006a3fcb
006A3DDA  CC                        INT3
LAB_006a3de4:
006A3DE4  68 54 C2 7E 00            PUSH 0x7ec254
006A3DE9  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A3DEE  6A 00                     PUSH 0x0
006A3DF0  6A 00                     PUSH 0x0
006A3DF2  6A 00                     PUSH 0x0
006A3DF4  6A 00                     PUSH 0x0
006A3DF6  E8 A5 D1 08 00            CALL 0x00730fa0
006A3DFB  83 C4 18                  ADD ESP,0x18
006A3DFE  83 F8 01                  CMP EAX,0x1
006A3E01  0F 85 C4 01 00 00         JNZ 0x006a3fcb
006A3E07  CC                        INT3
LAB_006a3e11:
006A3E11  8B C3                     MOV EAX,EBX
006A3E13  25 FF FF 00 00            AND EAX,0xffff
006A3E18  83 F8 02                  CMP EAX,0x2
006A3E1B  74 10                     JZ 0x006a3e2d
006A3E1D  F6 05 78 C1 7E 00 01      TEST byte ptr [0x007ec178],0x1
006A3E24  75 07                     JNZ 0x006a3e2d
006A3E26  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_006a3e2d:
006A3E2D  83 FE E0                  CMP ESI,-0x20
006A3E30  0F 87 55 01 00 00         JA 0x006a3f8b
006A3E36  8D 4E 24                  LEA ECX,[ESI + 0x24]
006A3E39  83 F9 E0                  CMP ECX,-0x20
006A3E3C  0F 87 49 01 00 00         JA 0x006a3f8b
006A3E42  83 F8 04                  CMP EAX,0x4
006A3E45  74 2F                     JZ 0x006a3e76
006A3E47  83 FB 01                  CMP EBX,0x1
006A3E4A  74 2A                     JZ 0x006a3e76
006A3E4C  83 F8 02                  CMP EAX,0x2
006A3E4F  74 25                     JZ 0x006a3e76
006A3E51  83 FB 03                  CMP EBX,0x3
006A3E54  74 20                     JZ 0x006a3e76
006A3E56  68 18 C2 7E 00            PUSH 0x7ec218
006A3E5B  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A3E60  6A 00                     PUSH 0x0
006A3E62  6A 00                     PUSH 0x0
006A3E64  6A 00                     PUSH 0x0
006A3E66  6A 01                     PUSH 0x1
006A3E68  E8 33 D1 08 00            CALL 0x00730fa0
006A3E6D  83 C4 18                  ADD ESP,0x18
006A3E70  83 F8 01                  CMP EAX,0x1
006A3E73  75 01                     JNZ 0x006a3e76
006A3E75  CC                        INT3
LAB_006a3e76:
006A3E76  8D 46 24                  LEA EAX,[ESI + 0x24]
006A3E79  50                        PUSH EAX
006A3E7A  E8 A1 CF 08 00            CALL 0x00730e20
006A3E7F  33 D2                     XOR EDX,EDX
006A3E81  83 C4 04                  ADD ESP,0x4
006A3E84  3B C2                     CMP EAX,EDX
006A3E86  0F 84 3F 01 00 00         JZ 0x006a3fcb
006A3E8C  8B 0D 7C C1 7E 00         MOV ECX,dword ptr [0x007ec17c]
006A3E92  41                        INC ECX
006A3E93  89 0D 7C C1 7E 00         MOV dword ptr [0x007ec17c],ECX
006A3E99  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A3E9C  3B CA                     CMP ECX,EDX
006A3E9E  74 1E                     JZ 0x006a3ebe
006A3EA0  89 10                     MOV dword ptr [EAX],EDX
006A3EA2  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006A3EA5  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006A3EA8  C7 40 0C BC BA DC FE      MOV dword ptr [EAX + 0xc],0xfedcbabc
006A3EAF  89 70 10                  MOV dword ptr [EAX + 0x10],ESI
006A3EB2  C7 40 14 03 00 00 00      MOV dword ptr [EAX + 0x14],0x3
006A3EB9  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
006A3EBC  EB 63                     JMP 0x006a3f21
LAB_006a3ebe:
006A3EBE  8B 0D 68 49 85 00         MOV ECX,dword ptr [0x00854968]
006A3EC4  03 CE                     ADD ECX,ESI
006A3EC6  89 0D 68 49 85 00         MOV dword ptr [0x00854968],ECX
006A3ECC  8B 0D 44 4A 85 00         MOV ECX,dword ptr [0x00854a44]
006A3ED2  03 CE                     ADD ECX,ESI
006A3ED4  3B 0D 48 4A 85 00         CMP ECX,dword ptr [0x00854a48]
006A3EDA  89 0D 44 4A 85 00         MOV dword ptr [0x00854a44],ECX
006A3EE0  76 06                     JBE 0x006a3ee8
006A3EE2  89 0D 48 4A 85 00         MOV dword ptr [0x00854a48],ECX
LAB_006a3ee8:
006A3EE8  8B 0D 6C 49 85 00         MOV ECX,dword ptr [0x0085496c]
006A3EEE  3B CA                     CMP ECX,EDX
006A3EF0  74 0B                     JZ 0x006a3efd
006A3EF2  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
006A3EF5  8B 0D 6C 49 85 00         MOV ECX,dword ptr [0x0085496c]
006A3EFB  EB 05                     JMP 0x006a3f02
LAB_006a3efd:
006A3EFD  A3 64 49 85 00            MOV [0x00854964],EAX
LAB_006a3f02:
006A3F02  89 08                     MOV dword ptr [EAX],ECX
006A3F04  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A3F07  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006A3F0A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A3F0D  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
006A3F10  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006A3F13  89 70 10                  MOV dword ptr [EAX + 0x10],ESI
006A3F16  89 58 14                  MOV dword ptr [EAX + 0x14],EBX
006A3F19  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
006A3F1C  A3 6C 49 85 00            MOV [0x0085496c],EAX
LAB_006a3f21:
006A3F21  8B 0D 84 C1 7E 00         MOV ECX,dword ptr [0x007ec184]
006A3F27  8D 50 1C                  LEA EDX,[EAX + 0x1c]
006A3F2A  81 E1 FF 00 00 00         AND ECX,0xff
006A3F30  8A D9                     MOV BL,CL
006A3F32  8A FB                     MOV BH,BL
006A3F34  8B CB                     MOV ECX,EBX
006A3F36  C1 E1 10                  SHL ECX,0x10
006A3F39  66 8B CB                  MOV CX,BX
006A3F3C  89 0A                     MOV dword ptr [EDX],ECX
006A3F3E  8B 0D 84 C1 7E 00         MOV ECX,dword ptr [0x007ec184]
006A3F44  81 E1 FF 00 00 00         AND ECX,0xff
006A3F4A  8D 54 30 20               LEA EDX,[EAX + ESI*0x1 + 0x20]
006A3F4E  8A D9                     MOV BL,CL
006A3F50  8A FB                     MOV BH,BL
006A3F52  8B CB                     MOV ECX,EBX
006A3F54  C1 E1 10                  SHL ECX,0x10
006A3F57  66 8B CB                  MOV CX,BX
006A3F5A  89 0A                     MOV dword ptr [EDX],ECX
006A3F5C  8D 50 20                  LEA EDX,[EAX + 0x20]
006A3F5F  33 C0                     XOR EAX,EAX
006A3F61  8B CE                     MOV ECX,ESI
006A3F63  A0 86 C1 7E 00            MOV AL,[0x007ec186]
006A3F68  8B FA                     MOV EDI,EDX
006A3F6A  8A D8                     MOV BL,AL
006A3F6C  8A FB                     MOV BH,BL
006A3F6E  8B C3                     MOV EAX,EBX
006A3F70  C1 E0 10                  SHL EAX,0x10
006A3F73  66 8B C3                  MOV AX,BX
006A3F76  C1 E9 02                  SHR ECX,0x2
006A3F79  F3 AB                     STOSD.REP ES:EDI
006A3F7B  8B CE                     MOV ECX,ESI
006A3F7D  83 E1 03                  AND ECX,0x3
006A3F80  F3 AA                     STOSB.REP ES:EDI
006A3F82  5F                        POP EDI
006A3F83  5E                        POP ESI
006A3F84  8B C2                     MOV EAX,EDX
006A3F86  5B                        POP EBX
006A3F87  8B E5                     MOV ESP,EBP
006A3F89  5D                        POP EBP
006A3F8A  C3                        RET
LAB_006a3f8b:
006A3F8B  56                        PUSH ESI
006A3F8C  68 F0 C1 7E 00            PUSH 0x7ec1f0
006A3F91  85 FF                     TEST EDI,EDI
006A3F93  6A 00                     PUSH 0x0
006A3F95  6A 00                     PUSH 0x0
006A3F97  74 1B                     JZ 0x006a3fb4
006A3F99  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A3F9C  50                        PUSH EAX
006A3F9D  57                        PUSH EDI
006A3F9E  E8 2D 95 00 00            CALL 0x006ad4d0
006A3FA3  83 C4 18                  ADD ESP,0x18
006A3FA6  85 C0                     TEST EAX,EAX
006A3FA8  74 21                     JZ 0x006a3fcb
006A3FAA  CC                        INT3
LAB_006a3fb4:
006A3FB4  68 9C 01 00 00            PUSH 0x19c
006A3FB9  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A3FBE  E8 0D 95 00 00            CALL 0x006ad4d0
006A3FC3  83 C4 18                  ADD ESP,0x18
006A3FC6  85 C0                     TEST EAX,EAX
006A3FC8  74 01                     JZ 0x006a3fcb
006A3FCA  CC                        INT3
LAB_006a3fcb:
006A3FCB  5F                        POP EDI
006A3FCC  5E                        POP ESI
006A3FCD  33 C0                     XOR EAX,EAX
006A3FCF  5B                        POP EBX
006A3FD0  8B E5                     MOV ESP,EBP
006A3FD2  5D                        POP EBP
006A3FD3  C3                        RET
