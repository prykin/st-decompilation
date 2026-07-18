FUN_0065e700:
0065E700  55                        PUSH EBP
0065E701  8B EC                     MOV EBP,ESP
0065E703  83 EC 0C                  SUB ESP,0xc
0065E706  53                        PUSH EBX
0065E707  56                        PUSH ESI
0065E708  57                        PUSH EDI
0065E709  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0065E70C  83 CE FF                  OR ESI,0xffffffff
0065E70F  E8 BB 31 DA FF            CALL 0x004018cf
0065E714  8B F8                     MOV EDI,EAX
0065E716  85 FF                     TEST EDI,EDI
0065E718  0F 84 D9 00 00 00         JZ 0x0065e7f7
0065E71E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065E721  85 C0                     TEST EAX,EAX
0065E723  0F 86 CE 00 00 00         JBE 0x0065e7f7
0065E729  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0065E72C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0065E72F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065E732  33 F6                     XOR ESI,ESI
0065E734  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
0065E73A  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0065E740  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0065E746  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065E749  85 C0                     TEST EAX,EAX
0065E74B  7E 6E                     JLE 0x0065e7bb
0065E74D  3B F0                     CMP ESI,EAX
LAB_0065e74f:
0065E74F  73 0D                     JNC 0x0065e75e
0065E751  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0065E754  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0065E757  0F AF C6                  IMUL EAX,ESI
0065E75A  03 C1                     ADD EAX,ECX
0065E75C  EB 02                     JMP 0x0065e760
LAB_0065e75e:
0065E75E  33 C0                     XOR EAX,EAX
LAB_0065e760:
0065E760  66 8B 10                  MOV DX,word ptr [EAX]
0065E763  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065E766  6A 01                     PUSH 0x1
0065E768  52                        PUSH EDX
0065E769  8A 48 24                  MOV CL,byte ptr [EAX + 0x24]
0065E76C  51                        PUSH ECX
0065E76D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E773  E8 42 41 DA FF            CALL 0x004028ba
0065E778  85 C0                     TEST EAX,EAX
0065E77A  74 37                     JZ 0x0065e7b3
0065E77C  8D 55 FA                  LEA EDX,[EBP + -0x6]
0065E77F  8D 4D FC                  LEA ECX,[EBP + -0x4]
0065E782  52                        PUSH EDX
0065E783  8D 55 FE                  LEA EDX,[EBP + -0x2]
0065E786  51                        PUSH ECX
0065E787  52                        PUSH EDX
0065E788  8B C8                     MOV ECX,EAX
0065E78A  E8 36 31 DA FF            CALL 0x004018c5
0065E78F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065E792  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
0065E796  8B 10                     MOV EDX,dword ptr [EAX]
0065E798  03 D1                     ADD EDX,ECX
0065E79A  89 10                     MOV dword ptr [EAX],EDX
0065E79C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0065E79F  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0065E7A3  8B 08                     MOV ECX,dword ptr [EAX]
0065E7A5  03 CA                     ADD ECX,EDX
0065E7A7  89 08                     MOV dword ptr [EAX],ECX
0065E7A9  8B 0B                     MOV ECX,dword ptr [EBX]
0065E7AB  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
0065E7AF  03 C8                     ADD ECX,EAX
0065E7B1  89 0B                     MOV dword ptr [EBX],ECX
LAB_0065e7b3:
0065E7B3  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065E7B6  46                        INC ESI
0065E7B7  3B F0                     CMP ESI,EAX
0065E7B9  7C 94                     JL 0x0065e74f
LAB_0065e7bb:
0065E7BB  57                        PUSH EDI
0065E7BC  E8 4F F9 04 00            CALL 0x006ae110
0065E7C1  85 F6                     TEST ESI,ESI
0065E7C3  7E 26                     JLE 0x0065e7eb
0065E7C5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065E7C8  5F                        POP EDI
0065E7C9  8B 01                     MOV EAX,dword ptr [ECX]
0065E7CB  99                        CDQ
0065E7CC  F7 FE                     IDIV ESI
0065E7CE  89 01                     MOV dword ptr [ECX],EAX
0065E7D0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0065E7D3  8B 01                     MOV EAX,dword ptr [ECX]
0065E7D5  99                        CDQ
0065E7D6  F7 FE                     IDIV ESI
0065E7D8  89 01                     MOV dword ptr [ECX],EAX
0065E7DA  8B 03                     MOV EAX,dword ptr [EBX]
0065E7DC  99                        CDQ
0065E7DD  F7 FE                     IDIV ESI
0065E7DF  5E                        POP ESI
0065E7E0  89 03                     MOV dword ptr [EBX],EAX
0065E7E2  33 C0                     XOR EAX,EAX
0065E7E4  5B                        POP EBX
0065E7E5  8B E5                     MOV ESP,EBP
0065E7E7  5D                        POP EBP
0065E7E8  C2 0C 00                  RET 0xc
LAB_0065e7eb:
0065E7EB  5F                        POP EDI
0065E7EC  5E                        POP ESI
0065E7ED  83 C8 FF                  OR EAX,0xffffffff
0065E7F0  5B                        POP EBX
0065E7F1  8B E5                     MOV ESP,EBP
0065E7F3  5D                        POP EBP
0065E7F4  C2 0C 00                  RET 0xc
LAB_0065e7f7:
0065E7F7  8B C6                     MOV EAX,ESI
0065E7F9  5F                        POP EDI
0065E7FA  5E                        POP ESI
0065E7FB  5B                        POP EBX
0065E7FC  8B E5                     MOV ESP,EBP
0065E7FE  5D                        POP EBP
0065E7FF  C2 0C 00                  RET 0xc
