FUN_006b0ed0:
006B0ED0  55                        PUSH EBP
006B0ED1  8B EC                     MOV EBP,ESP
006B0ED3  53                        PUSH EBX
006B0ED4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B0ED7  56                        PUSH ESI
006B0ED8  57                        PUSH EDI
006B0ED9  33 F6                     XOR ESI,ESI
006B0EDB  8D 7D 0C                  LEA EDI,[EBP + 0xc]
LAB_006b0ede:
006B0EDE  8B 0F                     MOV ECX,dword ptr [EDI]
006B0EE0  85 C9                     TEST ECX,ECX
006B0EE2  7C 36                     JL 0x006b0f1a
006B0EE4  8B C1                     MOV EAX,ECX
006B0EE6  99                        CDQ
006B0EE7  83 E2 1F                  AND EDX,0x1f
006B0EEA  03 C2                     ADD EAX,EDX
006B0EEC  C1 F8 05                  SAR EAX,0x5
006B0EEF  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B0EF5  8D 04 83                  LEA EAX,[EBX + EAX*0x4]
006B0EF8  79 05                     JNS 0x006b0eff
006B0EFA  49                        DEC ECX
006B0EFB  83 C9 E0                  OR ECX,0xffffffe0
006B0EFE  41                        INC ECX
LAB_006b0eff:
006B0EFF  BA 01 00 00 00            MOV EDX,0x1
006B0F04  83 C7 04                  ADD EDI,0x4
006B0F07  D3 E2                     SHL EDX,CL
006B0F09  8B 08                     MOV ECX,dword ptr [EAX]
006B0F0B  F7 D2                     NOT EDX
006B0F0D  23 CA                     AND ECX,EDX
006B0F0F  46                        INC ESI
006B0F10  81 FE 80 00 00 00         CMP ESI,0x80
006B0F16  89 08                     MOV dword ptr [EAX],ECX
006B0F18  7C C4                     JL 0x006b0ede
LAB_006b0f1a:
006B0F1A  5F                        POP EDI
006B0F1B  5E                        POP ESI
006B0F1C  5B                        POP EBX
006B0F1D  5D                        POP EBP
006B0F1E  C3                        RET
