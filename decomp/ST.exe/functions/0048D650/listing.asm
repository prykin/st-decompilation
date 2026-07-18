FUN_0048d650:
0048D650  55                        PUSH EBP
0048D651  8B EC                     MOV EBP,ESP
0048D653  83 EC 10                  SUB ESP,0x10
0048D656  53                        PUSH EBX
0048D657  56                        PUSH ESI
0048D658  8B F1                     MOV ESI,ECX
0048D65A  8D 45 F8                  LEA EAX,[EBP + -0x8]
0048D65D  57                        PUSH EDI
0048D65E  8D 4D FC                  LEA ECX,[EBP + -0x4]
0048D661  50                        PUSH EAX
0048D662  8D 55 08                  LEA EDX,[EBP + 0x8]
0048D665  51                        PUSH ECX
0048D666  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0048D669  52                        PUSH EDX
0048D66A  C7 45 F0 40 42 0F 00      MOV dword ptr [EBP + -0x10],0xf4240
0048D671  E8 4F 42 F7 FF            CALL 0x004018c5
0048D676  33 DB                     XOR EBX,EBX
0048D678  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_0048d67b:
0048D67B  33 FF                     XOR EDI,EDI
LAB_0048d67d:
0048D67D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0048D680  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048D683  03 D7                     ADD EDX,EDI
0048D685  8D 48 01                  LEA ECX,[EAX + 0x1]
0048D688  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0048D68B  03 C3                     ADD EAX,EBX
0048D68D  66 85 C0                  TEST AX,AX
0048D690  7C 56                     JL 0x0048d6e8
0048D692  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0048D699  7D 4D                     JGE 0x0048d6e8
0048D69B  66 85 D2                  TEST DX,DX
0048D69E  7C 48                     JL 0x0048d6e8
0048D6A0  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048D6A7  7D 3F                     JGE 0x0048d6e8
0048D6A9  66 85 C9                  TEST CX,CX
0048D6AC  7C 3A                     JL 0x0048d6e8
0048D6AE  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048D6B5  7D 31                     JGE 0x0048d6e8
0048D6B7  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0048D6BE  0F BF C9                  MOVSX ECX,CX
0048D6C1  0F AF D9                  IMUL EBX,ECX
0048D6C4  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0048D6CB  0F BF D2                  MOVSX EDX,DX
0048D6CE  0F AF CA                  IMUL ECX,EDX
0048D6D1  0F BF C0                  MOVSX EAX,AX
0048D6D4  03 D9                     ADD EBX,ECX
0048D6D6  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048D6DC  03 D8                     ADD EBX,EAX
0048D6DE  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
0048D6E1  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0048D6E4  85 C0                     TEST EAX,EAX
0048D6E6  75 55                     JNZ 0x0048d73d
LAB_0048d6e8:
0048D6E8  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0048D6EC  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0048D6F0  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
0048D6F4  42                        INC EDX
0048D6F5  03 C7                     ADD EAX,EDI
0048D6F7  52                        PUSH EDX
0048D6F8  03 CB                     ADD ECX,EBX
0048D6FA  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0048D6FE  50                        PUSH EAX
0048D6FF  51                        PUSH ECX
0048D700  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0048D704  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0048D708  52                        PUSH EDX
0048D709  50                        PUSH EAX
0048D70A  51                        PUSH ECX
0048D70B  E8 C0 D6 21 00            CALL 0x006aadd0
0048D710  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
0048D713  7D 28                     JGE 0x0048d73d
0048D715  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0048D718  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0048D71B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0048D71E  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
0048D721  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
0048D724  66 89 86 C5 04 00 00      MOV word ptr [ESI + 0x4c5],AX
0048D72B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0048D72E  40                        INC EAX
0048D72F  66 89 96 C7 04 00 00      MOV word ptr [ESI + 0x4c7],DX
0048D736  66 89 86 C9 04 00 00      MOV word ptr [ESI + 0x4c9],AX
LAB_0048d73d:
0048D73D  47                        INC EDI
0048D73E  83 FF 02                  CMP EDI,0x2
0048D741  0F 8C 36 FF FF FF         JL 0x0048d67d
0048D747  43                        INC EBX
0048D748  83 FB 02                  CMP EBX,0x2
0048D74B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0048D74E  0F 8C 27 FF FF FF         JL 0x0048d67b
0048D754  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0048D757  33 C0                     XOR EAX,EAX
0048D759  81 F9 40 42 0F 00         CMP ECX,0xf4240
0048D75F  5F                        POP EDI
0048D760  5E                        POP ESI
0048D761  5B                        POP EBX
0048D762  0F 95 C0                  SETNZ AL
0048D765  8B E5                     MOV ESP,EBP
0048D767  5D                        POP EBP
0048D768  C2 04 00                  RET 0x4
