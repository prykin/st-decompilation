FUN_004ace00:
004ACE00  55                        PUSH EBP
004ACE01  8B EC                     MOV EBP,ESP
004ACE03  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004ACE07  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004ACE0A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004ACE0D  8B 54 81 04               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
004ACE11  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004ACE14  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004ACE17  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
004ACE1A  5D                        POP EBP
004ACE1B  C2 0C 00                  RET 0xc
