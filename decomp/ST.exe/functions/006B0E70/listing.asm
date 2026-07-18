FUN_006b0e70:
006B0E70  55                        PUSH EBP
006B0E71  8B EC                     MOV EBP,ESP
006B0E73  53                        PUSH EBX
006B0E74  56                        PUSH ESI
006B0E75  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B0E78  57                        PUSH EDI
006B0E79  81 FE 80 00 00 00         CMP ESI,0x80
006B0E7F  7D 3D                     JGE 0x006b0ebe
006B0E81  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B0E84  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006b0e87:
006B0E87  3B F3                     CMP ESI,EBX
006B0E89  7F 33                     JG 0x006b0ebe
006B0E8B  8B C6                     MOV EAX,ESI
006B0E8D  8B CE                     MOV ECX,ESI
006B0E8F  99                        CDQ
006B0E90  83 E2 1F                  AND EDX,0x1f
006B0E93  03 C2                     ADD EAX,EDX
006B0E95  C1 F8 05                  SAR EAX,0x5
006B0E98  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B0E9E  8D 04 87                  LEA EAX,[EDI + EAX*0x4]
006B0EA1  79 05                     JNS 0x006b0ea8
006B0EA3  49                        DEC ECX
006B0EA4  83 C9 E0                  OR ECX,0xffffffe0
006B0EA7  41                        INC ECX
LAB_006b0ea8:
006B0EA8  BA 01 00 00 00            MOV EDX,0x1
006B0EAD  D3 E2                     SHL EDX,CL
006B0EAF  8B 08                     MOV ECX,dword ptr [EAX]
006B0EB1  0B CA                     OR ECX,EDX
006B0EB3  46                        INC ESI
006B0EB4  81 FE 80 00 00 00         CMP ESI,0x80
006B0EBA  89 08                     MOV dword ptr [EAX],ECX
006B0EBC  7C C9                     JL 0x006b0e87
LAB_006b0ebe:
006B0EBE  5F                        POP EDI
006B0EBF  5E                        POP ESI
006B0EC0  5B                        POP EBX
006B0EC1  5D                        POP EBP
006B0EC2  C3                        RET
