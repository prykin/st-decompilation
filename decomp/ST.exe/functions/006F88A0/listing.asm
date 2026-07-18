FUN_006f88a0:
006F88A0  55                        PUSH EBP
006F88A1  8B EC                     MOV EBP,ESP
006F88A3  51                        PUSH ECX
006F88A4  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006F88A7  48                        DEC EAX
006F88A8  0F 88 F6 01 00 00         JS 0x006f8aa4
006F88AE  53                        PUSH EBX
006F88AF  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F88B2  56                        PUSH ESI
006F88B3  40                        INC EAX
006F88B4  57                        PUSH EDI
006F88B5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F88B8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f88bb:
006F88BB  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F88BE  33 C9                     XOR ECX,ECX
006F88C0  8A 0A                     MOV CL,byte ptr [EDX]
006F88C2  42                        INC EDX
006F88C3  85 C9                     TEST ECX,ECX
006F88C5  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006F88C8  0F 84 BC 01 00 00         JZ 0x006f8a8a
006F88CE  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
LAB_006f88d1:
006F88D1  F6 C1 80                  TEST CL,0x80
006F88D4  8B C1                     MOV EAX,ECX
006F88D6  74 21                     JZ 0x006f88f9
006F88D8  83 E0 3F                  AND EAX,0x3f
006F88DB  3B C6                     CMP EAX,ESI
006F88DD  7F 2A                     JG 0x006f8909
006F88DF  F6 C1 40                  TEST CL,0x40
006F88E2  74 0A                     JZ 0x006f88ee
006F88E4  42                        INC EDX
006F88E5  33 C9                     XOR ECX,ECX
006F88E7  2B F0                     SUB ESI,EAX
006F88E9  8A 0A                     MOV CL,byte ptr [EDX]
006F88EB  42                        INC EDX
006F88EC  EB E3                     JMP 0x006f88d1
LAB_006f88ee:
006F88EE  03 D0                     ADD EDX,EAX
006F88F0  33 C9                     XOR ECX,ECX
006F88F2  2B F0                     SUB ESI,EAX
006F88F4  8A 0A                     MOV CL,byte ptr [EDX]
006F88F6  42                        INC EDX
006F88F7  EB D8                     JMP 0x006f88d1
LAB_006f88f9:
006F88F9  83 E0 7F                  AND EAX,0x7f
006F88FC  3B C6                     CMP EAX,ESI
006F88FE  7F 09                     JG 0x006f8909
006F8900  33 C9                     XOR ECX,ECX
006F8902  2B F0                     SUB ESI,EAX
006F8904  8A 0A                     MOV CL,byte ptr [EDX]
006F8906  42                        INC EDX
006F8907  EB C8                     JMP 0x006f88d1
LAB_006f8909:
006F8909  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006F890C  8B D1                     MOV EDX,ECX
006F890E  81 E2 C0 00 00 00         AND EDX,0xc0
006F8914  2B C6                     SUB EAX,ESI
006F8916  80 FA 80                  CMP DL,0x80
006F8919  75 03                     JNZ 0x006f891e
006F891B  01 75 18                  ADD dword ptr [EBP + 0x18],ESI
LAB_006f891e:
006F891E  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F8921  3B C6                     CMP EAX,ESI
006F8923  0F 8F 92 00 00 00         JG 0x006f89bb
006F8929  8B D1                     MOV EDX,ECX
006F892B  81 E2 80 00 00 00         AND EDX,0x80
LAB_006f8931:
006F8931  2B F0                     SUB ESI,EAX
006F8933  85 D2                     TEST EDX,EDX
006F8935  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006F8938  74 4C                     JZ 0x006f8986
006F893A  F6 C1 40                  TEST CL,0x40
006F893D  74 24                     JZ 0x006f8963
006F893F  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F8942  42                        INC EDX
006F8943  48                        DEC EAX
006F8944  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006F8947  78 41                     JS 0x006f898a
006F8949  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006f894c:
006F894C  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006F894F  33 C0                     XOR EAX,EAX
006F8951  8A 03                     MOV AL,byte ptr [EBX]
006F8953  47                        INC EDI
006F8954  43                        INC EBX
006F8955  4E                        DEC ESI
006F8956  8A 04 10                  MOV AL,byte ptr [EAX + EDX*0x1]
006F8959  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006F895C  75 EE                     JNZ 0x006f894c
006F895E  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F8961  EB 27                     JMP 0x006f898a
LAB_006f8963:
006F8963  48                        DEC EAX
006F8964  78 24                     JS 0x006f898a
006F8966  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F8969  40                        INC EAX
006F896A  03 D0                     ADD EDX,EAX
006F896C  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006f896f:
006F896F  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F8972  33 D2                     XOR EDX,EDX
006F8974  8A 13                     MOV DL,byte ptr [EBX]
006F8976  47                        INC EDI
006F8977  43                        INC EBX
006F8978  48                        DEC EAX
006F8979  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
006F897C  88 57 FF                  MOV byte ptr [EDI + -0x1],DL
006F897F  75 EE                     JNZ 0x006f896f
006F8981  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F8984  EB 04                     JMP 0x006f898a
LAB_006f8986:
006F8986  03 F8                     ADD EDI,EAX
006F8988  03 D8                     ADD EBX,EAX
LAB_006f898a:
006F898A  85 F6                     TEST ESI,ESI
006F898C  7E 2B                     JLE 0x006f89b9
006F898E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F8991  33 C9                     XOR ECX,ECX
006F8993  8A 08                     MOV CL,byte ptr [EAX]
006F8995  8B D1                     MOV EDX,ECX
006F8997  81 E2 80 00 00 00         AND EDX,0x80
006F899D  40                        INC EAX
006F899E  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006F89A1  8B C1                     MOV EAX,ECX
006F89A3  85 D2                     TEST EDX,EDX
006F89A5  74 05                     JZ 0x006f89ac
006F89A7  83 E0 3F                  AND EAX,0x3f
006F89AA  EB 03                     JMP 0x006f89af
LAB_006f89ac:
006F89AC  83 E0 7F                  AND EAX,0x7f
LAB_006f89af:
006F89AF  3B C6                     CMP EAX,ESI
006F89B1  0F 8E 7A FF FF FF         JLE 0x006f8931
006F89B7  EB 02                     JMP 0x006f89bb
LAB_006f89b9:
006F89B9  33 C0                     XOR EAX,EAX
LAB_006f89bb:
006F89BB  2B C6                     SUB EAX,ESI
006F89BD  F6 C1 80                  TEST CL,0x80
006F89C0  74 5A                     JZ 0x006f8a1c
006F89C2  F6 C1 40                  TEST CL,0x40
006F89C5  74 2C                     JZ 0x006f89f3
006F89C7  85 F6                     TEST ESI,ESI
006F89C9  7E 55                     JLE 0x006f8a20
006F89CB  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F89CE  42                        INC EDX
006F89CF  4E                        DEC ESI
006F89D0  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006F89D3  78 4B                     JS 0x006f8a20
006F89D5  46                        INC ESI
006F89D6  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
LAB_006f89d9:
006F89D9  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F89DC  33 D2                     XOR EDX,EDX
006F89DE  8A 13                     MOV DL,byte ptr [EBX]
006F89E0  47                        INC EDI
006F89E1  43                        INC EBX
006F89E2  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
006F89E5  88 57 FF                  MOV byte ptr [EDI + -0x1],DL
006F89E8  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F89EB  4A                        DEC EDX
006F89EC  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006F89EF  75 E8                     JNZ 0x006f89d9
006F89F1  EB 2D                     JMP 0x006f8a20
LAB_006f89f3:
006F89F3  4E                        DEC ESI
006F89F4  78 2A                     JS 0x006f8a20
006F89F6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F89F9  46                        INC ESI
006F89FA  03 D6                     ADD EDX,ESI
006F89FC  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006F89FF  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006f8a02:
006F8A02  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F8A05  33 D2                     XOR EDX,EDX
006F8A07  8A 13                     MOV DL,byte ptr [EBX]
006F8A09  47                        INC EDI
006F8A0A  43                        INC EBX
006F8A0B  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
006F8A0E  88 57 FF                  MOV byte ptr [EDI + -0x1],DL
006F8A11  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F8A14  4A                        DEC EDX
006F8A15  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006F8A18  75 E8                     JNZ 0x006f8a02
006F8A1A  EB 04                     JMP 0x006f8a20
LAB_006f8a1c:
006F8A1C  03 FE                     ADD EDI,ESI
006F8A1E  03 DE                     ADD EBX,ESI
LAB_006f8a20:
006F8A20  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F8A23  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006F8A26  2B D6                     SUB EDX,ESI
006F8A28  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F8A2B  2B D6                     SUB EDX,ESI
006F8A2D  3B C2                     CMP EAX,EDX
006F8A2F  7D 3B                     JGE 0x006f8a6c
LAB_006f8a31:
006F8A31  81 E1 C0 00 00 00         AND ECX,0xc0
006F8A37  2B D0                     SUB EDX,EAX
006F8A39  80 F9 80                  CMP CL,0x80
006F8A3C  75 03                     JNZ 0x006f8a41
006F8A3E  01 45 18                  ADD dword ptr [EBP + 0x18],EAX
LAB_006f8a41:
006F8A41  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F8A44  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F8A47  33 C9                     XOR ECX,ECX
006F8A49  8A 08                     MOV CL,byte ptr [EAX]
006F8A4B  8B C1                     MOV EAX,ECX
006F8A4D  24 80                     AND AL,0x80
006F8A4F  46                        INC ESI
006F8A50  84 C0                     TEST AL,AL
006F8A52  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
006F8A55  8B C1                     MOV EAX,ECX
006F8A57  74 0C                     JZ 0x006f8a65
006F8A59  83 E0 3F                  AND EAX,0x3f
006F8A5C  F6 C1 40                  TEST CL,0x40
006F8A5F  74 04                     JZ 0x006f8a65
006F8A61  46                        INC ESI
006F8A62  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_006f8a65:
006F8A65  3B C2                     CMP EAX,EDX
006F8A67  7C C8                     JL 0x006f8a31
006F8A69  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
LAB_006f8a6c:
006F8A6C  81 E1 C0 00 00 00         AND ECX,0xc0
006F8A72  80 F9 80                  CMP CL,0x80
006F8A75  75 03                     JNZ 0x006f8a7a
006F8A77  01 55 18                  ADD dword ptr [EBP + 0x18],EDX
LAB_006f8a7a:
006F8A7A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F8A7D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006F8A80  2B CE                     SUB ECX,ESI
006F8A82  2B D6                     SUB EDX,ESI
006F8A84  03 F9                     ADD EDI,ECX
006F8A86  03 DA                     ADD EBX,EDX
006F8A88  EB 0A                     JMP 0x006f8a94
LAB_006f8a8a:
006F8A8A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F8A8D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F8A90  03 F9                     ADD EDI,ECX
006F8A92  03 D8                     ADD EBX,EAX
LAB_006f8a94:
006F8A94  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F8A97  48                        DEC EAX
006F8A98  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F8A9B  0F 85 1A FE FF FF         JNZ 0x006f88bb
006F8AA1  5F                        POP EDI
006F8AA2  5E                        POP ESI
006F8AA3  5B                        POP EBX
LAB_006f8aa4:
006F8AA4  8B E5                     MOV ESP,EBP
006F8AA6  5D                        POP EBP
006F8AA7  C2 28 00                  RET 0x28
