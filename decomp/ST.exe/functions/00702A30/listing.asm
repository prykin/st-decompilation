FUN_00702a30:
00702A30  55                        PUSH EBP
00702A31  8B EC                     MOV EBP,ESP
00702A33  83 EC 0C                  SUB ESP,0xc
00702A36  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00702A39  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00702A43  48                        DEC EAX
00702A44  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00702A47  0F 88 82 05 00 00         JS 0x00702fcf
00702A4D  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
00702A50  53                        PUSH EBX
00702A51  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702A54  56                        PUSH ESI
00702A55  57                        PUSH EDI
00702A56  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
LAB_00702a59:
00702A59  F6 C2 01                  TEST DL,0x1
00702A5C  75 4E                     JNZ 0x00702aac
LAB_00702a5e:
00702A5E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00702A61  48                        DEC EAX
00702A62  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00702A65  78 42                     JS 0x00702aa9
00702A67  33 C0                     XOR EAX,EAX
00702A69  8A 03                     MOV AL,byte ptr [EBX]
00702A6B  43                        INC EBX
00702A6C  85 C0                     TEST EAX,EAX
00702A6E  74 2C                     JZ 0x00702a9c
00702A70  8B CF                     MOV ECX,EDI
LAB_00702a72:
00702A72  A8 80                     TEST AL,0x80
00702A74  74 16                     JZ 0x00702a8c
00702A76  A8 40                     TEST AL,0x40
00702A78  74 06                     JZ 0x00702a80
00702A7A  43                        INC EBX
00702A7B  83 E0 3F                  AND EAX,0x3f
00702A7E  EB 0F                     JMP 0x00702a8f
LAB_00702a80:
00702A80  8B F0                     MOV ESI,EAX
00702A82  83 E6 3F                  AND ESI,0x3f
00702A85  03 DE                     ADD EBX,ESI
00702A87  83 E0 3F                  AND EAX,0x3f
00702A8A  EB 03                     JMP 0x00702a8f
LAB_00702a8c:
00702A8C  83 E0 7F                  AND EAX,0x7f
LAB_00702a8f:
00702A8F  2B C8                     SUB ECX,EAX
00702A91  85 C9                     TEST ECX,ECX
00702A93  7E 07                     JLE 0x00702a9c
00702A95  33 C0                     XOR EAX,EAX
00702A97  8A 03                     MOV AL,byte ptr [EBX]
00702A99  43                        INC EBX
00702A9A  EB D6                     JMP 0x00702a72
LAB_00702a9c:
00702A9C  42                        INC EDX
00702A9D  83 FA 04                  CMP EDX,0x4
00702AA0  7E 02                     JLE 0x00702aa4
00702AA2  33 D2                     XOR EDX,EDX
LAB_00702aa4:
00702AA4  F6 C2 01                  TEST DL,0x1
00702AA7  74 B5                     JZ 0x00702a5e
LAB_00702aa9:
00702AA9  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
LAB_00702aac:
00702AAC  33 C0                     XOR EAX,EAX
00702AAE  8A 03                     MOV AL,byte ptr [EBX]
00702AB0  43                        INC EBX
00702AB1  85 C0                     TEST EAX,EAX
00702AB3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00702AB6  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702AB9  0F 84 D1 04 00 00         JZ 0x00702f90
00702ABF  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00702AC2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00702AC5  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00702AC8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00702ACB  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00702ACE  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00702ad1:
00702AD1  A8 80                     TEST AL,0x80
00702AD3  74 20                     JZ 0x00702af5
00702AD5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702AD8  83 E0 3F                  AND EAX,0x3f
00702ADB  3B C3                     CMP EAX,EBX
00702ADD  7F 38                     JG 0x00702b17
00702ADF  F6 45 F8 40               TEST byte ptr [EBP + -0x8],0x40
00702AE3  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702AE6  74 06                     JZ 0x00702aee
00702AE8  43                        INC EBX
00702AE9  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702AEC  EB 11                     JMP 0x00702aff
LAB_00702aee:
00702AEE  03 D8                     ADD EBX,EAX
00702AF0  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702AF3  EB 0A                     JMP 0x00702aff
LAB_00702af5:
00702AF5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702AF8  83 E0 7F                  AND EAX,0x7f
00702AFB  3B C3                     CMP EAX,EBX
00702AFD  7F 18                     JG 0x00702b17
LAB_00702aff:
00702AFF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702B02  2B D8                     SUB EBX,EAX
00702B04  33 C0                     XOR EAX,EAX
00702B06  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00702B09  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702B0C  8A 03                     MOV AL,byte ptr [EBX]
00702B0E  43                        INC EBX
00702B0F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00702B12  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702B15  EB BA                     JMP 0x00702ad1
LAB_00702b17:
00702B17  2B C3                     SUB EAX,EBX
00702B19  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00702B1C  81 E3 C0 00 00 00         AND EBX,0xc0
00702B22  80 FB 80                  CMP BL,0x80
00702B25  75 06                     JNZ 0x00702b2d
00702B27  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702B2A  01 5D 24                  ADD dword ptr [EBP + 0x24],EBX
LAB_00702b2d:
00702B2D  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00702B30  3B C3                     CMP EAX,EBX
00702B32  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00702B35  0F 8F EC 02 00 00         JG 0x00702e27
00702B3B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00702B3E  81 E3 80 00 00 00         AND EBX,0x80
00702B44  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_00702b47:
00702B47  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702B4A  2B D8                     SUB EBX,EAX
00702B4C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00702B4F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00702B52  85 DB                     TEST EBX,EBX
00702B54  0F 84 70 02 00 00         JZ 0x00702dca
00702B5A  F6 45 F8 40               TEST byte ptr [EBP + -0x8],0x40
00702B5E  0F 84 15 01 00 00         JZ 0x00702c79
00702B64  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702B67  43                        INC EBX
00702B68  85 C9                     TEST ECX,ECX
00702B6A  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702B6D  7E 76                     JLE 0x00702be5
00702B6F  8D 59 FF                  LEA EBX,[ECX + -0x1]
00702B72  83 FB 03                  CMP EBX,0x3
00702B75  77 6E                     JA 0x00702be5
switchD_00702b77::switchD:
00702B77  FF 24 9D 14 31 70 00      JMP dword ptr [EBX*0x4 + 0x703114]
switchD_00702b77::caseD_1:
00702B7E  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702B81  33 C9                     XOR ECX,ECX
00702B83  66 8B 0A                  MOV CX,word ptr [EDX]
00702B86  3B D9                     CMP EBX,ECX
00702B88  77 0C                     JA 0x00702b96
00702B8A  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702B8D  33 C9                     XOR ECX,ECX
00702B8F  8A 0F                     MOV CL,byte ptr [EDI]
00702B91  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702B94  88 0E                     MOV byte ptr [ESI],CL
LAB_00702b96:
00702B96  83 C2 02                  ADD EDX,0x2
00702B99  46                        INC ESI
00702B9A  47                        INC EDI
00702B9B  48                        DEC EAX
00702B9C  85 C0                     TEST EAX,EAX
00702B9E  B9 02 00 00 00            MOV ECX,0x2
00702BA3  0F 8E 3F 02 00 00         JLE 0x00702de8
switchD_00702b77::caseD_2:
00702BA9  48                        DEC EAX
00702BAA  B9 03 00 00 00            MOV ECX,0x3
00702BAF  85 C0                     TEST EAX,EAX
00702BB1  0F 8E 31 02 00 00         JLE 0x00702de8
switchD_00702b77::caseD_3:
00702BB7  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702BBA  33 C9                     XOR ECX,ECX
00702BBC  66 8B 0A                  MOV CX,word ptr [EDX]
00702BBF  3B D9                     CMP EBX,ECX
00702BC1  77 0C                     JA 0x00702bcf
00702BC3  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702BC6  33 C9                     XOR ECX,ECX
00702BC8  8A 0F                     MOV CL,byte ptr [EDI]
00702BCA  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702BCD  88 0E                     MOV byte ptr [ESI],CL
LAB_00702bcf:
00702BCF  83 C2 02                  ADD EDX,0x2
00702BD2  46                        INC ESI
00702BD3  47                        INC EDI
00702BD4  48                        DEC EAX
00702BD5  85 C0                     TEST EAX,EAX
00702BD7  B9 04 00 00 00            MOV ECX,0x4
00702BDC  0F 8E 06 02 00 00         JLE 0x00702de8
switchD_00702b77::caseD_4:
00702BE2  33 C9                     XOR ECX,ECX
00702BE4  48                        DEC EAX
switchD_00702b77::default:
00702BE5  85 C0                     TEST EAX,EAX
00702BE7  0F 8E FB 01 00 00         JLE 0x00702de8
00702BED  48                        DEC EAX
00702BEE  B9 01 00 00 00            MOV ECX,0x1
00702BF3  85 C0                     TEST EAX,EAX
00702BF5  0F 8E ED 01 00 00         JLE 0x00702de8
LAB_00702bfb:
00702BFB  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702BFE  33 C9                     XOR ECX,ECX
00702C00  66 8B 0A                  MOV CX,word ptr [EDX]
00702C03  3B D9                     CMP EBX,ECX
00702C05  77 0C                     JA 0x00702c13
00702C07  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702C0A  33 C9                     XOR ECX,ECX
00702C0C  8A 0F                     MOV CL,byte ptr [EDI]
00702C0E  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702C11  88 0E                     MOV byte ptr [ESI],CL
LAB_00702c13:
00702C13  83 C2 02                  ADD EDX,0x2
00702C16  46                        INC ESI
00702C17  47                        INC EDI
00702C18  48                        DEC EAX
00702C19  85 C0                     TEST EAX,EAX
00702C1B  B9 02 00 00 00            MOV ECX,0x2
00702C20  0F 8E C2 01 00 00         JLE 0x00702de8
00702C26  48                        DEC EAX
00702C27  B9 03 00 00 00            MOV ECX,0x3
00702C2C  85 C0                     TEST EAX,EAX
00702C2E  0F 8E B4 01 00 00         JLE 0x00702de8
00702C34  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702C37  33 C9                     XOR ECX,ECX
00702C39  66 8B 0A                  MOV CX,word ptr [EDX]
00702C3C  3B D9                     CMP EBX,ECX
00702C3E  77 0C                     JA 0x00702c4c
00702C40  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702C43  33 C9                     XOR ECX,ECX
00702C45  8A 0F                     MOV CL,byte ptr [EDI]
00702C47  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702C4A  88 0E                     MOV byte ptr [ESI],CL
LAB_00702c4c:
00702C4C  83 C2 02                  ADD EDX,0x2
00702C4F  46                        INC ESI
00702C50  47                        INC EDI
00702C51  48                        DEC EAX
00702C52  85 C0                     TEST EAX,EAX
00702C54  B9 04 00 00 00            MOV ECX,0x4
00702C59  0F 8E 89 01 00 00         JLE 0x00702de8
00702C5F  33 C9                     XOR ECX,ECX
00702C61  48                        DEC EAX
00702C62  85 C0                     TEST EAX,EAX
00702C64  0F 8E 7E 01 00 00         JLE 0x00702de8
00702C6A  48                        DEC EAX
00702C6B  B9 01 00 00 00            MOV ECX,0x1
00702C70  85 C0                     TEST EAX,EAX
00702C72  7F 87                     JG 0x00702bfb
00702C74  E9 6F 01 00 00            JMP 0x00702de8
LAB_00702c79:
00702C79  85 C9                     TEST ECX,ECX
00702C7B  0F 8E 96 00 00 00         JLE 0x00702d17
00702C81  8D 59 FF                  LEA EBX,[ECX + -0x1]
00702C84  83 FB 03                  CMP EBX,0x3
00702C87  0F 87 8A 00 00 00         JA 0x00702d17
switchD_00702c8d::switchD:
00702C8D  FF 24 9D 24 31 70 00      JMP dword ptr [EBX*0x4 + 0x703124]
switchD_00702c8d::caseD_1:
00702C94  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702C97  33 C9                     XOR ECX,ECX
00702C99  66 8B 0A                  MOV CX,word ptr [EDX]
00702C9C  3B D9                     CMP EBX,ECX
00702C9E  77 0C                     JA 0x00702cac
00702CA0  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702CA3  33 C9                     XOR ECX,ECX
00702CA5  8A 0F                     MOV CL,byte ptr [EDI]
00702CA7  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702CAA  88 0E                     MOV byte ptr [ESI],CL
LAB_00702cac:
00702CAC  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702CAF  83 C2 02                  ADD EDX,0x2
00702CB2  46                        INC ESI
00702CB3  47                        INC EDI
00702CB4  41                        INC ECX
00702CB5  48                        DEC EAX
00702CB6  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702CB9  B9 02 00 00 00            MOV ECX,0x2
00702CBE  85 C0                     TEST EAX,EAX
00702CC0  0F 8E 22 01 00 00         JLE 0x00702de8
switchD_00702c8d::caseD_2:
00702CC6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702CC9  41                        INC ECX
00702CCA  48                        DEC EAX
00702CCB  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702CCE  B9 03 00 00 00            MOV ECX,0x3
00702CD3  85 C0                     TEST EAX,EAX
00702CD5  0F 8E 0D 01 00 00         JLE 0x00702de8
switchD_00702c8d::caseD_3:
00702CDB  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702CDE  33 C9                     XOR ECX,ECX
00702CE0  66 8B 0A                  MOV CX,word ptr [EDX]
00702CE3  3B D9                     CMP EBX,ECX
00702CE5  77 0C                     JA 0x00702cf3
00702CE7  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702CEA  33 C9                     XOR ECX,ECX
00702CEC  8A 0F                     MOV CL,byte ptr [EDI]
00702CEE  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702CF1  88 0E                     MOV byte ptr [ESI],CL
LAB_00702cf3:
00702CF3  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702CF6  83 C2 02                  ADD EDX,0x2
00702CF9  46                        INC ESI
00702CFA  47                        INC EDI
00702CFB  41                        INC ECX
00702CFC  48                        DEC EAX
00702CFD  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702D00  B9 04 00 00 00            MOV ECX,0x4
00702D05  85 C0                     TEST EAX,EAX
00702D07  0F 8E DB 00 00 00         JLE 0x00702de8
switchD_00702c8d::caseD_4:
00702D0D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702D10  41                        INC ECX
00702D11  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702D14  33 C9                     XOR ECX,ECX
00702D16  48                        DEC EAX
switchD_00702c8d::default:
00702D17  85 C0                     TEST EAX,EAX
00702D19  0F 8E C9 00 00 00         JLE 0x00702de8
00702D1F  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702D22  41                        INC ECX
00702D23  48                        DEC EAX
00702D24  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702D27  B9 01 00 00 00            MOV ECX,0x1
00702D2C  85 C0                     TEST EAX,EAX
00702D2E  0F 8E B4 00 00 00         JLE 0x00702de8
LAB_00702d34:
00702D34  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702D37  33 C9                     XOR ECX,ECX
00702D39  66 8B 0A                  MOV CX,word ptr [EDX]
00702D3C  3B D9                     CMP EBX,ECX
00702D3E  77 0C                     JA 0x00702d4c
00702D40  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702D43  33 C9                     XOR ECX,ECX
00702D45  8A 0F                     MOV CL,byte ptr [EDI]
00702D47  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702D4A  88 0E                     MOV byte ptr [ESI],CL
LAB_00702d4c:
00702D4C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702D4F  83 C2 02                  ADD EDX,0x2
00702D52  46                        INC ESI
00702D53  47                        INC EDI
00702D54  41                        INC ECX
00702D55  48                        DEC EAX
00702D56  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702D59  B9 02 00 00 00            MOV ECX,0x2
00702D5E  85 C0                     TEST EAX,EAX
00702D60  0F 8E 82 00 00 00         JLE 0x00702de8
00702D66  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702D69  41                        INC ECX
00702D6A  48                        DEC EAX
00702D6B  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702D6E  B9 03 00 00 00            MOV ECX,0x3
00702D73  85 C0                     TEST EAX,EAX
00702D75  7E 71                     JLE 0x00702de8
00702D77  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702D7A  33 C9                     XOR ECX,ECX
00702D7C  66 8B 0A                  MOV CX,word ptr [EDX]
00702D7F  3B D9                     CMP EBX,ECX
00702D81  77 0C                     JA 0x00702d8f
00702D83  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702D86  33 C9                     XOR ECX,ECX
00702D88  8A 0F                     MOV CL,byte ptr [EDI]
00702D8A  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702D8D  88 0E                     MOV byte ptr [ESI],CL
LAB_00702d8f:
00702D8F  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702D92  83 C2 02                  ADD EDX,0x2
00702D95  46                        INC ESI
00702D96  47                        INC EDI
00702D97  41                        INC ECX
00702D98  48                        DEC EAX
00702D99  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702D9C  B9 04 00 00 00            MOV ECX,0x4
00702DA1  85 C0                     TEST EAX,EAX
00702DA3  7E 43                     JLE 0x00702de8
00702DA5  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702DA8  41                        INC ECX
00702DA9  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702DAC  33 C9                     XOR ECX,ECX
00702DAE  48                        DEC EAX
00702DAF  85 C0                     TEST EAX,EAX
00702DB1  7E 35                     JLE 0x00702de8
00702DB3  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00702DB6  41                        INC ECX
00702DB7  48                        DEC EAX
00702DB8  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00702DBB  B9 01 00 00 00            MOV ECX,0x1
00702DC0  85 C0                     TEST EAX,EAX
00702DC2  0F 8F 6C FF FF FF         JG 0x00702d34
00702DC8  EB 1E                     JMP 0x00702de8
LAB_00702dca:
00702DCA  48                        DEC EAX
00702DCB  78 1B                     JS 0x00702de8
00702DCD  40                        INC EAX
LAB_00702dce:
00702DCE  8B D9                     MOV EBX,ECX
00702DD0  83 E3 01                  AND EBX,0x1
00702DD3  80 FB 01                  CMP BL,0x1
00702DD6  75 05                     JNZ 0x00702ddd
00702DD8  46                        INC ESI
00702DD9  47                        INC EDI
00702DDA  83 C2 02                  ADD EDX,0x2
LAB_00702ddd:
00702DDD  41                        INC ECX
00702DDE  83 F9 04                  CMP ECX,0x4
00702DE1  7E 02                     JLE 0x00702de5
00702DE3  33 C9                     XOR ECX,ECX
LAB_00702de5:
00702DE5  48                        DEC EAX
00702DE6  75 E6                     JNZ 0x00702dce
LAB_00702de8:
00702DE8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00702DEB  85 C0                     TEST EAX,EAX
00702DED  7E 36                     JLE 0x00702e25
00702DEF  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702DF2  33 C0                     XOR EAX,EAX
00702DF4  8A 03                     MOV AL,byte ptr [EBX]
00702DF6  8B D8                     MOV EBX,EAX
00702DF8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00702DFB  81 E3 80 00 00 00         AND EBX,0x80
00702E01  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00702E04  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702E07  43                        INC EBX
00702E08  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702E0B  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00702E0E  85 DB                     TEST EBX,EBX
00702E10  74 05                     JZ 0x00702e17
00702E12  83 E0 3F                  AND EAX,0x3f
00702E15  EB 03                     JMP 0x00702e1a
LAB_00702e17:
00702E17  83 E0 7F                  AND EAX,0x7f
LAB_00702e1a:
00702E1A  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
00702E1D  0F 8E 24 FD FF FF         JLE 0x00702b47
00702E23  EB 02                     JMP 0x00702e27
LAB_00702e25:
00702E25  33 C0                     XOR EAX,EAX
LAB_00702e27:
00702E27  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00702E2A  2B C3                     SUB EAX,EBX
00702E2C  85 DB                     TEST EBX,EBX
00702E2E  0F 8E 03 01 00 00         JLE 0x00702f37
00702E34  8A 5D F8                  MOV BL,byte ptr [EBP + -0x8]
00702E37  F6 C3 80                  TEST BL,0x80
00702E3A  0F 84 F7 00 00 00         JZ 0x00702f37
00702E40  F6 C3 40                  TEST BL,0x40
00702E43  0F 84 8C 01 00 00         JZ 0x00702fd5
00702E49  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702E4C  43                        INC EBX
00702E4D  85 C9                     TEST ECX,ECX
00702E4F  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00702E52  7E 7B                     JLE 0x00702ecf
00702E54  49                        DEC ECX
00702E55  83 F9 03                  CMP ECX,0x3
00702E58  77 75                     JA 0x00702ecf
switchD_00702e5a::switchD:
00702E5A  FF 24 8D 34 31 70 00      JMP dword ptr [ECX*0x4 + 0x703134]
switchD_00702e5a::caseD_1:
00702E61  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702E64  33 C9                     XOR ECX,ECX
00702E66  66 8B 0A                  MOV CX,word ptr [EDX]
00702E69  3B D9                     CMP EBX,ECX
00702E6B  77 0C                     JA 0x00702e79
00702E6D  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702E70  33 C9                     XOR ECX,ECX
00702E72  8A 0F                     MOV CL,byte ptr [EDI]
00702E74  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702E77  88 0E                     MOV byte ptr [ESI],CL
LAB_00702e79:
00702E79  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702E7C  83 C2 02                  ADD EDX,0x2
00702E7F  46                        INC ESI
00702E80  47                        INC EDI
00702E81  49                        DEC ECX
00702E82  85 C9                     TEST ECX,ECX
00702E84  0F 8E AD 00 00 00         JLE 0x00702f37
00702E8A  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
LAB_00702e8d:
00702E8D  49                        DEC ECX
00702E8E  85 C9                     TEST ECX,ECX
00702E90  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00702E93  0F 8E A1 00 00 00         JLE 0x00702f3a
switchD_00702e5a::caseD_3:
00702E99  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702E9C  33 C9                     XOR ECX,ECX
00702E9E  66 8B 0A                  MOV CX,word ptr [EDX]
00702EA1  3B D9                     CMP EBX,ECX
00702EA3  77 0C                     JA 0x00702eb1
00702EA5  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702EA8  33 C9                     XOR ECX,ECX
00702EAA  8A 0F                     MOV CL,byte ptr [EDI]
00702EAC  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702EAF  88 0E                     MOV byte ptr [ESI],CL
LAB_00702eb1:
00702EB1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702EB4  83 C2 02                  ADD EDX,0x2
00702EB7  46                        INC ESI
00702EB8  47                        INC EDI
00702EB9  49                        DEC ECX
00702EBA  85 C9                     TEST ECX,ECX
00702EBC  7E 79                     JLE 0x00702f37
00702EBE  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00702EC1  49                        DEC ECX
00702EC2  EB 0E                     JMP 0x00702ed2
switchD_00702e5a::caseD_2:
00702EC4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702EC7  EB C4                     JMP 0x00702e8d
switchD_00702e5a::caseD_4:
00702EC9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702ECC  49                        DEC ECX
00702ECD  EB 03                     JMP 0x00702ed2
LAB_00702ecf:
00702ECF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
switchD_00702e5a::default:
00702ED2  85 C9                     TEST ECX,ECX
00702ED4  7E 64                     JLE 0x00702f3a
00702ED6  49                        DEC ECX
00702ED7  85 C9                     TEST ECX,ECX
00702ED9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00702EDC  7E 5C                     JLE 0x00702f3a
LAB_00702ede:
00702EDE  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702EE1  33 C9                     XOR ECX,ECX
00702EE3  66 8B 0A                  MOV CX,word ptr [EDX]
00702EE6  3B D9                     CMP EBX,ECX
00702EE8  77 0C                     JA 0x00702ef6
00702EEA  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702EED  33 C9                     XOR ECX,ECX
00702EEF  8A 0F                     MOV CL,byte ptr [EDI]
00702EF1  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702EF4  88 0E                     MOV byte ptr [ESI],CL
LAB_00702ef6:
00702EF6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702EF9  83 C2 02                  ADD EDX,0x2
00702EFC  46                        INC ESI
00702EFD  83 E9 02                  SUB ECX,0x2
00702F00  47                        INC EDI
00702F01  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00702F04  85 C9                     TEST ECX,ECX
00702F06  7E 2F                     JLE 0x00702f37
00702F08  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702F0B  33 C9                     XOR ECX,ECX
00702F0D  66 8B 0A                  MOV CX,word ptr [EDX]
00702F10  3B D9                     CMP EBX,ECX
00702F12  77 0C                     JA 0x00702f20
00702F14  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702F17  33 C9                     XOR ECX,ECX
00702F19  8A 0F                     MOV CL,byte ptr [EDI]
00702F1B  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00702F1E  88 0E                     MOV byte ptr [ESI],CL
LAB_00702f20:
00702F20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00702F23  83 C2 02                  ADD EDX,0x2
00702F26  46                        INC ESI
00702F27  83 E9 02                  SUB ECX,0x2
00702F2A  47                        INC EDI
00702F2B  85 C9                     TEST ECX,ECX
00702F2D  7E 08                     JLE 0x00702f37
00702F2F  49                        DEC ECX
00702F30  85 C9                     TEST ECX,ECX
00702F32  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00702F35  7F A7                     JG 0x00702ede
LAB_00702f37:
00702F37  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
FUN_00702a30::cf_common_join_00702F3A:
00702F3A  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
00702F3D  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00702F40  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
00702F43  8B F7                     MOV ESI,EDI
00702F45  2B F1                     SUB ESI,ECX
00702F47  2B F2                     SUB ESI,EDX
00702F49  3B C6                     CMP EAX,ESI
00702F4B  7D 32                     JGE 0x00702f7f
LAB_00702f4d:
00702F4D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00702F50  2B F0                     SUB ESI,EAX
00702F52  81 E1 C0 00 00 00         AND ECX,0xc0
00702F58  80 F9 80                  CMP CL,0x80
00702F5B  75 02                     JNZ 0x00702f5f
00702F5D  03 D8                     ADD EBX,EAX
LAB_00702f5f:
00702F5F  33 C9                     XOR ECX,ECX
00702F61  8A 0B                     MOV CL,byte ptr [EBX]
00702F63  8B D1                     MOV EDX,ECX
00702F65  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00702F68  80 E2 80                  AND DL,0x80
00702F6B  43                        INC EBX
00702F6C  84 D2                     TEST DL,DL
00702F6E  8B C1                     MOV EAX,ECX
00702F70  74 09                     JZ 0x00702f7b
00702F72  83 E0 3F                  AND EAX,0x3f
00702F75  F6 C1 40                  TEST CL,0x40
00702F78  74 01                     JZ 0x00702f7b
00702F7A  43                        INC EBX
LAB_00702f7b:
00702F7B  3B C6                     CMP EAX,ESI
00702F7D  7C CE                     JL 0x00702f4d
LAB_00702f7f:
00702F7F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00702F82  25 C0 00 00 00            AND EAX,0xc0
00702F87  3C 80                     CMP AL,0x80
00702F89  75 02                     JNZ 0x00702f8d
00702F8B  03 DE                     ADD EBX,ESI
LAB_00702f8d:
00702F8D  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
LAB_00702f90:
00702F90  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00702F93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00702F96  03 C8                     ADD ECX,EAX
00702F98  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00702F9B  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00702F9E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00702FA1  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00702FA4  03 C1                     ADD EAX,ECX
00702FA6  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00702FA9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00702FAC  03 F0                     ADD ESI,EAX
00702FAE  42                        INC EDX
00702FAF  83 FA 04                  CMP EDX,0x4
00702FB2  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
00702FB5  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
00702FB8  7E 05                     JLE 0x00702fbf
00702FBA  33 D2                     XOR EDX,EDX
00702FBC  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
LAB_00702fbf:
00702FBF  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00702FC2  48                        DEC EAX
00702FC3  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00702FC6  0F 89 8D FA FF FF         JNS 0x00702a59
00702FCC  5F                        POP EDI
00702FCD  5E                        POP ESI
00702FCE  5B                        POP EBX
LAB_00702fcf:
00702FCF  8B E5                     MOV ESP,EBP
00702FD1  5D                        POP EBP
00702FD2  C2 3C 00                  RET 0x3c
LAB_00702fd5:
00702FD5  85 C9                     TEST ECX,ECX
00702FD7  0F 8E 91 00 00 00         JLE 0x0070306e
00702FDD  49                        DEC ECX
00702FDE  83 F9 03                  CMP ECX,0x3
00702FE1  0F 87 87 00 00 00         JA 0x0070306e
switchD_00702fe7::switchD:
00702FE7  FF 24 8D 44 31 70 00      JMP dword ptr [ECX*0x4 + 0x703144]
switchD_00702fe7::caseD_1:
00702FEE  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00702FF1  33 C9                     XOR ECX,ECX
00702FF3  66 8B 0A                  MOV CX,word ptr [EDX]
00702FF6  3B D9                     CMP EBX,ECX
00702FF8  77 0C                     JA 0x00703006
00702FFA  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00702FFD  33 C9                     XOR ECX,ECX
00702FFF  8A 0F                     MOV CL,byte ptr [EDI]
00703001  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703004  88 0E                     MOV byte ptr [ESI],CL
LAB_00703006:
00703006  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00703009  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070300C  83 C2 02                  ADD EDX,0x2
0070300F  46                        INC ESI
00703010  47                        INC EDI
00703011  43                        INC EBX
00703012  49                        DEC ECX
00703013  85 C9                     TEST ECX,ECX
00703015  0F 8E 1F FF FF FF         JLE 0x00702f3a
0070301B  EB 06                     JMP 0x00703023
switchD_00702fe7::caseD_2:
0070301D  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00703020  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00703023:
00703023  43                        INC EBX
00703024  49                        DEC ECX
00703025  85 C9                     TEST ECX,ECX
00703027  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
0070302A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070302D  0F 8E 07 FF FF FF         JLE 0x00702f3a
switchD_00702fe7::caseD_3:
00703033  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00703036  33 C9                     XOR ECX,ECX
00703038  66 8B 0A                  MOV CX,word ptr [EDX]
0070303B  3B D9                     CMP EBX,ECX
0070303D  77 0C                     JA 0x0070304b
0070303F  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00703042  33 C9                     XOR ECX,ECX
00703044  8A 0F                     MOV CL,byte ptr [EDI]
00703046  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00703049  88 0E                     MOV byte ptr [ESI],CL
LAB_0070304b:
0070304B  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0070304E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00703051  83 C2 02                  ADD EDX,0x2
00703054  46                        INC ESI
00703055  47                        INC EDI
00703056  43                        INC EBX
00703057  49                        DEC ECX
00703058  85 C9                     TEST ECX,ECX
0070305A  0F 8E DA FE FF FF         JLE 0x00702f3a
00703060  43                        INC EBX
00703061  49                        DEC ECX
00703062  EB 10                     JMP 0x00703074
switchD_00702fe7::caseD_4:
00703064  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00703067  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070306A  43                        INC EBX
0070306B  49                        DEC ECX
0070306C  EB 06                     JMP 0x00703074
LAB_0070306e:
0070306E  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
00703071  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
switchD_00702fe7::default:
00703074  85 C9                     TEST ECX,ECX
00703076  0F 8E BE FE FF FF         JLE 0x00702f3a
0070307C  43                        INC EBX
0070307D  49                        DEC ECX
0070307E  85 C9                     TEST ECX,ECX
00703080  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00703083  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00703086  0F 8E AE FE FF FF         JLE 0x00702f3a
LAB_0070308c:
0070308C  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0070308F  33 C9                     XOR ECX,ECX
00703091  66 8B 0A                  MOV CX,word ptr [EDX]
00703094  3B D9                     CMP EBX,ECX
00703096  77 0C                     JA 0x007030a4
00703098  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070309B  33 C9                     XOR ECX,ECX
0070309D  8A 0F                     MOV CL,byte ptr [EDI]
0070309F  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007030A2  88 0E                     MOV byte ptr [ESI],CL
LAB_007030a4:
007030A4  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007030A7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007030AA  83 C2 02                  ADD EDX,0x2
007030AD  46                        INC ESI
007030AE  47                        INC EDI
007030AF  43                        INC EBX
007030B0  49                        DEC ECX
007030B1  85 C9                     TEST ECX,ECX
007030B3  0F 8E 81 FE FF FF         JLE 0x00702f3a
007030B9  43                        INC EBX
007030BA  49                        DEC ECX
007030BB  85 C9                     TEST ECX,ECX
007030BD  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
007030C0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007030C3  0F 8E 71 FE FF FF         JLE 0x00702f3a
007030C9  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
007030CC  33 C9                     XOR ECX,ECX
007030CE  66 8B 0A                  MOV CX,word ptr [EDX]
007030D1  3B D9                     CMP EBX,ECX
007030D3  77 0C                     JA 0x007030e1
007030D5  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
007030D8  33 C9                     XOR ECX,ECX
007030DA  8A 0F                     MOV CL,byte ptr [EDI]
007030DC  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
007030DF  88 0E                     MOV byte ptr [ESI],CL
LAB_007030e1:
007030E1  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007030E4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007030E7  83 C2 02                  ADD EDX,0x2
007030EA  46                        INC ESI
007030EB  47                        INC EDI
007030EC  43                        INC EBX
007030ED  49                        DEC ECX
007030EE  85 C9                     TEST ECX,ECX
007030F0  0F 8E 44 FE FF FF         JLE 0x00702f3a
007030F6  43                        INC EBX
007030F7  49                        DEC ECX
007030F8  85 C9                     TEST ECX,ECX
007030FA  0F 8E 3A FE FF FF         JLE 0x00702f3a
00703100  43                        INC EBX
00703101  49                        DEC ECX
00703102  85 C9                     TEST ECX,ECX
00703104  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
00703107  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0070310A  7F 80                     JG 0x0070308c
0070310C  E9 29 FE FF FF            JMP 0x00702f3a
