FUN_006b89b0:
006B89B0  55                        PUSH EBP
006B89B1  8B EC                     MOV EBP,ESP
006B89B3  83 EC 10                  SUB ESP,0x10
006B89B6  56                        PUSH ESI
006B89B7  57                        PUSH EDI
006B89B8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B89BB  33 F6                     XOR ESI,ESI
006B89BD  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006B89C0  F6 C4 80                  TEST AH,0x80
006B89C3  74 28                     JZ 0x006b89ed
006B89C5  F6 C4 30                  TEST AH,0x30
006B89C8  74 23                     JZ 0x006b89ed
006B89CA  8D 45 F0                  LEA EAX,[EBP + -0x10]
006B89CD  50                        PUSH EAX
006B89CE  57                        PUSH EDI
006B89CF  E8 3C 05 00 00            CALL 0x006b8f10
006B89D4  8B F0                     MOV ESI,EAX
006B89D6  85 F6                     TEST ESI,ESI
006B89D8  75 20                     JNZ 0x006b89fa
006B89DA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B89DD  85 C0                     TEST EAX,EAX
006B89DF  74 0C                     JZ 0x006b89ed
006B89E1  8D 4D F0                  LEA ECX,[EBP + -0x10]
006B89E4  51                        PUSH ECX
006B89E5  57                        PUSH EDI
006B89E6  E8 C5 08 00 00            CALL 0x006b92b0
006B89EB  8B F0                     MOV ESI,EAX
LAB_006b89ed:
006B89ED  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006B89F0  80 E5 CF                  AND CH,0xcf
006B89F3  85 F6                     TEST ESI,ESI
006B89F5  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
006B89F8  74 1E                     JZ 0x006b8a18
LAB_006b89fa:
006B89FA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B8A00  6A 3F                     PUSH 0x3f
006B8A02  68 18 DC 7E 00            PUSH 0x7edc18
006B8A07  52                        PUSH EDX
006B8A08  56                        PUSH ESI
006B8A09  E8 32 D4 FE FF            CALL 0x006a5e40
006B8A0E  8B C6                     MOV EAX,ESI
006B8A10  5F                        POP EDI
006B8A11  5E                        POP ESI
006B8A12  8B E5                     MOV ESP,EBP
006B8A14  5D                        POP EBP
006B8A15  C2 08 00                  RET 0x8
LAB_006b8a18:
006B8A18  5F                        POP EDI
006B8A19  33 C0                     XOR EAX,EAX
006B8A1B  5E                        POP ESI
006B8A1C  8B E5                     MOV ESP,EBP
006B8A1E  5D                        POP EBP
006B8A1F  C2 08 00                  RET 0x8
