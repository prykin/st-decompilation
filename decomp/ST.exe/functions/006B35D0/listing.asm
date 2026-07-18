FUN_006b35d0:
006B35D0  55                        PUSH EBP
006B35D1  8B EC                     MOV EBP,ESP
006B35D3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B35D6  56                        PUSH ESI
006B35D7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B35DA  57                        PUSH EDI
006B35DB  3B 86 A0 01 00 00         CMP EAX,dword ptr [ESI + 0x1a0]
006B35E1  73 54                     JNC 0x006b3637
006B35E3  8B 8E B0 01 00 00         MOV ECX,dword ptr [ESI + 0x1b0]
006B35E9  8B 3C 81                  MOV EDI,dword ptr [ECX + EAX*0x4]
006B35EC  8B 07                     MOV EAX,dword ptr [EDI]
006B35EE  F6 C4 80                  TEST AH,0x80
006B35F1  74 44                     JZ 0x006b3637
006B35F3  8B D0                     MOV EDX,EAX
006B35F5  83 E2 30                  AND EDX,0x30
006B35F8  80 FA 20                  CMP DL,0x20
006B35FB  75 3A                     JNZ 0x006b3637
006B35FD  A9 00 00 08 00            TEST EAX,0x80000
006B3602  74 2C                     JZ 0x006b3630
006B3604  8B 06                     MOV EAX,dword ptr [ESI]
006B3606  05 F0 04 00 00            ADD EAX,0x4f0
006B360B  50                        PUSH EAX
006B360C  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006B3612  57                        PUSH EDI
006B3613  56                        PUSH ESI
006B3614  E8 C7 ED FF FF            CALL 0x006b23e0
006B3619  8B 0E                     MOV ECX,dword ptr [ESI]
006B361B  81 C1 F0 04 00 00         ADD ECX,0x4f0
006B3621  51                        PUSH ECX
006B3622  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006B3628  5F                        POP EDI
006B3629  33 C0                     XOR EAX,EAX
006B362B  5E                        POP ESI
006B362C  5D                        POP EBP
006B362D  C2 08 00                  RET 0x8
LAB_006b3630:
006B3630  57                        PUSH EDI
006B3631  56                        PUSH ESI
006B3632  E8 A9 ED FF FF            CALL 0x006b23e0
LAB_006b3637:
006B3637  5F                        POP EDI
006B3638  33 C0                     XOR EAX,EAX
006B363A  5E                        POP ESI
006B363B  5D                        POP EBP
006B363C  C2 08 00                  RET 0x8
