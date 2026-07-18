FUN_00411cf0:
00411CF0  55                        PUSH EBP
00411CF1  8B EC                     MOV EBP,ESP
00411CF3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00411CF6  53                        PUSH EBX
00411CF7  56                        PUSH ESI
00411CF8  57                        PUSH EDI
00411CF9  8D 34 09                  LEA ESI,[ECX + ECX*0x1]
00411CFC  33 D2                     XOR EDX,EDX
00411CFE  8B FE                     MOV EDI,ESI
00411D00  BE 03 00 00 00            MOV ESI,0x3
00411D05  33 C0                     XOR EAX,EAX
00411D07  2B F7                     SUB ESI,EDI
00411D09  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_00411d0c:
00411D0C  8A DA                     MOV BL,DL
00411D0E  88 0F                     MOV byte ptr [EDI],CL
00411D10  F6 DB                     NEG BL
00411D12  88 5F 01                  MOV byte ptr [EDI + 0x1],BL
00411D15  40                        INC EAX
00411D16  83 C7 04                  ADD EDI,0x4
00411D19  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00411D1C  85 F6                     TEST ESI,ESI
00411D1E  7D 06                     JGE 0x00411d26
00411D20  8D 74 96 06               LEA ESI,[ESI + EDX*0x4 + 0x6]
00411D24  EB 09                     JMP 0x00411d2f
LAB_00411d26:
00411D26  8B DA                     MOV EBX,EDX
00411D28  2B D9                     SUB EBX,ECX
00411D2A  49                        DEC ECX
00411D2B  8D 74 9E 0A               LEA ESI,[ESI + EBX*0x4 + 0xa]
LAB_00411d2f:
00411D2F  42                        INC EDX
00411D30  3B D1                     CMP EDX,ECX
00411D32  7C D8                     JL 0x00411d0c
00411D34  8B F8                     MOV EDI,EAX
00411D36  75 14                     JNZ 0x00411d4c
00411D38  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
00411D3B  74 0F                     JZ 0x00411d4c
00411D3D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00411D40  F6 DA                     NEG DL
00411D42  88 0C 86                  MOV byte ptr [ESI + EAX*0x4],CL
00411D45  88 54 86 01               MOV byte ptr [ESI + EAX*0x4 + 0x1],DL
00411D49  40                        INC EAX
00411D4A  EB 03                     JMP 0x00411d4f
LAB_00411d4c:
00411D4C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00411d4f:
00411D4F  8D 57 FF                  LEA EDX,[EDI + -0x1]
00411D52  85 D2                     TEST EDX,EDX
00411D54  7E 20                     JLE 0x00411d76
00411D56  8D 0C 86                  LEA ECX,[ESI + EAX*0x4]
00411D59  8D 3C 96                  LEA EDI,[ESI + EDX*0x4]
00411D5C  03 C2                     ADD EAX,EDX
LAB_00411d5e:
00411D5E  8A 5F 01                  MOV BL,byte ptr [EDI + 0x1]
00411D61  83 C1 04                  ADD ECX,0x4
00411D64  F6 DB                     NEG BL
00411D66  88 59 FC                  MOV byte ptr [ECX + -0x4],BL
00411D69  8A 1F                     MOV BL,byte ptr [EDI]
00411D6B  F6 DB                     NEG BL
00411D6D  88 59 FD                  MOV byte ptr [ECX + -0x3],BL
00411D70  83 EF 04                  SUB EDI,0x4
00411D73  4A                        DEC EDX
00411D74  75 E8                     JNZ 0x00411d5e
LAB_00411d76:
00411D76  85 C0                     TEST EAX,EAX
00411D78  8B D0                     MOV EDX,EAX
00411D7A  7E 26                     JLE 0x00411da2
00411D7C  8D 0C 86                  LEA ECX,[ESI + EAX*0x4]
00411D7F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00411D82  8B FE                     MOV EDI,ESI
00411D84  03 C0                     ADD EAX,EAX
LAB_00411d86:
00411D86  8A 5F 01                  MOV BL,byte ptr [EDI + 0x1]
00411D89  83 C7 04                  ADD EDI,0x4
00411D8C  88 19                     MOV byte ptr [ECX],BL
00411D8E  8A 5F FC                  MOV BL,byte ptr [EDI + -0x4]
00411D91  F6 DB                     NEG BL
00411D93  88 59 01                  MOV byte ptr [ECX + 0x1],BL
00411D96  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00411D99  83 C1 04                  ADD ECX,0x4
00411D9C  4B                        DEC EBX
00411D9D  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00411DA0  75 E4                     JNZ 0x00411d86
LAB_00411da2:
00411DA2  85 D2                     TEST EDX,EDX
00411DA4  7E 49                     JLE 0x00411def
00411DA6  8D 0C 86                  LEA ECX,[ESI + EAX*0x4]
00411DA9  8B FE                     MOV EDI,ESI
00411DAB  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00411DAE  03 C2                     ADD EAX,EDX
LAB_00411db0:
00411DB0  8A 1F                     MOV BL,byte ptr [EDI]
00411DB2  83 C1 04                  ADD ECX,0x4
00411DB5  F6 DB                     NEG BL
00411DB7  88 59 FC                  MOV byte ptr [ECX + -0x4],BL
00411DBA  8A 5F 01                  MOV BL,byte ptr [EDI + 0x1]
00411DBD  F6 DB                     NEG BL
00411DBF  88 59 FD                  MOV byte ptr [ECX + -0x3],BL
00411DC2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00411DC5  83 C7 04                  ADD EDI,0x4
00411DC8  4B                        DEC EBX
00411DC9  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00411DCC  75 E2                     JNZ 0x00411db0
00411DCE  85 D2                     TEST EDX,EDX
00411DD0  7E 1D                     JLE 0x00411def
00411DD2  8D 0C 86                  LEA ECX,[ESI + EAX*0x4]
00411DD5  8B FA                     MOV EDI,EDX
00411DD7  03 C2                     ADD EAX,EDX
LAB_00411dd9:
00411DD9  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
00411DDC  83 C1 04                  ADD ECX,0x4
00411DDF  F6 DA                     NEG DL
00411DE1  88 51 FC                  MOV byte ptr [ECX + -0x4],DL
00411DE4  8A 16                     MOV DL,byte ptr [ESI]
00411DE6  88 51 FD                  MOV byte ptr [ECX + -0x3],DL
00411DE9  83 C6 04                  ADD ESI,0x4
00411DEC  4F                        DEC EDI
00411DED  75 EA                     JNZ 0x00411dd9
LAB_00411def:
00411DEF  5F                        POP EDI
00411DF0  5E                        POP ESI
00411DF1  5B                        POP EBX
00411DF2  5D                        POP EBP
00411DF3  C2 08 00                  RET 0x8
