FUN_006ae290:
006AE290  55                        PUSH EBP
006AE291  8B EC                     MOV EBP,ESP
006AE293  57                        PUSH EDI
006AE294  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006AE297  85 FF                     TEST EDI,EDI
006AE299  75 13                     JNZ 0x006ae2ae
006AE29B  6A 20                     PUSH 0x20
006AE29D  E8 6E C9 FF FF            CALL 0x006aac10
006AE2A2  85 C0                     TEST EAX,EAX
006AE2A4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006AE2A7  74 61                     JZ 0x006ae30a
006AE2A9  83 08 08                  OR dword ptr [EAX],0x8
006AE2AC  EB 09                     JMP 0x006ae2b7
LAB_006ae2ae:
006AE2AE  B9 08 00 00 00            MOV ECX,0x8
006AE2B3  33 C0                     XOR EAX,EAX
006AE2B5  F3 AB                     STOSD.REP ES:EDI
LAB_006ae2b7:
006AE2B7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AE2BA  85 C0                     TEST EAX,EAX
006AE2BC  74 4C                     JZ 0x006ae30a
006AE2BE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006AE2C1  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006AE2C4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006AE2C7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AE2CA  89 42 14                  MOV dword ptr [EDX + 0x14],EAX
006AE2CD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AE2D0  51                        PUSH ECX
006AE2D1  E8 5A FF FF FF            CALL 0x006ae230
006AE2D6  85 C0                     TEST EAX,EAX
006AE2D8  74 24                     JZ 0x006ae2fe
006AE2DA  8D 55 08                  LEA EDX,[EBP + 0x8]
006AE2DD  52                        PUSH EDX
006AE2DE  E8 7D CD FF FF            CALL 0x006ab060
006AE2E3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006AE2E8  6A 37                     PUSH 0x37
006AE2EA  68 44 DA 7E 00            PUSH 0x7eda44
006AE2EF  50                        PUSH EAX
006AE2F0  6A FE                     PUSH -0x2
006AE2F2  E8 49 7B FF FF            CALL 0x006a5e40
006AE2F7  33 C0                     XOR EAX,EAX
006AE2F9  5F                        POP EDI
006AE2FA  5D                        POP EBP
006AE2FB  C2 10 00                  RET 0x10
LAB_006ae2fe:
006AE2FE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006AE301  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006AE304  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
006AE307  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006ae30a:
006AE30A  5F                        POP EDI
006AE30B  5D                        POP EBP
006AE30C  C2 10 00                  RET 0x10
