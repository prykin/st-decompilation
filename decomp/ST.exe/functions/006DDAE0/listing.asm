FUN_006ddae0:
006DDAE0  55                        PUSH EBP
006DDAE1  8B EC                     MOV EBP,ESP
006DDAE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DDAE6  53                        PUSH EBX
006DDAE7  8B D9                     MOV EBX,ECX
006DDAE9  56                        PUSH ESI
006DDAEA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DDAED  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006DDAF0  89 83 4C 01 00 00         MOV dword ptr [EBX + 0x14c],EAX
006DDAF6  03 C1                     ADD EAX,ECX
006DDAF8  89 B3 48 01 00 00         MOV dword ptr [EBX + 0x148],ESI
006DDAFE  03 F0                     ADD ESI,EAX
006DDB00  89 8B 50 01 00 00         MOV dword ptr [EBX + 0x150],ECX
006DDB06  8B 8B 54 01 00 00         MOV ECX,dword ptr [EBX + 0x154]
006DDB0C  8D 46 01                  LEA EAX,[ESI + 0x1]
006DDB0F  57                        PUSH EDI
006DDB10  C1 E0 08                  SHL EAX,0x8
006DDB13  50                        PUSH EAX
006DDB14  51                        PUSH ECX
006DDB15  E8 36 F4 FC FF            CALL 0x006acf50
006DDB1A  89 83 54 01 00 00         MOV dword ptr [EBX + 0x154],EAX
006DDB20  33 C0                     XOR EAX,EAX
LAB_006ddb22:
006DDB22  8B 93 54 01 00 00         MOV EDX,dword ptr [EBX + 0x154]
006DDB28  88 04 02                  MOV byte ptr [EDX + EAX*0x1],AL
006DDB2B  40                        INC EAX
006DDB2C  3D 00 01 00 00            CMP EAX,0x100
006DDB31  7C EF                     JL 0x006ddb22
006DDB33  8B BB 54 01 00 00         MOV EDI,dword ptr [EBX + 0x154]
006DDB39  8B CE                     MOV ECX,ESI
006DDB3B  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006DDB3E  81 C7 00 01 00 00         ADD EDI,0x100
006DDB44  C1 E1 08                  SHL ECX,0x8
006DDB47  8B C1                     MOV EAX,ECX
006DDB49  C1 E9 02                  SHR ECX,0x2
006DDB4C  F3 A5                     MOVSD.REP ES:EDI,ESI
006DDB4E  8B C8                     MOV ECX,EAX
006DDB50  83 E1 03                  AND ECX,0x3
006DDB53  F3 A4                     MOVSB.REP ES:EDI,ESI
006DDB55  8B CB                     MOV ECX,EBX
006DDB57  E8 14 FD FF FF            CALL 0x006dd870
006DDB5C  8B CB                     MOV ECX,EBX
006DDB5E  E8 0D 00 00 00            CALL 0x006ddb70
006DDB63  5F                        POP EDI
006DDB64  5E                        POP ESI
006DDB65  5B                        POP EBX
006DDB66  5D                        POP EBP
006DDB67  C2 10 00                  RET 0x10
