FUN_006a3420:
006A3420  55                        PUSH EBP
006A3421  8B EC                     MOV EBP,ESP
006A3423  53                        PUSH EBX
006A3424  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A3427  56                        PUSH ESI
006A3428  57                        PUSH EDI
006A3429  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A342C  66 8B 77 04               MOV SI,word ptr [EDI + 0x4]
006A3430  E8 8B B2 08 00            CALL 0x0072e6c0
006A3435  33 D2                     XOR EDX,EDX
006A3437  F7 34 9D 30 FB 7D 00      DIV dword ptr [EBX*0x4 + 0x7dfb30]
006A343E  8B C6                     MOV EAX,ESI
006A3440  81 E6 00 FF 00 00         AND ESI,0xff00
006A3446  C1 E8 04                  SHR EAX,0x4
006A3449  83 E0 0F                  AND EAX,0xf
006A344C  40                        INC EAX
006A344D  8B CA                     MOV ECX,EDX
006A344F  99                        CDQ
006A3450  2B C2                     SUB EAX,EDX
006A3452  8A D3                     MOV DL,BL
006A3454  D1 F8                     SAR EAX,0x1
006A3456  83 E2 0F                  AND EDX,0xf
006A3459  8D 44 41 FF               LEA EAX,[ECX + EAX*0x2 + -0x1]
006A345D  33 F2                     XOR ESI,EDX
006A345F  83 E0 0F                  AND EAX,0xf
006A3462  C1 E0 04                  SHL EAX,0x4
006A3465  0B F0                     OR ESI,EAX
006A3467  66 8B 07                  MOV AX,word ptr [EDI]
006A346A  8A C8                     MOV CL,AL
006A346C  66 89 77 04               MOV word ptr [EDI + 0x4],SI
006A3470  32 CB                     XOR CL,BL
006A3472  83 E1 0F                  AND ECX,0xf
006A3475  33 C8                     XOR ECX,EAX
006A3477  66 8B D1                  MOV DX,CX
006A347A  66 89 0F                  MOV word ptr [EDI],CX
006A347D  66 89 55 0C               MOV word ptr [EBP + 0xc],DX
006A3481  E8 3A B2 08 00            CALL 0x0072e6c0
006A3486  33 D2                     XOR EDX,EDX
006A3488  F7 34 9D 30 FB 7D 00      DIV dword ptr [EBX*0x4 + 0x7dfb30]
006A348F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A3492  42                        INC EDX
006A3493  C1 E2 04                  SHL EDX,0x4
006A3496  32 D0                     XOR DL,AL
006A3498  81 E2 F0 00 00 00         AND EDX,0xf0
006A349E  33 D0                     XOR EDX,EAX
006A34A0  66 89 17                  MOV word ptr [EDI],DX
006A34A3  5F                        POP EDI
006A34A4  5E                        POP ESI
006A34A5  5B                        POP EBX
006A34A6  5D                        POP EBP
006A34A7  C3                        RET
