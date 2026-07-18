FUN_006b6750:
006B6750  55                        PUSH EBP
006B6751  8B EC                     MOV EBP,ESP
006B6753  83 EC 50                  SUB ESP,0x50
006B6756  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B6759  56                        PUSH ESI
006B675A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B675D  57                        PUSH EDI
006B675E  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
006B6761  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006B6764  83 CF 01                  OR EDI,0x1
006B6767  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
006B676A  85 C0                     TEST EAX,EAX
006B676C  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
006B676F  74 0E                     JZ 0x006b677f
006B6771  83 F8 01                  CMP EAX,0x1
006B6774  74 09                     JZ 0x006b677f
006B6776  A1 C4 4E 85 00            MOV EAX,[0x00854ec4]
006B677B  85 C0                     TEST EAX,EAX
006B677D  74 09                     JZ 0x006b6788
LAB_006b677f:
006B677F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B6782  80 CC 20                  OR AH,0x20
006B6785  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006b6788:
006B6788  B9 14 00 00 00            MOV ECX,0x14
006B678D  33 C0                     XOR EAX,EAX
006B678F  8D 7D B0                  LEA EDI,[EBP + -0x50]
006B6792  6A 02                     PUSH 0x2
006B6794  F3 AB                     STOSD.REP ES:EDI
006B6796  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B6799  8D 4E 08                  LEA ECX,[ESI + 0x8]
006B679C  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006B679F  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006B67A2  8B 01                     MOV EAX,dword ptr [ECX]
006B67A4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B67A7  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006B67AA  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006B67AD  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006B67B0  8D 55 B0                  LEA EDX,[EBP + -0x50]
006B67B3  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006B67B6  C7 45 B0 50 00 00 00      MOV dword ptr [EBP + -0x50],0x50
006B67BD  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006B67C0  52                        PUSH EDX
006B67C1  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006B67C4  8B 06                     MOV EAX,dword ptr [ESI]
006B67C6  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B67C9  50                        PUSH EAX
006B67CA  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006B67CD  8B 08                     MOV ECX,dword ptr [EAX]
006B67CF  FF 51 60                  CALL dword ptr [ECX + 0x60]
006B67D2  8B F8                     MOV EDI,EAX
006B67D4  85 FF                     TEST EDI,EDI
006B67D6  74 20                     JZ 0x006b67f8
006B67D8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B67DD  68 E0 01 00 00            PUSH 0x1e0
006B67E2  68 C4 DB 7E 00            PUSH 0x7edbc4
006B67E7  50                        PUSH EAX
006B67E8  57                        PUSH EDI
006B67E9  E8 52 F6 FE FF            CALL 0x006a5e40
006B67EE  8B C7                     MOV EAX,EDI
006B67F0  5F                        POP EDI
006B67F1  5E                        POP ESI
006B67F2  8B E5                     MOV ESP,EBP
006B67F4  5D                        POP EBP
006B67F5  C2 10 00                  RET 0x10
LAB_006b67f8:
006B67F8  56                        PUSH ESI
006B67F9  E8 32 00 00 00            CALL 0x006b6830
006B67FE  8B F0                     MOV ESI,EAX
006B6800  85 F6                     TEST ESI,ESI
006B6802  74 21                     JZ 0x006b6825
006B6804  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B680A  68 ED 01 00 00            PUSH 0x1ed
006B680F  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6814  51                        PUSH ECX
006B6815  56                        PUSH ESI
006B6816  E8 25 F6 FE FF            CALL 0x006a5e40
006B681B  8B C6                     MOV EAX,ESI
006B681D  5F                        POP EDI
006B681E  5E                        POP ESI
006B681F  8B E5                     MOV ESP,EBP
006B6821  5D                        POP EBP
006B6822  C2 10 00                  RET 0x10
LAB_006b6825:
006B6825  5F                        POP EDI
006B6826  33 C0                     XOR EAX,EAX
006B6828  5E                        POP ESI
006B6829  8B E5                     MOV ESP,EBP
006B682B  5D                        POP EBP
006B682C  C2 10 00                  RET 0x10
