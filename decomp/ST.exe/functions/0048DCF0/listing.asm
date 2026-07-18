FUN_0048dcf0:
0048DCF0  55                        PUSH EBP
0048DCF1  8B EC                     MOV EBP,ESP
0048DCF3  83 EC 08                  SUB ESP,0x8
0048DCF6  56                        PUSH ESI
0048DCF7  8B F1                     MOV ESI,ECX
0048DCF9  57                        PUSH EDI
0048DCFA  C7 45 F8 40 42 0F 00      MOV dword ptr [EBP + -0x8],0xf4240
0048DD01  66 8B 86 E1 04 00 00      MOV AX,word ptr [ESI + 0x4e1]
0048DD08  8B BE 02 05 00 00         MOV EDI,dword ptr [ESI + 0x502]
0048DD0E  66 8B 8E DD 04 00 00      MOV CX,word ptr [ESI + 0x4dd]
0048DD15  66 8B 96 DF 04 00 00      MOV DX,word ptr [ESI + 0x4df]
0048DD1C  66 40                     INC AX
0048DD1E  83 FF 01                  CMP EDI,0x1
0048DD21  66 89 8E FC 04 00 00      MOV word ptr [ESI + 0x4fc],CX
0048DD28  66 89 96 FE 04 00 00      MOV word ptr [ESI + 0x4fe],DX
0048DD2F  66 89 86 00 05 00 00      MOV word ptr [ESI + 0x500],AX
0048DD36  0F 85 17 01 00 00         JNZ 0x0048de53
0048DD3C  53                        PUSH EBX
0048DD3D  33 DB                     XOR EBX,EBX
0048DD3F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_0048dd42:
0048DD42  33 FF                     XOR EDI,EDI
LAB_0048dd44:
0048DD44  66 8B 86 E1 04 00 00      MOV AX,word ptr [ESI + 0x4e1]
0048DD4B  8D 48 01                  LEA ECX,[EAX + 0x1]
0048DD4E  66 8B 86 DF 04 00 00      MOV AX,word ptr [ESI + 0x4df]
0048DD55  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
0048DD58  66 8B 86 DD 04 00 00      MOV AX,word ptr [ESI + 0x4dd]
0048DD5F  03 C3                     ADD EAX,EBX
0048DD61  66 85 C0                  TEST AX,AX
0048DD64  7C 56                     JL 0x0048ddbc
0048DD66  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0048DD6D  7D 4D                     JGE 0x0048ddbc
0048DD6F  66 85 D2                  TEST DX,DX
0048DD72  7C 48                     JL 0x0048ddbc
0048DD74  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048DD7B  7D 3F                     JGE 0x0048ddbc
0048DD7D  66 85 C9                  TEST CX,CX
0048DD80  7C 3A                     JL 0x0048ddbc
0048DD82  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0048DD89  7D 31                     JGE 0x0048ddbc
0048DD8B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0048DD92  0F BF C9                  MOVSX ECX,CX
0048DD95  0F AF D9                  IMUL EBX,ECX
0048DD98  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0048DD9F  0F BF D2                  MOVSX EDX,DX
0048DDA2  0F AF CA                  IMUL ECX,EDX
0048DDA5  0F BF C0                  MOVSX EAX,AX
0048DDA8  03 D9                     ADD EBX,ECX
0048DDAA  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048DDB0  03 D8                     ADD EBX,EAX
0048DDB2  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
0048DDB5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0048DDB8  85 C0                     TEST EAX,EAX
0048DDBA  75 6B                     JNZ 0x0048de27
LAB_0048ddbc:
0048DDBC  0F BF 96 E1 04 00 00      MOVSX EDX,word ptr [ESI + 0x4e1]
0048DDC3  0F BF 86 DF 04 00 00      MOVSX EAX,word ptr [ESI + 0x4df]
0048DDCA  0F BF 8E DD 04 00 00      MOVSX ECX,word ptr [ESI + 0x4dd]
0048DDD1  42                        INC EDX
0048DDD2  03 C7                     ADD EAX,EDI
0048DDD4  52                        PUSH EDX
0048DDD5  03 CB                     ADD ECX,EBX
0048DDD7  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0048DDDB  50                        PUSH EAX
0048DDDC  51                        PUSH ECX
0048DDDD  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0048DDE1  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0048DDE5  52                        PUSH EDX
0048DDE6  50                        PUSH EAX
0048DDE7  51                        PUSH ECX
0048DDE8  E8 E3 CF 21 00            CALL 0x006aadd0
0048DDED  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
0048DDF0  7D 35                     JGE 0x0048de27
0048DDF2  66 8B 8E E1 04 00 00      MOV CX,word ptr [ESI + 0x4e1]
0048DDF9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0048DDFC  66 8B D3                  MOV DX,BX
0048DDFF  66 8B C7                  MOV AX,DI
0048DE02  66 03 96 DD 04 00 00      ADD DX,word ptr [ESI + 0x4dd]
0048DE09  66 03 86 DF 04 00 00      ADD AX,word ptr [ESI + 0x4df]
0048DE10  66 41                     INC CX
0048DE12  66 89 96 FC 04 00 00      MOV word ptr [ESI + 0x4fc],DX
0048DE19  66 89 86 FE 04 00 00      MOV word ptr [ESI + 0x4fe],AX
0048DE20  66 89 8E 00 05 00 00      MOV word ptr [ESI + 0x500],CX
LAB_0048de27:
0048DE27  47                        INC EDI
0048DE28  83 FF 02                  CMP EDI,0x2
0048DE2B  0F 8C 13 FF FF FF         JL 0x0048dd44
0048DE31  43                        INC EBX
0048DE32  83 FB 02                  CMP EBX,0x2
0048DE35  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0048DE38  0F 8C 04 FF FF FF         JL 0x0048dd42
0048DE3E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0048DE41  33 C0                     XOR EAX,EAX
0048DE43  81 F9 40 42 0F 00         CMP ECX,0xf4240
0048DE49  5B                        POP EBX
0048DE4A  5F                        POP EDI
0048DE4B  5E                        POP ESI
0048DE4C  0F 95 C0                  SETNZ AL
0048DE4F  8B E5                     MOV ESP,EBP
0048DE51  5D                        POP EBP
0048DE52  C3                        RET
LAB_0048de53:
0048DE53  66 85 C9                  TEST CX,CX
0048DE56  7C 51                     JL 0x0048dea9
0048DE58  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0048DE5F  66 3B CE                  CMP CX,SI
0048DE62  7D 45                     JGE 0x0048dea9
0048DE64  66 85 D2                  TEST DX,DX
0048DE67  7C 40                     JL 0x0048dea9
0048DE69  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0048DE70  7D 37                     JGE 0x0048dea9
0048DE72  66 85 C0                  TEST AX,AX
0048DE75  7C 32                     JL 0x0048dea9
0048DE77  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0048DE7E  7D 29                     JGE 0x0048dea9
0048DE80  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0048DE87  0F BF C0                  MOVSX EAX,AX
0048DE8A  0F AF F8                  IMUL EDI,EAX
0048DE8D  0F BF C6                  MOVSX EAX,SI
0048DE90  0F BF D2                  MOVSX EDX,DX
0048DE93  0F AF C2                  IMUL EAX,EDX
0048DE96  03 F8                     ADD EDI,EAX
0048DE98  0F BF C1                  MOVSX EAX,CX
0048DE9B  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048DEA1  03 F8                     ADD EDI,EAX
0048DEA3  83 3C F9 00               CMP dword ptr [ECX + EDI*0x8],0x0
0048DEA7  75 0B                     JNZ 0x0048deb4
LAB_0048dea9:
0048DEA9  5F                        POP EDI
0048DEAA  B8 01 00 00 00            MOV EAX,0x1
0048DEAF  5E                        POP ESI
0048DEB0  8B E5                     MOV ESP,EBP
0048DEB2  5D                        POP EBP
0048DEB3  C3                        RET
LAB_0048deb4:
0048DEB4  5F                        POP EDI
0048DEB5  33 C0                     XOR EAX,EAX
0048DEB7  5E                        POP ESI
0048DEB8  8B E5                     MOV ESP,EBP
0048DEBA  5D                        POP EBP
0048DEBB  C3                        RET
