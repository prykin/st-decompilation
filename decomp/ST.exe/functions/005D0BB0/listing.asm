SettMapMTy::ChangePlayerTeam:
005D0BB0  55                        PUSH EBP
005D0BB1  8B EC                     MOV EBP,ESP
005D0BB3  83 EC 50                  SUB ESP,0x50
005D0BB6  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005D0BBC  53                        PUSH EBX
005D0BBD  56                        PUSH ESI
005D0BBE  57                        PUSH EDI
005D0BBF  85 C0                     TEST EAX,EAX
005D0BC1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005D0BC4  0F 84 3D 02 00 00         JZ 0x005d0e07
005D0BCA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005D0BCD  33 C0                     XOR EAX,EAX
005D0BCF  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005D0BD4  3B C1                     CMP EAX,ECX
005D0BD6  0F 85 2B 02 00 00         JNZ 0x005d0e07
005D0BDC  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005D0BE2  8D 45 B4                  LEA EAX,[EBP + -0x4c]
005D0BE5  8D 55 B0                  LEA EDX,[EBP + -0x50]
005D0BE8  6A 00                     PUSH 0x0
005D0BEA  50                        PUSH EAX
005D0BEB  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
005D0BEE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D0BF4  E8 F7 CB 15 00            CALL 0x0072d7f0
005D0BF9  8B F0                     MOV ESI,EAX
005D0BFB  83 C4 08                  ADD ESP,0x8
005D0BFE  85 F6                     TEST ESI,ESI
005D0C00  0F 85 C2 01 00 00         JNZ 0x005d0dc8
005D0C06  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005D0C09  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D0C0C  8B 8E 84 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f84]
005D0C12  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005D0C15  73 0D                     JNC 0x005d0c24
005D0C17  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D0C1A  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
005D0C1D  0F AF C2                  IMUL EAX,EDX
005D0C20  03 C3                     ADD EAX,EBX
005D0C22  EB 02                     JMP 0x005d0c26
LAB_005d0c24:
005D0C24  33 C0                     XOR EAX,EAX
LAB_005d0c26:
005D0C26  85 C0                     TEST EAX,EAX
005D0C28  0F 84 88 01 00 00         JZ 0x005d0db6
005D0C2E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005D0C31  85 C9                     TEST ECX,ECX
005D0C33  74 65                     JZ 0x005d0c9a
005D0C35  8A 5D 10                  MOV BL,byte ptr [EBP + 0x10]
005D0C38  42                        INC EDX
005D0C39  88 58 4A                  MOV byte ptr [EAX + 0x4a],BL
005D0C3C  8B 8E 84 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f84]
005D0C42  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D0C45  3B D0                     CMP EDX,EAX
005D0C47  7D 2B                     JGE 0x005d0c74
LAB_005d0c49:
005D0C49  73 0D                     JNC 0x005d0c58
005D0C4B  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D0C4E  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005D0C51  0F AF C2                  IMUL EAX,EDX
005D0C54  03 C7                     ADD EAX,EDI
005D0C56  EB 02                     JMP 0x005d0c5a
LAB_005d0c58:
005D0C58  33 C0                     XOR EAX,EAX
LAB_005d0c5a:
005D0C5A  85 C0                     TEST EAX,EAX
005D0C5C  74 16                     JZ 0x005d0c74
005D0C5E  80 38 00                  CMP byte ptr [EAX],0x0
005D0C61  75 11                     JNZ 0x005d0c74
005D0C63  88 58 4A                  MOV byte ptr [EAX + 0x4a],BL
005D0C66  8B 8E 84 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f84]
005D0C6C  42                        INC EDX
005D0C6D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D0C70  3B D0                     CMP EDX,EAX
005D0C72  7C D5                     JL 0x005d0c49
LAB_005d0c74:
005D0C74  8B 16                     MOV EDX,dword ptr [ESI]
005D0C76  8B CE                     MOV ECX,ESI
005D0C78  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005D0C7B  8B 86 21 21 00 00         MOV EAX,dword ptr [ESI + 0x2121]
005D0C81  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005D0C84  40                        INC EAX
005D0C85  89 86 21 21 00 00         MOV dword ptr [ESI + 0x2121],EAX
005D0C8B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0C91  5F                        POP EDI
005D0C92  5E                        POP ESI
005D0C93  5B                        POP EBX
005D0C94  8B E5                     MOV ESP,EBP
005D0C96  5D                        POP EBP
005D0C97  C2 0C 00                  RET 0xc
LAB_005d0c9a:
005D0C9A  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
005D0C9D  81 FB FF 00 00 00         CMP EBX,0xff
005D0CA3  0F 84 0D 01 00 00         JZ 0x005d0db6
005D0CA9  8A 48 02                  MOV CL,byte ptr [EAX + 0x2]
005D0CAC  80 F9 FF                  CMP CL,0xff
005D0CAF  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
005D0CB2  0F 84 FE 00 00 00         JZ 0x005d0db6
005D0CB8  8B D1                     MOV EDX,ECX
005D0CBA  81 E2 FF 00 00 00         AND EDX,0xff
005D0CC0  3B DA                     CMP EBX,EDX
005D0CC2  0F 84 EE 00 00 00         JZ 0x005d0db6
005D0CC8  80 78 04 04               CMP byte ptr [EAX + 0x4],0x4
005D0CCC  0F 85 CB 00 00 00         JNZ 0x005d0d9d
005D0CD2  8A C1                     MOV AL,CL
005D0CD4  3A D8                     CMP BL,AL
005D0CD6  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
005D0CD9  75 04                     JNZ 0x005d0cdf
005D0CDB  33 C0                     XOR EAX,EAX
005D0CDD  EB 6F                     JMP 0x005d0d4e
LAB_005d0cdf:
005D0CDF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005D0CE2  8B C3                     MOV EAX,EBX
005D0CE4  25 FF 00 00 00            AND EAX,0xff
005D0CE9  81 E1 FF 00 00 00         AND ECX,0xff
005D0CEF  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
005D0CF6  84 D2                     TEST DL,DL
005D0CF8  75 10                     JNZ 0x005d0d0a
005D0CFA  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
005D0D01  75 07                     JNZ 0x005d0d0a
005D0D03  B8 FE FF FF FF            MOV EAX,0xfffffffe
005D0D08  EB 41                     JMP 0x005d0d4b
LAB_005d0d0a:
005D0D0A  80 FA 01                  CMP DL,0x1
005D0D0D  75 0F                     JNZ 0x005d0d1e
005D0D0F  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
005D0D17  75 05                     JNZ 0x005d0d1e
005D0D19  83 C8 FF                  OR EAX,0xffffffff
005D0D1C  EB 2D                     JMP 0x005d0d4b
LAB_005d0d1e:
005D0D1E  84 D2                     TEST DL,DL
005D0D20  75 11                     JNZ 0x005d0d33
005D0D22  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
005D0D2A  75 07                     JNZ 0x005d0d33
005D0D2C  B8 01 00 00 00            MOV EAX,0x1
005D0D31  EB 18                     JMP 0x005d0d4b
LAB_005d0d33:
005D0D33  80 FA 01                  CMP DL,0x1
005D0D36  75 11                     JNZ 0x005d0d49
005D0D38  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
005D0D40  75 07                     JNZ 0x005d0d49
005D0D42  B8 02 00 00 00            MOV EAX,0x2
005D0D47  EB 02                     JMP 0x005d0d4b
LAB_005d0d49:
005D0D49  33 C0                     XOR EAX,EAX
LAB_005d0d4b:
005D0D4B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_005d0d4e:
005D0D4E  83 C0 02                  ADD EAX,0x2
005D0D51  83 F8 04                  CMP EAX,0x4
005D0D54  77 53                     JA 0x005d0da9
switchD_005d0d56::switchD:
005D0D56  FF 24 85 10 0E 5D 00      JMP dword ptr [EAX*0x4 + 0x5d0e10]
switchD_005d0d56::caseD_fffffffe:
005D0D5D  6A 01                     PUSH 0x1
005D0D5F  51                        PUSH ECX
005D0D60  53                        PUSH EBX
005D0D61  B9 20 76 80 00            MOV ECX,0x807620
005D0D66  E8 A7 04 E3 FF            CALL 0x00401212
005D0D6B  EB 3C                     JMP 0x005d0da9
switchD_005d0d56::caseD_2:
005D0D6D  6A 00                     PUSH 0x0
005D0D6F  51                        PUSH ECX
005D0D70  53                        PUSH EBX
005D0D71  B9 20 76 80 00            MOV ECX,0x807620
005D0D76  E8 97 04 E3 FF            CALL 0x00401212
005D0D7B  EB 2C                     JMP 0x005d0da9
switchD_005d0d56::caseD_ffffffff:
005D0D7D  6A 01                     PUSH 0x1
005D0D7F  53                        PUSH EBX
005D0D80  51                        PUSH ECX
005D0D81  B9 20 76 80 00            MOV ECX,0x807620
005D0D86  E8 87 04 E3 FF            CALL 0x00401212
005D0D8B  EB 1C                     JMP 0x005d0da9
switchD_005d0d56::caseD_1:
005D0D8D  6A 00                     PUSH 0x0
005D0D8F  53                        PUSH EBX
005D0D90  51                        PUSH ECX
005D0D91  B9 20 76 80 00            MOV ECX,0x807620
005D0D96  E8 77 04 E3 FF            CALL 0x00401212
005D0D9B  EB 0C                     JMP 0x005d0da9
LAB_005d0d9d:
005D0D9D  51                        PUSH ECX
005D0D9E  53                        PUSH EBX
005D0D9F  B9 20 76 80 00            MOV ECX,0x807620
005D0DA4  E8 F7 25 E3 FF            CALL 0x004033a0
switchD_005d0d56::caseD_0:
005D0DA9  8B 06                     MOV EAX,dword ptr [ESI]
005D0DAB  8B CE                     MOV ECX,ESI
005D0DAD  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005D0DB0  FF 05 AB 8A 80 00         INC dword ptr [0x00808aab]
LAB_005d0db6:
005D0DB6  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005D0DB9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0DBF  5F                        POP EDI
005D0DC0  5E                        POP ESI
005D0DC1  5B                        POP EBX
005D0DC2  8B E5                     MOV ESP,EBP
005D0DC4  5D                        POP EBP
005D0DC5  C2 0C 00                  RET 0xc
LAB_005d0dc8:
005D0DC8  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005D0DCB  68 7C D4 7C 00            PUSH 0x7cd47c
005D0DD0  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D0DD5  56                        PUSH ESI
005D0DD6  6A 00                     PUSH 0x0
005D0DD8  68 DF 05 00 00            PUSH 0x5df
005D0DDD  68 58 D2 7C 00            PUSH 0x7cd258
005D0DE2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D0DE8  E8 E3 C6 0D 00            CALL 0x006ad4d0
005D0DED  83 C4 18                  ADD ESP,0x18
005D0DF0  85 C0                     TEST EAX,EAX
005D0DF2  74 01                     JZ 0x005d0df5
005D0DF4  CC                        INT3
LAB_005d0df5:
005D0DF5  68 DF 05 00 00            PUSH 0x5df
005D0DFA  68 58 D2 7C 00            PUSH 0x7cd258
005D0DFF  6A 00                     PUSH 0x0
005D0E01  56                        PUSH ESI
005D0E02  E8 39 50 0D 00            CALL 0x006a5e40
LAB_005d0e07:
005D0E07  5F                        POP EDI
005D0E08  5E                        POP ESI
005D0E09  5B                        POP EBX
005D0E0A  8B E5                     MOV ESP,EBP
005D0E0C  5D                        POP EBP
005D0E0D  C2 0C 00                  RET 0xc
