FUN_006e8c80:
006E8C80  55                        PUSH EBP
006E8C81  8B EC                     MOV EBP,ESP
006E8C83  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E8C86  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E8C8C  3B D0                     CMP EDX,EAX
006E8C8E  73 75                     JNC 0x006e8d05
006E8C90  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E8C96  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E8C99  C1 E0 03                  SHL EAX,0x3
006E8C9C  2B C2                     SUB EAX,EDX
006E8C9E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E8CA1  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E8CA4  8B 08                     MOV ECX,dword ptr [EAX]
006E8CA6  F6 C5 80                  TEST CH,0x80
006E8CA9  74 5A                     JZ 0x006e8d05
006E8CAB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E8CAE  F6 C5 40                  TEST CH,0x40
006E8CB1  74 52                     JZ 0x006e8d05
006E8CB3  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8CB9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E8CBC  89 0A                     MOV dword ptr [EDX],ECX
006E8CBE  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8CC4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E8CC7  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006E8CCA  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8CD0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E8CD3  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006E8CD6  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8CDC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E8CDF  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
006E8CE2  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8CE8  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006E8CEB  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
006E8CEE  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8CF4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006E8CF7  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
006E8CFA  8B 08                     MOV ECX,dword ptr [EAX]
006E8CFC  83 C9 0C                  OR ECX,0xc
006E8CFF  89 08                     MOV dword ptr [EAX],ECX
006E8D01  5D                        POP EBP
006E8D02  C2 1C 00                  RET 0x1c
LAB_006e8d05:
006E8D05  83 FA FF                  CMP EDX,-0x1
006E8D08  74 0A                     JZ 0x006e8d14
006E8D0A  68 78 EC 7E 00            PUSH 0x7eec78
006E8D0F  E8 3C FF FF FF            CALL 0x006e8c50
LAB_006e8d14:
006E8D14  5D                        POP EBP
006E8D15  C2 1C 00                  RET 0x1c
