FUN_006e3dd0:
006E3DD0  55                        PUSH EBP
006E3DD1  8B EC                     MOV EBP,ESP
006E3DD3  81 EC A0 00 00 00         SUB ESP,0xa0
006E3DD9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E3DDE  53                        PUSH EBX
006E3DDF  56                        PUSH ESI
006E3DE0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006E3DE3  33 DB                     XOR EBX,EBX
006E3DE5  57                        PUSH EDI
006E3DE6  8D 55 A8                  LEA EDX,[EBP + -0x58]
006E3DE9  8D 4D A4                  LEA ECX,[EBP + -0x5c]
006E3DEC  53                        PUSH EBX
006E3DED  52                        PUSH EDX
006E3DEE  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E3DF5  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006E3DF8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E3DFE  E8 ED 99 04 00            CALL 0x0072d7f0
006E3E03  8B F0                     MOV ESI,EAX
006E3E05  83 C4 08                  ADD ESP,0x8
006E3E08  3B F3                     CMP ESI,EBX
006E3E0A  0F 85 57 02 00 00         JNZ 0x006e4067
006E3E10  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E3E13  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006E3E16  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E3E19  8B C7                     MOV EAX,EDI
006E3E1B  25 FF FF FF 00            AND EAX,0xffffff
006E3E20  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
006E3E23  83 F8 0F                  CMP EAX,0xf
006E3E26  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
006E3E29  0F 87 02 02 00 00         JA 0x006e4031
006E3E2F  33 D2                     XOR EDX,EDX
006E3E31  8A 90 CC 40 6E 00         MOV DL,byte ptr [EAX + 0x6e40cc]
switchD_006e3e37::switchD:
006E3E37  FF 24 95 B4 40 6E 00      JMP dword ptr [EDX*0x4 + 0x6e40b4]
switchD_006e3e37::caseD_2:
006E3E3E  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006E3E41  8D 45 F4                  LEA EAX,[EBP + -0xc]
006E3E44  50                        PUSH EAX
006E3E45  53                        PUSH EBX
006E3E46  51                        PUSH ECX
006E3E47  8B CF                     MOV ECX,EDI
006E3E49  E8 22 FC FF FF            CALL 0x006e3a70
006E3E4E  85 C0                     TEST EAX,EAX
006E3E50  0F 85 DB 01 00 00         JNZ 0x006e4031
006E3E56  F7 46 0C 00 00 00 80      TEST dword ptr [ESI + 0xc],0x80000000
006E3E5D  75 17                     JNZ 0x006e3e76
006E3E5F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006E3E62  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006E3E65  8B CF                     MOV ECX,EDI
006E3E67  52                        PUSH EDX
006E3E68  E8 D3 0E 00 00            CALL 0x006e4d40
006E3E6D  83 F8 01                  CMP EAX,0x1
006E3E70  0F 85 BB 01 00 00         JNZ 0x006e4031
LAB_006e3e76:
006E3E76  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006E3E79  56                        PUSH ESI
006E3E7A  8B 01                     MOV EAX,dword ptr [ECX]
006E3E7C  FF 10                     CALL dword ptr [EAX]
006E3E7E  E9 AB 01 00 00            JMP 0x006e402e
switchD_006e3e37::caseD_3:
006E3E83  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006E3E89  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
006E3E8F  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
006E3E95  53                        PUSH EBX
006E3E96  50                        PUSH EAX
006E3E97  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006E3E9A  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
006E3EA0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E3EA6  E8 45 99 04 00            CALL 0x0072d7f0
006E3EAB  8B F0                     MOV ESI,EAX
006E3EAD  83 C4 08                  ADD ESP,0x8
006E3EB0  3B F3                     CMP ESI,EBX
006E3EB2  0F 85 F3 00 00 00         JNZ 0x006e3fab
006E3EB8  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006E3EBB  8D 4D EC                  LEA ECX,[EBP + -0x14]
006E3EBE  51                        PUSH ECX
006E3EBF  8D 47 30                  LEA EAX,[EDI + 0x30]
006E3EC2  50                        PUSH EAX
006E3EC3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006E3EC6  E8 45 5A FD FF            CALL 0x006b9910
006E3ECB  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006E3ECE  33 C0                     XOR EAX,EAX
006E3ED0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006E3ED3  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006E3ED6  3B F3                     CMP ESI,EBX
006E3ED8  0F 86 AF 00 00 00         JBE 0x006e3f8d
006E3EDE  3B C6                     CMP EAX,ESI
006E3EE0  73 0D                     JNC 0x006e3eef
LAB_006e3ee2:
006E3EE2  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E3EE5  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
006E3EE8  0F AF D0                  IMUL EDX,EAX
006E3EEB  03 D3                     ADD EDX,EBX
006E3EED  EB 02                     JMP 0x006e3ef1
LAB_006e3eef:
006E3EEF  33 D2                     XOR EDX,EDX
LAB_006e3ef1:
006E3EF1  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
006E3EF4  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006E3EF7  39 5A 04                  CMP dword ptr [EDX + 0x4],EBX
006E3EFA  75 76                     JNZ 0x006e3f72
006E3EFC  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006E3EFF  F7 43 0C 00 00 00 80      TEST dword ptr [EBX + 0xc],0x80000000
006E3F06  75 27                     JNZ 0x006e3f2f
006E3F08  3B C6                     CMP EAX,ESI
006E3F0A  73 0B                     JNC 0x006e3f17
006E3F0C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E3F0F  0F AF D0                  IMUL EDX,EAX
006E3F12  03 51 1C                  ADD EDX,dword ptr [ECX + 0x1c]
006E3F15  EB 02                     JMP 0x006e3f19
LAB_006e3f17:
006E3F17  33 D2                     XOR EDX,EDX
LAB_006e3f19:
006E3F19  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006E3F1C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E3F1F  51                        PUSH ECX
006E3F20  8B CF                     MOV ECX,EDI
006E3F22  E8 19 0E 00 00            CALL 0x006e4d40
006E3F27  83 F8 01                  CMP EAX,0x1
006E3F2A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006E3F2D  75 43                     JNZ 0x006e3f72
LAB_006e3f2f:
006E3F2F  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
006E3F32  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
006E3F35  73 0B                     JNC 0x006e3f42
006E3F37  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006E3F3A  0F AF C8                  IMUL ECX,EAX
006E3F3D  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
006E3F40  EB 02                     JMP 0x006e3f44
LAB_006e3f42:
006E3F42  33 C9                     XOR ECX,ECX
LAB_006e3f44:
006E3F44  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
006E3F47  53                        PUSH EBX
006E3F48  8B 11                     MOV EDX,dword ptr [ECX]
006E3F4A  FF 12                     CALL dword ptr [EDX]
006E3F4C  3D FF FF 00 00            CMP EAX,0xffff
006E3F51  74 33                     JZ 0x006e3f86
006E3F53  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
006E3F56  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006E3F59  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
006E3F5C  73 0D                     JNC 0x006e3f6b
006E3F5E  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006E3F61  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
006E3F64  0F AF C8                  IMUL ECX,EAX
006E3F67  03 CE                     ADD ECX,ESI
006E3F69  EB 02                     JMP 0x006e3f6d
LAB_006e3f6b:
006E3F6B  33 C9                     XOR ECX,ECX
LAB_006e3f6d:
006E3F6D  F6 01 01                  TEST byte ptr [ECX],0x1
006E3F70  75 1B                     JNZ 0x006e3f8d
LAB_006e3f72:
006E3F72  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006E3F75  40                        INC EAX
006E3F76  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006E3F79  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006E3F7C  3B C6                     CMP EAX,ESI
006E3F7E  0F 82 5E FF FF FF         JC 0x006e3ee2
006E3F84  EB 07                     JMP 0x006e3f8d
LAB_006e3f86:
006E3F86  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
LAB_006e3f8d:
006E3F8D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006E3F90  8D 45 EC                  LEA EAX,[EBP + -0x14]
006E3F93  50                        PUSH EAX
006E3F94  51                        PUSH ECX
006E3F95  E8 26 59 FD FF            CALL 0x006b98c0
006E3F9A  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
006E3FA0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E3FA6  E9 86 00 00 00            JMP 0x006e4031
LAB_006e3fab:
006E3FAB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E3FAE  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
006E3FB4  8D 4D EC                  LEA ECX,[EBP + -0x14]
006E3FB7  83 C2 30                  ADD EDX,0x30
006E3FBA  51                        PUSH ECX
006E3FBB  52                        PUSH EDX
006E3FBC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E3FC1  E8 FA 58 FD FF            CALL 0x006b98c0
006E3FC6  68 0B 01 00 00            PUSH 0x10b
006E3FCB  68 8C E7 7E 00            PUSH 0x7ee78c
006E3FD0  53                        PUSH EBX
006E3FD1  56                        PUSH ESI
006E3FD2  E8 69 1E FC FF            CALL 0x006a5e40
006E3FD7  EB 58                     JMP 0x006e4031
switchD_006e3e37::caseD_f:
006E3FD9  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006E3FDC  56                        PUSH ESI
006E3FDD  8B CF                     MOV ECX,EDI
006E3FDF  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006E3FE2  8B 07                     MOV EAX,dword ptr [EDI]
006E3FE4  FF 50 18                  CALL dword ptr [EAX + 0x18]
006E3FE7  3B C3                     CMP EAX,EBX
006E3FE9  74 03                     JZ 0x006e3fee
006E3FEB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006e3fee:
006E3FEE  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
006E3FF1  56                        PUSH ESI
006E3FF2  51                        PUSH ECX
006E3FF3  8B CF                     MOV ECX,EDI
006E3FF5  E8 F6 FB FF FF            CALL 0x006e3bf0
006E3FFA  3B C3                     CMP EAX,EBX
006E3FFC  74 33                     JZ 0x006e4031
006E3FFE  EB 2E                     JMP 0x006e402e
switchD_006e3e37::caseD_0:
006E4000  51                        PUSH ECX
006E4001  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E4004  E8 97 05 00 00            CALL 0x006e45a0
006E4009  3B C3                     CMP EAX,EBX
006E400B  74 24                     JZ 0x006e4031
006E400D  F7 C7 00 00 00 80         TEST EDI,0x80000000
006E4013  75 05                     JNZ 0x006e401a
006E4015  83 38 01                  CMP dword ptr [EAX],0x1
006E4018  75 17                     JNZ 0x006e4031
LAB_006e401a:
006E401A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E401D  56                        PUSH ESI
006E401E  8B 11                     MOV EDX,dword ptr [ECX]
006E4020  FF 52 20                  CALL dword ptr [EDX + 0x20]
006E4023  EB 09                     JMP 0x006e402e
switchD_006e3e37::caseD_1:
006E4025  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006E4028  56                        PUSH ESI
006E4029  8B 01                     MOV EAX,dword ptr [ECX]
006E402B  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_006e402e:
006E402E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
switchD_006e3e37::caseD_4:
006E4031  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006E4034  81 FE FF FF 00 00         CMP ESI,0xffff
006E403A  75 17                     JNZ 0x006e4053
006E403C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E4042  68 22 01 00 00            PUSH 0x122
006E4047  68 8C E7 7E 00            PUSH 0x7ee78c
006E404C  51                        PUSH ECX
006E404D  56                        PUSH ESI
006E404E  E8 ED 1D FC FF            CALL 0x006a5e40
LAB_006e4053:
006E4053  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006E4056  8B C6                     MOV EAX,ESI
006E4058  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E405E  5F                        POP EDI
006E405F  5E                        POP ESI
006E4060  5B                        POP EBX
006E4061  8B E5                     MOV ESP,EBP
006E4063  5D                        POP EBP
006E4064  C2 0C 00                  RET 0xc
LAB_006e4067:
006E4067  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006E406A  68 D8 E8 7E 00            PUSH 0x7ee8d8
006E406F  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E4074  56                        PUSH ESI
006E4075  53                        PUSH EBX
006E4076  68 24 01 00 00            PUSH 0x124
006E407B  68 8C E7 7E 00            PUSH 0x7ee78c
006E4080  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E4085  E8 46 94 FC FF            CALL 0x006ad4d0
006E408A  83 C4 18                  ADD ESP,0x18
006E408D  85 C0                     TEST EAX,EAX
006E408F  74 01                     JZ 0x006e4092
006E4091  CC                        INT3
LAB_006e4092:
006E4092  68 25 01 00 00            PUSH 0x125
006E4097  68 8C E7 7E 00            PUSH 0x7ee78c
006E409C  53                        PUSH EBX
006E409D  56                        PUSH ESI
006E409E  E8 9D 1D FC FF            CALL 0x006a5e40
006E40A3  5F                        POP EDI
006E40A4  5E                        POP ESI
006E40A5  B8 FF FF 00 00            MOV EAX,0xffff
006E40AA  5B                        POP EBX
006E40AB  8B E5                     MOV ESP,EBP
006E40AD  5D                        POP EBP
006E40AE  C2 0C 00                  RET 0xc
