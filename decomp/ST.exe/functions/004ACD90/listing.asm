FUN_004acd90:
004ACD90  55                        PUSH EBP
004ACD91  8B EC                     MOV EBP,ESP
004ACD93  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004ACD97  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004ACD9A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004ACD9D  8B 54 81 18               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
004ACDA1  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
004ACDA4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004ACDA7  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
004ACDAA  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
004ACDAD  01 08                     ADD dword ptr [EAX],ECX
004ACDAF  5D                        POP EBP
004ACDB0  C2 08 00                  RET 0x8
