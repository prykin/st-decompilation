FUN_006d7d9a:
006D7D9A  C8 50 00 00               ENTER 0x50,0x0
006D7D9E  53                        PUSH EBX
006D7D9F  56                        PUSH ESI
006D7DA0  57                        PUSH EDI
006D7DA1  FC                        CLD
006D7DA2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D7DA5  8B 46 42                  MOV EAX,dword ptr [ESI + 0x42]
006D7DA8  89 45 BA                  MOV dword ptr [EBP + -0x46],EAX
006D7DAB  8B 46 46                  MOV EAX,dword ptr [ESI + 0x46]
006D7DAE  89 45 B6                  MOV dword ptr [EBP + -0x4a],EAX
006D7DB1  8B 46 22                  MOV EAX,dword ptr [ESI + 0x22]
006D7DB4  89 45 C2                  MOV dword ptr [EBP + -0x3e],EAX
006D7DB7  8B 46 26                  MOV EAX,dword ptr [ESI + 0x26]
006D7DBA  89 45 BE                  MOV dword ptr [EBP + -0x42],EAX
006D7DBD  8A 5E 18                  MOV BL,byte ptr [ESI + 0x18]
006D7DC0  88 5D B1                  MOV byte ptr [EBP + -0x4f],BL
006D7DC3  C6 46 17 00               MOV byte ptr [ESI + 0x17],0x0
006D7DC7  33 C0                     XOR EAX,EAX
006D7DC9  89 45 B2                  MOV dword ptr [EBP + -0x4e],EAX
006D7DCC  88 45 D7                  MOV byte ptr [EBP + -0x29],AL
006D7DCF  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
006D7DD2  89 45 DA                  MOV dword ptr [EBP + -0x26],EAX
006D7DD5  88 45 D9                  MOV byte ptr [EBP + -0x27],AL
006D7DD8  89 45 CE                  MOV dword ptr [EBP + -0x32],EAX
006D7DDB  40                        INC EAX
006D7DDC  0A DB                     OR BL,BL
006D7DDE  74 02                     JZ 0x006d7de2
006D7DE0  B0 08                     MOV AL,0x8
LAB_006d7de2:
006D7DE2  89 45 CA                  MOV dword ptr [EBP + -0x36],EAX
006D7DE5  B8 01 41 00 00            MOV EAX,0x4101
006D7DEA  03 45 C2                  ADD EAX,dword ptr [EBP + -0x3e]
006D7DED  50                        PUSH EAX
006D7DEE  E8 2E AD D2 FF            CALL 0x00402b21
006D7DF3  83 C4 04                  ADD ESP,0x4
006D7DF6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D7DF9  0B C0                     OR EAX,EAX
006D7DFB  B8 FE FF FF FF            MOV EAX,0xfffffffe
006D7E00  0F 84 AE 01 00 00         JZ 0x006d7fb4
006D7E06  8D 5D F3                  LEA EBX,[EBP + -0xd]
006D7E09  B8 01 00 00 00            MOV EAX,0x1
006D7E0E  50                        PUSH EAX
006D7E0F  53                        PUSH EBX
006D7E10  FF 75 08                  PUSH dword ptr [EBP + 0x8]
006D7E13  FF 55 BA                  CALL dword ptr [EBP + -0x46]
006D7E16  83 F8 01                  CMP EAX,0x1
006D7E19  0F 85 95 01 00 00         JNZ 0x006d7fb4
006D7E1F  8A 4D F3                  MOV CL,byte ptr [EBP + -0xd]
006D7E22  80 F9 02                  CMP CL,0x2
006D7E25  0F 82 84 01 00 00         JC 0x006d7faf
006D7E2B  80 F9 09                  CMP CL,0x9
006D7E2E  0F 87 7B 01 00 00         JA 0x006d7faf
006D7E34  D3 E0                     SHL EAX,CL
006D7E36  89 45 EA                  MOV dword ptr [EBP + -0x16],EAX
006D7E39  D1 E0                     SHL EAX,0x1
006D7E3B  89 45 DE                  MOV dword ptr [EBP + -0x22],EAX
006D7E3E  D1 E8                     SHR EAX,0x1
006D7E40  40                        INC EAX
006D7E41  89 45 E6                  MOV dword ptr [EBP + -0x1a],EAX
006D7E44  40                        INC EAX
006D7E45  89 45 EE                  MOV dword ptr [EBP + -0x12],EAX
006D7E48  89 45 E2                  MOV dword ptr [EBP + -0x1e],EAX
006D7E4B  41                        INC ECX
006D7E4C  88 4D F2                  MOV byte ptr [EBP + -0xe],CL
006D7E4F  8B 45 C2                  MOV EAX,dword ptr [EBP + -0x3e]
006D7E52  89 45 C6                  MOV dword ptr [EBP + -0x3a],EAX
006D7E55  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D7E58  05 00 41 00 00            ADD EAX,0x4100
006D7E5D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006d7e60:
006D7E60  E8 D1 01 00 00            CALL 0x006d8036
006D7E65  0B C0                     OR EAX,EAX
006D7E67  0F 8C 47 01 00 00         JL 0x006d7fb4
006D7E6D  3B 45 E6                  CMP EAX,dword ptr [EBP + -0x1a]
006D7E70  75 05                     JNZ 0x006d7e77
006D7E72  E9 34 01 00 00            JMP 0x006d7fab
LAB_006d7e77:
006D7E77  3B 45 EA                  CMP EAX,dword ptr [EBP + -0x16]
006D7E7A  75 1F                     JNZ 0x006d7e9b
006D7E7C  89 45 DA                  MOV dword ptr [EBP + -0x26],EAX
006D7E7F  8A 4D F3                  MOV CL,byte ptr [EBP + -0xd]
006D7E82  41                        INC ECX
006D7E83  88 4D F2                  MOV byte ptr [EBP + -0xe],CL
006D7E86  B8 01 00 00 00            MOV EAX,0x1
006D7E8B  D3 E0                     SHL EAX,CL
006D7E8D  89 45 DE                  MOV dword ptr [EBP + -0x22],EAX
006D7E90  8B 45 E2                  MOV EAX,dword ptr [EBP + -0x1e]
006D7E93  89 45 EE                  MOV dword ptr [EBP + -0x12],EAX
006D7E96  E9 0B 01 00 00            JMP 0x006d7fa6
LAB_006d7e9b:
006D7E9B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006D7E9E  81 C6 FF 0F 00 00         ADD ESI,0xfff
006D7EA4  8B 55 DA                  MOV EDX,dword ptr [EBP + -0x26]
006D7EA7  3B 55 EA                  CMP EDX,dword ptr [EBP + -0x16]
006D7EAA  75 0B                     JNZ 0x006d7eb7
006D7EAC  88 45 D9                  MOV byte ptr [EBP + -0x27],AL
006D7EAF  89 45 DA                  MOV dword ptr [EBP + -0x26],EAX
006D7EB2  88 06                     MOV byte ptr [ESI],AL
006D7EB4  4E                        DEC ESI
006D7EB5  EB 70                     JMP 0x006d7f27
LAB_006d7eb7:
006D7EB7  8B D8                     MOV EBX,EAX
006D7EB9  3B 45 EE                  CMP EAX,dword ptr [EBP + -0x12]
006D7EBC  7C 0F                     JL 0x006d7ecd
006D7EBE  0F 8F EB 00 00 00         JG 0x006d7faf
006D7EC4  8B 5D DA                  MOV EBX,dword ptr [EBP + -0x26]
006D7EC7  8A 55 D9                  MOV DL,byte ptr [EBP + -0x27]
006D7ECA  88 16                     MOV byte ptr [ESI],DL
006D7ECC  4E                        DEC ESI
LAB_006d7ecd:
006D7ECD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006d7ed0:
006D7ED0  3B 5D E2                  CMP EBX,dword ptr [EBP + -0x1e]
006D7ED3  7C 16                     JL 0x006d7eeb
006D7ED5  8A 94 1F 00 10 00 00      MOV DL,byte ptr [EDI + EBX*0x1 + 0x1000]
006D7EDC  88 16                     MOV byte ptr [ESI],DL
006D7EDE  4E                        DEC ESI
006D7EDF  D1 E3                     SHL EBX,0x1
006D7EE1  0F B7 9C 1F 00 20 00 00   MOVZX EBX,word ptr [EDI + EBX*0x1 + 0x2000]
006D7EE9  EB E5                     JMP 0x006d7ed0
LAB_006d7eeb:
006D7EEB  88 1E                     MOV byte ptr [ESI],BL
006D7EED  4E                        DEC ESI
006D7EEE  8B 4D EE                  MOV ECX,dword ptr [EBP + -0x12]
006D7EF1  88 5D D9                  MOV byte ptr [EBP + -0x27],BL
006D7EF4  88 9C 0F 00 10 00 00      MOV byte ptr [EDI + ECX*0x1 + 0x1000],BL
006D7EFB  D1 E1                     SHL ECX,0x1
006D7EFD  8B 55 DA                  MOV EDX,dword ptr [EBP + -0x26]
006D7F00  66 89 94 0F 00 20 00 00   MOV word ptr [EDI + ECX*0x1 + 0x2000],DX
006D7F08  D1 E9                     SHR ECX,0x1
006D7F0A  41                        INC ECX
006D7F0B  89 4D EE                  MOV dword ptr [EBP + -0x12],ECX
006D7F0E  89 45 DA                  MOV dword ptr [EBP + -0x26],EAX
006D7F11  3B 4D DE                  CMP ECX,dword ptr [EBP + -0x22]
006D7F14  7C 11                     JL 0x006d7f27
006D7F16  80 7D F2 0C               CMP byte ptr [EBP + -0xe],0xc
006D7F1A  7D 0B                     JGE 0x006d7f27
006D7F1C  8B 45 DE                  MOV EAX,dword ptr [EBP + -0x22]
006D7F1F  D1 E0                     SHL EAX,0x1
006D7F21  89 45 DE                  MOV dword ptr [EBP + -0x22],EAX
006D7F24  FE 45 F2                  INC byte ptr [EBP + -0xe]
LAB_006d7f27:
006D7F27  46                        INC ESI
006D7F28  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D7F2B  81 C2 00 10 00 00         ADD EDX,0x1000
006D7F31  2B D6                     SUB EDX,ESI
LAB_006d7f33:
006D7F33  0B D2                     OR EDX,EDX
006D7F35  74 6F                     JZ 0x006d7fa6
006D7F37  8B CA                     MOV ECX,EDX
006D7F39  3B 55 C6                  CMP EDX,dword ptr [EBP + -0x3a]
006D7F3C  7E 03                     JLE 0x006d7f41
006D7F3E  8B 4D C6                  MOV ECX,dword ptr [EBP + -0x3a]
LAB_006d7f41:
006D7F41  2B D1                     SUB EDX,ECX
006D7F43  29 4D C6                  SUB dword ptr [EBP + -0x3a],ECX
006D7F46  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006D7F49  F3 A4                     MOVSB.REP ES:EDI,ESI
006D7F4B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006D7F4E  7F 54                     JG 0x006d7fa4
006D7F50  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D7F53  05 00 41 00 00            ADD EAX,0x4100
006D7F58  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D7F5B  52                        PUSH EDX
006D7F5C  FF 75 CE                  PUSH dword ptr [EBP + -0x32]
006D7F5F  50                        PUSH EAX
006D7F60  FF 75 08                  PUSH dword ptr [EBP + 0x8]
006D7F63  FF 55 B6                  CALL dword ptr [EBP + -0x4a]
006D7F66  5A                        POP EDX
006D7F67  0B C0                     OR EAX,EAX
006D7F69  75 49                     JNZ 0x006d7fb4
006D7F6B  8B 45 C2                  MOV EAX,dword ptr [EBP + -0x3e]
006D7F6E  89 45 C6                  MOV dword ptr [EBP + -0x3a],EAX
006D7F71  8B 45 CA                  MOV EAX,dword ptr [EBP + -0x36]
006D7F74  01 45 CE                  ADD dword ptr [EBP + -0x32],EAX
006D7F77  80 7D B1 00               CMP byte ptr [EBP + -0x4f],0x0
006D7F7B  74 27                     JZ 0x006d7fa4
006D7F7D  8B 45 CE                  MOV EAX,dword ptr [EBP + -0x32]
006D7F80  3B 45 BE                  CMP EAX,dword ptr [EBP + -0x42]
006D7F83  7C 1F                     JL 0x006d7fa4
006D7F85  FF 45 B2                  INC dword ptr [EBP + -0x4e]
006D7F88  8B 5D B2                  MOV EBX,dword ptr [EBP + -0x4e]
006D7F8B  D1 E3                     SHL EBX,0x1
006D7F8D  66 8B 83 90 7D 6D 00      MOV AX,word ptr [EBX + 0x6d7d90]
006D7F94  8A DC                     MOV BL,AH
006D7F96  66 98                     CBW
006D7F98  66 89 45 CE               MOV word ptr [EBP + -0x32],AX
006D7F9C  8A C3                     MOV AL,BL
006D7F9E  66 98                     CBW
006D7FA0  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
LAB_006d7fa4:
006D7FA4  EB 8D                     JMP 0x006d7f33
LAB_006d7fa6:
006D7FA6  E9 B5 FE FF FF            JMP 0x006d7e60
LAB_006d7fab:
006D7FAB  33 C0                     XOR EAX,EAX
006D7FAD  EB 17                     JMP 0x006d7fc6
LAB_006d7faf:
006D7FAF  B8 FB FF FF FF            MOV EAX,0xfffffffb
LAB_006d7fb4:
006D7FB4  83 F8 FF                  CMP EAX,-0x1
006D7FB7  75 04                     JNZ 0x006d7fbd
006D7FB9  EB 0B                     JMP 0x006d7fc6
LAB_006d7fbd:
006D7FBD  0B C0                     OR EAX,EAX
006D7FBF  7C 05                     JL 0x006d7fc6
006D7FC1  B8 FB FF FF FF            MOV EAX,0xfffffffb
LAB_006d7fc6:
006D7FC6  8B F0                     MOV ESI,EAX
006D7FC8  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
006D7FCB  E8 BA DD D2 FF            CALL 0x00405d8a
006D7FD0  83 C4 04                  ADD ESP,0x4
006D7FD3  8B C6                     MOV EAX,ESI
006D7FD5  5F                        POP EDI
006D7FD6  5E                        POP ESI
006D7FD7  5B                        POP EBX
006D7FD8  C9                        LEAVE
006D7FD9  C3                        RET
