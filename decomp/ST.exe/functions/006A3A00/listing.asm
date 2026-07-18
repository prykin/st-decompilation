FUN_006a3a00:
006A3A00  55                        PUSH EBP
006A3A01  8B EC                     MOV EBP,ESP
006A3A03  83 EC 0C                  SUB ESP,0xc
006A3A06  53                        PUSH EBX
006A3A07  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A3A0A  56                        PUSH ESI
006A3A0B  33 F6                     XOR ESI,ESI
006A3A0D  57                        PUSH EDI
006A3A0E  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006A3A11  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006a3a14:
006A3A14  8B 86 70 FB 7D 00         MOV EAX,dword ptr [ESI + 0x7dfb70]
006A3A1A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A3A1D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A3A20  03 C1                     ADD EAX,ECX
006A3A22  8B 8E 74 FB 7D 00         MOV ECX,dword ptr [ESI + 0x7dfb74]
006A3A28  03 CA                     ADD ECX,EDX
006A3A2A  85 C0                     TEST EAX,EAX
006A3A2C  7C 64                     JL 0x006a3a92
006A3A2E  3B 03                     CMP EAX,dword ptr [EBX]
006A3A30  7D 60                     JGE 0x006a3a92
006A3A32  85 C9                     TEST ECX,ECX
006A3A34  7C 5C                     JL 0x006a3a92
006A3A36  3B 4B 04                  CMP ECX,dword ptr [EBX + 0x4]
006A3A39  7D 57                     JGE 0x006a3a92
006A3A3B  85 FF                     TEST EDI,EDI
006A3A3D  7C 53                     JL 0x006a3a92
006A3A3F  83 FF 06                  CMP EDI,0x6
006A3A42  7D 4E                     JGE 0x006a3a92
006A3A44  8D 55 F4                  LEA EDX,[EBP + -0xc]
006A3A47  52                        PUSH EDX
006A3A48  57                        PUSH EDI
006A3A49  51                        PUSH ECX
006A3A4A  50                        PUSH EAX
006A3A4B  53                        PUSH EBX
006A3A4C  E8 FB 06 D6 FF            CALL 0x0040414c
006A3A51  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A3A54  68 FF 00 00 00            PUSH 0xff
006A3A59  0F BF C0                  MOVSX EAX,AX
006A3A5C  57                        PUSH EDI
006A3A5D  51                        PUSH ECX
006A3A5E  8D 55 F4                  LEA EDX,[EBP + -0xc]
006A3A61  50                        PUSH EAX
006A3A62  52                        PUSH EDX
006A3A63  E8 F6 12 D6 FF            CALL 0x00404d5e
006A3A68  83 C4 28                  ADD ESP,0x28
006A3A6B  85 C0                     TEST EAX,EAX
006A3A6D  74 23                     JZ 0x006a3a92
006A3A6F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A3A72  8B CE                     MOV ECX,ESI
006A3A74  83 E0 0F                  AND EAX,0xf
006A3A77  8B 14 85 F0 FA 7D 00      MOV EDX,dword ptr [EAX*0x4 + 0x7dfaf0]
006A3A7E  B8 00 00 01 00            MOV EAX,0x10000
006A3A83  C1 C2 10                  ROL EDX,0x10
006A3A86  D3 C0                     ROL EAX,CL
006A3A88  23 D0                     AND EDX,EAX
006A3A8A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A3A8D  0B C2                     OR EAX,EDX
006A3A8F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006a3a92:
006A3A92  83 C6 08                  ADD ESI,0x8
006A3A95  83 FE 20                  CMP ESI,0x20
006A3A98  0F 8C 76 FF FF FF         JL 0x006a3a14
006A3A9E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A3AA1  5F                        POP EDI
006A3AA2  5E                        POP ESI
006A3AA3  5B                        POP EBX
006A3AA4  8B E5                     MOV ESP,EBP
006A3AA6  5D                        POP EBP
006A3AA7  C3                        RET
