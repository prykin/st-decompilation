FUN_00495420:
00495420  55                        PUSH EBP
00495421  8B EC                     MOV EBP,ESP
00495423  83 EC 08                  SUB ESP,0x8
00495426  53                        PUSH EBX
00495427  56                        PUSH ESI
00495428  8B F1                     MOV ESI,ECX
0049542A  57                        PUSH EDI
0049542B  C7 45 F8 40 42 0F 00      MOV dword ptr [EBP + -0x8],0xf4240
00495432  83 BE B9 06 00 00 01      CMP dword ptr [ESI + 0x6b9],0x1
00495439  0F 85 3E 01 00 00         JNZ 0x0049557d
0049543F  33 DB                     XOR EBX,EBX
00495441  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00495444:
00495444  33 FF                     XOR EDI,EDI
LAB_00495446:
00495446  66 8B 86 AD 06 00 00      MOV AX,word ptr [ESI + 0x6ad]
0049544D  8D 48 01                  LEA ECX,[EAX + 0x1]
00495450  66 8B 86 AB 06 00 00      MOV AX,word ptr [ESI + 0x6ab]
00495457  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
0049545A  66 8B 86 A9 06 00 00      MOV AX,word ptr [ESI + 0x6a9]
00495461  03 C3                     ADD EAX,EBX
00495463  66 85 C0                  TEST AX,AX
00495466  7C 56                     JL 0x004954be
00495468  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0049546F  7D 4D                     JGE 0x004954be
00495471  66 85 D2                  TEST DX,DX
00495474  7C 48                     JL 0x004954be
00495476  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0049547D  7D 3F                     JGE 0x004954be
0049547F  66 85 C9                  TEST CX,CX
00495482  7C 3A                     JL 0x004954be
00495484  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0049548B  7D 31                     JGE 0x004954be
0049548D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00495494  0F BF C9                  MOVSX ECX,CX
00495497  0F AF D9                  IMUL EBX,ECX
0049549A  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004954A1  0F BF D2                  MOVSX EDX,DX
004954A4  0F AF CA                  IMUL ECX,EDX
004954A7  0F BF C0                  MOVSX EAX,AX
004954AA  03 D9                     ADD EBX,ECX
004954AC  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004954B2  03 D8                     ADD EBX,EAX
004954B4  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
004954B7  85 C0                     TEST EAX,EAX
004954B9  75 6D                     JNZ 0x00495528
004954BB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004954be:
004954BE  0F BF 96 AD 06 00 00      MOVSX EDX,word ptr [ESI + 0x6ad]
004954C5  0F BF 86 AB 06 00 00      MOVSX EAX,word ptr [ESI + 0x6ab]
004954CC  0F BF 8E A9 06 00 00      MOVSX ECX,word ptr [ESI + 0x6a9]
004954D3  42                        INC EDX
004954D4  03 C7                     ADD EAX,EDI
004954D6  52                        PUSH EDX
004954D7  03 CB                     ADD ECX,EBX
004954D9  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
004954DD  50                        PUSH EAX
004954DE  51                        PUSH ECX
004954DF  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
004954E3  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
004954E7  52                        PUSH EDX
004954E8  50                        PUSH EAX
004954E9  51                        PUSH ECX
004954EA  E8 E1 58 21 00            CALL 0x006aadd0
004954EF  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
004954F2  7D 3B                     JGE 0x0049552f
004954F4  66 8B 96 A9 06 00 00      MOV DX,word ptr [ESI + 0x6a9]
004954FB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004954FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00495501  66 03 D3                  ADD DX,BX
00495504  66 89 10                  MOV word ptr [EAX],DX
00495507  66 8B 8E AB 06 00 00      MOV CX,word ptr [ESI + 0x6ab]
0049550E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00495511  66 03 CF                  ADD CX,DI
00495514  66 89 0A                  MOV word ptr [EDX],CX
00495517  66 8B 86 AD 06 00 00      MOV AX,word ptr [ESI + 0x6ad]
0049551E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00495521  66 40                     INC AX
00495523  66 89 01                  MOV word ptr [ECX],AX
00495526  EB 07                     JMP 0x0049552f
LAB_00495528:
00495528  3B C6                     CMP EAX,ESI
0049552A  74 31                     JZ 0x0049555d
0049552C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0049552f:
0049552F  47                        INC EDI
00495530  83 FF 02                  CMP EDI,0x2
00495533  0F 8C 0D FF FF FF         JL 0x00495446
00495539  43                        INC EBX
0049553A  83 FB 02                  CMP EBX,0x2
0049553D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00495540  0F 8C FE FE FF FF         JL 0x00495444
00495546  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00495549  33 C0                     XOR EAX,EAX
0049554B  81 F9 40 42 0F 00         CMP ECX,0xf4240
00495551  5F                        POP EDI
00495552  5E                        POP ESI
00495553  5B                        POP EBX
00495554  0F 95 C0                  SETNZ AL
00495557  8B E5                     MOV ESP,EBP
00495559  5D                        POP EBP
0049555A  C2 0C 00                  RET 0xc
LAB_0049555d:
0049555D  66 8B 96 A9 06 00 00      MOV DX,word ptr [ESI + 0x6a9]
00495564  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00495567  66 03 55 FC               ADD DX,word ptr [EBP + -0x4]
0049556B  66 89 10                  MOV word ptr [EAX],DX
0049556E  66 8B 8E AB 06 00 00      MOV CX,word ptr [ESI + 0x6ab]
00495575  66 03 CF                  ADD CX,DI
00495578  E9 8A 00 00 00            JMP 0x00495607
LAB_0049557d:
0049557D  66 8B 86 AD 06 00 00      MOV AX,word ptr [ESI + 0x6ad]
00495584  66 8B 8E A9 06 00 00      MOV CX,word ptr [ESI + 0x6a9]
0049558B  66 8B 96 AB 06 00 00      MOV DX,word ptr [ESI + 0x6ab]
00495592  66 40                     INC AX
00495594  66 85 C9                  TEST CX,CX
00495597  7C 61                     JL 0x004955fa
00495599  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004955A0  66 3B CF                  CMP CX,DI
004955A3  7D 55                     JGE 0x004955fa
004955A5  66 85 D2                  TEST DX,DX
004955A8  7C 50                     JL 0x004955fa
004955AA  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004955B1  7D 47                     JGE 0x004955fa
004955B3  66 85 C0                  TEST AX,AX
004955B6  7C 42                     JL 0x004955fa
004955B8  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004955BF  7D 39                     JGE 0x004955fa
004955C1  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004955C8  0F BF C0                  MOVSX EAX,AX
004955CB  0F AF D8                  IMUL EBX,EAX
004955CE  0F BF C7                  MOVSX EAX,DI
004955D1  0F BF D2                  MOVSX EDX,DX
004955D4  0F AF C2                  IMUL EAX,EDX
004955D7  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004955DD  03 D8                     ADD EBX,EAX
004955DF  0F BF C1                  MOVSX EAX,CX
004955E2  03 D8                     ADD EBX,EAX
004955E4  8B 04 DA                  MOV EAX,dword ptr [EDX + EBX*0x8]
004955E7  85 C0                     TEST EAX,EAX
004955E9  74 0F                     JZ 0x004955fa
004955EB  3B C6                     CMP EAX,ESI
004955ED  74 0B                     JZ 0x004955fa
004955EF  5F                        POP EDI
004955F0  5E                        POP ESI
004955F1  33 C0                     XOR EAX,EAX
004955F3  5B                        POP EBX
004955F4  8B E5                     MOV ESP,EBP
004955F6  5D                        POP EBP
004955F7  C2 0C 00                  RET 0xc
LAB_004955fa:
004955FA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004955FD  66 89 08                  MOV word ptr [EAX],CX
00495600  66 8B 8E AB 06 00 00      MOV CX,word ptr [ESI + 0x6ab]
LAB_00495607:
00495607  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0049560A  5F                        POP EDI
0049560B  66 89 0A                  MOV word ptr [EDX],CX
0049560E  66 8B 86 AD 06 00 00      MOV AX,word ptr [ESI + 0x6ad]
00495615  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00495618  66 40                     INC AX
0049561A  5E                        POP ESI
0049561B  5B                        POP EBX
0049561C  66 89 01                  MOV word ptr [ECX],AX
0049561F  B8 01 00 00 00            MOV EAX,0x1
00495624  8B E5                     MOV ESP,EBP
00495626  5D                        POP EBP
00495627  C2 0C 00                  RET 0xc
