FUN_006a09f0:
006A09F0  55                        PUSH EBP
006A09F1  8B EC                     MOV EBP,ESP
006A09F3  81 EC 04 01 00 00         SUB ESP,0x104
006A09F9  56                        PUSH ESI
006A09FA  8B F1                     MOV ESI,ECX
006A09FC  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
006A0A02  8B 86 0B 57 00 00         MOV EAX,dword ptr [ESI + 0x570b]
006A0A08  50                        PUSH EAX
006A0A09  68 00 84 7C 00            PUSH 0x7c8400
006A0A0E  68 BC 86 7D 00            PUSH 0x7d86bc
006A0A13  51                        PUSH ECX
006A0A14  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006A0A1A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A0A1D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A0A20  83 C4 10                  ADD ESP,0x10
006A0A23  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
006A0A29  6A 00                     PUSH 0x0
006A0A2B  6A 00                     PUSH 0x0
006A0A2D  6A 00                     PUSH 0x0
006A0A2F  52                        PUSH EDX
006A0A30  50                        PUSH EAX
006A0A31  51                        PUSH ECX
006A0A32  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
006A0A35  6A 0C                     PUSH 0xc
006A0A37  E8 B4 09 05 00            CALL 0x006f13f0
006A0A3C  8B 86 0B 57 00 00         MOV EAX,dword ptr [ESI + 0x570b]
006A0A42  40                        INC EAX
006A0A43  89 86 0B 57 00 00         MOV dword ptr [ESI + 0x570b],EAX
006A0A49  5E                        POP ESI
006A0A4A  8B E5                     MOV ESP,EBP
006A0A4C  5D                        POP EBP
006A0A4D  C2 08 00                  RET 0x8
