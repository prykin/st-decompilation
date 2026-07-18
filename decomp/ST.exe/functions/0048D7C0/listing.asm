FUN_0048d7c0:
0048D7C0  55                        PUSH EBP
0048D7C1  8B EC                     MOV EBP,ESP
0048D7C3  83 EC 10                  SUB ESP,0x10
0048D7C6  53                        PUSH EBX
0048D7C7  56                        PUSH ESI
0048D7C8  8B F1                     MOV ESI,ECX
0048D7CA  8D 45 F8                  LEA EAX,[EBP + -0x8]
0048D7CD  57                        PUSH EDI
0048D7CE  8D 4D FC                  LEA ECX,[EBP + -0x4]
0048D7D1  50                        PUSH EAX
0048D7D2  8D 55 08                  LEA EDX,[EBP + 0x8]
0048D7D5  51                        PUSH ECX
0048D7D6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0048D7D9  52                        PUSH EDX
0048D7DA  C7 45 F0 40 42 0F 00      MOV dword ptr [EBP + -0x10],0xf4240
0048D7E1  E8 DF 40 F7 FF            CALL 0x004018c5
0048D7E6  33 DB                     XOR EBX,EBX
0048D7E8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_0048d7eb:
0048D7EB  33 FF                     XOR EDI,EDI
LAB_0048d7ed:
0048D7ED  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0048D7F0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048D7F3  03 D7                     ADD EDX,EDI
0048D7F5  8D 48 01                  LEA ECX,[EAX + 0x1]
0048D7F8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048D7FB  03 C3                     ADD EAX,EBX
0048D7FD  66 85 C0                  TEST AX,AX
0048D800  7C 56                     JL 0x0048d858
0048D802  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0048D809  7D 4D                     JGE 0x0048d858
0048D80B  66 85 D2                  TEST DX,DX
0048D80E  7C 48                     JL 0x0048d858
0048D810  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048D817  7D 3F                     JGE 0x0048d858
0048D819  66 85 C9                  TEST CX,CX
0048D81C  7C 3A                     JL 0x0048d858
0048D81E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048D825  7D 31                     JGE 0x0048d858
0048D827  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0048D82E  0F BF C9                  MOVSX ECX,CX
0048D831  0F AF D9                  IMUL EBX,ECX
0048D834  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0048D83B  0F BF D2                  MOVSX EDX,DX
0048D83E  0F AF CA                  IMUL ECX,EDX
0048D841  0F BF C0                  MOVSX EAX,AX
0048D844  03 D9                     ADD EBX,ECX
0048D846  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048D84C  03 D8                     ADD EBX,EAX
0048D84E  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
0048D851  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0048D854  85 C0                     TEST EAX,EAX
0048D856  75 55                     JNZ 0x0048d8ad
LAB_0048d858:
0048D858  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0048D85C  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0048D860  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
0048D864  42                        INC EDX
0048D865  03 C7                     ADD EAX,EDI
0048D867  52                        PUSH EDX
0048D868  03 CB                     ADD ECX,EBX
0048D86A  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0048D86E  50                        PUSH EAX
0048D86F  51                        PUSH ECX
0048D870  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0048D874  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0048D878  52                        PUSH EDX
0048D879  50                        PUSH EAX
0048D87A  51                        PUSH ECX
0048D87B  E8 50 D5 21 00            CALL 0x006aadd0
0048D880  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
0048D883  7D 28                     JGE 0x0048d8ad
0048D885  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0048D888  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0048D88B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0048D88E  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
0048D891  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
0048D894  66 89 86 3C 05 00 00      MOV word ptr [ESI + 0x53c],AX
0048D89B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0048D89E  40                        INC EAX
0048D89F  66 89 96 3E 05 00 00      MOV word ptr [ESI + 0x53e],DX
0048D8A6  66 89 86 40 05 00 00      MOV word ptr [ESI + 0x540],AX
LAB_0048d8ad:
0048D8AD  47                        INC EDI
0048D8AE  83 FF 02                  CMP EDI,0x2
0048D8B1  0F 8C 36 FF FF FF         JL 0x0048d7ed
0048D8B7  43                        INC EBX
0048D8B8  83 FB 02                  CMP EBX,0x2
0048D8BB  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0048D8BE  0F 8C 27 FF FF FF         JL 0x0048d7eb
0048D8C4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0048D8C7  33 C0                     XOR EAX,EAX
0048D8C9  81 F9 40 42 0F 00         CMP ECX,0xf4240
0048D8CF  5F                        POP EDI
0048D8D0  5E                        POP ESI
0048D8D1  5B                        POP EBX
0048D8D2  0F 95 C0                  SETNZ AL
0048D8D5  8B E5                     MOV ESP,EBP
0048D8D7  5D                        POP EBP
0048D8D8  C2 04 00                  RET 0x4
