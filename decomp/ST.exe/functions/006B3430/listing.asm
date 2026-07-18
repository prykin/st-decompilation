FUN_006b3430:
006B3430  55                        PUSH EBP
006B3431  8B EC                     MOV EBP,ESP
006B3433  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B3436  56                        PUSH ESI
006B3437  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B343A  57                        PUSH EDI
006B343B  3B 86 A0 01 00 00         CMP EAX,dword ptr [ESI + 0x1a0]
006B3441  73 76                     JNC 0x006b34b9
006B3443  8B 8E B0 01 00 00         MOV ECX,dword ptr [ESI + 0x1b0]
006B3449  8B 3C 81                  MOV EDI,dword ptr [ECX + EAX*0x4]
006B344C  8B 07                     MOV EAX,dword ptr [EDI]
006B344E  8B D0                     MOV EDX,EAX
006B3450  81 E2 30 80 00 00         AND EDX,0x8030
006B3456  81 FA 00 80 00 00         CMP EDX,0x8000
006B345C  75 5B                     JNZ 0x006b34b9
006B345E  A9 00 00 08 00            TEST EAX,0x80000
006B3463  74 28                     JZ 0x006b348d
006B3465  8B 06                     MOV EAX,dword ptr [ESI]
006B3467  05 F0 04 00 00            ADD EAX,0x4f0
006B346C  50                        PUSH EAX
006B346D  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006B3473  57                        PUSH EDI
006B3474  56                        PUSH ESI
006B3475  E8 A6 FC FF FF            CALL 0x006b3120
006B347A  8B 0E                     MOV ECX,dword ptr [ESI]
006B347C  8B F8                     MOV EDI,EAX
006B347E  81 C1 F0 04 00 00         ADD ECX,0x4f0
006B3484  51                        PUSH ECX
006B3485  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006B348B  EB 09                     JMP 0x006b3496
LAB_006b348d:
006B348D  57                        PUSH EDI
006B348E  56                        PUSH ESI
006B348F  E8 8C FC FF FF            CALL 0x006b3120
006B3494  8B F8                     MOV EDI,EAX
LAB_006b3496:
006B3496  85 FF                     TEST EDI,EDI
006B3498  74 1F                     JZ 0x006b34b9
006B349A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B34A0  68 7A 06 00 00            PUSH 0x67a
006B34A5  68 C0 DA 7E 00            PUSH 0x7edac0
006B34AA  52                        PUSH EDX
006B34AB  57                        PUSH EDI
006B34AC  E8 8F 29 FF FF            CALL 0x006a5e40
006B34B1  8B C7                     MOV EAX,EDI
006B34B3  5F                        POP EDI
006B34B4  5E                        POP ESI
006B34B5  5D                        POP EBP
006B34B6  C2 08 00                  RET 0x8
LAB_006b34b9:
006B34B9  5F                        POP EDI
006B34BA  33 C0                     XOR EAX,EAX
006B34BC  5E                        POP ESI
006B34BD  5D                        POP EBP
006B34BE  C2 08 00                  RET 0x8
