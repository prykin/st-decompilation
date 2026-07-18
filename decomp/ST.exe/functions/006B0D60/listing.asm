FUN_006b0d60:
006B0D60  55                        PUSH EBP
006B0D61  8B EC                     MOV EBP,ESP
006B0D63  53                        PUSH EBX
006B0D64  56                        PUSH ESI
006B0D65  57                        PUSH EDI
006B0D66  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B0D69  33 F6                     XOR ESI,ESI
006B0D6B  8D 5D 0C                  LEA EBX,[EBP + 0xc]
006B0D6E  89 37                     MOV dword ptr [EDI],ESI
006B0D70  89 77 04                  MOV dword ptr [EDI + 0x4],ESI
006B0D73  89 77 08                  MOV dword ptr [EDI + 0x8],ESI
006B0D76  89 77 0C                  MOV dword ptr [EDI + 0xc],ESI
LAB_006b0d79:
006B0D79  8B 0B                     MOV ECX,dword ptr [EBX]
006B0D7B  85 C9                     TEST ECX,ECX
006B0D7D  7C 34                     JL 0x006b0db3
006B0D7F  8B C1                     MOV EAX,ECX
006B0D81  99                        CDQ
006B0D82  83 E2 1F                  AND EDX,0x1f
006B0D85  03 C2                     ADD EAX,EDX
006B0D87  C1 F8 05                  SAR EAX,0x5
006B0D8A  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B0D90  8D 04 87                  LEA EAX,[EDI + EAX*0x4]
006B0D93  79 05                     JNS 0x006b0d9a
006B0D95  49                        DEC ECX
006B0D96  83 C9 E0                  OR ECX,0xffffffe0
006B0D99  41                        INC ECX
LAB_006b0d9a:
006B0D9A  BA 01 00 00 00            MOV EDX,0x1
006B0D9F  83 C3 04                  ADD EBX,0x4
006B0DA2  D3 E2                     SHL EDX,CL
006B0DA4  8B 08                     MOV ECX,dword ptr [EAX]
006B0DA6  0B CA                     OR ECX,EDX
006B0DA8  46                        INC ESI
006B0DA9  81 FE 80 00 00 00         CMP ESI,0x80
006B0DAF  89 08                     MOV dword ptr [EAX],ECX
006B0DB1  7C C6                     JL 0x006b0d79
LAB_006b0db3:
006B0DB3  5F                        POP EDI
006B0DB4  5E                        POP ESI
006B0DB5  5B                        POP EBX
006B0DB6  5D                        POP EBP
006B0DB7  C3                        RET
