FUN_004934b0:
004934B0  55                        PUSH EBP
004934B1  8B EC                     MOV EBP,ESP
004934B3  83 EC 18                  SUB ESP,0x18
004934B6  53                        PUSH EBX
004934B7  56                        PUSH ESI
004934B8  57                        PUSH EDI
004934B9  8B F9                     MOV EDI,ECX
004934BB  33 DB                     XOR EBX,EBX
004934BD  BE 40 42 0F 00            MOV ESI,0xf4240
004934C2  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004934C5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004934C8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004934CB  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004934CE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004934D1  C1 E1 04                  SHL ECX,0x4
004934D4  03 C8                     ADD ECX,EAX
004934D6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004934D9  8B 0C 4D FA 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57fa]
004934E0  66 C7 02 FF FF            MOV word ptr [EDX],0xffff
004934E5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004934E8  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
004934ED  85 C9                     TEST ECX,ECX
004934EF  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004934F2  66 C7 02 FF FF            MOV word ptr [EDX],0xffff
004934F7  0F 84 B3 00 00 00         JZ 0x004935b0
004934FD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00493500  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00493503  85 C0                     TEST EAX,EAX
00493505  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00493508  0F 8E A2 00 00 00         JLE 0x004935b0
0049350E  EB 03                     JMP 0x00493513
LAB_00493510:
00493510  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_00493513:
00493513  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00493516  8D 45 F4                  LEA EAX,[EBP + -0xc]
00493519  50                        PUSH EAX
0049351A  E8 51 97 21 00            CALL 0x006acc70
0049351F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00493522  85 C9                     TEST ECX,ECX
00493524  74 78                     JZ 0x0049359e
00493526  8B 11                     MOV EDX,dword ptr [ECX]
00493528  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0049352E  83 F8 01                  CMP EAX,0x1
00493531  75 6B                     JNZ 0x0049359e
00493533  8D 45 FA                  LEA EAX,[EBP + -0x6]
00493536  8D 4D FC                  LEA ECX,[EBP + -0x4]
00493539  50                        PUSH EAX
0049353A  8D 55 FE                  LEA EDX,[EBP + -0x2]
0049353D  51                        PUSH ECX
0049353E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00493541  52                        PUSH EDX
00493542  E8 7E E3 F6 FF            CALL 0x004018c5
00493547  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
0049354B  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0049354F  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
00493553  50                        PUSH EAX
00493554  51                        PUSH ECX
00493555  0F BF 47 4B               MOVSX EAX,word ptr [EDI + 0x4b]
00493559  0F BF 4F 49               MOVSX ECX,word ptr [EDI + 0x49]
0049355D  52                        PUSH EDX
0049355E  50                        PUSH EAX
0049355F  0F BF 57 47               MOVSX EDX,word ptr [EDI + 0x47]
00493563  51                        PUSH ECX
00493564  52                        PUSH EDX
00493565  E8 66 78 21 00            CALL 0x006aadd0
0049356A  3B C6                     CMP EAX,ESI
0049356C  7D 30                     JGE 0x0049359e
0049356E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00493571  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
00493575  8B F0                     MOV ESI,EAX
00493577  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
0049357B  66 89 01                  MOV word ptr [ECX],AX
0049357E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00493581  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
00493585  BB 01 00 00 00            MOV EBX,0x1
0049358A  66 89 10                  MOV word ptr [EAX],DX
0049358D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00493590  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00493593  66 89 0A                  MOV word ptr [EDX],CX
00493596  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00493599  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0049359C  89 0A                     MOV dword ptr [EDX],ECX
LAB_0049359e:
0049359E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004935A1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004935A4  40                        INC EAX
004935A5  3B C1                     CMP EAX,ECX
004935A7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004935AA  0F 8C 60 FF FF FF         JL 0x00493510
LAB_004935b0:
004935B0  5F                        POP EDI
004935B1  8B C3                     MOV EAX,EBX
004935B3  5E                        POP ESI
004935B4  5B                        POP EBX
004935B5  8B E5                     MOV ESP,EBP
004935B7  5D                        POP EBP
004935B8  C2 10 00                  RET 0x10
