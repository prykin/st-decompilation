FUN_006a0c00:
006A0C00  55                        PUSH EBP
006A0C01  8B EC                     MOV EBP,ESP
006A0C03  81 EC 04 01 00 00         SUB ESP,0x104
006A0C09  56                        PUSH ESI
006A0C0A  8B F1                     MOV ESI,ECX
006A0C0C  8B 06                     MOV EAX,dword ptr [ESI]
006A0C0E  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006A0C11  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
006A0C14  8B 16                     MOV EDX,dword ptr [ESI]
006A0C16  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
006A0C1C  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
006A0C1F  50                        PUSH EAX
006A0C20  68 00 84 7C 00            PUSH 0x7c8400
006A0C25  68 BC 86 7D 00            PUSH 0x7d86bc
006A0C2A  51                        PUSH ECX
006A0C2B  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006A0C31  8B 0E                     MOV ECX,dword ptr [ESI]
006A0C33  83 C4 10                  ADD ESP,0x10
006A0C36  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
006A0C39  6A 00                     PUSH 0x0
006A0C3B  6A 01                     PUSH 0x1
006A0C3D  6A 00                     PUSH 0x0
006A0C3F  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006A0C42  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
006A0C45  8D 94 00 AA 00 00 00      LEA EDX,[EAX + EAX*0x1 + 0xaa]
006A0C4C  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
006A0C52  52                        PUSH EDX
006A0C53  51                        PUSH ECX
006A0C54  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006A0C57  50                        PUSH EAX
006A0C58  6A 0C                     PUSH 0xc
006A0C5A  E8 91 07 05 00            CALL 0x006f13f0
006A0C5F  56                        PUSH ESI
006A0C60  E8 FB A3 00 00            CALL 0x006ab060
006A0C65  5E                        POP ESI
006A0C66  8B E5                     MOV ESP,EBP
006A0C68  5D                        POP EBP
006A0C69  C3                        RET
