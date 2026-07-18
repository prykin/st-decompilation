FUN_004acd60:
004ACD60  55                        PUSH EBP
004ACD61  8B EC                     MOV EBP,ESP
004ACD63  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004ACD67  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004ACD6A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004ACD6D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004ACD70  89 54 81 20               MOV dword ptr [ECX + EAX*0x4 + 0x20],EDX
004ACD74  5D                        POP EBP
004ACD75  C2 08 00                  RET 0x8
