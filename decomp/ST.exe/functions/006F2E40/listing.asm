FUN_006f2e40:
006F2E40  55                        PUSH EBP
006F2E41  8B EC                     MOV EBP,ESP
006F2E43  81 EC 4C 02 00 00         SUB ESP,0x24c
006F2E49  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F2E4E  53                        PUSH EBX
006F2E4F  56                        PUSH ESI
006F2E50  57                        PUSH EDI
006F2E51  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F2E54  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F2E57  6A 00                     PUSH 0x0
006F2E59  52                        PUSH EDX
006F2E5A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F2E61  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F2E64  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2E6A  E8 81 A9 03 00            CALL 0x0072d7f0
006F2E6F  8B F0                     MOV ESI,EAX
006F2E71  83 C4 08                  ADD ESP,0x8
006F2E74  85 F6                     TEST ESI,ESI
006F2E76  0F 85 D7 00 00 00         JNZ 0x006f2f53
006F2E7C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F2E7F  85 C0                     TEST EAX,EAX
006F2E81  75 14                     JNZ 0x006f2e97
006F2E83  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F2E88  6A 37                     PUSH 0x37
006F2E8A  68 3C FD 7E 00            PUSH 0x7efd3c
006F2E8F  50                        PUSH EAX
006F2E90  6A CC                     PUSH -0x34
006F2E92  E8 A9 2F FB FF            CALL 0x006a5e40
LAB_006f2e97:
006F2E97  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006F2E9A  83 C9 FF                  OR ECX,0xffffffff
006F2E9D  33 C0                     XOR EAX,EAX
006F2E9F  8D 95 B5 FD FF FF         LEA EDX,[EBP + 0xfffffdb5]
006F2EA5  F2 AE                     SCASB.REPNE ES:EDI
006F2EA7  F7 D1                     NOT ECX
006F2EA9  2B F9                     SUB EDI,ECX
006F2EAB  C6 85 B4 FD FF FF 0C      MOV byte ptr [EBP + 0xfffffdb4],0xc
006F2EB2  8B C1                     MOV EAX,ECX
006F2EB4  8B F7                     MOV ESI,EDI
006F2EB6  8B FA                     MOV EDI,EDX
006F2EB8  C1 E9 02                  SHR ECX,0x2
006F2EBB  F3 A5                     MOVSD.REP ES:EDI,ESI
006F2EBD  8B C8                     MOV ECX,EAX
006F2EBF  83 E1 03                  AND ECX,0x3
006F2EC2  F3 A4                     MOVSB.REP ES:EDI,ESI
006F2EC4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F2EC7  8D 8D B4 FD FF FF         LEA ECX,[EBP + 0xfffffdb4]
006F2ECD  51                        PUSH ECX
006F2ECE  68 10 2D 6F 00            PUSH 0x6f2d10
006F2ED3  8B CF                     MOV ECX,EDI
006F2ED5  E8 D6 E3 FF FF            CALL 0x006f12b0
006F2EDA  8B CF                     MOV ECX,EDI
006F2EDC  E8 AF F8 FF FF            CALL 0x006f2790
006F2EE1  8B F0                     MOV ESI,EAX
006F2EE3  85 F6                     TEST ESI,ESI
006F2EE5  74 5A                     JZ 0x006f2f41
LAB_006f2ee7:
006F2EE7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F2EEA  6A 01                     PUSH 0x1
006F2EEC  52                        PUSH EDX
006F2EED  56                        PUSH ESI
006F2EEE  57                        PUSH EDI
006F2EEF  E8 9C FE FF FF            CALL 0x006f2d90
006F2EF4  83 C4 10                  ADD ESP,0x10
006F2EF7  8B CF                     MOV ECX,EDI
006F2EF9  8B D8                     MOV EBX,EAX
006F2EFB  6A 01                     PUSH 0x1
006F2EFD  6A 00                     PUSH 0x0
006F2EFF  56                        PUSH ESI
006F2F00  6A 0C                     PUSH 0xc
006F2F02  E8 F9 F6 FF FF            CALL 0x006f2600
006F2F07  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F2F0A  51                        PUSH ECX
006F2F0B  56                        PUSH ESI
006F2F0C  57                        PUSH EDI
006F2F0D  50                        PUSH EAX
006F2F0E  53                        PUSH EBX
006F2F0F  FF 55 10                  CALL dword ptr [EBP + 0x10]
006F2F12  83 C4 14                  ADD ESP,0x14
006F2F15  85 C0                     TEST EAX,EAX
006F2F17  74 14                     JZ 0x006f2f2d
006F2F19  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006F2F1F  6A 3F                     PUSH 0x3f
006F2F21  68 3C FD 7E 00            PUSH 0x7efd3c
006F2F26  52                        PUSH EDX
006F2F27  50                        PUSH EAX
006F2F28  E8 13 2F FB FF            CALL 0x006a5e40
LAB_006f2f2d:
006F2F2D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F2F30  41                        INC ECX
006F2F31  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F2F34  8B CF                     MOV ECX,EDI
006F2F36  E8 55 F8 FF FF            CALL 0x006f2790
006F2F3B  8B F0                     MOV ESI,EAX
006F2F3D  85 F6                     TEST ESI,ESI
006F2F3F  75 A6                     JNZ 0x006f2ee7
LAB_006f2f41:
006F2F41  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F2F44  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F2F49  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F2F4C  5F                        POP EDI
006F2F4D  5E                        POP ESI
006F2F4E  5B                        POP EBX
006F2F4F  8B E5                     MOV ESP,EBP
006F2F51  5D                        POP EBP
006F2F52  C3                        RET
LAB_006f2f53:
006F2F53  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F2F56  68 60 FD 7E 00            PUSH 0x7efd60
006F2F5B  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F2F60  56                        PUSH ESI
006F2F61  6A 00                     PUSH 0x0
006F2F63  6A 45                     PUSH 0x45
006F2F65  68 3C FD 7E 00            PUSH 0x7efd3c
006F2F6A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F2F70  E8 5B A5 FB FF            CALL 0x006ad4d0
006F2F75  83 C4 18                  ADD ESP,0x18
006F2F78  85 C0                     TEST EAX,EAX
006F2F7A  74 01                     JZ 0x006f2f7d
006F2F7C  CC                        INT3
LAB_006f2f7d:
006F2F7D  6A 47                     PUSH 0x47
006F2F7F  68 3C FD 7E 00            PUSH 0x7efd3c
006F2F84  6A 00                     PUSH 0x0
006F2F86  56                        PUSH ESI
006F2F87  E8 B4 2E FB FF            CALL 0x006a5e40
006F2F8C  85 F6                     TEST ESI,ESI
006F2F8E  7D 09                     JGE 0x006f2f99
006F2F90  8B C6                     MOV EAX,ESI
006F2F92  5F                        POP EDI
006F2F93  5E                        POP ESI
006F2F94  5B                        POP EBX
006F2F95  8B E5                     MOV ESP,EBP
006F2F97  5D                        POP EBP
006F2F98  C3                        RET
LAB_006f2f99:
006F2F99  5F                        POP EDI
006F2F9A  5E                        POP ESI
006F2F9B  83 C8 FF                  OR EAX,0xffffffff
006F2F9E  5B                        POP EBX
006F2F9F  8B E5                     MOV ESP,EBP
006F2FA1  5D                        POP EBP
006F2FA2  C3                        RET
