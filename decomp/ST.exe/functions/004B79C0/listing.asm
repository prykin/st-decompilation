FUN_004b79c0:
004B79C0  55                        PUSH EBP
004B79C1  8B EC                     MOV EBP,ESP
004B79C3  83 EC 0C                  SUB ESP,0xc
004B79C6  53                        PUSH EBX
004B79C7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004B79CA  56                        PUSH ESI
004B79CB  57                        PUSH EDI
004B79CC  8B F1                     MOV ESI,ECX
004B79CE  53                        PUSH EBX
004B79CF  E8 0B C1 F4 FF            CALL 0x00403adf
004B79D4  53                        PUSH EBX
004B79D5  8B CE                     MOV ECX,ESI
004B79D7  8B F8                     MOV EDI,EAX
004B79D9  E8 40 AF F4 FF            CALL 0x0040291e
004B79DE  3B C7                     CMP EAX,EDI
004B79E0  7D 4E                     JGE 0x004b7a30
004B79E2  0F BE C3                  MOVSX EAX,BL
004B79E5  33 F6                     XOR ESI,ESI
004B79E7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B79EA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004B79ED  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004B79F0  C1 E1 04                  SHL ECX,0x4
004B79F3  03 C8                     ADD ECX,EAX
004B79F5  8D 3C 4D B2 57 7F 00      LEA EDI,[ECX*0x2 + 0x7f57b2]
004B79FC  8B 0C 4D B2 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57b2]
004B7A03  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004B7A06  85 C0                     TEST EAX,EAX
004B7A08  76 1B                     JBE 0x004b7a25
004B7A0A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_004b7a0d:
004B7A0D  8D 55 F4                  LEA EDX,[EBP + -0xc]
004B7A10  52                        PUSH EDX
004B7A11  8B D6                     MOV EDX,ESI
004B7A13  E8 58 52 1F 00            CALL 0x006acc70
004B7A18  39 5D F4                  CMP dword ptr [EBP + -0xc],EBX
004B7A1B  74 13                     JZ 0x004b7a30
004B7A1D  8B 0F                     MOV ECX,dword ptr [EDI]
004B7A1F  46                        INC ESI
004B7A20  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004B7A23  72 E8                     JC 0x004b7a0d
LAB_004b7a25:
004B7A25  5F                        POP EDI
004B7A26  5E                        POP ESI
004B7A27  33 C0                     XOR EAX,EAX
004B7A29  5B                        POP EBX
004B7A2A  8B E5                     MOV ESP,EBP
004B7A2C  5D                        POP EBP
004B7A2D  C2 08 00                  RET 0x8
LAB_004b7a30:
004B7A30  5F                        POP EDI
004B7A31  5E                        POP ESI
004B7A32  B8 01 00 00 00            MOV EAX,0x1
004B7A37  5B                        POP EBX
004B7A38  8B E5                     MOV ESP,EBP
004B7A3A  5D                        POP EBP
004B7A3B  C2 08 00                  RET 0x8
