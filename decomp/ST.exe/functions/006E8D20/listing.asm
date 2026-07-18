FUN_006e8d20:
006E8D20  55                        PUSH EBP
006E8D21  8B EC                     MOV EBP,ESP
006E8D23  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E8D26  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E8D2C  3B D0                     CMP EDX,EAX
006E8D2E  73 46                     JNC 0x006e8d76
006E8D30  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E8D36  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E8D39  C1 E0 03                  SHL EAX,0x3
006E8D3C  2B C2                     SUB EAX,EDX
006E8D3E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E8D41  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E8D44  8B 08                     MOV ECX,dword ptr [EAX]
006E8D46  F6 C5 80                  TEST CH,0x80
006E8D49  74 2B                     JZ 0x006e8d76
006E8D4B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E8D4E  F6 C5 40                  TEST CH,0x40
006E8D51  74 23                     JZ 0x006e8d76
006E8D53  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8D59  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E8D5C  89 4A 1D                  MOV dword ptr [EDX + 0x1d],ECX
006E8D5F  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8D65  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E8D68  89 4A 21                  MOV dword ptr [EDX + 0x21],ECX
006E8D6B  8B 08                     MOV ECX,dword ptr [EAX]
006E8D6D  83 C9 04                  OR ECX,0x4
006E8D70  89 08                     MOV dword ptr [EAX],ECX
006E8D72  5D                        POP EBP
006E8D73  C2 0C 00                  RET 0xc
LAB_006e8d76:
006E8D76  83 FA FF                  CMP EDX,-0x1
006E8D79  74 0A                     JZ 0x006e8d85
006E8D7B  68 88 EC 7E 00            PUSH 0x7eec88
006E8D80  E8 CB FE FF FF            CALL 0x006e8c50
LAB_006e8d85:
006E8D85  5D                        POP EBP
006E8D86  C2 0C 00                  RET 0xc
