FUN_006b0fd0:
006B0FD0  55                        PUSH EBP
006B0FD1  8B EC                     MOV EBP,ESP
006B0FD3  53                        PUSH EBX
006B0FD4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B0FD7  56                        PUSH ESI
006B0FD8  57                        PUSH EDI
006B0FD9  33 FF                     XOR EDI,EDI
006B0FDB  8D 75 0C                  LEA ESI,[EBP + 0xc]
LAB_006b0fde:
006B0FDE  8B 06                     MOV EAX,dword ptr [ESI]
006B0FE0  85 C0                     TEST EAX,EAX
006B0FE2  7C 32                     JL 0x006b1016
006B0FE4  8B C8                     MOV ECX,EAX
006B0FE6  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B0FEC  79 05                     JNS 0x006b0ff3
006B0FEE  49                        DEC ECX
006B0FEF  83 C9 E0                  OR ECX,0xffffffe0
006B0FF2  41                        INC ECX
LAB_006b0ff3:
006B0FF3  BA 01 00 00 00            MOV EDX,0x1
006B0FF8  D3 E2                     SHL EDX,CL
006B0FFA  8B CA                     MOV ECX,EDX
006B0FFC  99                        CDQ
006B0FFD  83 E2 1F                  AND EDX,0x1f
006B1000  03 C2                     ADD EAX,EDX
006B1002  C1 F8 05                  SAR EAX,0x5
006B1005  85 0C 83                  TEST dword ptr [EBX + EAX*0x4],ECX
006B1008  74 16                     JZ 0x006b1020
006B100A  47                        INC EDI
006B100B  83 C6 04                  ADD ESI,0x4
006B100E  81 FF 80 00 00 00         CMP EDI,0x80
006B1014  7C C8                     JL 0x006b0fde
LAB_006b1016:
006B1016  5F                        POP EDI
006B1017  5E                        POP ESI
006B1018  B8 01 00 00 00            MOV EAX,0x1
006B101D  5B                        POP EBX
006B101E  5D                        POP EBP
006B101F  C3                        RET
LAB_006b1020:
006B1020  5F                        POP EDI
006B1021  5E                        POP ESI
006B1022  33 C0                     XOR EAX,EAX
006B1024  5B                        POP EBX
006B1025  5D                        POP EBP
006B1026  C3                        RET
