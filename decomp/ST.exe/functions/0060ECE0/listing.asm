FUN_0060ece0:
0060ECE0  55                        PUSH EBP
0060ECE1  8B EC                     MOV EBP,ESP
0060ECE3  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060ECE6  53                        PUSH EBX
0060ECE7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0060ECEA  56                        PUSH ESI
0060ECEB  8B F1                     MOV ESI,ECX
0060ECED  57                        PUSH EDI
0060ECEE  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0060ECF1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0060ECF4  89 86 56 02 00 00         MOV dword ptr [ESI + 0x256],EAX
0060ECFA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060ECFD  66 89 86 5A 02 00 00      MOV word ptr [ESI + 0x25a],AX
0060ED04  66 89 86 60 02 00 00      MOV word ptr [ESI + 0x260],AX
0060ED0B  8B C7                     MOV EAX,EDI
0060ED0D  66 89 96 5E 02 00 00      MOV word ptr [ESI + 0x25e],DX
0060ED14  66 89 96 64 02 00 00      MOV word ptr [ESI + 0x264],DX
0060ED1B  66 89 8E 5C 02 00 00      MOV word ptr [ESI + 0x25c],CX
0060ED22  66 89 8E 62 02 00 00      MOV word ptr [ESI + 0x262],CX
0060ED29  B9 C9 00 00 00            MOV ECX,0xc9
0060ED2E  99                        CDQ
0060ED2F  F7 F9                     IDIV ECX
0060ED31  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0060ED34  8B C3                     MOV EAX,EBX
0060ED36  66 89 96 66 02 00 00      MOV word ptr [ESI + 0x266],DX
0060ED3D  99                        CDQ
0060ED3E  F7 F9                     IDIV ECX
0060ED40  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060ED43  B9 C8 00 00 00            MOV ECX,0xc8
0060ED48  66 89 96 68 02 00 00      MOV word ptr [ESI + 0x268],DX
0060ED4F  99                        CDQ
0060ED50  F7 F9                     IDIV ECX
0060ED52  83 7D 24 02               CMP dword ptr [EBP + 0x24],0x2
0060ED56  66 89 96 6A 02 00 00      MOV word ptr [ESI + 0x26a],DX
0060ED5D  0F 85 81 00 00 00         JNZ 0x0060ede4
0060ED63  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0060ED66  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060ED69  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0060ED6C  52                        PUSH EDX
0060ED6D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0060ED70  53                        PUSH EBX
0060ED71  57                        PUSH EDI
0060ED72  50                        PUSH EAX
0060ED73  51                        PUSH ECX
0060ED74  52                        PUSH EDX
0060ED75  E8 93 E1 09 00            CALL 0x006acf0d
0060ED7A  8B C8                     MOV ECX,EAX
0060ED7C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060ED7F  2B F8                     SUB EDI,EAX
0060ED81  83 C4 18                  ADD ESP,0x18
0060ED84  89 8E 8C 02 00 00         MOV dword ptr [ESI + 0x28c],ECX
0060ED8A  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0060ED8D  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0060ED90  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060ED93  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060ED96  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060ED99  C1 E0 04                  SHL EAX,0x4
0060ED9C  99                        CDQ
0060ED9D  F7 F9                     IDIV ECX
0060ED9F  89 86 7C 02 00 00         MOV dword ptr [ESI + 0x27c],EAX
0060EDA5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060EDA8  2B D8                     SUB EBX,EAX
0060EDAA  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0060EDAD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060EDB0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060EDB3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060EDB6  C1 E0 04                  SHL EAX,0x4
0060EDB9  99                        CDQ
0060EDBA  F7 F9                     IDIV ECX
0060EDBC  89 86 80 02 00 00         MOV dword ptr [ESI + 0x280],EAX
0060EDC2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060EDC5  2B C7                     SUB EAX,EDI
0060EDC7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060EDCA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060EDCD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060EDD0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060EDD3  C1 E0 04                  SHL EAX,0x4
0060EDD6  99                        CDQ
0060EDD7  F7 F9                     IDIV ECX
0060EDD9  89 86 84 02 00 00         MOV dword ptr [ESI + 0x284],EAX
0060EDDF  E9 9A 00 00 00            JMP 0x0060ee7e
LAB_0060ede4:
0060EDE4  8B 86 DD 02 00 00         MOV EAX,dword ptr [ESI + 0x2dd]
0060EDEA  C7 86 8C 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x28c],0x0
0060EDF4  85 C0                     TEST EAX,EAX
0060EDF6  0F 84 82 00 00 00         JZ 0x0060ee7e
0060EDFC  8B 86 D5 02 00 00         MOV EAX,dword ptr [ESI + 0x2d5]
0060EE02  83 F8 01                  CMP EAX,0x1
0060EE05  7E 77                     JLE 0x0060ee7e
0060EE07  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060EE0A  3B D0                     CMP EDX,EAX
0060EE0C  7D 70                     JGE 0x0060ee7e
0060EE0E  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
0060EE15  2B C2                     SUB EAX,EDX
0060EE17  C1 E0 02                  SHL EAX,0x2
LAB_0060ee1a:
0060EE1A  8B 8E DD 02 00 00         MOV ECX,dword ptr [ESI + 0x2dd]
0060EE20  03 C8                     ADD ECX,EAX
0060EE22  66 8B 39                  MOV DI,word ptr [ECX]
0060EE25  66 69 FF C9 00            IMUL DI,DI,0xc9
0060EE2A  66 03 BE 66 02 00 00      ADD DI,word ptr [ESI + 0x266]
0060EE31  66 89 39                  MOV word ptr [ECX],DI
0060EE34  8B 8E DD 02 00 00         MOV ECX,dword ptr [ESI + 0x2dd]
0060EE3A  66 8B 7C 01 02            MOV DI,word ptr [ECX + EAX*0x1 + 0x2]
0060EE3F  8D 4C 01 02               LEA ECX,[ECX + EAX*0x1 + 0x2]
0060EE43  66 69 FF C9 00            IMUL DI,DI,0xc9
0060EE48  66 03 BE 68 02 00 00      ADD DI,word ptr [ESI + 0x268]
0060EE4F  66 89 39                  MOV word ptr [ECX],DI
0060EE52  8B 8E DD 02 00 00         MOV ECX,dword ptr [ESI + 0x2dd]
0060EE58  66 8B 7C 01 04            MOV DI,word ptr [ECX + EAX*0x1 + 0x4]
0060EE5D  8D 4C 01 04               LEA ECX,[ECX + EAX*0x1 + 0x4]
0060EE61  66 69 FF C8 00            IMUL DI,DI,0xc8
0060EE66  66 03 BE 6A 02 00 00      ADD DI,word ptr [ESI + 0x26a]
0060EE6D  42                        INC EDX
0060EE6E  83 C0 1C                  ADD EAX,0x1c
0060EE71  66 89 39                  MOV word ptr [ECX],DI
0060EE74  8B 8E D5 02 00 00         MOV ECX,dword ptr [ESI + 0x2d5]
0060EE7A  3B D1                     CMP EDX,ECX
0060EE7C  7C 9C                     JL 0x0060ee1a
LAB_0060ee7e:
0060EE7E  C7 86 88 02 00 00 21 00 00 00  MOV dword ptr [ESI + 0x288],0x21
0060EE88  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0060EE8E  5F                        POP EDI
0060EE8F  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0060EE95  89 86 94 02 00 00         MOV dword ptr [ESI + 0x294],EAX
0060EE9B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060EEA1  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0060EEA7  89 96 98 02 00 00         MOV dword ptr [ESI + 0x298],EDX
0060EEAD  5E                        POP ESI
0060EEAE  5B                        POP EBX
0060EEAF  5D                        POP EBP
0060EEB0  C2 20 00                  RET 0x20
