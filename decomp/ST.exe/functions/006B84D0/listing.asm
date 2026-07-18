FUN_006b84d0:
006B84D0  55                        PUSH EBP
006B84D1  8B EC                     MOV EBP,ESP
006B84D3  83 EC 20                  SUB ESP,0x20
006B84D6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B84D9  53                        PUSH EBX
006B84DA  56                        PUSH ESI
006B84DB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B84DE  85 C0                     TEST EAX,EAX
006B84E0  57                        PUSH EDI
006B84E1  75 09                     JNZ 0x006b84ec
006B84E3  56                        PUSH ESI
006B84E4  E8 B7 CA FF FF            CALL 0x006b4fa0
006B84E9  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006b84ec:
006B84EC  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006B84EF  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B84F2  0F BF 47 0E               MOVSX EAX,word ptr [EDI + 0xe]
006B84F6  0F BF 4F 10               MOVSX ECX,word ptr [EDI + 0x10]
006B84FA  0F BF 57 12               MOVSX EDX,word ptr [EDI + 0x12]
006B84FE  03 D8                     ADD EBX,EAX
006B8500  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B8503  03 C1                     ADD EAX,ECX
006B8505  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006B8508  0F BF 4F 14               MOVSX ECX,word ptr [EDI + 0x14]
006B850C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006B850F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006B8512  33 C0                     XOR EAX,EAX
006B8514  33 D2                     XOR EDX,EDX
006B8516  66 8B 56 0E               MOV DX,word ptr [ESI + 0xe]
006B851A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B851D  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006B8520  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B8523  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B8526  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B8529  8B F2                     MOV ESI,EDX
006B852B  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006B852E  0F AF F1                  IMUL ESI,ECX
006B8531  83 C6 1F                  ADD ESI,0x1f
006B8534  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B8537  C1 EE 03                  SHR ESI,0x3
006B853A  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006B8540  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006B8543  85 C0                     TEST EAX,EAX
006B8545  7D 0A                     JGE 0x006b8551
006B8547  F7 D8                     NEG EAX
006B8549  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006B854C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006B854F  EB 07                     JMP 0x006b8558
LAB_006b8551:
006B8551  8B C6                     MOV EAX,ESI
006B8553  F7 D8                     NEG EAX
006B8555  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006b8558:
006B8558  8D 45 E0                  LEA EAX,[EBP + -0x20]
006B855B  8D 4D F0                  LEA ECX,[EBP + -0x10]
006B855E  50                        PUSH EAX
006B855F  8D 55 F0                  LEA EDX,[EBP + -0x10]
006B8562  51                        PUSH ECX
006B8563  52                        PUSH EDX
006B8564  E8 47 79 01 00            CALL 0x006cfeb0
006B8569  83 C4 0C                  ADD ESP,0xc
006B856C  85 C0                     TEST EAX,EAX
006B856E  74 57                     JZ 0x006b85c7
006B8570  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B8573  85 C0                     TEST EAX,EAX
006B8575  7C 14                     JL 0x006b858b
006B8577  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006B857A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B857D  0F AF F1                  IMUL ESI,ECX
006B8580  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B8583  03 F2                     ADD ESI,EDX
006B8585  03 F0                     ADD ESI,EAX
006B8587  8B C6                     MOV EAX,ESI
006B8589  EB 16                     JMP 0x006b85a1
LAB_006b858b:
006B858B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006B858E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006B8591  2B C1                     SUB EAX,ECX
006B8593  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B8596  48                        DEC EAX
006B8597  0F AF C6                  IMUL EAX,ESI
006B859A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B859D  03 C2                     ADD EAX,EDX
006B859F  03 C6                     ADD EAX,ESI
LAB_006b85a1:
006B85A1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006B85A4  6A 00                     PUSH 0x0
006B85A6  6A 00                     PUSH 0x0
006B85A8  6A 00                     PUSH 0x0
006B85AA  6A 00                     PUSH 0x0
006B85AC  6A 00                     PUSH 0x0
006B85AE  56                        PUSH ESI
006B85AF  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006B85B2  56                        PUSH ESI
006B85B3  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006B85B6  2B CE                     SUB ECX,ESI
006B85B8  2B D3                     SUB EDX,EBX
006B85BA  51                        PUSH ECX
006B85BB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B85BE  52                        PUSH EDX
006B85BF  57                        PUSH EDI
006B85C0  51                        PUSH ECX
006B85C1  50                        PUSH EAX
006B85C2  E8 59 A2 01 00            CALL 0x006d2820
LAB_006b85c7:
006B85C7  5F                        POP EDI
006B85C8  5E                        POP ESI
006B85C9  5B                        POP EBX
006B85CA  8B E5                     MOV ESP,EBP
006B85CC  5D                        POP EBP
006B85CD  C2 14 00                  RET 0x14
