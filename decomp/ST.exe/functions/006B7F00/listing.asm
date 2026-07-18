FUN_006b7f00:
006B7F00  55                        PUSH EBP
006B7F01  8B EC                     MOV EBP,ESP
006B7F03  83 EC 64                  SUB ESP,0x64
006B7F06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006B7F0B  56                        PUSH ESI
006B7F0C  57                        PUSH EDI
006B7F0D  8D 55 A0                  LEA EDX,[EBP + -0x60]
006B7F10  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006B7F13  6A 00                     PUSH 0x0
006B7F15  52                        PUSH EDX
006B7F16  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006B7F19  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B7F1F  E8 CC 58 07 00            CALL 0x0072d7f0
006B7F24  83 C4 08                  ADD ESP,0x8
006B7F27  85 C0                     TEST EAX,EAX
006B7F29  0F 85 93 00 00 00         JNZ 0x006b7fc2
006B7F2F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B7F32  8B 71 30                  MOV ESI,dword ptr [ECX + 0x30]
006B7F35  85 F6                     TEST ESI,ESI
006B7F37  74 76                     JZ 0x006b7faf
006B7F39  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B7F3C  25 FF 00 00 00            AND EAX,0xff
006B7F41  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006B7F44  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
006B7F47  8A 44 C1 38               MOV AL,byte ptr [ECX + EAX*0x8 + 0x38]
006B7F4B  A8 01                     TEST AL,0x1
006B7F4D  74 60                     JZ 0x006b7faf
006B7F4F  B9 06 00 00 00            MOV ECX,0x6
006B7F54  33 C0                     XOR EAX,EAX
006B7F56  8D 7D E0                  LEA EDI,[EBP + -0x20]
006B7F59  6A 00                     PUSH 0x0
006B7F5B  F3 AB                     STOSD.REP ES:EDI
006B7F5D  8B 4A 3C                  MOV ECX,dword ptr [EDX + 0x3c]
006B7F60  8B 52 44                  MOV EDX,dword ptr [EDX + 0x44]
006B7F63  8D 45 F8                  LEA EAX,[EBP + -0x8]
006B7F66  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B7F69  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B7F6C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006B7F6F  8D 45 E0                  LEA EAX,[EBP + -0x20]
006B7F72  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006B7F75  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B7F78  50                        PUSH EAX
006B7F79  56                        PUSH ESI
006B7F7A  C7 45 E0 18 00 00 00      MOV dword ptr [EBP + -0x20],0x18
006B7F81  C7 45 F0 04 00 00 00      MOV dword ptr [EBP + -0x10],0x4
006B7F88  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B7F8B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006B7F8E  FF 15 C4 BE 85 00         CALL dword ptr [0x0085bec4]
006B7F94  85 C0                     TEST EAX,EAX
006B7F96  74 17                     JZ 0x006b7faf
006B7F98  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B7F9E  68 C8 00 00 00            PUSH 0xc8
006B7FA3  68 E8 DB 7E 00            PUSH 0x7edbe8
006B7FA8  51                        PUSH ECX
006B7FA9  50                        PUSH EAX
006B7FAA  E8 91 DE FE FF            CALL 0x006a5e40
LAB_006b7faf:
006B7FAF  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
006B7FB2  33 C0                     XOR EAX,EAX
006B7FB4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B7FBA  5F                        POP EDI
006B7FBB  5E                        POP ESI
006B7FBC  8B E5                     MOV ESP,EBP
006B7FBE  5D                        POP EBP
006B7FBF  C2 10 00                  RET 0x10
LAB_006b7fc2:
006B7FC2  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006B7FC5  68 CD 00 00 00            PUSH 0xcd
006B7FCA  68 E8 DB 7E 00            PUSH 0x7edbe8
006B7FCF  6A 00                     PUSH 0x0
006B7FD1  50                        PUSH EAX
006B7FD2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B7FD8  E8 63 DE FE FF            CALL 0x006a5e40
006B7FDD  5F                        POP EDI
006B7FDE  83 C8 FF                  OR EAX,0xffffffff
006B7FE1  5E                        POP ESI
006B7FE2  8B E5                     MOV ESP,EBP
006B7FE4  5D                        POP EBP
006B7FE5  C2 10 00                  RET 0x10
