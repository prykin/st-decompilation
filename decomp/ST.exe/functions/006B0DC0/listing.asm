FUN_006b0dc0:
006B0DC0  55                        PUSH EBP
006B0DC1  8B EC                     MOV EBP,ESP
006B0DC3  53                        PUSH EBX
006B0DC4  56                        PUSH ESI
006B0DC5  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B0DC8  57                        PUSH EDI
006B0DC9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B0DCC  33 C0                     XOR EAX,EAX
006B0DCE  81 FE 80 00 00 00         CMP ESI,0x80
006B0DD4  89 07                     MOV dword ptr [EDI],EAX
006B0DD6  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
006B0DD9  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
006B0DDC  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
006B0DDF  7D 3A                     JGE 0x006b0e1b
006B0DE1  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
LAB_006b0de4:
006B0DE4  3B F3                     CMP ESI,EBX
006B0DE6  7F 33                     JG 0x006b0e1b
006B0DE8  8B C6                     MOV EAX,ESI
006B0DEA  8B CE                     MOV ECX,ESI
006B0DEC  99                        CDQ
006B0DED  83 E2 1F                  AND EDX,0x1f
006B0DF0  03 C2                     ADD EAX,EDX
006B0DF2  C1 F8 05                  SAR EAX,0x5
006B0DF5  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B0DFB  8D 04 87                  LEA EAX,[EDI + EAX*0x4]
006B0DFE  79 05                     JNS 0x006b0e05
006B0E00  49                        DEC ECX
006B0E01  83 C9 E0                  OR ECX,0xffffffe0
006B0E04  41                        INC ECX
LAB_006b0e05:
006B0E05  BA 01 00 00 00            MOV EDX,0x1
006B0E0A  D3 E2                     SHL EDX,CL
006B0E0C  8B 08                     MOV ECX,dword ptr [EAX]
006B0E0E  0B CA                     OR ECX,EDX
006B0E10  46                        INC ESI
006B0E11  81 FE 80 00 00 00         CMP ESI,0x80
006B0E17  89 08                     MOV dword ptr [EAX],ECX
006B0E19  7C C9                     JL 0x006b0de4
LAB_006b0e1b:
006B0E1B  5F                        POP EDI
006B0E1C  5E                        POP ESI
006B0E1D  5B                        POP EBX
006B0E1E  5D                        POP EBP
006B0E1F  C3                        RET
