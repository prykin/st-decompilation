FUN_006e9a10:
006E9A10  55                        PUSH EBP
006E9A11  8B EC                     MOV EBP,ESP
006E9A13  57                        PUSH EDI
006E9A14  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E9A17  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
006E9A1D  85 D2                     TEST EDX,EDX
006E9A1F  0F 84 C1 00 00 00         JZ 0x006e9ae6
006E9A25  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E9A28  8B 44 CA 04               MOV EAX,dword ptr [EDX + ECX*0x8 + 0x4]
006E9A2C  85 C0                     TEST EAX,EAX
006E9A2E  0F 84 B2 00 00 00         JZ 0x006e9ae6
006E9A34  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E9A37  53                        PUSH EBX
006E9A38  85 C0                     TEST EAX,EAX
006E9A3A  56                        PUSH ESI
006E9A3B  7D 24                     JGE 0x006e9a61
006E9A3D  83 F8 FF                  CMP EAX,-0x1
006E9A40  8B 87 A4 00 00 00         MOV EAX,dword ptr [EDI + 0xa4]
006E9A46  0F BF 04 88               MOVSX EAX,word ptr [EAX + ECX*0x4]
006E9A4A  75 01                     JNZ 0x006e9a4d
006E9A4C  40                        INC EAX
LAB_006e9a4d:
006E9A4D  8B 14 CA                  MOV EDX,dword ptr [EDX + ECX*0x8]
006E9A50  25 FF FF 00 00            AND EAX,0xffff
006E9A55  85 D2                     TEST EDX,EDX
006E9A57  74 14                     JZ 0x006e9a6d
006E9A59  3B C2                     CMP EAX,EDX
006E9A5B  7C 10                     JL 0x006e9a6d
006E9A5D  33 C0                     XOR EAX,EAX
006E9A5F  EB 0C                     JMP 0x006e9a6d
LAB_006e9a61:
006E9A61  8B 34 CA                  MOV ESI,dword ptr [EDX + ECX*0x8]
006E9A64  85 F6                     TEST ESI,ESI
006E9A66  7E 05                     JLE 0x006e9a6d
006E9A68  99                        CDQ
006E9A69  F7 FE                     IDIV ESI
006E9A6B  8B C2                     MOV EAX,EDX
LAB_006e9a6d:
006E9A6D  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006E9A70  85 D2                     TEST EDX,EDX
006E9A72  75 66                     JNZ 0x006e9ada
006E9A74  F7 07 00 00 01 00         TEST dword ptr [EDI],0x10000
006E9A7A  74 5E                     JZ 0x006e9ada
006E9A7C  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
006E9A82  8D 34 8A                  LEA ESI,[EDX + ECX*0x4]
006E9A85  0F BF 14 8A               MOVSX EDX,word ptr [EDX + ECX*0x4]
006E9A89  3B D0                     CMP EDX,EAX
006E9A8B  74 4D                     JZ 0x006e9ada
006E9A8D  66 8B 56 02               MOV DX,word ptr [ESI + 0x2]
006E9A91  8B DA                     MOV EBX,EDX
006E9A93  81 E3 00 C0 00 00         AND EBX,0xc000
006E9A99  81 FB 00 C0 00 00         CMP EBX,0xc000
006E9A9F  75 39                     JNZ 0x006e9ada
006E9AA1  80 CA 80                  OR DL,0x80
006E9AA4  66 89 56 02               MOV word ptr [ESI + 0x2],DX
006E9AA8  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
006E9AAE  8A 5C 8A 02               MOV BL,byte ptr [EDX + ECX*0x4 + 0x2]
006E9AB2  8B 17                     MOV EDX,dword ptr [EDI]
006E9AB4  F6 C3 40                  TEST BL,0x40
006E9AB7  74 16                     JZ 0x006e9acf
006E9AB9  80 CE 08                  OR DH,0x8
006E9ABC  5E                        POP ESI
006E9ABD  89 17                     MOV dword ptr [EDI],EDX
006E9ABF  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
006E9AC5  5B                        POP EBX
006E9AC6  5F                        POP EDI
006E9AC7  66 89 04 8A               MOV word ptr [EDX + ECX*0x4],AX
006E9ACB  5D                        POP EBP
006E9ACC  C2 0C 00                  RET 0xc
LAB_006e9acf:
006E9ACF  81 E2 FF FF 87 FF         AND EDX,0xff87ffff
006E9AD5  83 CA 4C                  OR EDX,0x4c
006E9AD8  89 17                     MOV dword ptr [EDI],EDX
LAB_006e9ada:
006E9ADA  8B 97 A4 00 00 00         MOV EDX,dword ptr [EDI + 0xa4]
006E9AE0  5E                        POP ESI
006E9AE1  5B                        POP EBX
006E9AE2  66 89 04 8A               MOV word ptr [EDX + ECX*0x4],AX
LAB_006e9ae6:
006E9AE6  5F                        POP EDI
006E9AE7  5D                        POP EBP
006E9AE8  C2 0C 00                  RET 0xc
