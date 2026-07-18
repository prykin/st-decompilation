FUN_006eace0:
006EACE0  55                        PUSH EBP
006EACE1  8B EC                     MOV EBP,ESP
006EACE3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EACE6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EACEC  3B D0                     CMP EDX,EAX
006EACEE  73 2F                     JNC 0x006ead1f
006EACF0  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EACF6  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EACF9  C1 E0 03                  SHL EAX,0x3
006EACFC  2B C2                     SUB EAX,EDX
006EACFE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EAD01  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EAD04  8B 08                     MOV ECX,dword ptr [EAX]
006EAD06  F6 C5 80                  TEST CH,0x80
006EAD09  74 14                     JZ 0x006ead1f
006EAD0B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EAD0E  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
006EAD11  89 11                     MOV dword ptr [ECX],EDX
006EAD13  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
006EAD16  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006EAD19  89 10                     MOV dword ptr [EAX],EDX
006EAD1B  5D                        POP EBP
006EAD1C  C2 0C 00                  RET 0xc
LAB_006ead1f:
006EAD1F  83 FA FF                  CMP EDX,-0x1
006EAD22  74 0A                     JZ 0x006ead2e
006EAD24  68 3C EF 7E 00            PUSH 0x7eef3c
006EAD29  E8 22 DF FF FF            CALL 0x006e8c50
LAB_006ead2e:
006EAD2E  5D                        POP EBP
006EAD2F  C2 0C 00                  RET 0xc
