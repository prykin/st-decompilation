SystemClassTy::Life:
006E5D90  55                        PUSH EBP
006E5D91  8B EC                     MOV EBP,ESP
006E5D93  83 EC 6C                  SUB ESP,0x6c
006E5D96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E5D9B  53                        PUSH EBX
006E5D9C  56                        PUSH ESI
006E5D9D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006E5DA0  57                        PUSH EDI
006E5DA1  8D 55 98                  LEA EDX,[EBP + -0x68]
006E5DA4  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006E5DA7  6A 00                     PUSH 0x0
006E5DA9  52                        PUSH EDX
006E5DAA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006E5DB1  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006E5DB4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5DBA  E8 31 7A 04 00            CALL 0x0072d7f0
006E5DBF  8B F0                     MOV ESI,EAX
006E5DC1  83 C4 08                  ADD ESP,0x8
006E5DC4  85 F6                     TEST ESI,ESI
006E5DC6  0F 85 E7 00 00 00         JNZ 0x006e5eb3
006E5DCC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006E5DCF  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006E5DD2  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E5DD5  85 C0                     TEST EAX,EAX
006E5DD7  74 4C                     JZ 0x006e5e25
LAB_006e5dd9:
006E5DD9  76 05                     JBE 0x006e5de0
006E5DDB  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
006E5DDE  EB 02                     JMP 0x006e5de2
LAB_006e5de0:
006E5DE0  33 C9                     XOR ECX,ECX
LAB_006e5de2:
006E5DE2  8B 06                     MOV EAX,dword ptr [ESI]
006E5DE4  51                        PUSH ECX
006E5DE5  8B CE                     MOV ECX,ESI
006E5DE7  FF 50 18                  CALL dword ptr [EAX + 0x18]
006E5DEA  8B D8                     MOV EBX,EAX
006E5DEC  81 FB FF FF 00 00         CMP EBX,0xffff
006E5DF2  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006E5DF5  75 17                     JNZ 0x006e5e0e
006E5DF7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E5DFD  68 84 04 00 00            PUSH 0x484
006E5E02  68 8C E7 7E 00            PUSH 0x7ee78c
006E5E07  51                        PUSH ECX
006E5E08  50                        PUSH EAX
006E5E09  E8 32 00 FC FF            CALL 0x006a5e40
LAB_006e5e0e:
006E5E0E  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006E5E11  6A 00                     PUSH 0x0
006E5E13  52                        PUSH EDX
006E5E14  E8 57 AE FC FF            CALL 0x006b0c70
006E5E19  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006E5E1C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E5E1F  85 C0                     TEST EAX,EAX
006E5E21  75 B6                     JNZ 0x006e5dd9
006E5E23  EB 03                     JMP 0x006e5e28
LAB_006e5e25:
006E5E25  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006e5e28:
006E5E28  B9 08 00 00 00            MOV ECX,0x8
006E5E2D  33 C0                     XOR EAX,EAX
006E5E2F  8D 7D D8                  LEA EDI,[EBP + -0x28]
006E5E32  F3 AB                     STOSD.REP ES:EDI
006E5E34  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006E5E37  8D 45 D8                  LEA EAX,[EBP + -0x28]
006E5E3A  50                        PUSH EAX
006E5E3B  8B CE                     MOV ECX,ESI
006E5E3D  E8 2E FE FF FF            CALL 0x006e5c70
006E5E42  3D FF FF 00 00            CMP EAX,0xffff
006E5E47  75 17                     JNZ 0x006e5e60
006E5E49  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E5E4F  68 8A 04 00 00            PUSH 0x48a
006E5E54  68 8C E7 7E 00            PUSH 0x7ee78c
006E5E59  51                        PUSH ECX
006E5E5A  50                        PUSH EAX
006E5E5B  E8 E0 FF FB FF            CALL 0x006a5e40
LAB_006e5e60:
006E5E60  85 DB                     TEST EBX,EBX
006E5E62  75 3D                     JNZ 0x006e5ea1
006E5E64  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006E5E67  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E5E6A  85 C0                     TEST EAX,EAX
006E5E6C  74 33                     JZ 0x006e5ea1
LAB_006e5e6e:
006E5E6E  76 05                     JBE 0x006e5e75
006E5E70  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
006E5E73  EB 02                     JMP 0x006e5e77
LAB_006e5e75:
006E5E75  33 C9                     XOR ECX,ECX
LAB_006e5e77:
006E5E77  8B 16                     MOV EDX,dword ptr [ESI]
006E5E79  51                        PUSH ECX
006E5E7A  8B CE                     MOV ECX,ESI
006E5E7C  FF 52 18                  CALL dword ptr [EDX + 0x18]
006E5E7F  8B D8                     MOV EBX,EAX
006E5E81  81 FB FF FF 00 00         CMP EBX,0xffff
006E5E87  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006E5E8A  74 15                     JZ 0x006e5ea1
006E5E8C  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E5E8F  6A 00                     PUSH 0x0
006E5E91  50                        PUSH EAX
006E5E92  E8 D9 AD FC FF            CALL 0x006b0c70
006E5E97  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006E5E9A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E5E9D  85 C0                     TEST EAX,EAX
006E5E9F  75 CD                     JNZ 0x006e5e6e
LAB_006e5ea1:
006E5EA1  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006E5EA4  8B C3                     MOV EAX,EBX
006E5EA6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5EAC  5F                        POP EDI
006E5EAD  5E                        POP ESI
006E5EAE  5B                        POP EBX
006E5EAF  8B E5                     MOV ESP,EBP
006E5EB1  5D                        POP EBP
006E5EB2  C3                        RET
LAB_006e5eb3:
006E5EB3  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006E5EB6  68 B8 EB 7E 00            PUSH 0x7eebb8
006E5EBB  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E5EC0  56                        PUSH ESI
006E5EC1  6A 00                     PUSH 0x0
006E5EC3  68 95 04 00 00            PUSH 0x495
006E5EC8  68 8C E7 7E 00            PUSH 0x7ee78c
006E5ECD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E5ED3  E8 F8 75 FC FF            CALL 0x006ad4d0
006E5ED8  83 C4 18                  ADD ESP,0x18
006E5EDB  85 C0                     TEST EAX,EAX
006E5EDD  74 01                     JZ 0x006e5ee0
006E5EDF  CC                        INT3
LAB_006e5ee0:
006E5EE0  68 96 04 00 00            PUSH 0x496
006E5EE5  68 8C E7 7E 00            PUSH 0x7ee78c
006E5EEA  6A 00                     PUSH 0x0
006E5EEC  56                        PUSH ESI
006E5EED  E8 4E FF FB FF            CALL 0x006a5e40
006E5EF2  8B C6                     MOV EAX,ESI
006E5EF4  5F                        POP EDI
006E5EF5  5E                        POP ESI
006E5EF6  5B                        POP EBX
006E5EF7  8B E5                     MOV ESP,EBP
006E5EF9  5D                        POP EBP
006E5EFA  C3                        RET
