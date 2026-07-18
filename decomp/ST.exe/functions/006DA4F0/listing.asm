FUN_006da4f0:
006DA4F0  55                        PUSH EBP
006DA4F1  8B EC                     MOV EBP,ESP
006DA4F3  83 EC 14                  SUB ESP,0x14
006DA4F6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DA4F9  53                        PUSH EBX
006DA4FA  56                        PUSH ESI
006DA4FB  57                        PUSH EDI
006DA4FC  85 C0                     TEST EAX,EAX
006DA4FE  74 10                     JZ 0x006da510
006DA500  8B 30                     MOV ESI,dword ptr [EAX]
006DA502  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006DA505  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006DA508  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006DA50B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006DA50E  EB 15                     JMP 0x006da525
LAB_006da510:
006DA510  BE 00 F8 00 00            MOV ESI,0xf800
006DA515  BA E0 07 00 00            MOV EDX,0x7e0
006DA51A  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006DA51D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006DA520  B8 1F 00 00 00            MOV EAX,0x1f
LAB_006da525:
006DA525  83 C9 FF                  OR ECX,0xffffffff
006DA528  83 CF FF                  OR EDI,0xffffffff
006DA52B  83 CB FF                  OR EBX,0xffffffff
006DA52E  81 FE 00 F8 00 00         CMP ESI,0xf800
006DA534  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006DA537  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006DA53A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006DA53D  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006DA540  75 04                     JNZ 0x006da546
006DA542  33 C9                     XOR ECX,ECX
006DA544  EB 0D                     JMP 0x006da553
LAB_006da546:
006DA546  81 FE 00 7C 00 00         CMP ESI,0x7c00
006DA54C  75 08                     JNZ 0x006da556
006DA54E  B9 01 00 00 00            MOV ECX,0x1
LAB_006da553:
006DA553  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_006da556:
006DA556  81 FA E0 07 00 00         CMP EDX,0x7e0
006DA55C  75 07                     JNZ 0x006da565
006DA55E  BF 05 00 00 00            MOV EDI,0x5
006DA563  EB 0D                     JMP 0x006da572
LAB_006da565:
006DA565  81 FA E0 03 00 00         CMP EDX,0x3e0
006DA56B  75 08                     JNZ 0x006da575
006DA56D  BF 06 00 00 00            MOV EDI,0x6
LAB_006da572:
006DA572  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006da575:
006DA575  83 F8 1F                  CMP EAX,0x1f
006DA578  75 08                     JNZ 0x006da582
006DA57A  BB 0B 00 00 00            MOV EBX,0xb
006DA57F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006da582:
006DA582  83 F9 FF                  CMP ECX,-0x1
006DA585  75 1B                     JNZ 0x006da5a2
006DA587  33 C9                     XOR ECX,ECX
006DA589  F7 C6 00 80 00 00         TEST ESI,0x8000
006DA58F  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006DA592  75 0E                     JNZ 0x006da5a2
LAB_006da594:
006DA594  D1 E6                     SHL ESI,0x1
006DA596  41                        INC ECX
006DA597  F7 C6 00 80 00 00         TEST ESI,0x8000
006DA59D  74 F5                     JZ 0x006da594
006DA59F  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_006da5a2:
006DA5A2  83 FF FF                  CMP EDI,-0x1
006DA5A5  75 15                     JNZ 0x006da5bc
006DA5A7  33 F6                     XOR ESI,ESI
006DA5A9  F6 C6 80                  TEST DH,0x80
006DA5AC  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006DA5AF  75 0B                     JNZ 0x006da5bc
LAB_006da5b1:
006DA5B1  D1 E2                     SHL EDX,0x1
006DA5B3  46                        INC ESI
006DA5B4  F6 C6 80                  TEST DH,0x80
006DA5B7  74 F8                     JZ 0x006da5b1
006DA5B9  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006da5bc:
006DA5BC  83 FB FF                  CMP EBX,-0x1
006DA5BF  75 15                     JNZ 0x006da5d6
006DA5C1  33 D2                     XOR EDX,EDX
006DA5C3  F6 C4 80                  TEST AH,0x80
006DA5C6  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006DA5C9  75 0B                     JNZ 0x006da5d6
LAB_006da5cb:
006DA5CB  D1 E0                     SHL EAX,0x1
006DA5CD  42                        INC EDX
006DA5CE  F6 C4 80                  TEST AH,0x80
006DA5D1  74 F8                     JZ 0x006da5cb
006DA5D3  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006da5d6:
006DA5D6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DA5D9  8B D0                     MOV EDX,EAX
006DA5DB  48                        DEC EAX
006DA5DC  85 D2                     TEST EDX,EDX
006DA5DE  7E 72                     JLE 0x006da652
006DA5E0  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006DA5E3  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006DA5E6  40                        INC EAX
006DA5E7  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006DA5EA  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
LAB_006da5ed:
006DA5ED  85 C0                     TEST EAX,EAX
006DA5EF  7E 44                     JLE 0x006da635
006DA5F1  EB 03                     JMP 0x006da5f6
LAB_006da5f3:
006DA5F3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_006da5f6:
006DA5F6  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006DA5F9  33 D2                     XOR EDX,EDX
006DA5FB  8A 76 02                  MOV DH,byte ptr [ESI + 0x2]
006DA5FE  83 C7 02                  ADD EDI,0x2
006DA601  D3 FA                     SAR EDX,CL
006DA603  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006DA606  83 C6 03                  ADD ESI,0x3
006DA609  23 D3                     AND EDX,EBX
006DA60B  33 DB                     XOR EBX,EBX
006DA60D  8A 7E FE                  MOV BH,byte ptr [ESI + -0x2]
006DA610  D3 FB                     SAR EBX,CL
006DA612  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006DA615  23 D9                     AND EBX,ECX
006DA617  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006DA61A  0B D3                     OR EDX,EBX
006DA61C  33 DB                     XOR EBX,EBX
006DA61E  8A 7E FD                  MOV BH,byte ptr [ESI + -0x3]
006DA621  D3 FB                     SAR EBX,CL
006DA623  23 5D EC                  AND EBX,dword ptr [EBP + -0x14]
006DA626  0B D3                     OR EDX,EBX
006DA628  48                        DEC EAX
006DA629  66 89 57 FE               MOV word ptr [EDI + -0x2],DX
006DA62D  75 C4                     JNZ 0x006da5f3
006DA62F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006DA632  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_006da635:
006DA635  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006DA638  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006DA63B  2B DA                     SUB EBX,EDX
006DA63D  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006DA640  03 FB                     ADD EDI,EBX
006DA642  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006DA645  2B DA                     SUB EBX,EDX
006DA647  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006DA64A  03 F3                     ADD ESI,EBX
006DA64C  4A                        DEC EDX
006DA64D  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006DA650  75 9B                     JNZ 0x006da5ed
LAB_006da652:
006DA652  5F                        POP EDI
006DA653  5E                        POP ESI
006DA654  5B                        POP EBX
006DA655  8B E5                     MOV ESP,EBP
006DA657  5D                        POP EBP
006DA658  C2 1C 00                  RET 0x1c
