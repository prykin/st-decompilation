FUN_006c8990:
006C8990  55                        PUSH EBP
006C8991  8B EC                     MOV EBP,ESP
006C8993  83 EC 2C                  SUB ESP,0x2c
006C8996  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C8999  53                        PUSH EBX
006C899A  33 DB                     XOR EBX,EBX
006C899C  56                        PUSH ESI
006C899D  57                        PUSH EDI
006C899E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C89A1  3B C3                     CMP EAX,EBX
006C89A3  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006C89A6  74 09                     JZ 0x006c89b1
006C89A8  8B 00                     MOV EAX,dword ptr [EAX]
006C89AA  03 C7                     ADD EAX,EDI
006C89AC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C89AF  8B F8                     MOV EDI,EAX
LAB_006c89b1:
006C89B1  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006C89B4  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006C89B7  C6 45 FE 00               MOV byte ptr [EBP + -0x2],0x0
006C89BB  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
006C89C2  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
LAB_006c89c9:
006C89C9  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
006C89D0  7E 13                     JLE 0x006c89e5
006C89D2  33 C0                     XOR EAX,EAX
006C89D4  6A 08                     PUSH 0x8
006C89D6  8A 07                     MOV AL,byte ptr [EDI]
006C89D8  8B F0                     MOV ESI,EAX
006C89DA  56                        PUSH ESI
006C89DB  E8 30 7C 06 00            CALL 0x00730610
006C89E0  83 C4 08                  ADD ESP,0x8
006C89E3  EB 12                     JMP 0x006c89f7
LAB_006c89e5:
006C89E5  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
006C89EB  33 C9                     XOR ECX,ECX
006C89ED  8A 0F                     MOV CL,byte ptr [EDI]
006C89EF  8B F1                     MOV ESI,ECX
006C89F1  8A 04 72                  MOV AL,byte ptr [EDX + ESI*0x2]
006C89F4  83 E0 08                  AND EAX,0x8
LAB_006c89f7:
006C89F7  3B C3                     CMP EAX,EBX
006C89F9  74 03                     JZ 0x006c89fe
006C89FB  47                        INC EDI
006C89FC  EB CB                     JMP 0x006c89c9
LAB_006c89fe:
006C89FE  3B F3                     CMP ESI,EBX
006C8A00  0F 84 BE 01 00 00         JZ 0x006c8bc4
006C8A06  8B C6                     MOV EAX,ESI
006C8A08  83 E8 2B                  SUB EAX,0x2b
006C8A0B  74 12                     JZ 0x006c8a1f
006C8A0D  83 E8 02                  SUB EAX,0x2
006C8A10  75 14                     JNZ 0x006c8a26
006C8A12  47                        INC EDI
006C8A13  33 C0                     XOR EAX,EAX
006C8A15  C6 45 FE 01               MOV byte ptr [EBP + -0x2],0x1
006C8A19  8A 07                     MOV AL,byte ptr [EDI]
006C8A1B  8B F0                     MOV ESI,EAX
006C8A1D  EB 07                     JMP 0x006c8a26
LAB_006c8a1f:
006C8A1F  47                        INC EDI
006C8A20  33 C9                     XOR ECX,ECX
006C8A22  8A 0F                     MOV CL,byte ptr [EDI]
006C8A24  8B F1                     MOV ESI,ECX
LAB_006c8a26:
006C8A26  33 D2                     XOR EDX,EDX
006C8A28  B9 01 00 00 00            MOV ECX,0x1
006C8A2D  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
006C8A31  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006C8A34  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006C8A37  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_006c8a3a:
006C8A3A  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
006C8A41  7E 13                     JLE 0x006c8a56
006C8A43  6A 04                     PUSH 0x4
006C8A45  56                        PUSH ESI
006C8A46  E8 C5 7B 06 00            CALL 0x00730610
006C8A4B  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C8A4E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006C8A51  83 C4 08                  ADD ESP,0x8
006C8A54  EB 0B                     JMP 0x006c8a61
LAB_006c8a56:
006C8A56  A1 80 12 7F 00            MOV EAX,[0x007f1280]
006C8A5B  8A 04 70                  MOV AL,byte ptr [EAX + ESI*0x2]
006C8A5E  83 E0 04                  AND EAX,0x4
LAB_006c8a61:
006C8A61  85 C0                     TEST EAX,EAX
006C8A63  74 6C                     JZ 0x006c8ad1
006C8A65  81 FA CB CC CC 0C         CMP EDX,0xccccccb
006C8A6B  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
006C8A72  73 1B                     JNC 0x006c8a8f
006C8A74  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
006C8A77  8D 44 56 D0               LEA EAX,[ESI + EDX*0x2 + -0x30]
006C8A7B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006C8A7E  8B D0                     MOV EDX,EAX
006C8A80  0F BE 45 FF               MOVSX EAX,byte ptr [EBP + -0x1]
006C8A84  2B D8                     SUB EBX,EAX
006C8A86  47                        INC EDI
006C8A87  33 C0                     XOR EAX,EAX
006C8A89  8A 07                     MOV AL,byte ptr [EDI]
006C8A8B  8B F0                     MOV ESI,EAX
006C8A8D  EB AB                     JMP 0x006c8a3a
LAB_006c8a8f:
006C8A8F  81 F9 CB CC CC 0C         CMP ECX,0xccccccb
006C8A95  73 27                     JNC 0x006c8abe
006C8A97  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006C8A9A  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
006C8A9D  D1 E1                     SHL ECX,0x1
006C8A9F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006C8AA2  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006C8AA5  8D 44 46 D0               LEA EAX,[ESI + EAX*0x2 + -0x30]
006C8AA9  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006C8AAC  0F BE 45 FF               MOVSX EAX,byte ptr [EBP + -0x1]
006C8AB0  2B D8                     SUB EBX,EAX
006C8AB2  47                        INC EDI
006C8AB3  33 C0                     XOR EAX,EAX
006C8AB5  8A 07                     MOV AL,byte ptr [EDI]
006C8AB7  8B F0                     MOV ESI,EAX
006C8AB9  E9 7C FF FF FF            JMP 0x006c8a3a
LAB_006c8abe:
006C8ABE  0F BE 45 FF               MOVSX EAX,byte ptr [EBP + -0x1]
006C8AC2  43                        INC EBX
006C8AC3  2B D8                     SUB EBX,EAX
006C8AC5  47                        INC EDI
006C8AC6  33 C0                     XOR EAX,EAX
006C8AC8  8A 07                     MOV AL,byte ptr [EDI]
006C8ACA  8B F0                     MOV ESI,EAX
006C8ACC  E9 69 FF FF FF            JMP 0x006c8a3a
LAB_006c8ad1:
006C8AD1  83 FE 2E                  CMP ESI,0x2e
006C8AD4  75 1E                     JNZ 0x006c8af4
006C8AD6  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
006C8AD9  84 C0                     TEST AL,AL
006C8ADB  75 17                     JNZ 0x006c8af4
006C8ADD  47                        INC EDI
006C8ADE  33 C0                     XOR EAX,EAX
006C8AE0  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
006C8AE4  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
006C8AEB  8A 07                     MOV AL,byte ptr [EDI]
006C8AED  8B F0                     MOV ESI,EAX
006C8AEF  E9 46 FF FF FF            JMP 0x006c8a3a
LAB_006c8af4:
006C8AF4  33 C0                     XOR EAX,EAX
006C8AF6  39 45 F4                  CMP dword ptr [EBP + -0xc],EAX
006C8AF9  0F 84 C5 00 00 00         JZ 0x006c8bc4
006C8AFF  83 FE 65                  CMP ESI,0x65
006C8B02  74 09                     JZ 0x006c8b0d
006C8B04  83 FE 45                  CMP ESI,0x45
006C8B07  0F 85 F7 00 00 00         JNZ 0x006c8c04
LAB_006c8b0d:
006C8B0D  47                        INC EDI
006C8B0E  33 C9                     XOR ECX,ECX
006C8B10  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
006C8B14  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
006C8B1B  8A 0F                     MOV CL,byte ptr [EDI]
006C8B1D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C8B20  8B F1                     MOV ESI,ECX
006C8B22  8B C6                     MOV EAX,ESI
006C8B24  83 E8 2B                  SUB EAX,0x2b
006C8B27  74 15                     JZ 0x006c8b3e
006C8B29  83 E8 02                  SUB EAX,0x2
006C8B2C  75 1A                     JNZ 0x006c8b48
006C8B2E  47                        INC EDI
006C8B2F  33 D2                     XOR EDX,EDX
006C8B31  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
006C8B35  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C8B38  8A 17                     MOV DL,byte ptr [EDI]
006C8B3A  8B F2                     MOV ESI,EDX
006C8B3C  EB 0A                     JMP 0x006c8b48
LAB_006c8b3e:
006C8B3E  47                        INC EDI
006C8B3F  33 C0                     XOR EAX,EAX
006C8B41  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C8B44  8A 07                     MOV AL,byte ptr [EDI]
006C8B46  8B F0                     MOV ESI,EAX
LAB_006c8b48:
006C8B48  33 FF                     XOR EDI,EDI
006C8B4A  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_006c8b4d:
006C8B4D  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
006C8B54  7E 0D                     JLE 0x006c8b63
006C8B56  6A 04                     PUSH 0x4
006C8B58  56                        PUSH ESI
006C8B59  E8 B2 7A 06 00            CALL 0x00730610
006C8B5E  83 C4 08                  ADD ESP,0x8
006C8B61  EB 0C                     JMP 0x006c8b6f
LAB_006c8b63:
006C8B63  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
006C8B69  8A 04 71                  MOV AL,byte ptr [ECX + ESI*0x2]
006C8B6C  83 E0 04                  AND EAX,0x4
LAB_006c8b6f:
006C8B6F  85 C0                     TEST EAX,EAX
006C8B71  74 74                     JZ 0x006c8be7
006C8B73  B9 64 01 00 00            MOV ECX,0x164
006C8B78  B8 67 66 66 66            MOV EAX,0x66666667
006C8B7D  2B CE                     SUB ECX,ESI
006C8B7F  F7 E9                     IMUL ECX
006C8B81  C1 FA 02                  SAR EDX,0x2
006C8B84  8B C2                     MOV EAX,EDX
006C8B86  C1 E8 1F                  SHR EAX,0x1f
006C8B89  03 D0                     ADD EDX,EAX
006C8B8B  3B FA                     CMP EDI,EDX
006C8B8D  7F 1D                     JG 0x006c8bac
006C8B8F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006C8B92  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
006C8B95  40                        INC EAX
006C8B96  33 D2                     XOR EDX,EDX
006C8B98  8D 7C 4E D0               LEA EDI,[ESI + ECX*0x2 + -0x30]
006C8B9C  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
006C8BA3  8A 10                     MOV DL,byte ptr [EAX]
006C8BA5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C8BA8  8B F2                     MOV ESI,EDX
006C8BAA  EB A1                     JMP 0x006c8b4d
LAB_006c8bac:
006C8BAC  C7 45 D4 FF FF FF FF      MOV dword ptr [EBP + -0x2c],0xffffffff
006C8BB3  C7 45 D8 FF FF EF 7F      MOV dword ptr [EBP + -0x28],0x7fefffff
006C8BBA  C7 45 F0 C4 FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffc4
LAB_006c8bc1:
006C8BC1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006c8bc4:
006C8BC4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C8BC7  85 C0                     TEST EAX,EAX
006C8BC9  74 05                     JZ 0x006c8bd0
006C8BCB  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006C8BCE  89 10                     MOV dword ptr [EAX],EDX
LAB_006c8bd0:
006C8BD0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C8BD3  85 C0                     TEST EAX,EAX
006C8BD5  0F 85 47 01 00 00         JNZ 0x006c8d22
006C8BDB  C7 45 F0 FC FF FF FF      MOV dword ptr [EBP + -0x10],0xfffffffc
006C8BE2  E9 47 01 00 00            JMP 0x006c8d2e
LAB_006c8be7:
006C8BE7  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
006C8BEA  84 C0                     TEST AL,AL
006C8BEC  74 02                     JZ 0x006c8bf0
006C8BEE  F7 DF                     NEG EDI
LAB_006c8bf0:
006C8BF0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C8BF3  03 DF                     ADD EBX,EDI
006C8BF5  85 C0                     TEST EAX,EAX
006C8BF7  74 C8                     JZ 0x006c8bc1
006C8BF9  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006C8BFC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C8BFF  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006C8C02  33 C0                     XOR EAX,EAX
LAB_006c8c04:
006C8C04  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006C8C07  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C8C0A  DF 6D D4                  FILD qword ptr [EBP + -0x2c]
006C8C0D  83 F9 01                  CMP ECX,0x1
006C8C10  DD 5D D4                  FSTP double ptr [EBP + -0x2c]
006C8C13  74 24                     JZ 0x006c8c39
006C8C15  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C8C18  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006C8C1B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006C8C1E  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
006C8C25  DF 6D E4                  FILD qword ptr [EBP + -0x1c]
006C8C28  DC 4D D4                  FMUL double ptr [EBP + -0x2c]
006C8C2B  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C8C2E  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C8C31  DF 6D D4                  FILD qword ptr [EBP + -0x2c]
006C8C34  DE C1                     FADDP
006C8C36  DD 5D D4                  FSTP double ptr [EBP + -0x2c]
LAB_006c8c39:
006C8C39  DD 45 D4                  FLD double ptr [EBP + -0x2c]
006C8C3C  DC 1D 70 D6 79 00         FCOMP double ptr [0x0079d670]
006C8C42  DF E0                     FNSTSW AX
006C8C44  F6 C4 40                  TEST AH,0x40
006C8C47  0F 85 77 FF FF FF         JNZ 0x006c8bc4
006C8C4D  33 F6                     XOR ESI,ESI
006C8C4F  B9 00 01 00 00            MOV ECX,0x100
006C8C54  85 DB                     TEST EBX,EBX
006C8C56  7E 39                     JLE 0x006c8c91
006C8C58  BA FC E0 7E 00            MOV EDX,0x7ee0fc
LAB_006c8c5d:
006C8C5D  3B D9                     CMP EBX,ECX
006C8C5F  7C 24                     JL 0x006c8c85
006C8C61  DD 05 30 DA 79 00         FLD double ptr [0x0079da30]
006C8C67  DC 32                     FDIV double ptr [EDX]
LAB_006c8c69:
006C8C69  DD 45 D4                  FLD double ptr [EBP + -0x2c]
006C8C6C  D8 D9                     FCOMP
006C8C6E  DF E0                     FNSTSW AX
006C8C70  F6 C4 01                  TEST AH,0x1
006C8C73  74 5C                     JZ 0x006c8cd1
006C8C75  DD 45 D4                  FLD double ptr [EBP + -0x2c]
006C8C78  DC 0A                     FMUL double ptr [EDX]
006C8C7A  2B D9                     SUB EBX,ECX
006C8C7C  3B D9                     CMP EBX,ECX
006C8C7E  DD 5D D4                  FSTP double ptr [EBP + -0x2c]
006C8C81  7D E6                     JGE 0x006c8c69
006C8C83  DD D8                     FSTP ST0
LAB_006c8c85:
006C8C85  D1 F9                     SAR ECX,0x1
006C8C87  46                        INC ESI
006C8C88  83 C2 08                  ADD EDX,0x8
006C8C8B  85 DB                     TEST EBX,EBX
006C8C8D  7F CE                     JG 0x006c8c5d
006C8C8F  85 DB                     TEST EBX,EBX
LAB_006c8c91:
006C8C91  7D 6F                     JGE 0x006c8d02
006C8C93  8D 34 F5 AC E0 7E 00      LEA ESI,[ESI*0x8 + 0x7ee0ac]
LAB_006c8c9a:
006C8C9A  8B D1                     MOV EDX,ECX
006C8C9C  F7 DA                     NEG EDX
006C8C9E  3B DA                     CMP EBX,EDX
006C8CA0  7F 24                     JG 0x006c8cc6
006C8CA2  DD 05 28 DA 79 00         FLD double ptr [0x0079da28]
006C8CA8  DC 36                     FDIV double ptr [ESI]
LAB_006c8caa:
006C8CAA  DD 45 D4                  FLD double ptr [EBP + -0x2c]
006C8CAD  D8 D9                     FCOMP
006C8CAF  DF E0                     FNSTSW AX
006C8CB1  F6 C4 01                  TEST AH,0x1
006C8CB4  75 37                     JNZ 0x006c8ced
006C8CB6  DD 45 D4                  FLD double ptr [EBP + -0x2c]
006C8CB9  DC 0E                     FMUL double ptr [ESI]
006C8CBB  03 D9                     ADD EBX,ECX
006C8CBD  3B DA                     CMP EBX,EDX
006C8CBF  DD 5D D4                  FSTP double ptr [EBP + -0x2c]
006C8CC2  7E E6                     JLE 0x006c8caa
006C8CC4  DD D8                     FSTP ST0
LAB_006c8cc6:
006C8CC6  D1 F9                     SAR ECX,0x1
006C8CC8  83 C6 08                  ADD ESI,0x8
006C8CCB  85 DB                     TEST EBX,EBX
006C8CCD  7C CB                     JL 0x006c8c9a
006C8CCF  EB 31                     JMP 0x006c8d02
LAB_006c8cd1:
006C8CD1  DD D8                     FSTP ST0
006C8CD3  C7 45 D4 FF FF FF FF      MOV dword ptr [EBP + -0x2c],0xffffffff
006C8CDA  C7 45 D8 FF FF EF 7F      MOV dword ptr [EBP + -0x28],0x7fefffff
006C8CE1  C7 45 F0 C4 FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffc4
006C8CE8  E9 D7 FE FF FF            JMP 0x006c8bc4
LAB_006c8ced:
006C8CED  DD D8                     FSTP ST0
006C8CEF  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
006C8CF6  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
006C8CFD  E9 C2 FE FF FF            JMP 0x006c8bc4
LAB_006c8d02:
006C8D02  DD 45 D4                  FLD double ptr [EBP + -0x2c]
006C8D05  DC 1D 30 DA 79 00         FCOMP double ptr [0x0079da30]
006C8D0B  DF E0                     FNSTSW AX
006C8D0D  F6 C4 40                  TEST AH,0x40
006C8D10  0F 84 AE FE FF FF         JZ 0x006c8bc4
006C8D16  C7 45 F0 C4 FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffc4
006C8D1D  E9 A2 FE FF FF            JMP 0x006c8bc4
LAB_006c8d22:
006C8D22  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C8D25  85 C0                     TEST EAX,EAX
006C8D27  74 05                     JZ 0x006c8d2e
006C8D29  2B 7D 08                  SUB EDI,dword ptr [EBP + 0x8]
006C8D2C  89 38                     MOV dword ptr [EAX],EDI
LAB_006c8d2e:
006C8D2E  8A 45 FE                  MOV AL,byte ptr [EBP + -0x2]
006C8D31  5F                        POP EDI
006C8D32  5E                        POP ESI
006C8D33  5B                        POP EBX
006C8D34  84 C0                     TEST AL,AL
006C8D36  74 08                     JZ 0x006c8d40
006C8D38  DD 45 D4                  FLD double ptr [EBP + -0x2c]
006C8D3B  D9 E0                     FCHS
006C8D3D  DD 5D D4                  FSTP double ptr [EBP + -0x2c]
LAB_006c8d40:
006C8D40  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006C8D43  85 C0                     TEST EAX,EAX
006C8D45  74 17                     JZ 0x006c8d5e
006C8D47  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C8D4D  68 F0 00 00 00            PUSH 0xf0
006C8D52  68 44 E1 7E 00            PUSH 0x7ee144
006C8D57  51                        PUSH ECX
006C8D58  50                        PUSH EAX
006C8D59  E8 E2 D0 FD FF            CALL 0x006a5e40
LAB_006c8d5e:
006C8D5E  DD 45 D4                  FLD double ptr [EBP + -0x2c]
006C8D61  8B E5                     MOV ESP,EBP
006C8D63  5D                        POP EBP
006C8D64  C2 0C 00                  RET 0xc
