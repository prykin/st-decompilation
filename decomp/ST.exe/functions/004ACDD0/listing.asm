FUN_004acdd0:
004ACDD0  55                        PUSH EBP
004ACDD1  8B EC                     MOV EBP,ESP
004ACDD3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004ACDD7  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004ACDDA  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004ACDDD  8B 54 81 04               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
004ACDE1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004ACDE4  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
004ACDE7  5D                        POP EBP
004ACDE8  C2 08 00                  RET 0x8
