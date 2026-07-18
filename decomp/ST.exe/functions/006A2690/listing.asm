FUN_006a2690:
006A2690  55                        PUSH EBP
006A2691  8B EC                     MOV EBP,ESP
006A2693  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A2696  53                        PUSH EBX
006A2697  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A269A  56                        PUSH ESI
006A269B  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A269E  57                        PUSH EDI
006A269F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A26A2  85 C0                     TEST EAX,EAX
006A26A4  74 09                     JZ 0x006a26af
006A26A6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A26A9  51                        PUSH ECX
006A26AA  56                        PUSH ESI
006A26AB  57                        PUSH EDI
006A26AC  53                        PUSH EBX
006A26AD  FF D0                     CALL EAX
LAB_006a26af:
006A26AF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A26B2  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006A26B5  0F AF C6                  IMUL EAX,ESI
006A26B8  03 C7                     ADD EAX,EDI
006A26BA  5F                        POP EDI
006A26BB  0F AF 01                  IMUL EAX,dword ptr [ECX]
006A26BE  03 C3                     ADD EAX,EBX
006A26C0  5E                        POP ESI
006A26C1  5B                        POP EBX
006A26C2  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006A26C5  8D 44 51 08               LEA EAX,[ECX + EDX*0x2 + 0x8]
006A26C9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A26CC  8B 11                     MOV EDX,dword ptr [ECX]
006A26CE  89 10                     MOV dword ptr [EAX],EDX
006A26D0  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
006A26D4  66 89 48 04               MOV word ptr [EAX + 0x4],CX
006A26D8  5D                        POP EBP
006A26D9  C3                        RET
