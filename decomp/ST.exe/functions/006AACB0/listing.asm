FUN_006aacb0:
006AACB0  55                        PUSH EBP
006AACB1  8B EC                     MOV EBP,ESP
006AACB3  6A FF                     PUSH -0x1
006AACB5  68 60 D8 79 00            PUSH 0x79d860
006AACBA  68 64 D9 72 00            PUSH 0x72d964
006AACBF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006AACC5  50                        PUSH EAX
006AACC6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006AACCD  83 EC 08                  SUB ESP,0x8
006AACD0  53                        PUSH EBX
006AACD1  56                        PUSH ESI
006AACD2  57                        PUSH EDI
006AACD3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006AACD6  68 00 8E 85 00            PUSH 0x858e00
006AACDB  FF 15 98 BB 85 00         CALL dword ptr [0x0085bb98]
006AACE1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006AACE8  E8 23 00 00 00            CALL 0x006aad10
006AACED  EB 09                     JMP 0x006aacf8
LAB_006aacf8:
006AACF8  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006AACFF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AAD02  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006AAD09  5F                        POP EDI
006AAD0A  5E                        POP ESI
006AAD0B  5B                        POP EBX
006AAD0C  8B E5                     MOV ESP,EBP
006AAD0E  5D                        POP EBP
006AAD0F  C3                        RET
