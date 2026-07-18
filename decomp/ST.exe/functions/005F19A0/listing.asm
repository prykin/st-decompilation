FUN_005f19a0:
005F19A0  55                        PUSH EBP
005F19A1  8B EC                     MOV EBP,ESP
005F19A3  83 EC 3C                  SUB ESP,0x3c
005F19A6  8B C1                     MOV EAX,ECX
005F19A8  56                        PUSH ESI
005F19A9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005F19AC  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
005F19AF  85 C9                     TEST ECX,ECX
005F19B1  0F 84 DD 02 00 00         JZ 0x005f1c94
005F19B7  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
005F19BA  4E                        DEC ESI
005F19BB  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005F19BE  0F 88 D0 02 00 00         JS 0x005f1c94
005F19C4  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
005F19CA  53                        PUSH EBX
005F19CB  57                        PUSH EDI
005F19CC  EB 03                     JMP 0x005f19d1
LAB_005f19ce:
005F19CE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_005f19d1:
005F19D1  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
005F19D4  3B 70 0C                  CMP ESI,dword ptr [EAX + 0xc]
005F19D7  73 0D                     JNC 0x005f19e6
005F19D9  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
005F19DC  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005F19DF  0F AF DE                  IMUL EBX,ESI
005F19E2  03 DA                     ADD EBX,EDX
005F19E4  EB 02                     JMP 0x005f19e8
LAB_005f19e6:
005F19E6  33 DB                     XOR EBX,EBX
LAB_005f19e8:
005F19E8  0F BF 7B 04               MOVSX EDI,word ptr [EBX + 0x4]
005F19EC  0F BF 43 02               MOVSX EAX,word ptr [EBX + 0x2]
005F19F0  0F BF 13                  MOVSX EDX,word ptr [EBX]
005F19F3  85 C9                     TEST ECX,ECX
005F19F5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005F19F8  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005F19FB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005F19FE  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005F1A01  0F 84 81 02 00 00         JZ 0x005f1c88
005F1A07  80 7B 06 01               CMP byte ptr [EBX + 0x6],0x1
005F1A0B  0F 85 88 02 00 00         JNZ 0x005f1c99
005F1A11  8B F1                     MOV ESI,ECX
005F1A13  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
005F1A19  80 F9 FF                  CMP CL,0xff
005F1A1C  0F 84 2A 02 00 00         JZ 0x005f1c4c
005F1A22  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
005F1A28  85 C9                     TEST ECX,ECX
005F1A2A  0F 84 1C 02 00 00         JZ 0x005f1c4c
005F1A30  8D 4D E0                  LEA ECX,[EBP + -0x20]
005F1A33  51                        PUSH ECX
005F1A34  8D 4D E4                  LEA ECX,[EBP + -0x1c]
005F1A37  51                        PUSH ECX
005F1A38  50                        PUSH EAX
005F1A39  52                        PUSH EDX
005F1A3A  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
005F1A40  52                        PUSH EDX
005F1A41  8B CE                     MOV ECX,ESI
005F1A43  E8 0B 25 E1 FF            CALL 0x00403f53
005F1A48  85 FF                     TEST EDI,EDI
005F1A4A  0F 8C FC 01 00 00         JL 0x005f1c4c
005F1A50  83 FF 05                  CMP EDI,0x5
005F1A53  0F 8D F3 01 00 00         JGE 0x005f1c4c
005F1A59  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005F1A5C  85 D2                     TEST EDX,EDX
005F1A5E  0F 8C E8 01 00 00         JL 0x005f1c4c
005F1A64  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
005F1A67  3B D1                     CMP EDX,ECX
005F1A69  0F 8D DD 01 00 00         JGE 0x005f1c4c
005F1A6F  8B 04 BD D0 AE 79 00      MOV EAX,dword ptr [EDI*0x4 + 0x79aed0]
005F1A76  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
005F1A79  03 C7                     ADD EAX,EDI
005F1A7B  85 C0                     TEST EAX,EAX
005F1A7D  0F 8C C9 01 00 00         JL 0x005f1c4c
005F1A83  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F1A86  0F 8D C0 01 00 00         JGE 0x005f1c4c
005F1A8C  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F1A8F  85 F6                     TEST ESI,ESI
005F1A91  0F 84 B5 01 00 00         JZ 0x005f1c4c
005F1A97  0F AF C1                  IMUL EAX,ECX
005F1A9A  03 C6                     ADD EAX,ESI
005F1A9C  33 C9                     XOR ECX,ECX
005F1A9E  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005F1AA1  8B C1                     MOV EAX,ECX
005F1AA3  85 C0                     TEST EAX,EAX
005F1AA5  0F 85 A1 01 00 00         JNZ 0x005f1c4c
005F1AAB  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F1AB0  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
005F1AB6  3C FF                     CMP AL,0xff
005F1AB8  0F 84 8E 01 00 00         JZ 0x005f1c4c
005F1ABE  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
005F1AC4  85 C0                     TEST EAX,EAX
005F1AC6  0F 84 80 01 00 00         JZ 0x005f1c4c
005F1ACC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005F1ACF  8D 4D D8                  LEA ECX,[EBP + -0x28]
005F1AD2  51                        PUSH ECX
005F1AD3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005F1AD6  8D 42 01                  LEA EAX,[EDX + 0x1]
005F1AD9  8D 55 DC                  LEA EDX,[EBP + -0x24]
005F1ADC  52                        PUSH EDX
005F1ADD  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
005F1AE3  51                        PUSH ECX
005F1AE4  50                        PUSH EAX
005F1AE5  52                        PUSH EDX
005F1AE6  8B CE                     MOV ECX,ESI
005F1AE8  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
005F1AEB  E8 63 24 E1 FF            CALL 0x00403f53
005F1AF0  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005F1AF3  85 C9                     TEST ECX,ECX
005F1AF5  0F 8C 51 01 00 00         JL 0x005f1c4c
005F1AFB  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
005F1AFE  3B CA                     CMP ECX,EDX
005F1B00  0F 8D 46 01 00 00         JGE 0x005f1c4c
005F1B06  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F1B09  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
005F1B0C  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005F1B13  03 C7                     ADD EAX,EDI
005F1B15  85 C0                     TEST EAX,EAX
005F1B17  0F 8C 2F 01 00 00         JL 0x005f1c4c
005F1B1D  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F1B20  0F 8D 26 01 00 00         JGE 0x005f1c4c
005F1B26  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F1B29  85 F6                     TEST ESI,ESI
005F1B2B  0F 84 1B 01 00 00         JZ 0x005f1c4c
005F1B31  0F AF C2                  IMUL EAX,EDX
005F1B34  03 C6                     ADD EAX,ESI
005F1B36  33 D2                     XOR EDX,EDX
005F1B38  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
005F1B3B  8B C2                     MOV EAX,EDX
005F1B3D  85 C0                     TEST EAX,EAX
005F1B3F  0F 85 07 01 00 00         JNZ 0x005f1c4c
005F1B45  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F1B4A  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
005F1B50  3C FF                     CMP AL,0xff
005F1B52  0F 84 F4 00 00 00         JZ 0x005f1c4c
005F1B58  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
005F1B5E  85 C0                     TEST EAX,EAX
005F1B60  0F 84 E6 00 00 00         JZ 0x005f1c4c
005F1B66  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005F1B69  8D 4D D0                  LEA ECX,[EBP + -0x30]
005F1B6C  8D 55 D4                  LEA EDX,[EBP + -0x2c]
005F1B6F  51                        PUSH ECX
005F1B70  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
005F1B76  8D 78 01                  LEA EDI,[EAX + 0x1]
005F1B79  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005F1B7C  52                        PUSH EDX
005F1B7D  57                        PUSH EDI
005F1B7E  50                        PUSH EAX
005F1B7F  51                        PUSH ECX
005F1B80  8B CE                     MOV ECX,ESI
005F1B82  E8 CC 23 E1 FF            CALL 0x00403f53
005F1B87  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005F1B8A  85 C9                     TEST ECX,ECX
005F1B8C  0F 8C BA 00 00 00         JL 0x005f1c4c
005F1B92  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
005F1B95  3B CA                     CMP ECX,EDX
005F1B97  0F 8D AF 00 00 00         JGE 0x005f1c4c
005F1B9D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F1BA0  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
005F1BA3  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005F1BAA  03 C3                     ADD EAX,EBX
005F1BAC  85 C0                     TEST EAX,EAX
005F1BAE  0F 8C 95 00 00 00         JL 0x005f1c49
005F1BB4  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F1BB7  0F 8D 8C 00 00 00         JGE 0x005f1c49
005F1BBD  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F1BC0  85 F6                     TEST ESI,ESI
005F1BC2  0F 84 81 00 00 00         JZ 0x005f1c49
005F1BC8  0F AF C2                  IMUL EAX,EDX
005F1BCB  03 C6                     ADD EAX,ESI
005F1BCD  33 D2                     XOR EDX,EDX
005F1BCF  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
005F1BD2  8B C2                     MOV EAX,EDX
005F1BD4  85 C0                     TEST EAX,EAX
005F1BD6  75 71                     JNZ 0x005f1c49
005F1BD8  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F1BDD  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
005F1BE3  3C FF                     CMP AL,0xff
005F1BE5  74 62                     JZ 0x005f1c49
005F1BE7  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
005F1BED  85 C0                     TEST EAX,EAX
005F1BEF  74 58                     JZ 0x005f1c49
005F1BF1  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
005F1BF4  8D 45 C4                  LEA EAX,[EBP + -0x3c]
005F1BF7  8D 4D C8                  LEA ECX,[EBP + -0x38]
005F1BFA  50                        PUSH EAX
005F1BFB  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
005F1C01  51                        PUSH ECX
005F1C02  57                        PUSH EDI
005F1C03  52                        PUSH EDX
005F1C04  50                        PUSH EAX
005F1C05  8B CE                     MOV ECX,ESI
005F1C07  E8 47 23 E1 FF            CALL 0x00403f53
005F1C0C  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
005F1C0F  85 C9                     TEST ECX,ECX
005F1C11  7C 36                     JL 0x005f1c49
005F1C13  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
005F1C16  3B CA                     CMP ECX,EDX
005F1C18  7D 2F                     JGE 0x005f1c49
005F1C1A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F1C1D  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
005F1C20  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005F1C27  03 C7                     ADD EAX,EDI
005F1C29  85 C0                     TEST EAX,EAX
005F1C2B  7C 1C                     JL 0x005f1c49
005F1C2D  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F1C30  7D 17                     JGE 0x005f1c49
005F1C32  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F1C35  85 F6                     TEST ESI,ESI
005F1C37  74 10                     JZ 0x005f1c49
005F1C39  0F AF C2                  IMUL EAX,EDX
005F1C3C  03 C6                     ADD EAX,ESI
005F1C3E  33 D2                     XOR EDX,EDX
005F1C40  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
005F1C43  8B C2                     MOV EAX,EDX
005F1C45  85 C0                     TEST EAX,EAX
005F1C47  74 36                     JZ 0x005f1c7f
LAB_005f1c49:
005F1C49  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_005f1c4c:
005F1C4C  66 8B 43 07               MOV AX,word ptr [EBX + 0x7]
005F1C50  8A 4B 06                  MOV CL,byte ptr [EBX + 0x6]
005F1C53  0F BF 53 04               MOVSX EDX,word ptr [EBX + 0x4]
005F1C57  50                        PUSH EAX
005F1C58  51                        PUSH ECX
005F1C59  0F BF 43 02               MOVSX EAX,word ptr [EBX + 0x2]
005F1C5D  0F BF 0B                  MOVSX ECX,word ptr [EBX]
005F1C60  52                        PUSH EDX
005F1C61  50                        PUSH EAX
005F1C62  51                        PUSH ECX
005F1C63  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005F1C66  E8 FA F7 E0 FF            CALL 0x00401465
005F1C6B  85 C0                     TEST EAX,EAX
005F1C6D  7C 10                     JL 0x005f1c7f
005F1C6F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F1C72  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005F1C75  52                        PUSH EDX
005F1C76  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
005F1C79  51                        PUSH ECX
005F1C7A  E8 F1 EF 0B 00            CALL 0x006b0c70
LAB_005f1c7f:
005F1C7F  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
005F1C85  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_005f1c88:
005F1C88  4E                        DEC ESI
005F1C89  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005F1C8C  0F 89 3C FD FF FF         JNS 0x005f19ce
005F1C92  5F                        POP EDI
005F1C93  5B                        POP EBX
LAB_005f1c94:
005F1C94  5E                        POP ESI
005F1C95  8B E5                     MOV ESP,EBP
005F1C97  5D                        POP EBP
005F1C98  C3                        RET
LAB_005f1c99:
005F1C99  57                        PUSH EDI
005F1C9A  50                        PUSH EAX
005F1C9B  52                        PUSH EDX
005F1C9C  E8 BC 31 E1 FF            CALL 0x00404e5d
005F1CA1  85 C0                     TEST EAX,EAX
005F1CA3  74 DA                     JZ 0x005f1c7f
005F1CA5  EB A5                     JMP 0x005f1c4c
