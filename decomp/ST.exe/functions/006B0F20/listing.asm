FUN_006b0f20:
006B0F20  55                        PUSH EBP
006B0F21  8B EC                     MOV EBP,ESP
006B0F23  53                        PUSH EBX
006B0F24  56                        PUSH ESI
006B0F25  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B0F28  57                        PUSH EDI
006B0F29  81 FE 80 00 00 00         CMP ESI,0x80
006B0F2F  7D 3F                     JGE 0x006b0f70
006B0F31  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B0F34  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006b0f37:
006B0F37  3B F3                     CMP ESI,EBX
006B0F39  7F 35                     JG 0x006b0f70
006B0F3B  8B C6                     MOV EAX,ESI
006B0F3D  8B CE                     MOV ECX,ESI
006B0F3F  99                        CDQ
006B0F40  83 E2 1F                  AND EDX,0x1f
006B0F43  03 C2                     ADD EAX,EDX
006B0F45  C1 F8 05                  SAR EAX,0x5
006B0F48  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B0F4E  8D 04 87                  LEA EAX,[EDI + EAX*0x4]
006B0F51  79 05                     JNS 0x006b0f58
006B0F53  49                        DEC ECX
006B0F54  83 C9 E0                  OR ECX,0xffffffe0
006B0F57  41                        INC ECX
LAB_006b0f58:
006B0F58  BA 01 00 00 00            MOV EDX,0x1
006B0F5D  D3 E2                     SHL EDX,CL
006B0F5F  8B 08                     MOV ECX,dword ptr [EAX]
006B0F61  F7 D2                     NOT EDX
006B0F63  23 CA                     AND ECX,EDX
006B0F65  46                        INC ESI
006B0F66  81 FE 80 00 00 00         CMP ESI,0x80
006B0F6C  89 08                     MOV dword ptr [EAX],ECX
006B0F6E  7C C7                     JL 0x006b0f37
LAB_006b0f70:
006B0F70  5F                        POP EDI
006B0F71  5E                        POP ESI
006B0F72  5B                        POP EBX
006B0F73  5D                        POP EBP
006B0F74  C3                        RET
