FUN_0065e450:
0065E450  55                        PUSH EBP
0065E451  8B EC                     MOV EBP,ESP
0065E453  83 EC 0C                  SUB ESP,0xc
0065E456  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065E459  53                        PUSH EBX
0065E45A  56                        PUSH ESI
0065E45B  05 5D FF FF FF            ADD EAX,0xffffff5d
0065E460  8B F1                     MOV ESI,ECX
0065E462  33 DB                     XOR EBX,EBX
0065E464  83 F8 1B                  CMP EAX,0x1b
0065E467  57                        PUSH EDI
0065E468  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0065E46B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0065E46E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0065E471  77 2B                     JA 0x0065e49e
0065E473  33 C9                     XOR ECX,ECX
0065E475  8A 88 F8 E5 65 00         MOV CL,byte ptr [EAX + 0x65e5f8]
switchD_0065e47b::switchD:
0065E47B  FF 24 8D E4 E5 65 00      JMP dword ptr [ECX*0x4 + 0x65e5e4]
switchD_0065e47b::caseD_a3:
0065E482  B8 4E 00 00 00            MOV EAX,0x4e
0065E487  EB 17                     JMP 0x0065e4a0
switchD_0065e47b::caseD_a8:
0065E489  B8 45 00 00 00            MOV EAX,0x45
0065E48E  EB 10                     JMP 0x0065e4a0
switchD_0065e47b::caseD_b2:
0065E490  B8 70 00 00 00            MOV EAX,0x70
0065E495  EB 09                     JMP 0x0065e4a0
switchD_0065e47b::caseD_be:
0065E497  B8 72 00 00 00            MOV EAX,0x72
0065E49C  EB 02                     JMP 0x0065e4a0
switchD_0065e47b::caseD_a4:
0065E49E  33 C0                     XOR EAX,EAX
LAB_0065e4a0:
0065E4A0  50                        PUSH EAX
0065E4A1  8B CE                     MOV ECX,ESI
0065E4A3  E8 0E 75 DA FF            CALL 0x004059b6
0065E4A8  8B F8                     MOV EDI,EAX
0065E4AA  85 FF                     TEST EDI,EDI
0065E4AC  0F 84 27 01 00 00         JZ 0x0065e5d9
0065E4B2  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065E4B5  33 DB                     XOR EBX,EBX
0065E4B7  85 C0                     TEST EAX,EAX
0065E4B9  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0065E4BC  0F 8E 05 01 00 00         JLE 0x0065e5c7
0065E4C2  EB 03                     JMP 0x0065e4c7
LAB_0065e4c4:
0065E4C4  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_0065e4c7:
0065E4C7  3B D8                     CMP EBX,EAX
0065E4C9  73 0D                     JNC 0x0065e4d8
0065E4CB  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0065E4CE  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0065E4D1  0F AF C3                  IMUL EAX,EBX
0065E4D4  03 C1                     ADD EAX,ECX
0065E4D6  EB 02                     JMP 0x0065e4da
LAB_0065e4d8:
0065E4D8  33 C0                     XOR EAX,EAX
LAB_0065e4da:
0065E4DA  66 8B 10                  MOV DX,word ptr [EAX]
0065E4DD  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0065E4E0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E4E6  6A 01                     PUSH 0x1
0065E4E8  52                        PUSH EDX
0065E4E9  50                        PUSH EAX
0065E4EA  E8 CB 43 DA FF            CALL 0x004028ba
0065E4EF  8B F0                     MOV ESI,EAX
0065E4F1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0065E4F4  83 F8 1B                  CMP EAX,0x1b
0065E4F7  0F 87 BB 00 00 00         JA 0x0065e5b8
0065E4FD  33 C9                     XOR ECX,ECX
0065E4FF  8A 88 20 E6 65 00         MOV CL,byte ptr [EAX + 0x65e620]
switchD_0065e505::switchD:
0065E505  FF 24 8D 14 E6 65 00      JMP dword ptr [ECX*0x4 + 0x65e614]
switchD_0065e505::caseD_0:
0065E50C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0065E50F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0065E512  6A 00                     PUSH 0x0
0065E514  6A 00                     PUSH 0x0
0065E516  6A 00                     PUSH 0x0
0065E518  52                        PUSH EDX
0065E519  50                        PUSH EAX
0065E51A  6A 00                     PUSH 0x0
0065E51C  6A 00                     PUSH 0x0
0065E51E  8B CE                     MOV ECX,ESI
0065E520  E8 9C 2D DA FF            CALL 0x004012c1
0065E525  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065E528  F7 D8                     NEG EAX
0065E52A  1B C0                     SBB EAX,EAX
0065E52C  F7 D8                     NEG EAX
0065E52E  03 C8                     ADD ECX,EAX
0065E530  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0065E533  E9 80 00 00 00            JMP 0x0065e5b8
switchD_0065e505::caseD_f:
0065E538  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0065E53B  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
0065E541  3B C8                     CMP ECX,EAX
0065E543  74 48                     JZ 0x0065e58d
0065E545  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E54B  8A D0                     MOV DL,AL
0065E54D  52                        PUSH EDX
0065E54E  E8 64 64 DA FF            CALL 0x004049b7
0065E553  8A C8                     MOV CL,AL
0065E555  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
0065E55B  81 E1 FF 00 00 00         AND ECX,0xff
0065E561  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0065E564  03 CA                     ADD ECX,EDX
0065E566  8B C1                     MOV EAX,ECX
0065E568  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E56E  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
0065E571  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0065E574  50                        PUSH EAX
0065E575  E8 3D 64 DA FF            CALL 0x004049b7
0065E57A  25 FF 00 00 00            AND EAX,0xff
0065E57F  8A 8C 03 84 19 7E 00      MOV CL,byte ptr [EBX + EAX*0x1 + 0x7e1984]
0065E586  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0065E589  84 C9                     TEST CL,CL
0065E58B  74 1A                     JZ 0x0065e5a7
LAB_0065e58d:
0065E58D  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
0065E593  85 C0                     TEST EAX,EAX
0065E595  75 10                     JNZ 0x0065e5a7
0065E597  83 BE EC 04 00 00 64      CMP dword ptr [ESI + 0x4ec],0x64
0065E59E  7C 07                     JL 0x0065e5a7
0065E5A0  B8 01 00 00 00            MOV EAX,0x1
0065E5A5  EB 02                     JMP 0x0065e5a9
LAB_0065e5a7:
0065E5A7  33 C0                     XOR EAX,EAX
LAB_0065e5a9:
0065E5A9  33 C9                     XOR ECX,ECX
0065E5AB  85 C0                     TEST EAX,EAX
0065E5AD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065E5B0  0F 95 C1                  SETNZ CL
0065E5B3  03 C1                     ADD EAX,ECX
0065E5B5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
switchD_0065e505::caseD_1:
0065E5B8  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065E5BB  43                        INC EBX
0065E5BC  3B D8                     CMP EBX,EAX
0065E5BE  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0065E5C1  0F 8C FD FE FF FF         JL 0x0065e4c4
LAB_0065e5c7:
0065E5C7  57                        PUSH EDI
0065E5C8  E8 43 FB 04 00            CALL 0x006ae110
0065E5CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065E5D0  5F                        POP EDI
0065E5D1  5E                        POP ESI
0065E5D2  5B                        POP EBX
0065E5D3  8B E5                     MOV ESP,EBP
0065E5D5  5D                        POP EBP
0065E5D6  C2 10 00                  RET 0x10
LAB_0065e5d9:
0065E5D9  5F                        POP EDI
0065E5DA  8B C3                     MOV EAX,EBX
0065E5DC  5E                        POP ESI
0065E5DD  5B                        POP EBX
0065E5DE  8B E5                     MOV ESP,EBP
0065E5E0  5D                        POP EBP
0065E5E1  C2 10 00                  RET 0x10
