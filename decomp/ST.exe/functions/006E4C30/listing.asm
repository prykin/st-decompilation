FUN_006e4c30:
006E4C30  55                        PUSH EBP
006E4C31  8B EC                     MOV EBP,ESP
006E4C33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E4C36  53                        PUSH EBX
006E4C37  56                        PUSH ESI
006E4C38  57                        PUSH EDI
006E4C39  8B F9                     MOV EDI,ECX
006E4C3B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006E4C3E  51                        PUSH ECX
006E4C3F  8B CF                     MOV ECX,EDI
006E4C41  E8 5A F9 FF FF            CALL 0x006e45a0
006E4C46  8B F0                     MOV ESI,EAX
006E4C48  85 F6                     TEST ESI,ESI
006E4C4A  74 38                     JZ 0x006e4c84
006E4C4C  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E4C4F  85 C0                     TEST EAX,EAX
006E4C51  74 31                     JZ 0x006e4c84
006E4C53  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_006e4c5a:
006E4C5A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E4C5D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006E4C60  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E4C63  3B D1                     CMP EDX,ECX
006E4C65  73 1D                     JNC 0x006e4c84
006E4C67  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E4C6A  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
006E4C6D  0F AF CA                  IMUL ECX,EDX
006E4C70  8D 52 01                  LEA EDX,[EDX + 0x1]
006E4C73  03 CB                     ADD ECX,EBX
006E4C75  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006E4C78  74 0A                     JZ 0x006e4c84
006E4C7A  51                        PUSH ECX
006E4C7B  8B CF                     MOV ECX,EDI
006E4C7D  E8 2E FF FF FF            CALL 0x006e4bb0
006E4C82  EB D6                     JMP 0x006e4c5a
LAB_006e4c84:
006E4C84  5F                        POP EDI
006E4C85  5E                        POP ESI
006E4C86  5B                        POP EBX
006E4C87  5D                        POP EBP
006E4C88  C2 04 00                  RET 0x4
