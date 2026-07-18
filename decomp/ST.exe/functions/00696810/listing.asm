FUN_00696810:
00696810  55                        PUSH EBP
00696811  8B EC                     MOV EBP,ESP
00696813  83 EC 34                  SUB ESP,0x34
00696816  53                        PUSH EBX
00696817  56                        PUSH ESI
00696818  57                        PUSH EDI
00696819  8B F9                     MOV EDI,ECX
0069681B  83 CE FF                  OR ESI,0xffffffff
0069681E  8B 87 33 58 00 00         MOV EAX,dword ptr [EDI + 0x5833]
00696824  50                        PUSH EAX
00696825  E8 21 EE D6 FF            CALL 0x0040564b
0069682A  8B 87 2F 58 00 00         MOV EAX,dword ptr [EDI + 0x582f]
00696830  33 DB                     XOR EBX,EBX
00696832  85 C0                     TEST EAX,EAX
00696834  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00696837  0F 8E AF 00 00 00         JLE 0x006968ec
LAB_0069683d:
0069683D  8D 4D CC                  LEA ECX,[EBP + -0x34]
00696840  51                        PUSH ECX
00696841  53                        PUSH EBX
00696842  8B CF                     MOV ECX,EDI
00696844  E8 42 B8 D6 FF            CALL 0x0040208b
00696849  8B 8F 4B 58 00 00         MOV ECX,dword ptr [EDI + 0x584b]
0069684F  33 D2                     XOR EDX,EDX
00696851  85 C0                     TEST EAX,EAX
00696853  8A 14 19                  MOV DL,byte ptr [ECX + EBX*0x1]
00696856  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00696859  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0069685C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00696863  7E 41                     JLE 0x006968a6
00696865  8D 55 CC                  LEA EDX,[EBP + -0x34]
LAB_00696868:
00696868  8B 0A                     MOV ECX,dword ptr [EDX]
0069686A  8B B7 4F 58 00 00         MOV ESI,dword ptr [EDI + 0x584f]
00696870  0F BF 34 4E               MOVSX ESI,word ptr [ESI + ECX*0x2]
00696874  85 F6                     TEST ESI,ESI
00696876  7C 1B                     JL 0x00696893
00696878  8B 87 4B 58 00 00         MOV EAX,dword ptr [EDI + 0x584b]
0069687E  33 DB                     XOR EBX,EBX
00696880  8A 1C 01                  MOV BL,byte ptr [ECX + EAX*0x1]
00696883  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00696886  3B D8                     CMP EBX,EAX
00696888  74 19                     JZ 0x006968a3
0069688A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069688D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00696890  83 CE FF                  OR ESI,0xffffffff
LAB_00696893:
00696893  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00696896  83 C2 04                  ADD EDX,0x4
00696899  41                        INC ECX
0069689A  3B C8                     CMP ECX,EAX
0069689C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0069689F  7C C7                     JL 0x00696868
006968A1  EB 03                     JMP 0x006968a6
LAB_006968a3:
006968A3  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006968a6:
006968A6  85 F6                     TEST ESI,ESI
006968A8  7D 25                     JGE 0x006968cf
006968AA  6A 00                     PUSH 0x0
006968AC  6A 00                     PUSH 0x0
006968AE  6A 00                     PUSH 0x0
006968B0  E8 0B 7E 09 00            CALL 0x0072e6c0
006968B5  99                        CDQ
006968B6  F7 BF 47 58 00 00         IDIV dword ptr [EDI + 0x5847]
006968BC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006968BF  8B CF                     MOV ECX,EDI
006968C1  42                        INC EDX
006968C2  52                        PUSH EDX
006968C3  50                        PUSH EAX
006968C4  E8 B4 B1 D6 FF            CALL 0x00401a7d
006968C9  8B F0                     MOV ESI,EAX
006968CB  85 F6                     TEST ESI,ESI
006968CD  7C 0B                     JL 0x006968da
LAB_006968cf:
006968CF  6A 00                     PUSH 0x0
006968D1  53                        PUSH EBX
006968D2  56                        PUSH ESI
006968D3  8B CF                     MOV ECX,EDI
006968D5  E8 7C D8 D6 FF            CALL 0x00404156
LAB_006968da:
006968DA  8B 87 2F 58 00 00         MOV EAX,dword ptr [EDI + 0x582f]
006968E0  43                        INC EBX
006968E1  3B D8                     CMP EBX,EAX
006968E3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006968E6  0F 8C 51 FF FF FF         JL 0x0069683d
LAB_006968ec:
006968EC  5F                        POP EDI
006968ED  5E                        POP ESI
006968EE  5B                        POP EBX
006968EF  8B E5                     MOV ESP,EBP
006968F1  5D                        POP EBP
006968F2  C3                        RET
