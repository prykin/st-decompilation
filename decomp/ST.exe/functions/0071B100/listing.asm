FUN_0071b100:
0071B100  55                        PUSH EBP
0071B101  8B EC                     MOV EBP,ESP
0071B103  81 EC 04 01 00 00         SUB ESP,0x104
0071B109  56                        PUSH ESI
0071B10A  57                        PUSH EDI
0071B10B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0071B10E  85 FF                     TEST EDI,EDI
0071B110  74 75                     JZ 0x0071b187
0071B112  80 3F 00                  CMP byte ptr [EDI],0x0
0071B115  74 70                     JZ 0x0071b187
0071B117  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071B11A  8D 45 0C                  LEA EAX,[EBP + 0xc]
0071B11D  50                        PUSH EAX
0071B11E  57                        PUSH EDI
0071B11F  51                        PUSH ECX
0071B120  FF 15 58 B9 85 00         CALL dword ptr [0x0085b958]
0071B126  85 C0                     TEST EAX,EAX
0071B128  75 4C                     JNZ 0x0071b176
0071B12A  8B 35 64 B9 85 00         MOV ESI,dword ptr [0x0085b964]
LAB_0071b130:
0071B130  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071B133  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
0071B139  68 04 01 00 00            PUSH 0x104
0071B13E  52                        PUSH EDX
0071B13F  6A 00                     PUSH 0x0
0071B141  50                        PUSH EAX
0071B142  C6 85 FC FE FF FF 00      MOV byte ptr [EBP + 0xfffffefc],0x0
0071B149  FF D6                     CALL ESI
0071B14B  85 C0                     TEST EAX,EAX
0071B14D  75 1D                     JNZ 0x0071b16c
0071B14F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0071B152  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
0071B158  51                        PUSH ECX
0071B159  52                        PUSH EDX
0071B15A  E8 A1 FF FF FF            CALL 0x0071b100
0071B15F  83 C4 08                  ADD ESP,0x8
0071B162  85 C0                     TEST EAX,EAX
0071B164  74 CA                     JZ 0x0071b130
0071B166  5F                        POP EDI
0071B167  5E                        POP ESI
0071B168  8B E5                     MOV ESP,EBP
0071B16A  5D                        POP EBP
0071B16B  C3                        RET
LAB_0071b16c:
0071B16C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071B16F  50                        PUSH EAX
0071B170  FF 15 68 B9 85 00         CALL dword ptr [0x0085b968]
LAB_0071b176:
0071B176  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071B179  57                        PUSH EDI
0071B17A  51                        PUSH ECX
0071B17B  FF 15 50 B9 85 00         CALL dword ptr [0x0085b950]
0071B181  5F                        POP EDI
0071B182  5E                        POP ESI
0071B183  8B E5                     MOV ESP,EBP
0071B185  5D                        POP EBP
0071B186  C3                        RET
LAB_0071b187:
0071B187  5F                        POP EDI
0071B188  33 C0                     XOR EAX,EAX
0071B18A  5E                        POP ESI
0071B18B  8B E5                     MOV ESP,EBP
0071B18D  5D                        POP EBP
0071B18E  C3                        RET
