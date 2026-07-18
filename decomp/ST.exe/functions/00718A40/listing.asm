FUN_00718a40:
00718A40  55                        PUSH EBP
00718A41  8B EC                     MOV EBP,ESP
00718A43  83 EC 6C                  SUB ESP,0x6c
00718A46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00718A4B  53                        PUSH EBX
00718A4C  56                        PUSH ESI
00718A4D  57                        PUSH EDI
00718A4E  8D 55 98                  LEA EDX,[EBP + -0x68]
00718A51  8D 4D 94                  LEA ECX,[EBP + -0x6c]
00718A54  6A 00                     PUSH 0x0
00718A56  52                        PUSH EDX
00718A57  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00718A5A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00718A60  E8 8B 4D 01 00            CALL 0x0072d7f0
00718A65  8B F0                     MOV ESI,EAX
00718A67  83 C4 08                  ADD ESP,0x8
00718A6A  85 F6                     TEST ESI,ESI
00718A6C  0F 85 92 02 00 00         JNZ 0x00718d04
00718A72  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00718A75  85 C0                     TEST EAX,EAX
00718A77  75 0D                     JNZ 0x00718a86
00718A79  68 00 00 01 00            PUSH 0x10000
00718A7E  E8 ED 21 F9 FF            CALL 0x006aac70
00718A83  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_00718a86:
00718A86  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00718A89  B9 00 40 00 00            MOV ECX,0x4000
00718A8E  33 C0                     XOR EAX,EAX
00718A90  F3 AB                     STOSD.REP ES:EDI
00718A92  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00718A95  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00718A98  03 C1                     ADD EAX,ECX
00718A9A  3B C8                     CMP ECX,EAX
00718A9C  0F 8D 50 02 00 00         JGE 0x00718cf2
00718AA2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00718AA5  81 E2 FF 00 00 00         AND EDX,0xff
00718AAB  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00718AAE  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00718AB1  DB 45 F8                  FILD dword ptr [EBP + -0x8]
00718AB4  81 E2 FF 00 00 00         AND EDX,0xff
00718ABA  2B C1                     SUB EAX,ECX
00718ABC  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00718ABF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00718AC2  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00718AC5  DB 45 F8                  FILD dword ptr [EBP + -0x8]
00718AC8  8D 7C 8A 02               LEA EDI,[EDX + ECX*0x4 + 0x2]
00718ACC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00718ACF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00718AD2  D9 5D EC                  FSTP float ptr [EBP + -0x14]
00718AD5  EB 03                     JMP 0x00718ada
LAB_00718ad7:
00718AD7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00718ada:
00718ADA  8A 4F FE                  MOV CL,byte ptr [EDI + -0x2]
00718ADD  8A C1                     MOV AL,CL
00718ADF  81 E1 FF 00 00 00         AND ECX,0xff
00718AE5  C0 E8 03                  SHR AL,0x3
00718AE8  81 E1 07 00 00 80         AND ECX,0x80000007
00718AEE  66 0F B6 C0               MOVZX AX,AL
00718AF2  79 05                     JNS 0x00718af9
00718AF4  49                        DEC ECX
00718AF5  83 C9 F8                  OR ECX,0xfffffff8
00718AF8  41                        INC ECX
LAB_00718af9:
00718AF9  83 F9 04                  CMP ECX,0x4
00718AFC  7C 07                     JL 0x00718b05
00718AFE  66 3D 1E 00               CMP AX,0x1e
00718B02  73 01                     JNC 0x00718b05
00718B04  40                        INC EAX
LAB_00718b05:
00718B05  8A 57 FF                  MOV DL,byte ptr [EDI + -0x1]
00718B08  8A CA                     MOV CL,DL
00718B0A  C0 E9 03                  SHR CL,0x3
00718B0D  66 0F B6 F1               MOVZX SI,CL
00718B11  8B CA                     MOV ECX,EDX
00718B13  81 E1 FF 00 00 00         AND ECX,0xff
00718B19  81 E1 07 00 00 80         AND ECX,0x80000007
00718B1F  79 05                     JNS 0x00718b26
00718B21  49                        DEC ECX
00718B22  83 C9 F8                  OR ECX,0xfffffff8
00718B25  41                        INC ECX
LAB_00718b26:
00718B26  83 F9 04                  CMP ECX,0x4
00718B29  7C 07                     JL 0x00718b32
00718B2B  66 83 FE 1E               CMP SI,0x1e
00718B2F  73 01                     JNC 0x00718b32
00718B31  46                        INC ESI
LAB_00718b32:
00718B32  8A 0F                     MOV CL,byte ptr [EDI]
00718B34  8A D9                     MOV BL,CL
00718B36  C0 EB 03                  SHR BL,0x3
00718B39  66 0F B6 FB               MOVZX DI,BL
00718B3D  8B D9                     MOV EBX,ECX
00718B3F  81 E3 FF 00 00 00         AND EBX,0xff
00718B45  81 E3 07 00 00 80         AND EBX,0x80000007
00718B4B  79 05                     JNS 0x00718b52
00718B4D  4B                        DEC EBX
00718B4E  83 CB F8                  OR EBX,0xfffffff8
00718B51  43                        INC EBX
LAB_00718b52:
00718B52  83 FB 04                  CMP EBX,0x4
00718B55  7C 07                     JL 0x00718b5e
00718B57  66 83 FF 1E               CMP DI,0x1e
00718B5B  73 01                     JNC 0x00718b5e
00718B5D  47                        INC EDI
LAB_00718b5e:
00718B5E  C1 E0 05                  SHL EAX,0x5
00718B61  0B C6                     OR EAX,ESI
00718B63  88 4D E6                  MOV byte ptr [EBP + -0x1a],CL
00718B66  C1 E0 05                  SHL EAX,0x5
00718B69  0B C7                     OR EAX,EDI
00718B6B  88 55 E5                  MOV byte ptr [EBP + -0x1b],DL
00718B6E  8B F8                     MOV EDI,EAX
00718B70  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00718B73  8D 4D D8                  LEA ECX,[EBP + -0x28]
00718B76  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00718B79  8A 40 FE                  MOV AL,byte ptr [EAX + -0x2]
00718B7C  51                        PUSH ECX
00718B7D  52                        PUSH EDX
00718B7E  88 45 E4                  MOV byte ptr [EBP + -0x1c],AL
00718B81  E8 AA F5 FF FF            CALL 0x00718130
00718B86  D9 45 D8                  FLD float ptr [EBP + -0x28]
00718B89  D8 1D 80 E2 79 00         FCOMP float ptr [0x0079e280]
00718B8F  83 C4 08                  ADD ESP,0x8
00718B92  DF E0                     FNSTSW AX
00718B94  F6 C4 40                  TEST AH,0x40
00718B97  74 05                     JZ 0x00718b9e
00718B99  D9 45 D8                  FLD float ptr [EBP + -0x28]
00718B9C  EB 17                     JMP 0x00718bb5
LAB_00718b9e:
00718B9E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00718BA1  25 FF 00 00 00            AND EAX,0xff
00718BA6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00718BA9  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00718BAC  D8 4D D8                  FMUL float ptr [EBP + -0x28]
00718BAF  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
LAB_00718bb5:
00718BB5  D9 5D D8                  FSTP float ptr [EBP + -0x28]
00718BB8  D9 45 F0                  FLD float ptr [EBP + -0x10]
00718BBB  D8 4D DC                  FMUL float ptr [EBP + -0x24]
00718BBE  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00718BC1  8D 55 D8                  LEA EDX,[EBP + -0x28]
00718BC4  51                        PUSH ECX
00718BC5  52                        PUSH EDX
00718BC6  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00718BCC  D9 5D DC                  FSTP float ptr [EBP + -0x24]
00718BCF  D9 45 EC                  FLD float ptr [EBP + -0x14]
00718BD2  D8 4D E0                  FMUL float ptr [EBP + -0x20]
00718BD5  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00718BDB  D9 5D E0                  FSTP float ptr [EBP + -0x20]
00718BDE  E8 DD F7 FF FF            CALL 0x007183c0
00718BE3  83 C4 08                  ADD ESP,0x8
00718BE6  85 C0                     TEST EAX,EAX
00718BE8  0F 85 9D 00 00 00         JNZ 0x00718c8b
00718BEE  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00718BF1  8A 45 E4                  MOV AL,byte ptr [EBP + -0x1c]
00718BF4  81 E1 FF 00 00 00         AND ECX,0xff
00718BFA  C0 E8 03                  SHR AL,0x3
00718BFD  81 E1 07 00 00 80         AND ECX,0x80000007
00718C03  66 0F B6 C0               MOVZX AX,AL
00718C07  79 05                     JNS 0x00718c0e
00718C09  49                        DEC ECX
00718C0A  83 C9 F8                  OR ECX,0xfffffff8
00718C0D  41                        INC ECX
LAB_00718c0e:
00718C0E  83 F9 04                  CMP ECX,0x4
00718C11  7C 07                     JL 0x00718c1a
00718C13  66 3D 1E 00               CMP AX,0x1e
00718C17  73 01                     JNC 0x00718c1a
00718C19  40                        INC EAX
LAB_00718c1a:
00718C1A  8B 4D E5                  MOV ECX,dword ptr [EBP + -0x1b]
00718C1D  8A 55 E5                  MOV DL,byte ptr [EBP + -0x1b]
00718C20  81 E1 FF 00 00 00         AND ECX,0xff
00718C26  C0 EA 03                  SHR DL,0x3
00718C29  81 E1 07 00 00 80         AND ECX,0x80000007
00718C2F  66 0F B6 D2               MOVZX DX,DL
00718C33  79 05                     JNS 0x00718c3a
00718C35  49                        DEC ECX
00718C36  83 C9 F8                  OR ECX,0xfffffff8
00718C39  41                        INC ECX
LAB_00718c3a:
00718C3A  83 F9 04                  CMP ECX,0x4
00718C3D  7C 07                     JL 0x00718c46
00718C3F  66 83 FA 1E               CMP DX,0x1e
00718C43  73 01                     JNC 0x00718c46
00718C45  42                        INC EDX
LAB_00718c46:
00718C46  8B 75 E6                  MOV ESI,dword ptr [EBP + -0x1a]
00718C49  8A 4D E6                  MOV CL,byte ptr [EBP + -0x1a]
00718C4C  81 E6 FF 00 00 00         AND ESI,0xff
00718C52  C0 E9 03                  SHR CL,0x3
00718C55  81 E6 07 00 00 80         AND ESI,0x80000007
00718C5B  66 0F B6 C9               MOVZX CX,CL
00718C5F  79 05                     JNS 0x00718c66
00718C61  4E                        DEC ESI
00718C62  83 CE F8                  OR ESI,0xfffffff8
00718C65  46                        INC ESI
LAB_00718c66:
00718C66  83 FE 04                  CMP ESI,0x4
00718C69  7C 07                     JL 0x00718c72
00718C6B  66 83 F9 1E               CMP CX,0x1e
00718C6F  73 01                     JNC 0x00718c72
00718C71  41                        INC ECX
LAB_00718c72:
00718C72  C1 E0 05                  SHL EAX,0x5
00718C75  0B C2                     OR EAX,EDX
00718C77  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00718C7A  C1 E0 05                  SHL EAX,0x5
00718C7D  0B C1                     OR EAX,ECX
00718C7F  81 E7 FF FF 00 00         AND EDI,0xffff
00718C85  66 89 04 7A               MOV word ptr [EDX + EDI*0x2],AX
00718C89  EB 25                     JMP 0x00718cb0
LAB_00718c8b:
00718C8B  68 78 07 7F 00            PUSH 0x7f0778
00718C90  68 CC 4C 7A 00            PUSH 0x7a4ccc
00718C95  6A 00                     PUSH 0x0
00718C97  6A 00                     PUSH 0x0
00718C99  68 0A 01 00 00            PUSH 0x10a
00718C9E  68 18 07 7F 00            PUSH 0x7f0718
00718CA3  E8 28 48 F9 FF            CALL 0x006ad4d0
00718CA8  83 C4 18                  ADD ESP,0x18
00718CAB  85 C0                     TEST EAX,EAX
00718CAD  74 01                     JZ 0x00718cb0
00718CAF  CC                        INT3
LAB_00718cb0:
00718CB0  E8 5E C0 CE FF            CALL 0x00404d13
00718CB5  85 C0                     TEST EAX,EAX
00718CB7  75 23                     JNZ 0x00718cdc
00718CB9  68 68 07 7F 00            PUSH 0x7f0768
00718CBE  68 CC 4C 7A 00            PUSH 0x7a4ccc
00718CC3  50                        PUSH EAX
00718CC4  50                        PUSH EAX
00718CC5  68 0D 01 00 00            PUSH 0x10d
00718CCA  68 18 07 7F 00            PUSH 0x7f0718
00718CCF  E8 FC 47 F9 FF            CALL 0x006ad4d0
00718CD4  83 C4 18                  ADD ESP,0x18
00718CD7  85 C0                     TEST EAX,EAX
00718CD9  74 01                     JZ 0x00718cdc
00718CDB  CC                        INT3
LAB_00718cdc:
00718CDC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00718CDF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00718CE2  83 C1 04                  ADD ECX,0x4
00718CE5  48                        DEC EAX
00718CE6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00718CE9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00718CEC  0F 85 E5 FD FF FF         JNZ 0x00718ad7
LAB_00718cf2:
00718CF2  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00718CF5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00718CFA  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00718CFD  5F                        POP EDI
00718CFE  5E                        POP ESI
00718CFF  5B                        POP EBX
00718D00  8B E5                     MOV ESP,EBP
00718D02  5D                        POP EBP
00718D03  C3                        RET
LAB_00718d04:
00718D04  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00718D07  68 4C 07 7F 00            PUSH 0x7f074c
00718D0C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00718D11  56                        PUSH ESI
00718D12  6A 00                     PUSH 0x0
00718D14  68 12 01 00 00            PUSH 0x112
00718D19  68 18 07 7F 00            PUSH 0x7f0718
00718D1E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00718D24  E8 A7 47 F9 FF            CALL 0x006ad4d0
00718D29  83 C4 18                  ADD ESP,0x18
00718D2C  85 C0                     TEST EAX,EAX
00718D2E  74 01                     JZ 0x00718d31
00718D30  CC                        INT3
LAB_00718d31:
00718D31  68 13 01 00 00            PUSH 0x113
00718D36  68 18 07 7F 00            PUSH 0x7f0718
00718D3B  6A 00                     PUSH 0x0
00718D3D  56                        PUSH ESI
00718D3E  E8 FD D0 F8 FF            CALL 0x006a5e40
00718D43  5F                        POP EDI
00718D44  5E                        POP ESI
00718D45  33 C0                     XOR EAX,EAX
00718D47  5B                        POP EBX
00718D48  8B E5                     MOV ESP,EBP
00718D4A  5D                        POP EBP
00718D4B  C3                        RET
