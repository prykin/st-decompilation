FUN_004950b0:
004950B0  55                        PUSH EBP
004950B1  8B EC                     MOV EBP,ESP
004950B3  83 EC 0C                  SUB ESP,0xc
004950B6  53                        PUSH EBX
004950B7  56                        PUSH ESI
004950B8  57                        PUSH EDI
004950B9  8B F1                     MOV ESI,ECX
004950BB  C7 45 F8 40 42 0F 00      MOV dword ptr [EBP + -0x8],0xf4240
004950C2  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004950c9:
004950C9  33 FF                     XOR EDI,EDI
LAB_004950cb:
004950CB  66 8B 9E 6F 06 00 00      MOV BX,word ptr [ESI + 0x66f]
004950D2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004950D5  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
004950D9  0F BF C3                  MOVSX EAX,BX
004950DC  03 C1                     ADD EAX,ECX
004950DE  3B C2                     CMP EAX,EDX
004950E0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004950E3  75 25                     JNZ 0x0049510a
004950E5  0F BF 86 71 06 00 00      MOVSX EAX,word ptr [ESI + 0x671]
004950EC  0F BF 56 5D               MOVSX EDX,word ptr [ESI + 0x5d]
004950F0  03 C7                     ADD EAX,EDI
004950F2  3B C2                     CMP EAX,EDX
004950F4  75 14                     JNZ 0x0049510a
004950F6  0F BF 86 73 06 00 00      MOVSX EAX,word ptr [ESI + 0x673]
004950FD  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00495101  40                        INC EAX
00495102  3B C2                     CMP EAX,EDX
00495104  0F 84 04 01 00 00         JZ 0x0049520e
LAB_0049510a:
0049510A  66 8B 86 73 06 00 00      MOV AX,word ptr [ESI + 0x673]
00495111  8D 48 01                  LEA ECX,[EAX + 0x1]
00495114  66 8B 86 71 06 00 00      MOV AX,word ptr [ESI + 0x671]
0049511B  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
0049511E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00495121  03 C3                     ADD EAX,EBX
00495123  66 85 C0                  TEST AX,AX
00495126  7C 52                     JL 0x0049517a
00495128  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0049512F  7D 49                     JGE 0x0049517a
00495131  66 85 D2                  TEST DX,DX
00495134  7C 44                     JL 0x0049517a
00495136  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0049513D  7D 3B                     JGE 0x0049517a
0049513F  66 85 C9                  TEST CX,CX
00495142  7C 36                     JL 0x0049517a
00495144  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0049514B  7D 2D                     JGE 0x0049517a
0049514D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00495154  0F BF C9                  MOVSX ECX,CX
00495157  0F AF D9                  IMUL EBX,ECX
0049515A  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00495161  0F BF D2                  MOVSX EDX,DX
00495164  0F AF CA                  IMUL ECX,EDX
00495167  0F BF C0                  MOVSX EAX,AX
0049516A  03 D9                     ADD EBX,ECX
0049516C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00495172  03 D8                     ADD EBX,EAX
00495174  83 3C D9 00               CMP dword ptr [ECX + EBX*0x8],0x0
00495178  75 63                     JNZ 0x004951dd
LAB_0049517a:
0049517A  0F BF 96 73 06 00 00      MOVSX EDX,word ptr [ESI + 0x673]
00495181  0F BF 86 71 06 00 00      MOVSX EAX,word ptr [ESI + 0x671]
00495188  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0049518B  42                        INC EDX
0049518C  03 C7                     ADD EAX,EDI
0049518E  52                        PUSH EDX
0049518F  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00495193  50                        PUSH EAX
00495194  51                        PUSH ECX
00495195  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00495199  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0049519D  52                        PUSH EDX
0049519E  50                        PUSH EAX
0049519F  51                        PUSH ECX
004951A0  E8 2B 5C 21 00            CALL 0x006aadd0
004951A5  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
004951A8  7D 33                     JGE 0x004951dd
004951AA  66 8B 96 6F 06 00 00      MOV DX,word ptr [ESI + 0x66f]
004951B1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004951B4  66 03 55 FC               ADD DX,word ptr [EBP + -0x4]
004951B8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004951BB  66 8B CF                  MOV CX,DI
004951BE  66 89 10                  MOV word ptr [EAX],DX
004951C1  66 03 8E 71 06 00 00      ADD CX,word ptr [ESI + 0x671]
004951C8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004951CB  66 89 0A                  MOV word ptr [EDX],CX
004951CE  66 8B 86 73 06 00 00      MOV AX,word ptr [ESI + 0x673]
004951D5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004951D8  66 40                     INC AX
004951DA  66 89 01                  MOV word ptr [ECX],AX
LAB_004951dd:
004951DD  47                        INC EDI
004951DE  83 FF 02                  CMP EDI,0x2
004951E1  0F 8C E4 FE FF FF         JL 0x004950cb
004951E7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004951EA  40                        INC EAX
004951EB  83 F8 02                  CMP EAX,0x2
004951EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004951F1  0F 8C D2 FE FF FF         JL 0x004950c9
004951F7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004951FA  33 C0                     XOR EAX,EAX
004951FC  81 F9 40 42 0F 00         CMP ECX,0xf4240
00495202  5F                        POP EDI
00495203  5E                        POP ESI
00495204  5B                        POP EBX
00495205  0F 95 C0                  SETNZ AL
00495208  8B E5                     MOV ESP,EBP
0049520A  5D                        POP EBP
0049520B  C2 0C 00                  RET 0xc
LAB_0049520e:
0049520E  66 8B 96 6F 06 00 00      MOV DX,word ptr [ESI + 0x66f]
00495215  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00495218  66 03 D1                  ADD DX,CX
0049521B  66 89 10                  MOV word ptr [EAX],DX
0049521E  66 8B 8E 71 06 00 00      MOV CX,word ptr [ESI + 0x671]
00495225  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00495228  66 03 CF                  ADD CX,DI
0049522B  5F                        POP EDI
0049522C  66 89 0A                  MOV word ptr [EDX],CX
0049522F  66 8B 86 73 06 00 00      MOV AX,word ptr [ESI + 0x673]
00495236  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00495239  66 40                     INC AX
0049523B  5E                        POP ESI
0049523C  5B                        POP EBX
0049523D  66 89 01                  MOV word ptr [ECX],AX
00495240  B8 01 00 00 00            MOV EAX,0x1
00495245  8B E5                     MOV ESP,EBP
00495247  5D                        POP EBP
00495248  C2 0C 00                  RET 0xc
