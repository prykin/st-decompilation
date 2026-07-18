FUN_006b0e20:
006B0E20  55                        PUSH EBP
006B0E21  8B EC                     MOV EBP,ESP
006B0E23  53                        PUSH EBX
006B0E24  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B0E27  56                        PUSH ESI
006B0E28  57                        PUSH EDI
006B0E29  33 F6                     XOR ESI,ESI
006B0E2B  8D 7D 0C                  LEA EDI,[EBP + 0xc]
LAB_006b0e2e:
006B0E2E  8B 0F                     MOV ECX,dword ptr [EDI]
006B0E30  85 C9                     TEST ECX,ECX
006B0E32  7C 34                     JL 0x006b0e68
006B0E34  8B C1                     MOV EAX,ECX
006B0E36  99                        CDQ
006B0E37  83 E2 1F                  AND EDX,0x1f
006B0E3A  03 C2                     ADD EAX,EDX
006B0E3C  C1 F8 05                  SAR EAX,0x5
006B0E3F  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B0E45  8D 04 83                  LEA EAX,[EBX + EAX*0x4]
006B0E48  79 05                     JNS 0x006b0e4f
006B0E4A  49                        DEC ECX
006B0E4B  83 C9 E0                  OR ECX,0xffffffe0
006B0E4E  41                        INC ECX
LAB_006b0e4f:
006B0E4F  BA 01 00 00 00            MOV EDX,0x1
006B0E54  83 C7 04                  ADD EDI,0x4
006B0E57  D3 E2                     SHL EDX,CL
006B0E59  8B 08                     MOV ECX,dword ptr [EAX]
006B0E5B  0B CA                     OR ECX,EDX
006B0E5D  46                        INC ESI
006B0E5E  81 FE 80 00 00 00         CMP ESI,0x80
006B0E64  89 08                     MOV dword ptr [EAX],ECX
006B0E66  7C C6                     JL 0x006b0e2e
LAB_006b0e68:
006B0E68  5F                        POP EDI
006B0E69  5E                        POP ESI
006B0E6A  5B                        POP EBX
006B0E6B  5D                        POP EBP
006B0E6C  C3                        RET
