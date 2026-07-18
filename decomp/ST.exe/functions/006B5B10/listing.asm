FUN_006b5b10:
006B5B10  55                        PUSH EBP
006B5B11  8B EC                     MOV EBP,ESP
006B5B13  83 EC 08                  SUB ESP,0x8
006B5B16  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B5B19  53                        PUSH EBX
006B5B1A  56                        PUSH ESI
006B5B1B  57                        PUSH EDI
006B5B1C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B5B1F  85 C0                     TEST EAX,EAX
006B5B21  75 09                     JNZ 0x006b5b2c
006B5B23  57                        PUSH EDI
006B5B24  E8 77 F4 FF FF            CALL 0x006b4fa0
006B5B29  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006b5b2c:
006B5B2C  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006B5B2F  33 C9                     XOR ECX,ECX
006B5B31  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
006B5B35  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B5B38  0F AF C8                  IMUL ECX,EAX
006B5B3B  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
006B5B3E  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B5B41  83 C1 1F                  ADD ECX,0x1f
006B5B44  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B5B47  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B5B4A  C1 E9 03                  SHR ECX,0x3
006B5B4D  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006B5B53  2B D0                     SUB EDX,EAX
006B5B55  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006B5B58  8B D8                     MOV EBX,EAX
006B5B5A  79 11                     JNS 0x006b5b6d
006B5B5C  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006B5B5F  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006B5B62  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006B5B65  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B5B68  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006B5B6B  F7 DA                     NEG EDX
LAB_006b5b6d:
006B5B6D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B5B70  2B C7                     SUB EAX,EDI
006B5B72  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B5B75  0F 85 8E 00 00 00         JNZ 0x006b5c09
006B5B7B  85 FF                     TEST EDI,EDI
006B5B7D  0F 8C 53 03 00 00         JL 0x006b5ed6
006B5B83  39 75 1C                  CMP dword ptr [EBP + 0x1c],ESI
006B5B86  0F 8D 4A 03 00 00         JGE 0x006b5ed6
006B5B8C  85 DB                     TEST EBX,EBX
006B5B8E  7D 02                     JGE 0x006b5b92
006B5B90  33 DB                     XOR EBX,EBX
LAB_006b5b92:
006B5B92  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B5B95  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5B98  3B C2                     CMP EAX,EDX
006B5B9A  7C 03                     JL 0x006b5b9f
006B5B9C  8D 42 FF                  LEA EAX,[EDX + -0x1]
LAB_006b5b9f:
006B5B9F  3B C3                     CMP EAX,EBX
006B5BA1  0F 8C 2F 03 00 00         JL 0x006b5ed6
006B5BA7  2B F7                     SUB ESI,EDI
006B5BA9  2B C3                     SUB EAX,EBX
006B5BAB  4E                        DEC ESI
006B5BAC  0F AF F1                  IMUL ESI,ECX
006B5BAF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B5BB2  03 F3                     ADD ESI,EBX
006B5BB4  03 F1                     ADD ESI,ECX
006B5BB6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B5BB9  40                        INC EAX
006B5BBA  83 F9 07                  CMP ECX,0x7
006B5BBD  8B C8                     MOV ECX,EAX
006B5BBF  75 20                     JNZ 0x006b5be1
006B5BC1  48                        DEC EAX
006B5BC2  85 C9                     TEST ECX,ECX
006B5BC4  0F 84 0C 03 00 00         JZ 0x006b5ed6
006B5BCA  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
006B5BCD  40                        INC EAX
LAB_006b5bce:
006B5BCE  8A 1E                     MOV BL,byte ptr [ESI]
006B5BD0  32 D9                     XOR BL,CL
006B5BD2  88 1E                     MOV byte ptr [ESI],BL
006B5BD4  46                        INC ESI
006B5BD5  48                        DEC EAX
006B5BD6  75 F6                     JNZ 0x006b5bce
006B5BD8  5F                        POP EDI
006B5BD9  5E                        POP ESI
006B5BDA  5B                        POP EBX
006B5BDB  8B E5                     MOV ESP,EBP
006B5BDD  5D                        POP EBP
006B5BDE  C2 20 00                  RET 0x20
LAB_006b5be1:
006B5BE1  8A 45 20                  MOV AL,byte ptr [EBP + 0x20]
006B5BE4  8B D1                     MOV EDX,ECX
006B5BE6  8A D8                     MOV BL,AL
006B5BE8  8B FE                     MOV EDI,ESI
006B5BEA  8A FB                     MOV BH,BL
006B5BEC  8B C3                     MOV EAX,EBX
006B5BEE  C1 E0 10                  SHL EAX,0x10
006B5BF1  66 8B C3                  MOV AX,BX
006B5BF4  C1 E9 02                  SHR ECX,0x2
006B5BF7  F3 AB                     STOSD.REP ES:EDI
006B5BF9  8B CA                     MOV ECX,EDX
006B5BFB  83 E1 03                  AND ECX,0x3
006B5BFE  F3 AA                     STOSB.REP ES:EDI
006B5C00  5F                        POP EDI
006B5C01  5E                        POP ESI
006B5C02  5B                        POP EBX
006B5C03  8B E5                     MOV ESP,EBP
006B5C05  5D                        POP EBP
006B5C06  C2 20 00                  RET 0x20
LAB_006b5c09:
006B5C09  85 D2                     TEST EDX,EDX
006B5C0B  0F 85 95 00 00 00         JNZ 0x006b5ca6
006B5C11  85 DB                     TEST EBX,EBX
006B5C13  0F 8C BD 02 00 00         JL 0x006b5ed6
006B5C19  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5C1C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B5C1F  3B C2                     CMP EAX,EDX
006B5C21  0F 8D AF 02 00 00         JGE 0x006b5ed6
006B5C27  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B5C2A  85 C0                     TEST EAX,EAX
006B5C2C  7D 08                     JGE 0x006b5c36
006B5C2E  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006B5C31  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B5C34  EB 03                     JMP 0x006b5c39
LAB_006b5c36:
006B5C36  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
LAB_006b5c39:
006B5C39  85 FF                     TEST EDI,EDI
006B5C3B  7D 02                     JGE 0x006b5c3f
006B5C3D  33 FF                     XOR EDI,EDI
LAB_006b5c3f:
006B5C3F  3B C6                     CMP EAX,ESI
006B5C41  7C 03                     JL 0x006b5c46
006B5C43  8D 46 FF                  LEA EAX,[ESI + -0x1]
LAB_006b5c46:
006B5C46  3B C7                     CMP EAX,EDI
006B5C48  0F 8C 88 02 00 00         JL 0x006b5ed6
006B5C4E  2B F7                     SUB ESI,EDI
006B5C50  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5C53  4E                        DEC ESI
006B5C54  2B C7                     SUB EAX,EDI
006B5C56  0F AF F1                  IMUL ESI,ECX
006B5C59  03 F3                     ADD ESI,EBX
006B5C5B  03 F2                     ADD ESI,EDX
006B5C5D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B5C60  40                        INC EAX
006B5C61  83 FA 07                  CMP EDX,0x7
006B5C64  8B D0                     MOV EDX,EAX
006B5C66  75 21                     JNZ 0x006b5c89
006B5C68  48                        DEC EAX
006B5C69  85 D2                     TEST EDX,EDX
006B5C6B  0F 84 65 02 00 00         JZ 0x006b5ed6
006B5C71  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006B5C74  40                        INC EAX
LAB_006b5c75:
006B5C75  8A 1E                     MOV BL,byte ptr [ESI]
006B5C77  32 DA                     XOR BL,DL
006B5C79  88 1E                     MOV byte ptr [ESI],BL
006B5C7B  2B F1                     SUB ESI,ECX
006B5C7D  48                        DEC EAX
006B5C7E  75 F5                     JNZ 0x006b5c75
006B5C80  5F                        POP EDI
006B5C81  5E                        POP ESI
006B5C82  5B                        POP EBX
006B5C83  8B E5                     MOV ESP,EBP
006B5C85  5D                        POP EBP
006B5C86  C2 20 00                  RET 0x20
LAB_006b5c89:
006B5C89  48                        DEC EAX
006B5C8A  85 D2                     TEST EDX,EDX
006B5C8C  0F 84 44 02 00 00         JZ 0x006b5ed6
006B5C92  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006B5C95  40                        INC EAX
LAB_006b5c96:
006B5C96  88 16                     MOV byte ptr [ESI],DL
006B5C98  2B F1                     SUB ESI,ECX
006B5C9A  48                        DEC EAX
006B5C9B  75 F9                     JNZ 0x006b5c96
006B5C9D  5F                        POP EDI
006B5C9E  5E                        POP ESI
006B5C9F  5B                        POP EBX
006B5CA0  8B E5                     MOV ESP,EBP
006B5CA2  5D                        POP EBP
006B5CA3  C2 20 00                  RET 0x20
LAB_006b5ca6:
006B5CA6  8B CE                     MOV ECX,ESI
006B5CA8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5CAB  2B CF                     SUB ECX,EDI
006B5CAD  49                        DEC ECX
006B5CAE  0F AF 4D 08               IMUL ECX,dword ptr [EBP + 0x8]
006B5CB2  03 CB                     ADD ECX,EBX
006B5CB4  03 CA                     ADD ECX,EDX
006B5CB6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B5CB9  2B D3                     SUB EDX,EBX
006B5CBB  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006B5CBE  99                        CDQ
006B5CBF  33 C2                     XOR EAX,EDX
006B5CC1  2B C2                     SUB EAX,EDX
006B5CC3  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006B5CC6  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006B5CC9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B5CCC  03 D2                     ADD EDX,EDX
006B5CCE  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
006B5CD1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B5CD4  3B D7                     CMP EDX,EDI
006B5CD6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B5CD9  7E 02                     JLE 0x006b5cdd
006B5CDB  F7 DA                     NEG EDX
LAB_006b5cdd:
006B5CDD  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006B5CE0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B5CE3  3B D7                     CMP EDX,EDI
006B5CE5  7E 1B                     JLE 0x006b5d02
006B5CE7  3B D6                     CMP EDX,ESI
006B5CE9  7C 06                     JL 0x006b5cf1
006B5CEB  8D 56 FF                  LEA EDX,[ESI + -0x1]
006B5CEE  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_006b5cf1:
006B5CF1  3B D7                     CMP EDX,EDI
006B5CF3  0F 8C DD 01 00 00         JL 0x006b5ed6
006B5CF9  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006B5D00  EB 1F                     JMP 0x006b5d21
LAB_006b5d02:
006B5D02  85 D2                     TEST EDX,EDX
006B5D04  7D 02                     JGE 0x006b5d08
006B5D06  33 D2                     XOR EDX,EDX
LAB_006b5d08:
006B5D08  3B D7                     CMP EDX,EDI
006B5D0A  0F 8F C6 01 00 00         JG 0x006b5ed6
006B5D10  F7 DA                     NEG EDX
006B5D12  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006B5D15  BA 01 00 00 00            MOV EDX,0x1
006B5D1A  F7 DF                     NEG EDI
006B5D1C  2B D6                     SUB EDX,ESI
006B5D1E  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_006b5d21:
006B5D21  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B5D24  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006B5D27  3B F2                     CMP ESI,EDX
006B5D29  7C 04                     JL 0x006b5d2f
006B5D2B  4A                        DEC EDX
006B5D2C  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006b5d2f:
006B5D2F  39 5D 18                  CMP dword ptr [EBP + 0x18],EBX
006B5D32  0F 8C 9E 01 00 00         JL 0x006b5ed6
006B5D38  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B5D3B  3B D0                     CMP EDX,EAX
006B5D3D  0F 8C D3 00 00 00         JL 0x006b5e16
006B5D43  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B5D46  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5D49  2B F2                     SUB ESI,EDX
006B5D4B  85 C0                     TEST EAX,EAX
006B5D4D  0F 8C 83 01 00 00         JL 0x006b5ed6
006B5D53  85 DB                     TEST EBX,EBX
006B5D55  7D 1E                     JGE 0x006b5d75
006B5D57  8B C3                     MOV EAX,EBX
006B5D59  F7 D8                     NEG EAX
006B5D5B  03 D8                     ADD EBX,EAX
LAB_006b5d5d:
006B5D5D  85 F6                     TEST ESI,ESI
006B5D5F  7C 0B                     JL 0x006b5d6c
006B5D61  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B5D64  03 CA                     ADD ECX,EDX
006B5D66  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5D69  2B F2                     SUB ESI,EDX
006B5D6B  47                        INC EDI
LAB_006b5d6c:
006B5D6C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5D6F  41                        INC ECX
006B5D70  03 F2                     ADD ESI,EDX
006B5D72  48                        DEC EAX
006B5D73  75 E8                     JNZ 0x006b5d5d
LAB_006b5d75:
006B5D75  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B5D78  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B5D7B  3B F8                     CMP EDI,EAX
006B5D7D  7D 1A                     JGE 0x006b5d99
LAB_006b5d7f:
006B5D7F  85 F6                     TEST ESI,ESI
006B5D81  7C 08                     JL 0x006b5d8b
006B5D83  03 CA                     ADD ECX,EDX
006B5D85  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5D88  2B F2                     SUB ESI,EDX
006B5D8A  47                        INC EDI
LAB_006b5d8b:
006B5D8B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5D8E  41                        INC ECX
006B5D8F  03 F2                     ADD ESI,EDX
006B5D91  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B5D94  43                        INC EBX
006B5D95  3B F8                     CMP EDI,EAX
006B5D97  7C E6                     JL 0x006b5d7f
LAB_006b5d99:
006B5D99  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B5D9C  83 F8 07                  CMP EAX,0x7
006B5D9F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5DA2  75 39                     JNZ 0x006b5ddd
006B5DA4  3B D8                     CMP EBX,EAX
006B5DA6  0F 8F 2A 01 00 00         JG 0x006b5ed6
LAB_006b5dac:
006B5DAC  3B 7D 1C                  CMP EDI,dword ptr [EBP + 0x1c]
006B5DAF  0F 8F 21 01 00 00         JG 0x006b5ed6
006B5DB5  8A 45 20                  MOV AL,byte ptr [EBP + 0x20]
006B5DB8  30 01                     XOR byte ptr [ECX],AL
006B5DBA  85 F6                     TEST ESI,ESI
006B5DBC  7C 08                     JL 0x006b5dc6
006B5DBE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B5DC1  03 CA                     ADD ECX,EDX
006B5DC3  2B F0                     SUB ESI,EAX
006B5DC5  47                        INC EDI
LAB_006b5dc6:
006B5DC6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B5DC9  41                        INC ECX
006B5DCA  03 F0                     ADD ESI,EAX
006B5DCC  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5DCF  43                        INC EBX
006B5DD0  3B D8                     CMP EBX,EAX
006B5DD2  7E D8                     JLE 0x006b5dac
006B5DD4  5F                        POP EDI
006B5DD5  5E                        POP ESI
006B5DD6  5B                        POP EBX
006B5DD7  8B E5                     MOV ESP,EBP
006B5DD9  5D                        POP EBP
006B5DDA  C2 20 00                  RET 0x20
LAB_006b5ddd:
006B5DDD  3B D8                     CMP EBX,EAX
006B5DDF  0F 8F F1 00 00 00         JG 0x006b5ed6
LAB_006b5de5:
006B5DE5  3B 7D 1C                  CMP EDI,dword ptr [EBP + 0x1c]
006B5DE8  0F 8F E8 00 00 00         JG 0x006b5ed6
006B5DEE  8A 45 20                  MOV AL,byte ptr [EBP + 0x20]
006B5DF1  85 F6                     TEST ESI,ESI
006B5DF3  88 01                     MOV byte ptr [ECX],AL
006B5DF5  7C 08                     JL 0x006b5dff
006B5DF7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B5DFA  03 CA                     ADD ECX,EDX
006B5DFC  2B F0                     SUB ESI,EAX
006B5DFE  47                        INC EDI
LAB_006b5dff:
006B5DFF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B5E02  41                        INC ECX
006B5E03  03 F0                     ADD ESI,EAX
006B5E05  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5E08  43                        INC EBX
006B5E09  3B D8                     CMP EBX,EAX
006B5E0B  7E D8                     JLE 0x006b5de5
006B5E0D  5F                        POP EDI
006B5E0E  5E                        POP ESI
006B5E0F  5B                        POP EBX
006B5E10  8B E5                     MOV ESP,EBP
006B5E12  5D                        POP EBP
006B5E13  C2 20 00                  RET 0x20
LAB_006b5e16:
006B5E16  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006B5E19  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B5E1C  2B F0                     SUB ESI,EAX
006B5E1E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B5E21  3B D0                     CMP EDX,EAX
006B5E23  0F 8C AD 00 00 00         JL 0x006b5ed6
006B5E29  3B F8                     CMP EDI,EAX
006B5E2B  7D 27                     JGE 0x006b5e54
006B5E2D  2B C7                     SUB EAX,EDI
006B5E2F  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B5E32  03 F8                     ADD EDI,EAX
006B5E34  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006b5e37:
006B5E37  85 F6                     TEST ESI,ESI
006B5E39  7C 07                     JL 0x006b5e42
006B5E3B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5E3E  41                        INC ECX
006B5E3F  2B F2                     SUB ESI,EDX
006B5E41  43                        INC EBX
LAB_006b5e42:
006B5E42  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5E45  03 C8                     ADD ECX,EAX
006B5E47  03 F2                     ADD ESI,EDX
006B5E49  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B5E4C  4A                        DEC EDX
006B5E4D  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006B5E50  75 E5                     JNZ 0x006b5e37
006B5E52  EB 03                     JMP 0x006b5e57
LAB_006b5e54:
006B5E54  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006b5e57:
006B5E57  85 DB                     TEST EBX,EBX
006B5E59  7D 17                     JGE 0x006b5e72
LAB_006b5e5b:
006B5E5B  85 F6                     TEST ESI,ESI
006B5E5D  7C 07                     JL 0x006b5e66
006B5E5F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5E62  41                        INC ECX
006B5E63  2B F2                     SUB ESI,EDX
006B5E65  43                        INC EBX
LAB_006b5e66:
006B5E66  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5E69  03 C8                     ADD ECX,EAX
006B5E6B  03 F2                     ADD ESI,EDX
006B5E6D  47                        INC EDI
006B5E6E  85 DB                     TEST EBX,EBX
006B5E70  7C E9                     JL 0x006b5e5b
LAB_006b5e72:
006B5E72  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B5E75  83 FA 07                  CMP EDX,0x7
006B5E78  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B5E7B  75 31                     JNZ 0x006b5eae
006B5E7D  3B DA                     CMP EBX,EDX
006B5E7F  7F 55                     JG 0x006b5ed6
LAB_006b5e81:
006B5E81  3B 7D 1C                  CMP EDI,dword ptr [EBP + 0x1c]
006B5E84  7F 50                     JG 0x006b5ed6
006B5E86  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006B5E89  30 11                     XOR byte ptr [ECX],DL
006B5E8B  85 F6                     TEST ESI,ESI
006B5E8D  7C 07                     JL 0x006b5e96
006B5E8F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5E92  41                        INC ECX
006B5E93  2B F2                     SUB ESI,EDX
006B5E95  43                        INC EBX
LAB_006b5e96:
006B5E96  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5E99  03 C8                     ADD ECX,EAX
006B5E9B  03 F2                     ADD ESI,EDX
006B5E9D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B5EA0  47                        INC EDI
006B5EA1  3B DA                     CMP EBX,EDX
006B5EA3  7E DC                     JLE 0x006b5e81
006B5EA5  5F                        POP EDI
006B5EA6  5E                        POP ESI
006B5EA7  5B                        POP EBX
006B5EA8  8B E5                     MOV ESP,EBP
006B5EAA  5D                        POP EBP
006B5EAB  C2 20 00                  RET 0x20
LAB_006b5eae:
006B5EAE  3B DA                     CMP EBX,EDX
006B5EB0  7F 24                     JG 0x006b5ed6
LAB_006b5eb2:
006B5EB2  3B 7D 1C                  CMP EDI,dword ptr [EBP + 0x1c]
006B5EB5  7F 1F                     JG 0x006b5ed6
006B5EB7  8A 55 20                  MOV DL,byte ptr [EBP + 0x20]
006B5EBA  85 F6                     TEST ESI,ESI
006B5EBC  88 11                     MOV byte ptr [ECX],DL
006B5EBE  7C 07                     JL 0x006b5ec7
006B5EC0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5EC3  41                        INC ECX
006B5EC4  2B F2                     SUB ESI,EDX
006B5EC6  43                        INC EBX
LAB_006b5ec7:
006B5EC7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5ECA  03 C8                     ADD ECX,EAX
006B5ECC  03 F2                     ADD ESI,EDX
006B5ECE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B5ED1  47                        INC EDI
006B5ED2  3B DA                     CMP EBX,EDX
006B5ED4  7E DC                     JLE 0x006b5eb2
LAB_006b5ed6:
006B5ED6  5F                        POP EDI
006B5ED7  5E                        POP ESI
006B5ED8  5B                        POP EBX
006B5ED9  8B E5                     MOV ESP,EBP
006B5EDB  5D                        POP EBP
006B5EDC  C2 20 00                  RET 0x20
