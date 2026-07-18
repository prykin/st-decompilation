CPanelTy::PaintNewDeep:
00500BD0  55                        PUSH EBP
00500BD1  8B EC                     MOV EBP,ESP
00500BD3  83 EC 5C                  SUB ESP,0x5c
00500BD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00500BDB  53                        PUSH EBX
00500BDC  56                        PUSH ESI
00500BDD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00500BE0  57                        PUSH EDI
00500BE1  8D 55 A8                  LEA EDX,[EBP + -0x58]
00500BE4  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00500BE7  6A 00                     PUSH 0x0
00500BE9  52                        PUSH EDX
00500BEA  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00500BED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00500BF3  E8 F8 CB 22 00            CALL 0x0072d7f0
00500BF8  8B F0                     MOV ESI,EAX
00500BFA  83 C4 08                  ADD ESP,0x8
00500BFD  85 F6                     TEST ESI,ESI
00500BFF  0F 85 BF 02 00 00         JNZ 0x00500ec4
00500C05  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00500C08  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_00500c0b:
00500C0B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00500C0E  25 FF 00 00 00            AND EAX,0xff
00500C13  8A 8C 30 A8 02 00 00      MOV CL,byte ptr [EAX + ESI*0x1 + 0x2a8]
00500C1A  8D 9C 30 A8 02 00 00      LEA EBX,[EAX + ESI*0x1 + 0x2a8]
00500C21  80 F9 FF                  CMP CL,0xff
00500C24  0F 84 7B 02 00 00         JZ 0x00500ea5
00500C2A  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
00500C2D  8B BC 86 AA 02 00 00      MOV EDI,dword ptr [ESI + EAX*0x4 + 0x2aa]
00500C34  8B D1                     MOV EDX,ECX
00500C36  2B D7                     SUB EDX,EDI
00500C38  81 FA C8 00 00 00         CMP EDX,0xc8
00500C3E  0F 82 61 02 00 00         JC 0x00500ea5
00500C44  89 8C 86 AA 02 00 00      MOV dword ptr [ESI + EAX*0x4 + 0x2aa],ECX
00500C4B  8A 8C 30 A6 02 00 00      MOV CL,byte ptr [EAX + ESI*0x1 + 0x2a6]
00500C52  8D 84 30 A6 02 00 00      LEA EAX,[EAX + ESI*0x1 + 0x2a6]
00500C59  FE C1                     INC CL
00500C5B  8A D1                     MOV DL,CL
00500C5D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00500C60  88 08                     MOV byte ptr [EAX],CL
00500C62  8B C2                     MOV EAX,EDX
00500C64  25 FF 00 00 00            AND EAX,0xff
00500C69  48                        DEC EAX
00500C6A  83 F8 04                  CMP EAX,0x4
00500C6D  77 5B                     JA 0x00500cca
switchD_00500c6f::switchD:
00500C6F  FF 24 85 0C 0F 50 00      JMP dword ptr [EAX*0x4 + 0x500f0c]
switchD_00500c6f::caseD_1:
00500C76  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00500C7C  80 F9 03                  CMP CL,0x3
00500C7F  75 21                     JNZ 0x00500ca2
00500C81  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500C84  84 C0                     TEST AL,AL
00500C86  74 0C                     JZ 0x00500c94
00500C88  8A 03                     MOV AL,byte ptr [EBX]
00500C8A  04 19                     ADD AL,0x19
00500C8C  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500C8F  E9 B0 00 00 00            JMP 0x00500d44
LAB_00500c94:
00500C94  8A 86 A8 02 00 00         MOV AL,byte ptr [ESI + 0x2a8]
00500C9A  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500C9D  E9 A2 00 00 00            JMP 0x00500d44
LAB_00500ca2:
00500CA2  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
00500CA6  E9 99 00 00 00            JMP 0x00500d44
switchD_00500c6f::caseD_2:
00500CAB  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00500CB1  80 F9 03                  CMP CL,0x3
00500CB4  0F 85 86 00 00 00         JNZ 0x00500d40
00500CBA  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500CBD  84 C0                     TEST AL,AL
00500CBF  74 72                     JZ 0x00500d33
00500CC1  8A 03                     MOV AL,byte ptr [EBX]
00500CC3  04 14                     ADD AL,0x14
00500CC5  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500CC8  EB 7A                     JMP 0x00500d44
switchD_00500c6f::default:
00500CCA  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500CCD  84 C0                     TEST AL,AL
00500CCF  74 0D                     JZ 0x00500cde
00500CD1  33 C9                     XOR ECX,ECX
00500CD3  8A 0B                     MOV CL,byte ptr [EBX]
00500CD5  8A 84 31 7B 0C 00 00      MOV AL,byte ptr [ECX + ESI*0x1 + 0xc7b]
00500CDC  EB 0F                     JMP 0x00500ced
LAB_00500cde:
00500CDE  33 C0                     XOR EAX,EAX
00500CE0  8A 86 A8 02 00 00         MOV AL,byte ptr [ESI + 0x2a8]
00500CE6  8A 84 30 8D 0B 00 00      MOV AL,byte ptr [EAX + ESI*0x1 + 0xb8d]
LAB_00500ced:
00500CED  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00500CF3  84 C0                     TEST AL,AL
00500CF5  74 27                     JZ 0x00500d1e
00500CF7  80 F9 03                  CMP CL,0x3
00500CFA  75 1B                     JNZ 0x00500d17
00500CFC  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500CFF  84 C0                     TEST AL,AL
00500D01  74 09                     JZ 0x00500d0c
00500D03  8A 03                     MOV AL,byte ptr [EBX]
00500D05  04 19                     ADD AL,0x19
00500D07  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500D0A  EB 38                     JMP 0x00500d44
LAB_00500d0c:
00500D0C  8A 86 A8 02 00 00         MOV AL,byte ptr [ESI + 0x2a8]
00500D12  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500D15  EB 2D                     JMP 0x00500d44
LAB_00500d17:
00500D17  32 C0                     XOR AL,AL
00500D19  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500D1C  EB 26                     JMP 0x00500d44
LAB_00500d1e:
00500D1E  80 F9 03                  CMP CL,0x3
00500D21  75 1D                     JNZ 0x00500d40
00500D23  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500D26  84 C0                     TEST AL,AL
00500D28  74 09                     JZ 0x00500d33
00500D2A  8A 03                     MOV AL,byte ptr [EBX]
00500D2C  04 14                     ADD AL,0x14
00500D2E  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500D31  EB 11                     JMP 0x00500d44
LAB_00500d33:
00500D33  8A 86 A8 02 00 00         MOV AL,byte ptr [ESI + 0x2a8]
00500D39  04 05                     ADD AL,0x5
00500D3B  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00500D3E  EB 04                     JMP 0x00500d44
LAB_00500d40:
00500D40  C6 45 FC 02               MOV byte ptr [EBP + -0x4],0x2
LAB_00500d44:
00500D44  80 FA 07                  CMP DL,0x7
00500D47  0F 83 4D 01 00 00         JNC 0x00500e9a
00500D4D  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500D50  80 F9 03                  CMP CL,0x3
00500D53  0F 85 B8 00 00 00         JNZ 0x00500e11
00500D59  84 C0                     TEST AL,AL
00500D5B  74 3C                     JZ 0x00500d99
00500D5D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00500D60  8B 86 A2 02 00 00         MOV EAX,dword ptr [ESI + 0x2a2]
00500D66  33 C9                     XOR ECX,ECX
00500D68  81 E2 FF 00 00 00         AND EDX,0xff
00500D6E  8A 0B                     MOV CL,byte ptr [EBX]
00500D70  52                        PUSH EDX
00500D71  50                        PUSH EAX
00500D72  8B F9                     MOV EDI,ECX
00500D74  E8 27 A6 20 00            CALL 0x0070b3a0
00500D79  8D 4C BF 05               LEA ECX,[EDI + EDI*0x4 + 0x5]
00500D7D  50                        PUSH EAX
00500D7E  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00500D81  6A 06                     PUSH 0x6
00500D83  8D 54 4F 01               LEA EDX,[EDI + ECX*0x2 + 0x1]
00500D87  52                        PUSH EDX
00500D88  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
00500D8E  8D 8C 47 87 00 00 00      LEA ECX,[EDI + EAX*0x2 + 0x87]
00500D95  51                        PUSH ECX
00500D96  52                        PUSH EDX
00500D97  EB 41                     JMP 0x00500dda
LAB_00500d99:
00500D99  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00500D9C  8B 96 A2 02 00 00         MOV EDX,dword ptr [ESI + 0x2a2]
00500DA2  33 C0                     XOR EAX,EAX
00500DA4  81 E1 FF 00 00 00         AND ECX,0xff
00500DAA  8A 86 A8 02 00 00         MOV AL,byte ptr [ESI + 0x2a8]
00500DB0  51                        PUSH ECX
00500DB1  52                        PUSH EDX
00500DB2  8B F8                     MOV EDI,EAX
00500DB4  E8 E7 A5 20 00            CALL 0x0070b3a0
00500DB9  50                        PUSH EAX
00500DBA  8D 44 BF 05               LEA EAX,[EDI + EDI*0x4 + 0x5]
00500DBE  6A 06                     PUSH 0x6
00500DC0  8D 4C 47 01               LEA ECX,[EDI + EAX*0x2 + 0x1]
00500DC4  B8 05 00 00 00            MOV EAX,0x5
00500DC9  2B C7                     SUB EAX,EDI
00500DCB  51                        PUSH ECX
00500DCC  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00500DD2  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00500DD5  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
00500DD8  50                        PUSH EAX
00500DD9  51                        PUSH ECX
LAB_00500dda:
00500DDA  E8 4A 24 F0 FF            CALL 0x00403229
00500DDF  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500DE2  83 C4 1C                  ADD ESP,0x1c
00500DE5  F6 D8                     NEG AL
00500DE7  1A C0                     SBB AL,AL
00500DE9  24 02                     AND AL,0x2
00500DEB  04 03                     ADD AL,0x3
00500DED  3C 0B                     CMP AL,0xb
00500DEF  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
00500DF2  0F 83 A2 00 00 00         JNC 0x00500e9a
00500DF8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00500DFB  25 FF 00 00 00            AND EAX,0xff
00500E00  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
00500E07  85 C9                     TEST ECX,ECX
00500E09  0F 8C 8B 00 00 00         JL 0x00500e9a
00500E0F  EB 6D                     JMP 0x00500e7e
LAB_00500e11:
00500E11  84 C0                     TEST AL,AL
00500E13  74 08                     JZ 0x00500e1d
00500E15  8B BE 98 01 00 00         MOV EDI,dword ptr [ESI + 0x198]
00500E1B  EB 06                     JMP 0x00500e23
LAB_00500e1d:
00500E1D  8B BE 88 01 00 00         MOV EDI,dword ptr [ESI + 0x188]
LAB_00500e23:
00500E23  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00500E26  8B 86 A2 02 00 00         MOV EAX,dword ptr [ESI + 0x2a2]
00500E2C  81 E2 FF 00 00 00         AND EDX,0xff
00500E32  52                        PUSH EDX
00500E33  50                        PUSH EAX
00500E34  E8 67 A5 20 00            CALL 0x0070b3a0
00500E39  50                        PUSH EAX
00500E3A  33 C0                     XOR EAX,EAX
00500E3C  8A 03                     MOV AL,byte ptr [EBX]
00500E3E  6A 01                     PUSH 0x1
00500E40  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00500E47  2B C8                     SUB ECX,EAX
00500E49  8D 54 88 06               LEA EDX,[EAX + ECX*0x4 + 0x6]
00500E4D  52                        PUSH EDX
00500E4E  6A 07                     PUSH 0x7
00500E50  57                        PUSH EDI
00500E51  E8 D3 23 F0 FF            CALL 0x00403229
00500E56  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500E59  83 C4 1C                  ADD ESP,0x1c
00500E5C  F6 D8                     NEG AL
00500E5E  1A C0                     SBB AL,AL
00500E60  24 04                     AND AL,0x4
00500E62  04 02                     ADD AL,0x2
00500E64  3C 0B                     CMP AL,0xb
00500E66  88 45 EC                  MOV byte ptr [EBP + -0x14],AL
00500E69  73 2F                     JNC 0x00500e9a
00500E6B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00500E6E  25 FF 00 00 00            AND EAX,0xff
00500E73  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
00500E7A  85 C9                     TEST ECX,ECX
00500E7C  7C 1C                     JL 0x00500e9a
LAB_00500e7e:
00500E7E  8B 94 86 94 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x94]
00500E85  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
00500E89  52                        PUSH EDX
00500E8A  50                        PUSH EAX
00500E8B  6A FF                     PUSH -0x1
00500E8D  51                        PUSH ECX
00500E8E  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00500E94  51                        PUSH ECX
00500E95  E8 A6 27 1B 00            CALL 0x006b3640
LAB_00500e9a:
00500E9A  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00500E9D  80 3A 05                  CMP byte ptr [EDX],0x5
00500EA0  76 03                     JBE 0x00500ea5
00500EA2  C6 03 FF                  MOV byte ptr [EBX],0xff
LAB_00500ea5:
00500EA5  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00500EA8  FE C0                     INC AL
00500EAA  3C 02                     CMP AL,0x2
00500EAC  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00500EAF  0F 82 56 FD FF FF         JC 0x00500c0b
00500EB5  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00500EB8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00500EBD  5F                        POP EDI
00500EBE  5E                        POP ESI
00500EBF  5B                        POP EBX
00500EC0  8B E5                     MOV ESP,EBP
00500EC2  5D                        POP EBP
00500EC3  C3                        RET
LAB_00500ec4:
00500EC4  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00500EC7  68 08 25 7C 00            PUSH 0x7c2508
00500ECC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00500ED1  56                        PUSH ESI
00500ED2  6A 00                     PUSH 0x0
00500ED4  68 26 02 00 00            PUSH 0x226
00500ED9  68 CC 23 7C 00            PUSH 0x7c23cc
00500EDE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00500EE4  E8 E7 C5 1A 00            CALL 0x006ad4d0
00500EE9  83 C4 18                  ADD ESP,0x18
00500EEC  85 C0                     TEST EAX,EAX
00500EEE  74 01                     JZ 0x00500ef1
00500EF0  CC                        INT3
LAB_00500ef1:
00500EF1  68 26 02 00 00            PUSH 0x226
00500EF6  68 CC 23 7C 00            PUSH 0x7c23cc
00500EFB  6A 00                     PUSH 0x0
00500EFD  56                        PUSH ESI
00500EFE  E8 3D 4F 1A 00            CALL 0x006a5e40
00500F03  5F                        POP EDI
00500F04  5E                        POP ESI
00500F05  5B                        POP EBX
00500F06  8B E5                     MOV ESP,EBP
00500F08  5D                        POP EBP
00500F09  C3                        RET
