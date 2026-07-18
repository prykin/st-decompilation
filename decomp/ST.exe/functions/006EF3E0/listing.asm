FUN_006ef3e0:
006EF3E0  55                        PUSH EBP
006EF3E1  8B EC                     MOV EBP,ESP
006EF3E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EF3E6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006EF3E9  50                        PUSH EAX
006EF3EA  51                        PUSH ECX
006EF3EB  68 C0 6D 85 00            PUSH 0x856dc0
006EF3F0  C6 05 C0 6D 85 00 00      MOV byte ptr [0x00856dc0],0x0
006EF3F7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006EF3FD  83 C4 0C                  ADD ESP,0xc
006EF400  B8 C0 6D 85 00            MOV EAX,0x856dc0
006EF405  5D                        POP EBP
006EF406  C3                        RET
