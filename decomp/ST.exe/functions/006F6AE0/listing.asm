FUN_006f6ae0:
006F6AE0  55                        PUSH EBP
006F6AE1  8B EC                     MOV EBP,ESP
006F6AE3  83 EC 0C                  SUB ESP,0xc
006F6AE6  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6AE9  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F6AEC  03 C8                     ADD ECX,EAX
006F6AEE  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F6AF1  8B D1                     MOV EDX,ECX
006F6AF3  56                        PUSH ESI
006F6AF4  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F6AF7  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F6B01  C1 FA 03                  SAR EDX,0x3
006F6B04  03 F2                     ADD ESI,EDX
006F6B06  48                        DEC EAX
006F6B07  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006F6B0A  89 75 30                  MOV dword ptr [EBP + 0x30],ESI
006F6B0D  0F 88 80 03 00 00         JS 0x006f6e93
006F6B13  53                        PUSH EBX
006F6B14  40                        INC EAX
006F6B15  57                        PUSH EDI
006F6B16  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F6B19  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006f6b1c:
006F6B1C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6B1F  33 D2                     XOR EDX,EDX
006F6B21  8A 10                     MOV DL,byte ptr [EAX]
006F6B23  40                        INC EAX
006F6B24  85 D2                     TEST EDX,EDX
006F6B26  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6B29  0F 84 3A 03 00 00         JZ 0x006f6e69
006F6B2F  83 E1 07                  AND ECX,0x7
006F6B32  BB 80 00 00 00            MOV EBX,0x80
006F6B37  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006F6B3A  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F6B3D  D3 FB                     SAR EBX,CL
LAB_006f6b3f:
006F6B3F  F6 C2 80                  TEST DL,0x80
006F6B42  8B C2                     MOV EAX,EDX
006F6B44  74 34                     JZ 0x006f6b7a
006F6B46  83 E0 3F                  AND EAX,0x3f
006F6B49  3B C6                     CMP EAX,ESI
006F6B4B  7F 43                     JG 0x006f6b90
006F6B4D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F6B50  F6 C2 40                  TEST DL,0x40
006F6B53  74 12                     JZ 0x006f6b67
006F6B55  41                        INC ECX
006F6B56  2B F0                     SUB ESI,EAX
006F6B58  8B C1                     MOV EAX,ECX
006F6B5A  33 D2                     XOR EDX,EDX
006F6B5C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F6B5F  8A 10                     MOV DL,byte ptr [EAX]
006F6B61  40                        INC EAX
006F6B62  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6B65  EB D8                     JMP 0x006f6b3f
LAB_006f6b67:
006F6B67  03 C8                     ADD ECX,EAX
006F6B69  2B F0                     SUB ESI,EAX
006F6B6B  8B C1                     MOV EAX,ECX
006F6B6D  33 D2                     XOR EDX,EDX
006F6B6F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F6B72  8A 10                     MOV DL,byte ptr [EAX]
006F6B74  40                        INC EAX
006F6B75  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6B78  EB C5                     JMP 0x006f6b3f
LAB_006f6b7a:
006F6B7A  83 E0 7F                  AND EAX,0x7f
006F6B7D  3B C6                     CMP EAX,ESI
006F6B7F  7F 0F                     JG 0x006f6b90
006F6B81  2B F0                     SUB ESI,EAX
006F6B83  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6B86  33 D2                     XOR EDX,EDX
006F6B88  8A 10                     MOV DL,byte ptr [EAX]
006F6B8A  40                        INC EAX
006F6B8B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6B8E  EB AF                     JMP 0x006f6b3f
LAB_006f6b90:
006F6B90  8B CA                     MOV ECX,EDX
006F6B92  2B C6                     SUB EAX,ESI
006F6B94  81 E1 C0 00 00 00         AND ECX,0xc0
006F6B9A  80 F9 80                  CMP CL,0x80
006F6B9D  75 03                     JNZ 0x006f6ba2
006F6B9F  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006f6ba2:
006F6BA2  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F6BA5  3B C6                     CMP EAX,ESI
006F6BA7  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F6BAA  0F 8F 58 01 00 00         JG 0x006f6d08
006F6BB0  8B CA                     MOV ECX,EDX
006F6BB2  81 E1 80 00 00 00         AND ECX,0x80
LAB_006f6bb8:
006F6BB8  2B F0                     SUB ESI,EAX
006F6BBA  85 C9                     TEST ECX,ECX
006F6BBC  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F6BBF  0F 84 C0 00 00 00         JZ 0x006f6c85
006F6BC5  F6 C2 40                  TEST DL,0x40
006F6BC8  74 66                     JZ 0x006f6c30
006F6BCA  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F6BCD  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006F6BD0  33 C9                     XOR ECX,ECX
006F6BD2  8A 0E                     MOV CL,byte ptr [ESI]
006F6BD4  8B F1                     MOV ESI,ECX
006F6BD6  33 C9                     XOR ECX,ECX
006F6BD8  8A 0C 3E                  MOV CL,byte ptr [ESI + EDI*0x1]
006F6BDB  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F6BDE  47                        INC EDI
006F6BDF  48                        DEC EAX
006F6BE0  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006F6BE3  0F 88 E8 00 00 00         JS 0x006f6cd1
006F6BE9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F6BEC  40                        INC EAX
006F6BED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f6bf0:
006F6BF0  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6BF3  84 18                     TEST byte ptr [EAX],BL
006F6BF5  75 11                     JNZ 0x006f6c08
006F6BF7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F6BFA  33 C0                     XOR EAX,EAX
006F6BFC  66 8B 06                  MOV AX,word ptr [ESI]
006F6BFF  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F6C02  3B F0                     CMP ESI,EAX
006F6C04  77 02                     JA 0x006f6c08
006F6C06  88 0F                     MOV byte ptr [EDI],CL
LAB_006f6c08:
006F6C08  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F6C0B  83 C0 02                  ADD EAX,0x2
006F6C0E  47                        INC EDI
006F6C0F  D0 EB                     SHR BL,0x1
006F6C11  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F6C14  75 09                     JNZ 0x006f6c1f
006F6C16  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6C19  B3 80                     MOV BL,0x80
006F6C1B  40                        INC EAX
006F6C1C  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
LAB_006f6c1f:
006F6C1F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F6C22  48                        DEC EAX
006F6C23  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F6C26  75 C8                     JNZ 0x006f6bf0
006F6C28  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6C2B  E9 A4 00 00 00            JMP 0x006f6cd4
LAB_006f6c30:
006F6C30  48                        DEC EAX
006F6C31  0F 88 A0 00 00 00         JS 0x006f6cd7
006F6C37  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006f6c3a:
006F6C3A  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F6C3D  84 19                     TEST byte ptr [ECX],BL
006F6C3F  75 1E                     JNZ 0x006f6c5f
006F6C41  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6C44  33 C0                     XOR EAX,EAX
006F6C46  66 8B 01                  MOV AX,word ptr [ECX]
006F6C49  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F6C4C  3B C8                     CMP ECX,EAX
006F6C4E  77 0F                     JA 0x006f6c5f
006F6C50  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F6C53  33 C0                     XOR EAX,EAX
006F6C55  8A 01                     MOV AL,byte ptr [ECX]
006F6C57  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006F6C5A  8A 04 08                  MOV AL,byte ptr [EAX + ECX*0x1]
006F6C5D  88 07                     MOV byte ptr [EDI],AL
LAB_006f6c5f:
006F6C5F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6C62  83 C1 02                  ADD ECX,0x2
006F6C65  47                        INC EDI
006F6C66  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F6C69  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F6C6C  41                        INC ECX
006F6C6D  D0 EB                     SHR BL,0x1
006F6C6F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F6C72  75 09                     JNZ 0x006f6c7d
006F6C74  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6C77  B3 80                     MOV BL,0x80
006F6C79  40                        INC EAX
006F6C7A  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
LAB_006f6c7d:
006F6C7D  4E                        DEC ESI
006F6C7E  75 BA                     JNZ 0x006f6c3a
006F6C80  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6C83  EB 4F                     JMP 0x006f6cd4
LAB_006f6c85:
006F6C85  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6C88  03 F8                     ADD EDI,EAX
006F6C8A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6C8D  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006F6C90  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F6C93  33 C9                     XOR ECX,ECX
006F6C95  8A EB                     MOV CH,BL
006F6C97  8B D9                     MOV EBX,ECX
006F6C99  8B C8                     MOV ECX,EAX
006F6C9B  83 E1 07                  AND ECX,0x7
006F6C9E  D3 EB                     SHR EBX,CL
006F6CA0  8B CB                     MOV ECX,EBX
006F6CA2  81 F9 80 00 00 00         CMP ECX,0x80
006F6CA8  77 16                     JA 0x006f6cc0
006F6CAA  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006F6CAD  43                        INC EBX
006F6CAE  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
006F6CB1  8A D9                     MOV BL,CL
006F6CB3  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F6CB6  C1 F8 03                  SAR EAX,0x3
006F6CB9  03 C8                     ADD ECX,EAX
006F6CBB  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006F6CBE  EB 17                     JMP 0x006f6cd7
LAB_006f6cc0:
006F6CC0  33 DB                     XOR EBX,EBX
006F6CC2  8A DD                     MOV BL,CH
006F6CC4  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F6CC7  C1 F8 03                  SAR EAX,0x3
006F6CCA  03 C8                     ADD ECX,EAX
006F6CCC  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006F6CCF  EB 06                     JMP 0x006f6cd7
LAB_006f6cd1:
006F6CD1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f6cd4:
006F6CD4  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
LAB_006f6cd7:
006F6CD7  85 F6                     TEST ESI,ESI
006F6CD9  7E 2B                     JLE 0x006f6d06
006F6CDB  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6CDE  33 D2                     XOR EDX,EDX
006F6CE0  8A 10                     MOV DL,byte ptr [EAX]
006F6CE2  8B CA                     MOV ECX,EDX
006F6CE4  81 E1 80 00 00 00         AND ECX,0x80
006F6CEA  40                        INC EAX
006F6CEB  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6CEE  8B C2                     MOV EAX,EDX
006F6CF0  85 C9                     TEST ECX,ECX
006F6CF2  74 05                     JZ 0x006f6cf9
006F6CF4  83 E0 3F                  AND EAX,0x3f
006F6CF7  EB 03                     JMP 0x006f6cfc
LAB_006f6cf9:
006F6CF9  83 E0 7F                  AND EAX,0x7f
LAB_006f6cfc:
006F6CFC  3B C6                     CMP EAX,ESI
006F6CFE  0F 8E B4 FE FF FF         JLE 0x006f6bb8
006F6D04  EB 02                     JMP 0x006f6d08
LAB_006f6d06:
006F6D06  33 C0                     XOR EAX,EAX
LAB_006f6d08:
006F6D08  2B C6                     SUB EAX,ESI
006F6D0A  F6 C2 80                  TEST DL,0x80
006F6D0D  0F 84 D0 00 00 00         JZ 0x006f6de3
006F6D13  F6 C2 40                  TEST DL,0x40
006F6D16  74 74                     JZ 0x006f6d8c
006F6D18  85 F6                     TEST ESI,ESI
006F6D1A  0F 8E D3 00 00 00         JLE 0x006f6df3
006F6D20  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F6D23  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006F6D26  33 C9                     XOR ECX,ECX
006F6D28  8A 0E                     MOV CL,byte ptr [ESI]
006F6D2A  8B F1                     MOV ESI,ECX
006F6D2C  33 C9                     XOR ECX,ECX
006F6D2E  8A 0C 3E                  MOV CL,byte ptr [ESI + EDI*0x1]
006F6D31  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F6D34  46                        INC ESI
006F6D35  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F6D38  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F6D3B  4E                        DEC ESI
006F6D3C  0F 88 AE 00 00 00         JS 0x006f6df0
006F6D42  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F6D45  46                        INC ESI
006F6D46  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
LAB_006f6d49:
006F6D49  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F6D4C  84 1E                     TEST byte ptr [ESI],BL
006F6D4E  75 17                     JNZ 0x006f6d67
006F6D50  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F6D53  33 F6                     XOR ESI,ESI
006F6D55  66 8B 37                  MOV SI,word ptr [EDI]
006F6D58  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F6D5B  3B FE                     CMP EDI,ESI
006F6D5D  77 05                     JA 0x006f6d64
006F6D5F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F6D62  88 0E                     MOV byte ptr [ESI],CL
LAB_006f6d64:
006F6D64  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f6d67:
006F6D67  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F6D6A  83 C6 02                  ADD ESI,0x2
006F6D6D  47                        INC EDI
006F6D6E  D0 EB                     SHR BL,0x1
006F6D70  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F6D73  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6D76  75 09                     JNZ 0x006f6d81
006F6D78  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F6D7B  B3 80                     MOV BL,0x80
006F6D7D  46                        INC ESI
006F6D7E  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
LAB_006f6d81:
006F6D81  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F6D84  4E                        DEC ESI
006F6D85  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F6D88  75 BF                     JNZ 0x006f6d49
006F6D8A  EB 67                     JMP 0x006f6df3
LAB_006f6d8c:
006F6D8C  4E                        DEC ESI
006F6D8D  78 64                     JS 0x006f6df3
006F6D8F  46                        INC ESI
LAB_006f6d90:
006F6D90  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F6D93  84 19                     TEST byte ptr [ECX],BL
006F6D95  75 26                     JNZ 0x006f6dbd
006F6D97  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F6D9A  33 C9                     XOR ECX,ECX
006F6D9C  66 8B 0F                  MOV CX,word ptr [EDI]
006F6D9F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F6DA2  3B F9                     CMP EDI,ECX
006F6DA4  77 14                     JA 0x006f6dba
006F6DA6  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F6DA9  33 C9                     XOR ECX,ECX
006F6DAB  8A 0F                     MOV CL,byte ptr [EDI]
006F6DAD  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006F6DB0  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006F6DB3  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F6DB6  88 0F                     MOV byte ptr [EDI],CL
006F6DB8  EB 03                     JMP 0x006f6dbd
LAB_006f6dba:
006F6DBA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f6dbd:
006F6DBD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6DC0  83 C1 02                  ADD ECX,0x2
006F6DC3  47                        INC EDI
006F6DC4  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F6DC7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F6DCA  41                        INC ECX
006F6DCB  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6DCE  D0 EB                     SHR BL,0x1
006F6DD0  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F6DD3  75 09                     JNZ 0x006f6dde
006F6DD5  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F6DD8  B3 80                     MOV BL,0x80
006F6DDA  41                        INC ECX
006F6DDB  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
LAB_006f6dde:
006F6DDE  4E                        DEC ESI
006F6DDF  75 AF                     JNZ 0x006f6d90
006F6DE1  EB 10                     JMP 0x006f6df3
LAB_006f6de3:
006F6DE3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6DE6  03 FE                     ADD EDI,ESI
006F6DE8  8D 0C 71                  LEA ECX,[ECX + ESI*0x2]
006F6DEB  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F6DEE  EB 03                     JMP 0x006f6df3
LAB_006f6df0:
006F6DF0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f6df3:
006F6DF3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006F6DF6  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F6DF9  2B CE                     SUB ECX,ESI
006F6DFB  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F6DFE  2B CE                     SUB ECX,ESI
006F6E00  3B C1                     CMP EAX,ECX
006F6E02  7D 35                     JGE 0x006f6e39
LAB_006f6e04:
006F6E04  81 E2 C0 00 00 00         AND EDX,0xc0
006F6E0A  2B C8                     SUB ECX,EAX
006F6E0C  80 FA 80                  CMP DL,0x80
006F6E0F  75 03                     JNZ 0x006f6e14
006F6E11  01 45 1C                  ADD dword ptr [EBP + 0x1c],EAX
LAB_006f6e14:
006F6E14  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6E17  33 D2                     XOR EDX,EDX
006F6E19  8A 10                     MOV DL,byte ptr [EAX]
006F6E1B  8B DA                     MOV EBX,EDX
006F6E1D  80 E3 80                  AND BL,0x80
006F6E20  40                        INC EAX
006F6E21  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6E24  8B C2                     MOV EAX,EDX
006F6E26  84 DB                     TEST BL,BL
006F6E28  74 0B                     JZ 0x006f6e35
006F6E2A  83 E0 3F                  AND EAX,0x3f
006F6E2D  F6 C2 40                  TEST DL,0x40
006F6E30  74 03                     JZ 0x006f6e35
006F6E32  FF 45 1C                  INC dword ptr [EBP + 0x1c]
LAB_006f6e35:
006F6E35  3B C1                     CMP EAX,ECX
006F6E37  7C CB                     JL 0x006f6e04
LAB_006f6e39:
006F6E39  81 E2 C0 00 00 00         AND EDX,0xc0
006F6E3F  80 FA 80                  CMP DL,0x80
006F6E42  75 03                     JNZ 0x006f6e47
006F6E44  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_006f6e47:
006F6E47  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F6E4A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F6E4D  8D 04 36                  LEA EAX,[ESI + ESI*0x1]
006F6E50  2B D6                     SUB EDX,ESI
006F6E52  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F6E55  2B C8                     SUB ECX,EAX
006F6E57  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F6E5A  03 FA                     ADD EDI,EDX
006F6E5C  03 C1                     ADD EAX,ECX
006F6E5E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006F6E61  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6E64  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F6E67  EB 13                     JMP 0x006f6e7c
LAB_006f6e69:
006F6E69  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F6E6C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F6E6F  03 FA                     ADD EDI,EDX
006F6E71  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006F6E74  03 C2                     ADD EAX,EDX
006F6E76  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F6E79  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006f6e7c:
006F6E7C  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F6E7F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F6E82  03 F2                     ADD ESI,EDX
006F6E84  48                        DEC EAX
006F6E85  89 75 30                  MOV dword ptr [EBP + 0x30],ESI
006F6E88  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F6E8B  0F 85 8B FC FF FF         JNZ 0x006f6b1c
006F6E91  5F                        POP EDI
006F6E92  5B                        POP EBX
LAB_006f6e93:
006F6E93  5E                        POP ESI
006F6E94  8B E5                     MOV ESP,EBP
006F6E96  5D                        POP EBP
006F6E97  C2 38 00                  RET 0x38
