FUN_006c81c0:
006C81C0  55                        PUSH EBP
006C81C1  8B EC                     MOV EBP,ESP
006C81C3  83 EC 08                  SUB ESP,0x8
006C81C6  53                        PUSH EBX
006C81C7  56                        PUSH ESI
006C81C8  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C81CB  85 F6                     TEST ESI,ESI
006C81CD  7F 0A                     JG 0x006c81d9
006C81CF  5E                        POP ESI
006C81D0  33 C0                     XOR EAX,EAX
006C81D2  5B                        POP EBX
006C81D3  8B E5                     MOV ESP,EBP
006C81D5  5D                        POP EBP
006C81D6  C2 14 00                  RET 0x14
LAB_006c81d9:
006C81D9  8D 04 F5 00 00 00 00      LEA EAX,[ESI*0x8 + 0x0]
006C81E0  50                        PUSH EAX
006C81E1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C81E4  E8 87 2A FE FF            CALL 0x006aac70
006C81E9  85 C0                     TEST EAX,EAX
006C81EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C81EE  75 08                     JNZ 0x006c81f8
006C81F0  5E                        POP ESI
006C81F1  5B                        POP EBX
006C81F2  8B E5                     MOV ESP,EBP
006C81F4  5D                        POP EBP
006C81F5  C2 14 00                  RET 0x14
LAB_006c81f8:
006C81F8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C81FB  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C81FE  83 FE 01                  CMP ESI,0x1
006C8201  89 10                     MOV dword ptr [EAX],EDX
006C8203  89 58 04                  MOV dword ptr [EAX + 0x4],EBX
006C8206  74 74                     JZ 0x006c827c
006C8208  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C820B  8B F2                     MOV ESI,EDX
006C820D  57                        PUSH EDI
006C820E  8B FB                     MOV EDI,EBX
006C8210  8D 48 FF                  LEA ECX,[EAX + -0x1]
006C8213  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C8216  2B C2                     SUB EAX,EDX
006C8218  C1 E0 10                  SHL EAX,0x10
006C821B  99                        CDQ
006C821C  F7 F9                     IDIV ECX
006C821E  C1 E6 10                  SHL ESI,0x10
006C8221  C1 E7 10                  SHL EDI,0x10
006C8224  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006C8227  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C822A  2B C3                     SUB EAX,EBX
006C822C  C1 E0 10                  SHL EAX,0x10
006C822F  99                        CDQ
006C8230  F7 F9                     IDIV ECX
006C8232  83 F9 01                  CMP ECX,0x1
006C8235  7E 30                     JLE 0x006c8267
006C8237  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C823A  81 C7 00 80 00 00         ADD EDI,0x8000
006C8240  83 C2 08                  ADD EDX,0x8
006C8243  81 C6 00 80 00 00         ADD ESI,0x8000
006C8249  49                        DEC ECX
LAB_006c824a:
006C824A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006C824D  03 F8                     ADD EDI,EAX
006C824F  03 F3                     ADD ESI,EBX
006C8251  83 C2 08                  ADD EDX,0x8
006C8254  8B DE                     MOV EBX,ESI
006C8256  C1 FB 10                  SAR EBX,0x10
006C8259  89 5A F8                  MOV dword ptr [EDX + -0x8],EBX
006C825C  8B DF                     MOV EBX,EDI
006C825E  C1 FB 10                  SAR EBX,0x10
006C8261  89 5A FC                  MOV dword ptr [EDX + -0x4],EBX
006C8264  49                        DEC ECX
006C8265  75 E3                     JNZ 0x006c824a
LAB_006c8267:
006C8267  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C826A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C826D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C8270  5F                        POP EDI
006C8271  89 54 01 F8               MOV dword ptr [ECX + EAX*0x1 + -0x8],EDX
006C8275  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C8278  89 54 01 FC               MOV dword ptr [ECX + EAX*0x1 + -0x4],EDX
LAB_006c827c:
006C827C  5E                        POP ESI
006C827D  5B                        POP EBX
006C827E  8B E5                     MOV ESP,EBP
006C8280  5D                        POP EBP
006C8281  C2 14 00                  RET 0x14
