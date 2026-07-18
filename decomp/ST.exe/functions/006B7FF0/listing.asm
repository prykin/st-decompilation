FUN_006b7ff0:
006B7FF0  55                        PUSH EBP
006B7FF1  8B EC                     MOV EBP,ESP
006B7FF3  83 EC 60                  SUB ESP,0x60
006B7FF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006B7FFB  53                        PUSH EBX
006B7FFC  56                        PUSH ESI
006B7FFD  57                        PUSH EDI
006B7FFE  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006B8001  8D 4D A0                  LEA ECX,[EBP + -0x60]
006B8004  6A 00                     PUSH 0x0
006B8006  52                        PUSH EDX
006B8007  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006B800A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B8010  E8 DB 57 07 00            CALL 0x0072d7f0
006B8015  83 C4 08                  ADD ESP,0x8
006B8018  85 C0                     TEST EAX,EAX
006B801A  0F 85 97 00 00 00         JNZ 0x006b80b7
006B8020  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B8023  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B8026  89 03                     MOV dword ptr [EBX],EAX
006B8028  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
006B802B  85 D2                     TEST EDX,EDX
006B802D  74 74                     JZ 0x006b80a3
006B802F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B8032  25 FF 00 00 00            AND EAX,0xff
006B8037  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006B803A  8D 34 C1                  LEA ESI,[ECX + EAX*0x8]
006B803D  8A 44 C1 38               MOV AL,byte ptr [ECX + EAX*0x8 + 0x38]
006B8041  A8 02                     TEST AL,0x2
006B8043  74 5E                     JZ 0x006b80a3
006B8045  85 DB                     TEST EBX,EBX
006B8047  74 5A                     JZ 0x006b80a3
006B8049  B9 06 00 00 00            MOV ECX,0x6
006B804E  33 C0                     XOR EAX,EAX
006B8050  8D 7D E4                  LEA EDI,[EBP + -0x1c]
006B8053  6A 00                     PUSH 0x0
006B8055  F3 AB                     STOSD.REP ES:EDI
006B8057  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
006B805A  8D 45 FC                  LEA EAX,[EBP + -0x4]
006B805D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B8060  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006B8063  51                        PUSH ECX
006B8064  52                        PUSH EDX
006B8065  C7 45 E4 18 00 00 00      MOV dword ptr [EBP + -0x1c],0x18
006B806C  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
006B8073  C7 45 F4 04 00 00 00      MOV dword ptr [EBP + -0xc],0x4
006B807A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006B807D  FF 15 C8 BE 85 00         CALL dword ptr [0x0085bec8]
006B8083  85 C0                     TEST EAX,EAX
006B8085  74 17                     JZ 0x006b809e
006B8087  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B808D  68 E2 00 00 00            PUSH 0xe2
006B8092  68 E8 DB 7E 00            PUSH 0x7edbe8
006B8097  52                        PUSH EDX
006B8098  50                        PUSH EAX
006B8099  E8 A2 DD FE FF            CALL 0x006a5e40
LAB_006b809e:
006B809E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B80A1  89 03                     MOV dword ptr [EBX],EAX
LAB_006b80a3:
006B80A3  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006B80A6  33 C0                     XOR EAX,EAX
006B80A8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B80AE  5F                        POP EDI
006B80AF  5E                        POP ESI
006B80B0  5B                        POP EBX
006B80B1  8B E5                     MOV ESP,EBP
006B80B3  5D                        POP EBP
006B80B4  C2 0C 00                  RET 0xc
LAB_006b80b7:
006B80B7  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006B80BA  68 E8 00 00 00            PUSH 0xe8
006B80BF  68 E8 DB 7E 00            PUSH 0x7edbe8
006B80C4  6A 00                     PUSH 0x0
006B80C6  50                        PUSH EAX
006B80C7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B80CD  E8 6E DD FE FF            CALL 0x006a5e40
006B80D2  5F                        POP EDI
006B80D3  5E                        POP ESI
006B80D4  83 C8 FF                  OR EAX,0xffffffff
006B80D7  5B                        POP EBX
006B80D8  8B E5                     MOV ESP,EBP
006B80DA  5D                        POP EBP
006B80DB  C2 0C 00                  RET 0xc
