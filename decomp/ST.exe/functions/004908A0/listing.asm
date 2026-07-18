FUN_004908a0:
004908A0  55                        PUSH EBP
004908A1  8B EC                     MOV EBP,ESP
004908A3  83 EC 0C                  SUB ESP,0xc
004908A6  53                        PUSH EBX
004908A7  56                        PUSH ESI
004908A8  8B F1                     MOV ESI,ECX
004908AA  8D 45 F8                  LEA EAX,[EBP + -0x8]
004908AD  57                        PUSH EDI
004908AE  8D 4D FC                  LEA ECX,[EBP + -0x4]
004908B1  50                        PUSH EAX
004908B2  8D 55 08                  LEA EDX,[EBP + 0x8]
004908B5  51                        PUSH ECX
004908B6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004908B9  52                        PUSH EDX
004908BA  C7 45 F4 40 42 0F 00      MOV dword ptr [EBP + -0xc],0xf4240
004908C1  E8 FF 0F F7 FF            CALL 0x004018c5
004908C6  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004908C9  33 FF                     XOR EDI,EDI
LAB_004908cb:
004908CB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004908CE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004908D1  03 D7                     ADD EDX,EDI
004908D3  8D 48 01                  LEA ECX,[EAX + 0x1]
004908D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004908D9  03 C3                     ADD EAX,EBX
004908DB  66 85 C0                  TEST AX,AX
004908DE  7C 56                     JL 0x00490936
004908E0  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004908E7  7D 4D                     JGE 0x00490936
004908E9  66 85 D2                  TEST DX,DX
004908EC  7C 48                     JL 0x00490936
004908EE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004908F5  7D 3F                     JGE 0x00490936
004908F7  66 85 C9                  TEST CX,CX
004908FA  7C 3A                     JL 0x00490936
004908FC  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00490903  7D 31                     JGE 0x00490936
00490905  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0049090C  0F BF C9                  MOVSX ECX,CX
0049090F  0F AF D9                  IMUL EBX,ECX
00490912  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00490919  0F BF D2                  MOVSX EDX,DX
0049091C  0F AF CA                  IMUL ECX,EDX
0049091F  0F BF C0                  MOVSX EAX,AX
00490922  03 D9                     ADD EBX,ECX
00490924  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0049092A  03 D8                     ADD EBX,EAX
0049092C  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
0049092F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00490932  85 C0                     TEST EAX,EAX
00490934  75 55                     JNZ 0x0049098b
LAB_00490936:
00490936  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0049093A  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0049093E  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
00490942  42                        INC EDX
00490943  03 C7                     ADD EAX,EDI
00490945  52                        PUSH EDX
00490946  03 CB                     ADD ECX,EBX
00490948  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0049094C  50                        PUSH EAX
0049094D  51                        PUSH ECX
0049094E  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00490952  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
00490956  52                        PUSH EDX
00490957  50                        PUSH EAX
00490958  51                        PUSH ECX
00490959  E8 72 A4 21 00            CALL 0x006aadd0
0049095E  3B 45 F4                  CMP EAX,dword ptr [EBP + -0xc]
00490961  7D 28                     JGE 0x0049098b
00490963  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00490966  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00490969  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0049096C  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
0049096F  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00490972  66 89 86 6C 05 00 00      MOV word ptr [ESI + 0x56c],AX
00490979  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049097C  40                        INC EAX
0049097D  66 89 96 6E 05 00 00      MOV word ptr [ESI + 0x56e],DX
00490984  66 89 86 70 05 00 00      MOV word ptr [ESI + 0x570],AX
LAB_0049098b:
0049098B  47                        INC EDI
0049098C  83 FF 02                  CMP EDI,0x2
0049098F  0F 8C 36 FF FF FF         JL 0x004908cb
00490995  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00490998  33 C0                     XOR EAX,EAX
0049099A  81 F9 40 42 0F 00         CMP ECX,0xf4240
004909A0  5F                        POP EDI
004909A1  5E                        POP ESI
004909A2  5B                        POP EBX
004909A3  0F 95 C0                  SETNZ AL
004909A6  8B E5                     MOV ESP,EBP
004909A8  5D                        POP EBP
004909A9  C2 08 00                  RET 0x8
