FUN_006d5e50:
006D5E50  55                        PUSH EBP
006D5E51  8B EC                     MOV EBP,ESP
006D5E53  83 EC 10                  SUB ESP,0x10
006D5E56  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D5E59  53                        PUSH EBX
006D5E5A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D5E5D  56                        PUSH ESI
006D5E5E  8B 08                     MOV ECX,dword ptr [EAX]
006D5E60  57                        PUSH EDI
006D5E61  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006D5E64  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006D5E67  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006D5E6A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006D5E6D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006D5E70  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006D5E73  8D 43 F4                  LEA EAX,[EBX + -0xc]
006D5E76  85 C0                     TEST EAX,EAX
006D5E78  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D5E7B  74 05                     JZ 0x006d5e82
006D5E7D  8D 73 04                  LEA ESI,[EBX + 0x4]
006D5E80  EB 02                     JMP 0x006d5e84
LAB_006d5e82:
006D5E82  33 F6                     XOR ESI,ESI
LAB_006d5e84:
006D5E84  56                        PUSH ESI
006D5E85  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006D5E8B  8D 4D F0                  LEA ECX,[EBP + -0x10]
006D5E8E  8D 53 F4                  LEA EDX,[EBX + -0xc]
006D5E91  51                        PUSH ECX
006D5E92  52                        PUSH EDX
006D5E93  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006D5E9A  E8 51 FF FF FF            CALL 0x006d5df0
006D5E9F  8B F8                     MOV EDI,EAX
006D5EA1  85 FF                     TEST EDI,EDI
006D5EA3  7C 10                     JL 0x006d5eb5
006D5EA5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D5EA8  8D 4D F0                  LEA ECX,[EBP + -0x10]
006D5EAB  50                        PUSH EAX
006D5EAC  51                        PUSH ECX
006D5EAD  53                        PUSH EBX
006D5EAE  E8 53 32 07 00            CALL 0x00749106
006D5EB3  8B F8                     MOV EDI,EAX
LAB_006d5eb5:
006D5EB5  56                        PUSH ESI
006D5EB6  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5EBC  8B C7                     MOV EAX,EDI
006D5EBE  5F                        POP EDI
006D5EBF  5E                        POP ESI
006D5EC0  5B                        POP EBX
006D5EC1  8B E5                     MOV ESP,EBP
006D5EC3  5D                        POP EBP
006D5EC4  C2 0C 00                  RET 0xc
