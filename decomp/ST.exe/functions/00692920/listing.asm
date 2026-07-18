FUN_00692920:
00692920  55                        PUSH EBP
00692921  8B EC                     MOV EBP,ESP
00692923  83 EC 0C                  SUB ESP,0xc
00692926  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00692929  33 C0                     XOR EAX,EAX
0069292B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069292E  85 C9                     TEST ECX,ECX
00692930  0F 84 3D 01 00 00         JZ 0x00692a73
00692936  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00692939  53                        PUSH EBX
0069293A  56                        PUSH ESI
0069293B  57                        PUSH EDI
0069293C  6A 01                     PUSH 0x1
0069293E  50                        PUSH EAX
0069293F  68 D4 59 7D 00            PUSH 0x7d59d4
00692944  6A 01                     PUSH 0x1
00692946  E8 95 F3 05 00            CALL 0x006f1ce0
0069294B  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0069294E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00692951  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00692954  83 C0 28                  ADD EAX,0x28
00692957  6A 01                     PUSH 0x1
00692959  50                        PUSH EAX
0069295A  68 00 01 00 00            PUSH 0x100
0069295F  6A 08                     PUSH 0x8
00692961  56                        PUSH ESI
00692962  53                        PUSH EBX
00692963  E8 58 27 02 00            CALL 0x006b50c0
00692968  8B F8                     MOV EDI,EAX
0069296A  57                        PUSH EDI
0069296B  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
0069296E  E8 2D 26 02 00            CALL 0x006b4fa0
00692973  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00692976  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00692979  85 C0                     TEST EAX,EAX
0069297B  75 64                     JNZ 0x006929e1
0069297D  85 F6                     TEST ESI,ESI
0069297F  0F 8E DD 00 00 00         JLE 0x00692a62
00692985  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692988  8D 4E FF                  LEA ECX,[ESI + -0x1]
0069298B  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0069298E  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
LAB_00692991:
00692991  33 D2                     XOR EDX,EDX
00692993  8B CB                     MOV ECX,EBX
00692995  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
00692999  8B F0                     MOV ESI,EAX
0069299B  8B FA                     MOV EDI,EDX
0069299D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006929A0  03 C3                     ADD EAX,EBX
006929A2  0F AF 7A 04               IMUL EDI,dword ptr [EDX + 0x4]
006929A6  83 C7 1F                  ADD EDI,0x1f
006929A9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006929AC  C1 EF 03                  SHR EDI,0x3
006929AF  81 E7 FC FF FF 1F         AND EDI,0x1ffffffc
006929B5  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
006929B9  03 FA                     ADD EDI,EDX
006929BB  8B D1                     MOV EDX,ECX
006929BD  C1 E9 02                  SHR ECX,0x2
006929C0  F3 A5                     MOVSD.REP ES:EDI,ESI
006929C2  8B CA                     MOV ECX,EDX
006929C4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006929C7  83 E1 03                  AND ECX,0x3
006929CA  4A                        DEC EDX
006929CB  F3 A4                     MOVSB.REP ES:EDI,ESI
006929CD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006929D0  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006929D3  49                        DEC ECX
006929D4  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006929D7  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006929DA  75 B5                     JNZ 0x00692991
006929DC  E9 81 00 00 00            JMP 0x00692a62
LAB_006929e1:
006929E1  85 F6                     TEST ESI,ESI
006929E3  7E 7D                     JLE 0x00692a62
006929E5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006929E8  8D 4E FF                  LEA ECX,[ESI + -0x1]
006929EB  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006929EE  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006929F1  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_006929f4:
006929F4  33 C0                     XOR EAX,EAX
006929F6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006929F9  66 8B 47 0E               MOV AX,word ptr [EDI + 0xe]
006929FD  0F AF 47 04               IMUL EAX,dword ptr [EDI + 0x4]
00692A01  83 C0 1F                  ADD EAX,0x1f
00692A04  C1 E8 03                  SHR EAX,0x3
00692A07  25 FC FF FF 1F            AND EAX,0x1ffffffc
00692A0C  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
00692A10  03 C2                     ADD EAX,EDX
00692A12  85 DB                     TEST EBX,EBX
00692A14  7E 34                     JLE 0x00692a4a
00692A16  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00692A19  8B C8                     MOV ECX,EAX
00692A1B  2B F0                     SUB ESI,EAX
00692A1D  8B FB                     MOV EDI,EBX
LAB_00692a1f:
00692A1F  33 C0                     XOR EAX,EAX
00692A21  8A 04 0E                  MOV AL,byte ptr [ESI + ECX*0x1]
00692A24  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00692A27  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00692A2A  99                        CDQ
00692A2B  81 E2 FF 00 00 00         AND EDX,0xff
00692A31  03 C2                     ADD EAX,EDX
00692A33  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00692A36  C1 F8 08                  SAR EAX,0x8
00692A39  41                        INC ECX
00692A3A  4F                        DEC EDI
00692A3B  8A 84 82 AC 37 00 00      MOV AL,byte ptr [EDX + EAX*0x4 + 0x37ac]
00692A42  88 41 FF                  MOV byte ptr [ECX + -0x1],AL
00692A45  75 D8                     JNZ 0x00692a1f
00692A47  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_00692a4a:
00692A4A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00692A4D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00692A50  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00692A53  4A                        DEC EDX
00692A54  03 CB                     ADD ECX,EBX
00692A56  48                        DEC EAX
00692A57  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00692A5A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00692A5D  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
00692A60  75 92                     JNZ 0x006929f4
LAB_00692a62:
00692A62  8D 4D F4                  LEA ECX,[EBP + -0xc]
00692A65  51                        PUSH ECX
00692A66  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00692A69  E8 72 F6 05 00            CALL 0x006f20e0
00692A6E  8B C7                     MOV EAX,EDI
00692A70  5F                        POP EDI
00692A71  5E                        POP ESI
00692A72  5B                        POP EBX
LAB_00692a73:
00692A73  8B E5                     MOV ESP,EBP
00692A75  5D                        POP EBP
00692A76  C2 14 00                  RET 0x14
