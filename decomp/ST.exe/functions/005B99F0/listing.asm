FUN_005b99f0:
005B99F0  55                        PUSH EBP
005B99F1  8B EC                     MOV EBP,ESP
005B99F3  83 EC 48                  SUB ESP,0x48
005B99F6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005B99F9  53                        PUSH EBX
005B99FA  56                        PUSH ESI
005B99FB  57                        PUSH EDI
005B99FC  85 C0                     TEST EAX,EAX
005B99FE  0F 84 C3 00 00 00         JZ 0x005b9ac7
005B9A04  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B9A07  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B9A0C  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B9A0F  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B9A12  6A 00                     PUSH 0x0
005B9A14  52                        PUSH EDX
005B9A15  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B9A18  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B9A1E  E8 CD 3D 17 00            CALL 0x0072d7f0
005B9A23  8B F0                     MOV ESI,EAX
005B9A25  83 C4 08                  ADD ESP,0x8
005B9A28  85 F6                     TEST ESI,ESI
005B9A2A  75 62                     JNZ 0x005b9a8e
005B9A2C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B9A2F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005B9A32  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
005B9A35  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005B9A38  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005B9A3B  8D 47 04                  LEA EAX,[EDI + 0x4]
005B9A3E  50                        PUSH EAX
005B9A3F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B9A42  51                        PUSH ECX
005B9A43  53                        PUSH EBX
005B9A44  52                        PUSH EDX
005B9A45  56                        PUSH ESI
005B9A46  50                        PUSH EAX
005B9A47  E8 A4 CE 10 00            CALL 0x006c68f0
005B9A4C  8B 0F                     MOV ECX,dword ptr [EDI]
005B9A4E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
005B9A51  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005B9A54  51                        PUSH ECX
005B9A55  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005B9A58  52                        PUSH EDX
005B9A59  53                        PUSH EBX
005B9A5A  50                        PUSH EAX
005B9A5B  56                        PUSH ESI
005B9A5C  51                        PUSH ECX
005B9A5D  E8 EE CD 10 00            CALL 0x006c6850
005B9A62  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005B9A65  8B 0F                     MOV ECX,dword ptr [EDI]
005B9A67  51                        PUSH ECX
005B9A68  8D 42 16                  LEA EAX,[EDX + 0x16]
005B9A6B  8D 54 1E FF               LEA EDX,[ESI + EBX*0x1 + -0x1]
005B9A6F  50                        PUSH EAX
005B9A70  52                        PUSH EDX
005B9A71  50                        PUSH EAX
005B9A72  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B9A75  56                        PUSH ESI
005B9A76  50                        PUSH EAX
005B9A77  E8 34 B9 10 00            CALL 0x006c53b0
005B9A7C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B9A7F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B9A85  5F                        POP EDI
005B9A86  5E                        POP ESI
005B9A87  5B                        POP EBX
005B9A88  8B E5                     MOV ESP,EBP
005B9A8A  5D                        POP EBP
005B9A8B  C2 20 00                  RET 0x20
LAB_005b9a8e:
005B9A8E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B9A91  68 88 CD 7C 00            PUSH 0x7ccd88
005B9A96  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B9A9B  56                        PUSH ESI
005B9A9C  6A 00                     PUSH 0x0
005B9A9E  6A 47                     PUSH 0x47
005B9AA0  68 28 CD 7C 00            PUSH 0x7ccd28
005B9AA5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B9AAB  E8 20 3A 0F 00            CALL 0x006ad4d0
005B9AB0  83 C4 18                  ADD ESP,0x18
005B9AB3  85 C0                     TEST EAX,EAX
005B9AB5  74 01                     JZ 0x005b9ab8
005B9AB7  CC                        INT3
LAB_005b9ab8:
005B9AB8  6A 47                     PUSH 0x47
005B9ABA  68 28 CD 7C 00            PUSH 0x7ccd28
005B9ABF  6A 00                     PUSH 0x0
005B9AC1  56                        PUSH ESI
005B9AC2  E8 79 C3 0E 00            CALL 0x006a5e40
LAB_005b9ac7:
005B9AC7  5F                        POP EDI
005B9AC8  5E                        POP ESI
005B9AC9  5B                        POP EBX
005B9ACA  8B E5                     MOV ESP,EBP
005B9ACC  5D                        POP EBP
005B9ACD  C2 20 00                  RET 0x20
