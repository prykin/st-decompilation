FUN_006c6c80:
006C6C80  55                        PUSH EBP
006C6C81  8B EC                     MOV EBP,ESP
006C6C83  81 EC 04 01 00 00         SUB ESP,0x104
006C6C89  53                        PUSH EBX
006C6C8A  56                        PUSH ESI
006C6C8B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C6C8E  57                        PUSH EDI
006C6C8F  8D 45 0B                  LEA EAX,[EBP + 0xb]
006C6C92  6A 01                     PUSH 0x1
006C6C94  50                        PUSH EAX
006C6C95  56                        PUSH ESI
006C6C96  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6C99  83 F8 01                  CMP EAX,0x1
006C6C9C  74 16                     JZ 0x006c6cb4
006C6C9E  85 C0                     TEST EAX,EAX
006C6CA0  0F 8C 78 01 00 00         JL 0x006c6e1e
006C6CA6  5F                        POP EDI
006C6CA7  5E                        POP ESI
006C6CA8  B8 FB FF FF FF            MOV EAX,0xfffffffb
006C6CAD  5B                        POP EBX
006C6CAE  8B E5                     MOV ESP,EBP
006C6CB0  5D                        POP EBP
006C6CB1  C2 04 00                  RET 0x4
LAB_006c6cb4:
006C6CB4  8A 45 0B                  MOV AL,byte ptr [EBP + 0xb]
006C6CB7  33 FF                     XOR EDI,EDI
006C6CB9  3C FF                     CMP AL,0xff
006C6CBB  0F 85 87 00 00 00         JNZ 0x006c6d48
006C6CC1  8D 4D FC                  LEA ECX,[EBP + -0x4]
006C6CC4  6A 01                     PUSH 0x1
006C6CC6  51                        PUSH ECX
006C6CC7  56                        PUSH ESI
006C6CC8  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6CCB  83 F8 01                  CMP EAX,0x1
006C6CCE  74 16                     JZ 0x006c6ce6
006C6CD0  85 C0                     TEST EAX,EAX
006C6CD2  0F 8C 46 01 00 00         JL 0x006c6e1e
006C6CD8  5F                        POP EDI
006C6CD9  5E                        POP ESI
006C6CDA  B8 FB FF FF FF            MOV EAX,0xfffffffb
006C6CDF  5B                        POP EBX
006C6CE0  8B E5                     MOV ESP,EBP
006C6CE2  5D                        POP EBP
006C6CE3  C2 04 00                  RET 0x4
LAB_006c6ce6:
006C6CE6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C6CE9  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
006C6CEF  81 E2 FF 00 00 00         AND EDX,0xff
006C6CF5  52                        PUSH EDX
006C6CF6  50                        PUSH EAX
006C6CF7  56                        PUSH ESI
006C6CF8  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6CFB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006C6CFE  8B D1                     MOV EDX,ECX
006C6D00  81 E2 FF 00 00 00         AND EDX,0xff
006C6D06  3B C2                     CMP EAX,EDX
006C6D08  74 16                     JZ 0x006c6d20
006C6D0A  85 C0                     TEST EAX,EAX
006C6D0C  0F 8C 0C 01 00 00         JL 0x006c6e1e
006C6D12  5F                        POP EDI
006C6D13  5E                        POP ESI
006C6D14  B8 FB FF FF FF            MOV EAX,0xfffffffb
006C6D19  5B                        POP EBX
006C6D1A  8B E5                     MOV ESP,EBP
006C6D1C  5D                        POP EBP
006C6D1D  C2 04 00                  RET 0x4
LAB_006c6d20:
006C6D20  80 F9 0B                  CMP CL,0xb
006C6D23  75 21                     JNZ 0x006c6d46
006C6D25  6A 0B                     PUSH 0xb
006C6D27  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
006C6D2D  68 BC DF 7E 00            PUSH 0x7edfbc
006C6D32  50                        PUSH EAX
006C6D33  E8 B8 79 06 00            CALL 0x0072e6f0
006C6D38  83 C4 0C                  ADD ESP,0xc
006C6D3B  85 C0                     TEST EAX,EAX
006C6D3D  75 07                     JNZ 0x006c6d46
006C6D3F  BF 01 00 00 00            MOV EDI,0x1
006C6D44  EB 02                     JMP 0x006c6d48
LAB_006c6d46:
006C6D46  33 FF                     XOR EDI,EDI
LAB_006c6d48:
006C6D48  8D 4D FC                  LEA ECX,[EBP + -0x4]
006C6D4B  6A 01                     PUSH 0x1
006C6D4D  51                        PUSH ECX
006C6D4E  56                        PUSH ESI
006C6D4F  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6D52  83 F8 01                  CMP EAX,0x1
006C6D55  0F 85 9D 00 00 00         JNZ 0x006c6df8
LAB_006c6d5b:
006C6D5B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C6D5E  84 C0                     TEST AL,AL
006C6D60  0F 84 A4 00 00 00         JZ 0x006c6e0a
006C6D66  25 FF 00 00 00            AND EAX,0xff
006C6D6B  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
006C6D71  50                        PUSH EAX
006C6D72  52                        PUSH EDX
006C6D73  56                        PUSH ESI
006C6D74  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6D77  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006C6D7A  8B D1                     MOV EDX,ECX
006C6D7C  81 E2 FF 00 00 00         AND EDX,0xff
006C6D82  3B C2                     CMP EAX,EDX
006C6D84  0F 85 8B 00 00 00         JNZ 0x006c6e15
006C6D8A  8B 85 FD FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefd]
006C6D90  8A 95 FC FE FF FF         MOV DL,byte ptr [EBP + 0xfffffefc]
006C6D96  85 FF                     TEST EDI,EDI
006C6D98  74 23                     JZ 0x006c6dbd
006C6D9A  8A DA                     MOV BL,DL
006C6D9C  80 E3 07                  AND BL,0x7
006C6D9F  80 FB 01                  CMP BL,0x1
006C6DA2  75 19                     JNZ 0x006c6dbd
006C6DA4  80 F9 03                  CMP CL,0x3
006C6DA7  72 14                     JC 0x006c6dbd
006C6DA9  8B 5E 56                  MOV EBX,dword ptr [ESI + 0x56]
006C6DAC  83 CB 02                  OR EBX,0x2
006C6DAF  89 5E 56                  MOV dword ptr [ESI + 0x56],EBX
006C6DB2  8B D8                     MOV EBX,EAX
006C6DB4  81 E3 FF FF 00 00         AND EBX,0xffff
006C6DBA  89 5E 5A                  MOV dword ptr [ESI + 0x5a],EBX
LAB_006c6dbd:
006C6DBD  80 7D 0B F9               CMP byte ptr [EBP + 0xb],0xf9
006C6DC1  75 22                     JNZ 0x006c6de5
006C6DC3  80 F9 04                  CMP CL,0x4
006C6DC6  72 1D                     JC 0x006c6de5
006C6DC8  8A 8D FF FE FF FF         MOV CL,byte ptr [EBP + 0xfffffeff]
006C6DCE  88 56 5E                  MOV byte ptr [ESI + 0x5e],DL
006C6DD1  66 85 C0                  TEST AX,AX
006C6DD4  66 89 46 5F               MOV word ptr [ESI + 0x5f],AX
006C6DD8  88 4E 61                  MOV byte ptr [ESI + 0x61],CL
006C6DDB  74 08                     JZ 0x006c6de5
006C6DDD  8B 46 56                  MOV EAX,dword ptr [ESI + 0x56]
006C6DE0  0C 02                     OR AL,0x2
006C6DE2  89 46 56                  MOV dword ptr [ESI + 0x56],EAX
LAB_006c6de5:
006C6DE5  8D 55 FC                  LEA EDX,[EBP + -0x4]
006C6DE8  6A 01                     PUSH 0x1
006C6DEA  52                        PUSH EDX
006C6DEB  56                        PUSH ESI
006C6DEC  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6DEF  83 F8 01                  CMP EAX,0x1
006C6DF2  0F 84 63 FF FF FF         JZ 0x006c6d5b
LAB_006c6df8:
006C6DF8  85 C0                     TEST EAX,EAX
006C6DFA  7C 22                     JL 0x006c6e1e
006C6DFC  5F                        POP EDI
006C6DFD  5E                        POP ESI
006C6DFE  B8 FB FF FF FF            MOV EAX,0xfffffffb
006C6E03  5B                        POP EBX
006C6E04  8B E5                     MOV ESP,EBP
006C6E06  5D                        POP EBP
006C6E07  C2 04 00                  RET 0x4
LAB_006c6e0a:
006C6E0A  5F                        POP EDI
006C6E0B  5E                        POP ESI
006C6E0C  33 C0                     XOR EAX,EAX
006C6E0E  5B                        POP EBX
006C6E0F  8B E5                     MOV ESP,EBP
006C6E11  5D                        POP EBP
006C6E12  C2 04 00                  RET 0x4
LAB_006c6e15:
006C6E15  85 C0                     TEST EAX,EAX
006C6E17  7C 05                     JL 0x006c6e1e
006C6E19  B8 FB FF FF FF            MOV EAX,0xfffffffb
LAB_006c6e1e:
006C6E1E  5F                        POP EDI
006C6E1F  5E                        POP ESI
006C6E20  5B                        POP EBX
006C6E21  8B E5                     MOV ESP,EBP
006C6E23  5D                        POP EBP
006C6E24  C2 04 00                  RET 0x4
