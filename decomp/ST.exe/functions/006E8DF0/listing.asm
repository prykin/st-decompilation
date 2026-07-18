FUN_006e8df0:
006E8DF0  55                        PUSH EBP
006E8DF1  8B EC                     MOV EBP,ESP
006E8DF3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E8DF6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E8DFC  3B D0                     CMP EDX,EAX
006E8DFE  0F 83 89 00 00 00         JNC 0x006e8e8d
006E8E04  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E8E0A  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E8E0D  C1 E0 03                  SHL EAX,0x3
006E8E10  2B C2                     SUB EAX,EDX
006E8E12  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E8E15  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E8E18  8B 08                     MOV ECX,dword ptr [EAX]
006E8E1A  F6 C5 80                  TEST CH,0x80
006E8E1D  74 6E                     JZ 0x006e8e8d
006E8E1F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E8E22  F6 C5 20                  TEST CH,0x20
006E8E25  74 66                     JZ 0x006e8e8d
006E8E27  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8E2D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E8E30  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006E8E33  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8E39  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E8E3C  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006E8E3F  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8E45  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E8E48  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006E8E4B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E8E4E  81 F9 00 83 FF FF         CMP ECX,0xffff8300
006E8E54  74 10                     JZ 0x006e8e66
006E8E56  BA 68 01 00 00            MOV EDX,0x168
006E8E5B  2B D1                     SUB EDX,ECX
006E8E5D  8B 88 A0 00 00 00         MOV ECX,dword ptr [EAX + 0xa0]
006E8E63  89 51 19                  MOV dword ptr [ECX + 0x19],EDX
LAB_006e8e66:
006E8E66  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006E8E69  85 C9                     TEST ECX,ECX
006E8E6B  7E 09                     JLE 0x006e8e76
006E8E6D  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8E73  89 4A 1D                  MOV dword ptr [EDX + 0x1d],ECX
LAB_006e8e76:
006E8E76  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006E8E79  85 C9                     TEST ECX,ECX
006E8E7B  7E 09                     JLE 0x006e8e86
006E8E7D  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8E83  89 4A 21                  MOV dword ptr [EDX + 0x21],ECX
LAB_006e8e86:
006E8E86  83 08 0C                  OR dword ptr [EAX],0xc
006E8E89  5D                        POP EBP
006E8E8A  C2 1C 00                  RET 0x1c
LAB_006e8e8d:
006E8E8D  83 FA FF                  CMP EDX,-0x1
006E8E90  74 0A                     JZ 0x006e8e9c
006E8E92  68 B4 EC 7E 00            PUSH 0x7eecb4
006E8E97  E8 B4 FD FF FF            CALL 0x006e8c50
LAB_006e8e9c:
006E8E9C  5D                        POP EBP
006E8E9D  C2 1C 00                  RET 0x1c
